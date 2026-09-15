#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800CEB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEB88: jal         0x800CE3E0
    // 0x800CEB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CEB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CEB90: lb          $t6, 0x12($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X12);
    // 0x800CEB94: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800CEB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEB9C: beql        $t6, $zero, L_800CEBD0
    if (ctx->r14 == 0) {
        // 0x800CEBA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800CEBD0;
    }
    goto skip_0;
    // 0x800CEBA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800CEBA4: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x800CEBA8: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800CEBAC: beql        $at, $zero, L_800CEBD0
    if (ctx->r1 == 0) {
        // 0x800CEBB0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800CEBD0;
    }
    goto skip_1;
    // 0x800CEBB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x800CEBB4: lh          $t8, 0xA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA);
    // 0x800CEBB8: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800CEBBC: bnel        $at, $zero, L_800CEBD0
    if (ctx->r1 != 0) {
        // 0x800CEBC0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800CEBD0;
    }
    goto skip_2;
    // 0x800CEBC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x800CEBC4: b           L_800CEBD0
    // 0x800CEBC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CEBD0;
    // 0x800CEBC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CEBCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CEBD0:
    // 0x800CEBD0: jr          $ra
    // 0x800CEBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800CEBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800CEBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEBD8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CEBDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CEBE0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800CEBE4: jal         0x800F54E4
    // 0x800CEBE8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800CEBE8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CEBEC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800CEBF0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800CEBF4: beql        $t6, $zero, L_800CEC68
    if (ctx->r14 == 0) {
        // 0x800CEBF8: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_800CEC68;
    }
    goto skip_0;
    // 0x800CEBF8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x800CEBFC: jal         0x800DB9B0
    // 0x800CEC00: nop

    func_800DB9B0(rdram, ctx);
        goto after_1;
    // 0x800CEC00: nop

    after_1:
    // 0x800CEC04: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CEC08: jal         0x800F6D24
    // 0x800CEC0C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800F6D24(rdram, ctx);
        goto after_2;
    // 0x800CEC0C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x800CEC10: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800CEC14: jal         0x800F8004
    // 0x800CEC18: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800F8004(rdram, ctx);
        goto after_3;
    // 0x800CEC18: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x800CEC1C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800CEC20: jal         0x800F68B8
    // 0x800CEC24: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800F68B8(rdram, ctx);
        goto after_4;
    // 0x800CEC24: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x800CEC28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800CEC2C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800CEC30: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800CEC34: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800CEC38: jal         0x800CE59C
    // 0x800CEC3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800CE59C(rdram, ctx);
        goto after_5;
    // 0x800CEC3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x800CEC40: beql        $v0, $zero, L_800CEC68
    if (ctx->r2 == 0) {
        // 0x800CEC44: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_800CEC68;
    }
    goto skip_1;
    // 0x800CEC44: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    skip_1:
    // 0x800CEC48: jal         0x800CE3E0
    // 0x800CEC4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800CE3E0(rdram, ctx);
        goto after_6;
    // 0x800CEC4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x800CEC50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CEC54: jal         0x800CE3F4
    // 0x800CEC58: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800CE3F4(rdram, ctx);
        goto after_7;
    // 0x800CEC58: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x800CEC5C: b           L_800CEC88
    // 0x800CEC60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800CEC88;
    // 0x800CEC60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CEC64: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
L_800CEC68:
    // 0x800CEC68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800CEC6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CEC70: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800CEC74: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800CEC78: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x800CEC7C: jal         0x800D284C
    // 0x800CEC80: lh          $a0, -0x55D0($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X55D0);
    func_800D284C(rdram, ctx);
        goto after_8;
    // 0x800CEC80: lh          $a0, -0x55D0($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X55D0);
    after_8:
    // 0x800CEC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CEC88:
    // 0x800CEC88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800CEC8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEC94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CEC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEC9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800CECA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CECA4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800CECA8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800CECAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CECB0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CECB4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800CECB8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800CECBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CECC0: bc1f        L_800CECCC
    if (!c1cs) {
        // 0x800CECC4: nop
    
            goto L_800CECCC;
    }
    // 0x800CECC4: nop

    // 0x800CECC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CECCC:
    // 0x800CECCC: beql        $v0, $zero, L_800CECF4
    if (ctx->r2 == 0) {
        // 0x800CECD0: c.lt.s      $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
            goto L_800CECF4;
    }
    goto skip_0;
    // 0x800CECD0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    skip_0:
    // 0x800CECD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CECD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CECDC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CECE0: nop

    // 0x800CECE4: bc1fl       L_800CECF4
    if (!c1cs) {
        // 0x800CECE8: c.lt.s      $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
            goto L_800CECF4;
    }
    goto skip_1;
    // 0x800CECE8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    skip_1:
    // 0x800CECEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CECF0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
L_800CECF4:
    // 0x800CECF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800CECF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CECFC: bc1f        L_800CED08
    if (!c1cs) {
        // 0x800CED00: nop
    
            goto L_800CED08;
    }
    // 0x800CED00: nop

    // 0x800CED04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CED08:
    // 0x800CED08: beql        $v0, $zero, L_800CED28
    if (ctx->r2 == 0) {
        // 0x800CED0C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800CED28;
    }
    goto skip_2;
    // 0x800CED0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    skip_2:
    // 0x800CED10: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800CED14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CED18: bc1fl       L_800CED28
    if (!c1cs) {
        // 0x800CED1C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800CED28;
    }
    goto skip_3;
    // 0x800CED1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    skip_3:
    // 0x800CED20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CED24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800CED28:
    // 0x800CED28: lb          $v0, 0x12($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X12);
    // 0x800CED2C: slt         $t6, $zero, $v0
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CED30: beq         $t6, $zero, L_800CED70
    if (ctx->r14 == 0) {
        // 0x800CED34: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800CED70;
    }
    // 0x800CED34: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800CED38: lbu         $v0, 0x13($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X13);
    // 0x800CED3C: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800CED40: beq         $t7, $zero, L_800CED70
    if (ctx->r15 == 0) {
        // 0x800CED44: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800CED70;
    }
    // 0x800CED44: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800CED48: lbu         $v0, 0x14($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X14);
    // 0x800CED4C: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800CED50: beq         $t8, $zero, L_800CED70
    if (ctx->r24 == 0) {
        // 0x800CED54: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_800CED70;
    }
    // 0x800CED54: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800CED58: sltiu       $v0, $a2, 0x1
    ctx->r2 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x800CED5C: bne         $v0, $zero, L_800CED70
    if (ctx->r2 != 0) {
        // 0x800CED60: nop
    
            goto L_800CED70;
    }
    // 0x800CED60: nop

    // 0x800CED64: lbu         $v0, 0x15($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X15);
    // 0x800CED68: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x800CED6C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800CED70:
    // 0x800CED70: bnel        $v0, $zero, L_800CED84
    if (ctx->r2 != 0) {
        // 0x800CED74: sltu        $t0, $zero, $a1
        ctx->r8 = 0 < ctx->r5 ? 1 : 0;
            goto L_800CED84;
    }
    goto skip_4;
    // 0x800CED74: sltu        $t0, $zero, $a1
    ctx->r8 = 0 < ctx->r5 ? 1 : 0;
    skip_4:
    // 0x800CED78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800CED7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CED80: sltu        $t0, $zero, $a1
    ctx->r8 = 0 < ctx->r5 ? 1 : 0;
L_800CED84:
    // 0x800CED84: bne         $t0, $zero, L_800CEDA0
    if (ctx->r8 != 0) {
        // 0x800CED88: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_800CEDA0;
    }
    // 0x800CED88: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800CED8C: bnel        $a0, $zero, L_800CEDA4
    if (ctx->r4 != 0) {
        // 0x800CED90: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_800CEDA4;
    }
    goto skip_5;
    // 0x800CED90: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    skip_5:
    // 0x800CED94: lbu         $t2, 0x16($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X16);
    // 0x800CED98: beql        $t2, $zero, L_800CEEF4
    if (ctx->r10 == 0) {
        // 0x800CED9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CEEF4;
    }
    goto skip_6;
    // 0x800CED9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
L_800CEDA0:
    // 0x800CEDA0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_800CEDA4:
    // 0x800CEDA4: sltu        $t3, $zero, $a0
    ctx->r11 = 0 < ctx->r4 ? 1 : 0;
    // 0x800CEDA8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800CEDAC: beq         $t4, $zero, L_800CEE3C
    if (ctx->r12 == 0) {
        // 0x800CEDB0: lui         $v1, 0x8013
        ctx->r3 = S32(0X8013 << 16);
            goto L_800CEE3C;
    }
    // 0x800CEDB0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEDB4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEDB8: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEDBC: lbu         $t5, 0x121($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X121);
    // 0x800CEDC0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x800CEDC4: bnel        $t5, $zero, L_800CEDF8
    if (ctx->r13 != 0) {
        // 0x800CEDC8: sub.s       $f8, $f0, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
            goto L_800CEDF8;
    }
    goto skip_7;
    // 0x800CEDC8: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    skip_7:
    // 0x800CEDCC: jal         0x800FC6B0
    // 0x800CEDD0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800FC6B0(rdram, ctx);
        goto after_0;
    // 0x800CEDD0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x800CEDD4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800CEDD8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEDDC: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEDE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CEDE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800CEDE8: sb          $t6, 0x121($v1)
    MEM_B(0X121, ctx->r3) = ctx->r14;
    // 0x800CEDEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800CEDF0: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800CEDF4: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
L_800CEDF8:
    // 0x800CEDF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CEDFC: lwc1        $f2, 0x59C4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X59C4);
    // 0x800CEE00: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800CEE04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CEE08: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800CEE0C: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x800CEE10: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x800CEE14: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800CEE18: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x800CEE1C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800CEE20: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800CEE24: jal         0x800FCD14
    // 0x800CEE28: nop

    func_800FCD14(rdram, ctx);
        goto after_1;
    // 0x800CEE28: nop

    after_1:
    // 0x800CEE2C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEE30: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEE34: b           L_800CEE68
    // 0x800CEE38: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
        goto L_800CEE68;
    // 0x800CEE38: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
L_800CEE3C:
    // 0x800CEE3C: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEE40: lbu         $t8, 0x121($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X121);
    // 0x800CEE44: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x800CEE48: beql        $t8, $zero, L_800CEE6C
    if (ctx->r24 == 0) {
        // 0x800CEE4C: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_800CEE6C;
    }
    goto skip_8;
    // 0x800CEE4C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x800CEE50: jal         0x800FC74C
    // 0x800CEE54: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800FC74C(rdram, ctx);
        goto after_2;
    // 0x800CEE54: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x800CEE58: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEE5C: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEE60: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800CEE64: sb          $zero, 0x121($v1)
    MEM_B(0X121, ctx->r3) = 0;
L_800CEE68:
    // 0x800CEE68: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_800CEE6C:
    // 0x800CEE6C: beql        $t9, $zero, L_800CEEBC
    if (ctx->r25 == 0) {
        // 0x800CEE70: lbu         $a0, 0x120($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X120);
            goto L_800CEEBC;
    }
    goto skip_9;
    // 0x800CEE70: lbu         $a0, 0x120($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X120);
    skip_9:
    // 0x800CEE74: lbu         $a0, 0x120($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X120);
    // 0x800CEE78: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800CEE7C: addiu       $a2, $a2, -0x5598
    ctx->r6 = ADD32(ctx->r6, -0X5598);
    // 0x800CEE80: bne         $a0, $zero, L_800CEEA8
    if (ctx->r4 != 0) {
        // 0x800CEE84: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800CEEA8;
    }
    // 0x800CEE84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CEE88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800CEE8C: jal         0x800C4350
    // 0x800CEE90: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800C4350(rdram, ctx);
        goto after_3;
    // 0x800CEE90: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_3:
    // 0x800CEE94: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEE98: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEE9C: sb          $v0, 0x120($v1)
    MEM_B(0X120, ctx->r3) = ctx->r2;
    // 0x800CEEA0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800CEEA4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
L_800CEEA8:
    // 0x800CEEA8: jal         0x800C3BDC
    // 0x800CEEAC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800C3BDC(rdram, ctx);
        goto after_4;
    // 0x800CEEAC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_4:
    // 0x800CEEB0: b           L_800CEEDC
    // 0x800CEEB4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
        goto L_800CEEDC;
    // 0x800CEEB4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800CEEB8: lbu         $a0, 0x120($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X120);
L_800CEEBC:
    // 0x800CEEBC: beql        $a0, $zero, L_800CEEE0
    if (ctx->r4 == 0) {
        // 0x800CEEC0: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_800CEEE0;
    }
    goto skip_10;
    // 0x800CEEC0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_10:
    // 0x800CEEC4: jal         0x800C2FDC
    // 0x800CEEC8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800C2FDC(rdram, ctx);
        goto after_5;
    // 0x800CEEC8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_5:
    // 0x800CEECC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CEED0: addiu       $v1, $v1, -0x4FD0
    ctx->r3 = ADD32(ctx->r3, -0X4FD0);
    // 0x800CEED4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800CEED8: sb          $zero, 0x120($v1)
    MEM_B(0X120, ctx->r3) = 0;
L_800CEEDC:
    // 0x800CEEDC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_800CEEE0:
    // 0x800CEEE0: bnel        $v0, $zero, L_800CEEF0
    if (ctx->r2 != 0) {
        // 0x800CEEE4: sb          $v0, 0x16($a3)
        MEM_B(0X16, ctx->r7) = ctx->r2;
            goto L_800CEEF0;
    }
    goto skip_11;
    // 0x800CEEE4: sb          $v0, 0x16($a3)
    MEM_B(0X16, ctx->r7) = ctx->r2;
    skip_11:
    // 0x800CEEE8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CEEEC: sb          $v0, 0x16($a3)
    MEM_B(0X16, ctx->r7) = ctx->r2;
L_800CEEF0:
    // 0x800CEEF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CEEF4:
    // 0x800CEEF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800CEEF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEF00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEF04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEF08: jal         0x800CF6D0
    // 0x800CEF0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CF6D0(rdram, ctx);
        goto after_0;
    // 0x800CEF0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CEF10: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800CEF14: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CEF18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CEF1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CEF20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CEF24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CEF28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CEF2C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CEF30: lwc1        $f8, -0x5580($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5580);
    // 0x800CEF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEF38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEF3C: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800CEF40: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEF48: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CEF4C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800CEF50: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CEF54: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CEF58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CEF5C: lh          $t7, -0x5572($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5572);
    // 0x800CEF60: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CEF64: jr          $ra
    // 0x800CEF68: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    return;
    // 0x800CEF68: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
;}
RECOMP_FUNC void func_800CEF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEF6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CEF70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CEF74: jr          $ra
    // 0x800CEF78: swc1        $f4, -0x4E90($at)
    MEM_W(-0X4E90, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x800CEF78: swc1        $f4, -0x4E90($at)
    MEM_W(-0X4E90, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800CEF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEF7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CEF80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEF84: jal         0x800CEF00
    // 0x800CEF88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CEF00(rdram, ctx);
        goto after_0;
    // 0x800CEF88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800CEF8C: jal         0x800CF6D0
    // 0x800CEF90: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800CF6D0(rdram, ctx);
        goto after_1;
    // 0x800CEF90: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800CEF94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CEF98: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CEF9C: jal         0x800CE8D8
    // 0x800CEFA0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800CE8D8(rdram, ctx);
        goto after_2;
    // 0x800CEFA0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_2:
    // 0x800CEFA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CEFA8: lwc1        $f0, -0x4E90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E90);
    // 0x800CEFAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CEFB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CEFB4: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800CEFB8: nop

    // 0x800CEFBC: bc1t        L_800CEFD0
    if (c1cs) {
        // 0x800CEFC0: nop
    
            goto L_800CEFD0;
    }
    // 0x800CEFC0: nop

    // 0x800CEFC4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800CEFC8: jal         0x800CE980
    // 0x800CEFCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800CE980(rdram, ctx);
        goto after_3;
    // 0x800CEFCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_800CEFD0:
    // 0x800CEFD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CEFD4: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x800CEFD8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800CEFDC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x800CEFE0: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x800CEFE4: sh          $t9, -0x4E9A($at)
    MEM_H(-0X4E9A, ctx->r1) = ctx->r25;
    // 0x800CEFE8: sh          $t8, -0x4E9C($at)
    MEM_H(-0X4E9C, ctx->r1) = ctx->r24;
    // 0x800CEFEC: sh          $t7, -0x4E9E($at)
    MEM_H(-0X4E9E, ctx->r1) = ctx->r15;
    // 0x800CEFF0: sh          $t6, -0x4EA0($at)
    MEM_H(-0X4EA0, ctx->r1) = ctx->r14;
    // 0x800CEFF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CEFF8: sh          $zero, -0x4E98($at)
    MEM_H(-0X4E98, ctx->r1) = 0;
    // 0x800CEFFC: jal         0x800CEA84
    // 0x800CF000: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEA84(rdram, ctx);
        goto after_4;
    // 0x800CF000: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800CF004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF008: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF00C: sh          $v0, -0x4E96($at)
    MEM_H(-0X4E96, ctx->r1) = ctx->r2;
    // 0x800CF010: sb          $zero, -0x4E94($at)
    MEM_B(-0X4E94, ctx->r1) = 0;
    // 0x800CF014: jr          $ra
    // 0x800CF018: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CF018: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CF01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF01C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF024: jal         0x800CEAA8
    // 0x800CF028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEAA8(rdram, ctx);
        goto after_0;
    // 0x800CF028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF02C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800CF030: lh          $t6, -0x4E98($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X4E98);
    // 0x800CF034: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF038: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800CF03C: jal         0x800CEA60
    // 0x800CF040: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_800CEA60(rdram, ctx);
        goto after_1;
    // 0x800CF040: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_1:
    // 0x800CF044: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800CF048: jal         0x800CEF00
    // 0x800CF04C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800CEF00(rdram, ctx);
        goto after_2;
    // 0x800CF04C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800CF050: jal         0x800CF580
    // 0x800CF054: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800CF580(rdram, ctx);
        goto after_3;
    // 0x800CF054: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800CF058: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF05C: bne         $v0, $zero, L_800CF074
    if (ctx->r2 != 0) {
        // 0x800CF060: lwc1        $f12, 0x18($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
            goto L_800CF074;
    }
    // 0x800CF060: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800CF064: jal         0x800CE864
    // 0x800CF068: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CE864(rdram, ctx);
        goto after_4;
    // 0x800CF068: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800CF06C: b           L_800CF154
    // 0x800CF070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800CF154;
    // 0x800CF070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF074:
    // 0x800CF074: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CF078: bne         $t8, $zero, L_800CF0CC
    if (ctx->r24 != 0) {
        // 0x800CF07C: nop
    
            goto L_800CF0CC;
    }
    // 0x800CF07C: nop

    // 0x800CF080: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800CF084: nop

    // 0x800CF088: bc1f        L_800CF0CC
    if (!c1cs) {
        // 0x800CF08C: nop
    
            goto L_800CF0CC;
    }
    // 0x800CF08C: nop

    // 0x800CF090: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x800CF094: jal         0x800D8FF8
    // 0x800CF098: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_5;
    // 0x800CF098: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x800CF09C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF0A0: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800CF0A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF0A8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x800CF0AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800CF0B0: nop

    // 0x800CF0B4: bc1fl       L_800CF0C4
    if (!c1cs) {
        // 0x800CF0B8: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_800CF0C4;
    }
    goto skip_0;
    // 0x800CF0B8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_0:
    // 0x800CF0BC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800CF0C0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_800CF0C4:
    // 0x800CF0C4: jal         0x800CE980
    // 0x800CF0C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800CE980(rdram, ctx);
        goto after_6;
    // 0x800CF0C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_800CF0CC:
    // 0x800CF0CC: jal         0x800CEA84
    // 0x800CF0D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEA84(rdram, ctx);
        goto after_7;
    // 0x800CF0D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x800CF0D4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800CF0D8: lh          $t9, -0x4E96($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4E96);
    // 0x800CF0DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800CF0E0: beql        $v0, $t9, L_800CF154
    if (ctx->r2 == ctx->r25) {
        // 0x800CF0E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF154;
    }
    goto skip_1;
    // 0x800CF0E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800CF0E8: jal         0x800CF640
    // 0x800CF0EC: nop

    func_800CF640(rdram, ctx);
        goto after_8;
    // 0x800CF0EC: nop

    after_8:
    // 0x800CF0F0: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x800CF0F4: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x800CF0F8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800CF0FC: addiu       $t1, $t1, -0x5580
    ctx->r9 = ADD32(ctx->r9, -0X5580);
    // 0x800CF100: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CF104: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x800CF108: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800CF10C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CF110: lh          $a0, 0x4($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X4);
    // 0x800CF114: lh          $a2, 0x6($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X6);
    // 0x800CF118: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800CF11C: nop

    // 0x800CF120: bc1f        L_800CF13C
    if (!c1cs) {
        // 0x800CF124: nop
    
            goto L_800CF13C;
    }
    // 0x800CF124: nop

    // 0x800CF128: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800CF12C: jal         0x800C3FF0
    // 0x800CF130: nop

    func_800C3FF0(rdram, ctx);
        goto after_9;
    // 0x800CF130: nop

    after_9:
    // 0x800CF134: b           L_800CF148
    // 0x800CF138: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
        goto L_800CF148;
    // 0x800CF138: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_800CF13C:
    // 0x800CF13C: jal         0x800FC63C
    // 0x800CF140: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800FC63C(rdram, ctx);
        goto after_10;
    // 0x800CF140: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_10:
    // 0x800CF144: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_800CF148:
    // 0x800CF148: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF14C: sh          $t2, -0x4E96($at)
    MEM_H(-0X4E96, ctx->r1) = ctx->r10;
    // 0x800CF150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF154:
    // 0x800CF154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CF158: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF160: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CF164: addiu       $v0, $v0, -0x4EA0
    ctx->r2 = ADD32(ctx->r2, -0X4EA0);
    // 0x800CF168: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CF16C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800CF170: sb          $t6, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r14;
    // 0x800CF174: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x800CF178: sw          $a1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r5;
    // 0x800CF17C: jr          $ra
    // 0x800CF180: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x800CF180: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800CF184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF184: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF188: jr          $ra
    // 0x800CF18C: sb          $zero, -0x4E94($at)
    MEM_B(-0X4E94, ctx->r1) = 0;
    return;
    // 0x800CF18C: sb          $zero, -0x4E94($at)
    MEM_B(-0X4E94, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800CF190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF198: jal         0x800CF67C
    // 0x800CF19C: nop

    func_800CF67C(rdram, ctx);
        goto after_0;
    // 0x800CF19C: nop

    after_0:
    // 0x800CF1A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CF1A4: nop

    // 0x800CF1A8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800CF1AC: nop

    // 0x800CF1B0: bc1t        L_800CF1C8
    if (c1cs) {
        // 0x800CF1B4: nop
    
            goto L_800CF1C8;
    }
    // 0x800CF1B4: nop

    // 0x800CF1B8: jal         0x800CF184
    // 0x800CF1BC: nop

    func_800CF184(rdram, ctx);
        goto after_1;
    // 0x800CF1BC: nop

    after_1:
    // 0x800CF1C0: b           L_800CF258
    // 0x800CF1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800CF258;
    // 0x800CF1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF1C8:
    // 0x800CF1C8: jal         0x800CF580
    // 0x800CF1CC: nop

    func_800CF580(rdram, ctx);
        goto after_2;
    // 0x800CF1CC: nop

    after_2:
    // 0x800CF1D0: beql        $v0, $zero, L_800CF258
    if (ctx->r2 == 0) {
        // 0x800CF1D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF258;
    }
    goto skip_0;
    // 0x800CF1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CF1D8: jal         0x800CF7F4
    // 0x800CF1DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CF7F4(rdram, ctx);
        goto after_3;
    // 0x800CF1DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800CF1E0: jal         0x8008FBE0
    // 0x800CF1E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008FBE0(rdram, ctx);
        goto after_4;
    // 0x800CF1E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800CF1E8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CF1EC: jal         0x800D9078
    // 0x800CF1F0: addiu       $a0, $a0, -0x4E88
    ctx->r4 = ADD32(ctx->r4, -0X4E88);
    func_800D9078(rdram, ctx);
        goto after_5;
    // 0x800CF1F0: addiu       $a0, $a0, -0x4E88
    ctx->r4 = ADD32(ctx->r4, -0X4E88);
    after_5:
    // 0x800CF1F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF1F8: lwc1        $f8, -0x4E88($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4E88);
    // 0x800CF1FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CF200: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF204: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800CF208: nop

    // 0x800CF20C: bc1fl       L_800CF258
    if (!c1cs) {
        // 0x800CF210: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF258;
    }
    goto skip_1;
    // 0x800CF210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800CF214: lwc1        $f10, -0x4E8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4E8C);
    // 0x800CF218: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF21C: jal         0x8008FBC0
    // 0x800CF220: swc1        $f10, -0x4E88($at)
    MEM_W(-0X4E88, ctx->r1) = ctx->f10.u32l;
    func_8008FBC0(rdram, ctx);
        goto after_6;
    // 0x800CF220: swc1        $f10, -0x4E88($at)
    MEM_W(-0X4E88, ctx->r1) = ctx->f10.u32l;
    after_6:
    // 0x800CF224: jal         0x8008FC00
    // 0x800CF228: nop

    func_8008FC00(rdram, ctx);
        goto after_7;
    // 0x800CF228: nop

    after_7:
    // 0x800CF22C: bnel        $v0, $zero, L_800CF258
    if (ctx->r2 != 0) {
        // 0x800CF230: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF258;
    }
    goto skip_2;
    // 0x800CF230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800CF234: jal         0x800F54E4
    // 0x800CF238: nop

    func_800F54E4(rdram, ctx);
        goto after_8;
    // 0x800CF238: nop

    after_8:
    // 0x800CF23C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800CF240: lw          $a1, -0x4E84($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E84);
    // 0x800CF244: jal         0x800F7B9C
    // 0x800CF248: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F7B9C(rdram, ctx);
        goto after_9;
    // 0x800CF248: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x800CF24C: jal         0x800CF184
    // 0x800CF250: nop

    func_800CF184(rdram, ctx);
        goto after_10;
    // 0x800CF250: nop

    after_10:
    // 0x800CF254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF258:
    // 0x800CF258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF25C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF26C: jal         0x800EA09C
    // 0x800CF270: nop

    func_800EA09C(rdram, ctx);
        goto after_0;
    // 0x800CF270: nop

    after_0:
    // 0x800CF274: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CF278: bnel        $v0, $at, L_800CF2A4
    if (ctx->r2 != ctx->r1) {
        // 0x800CF27C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF2A4;
    }
    goto skip_0;
    // 0x800CF27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CF280: jal         0x800CF01C
    // 0x800CF284: nop

    func_800CF01C(rdram, ctx);
        goto after_1;
    // 0x800CF284: nop

    after_1:
    // 0x800CF288: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800CF28C: lbu         $t6, -0x4E94($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X4E94);
    // 0x800CF290: beql        $t6, $zero, L_800CF2A4
    if (ctx->r14 == 0) {
        // 0x800CF294: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF2A4;
    }
    goto skip_1;
    // 0x800CF294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800CF298: jal         0x800CF190
    // 0x800CF29C: nop

    func_800CF190(rdram, ctx);
        goto after_2;
    // 0x800CF29C: nop

    after_2:
    // 0x800CF2A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF2A4:
    // 0x800CF2A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF2A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF2B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF2B8: jal         0x800CEA60
    // 0x800CF2BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEA60(rdram, ctx);
        goto after_0;
    // 0x800CF2BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF2C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF2C8: swc1        $f0, -0x4E90($at)
    MEM_W(-0X4E90, ctx->r1) = ctx->f0.u32l;
    // 0x800CF2CC: jr          $ra
    // 0x800CF2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800CF2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800CF2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF2D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF2D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF2DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800CF2E0: jal         0x800D3E40
    // 0x800CF2E4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x800CF2E4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x800CF2E8: bnel        $v0, $zero, L_800CF400
    if (ctx->r2 != 0) {
        // 0x800CF2EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF400;
    }
    goto skip_0;
    // 0x800CF2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CF2F0: jal         0x800CEAA8
    // 0x800CF2F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEAA8(rdram, ctx);
        goto after_1;
    // 0x800CF2F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800CF2F8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800CF2FC: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x800CF300: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF304: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CF308: jal         0x800CF67C
    // 0x800CF30C: sh          $t6, -0x4EA0($at)
    MEM_H(-0X4EA0, ctx->r1) = ctx->r14;
    func_800CF67C(rdram, ctx);
        goto after_2;
    // 0x800CF30C: sh          $t6, -0x4EA0($at)
    MEM_H(-0X4EA0, ctx->r1) = ctx->r14;
    after_2:
    // 0x800CF310: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x800CF314: jal         0x800CEF00
    // 0x800CF318: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800CEF00(rdram, ctx);
        goto after_3;
    // 0x800CF318: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x800CF31C: jal         0x800CF6D0
    // 0x800CF320: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800CF6D0(rdram, ctx);
        goto after_4;
    // 0x800CF320: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x800CF324: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF328: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF32C: jal         0x800CE8D8
    // 0x800CF330: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800CE8D8(rdram, ctx);
        goto after_5;
    // 0x800CF330: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_5:
    // 0x800CF334: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800CF338: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF33C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CF344: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800CF348: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800CF34C: jal         0x800CE980
    // 0x800CF350: nop

    func_800CE980(rdram, ctx);
        goto after_6;
    // 0x800CF350: nop

    after_6:
    // 0x800CF354: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800CF358: addiu       $a1, $a1, -0x8CC
    ctx->r5 = ADD32(ctx->r5, -0X8CC);
    // 0x800CF35C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF360: jal         0x800CE928
    // 0x800CF364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800CE928(rdram, ctx);
        goto after_7;
    // 0x800CF364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800CF368: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF36C: jal         0x800CE88C
    // 0x800CF370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800CE88C(rdram, ctx);
        goto after_8;
    // 0x800CF370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800CF374: jal         0x800F54E4
    // 0x800CF378: nop

    func_800F54E4(rdram, ctx);
        goto after_9;
    // 0x800CF378: nop

    after_9:
    // 0x800CF37C: jal         0x800F6604
    // 0x800CF380: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6604(rdram, ctx);
        goto after_10;
    // 0x800CF380: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x800CF384: beq         $v0, $zero, L_800CF3C8
    if (ctx->r2 == 0) {
        // 0x800CF388: nop
    
            goto L_800CF3C8;
    }
    // 0x800CF388: nop

    // 0x800CF38C: jal         0x800CEF48
    // 0x800CF390: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800CEF48(rdram, ctx);
        goto after_11;
    // 0x800CF390: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_11:
    // 0x800CF394: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CF398: nop

    // 0x800CF39C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x800CF3A0: nop

    // 0x800CF3A4: bc1fl       L_800CF400
    if (!c1cs) {
        // 0x800CF3A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF400;
    }
    goto skip_1;
    // 0x800CF3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800CF3AC: jal         0x800F54E4
    // 0x800CF3B0: nop

    func_800F54E4(rdram, ctx);
        goto after_12;
    // 0x800CF3B0: nop

    after_12:
    // 0x800CF3B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CF3B8: jal         0x800F7B9C
    // 0x800CF3BC: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    func_800F7B9C(rdram, ctx);
        goto after_13;
    // 0x800CF3BC: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_13:
    // 0x800CF3C0: b           L_800CF400
    // 0x800CF3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800CF400;
    // 0x800CF3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF3C8:
    // 0x800CF3C8: jal         0x800CEF48
    // 0x800CF3CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800CEF48(rdram, ctx);
        goto after_14;
    // 0x800CF3CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_14:
    // 0x800CF3D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CF3D4: nop

    // 0x800CF3D8: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x800CF3DC: nop

    // 0x800CF3E0: bc1tl       L_800CF400
    if (c1cs) {
        // 0x800CF3E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF400;
    }
    goto skip_2;
    // 0x800CF3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800CF3E8: jal         0x800F54E4
    // 0x800CF3EC: nop

    func_800F54E4(rdram, ctx);
        goto after_15;
    // 0x800CF3EC: nop

    after_15:
    // 0x800CF3F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CF3F4: jal         0x800F7B9C
    // 0x800CF3F8: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    func_800F7B9C(rdram, ctx);
        goto after_16;
    // 0x800CF3F8: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    after_16:
    // 0x800CF3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF400:
    // 0x800CF400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CF404: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF40C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CF410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF414: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CF418: jal         0x800CEA60
    // 0x800CF41C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEA60(rdram, ctx);
        goto after_0;
    // 0x800CF41C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF420: jal         0x800CF640
    // 0x800CF424: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800CF640(rdram, ctx);
        goto after_1;
    // 0x800CF424: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800CF428: jal         0x800CEF00
    // 0x800CF42C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CEF00(rdram, ctx);
        goto after_2;
    // 0x800CF42C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800CF430: jal         0x800CF6D0
    // 0x800CF434: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800CF6D0(rdram, ctx);
        goto after_3;
    // 0x800CF434: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800CF438: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800CF43C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800CF440: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800CF444: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800CF448: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF44C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CF450: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF454: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CF458: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800CF45C: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800CF460: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x800CF464: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800CF468: nop

    // 0x800CF46C: bc1fl       L_800CF47C
    if (!c1cs) {
        // 0x800CF470: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_800CF47C;
    }
    goto skip_0;
    // 0x800CF470: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_0:
    // 0x800CF474: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800CF478: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_800CF47C:
    // 0x800CF47C: jal         0x800CE980
    // 0x800CF480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800CE980(rdram, ctx);
        goto after_4;
    // 0x800CF480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800CF484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CF48C: jr          $ra
    // 0x800CF490: nop

    return;
    // 0x800CF490: nop

;}
RECOMP_FUNC void func_800CF494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF494: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF49C: jal         0x800D3E40
    // 0x800CF4A0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x800CF4A0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x800CF4A4: bnel        $v0, $zero, L_800CF574
    if (ctx->r2 != 0) {
        // 0x800CF4A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF574;
    }
    goto skip_0;
    // 0x800CF4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CF4AC: jal         0x800CEAA8
    // 0x800CF4B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEAA8(rdram, ctx);
        goto after_1;
    // 0x800CF4B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800CF4B4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800CF4B8: addiu       $a1, $a1, -0x4EA0
    ctx->r5 = ADD32(ctx->r5, -0X4EA0);
    // 0x800CF4BC: lh          $v1, 0x8($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X8);
    // 0x800CF4C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CF4C4: beq         $v1, $zero, L_800CF4D4
    if (ctx->r3 == 0) {
        // 0x800CF4C8: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_800CF4D4;
    }
    // 0x800CF4C8: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x800CF4CC: b           L_800CF570
    // 0x800CF4D0: sh          $t6, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r14;
        goto L_800CF570;
    // 0x800CF4D0: sh          $t6, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r14;
L_800CF4D4:
    // 0x800CF4D4: blez        $v0, L_800CF570
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800CF4D8: addiu       $t7, $zero, 0x9
        ctx->r15 = ADD32(0, 0X9);
            goto L_800CF570;
    }
    // 0x800CF4D8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x800CF4DC: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800CF4E0: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x800CF4E4: jal         0x800CF67C
    // 0x800CF4E8: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    func_800CF67C(rdram, ctx);
        goto after_2;
    // 0x800CF4E8: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    after_2:
    // 0x800CF4EC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x800CF4F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF4F4: jal         0x800CE88C
    // 0x800CF4F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800CE88C(rdram, ctx);
        goto after_3;
    // 0x800CF4F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800CF4FC: jal         0x800CF640
    // 0x800CF500: nop

    func_800CF640(rdram, ctx);
        goto after_4;
    // 0x800CF500: nop

    after_4:
    // 0x800CF504: jal         0x800CEF00
    // 0x800CF508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CEF00(rdram, ctx);
        goto after_5;
    // 0x800CF508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x800CF50C: jal         0x800CF6D0
    // 0x800CF510: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800CF6D0(rdram, ctx);
        goto after_6;
    // 0x800CF510: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x800CF514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF518: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF51C: jal         0x800CE8D8
    // 0x800CF520: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800CE8D8(rdram, ctx);
        goto after_7;
    // 0x800CF520: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_7:
    // 0x800CF524: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800CF528: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF52C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF530: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CF534: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800CF538: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800CF53C: jal         0x800CE980
    // 0x800CF540: nop

    func_800CE980(rdram, ctx);
        goto after_8;
    // 0x800CF540: nop

    after_8:
    // 0x800CF544: jal         0x800F54E4
    // 0x800CF548: nop

    func_800F54E4(rdram, ctx);
        goto after_9;
    // 0x800CF548: nop

    after_9:
    // 0x800CF54C: jal         0x800F6604
    // 0x800CF550: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6604(rdram, ctx);
        goto after_10;
    // 0x800CF550: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x800CF554: beql        $v0, $zero, L_800CF574
    if (ctx->r2 == 0) {
        // 0x800CF558: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF574;
    }
    goto skip_1;
    // 0x800CF558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800CF55C: jal         0x800F54E4
    // 0x800CF560: nop

    func_800F54E4(rdram, ctx);
        goto after_11;
    // 0x800CF560: nop

    after_11:
    // 0x800CF564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CF568: jal         0x800F7B9C
    // 0x800CF56C: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    func_800F7B9C(rdram, ctx);
        goto after_12;
    // 0x800CF56C: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_12:
L_800CF570:
    // 0x800CF570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CF574:
    // 0x800CF574: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CF578: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CF584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF588: jal         0x800A9C98
    // 0x800CF58C: nop

    func_800A9C98(rdram, ctx);
        goto after_0;
    // 0x800CF58C: nop

    after_0:
    // 0x800CF590: beq         $v0, $zero, L_800CF5A0
    if (ctx->r2 == 0) {
        // 0x800CF594: nop
    
            goto L_800CF5A0;
    }
    // 0x800CF594: nop

    // 0x800CF598: b           L_800CF630
    // 0x800CF59C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CF630;
    // 0x800CF59C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CF5A0:
    // 0x800CF5A0: jal         0x800D3E40
    // 0x800CF5A4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800D3E40(rdram, ctx);
        goto after_1;
    // 0x800CF5A4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x800CF5A8: beq         $v0, $zero, L_800CF5B8
    if (ctx->r2 == 0) {
        // 0x800CF5AC: nop
    
            goto L_800CF5B8;
    }
    // 0x800CF5AC: nop

    // 0x800CF5B0: b           L_800CF630
    // 0x800CF5B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CF630;
    // 0x800CF5B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CF5B8:
    // 0x800CF5B8: jal         0x800F54E4
    // 0x800CF5BC: nop

    func_800F54E4(rdram, ctx);
        goto after_2;
    // 0x800CF5BC: nop

    after_2:
    // 0x800CF5C0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800CF5C4: jal         0x800F6BE4
    // 0x800CF5C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6BE4(rdram, ctx);
        goto after_3;
    // 0x800CF5C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800CF5CC: bne         $v0, $zero, L_800CF5DC
    if (ctx->r2 != 0) {
        // 0x800CF5D0: nop
    
            goto L_800CF5DC;
    }
    // 0x800CF5D0: nop

    // 0x800CF5D4: b           L_800CF630
    // 0x800CF5D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CF630;
    // 0x800CF5D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CF5DC:
    // 0x800CF5DC: jal         0x800F6D24
    // 0x800CF5E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800F6D24(rdram, ctx);
        goto after_4;
    // 0x800CF5E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x800CF5E4: beq         $v0, $zero, L_800CF5F4
    if (ctx->r2 == 0) {
        // 0x800CF5E8: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800CF5F4;
    }
    // 0x800CF5E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF5EC: b           L_800CF630
    // 0x800CF5F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CF630;
    // 0x800CF5F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CF5F4:
    // 0x800CF5F4: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x800CF5F8: jal         0x800F64A4
    // 0x800CF5FC: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    func_800F64A4(rdram, ctx);
        goto after_5;
    // 0x800CF5FC: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    after_5:
    // 0x800CF600: beq         $v0, $zero, L_800CF610
    if (ctx->r2 == 0) {
        // 0x800CF604: nop
    
            goto L_800CF610;
    }
    // 0x800CF604: nop

    // 0x800CF608: b           L_800CF630
    // 0x800CF60C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CF630;
    // 0x800CF60C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CF610:
    // 0x800CF610: jal         0x800F8B88
    // 0x800CF614: nop

    func_800F8B88(rdram, ctx);
        goto after_6;
    // 0x800CF614: nop

    after_6:
    // 0x800CF618: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CF61C: bnel        $v0, $at, L_800CF630
    if (ctx->r2 != ctx->r1) {
        // 0x800CF620: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800CF630;
    }
    goto skip_0;
    // 0x800CF620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x800CF624: b           L_800CF630
    // 0x800CF628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CF630;
    // 0x800CF628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CF62C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CF630:
    // 0x800CF630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CF638: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF648: jal         0x800CEAA8
    // 0x800CF64C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEAA8(rdram, ctx);
        goto after_0;
    // 0x800CF64C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF650: beq         $v0, $zero, L_800CF66C
    if (ctx->r2 == 0) {
        // 0x800CF654: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF66C;
    }
    // 0x800CF654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF658: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x800CF65C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CF660: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x800CF664: b           L_800CF670
    // 0x800CF668: lh          $v1, -0x4EA2($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X4EA2);
        goto L_800CF670;
    // 0x800CF668: lh          $v1, -0x4EA2($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X4EA2);
L_800CF66C:
    // 0x800CF66C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800CF670:
    // 0x800CF670: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800CF674: jr          $ra
    // 0x800CF678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800CF678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800CF67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF67C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CF680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF684: jal         0x800CEA60
    // 0x800CF688: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEA60(rdram, ctx);
        goto after_0;
    // 0x800CF688: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF68C: jal         0x800CF640
    // 0x800CF690: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800CF640(rdram, ctx);
        goto after_1;
    // 0x800CF690: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800CF694: jal         0x800CEF00
    // 0x800CF698: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CEF00(rdram, ctx);
        goto after_2;
    // 0x800CF698: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800CF69C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF6A0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800CF6A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CF6A8: jr          $ra
    // 0x800CF6AC: div.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    return;
    // 0x800CF6AC: div.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
;}
RECOMP_FUNC void func_800CF6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF6B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF6B8: jal         0x800CEA84
    // 0x800CF6BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEA84(rdram, ctx);
        goto after_0;
    // 0x800CF6BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF6C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF6C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF6C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF6D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF6D8: jal         0x800DA298
    // 0x800CF6DC: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800CF6DC: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_0:
    // 0x800CF6E0: beq         $v0, $zero, L_800CF6F0
    if (ctx->r2 == 0) {
        // 0x800CF6E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CF6F0;
    }
    // 0x800CF6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF6E8: b           L_800CF6F4
    // 0x800CF6EC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
        goto L_800CF6F4;
    // 0x800CF6EC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_800CF6F0:
    // 0x800CF6F0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_800CF6F4:
    // 0x800CF6F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800CF6F8: jr          $ra
    // 0x800CF6FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800CF6FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800CF700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF708: jal         0x800DA544
    // 0x800CF70C: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    func_800DA544(rdram, ctx);
        goto after_0;
    // 0x800CF70C: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_0:
    // 0x800CF710: jal         0x800CF6D0
    // 0x800CF714: nop

    func_800CF6D0(rdram, ctx);
        goto after_1;
    // 0x800CF714: nop

    after_1:
    // 0x800CF718: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF71C: jal         0x800CE9E8
    // 0x800CF720: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800CE9E8(rdram, ctx);
        goto after_2;
    // 0x800CF720: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x800CF724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF72C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CF738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CF73C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800CF740: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800CF744: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CF748: jal         0x800CF640
    // 0x800CF74C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800CF640(rdram, ctx);
        goto after_0;
    // 0x800CF74C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CF750: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x800CF754: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CF758: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800CF75C: addiu       $a0, $a0, -0x5580
    ctx->r4 = ADD32(ctx->r4, -0X5580);
    // 0x800CF760: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CF764: mflo        $t6
    ctx->r14 = lo;
    // 0x800CF768: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x800CF76C: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x800CF770: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800CF774: nop

    // 0x800CF778: bc1f        L_800CF798
    if (!c1cs) {
        // 0x800CF77C: nop
    
            goto L_800CF798;
    }
    // 0x800CF77C: nop

    // 0x800CF780: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CF784: mflo        $t8
    ctx->r24 = lo;
    // 0x800CF788: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x800CF78C: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800CF790: jal         0x800CF160
    // 0x800CF794: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    func_800CF160(rdram, ctx);
        goto after_1;
    // 0x800CF794: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    after_1:
L_800CF798:
    // 0x800CF798: jal         0x800CEAA8
    // 0x800CF79C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CEAA8(rdram, ctx);
        goto after_2;
    // 0x800CF79C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800CF7A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CF7A4: blez        $v0, L_800CF7C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800CF7A8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800CF7C4;
    }
    // 0x800CF7A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800CF7AC:
    // 0x800CF7AC: jal         0x800CF494
    // 0x800CF7B0: nop

    func_800CF494(rdram, ctx);
        goto after_3;
    // 0x800CF7B0: nop

    after_3:
    // 0x800CF7B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800CF7B8: slt         $at, $s0, $s1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CF7BC: bne         $at, $zero, L_800CF7AC
    if (ctx->r1 != 0) {
        // 0x800CF7C0: nop
    
            goto L_800CF7AC;
    }
    // 0x800CF7C0: nop

L_800CF7C4:
    // 0x800CF7C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CF7C8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800CF7CC: sh          $s1, -0x4E98($at)
    MEM_H(-0X4E98, ctx->r1) = ctx->r17;
    // 0x800CF7D0: addiu       $a1, $a1, -0x8CC
    ctx->r5 = ADD32(ctx->r5, -0X8CC);
    // 0x800CF7D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF7D8: jal         0x800CE928
    // 0x800CF7DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800CE928(rdram, ctx);
        goto after_4;
    // 0x800CF7DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800CF7E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF7E4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800CF7E8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800CF7EC: jr          $ra
    // 0x800CF7F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800CF7F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800CF7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF7FC: jal         0x800CF580
    // 0x800CF800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CF580(rdram, ctx);
        goto after_0;
    // 0x800CF800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CF804: beql        $v0, $zero, L_800CF820
    if (ctx->r2 == 0) {
        // 0x800CF808: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_800CF820;
    }
    goto skip_0;
    // 0x800CF808: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x800CF80C: jal         0x800A16A4
    // 0x800CF810: nop

    func_800A16A4(rdram, ctx);
        goto after_1;
    // 0x800CF810: nop

    after_1:
    // 0x800CF814: beql        $v0, $zero, L_800CF828
    if (ctx->r2 == 0) {
        // 0x800CF818: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800CF828;
    }
    goto skip_1;
    // 0x800CF818: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x800CF81C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
L_800CF820:
    // 0x800CF820: bne         $t6, $zero, L_800CF830
    if (ctx->r14 != 0) {
        // 0x800CF824: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800CF830;
    }
    // 0x800CF824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800CF828:
    // 0x800CF828: jal         0x800CEBD8
    // 0x800CF82C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800CEBD8(rdram, ctx);
        goto after_2;
    // 0x800CF82C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
L_800CF830:
    // 0x800CF830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF838: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF848: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CF84C: jal         0x800CE83C
    // 0x800CF850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CE83C(rdram, ctx);
        goto after_0;
    // 0x800CF850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800CF854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF85C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CF870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF870: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CF874: jr          $ra
    // 0x800CF878: sw          $a0, -0x51A0($at)
    MEM_W(-0X51A0, ctx->r1) = ctx->r4;
    return;
    // 0x800CF878: sw          $a0, -0x51A0($at)
    MEM_W(-0X51A0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800CF87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF87C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CF880: jr          $ra
    // 0x800CF884: lw          $v0, -0x51A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X51A0);
    return;
    // 0x800CF884: lw          $v0, -0x51A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X51A0);
;}
RECOMP_FUNC void func_800CF888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF888: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800CF88C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CF890: addiu       $v0, $v0, -0x5194
    ctx->r2 = ADD32(ctx->r2, -0X5194);
    // 0x800CF894: addiu       $v1, $v1, -0x519C
    ctx->r3 = ADD32(ctx->r3, -0X519C);
    // 0x800CF898: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x800CF89C: bnel        $a0, $t6, L_800CF8BC
    if (ctx->r4 != ctx->r14) {
            // 0x800CF8A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF8BC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF8A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800CF8A4: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x800CF8A8: bnel        $a1, $t7, L_800CF8BC
    if (ctx->r5 != ctx->r15) {
            // 0x800CF8AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF8BC(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF8AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x800CF8B0: jr          $ra
    // 0x800CF8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800CF8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800CF8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CF89C:
    // 0x800CF8B8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CF8BC: bnel        $v1, $v0, L_800CF89C
    if (ctx->r3 != ctx->r2) {
            // 0x800CF8C0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    static_3_800CF89C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF8C0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x800CF8C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CF8C8: jr          $ra
    // 0x800CF8CC: nop

    return;
    // 0x800CF8CC: nop

;}
RECOMP_FUNC void func_800CF8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF8D0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800CF8D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CF8D8: addiu       $v0, $v0, -0x518C
    ctx->r2 = ADD32(ctx->r2, -0X518C);
    // 0x800CF8DC: addiu       $v1, $v1, -0x5194
    ctx->r3 = ADD32(ctx->r3, -0X5194);
    // 0x800CF8E0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x800CF8E4: bnel        $a0, $t6, L_800CF904
    if (ctx->r4 != ctx->r14) {
            // 0x800CF8E8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF904(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF8E8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800CF8EC: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x800CF8F0: bnel        $a1, $t7, L_800CF904
    if (ctx->r5 != ctx->r15) {
            // 0x800CF8F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF904(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF8F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x800CF8F8: jr          $ra
    // 0x800CF8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800CF8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800CF900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CF8E4:
    // 0x800CF900: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CF904: bnel        $v1, $v0, L_800CF8E4
    if (ctx->r3 != ctx->r2) {
            // 0x800CF908: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    static_3_800CF8E4(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF908: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x800CF90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CF910: jr          $ra
    // 0x800CF914: nop

    return;
    // 0x800CF914: nop

;}
RECOMP_FUNC void func_800CF918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF918: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800CF91C: lh          $t6, -0x518C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X518C);
    // 0x800CF920: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CF924: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800CF928: bne         $a0, $t6, L_800CF944
    if (ctx->r4 != ctx->r14) {
            // 0x800CF92C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    func_800CF944(rdram, ctx);
    return;
    }
    // 0x800CF92C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CF930: lh          $t7, -0x518A($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X518A);
    // 0x800CF934: bne         $a1, $t7, L_800CF944
    if (ctx->r5 != ctx->r15) {
            // 0x800CF938: nop

    func_800CF944(rdram, ctx);
    return;
    }
    // 0x800CF938: nop

    // 0x800CF93C: jr          $ra
    // 0x800CF940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CF940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CF944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF944: addiu       $v0, $v0, -0x517C
    ctx->r2 = ADD32(ctx->r2, -0X517C);
    // 0x800CF948: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x800CF94C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800CF950: bnel        $a0, $t8, L_800CF970
    if (ctx->r4 != ctx->r24) {
            // 0x800CF954: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    static_3_800CF970(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF954: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    skip_0:
    // 0x800CF958: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x800CF95C: bnel        $a1, $t9, L_800CF970
    if (ctx->r5 != ctx->r25) {
            // 0x800CF960: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    static_3_800CF970(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF960: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    skip_1:
    // 0x800CF964: jr          $ra
    // 0x800CF968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800CF968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800CF96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF96C: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    // 0x800CF970: bnel        $a0, $t0, L_800CF990
    if (ctx->r4 != ctx->r8) {
            // 0x800CF974: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    static_3_800CF990(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF974: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    skip_0:
    // 0x800CF978: lh          $t1, 0x12($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X12);
    // 0x800CF97C: bnel        $a1, $t1, L_800CF990
    if (ctx->r5 != ctx->r9) {
            // 0x800CF980: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    static_3_800CF990(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF980: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    skip_1:
    // 0x800CF984: jr          $ra
    // 0x800CF988: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x800CF988: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
;}
RECOMP_FUNC void func_800CF98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF98C: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    // 0x800CF990: bnel        $a0, $t2, L_800CF9B0
    if (ctx->r4 != ctx->r10) {
            // 0x800CF994: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    static_3_800CF9B0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF994: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    skip_0:
    // 0x800CF998: lh          $t3, 0x22($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X22);
    // 0x800CF99C: bnel        $a1, $t3, L_800CF9B0
    if (ctx->r5 != ctx->r11) {
            // 0x800CF9A0: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    static_3_800CF9B0(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF9A0: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    skip_1:
    // 0x800CF9A4: jr          $ra
    // 0x800CF9A8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x800CF9A8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
;}
RECOMP_FUNC void func_800CF9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF9AC: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    // 0x800CF9B0: bnel        $a0, $t4, L_800CF9D0
    if (ctx->r4 != ctx->r12) {
            // 0x800CF9B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF9D0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF9B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800CF9B8: lh          $t5, 0x32($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X32);
    // 0x800CF9BC: bnel        $a1, $t5, L_800CF9D0
    if (ctx->r5 != ctx->r13) {
            // 0x800CF9C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF9D0(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF9C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x800CF9C4: jr          $ra
    // 0x800CF9C8: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x800CF9C8: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
;}
RECOMP_FUNC void func_800CF9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CF94C:
    // 0x800CF9CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CF9D0: bne         $v1, $a2, L_800CF94C
    if (ctx->r3 != ctx->r6) {
            // 0x800CF9D4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    static_3_800CF94C(rdram, ctx);
    return;
    }
    // 0x800CF9D4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800CF9D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CF9DC: jr          $ra
    // 0x800CF9E0: nop

    return;
    // 0x800CF9E0: nop

;}
RECOMP_FUNC void func_800CF9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF9E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CF9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF9EC: jal         0x800CF918
    // 0x800CF9F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800CF918(rdram, ctx);
        goto after_0;
    // 0x800CF9F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x800CF9F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CF9F8: addiu       $t7, $t7, -0x518C
    ctx->r15 = ADD32(ctx->r15, -0X518C);
    // 0x800CF9FC: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x800CFA00: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800CFA04: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800CFA08: addiu       $v1, $sp, 0x28
    ctx->r3 = ADD32(ctx->r29, 0X28);
    // 0x800CFA0C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
L_800CFA10:
    // 0x800CFA10: lbu         $t8, 0xC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XC);
    // 0x800CFA14: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CFA18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800CFA1C: bne         $v1, $a1, L_800CFA10
    if (ctx->r3 != ctx->r5) {
        // 0x800CFA20: sw          $t8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r24;
            goto L_800CFA10;
    }
    // 0x800CFA20: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x800CFA24: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800CFA28: addiu       $t0, $t0, -0x518C
    ctx->r8 = ADD32(ctx->r8, -0X518C);
    // 0x800CFA2C: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x800CFA30: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x800CFA34: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x800CFA38: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800CFA3C: jal         0x800C8D4C
    // 0x800CFA40: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800C8D4C(rdram, ctx);
        goto after_1;
    // 0x800CFA40: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800CFA44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800CFA48: jal         0x800C8E84
    // 0x800CFA4C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800C8E84(rdram, ctx);
        goto after_2;
    // 0x800CFA4C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x800CFA50: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800CFA54: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800CFA58: jal         0x800C8F64
    // 0x800CFA5C: lbu         $a1, 0xF($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XF);
    func_800C8F64(rdram, ctx);
        goto after_3;
    // 0x800CFA5C: lbu         $a1, 0xF($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XF);
    after_3:
    // 0x800CFA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CFA64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800CFA68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CFA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CFA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CFA78: jal         0x800CF918
    // 0x800CFA7C: nop

    func_800CF918(rdram, ctx);
        goto after_0;
    // 0x800CFA7C: nop

    after_0:
    // 0x800CFA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CFA84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CFA88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CFA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFA90: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800CFA94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CFA98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800CFA9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800CFAA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CFAA4: addiu       $a0, $zero, 0x6A0
    ctx->r4 = ADD32(0, 0X6A0);
    // 0x800CFAA8: jal         0x800DA9E4
    // 0x800CFAAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800DA9E4(rdram, ctx);
        goto after_0;
    // 0x800CFAAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800CFAB0: beq         $v0, $zero, L_800CFAC0
    if (ctx->r2 == 0) {
        // 0x800CFAB4: nop
    
            goto L_800CFAC0;
    }
    // 0x800CFAB4: nop

    // 0x800CFAB8: b           L_800CFBB0
    // 0x800CFABC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CFBB0;
    // 0x800CFABC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CFAC0:
    // 0x800CFAC0: jal         0x800DA298
    // 0x800CFAC4: addiu       $a0, $zero, 0x379
    ctx->r4 = ADD32(0, 0X379);
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800CFAC4: addiu       $a0, $zero, 0x379
    ctx->r4 = ADD32(0, 0X379);
    after_1:
    // 0x800CFAC8: bne         $v0, $zero, L_800CFB00
    if (ctx->r2 != 0) {
        // 0x800CFACC: addiu       $a0, $zero, 0x37A
        ctx->r4 = ADD32(0, 0X37A);
            goto L_800CFB00;
    }
    // 0x800CFACC: addiu       $a0, $zero, 0x37A
    ctx->r4 = ADD32(0, 0X37A);
    // 0x800CFAD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800CFAD4: jal         0x800DC128
    // 0x800CFAD8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_800DC128(rdram, ctx);
        goto after_2;
    // 0x800CFAD8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_2:
    // 0x800CFADC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CFAE0: addiu       $a0, $zero, 0x37A
    ctx->r4 = ADD32(0, 0X37A);
    // 0x800CFAE4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800CFAE8: jal         0x800DA7A8
    // 0x800CFAEC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_800DA7A8(rdram, ctx);
        goto after_3;
    // 0x800CFAEC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x800CFAF0: jal         0x800DA544
    // 0x800CFAF4: addiu       $a0, $zero, 0x379
    ctx->r4 = ADD32(0, 0X379);
    func_800DA544(rdram, ctx);
        goto after_4;
    // 0x800CFAF4: addiu       $a0, $zero, 0x379
    ctx->r4 = ADD32(0, 0X379);
    after_4:
    // 0x800CFAF8: b           L_800CFB0C
    // 0x800CFAFC: nop

        goto L_800CFB0C;
    // 0x800CFAFC: nop

L_800CFB00:
    // 0x800CFB00: jal         0x800DA564
    // 0x800CFB04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800DA564(rdram, ctx);
        goto after_5;
    // 0x800CFB04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x800CFB08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800CFB0C:
    // 0x800CFB0C: jal         0x800DC330
    // 0x800CFB10: nop

    func_800DC330(rdram, ctx);
        goto after_6;
    // 0x800CFB10: nop

    after_6:
    // 0x800CFB14: jal         0x800DC324
    // 0x800CFB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DC324(rdram, ctx);
        goto after_7;
    // 0x800CFB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800CFB1C: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x800CFB20: addiu       $v1, $sp, 0x68
    ctx->r3 = ADD32(ctx->r29, 0X68);
L_800CFB24:
    // 0x800CFB24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800CFB28: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800CFB2C: bne         $at, $zero, L_800CFB24
    if (ctx->r1 != 0) {
        // 0x800CFB30: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_800CFB24;
    }
    // 0x800CFB30: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x800CFB34: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800CFB38: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800CFB3C: addiu       $s2, $s2, -0x5439
    ctx->r18 = ADD32(ctx->r18, -0X5439);
    // 0x800CFB40: addiu       $s1, $s1, -0x54C0
    ctx->r17 = ADD32(ctx->r17, -0X54C0);
    // 0x800CFB44: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
L_800CFB48:
    // 0x800CFB48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800CFB4C: jal         0x800DC128
    // 0x800CFB50: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800DC128(rdram, ctx);
        goto after_8;
    // 0x800CFB50: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_8:
    // 0x800CFB54: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800CFB58: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x800CFB5C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800CFB60: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CFB64: beql        $at, $zero, L_800CFB94
    if (ctx->r1 == 0) {
        // 0x800CFB68: addiu       $s1, $s1, 0x3
        ctx->r17 = ADD32(ctx->r17, 0X3);
            goto L_800CFB94;
    }
    goto skip_0;
    // 0x800CFB68: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    skip_0:
    // 0x800CFB6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800CFB70:
    // 0x800CFB70: jal         0x800DC128
    // 0x800CFB74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800DC128(rdram, ctx);
        goto after_9;
    // 0x800CFB74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x800CFB78: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800CFB7C: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x800CFB80: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800CFB84: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CFB88: bnel        $at, $zero, L_800CFB70
    if (ctx->r1 != 0) {
        // 0x800CFB8C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800CFB70;
    }
    goto skip_1;
    // 0x800CFB8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_1:
    // 0x800CFB90: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
L_800CFB94:
    // 0x800CFB94: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x800CFB98: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800CFB9C: bne         $s1, $s2, L_800CFB48
    if (ctx->r17 != ctx->r18) {
        // 0x800CFBA0: sb          $v0, -0x2($s1)
        MEM_B(-0X2, ctx->r17) = ctx->r2;
            goto L_800CFB48;
    }
    // 0x800CFBA0: sb          $v0, -0x2($s1)
    MEM_B(-0X2, ctx->r17) = ctx->r2;
    // 0x800CFBA4: jal         0x800DC354
    // 0x800CFBA8: nop

    func_800DC354(rdram, ctx);
        goto after_10;
    // 0x800CFBA8: nop

    after_10:
    // 0x800CFBAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CFBB0:
    // 0x800CFBB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CFBB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CFBB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFBBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800CFBC0: jr          $ra
    // 0x800CFBC4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800CFBC4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800CFBC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFBC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CFBCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CFBD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CFBD4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CFBD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CFBDC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800CFBE0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFBE4: jal         0x8010108C
    // 0x800CFBE8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8010108C(rdram, ctx);
        goto after_0;
    // 0x800CFBE8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x800CFBEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFBF0: jal         0x800CF888
    // 0x800CFBF4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800CF888(rdram, ctx);
        goto after_1;
    // 0x800CFBF4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800CFBF8: beq         $v0, $zero, L_800CFC08
    if (ctx->r2 == 0) {
        // 0x800CFBFC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800CFC08;
    }
    // 0x800CFBFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CFC00: jal         0x8008A4B0
    // 0x800CFC04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _subaddieDll_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x800CFC04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800CFC08:
    // 0x800CFC08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFC0C: jal         0x800CF8D0
    // 0x800CFC10: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800CF8D0(rdram, ctx);
        goto after_3;
    // 0x800CFC10: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x800CFC14: beq         $v0, $zero, L_800CFC28
    if (ctx->r2 == 0) {
        // 0x800CFC18: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800CFC28;
    }
    // 0x800CFC18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CFC1C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x800CFC20: jal         0x8010108C
    // 0x800CFC24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8010108C(rdram, ctx);
        goto after_4;
    // 0x800CFC24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_800CFC28:
    // 0x800CFC28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFC2C: jal         0x800CF918
    // 0x800CFC30: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800CF918(rdram, ctx);
        goto after_5;
    // 0x800CFC30: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x800CFC34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CFC38: beq         $v0, $at, L_800CFC4C
    if (ctx->r2 == ctx->r1) {
        // 0x800CFC3C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800CFC4C;
    }
    // 0x800CFC3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CFC40: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    // 0x800CFC44: jal         0x8010108C
    // 0x800CFC48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8010108C(rdram, ctx);
        goto after_6;
    // 0x800CFC48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_800CFC4C:
    // 0x800CFC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CFC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CFC54: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CFC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFC5C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800CFC60: lw          $t6, -0x51A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X51A0);
    // 0x800CFC64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CFC68: subu        $a0, $a0, $t6
    ctx->r4 = SUB32(ctx->r4, ctx->r14);
    // 0x800CFC6C: bltz        $a0, L_800CFC84
    if (SIGNED(ctx->r4) < 0) {
            // 0x800CFC70: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    func_800CFC84(rdram, ctx);
    return;
    }
    // 0x800CFC70: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x800CFC74: beq         $at, $zero, L_800CFC84
    if (ctx->r1 == 0) {
            // 0x800CFC78: nop

    func_800CFC84(rdram, ctx);
    return;
    }
    // 0x800CFC78: nop

    // 0x800CFC7C: jr          $ra
    // 0x800CFC80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800CFC80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_800CFC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFC84: jr          $ra
    // 0x800CFC88: nop

    return;
    // 0x800CFC88: nop

;}
RECOMP_FUNC void func_800CFC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFC8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CFC90: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800CFC94: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800CFC98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800CFC9C: sltiu       $at, $a0, 0x9
    ctx->r1 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x800CFCA0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800CFCA4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800CFCA8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800CFCAC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800CFCB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CFCB4: beq         $at, $zero, L_800CFF98
    if (ctx->r1 == 0) {
        // 0x800CFCB8: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800CFF98;
    }
    // 0x800CFCB8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800CFCBC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CFCC0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CFCC4: addu        $at, $at, $t6
    gpr jr_addend_800CFCCC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CFCC8: lw          $t6, 0x59D0($at)
    ctx->r14 = ADD32(ctx->r1, 0X59D0);
    // 0x800CFCCC: jr          $t6
    // 0x800CFCD0: nop

    switch (jr_addend_800CFCCC >> 2) {
        case 0: goto L_800CFCD4; break;
        case 1: goto L_800CFD38; break;
        case 2: goto L_800CFD98; break;
        case 3: goto L_800CFDF8; break;
        case 4: goto L_800CFE58; break;
        case 5: goto L_800CFEB8; break;
        case 6: goto L_800CFED8; break;
        case 7: goto L_800CFF58; break;
        case 8: goto L_800CFF78; break;
        default: switch_error(__func__, 0x800CFCCC, 0x801259D0);
    }
    // 0x800CFCD0: nop

L_800CFCD4:
    // 0x800CFCD4: jal         0x800D0820
    // 0x800CFCD8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800CFCD8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x800CFCDC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CFCE0: jal         0x800D0894
    // 0x800CFCE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800CFCE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x800CFCE8: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFCEC: bne         $at, $zero, L_800CFD30
    if (ctx->r1 != 0) {
        // 0x800CFCF0: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_800CFD30;
    }
    // 0x800CFCF0: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x800CFCF4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800CFCF8: addiu       $t8, $t8, -0x54C0
    ctx->r24 = ADD32(ctx->r24, -0X54C0);
    // 0x800CFCFC: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x800CFD00: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x800CFD04: lbu         $t9, -0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, -0X3);
L_800CFD08:
    // 0x800CFD08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800CFD0C: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    // 0x800CFD10: bne         $s4, $t9, L_800CFD1C
    if (ctx->r20 != ctx->r25) {
        // 0x800CFD14: nop
    
            goto L_800CFD1C;
    }
    // 0x800CFD14: nop

    // 0x800CFD18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800CFD1C:
    // 0x800CFD1C: jal         0x800D0894
    // 0x800CFD20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_2;
    // 0x800CFD20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x800CFD24: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFD28: beql        $at, $zero, L_800CFD08
    if (ctx->r1 == 0) {
        // 0x800CFD2C: lbu         $t9, -0x3($s0)
        ctx->r25 = MEM_BU(ctx->r16, -0X3);
            goto L_800CFD08;
    }
    goto skip_0;
    // 0x800CFD2C: lbu         $t9, -0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, -0X3);
    skip_0:
L_800CFD30:
    // 0x800CFD30: b           L_800CFF9C
    // 0x800CFD34: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800CFF9C;
    // 0x800CFD34: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800CFD38:
    // 0x800CFD38: jal         0x800D0820
    // 0x800CFD3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_3;
    // 0x800CFD3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x800CFD40: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CFD44: jal         0x800D0894
    // 0x800CFD48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_4;
    // 0x800CFD48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x800CFD4C: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFD50: bne         $at, $zero, L_800CFD90
    if (ctx->r1 != 0) {
        // 0x800CFD54: sll         $t0, $s1, 1
        ctx->r8 = S32(ctx->r17 << 1);
            goto L_800CFD90;
    }
    // 0x800CFD54: sll         $t0, $s1, 1
    ctx->r8 = S32(ctx->r17 << 1);
    // 0x800CFD58: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800CFD5C: addiu       $t1, $t1, -0x5438
    ctx->r9 = ADD32(ctx->r9, -0X5438);
    // 0x800CFD60: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x800CFD64: lbu         $t2, -0x2($s0)
    ctx->r10 = MEM_BU(ctx->r16, -0X2);
L_800CFD68:
    // 0x800CFD68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800CFD6C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800CFD70: bne         $s4, $t2, L_800CFD7C
    if (ctx->r20 != ctx->r10) {
        // 0x800CFD74: nop
    
            goto L_800CFD7C;
    }
    // 0x800CFD74: nop

    // 0x800CFD78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800CFD7C:
    // 0x800CFD7C: jal         0x800D0894
    // 0x800CFD80: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_5;
    // 0x800CFD80: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x800CFD84: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFD88: beql        $at, $zero, L_800CFD68
    if (ctx->r1 == 0) {
        // 0x800CFD8C: lbu         $t2, -0x2($s0)
        ctx->r10 = MEM_BU(ctx->r16, -0X2);
            goto L_800CFD68;
    }
    goto skip_1;
    // 0x800CFD8C: lbu         $t2, -0x2($s0)
    ctx->r10 = MEM_BU(ctx->r16, -0X2);
    skip_1:
L_800CFD90:
    // 0x800CFD90: b           L_800CFF9C
    // 0x800CFD94: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800CFF9C;
    // 0x800CFD94: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800CFD98:
    // 0x800CFD98: jal         0x800D0820
    // 0x800CFD9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_6;
    // 0x800CFD9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x800CFDA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CFDA4: jal         0x800D0894
    // 0x800CFDA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_7;
    // 0x800CFDA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x800CFDAC: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFDB0: bne         $at, $zero, L_800CFDF0
    if (ctx->r1 != 0) {
        // 0x800CFDB4: sll         $t3, $s1, 1
        ctx->r11 = S32(ctx->r17 << 1);
            goto L_800CFDF0;
    }
    // 0x800CFDB4: sll         $t3, $s1, 1
    ctx->r11 = S32(ctx->r17 << 1);
    // 0x800CFDB8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800CFDBC: addiu       $t4, $t4, -0x5384
    ctx->r12 = ADD32(ctx->r12, -0X5384);
    // 0x800CFDC0: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
    // 0x800CFDC4: lbu         $t5, -0x2($s0)
    ctx->r13 = MEM_BU(ctx->r16, -0X2);
L_800CFDC8:
    // 0x800CFDC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800CFDCC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800CFDD0: bne         $s4, $t5, L_800CFDDC
    if (ctx->r20 != ctx->r13) {
        // 0x800CFDD4: nop
    
            goto L_800CFDDC;
    }
    // 0x800CFDD4: nop

    // 0x800CFDD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800CFDDC:
    // 0x800CFDDC: jal         0x800D0894
    // 0x800CFDE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_8;
    // 0x800CFDE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
    // 0x800CFDE4: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFDE8: beql        $at, $zero, L_800CFDC8
    if (ctx->r1 == 0) {
        // 0x800CFDEC: lbu         $t5, -0x2($s0)
        ctx->r13 = MEM_BU(ctx->r16, -0X2);
            goto L_800CFDC8;
    }
    goto skip_2;
    // 0x800CFDEC: lbu         $t5, -0x2($s0)
    ctx->r13 = MEM_BU(ctx->r16, -0X2);
    skip_2:
L_800CFDF0:
    // 0x800CFDF0: b           L_800CFF9C
    // 0x800CFDF4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800CFF9C;
    // 0x800CFDF4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800CFDF8:
    // 0x800CFDF8: jal         0x800D0820
    // 0x800CFDFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_9;
    // 0x800CFDFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x800CFE00: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CFE04: jal         0x800D0894
    // 0x800CFE08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_10;
    // 0x800CFE08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x800CFE0C: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFE10: bne         $at, $zero, L_800CFE50
    if (ctx->r1 != 0) {
        // 0x800CFE14: sll         $t6, $s1, 1
        ctx->r14 = S32(ctx->r17 << 1);
            goto L_800CFE50;
    }
    // 0x800CFE14: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x800CFE18: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CFE1C: addiu       $t7, $t7, -0x5350
    ctx->r15 = ADD32(ctx->r15, -0X5350);
    // 0x800CFE20: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800CFE24: lbu         $t8, -0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, -0X2);
L_800CFE28:
    // 0x800CFE28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800CFE2C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800CFE30: bne         $s4, $t8, L_800CFE3C
    if (ctx->r20 != ctx->r24) {
        // 0x800CFE34: nop
    
            goto L_800CFE3C;
    }
    // 0x800CFE34: nop

    // 0x800CFE38: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800CFE3C:
    // 0x800CFE3C: jal         0x800D0894
    // 0x800CFE40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_11;
    // 0x800CFE40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_11:
    // 0x800CFE44: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFE48: beql        $at, $zero, L_800CFE28
    if (ctx->r1 == 0) {
        // 0x800CFE4C: lbu         $t8, -0x2($s0)
        ctx->r24 = MEM_BU(ctx->r16, -0X2);
            goto L_800CFE28;
    }
    goto skip_3;
    // 0x800CFE4C: lbu         $t8, -0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, -0X2);
    skip_3:
L_800CFE50:
    // 0x800CFE50: b           L_800CFF9C
    // 0x800CFE54: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800CFF9C;
    // 0x800CFE54: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800CFE58:
    // 0x800CFE58: jal         0x800D0820
    // 0x800CFE5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_12;
    // 0x800CFE5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x800CFE60: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CFE64: jal         0x800D0894
    // 0x800CFE68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_13;
    // 0x800CFE68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_13:
    // 0x800CFE6C: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFE70: bne         $at, $zero, L_800CFEB0
    if (ctx->r1 != 0) {
        // 0x800CFE74: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_800CFEB0;
    }
    // 0x800CFE74: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x800CFE78: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800CFE7C: addiu       $t0, $t0, -0x532C
    ctx->r8 = ADD32(ctx->r8, -0X532C);
    // 0x800CFE80: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x800CFE84: lbu         $t1, -0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, -0X2);
L_800CFE88:
    // 0x800CFE88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800CFE8C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800CFE90: bne         $s4, $t1, L_800CFE9C
    if (ctx->r20 != ctx->r9) {
        // 0x800CFE94: nop
    
            goto L_800CFE9C;
    }
    // 0x800CFE94: nop

    // 0x800CFE98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800CFE9C:
    // 0x800CFE9C: jal         0x800D0894
    // 0x800CFEA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_14;
    // 0x800CFEA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_14:
    // 0x800CFEA4: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFEA8: beql        $at, $zero, L_800CFE88
    if (ctx->r1 == 0) {
        // 0x800CFEAC: lbu         $t1, -0x2($s0)
        ctx->r9 = MEM_BU(ctx->r16, -0X2);
            goto L_800CFE88;
    }
    goto skip_4;
    // 0x800CFEAC: lbu         $t1, -0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, -0X2);
    skip_4:
L_800CFEB0:
    // 0x800CFEB0: b           L_800CFF9C
    // 0x800CFEB4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800CFF9C;
    // 0x800CFEB4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800CFEB8:
    // 0x800CFEB8: jal         0x800D0894
    // 0x800CFEBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_15;
    // 0x800CFEBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_15:
    // 0x800CFEC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CFEC4: jal         0x800D0820
    // 0x800CFEC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_16;
    // 0x800CFEC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_16:
    // 0x800CFECC: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x800CFED0: b           L_800CFF9C
    // 0x800CFED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_800CFF9C;
    // 0x800CFED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800CFED8:
    // 0x800CFED8: jal         0x800D0820
    // 0x800CFEDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_17;
    // 0x800CFEDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_17:
    // 0x800CFEE0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CFEE4: jal         0x800D0894
    // 0x800CFEE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_18;
    // 0x800CFEE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_18:
    // 0x800CFEEC: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFEF0: bne         $at, $zero, L_800CFF50
    if (ctx->r1 != 0) {
        // 0x800CFEF4: sll         $t2, $s1, 1
        ctx->r10 = S32(ctx->r17 << 1);
            goto L_800CFF50;
    }
    // 0x800CFEF4: sll         $t2, $s1, 1
    ctx->r10 = S32(ctx->r17 << 1);
    // 0x800CFEF8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800CFEFC: addiu       $t3, $t3, -0x52F8
    ctx->r11 = ADD32(ctx->r11, -0X52F8);
    // 0x800CFF00: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    // 0x800CFF04: lbu         $t4, -0x2($s0)
    ctx->r12 = MEM_BU(ctx->r16, -0X2);
L_800CFF08:
    // 0x800CFF08: bnel        $s4, $t4, L_800CFF38
    if (ctx->r20 != ctx->r12) {
        // 0x800CFF0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800CFF38;
    }
    goto skip_5;
    // 0x800CFF0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x800CFF10: lbu         $t5, -0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, -0X1);
    // 0x800CFF14: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    // 0x800CFF18: beq         $t5, $zero, L_800CFF28
    if (ctx->r13 == 0) {
        // 0x800CFF1C: nop
    
            goto L_800CFF28;
    }
    // 0x800CFF1C: nop

    // 0x800CFF20: b           L_800CFF28
    // 0x800CFF24: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
        goto L_800CFF28;
    // 0x800CFF24: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
L_800CFF28:
    // 0x800CFF28: jal         0x80085AD8
    // 0x800CFF2C: nop

    _chnests_entrypoint_13(rdram, ctx);
        goto after_19;
    // 0x800CFF2C: nop

    after_19:
    // 0x800CFF30: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x800CFF34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800CFF38:
    // 0x800CFF38: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800CFF3C: jal         0x800D0894
    // 0x800CFF40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_20;
    // 0x800CFF40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_20:
    // 0x800CFF44: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800CFF48: beql        $at, $zero, L_800CFF08
    if (ctx->r1 == 0) {
        // 0x800CFF4C: lbu         $t4, -0x2($s0)
        ctx->r12 = MEM_BU(ctx->r16, -0X2);
            goto L_800CFF08;
    }
    goto skip_6;
    // 0x800CFF4C: lbu         $t4, -0x2($s0)
    ctx->r12 = MEM_BU(ctx->r16, -0X2);
    skip_6:
L_800CFF50:
    // 0x800CFF50: b           L_800CFF9C
    // 0x800CFF54: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800CFF9C;
    // 0x800CFF54: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800CFF58:
    // 0x800CFF58: jal         0x800D0894
    // 0x800CFF5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_21;
    // 0x800CFF5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_21:
    // 0x800CFF60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CFF64: jal         0x800D0820
    // 0x800CFF68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_22;
    // 0x800CFF68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_22:
    // 0x800CFF6C: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x800CFF70: b           L_800CFF9C
    // 0x800CFF74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_800CFF9C;
    // 0x800CFF74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800CFF78:
    // 0x800CFF78: jal         0x800D0894
    // 0x800CFF7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0894(rdram, ctx);
        goto after_23;
    // 0x800CFF7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_23:
    // 0x800CFF80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CFF84: jal         0x800D0820
    // 0x800CFF88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800D0820(rdram, ctx);
        goto after_24;
    // 0x800CFF88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_24:
    // 0x800CFF8C: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x800CFF90: b           L_800CFF9C
    // 0x800CFF94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_800CFF9C;
    // 0x800CFF94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800CFF98:
    // 0x800CFF98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CFF9C:
    // 0x800CFF9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFFA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CFFA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFFA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800CFFAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800CFFB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800CFFB4: jr          $ra
    // 0x800CFFB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800CFFB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CFFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFFBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CFFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CFFC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CFFC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CFFCC: jal         0x800D0820
    // 0x800CFFD0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800CFFD0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800CFFD4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800CFFD8: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CFFDC: bnel        $at, $zero, L_800D0008
    if (ctx->r1 != 0) {
        // 0x800CFFE0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800D0008;
    }
    goto skip_0;
    // 0x800CFFE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800CFFE4: jal         0x800D0894
    // 0x800CFFE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800CFFE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800CFFEC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800CFFF0: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800CFFF4: bnel        $at, $zero, L_800D0008
    if (ctx->r1 != 0) {
        // 0x800CFFF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800D0008;
    }
    goto skip_1;
    // 0x800CFFF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x800CFFFC: b           L_800D0008
    // 0x800D0000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800D0008;
    // 0x800D0000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800D0004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D0008:
    // 0x800D0008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D000C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0010: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0018: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D001C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D0020: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D0024: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D0028: sltiu       $at, $a0, 0x7
    ctx->r1 = ctx->r4 < 0X7 ? 1 : 0;
    // 0x800D002C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800D0030: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800D0034: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D0038: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D003C: beq         $at, $zero, L_800D02F4
    if (ctx->r1 == 0) {
        // 0x800D0040: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800D02F4;
    }
    // 0x800D0040: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D0044: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D0048: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D004C: addu        $at, $at, $t6
    gpr jr_addend_800D0054 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D0050: lw          $t6, 0x59F4($at)
    ctx->r14 = ADD32(ctx->r1, 0X59F4);
    // 0x800D0054: jr          $t6
    // 0x800D0058: nop

    switch (jr_addend_800D0054 >> 2) {
        case 0: goto L_800D005C; break;
        case 1: goto L_800D00C8; break;
        case 2: goto L_800D0130; break;
        case 3: goto L_800D0198; break;
        case 4: goto L_800D0200; break;
        case 5: goto L_800D02F4; break;
        case 6: goto L_800D0268; break;
        default: switch_error(__func__, 0x800D0054, 0x801259F4);
    }
    // 0x800D0058: nop

L_800D005C:
    // 0x800D005C: jal         0x800D0820
    // 0x800D0060: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800D0060: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800D0064: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D0068: jal         0x800D0894
    // 0x800D006C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800D006C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800D0070: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0074: bne         $at, $zero, L_800D00C0
    if (ctx->r1 != 0) {
        // 0x800D0078: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D00C0;
    }
    // 0x800D0078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D007C:
    // 0x800D007C: jal         0x800D0B68
    // 0x800D0080: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_2;
    // 0x800D0080: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800D0084: beq         $v0, $zero, L_800D00AC
    if (ctx->r2 == 0) {
        // 0x800D0088: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800D00AC;
    }
    // 0x800D0088: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D008C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800D0090: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x800D0094: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D0098: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D009C: lbu         $t8, -0x54C3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X54C3);
    // 0x800D00A0: bne         $s3, $t8, L_800D00AC
    if (ctx->r19 != ctx->r24) {
        // 0x800D00A4: nop
    
            goto L_800D00AC;
    }
    // 0x800D00A4: nop

    // 0x800D00A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D00AC:
    // 0x800D00AC: jal         0x800D0894
    // 0x800D00B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800D0894(rdram, ctx);
        goto after_3;
    // 0x800D00B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_3:
    // 0x800D00B4: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D00B8: beql        $at, $zero, L_800D007C
    if (ctx->r1 == 0) {
        // 0x800D00BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D007C;
    }
    goto skip_0;
    // 0x800D00BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_800D00C0:
    // 0x800D00C0: b           L_800D0340
    // 0x800D00C4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800D0340;
    // 0x800D00C4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D00C8:
    // 0x800D00C8: jal         0x800D0820
    // 0x800D00CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_4;
    // 0x800D00CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800D00D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D00D4: jal         0x800D0894
    // 0x800D00D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_5;
    // 0x800D00D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800D00DC: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D00E0: bne         $at, $zero, L_800D0128
    if (ctx->r1 != 0) {
        // 0x800D00E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0128;
    }
    // 0x800D00E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D00E8:
    // 0x800D00E8: jal         0x800D0B68
    // 0x800D00EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_6;
    // 0x800D00EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800D00F0: beq         $v0, $zero, L_800D0114
    if (ctx->r2 == 0) {
        // 0x800D00F4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800D0114;
    }
    // 0x800D00F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D00F8: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x800D00FC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800D0100: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D0104: lbu         $t0, -0x543A($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X543A);
    // 0x800D0108: bne         $s3, $t0, L_800D0114
    if (ctx->r19 != ctx->r8) {
        // 0x800D010C: nop
    
            goto L_800D0114;
    }
    // 0x800D010C: nop

    // 0x800D0110: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D0114:
    // 0x800D0114: jal         0x800D0894
    // 0x800D0118: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800D0894(rdram, ctx);
        goto after_7;
    // 0x800D0118: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x800D011C: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0120: beql        $at, $zero, L_800D00E8
    if (ctx->r1 == 0) {
        // 0x800D0124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D00E8;
    }
    goto skip_1;
    // 0x800D0124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_800D0128:
    // 0x800D0128: b           L_800D0340
    // 0x800D012C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800D0340;
    // 0x800D012C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D0130:
    // 0x800D0130: jal         0x800D0820
    // 0x800D0134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_8;
    // 0x800D0134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x800D0138: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D013C: jal         0x800D0894
    // 0x800D0140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_9;
    // 0x800D0140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x800D0144: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0148: bne         $at, $zero, L_800D0190
    if (ctx->r1 != 0) {
        // 0x800D014C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0190;
    }
    // 0x800D014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D0150:
    // 0x800D0150: jal         0x800D0B68
    // 0x800D0154: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_10;
    // 0x800D0154: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x800D0158: beq         $v0, $zero, L_800D017C
    if (ctx->r2 == 0) {
        // 0x800D015C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800D017C;
    }
    // 0x800D015C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D0160: sll         $t1, $s0, 1
    ctx->r9 = S32(ctx->r16 << 1);
    // 0x800D0164: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800D0168: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800D016C: lbu         $t2, -0x5386($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X5386);
    // 0x800D0170: bne         $s3, $t2, L_800D017C
    if (ctx->r19 != ctx->r10) {
        // 0x800D0174: nop
    
            goto L_800D017C;
    }
    // 0x800D0174: nop

    // 0x800D0178: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D017C:
    // 0x800D017C: jal         0x800D0894
    // 0x800D0180: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800D0894(rdram, ctx);
        goto after_11;
    // 0x800D0180: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x800D0184: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0188: beql        $at, $zero, L_800D0150
    if (ctx->r1 == 0) {
        // 0x800D018C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0150;
    }
    goto skip_2;
    // 0x800D018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_800D0190:
    // 0x800D0190: b           L_800D0340
    // 0x800D0194: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800D0340;
    // 0x800D0194: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D0198:
    // 0x800D0198: jal         0x800D0820
    // 0x800D019C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_12;
    // 0x800D019C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x800D01A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D01A4: jal         0x800D0894
    // 0x800D01A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_13;
    // 0x800D01A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x800D01AC: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D01B0: bne         $at, $zero, L_800D01F8
    if (ctx->r1 != 0) {
        // 0x800D01B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D01F8;
    }
    // 0x800D01B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D01B8:
    // 0x800D01B8: jal         0x800D0B68
    // 0x800D01BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_14;
    // 0x800D01BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x800D01C0: beq         $v0, $zero, L_800D01E4
    if (ctx->r2 == 0) {
        // 0x800D01C4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800D01E4;
    }
    // 0x800D01C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D01C8: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x800D01CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800D01D0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D01D4: lbu         $t4, -0x5352($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X5352);
    // 0x800D01D8: bne         $s3, $t4, L_800D01E4
    if (ctx->r19 != ctx->r12) {
        // 0x800D01DC: nop
    
            goto L_800D01E4;
    }
    // 0x800D01DC: nop

    // 0x800D01E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D01E4:
    // 0x800D01E4: jal         0x800D0894
    // 0x800D01E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800D0894(rdram, ctx);
        goto after_15;
    // 0x800D01E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_15:
    // 0x800D01EC: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D01F0: beql        $at, $zero, L_800D01B8
    if (ctx->r1 == 0) {
        // 0x800D01F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D01B8;
    }
    goto skip_3;
    // 0x800D01F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
L_800D01F8:
    // 0x800D01F8: b           L_800D0340
    // 0x800D01FC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800D0340;
    // 0x800D01FC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D0200:
    // 0x800D0200: jal         0x800D0820
    // 0x800D0204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_16;
    // 0x800D0204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x800D0208: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D020C: jal         0x800D0894
    // 0x800D0210: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_17;
    // 0x800D0210: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x800D0214: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0218: bne         $at, $zero, L_800D0260
    if (ctx->r1 != 0) {
        // 0x800D021C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0260;
    }
    // 0x800D021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D0220:
    // 0x800D0220: jal         0x800D0B68
    // 0x800D0224: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_18;
    // 0x800D0224: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_18:
    // 0x800D0228: beq         $v0, $zero, L_800D024C
    if (ctx->r2 == 0) {
        // 0x800D022C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800D024C;
    }
    // 0x800D022C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D0230: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x800D0234: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D0238: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D023C: lbu         $t6, -0x532E($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X532E);
    // 0x800D0240: bne         $s3, $t6, L_800D024C
    if (ctx->r19 != ctx->r14) {
        // 0x800D0244: nop
    
            goto L_800D024C;
    }
    // 0x800D0244: nop

    // 0x800D0248: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D024C:
    // 0x800D024C: jal         0x800D0894
    // 0x800D0250: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800D0894(rdram, ctx);
        goto after_19;
    // 0x800D0250: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_19:
    // 0x800D0254: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0258: beql        $at, $zero, L_800D0220
    if (ctx->r1 == 0) {
        // 0x800D025C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0220;
    }
    goto skip_4;
    // 0x800D025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
L_800D0260:
    // 0x800D0260: b           L_800D0340
    // 0x800D0264: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800D0340;
    // 0x800D0264: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D0268:
    // 0x800D0268: jal         0x800D0820
    // 0x800D026C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_20;
    // 0x800D026C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x800D0270: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D0274: jal         0x800D0894
    // 0x800D0278: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_21;
    // 0x800D0278: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x800D027C: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0280: bne         $at, $zero, L_800D02EC
    if (ctx->r1 != 0) {
        // 0x800D0284: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D02EC;
    }
    // 0x800D0284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D0288:
    // 0x800D0288: jal         0x800D0B68
    // 0x800D028C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_22;
    // 0x800D028C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_22:
    // 0x800D0290: beq         $v0, $zero, L_800D02D4
    if (ctx->r2 == 0) {
        // 0x800D0294: sll         $t7, $s0, 1
        ctx->r15 = S32(ctx->r16 << 1);
            goto L_800D02D4;
    }
    // 0x800D0294: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
    // 0x800D0298: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D029C: addiu       $t8, $t8, -0x52F8
    ctx->r24 = ADD32(ctx->r24, -0X52F8);
    // 0x800D02A0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800D02A4: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x800D02A8: bnel        $s3, $t9, L_800D02D8
    if (ctx->r19 != ctx->r25) {
        // 0x800D02AC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800D02D8;
    }
    goto skip_5;
    // 0x800D02AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x800D02B0: lbu         $t0, -0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X1);
    // 0x800D02B4: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    // 0x800D02B8: beq         $t0, $zero, L_800D02C8
    if (ctx->r8 == 0) {
        // 0x800D02BC: nop
    
            goto L_800D02C8;
    }
    // 0x800D02BC: nop

    // 0x800D02C0: b           L_800D02C8
    // 0x800D02C4: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
        goto L_800D02C8;
    // 0x800D02C4: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
L_800D02C8:
    // 0x800D02C8: jal         0x80085AD8
    // 0x800D02CC: nop

    _chnests_entrypoint_13(rdram, ctx);
        goto after_23;
    // 0x800D02CC: nop

    after_23:
    // 0x800D02D0: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_800D02D4:
    // 0x800D02D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800D02D8:
    // 0x800D02D8: jal         0x800D0894
    // 0x800D02DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_24;
    // 0x800D02DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_24:
    // 0x800D02E0: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D02E4: beql        $at, $zero, L_800D0288
    if (ctx->r1 == 0) {
        // 0x800D02E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0288;
    }
    goto skip_6;
    // 0x800D02E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_6:
L_800D02EC:
    // 0x800D02EC: b           L_800D0340
    // 0x800D02F0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800D0340;
    // 0x800D02F0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D02F4:
    // 0x800D02F4: jal         0x800D0820
    // 0x800D02F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_25;
    // 0x800D02F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x800D02FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D0300: jal         0x800D0894
    // 0x800D0304: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_26;
    // 0x800D0304: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_26:
    // 0x800D0308: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D030C: bne         $at, $zero, L_800D033C
    if (ctx->r1 != 0) {
        // 0x800D0310: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D033C;
    }
    // 0x800D0310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D0314:
    // 0x800D0314: jal         0x800D0B68
    // 0x800D0318: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_27;
    // 0x800D0318: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_27:
    // 0x800D031C: beq         $v0, $zero, L_800D0328
    if (ctx->r2 == 0) {
        // 0x800D0320: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800D0328;
    }
    // 0x800D0320: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800D0324: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D0328:
    // 0x800D0328: jal         0x800D0894
    // 0x800D032C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_28;
    // 0x800D032C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_28:
    // 0x800D0330: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0334: beql        $at, $zero, L_800D0314
    if (ctx->r1 == 0) {
        // 0x800D0338: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0314;
    }
    goto skip_7;
    // 0x800D0338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
L_800D033C:
    // 0x800D033C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800D0340:
    // 0x800D0340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D0344: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D0348: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D034C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D0350: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D0354: jr          $ra
    // 0x800D0358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D0358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D035C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D035C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D0360: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D0364: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D0368: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800D036C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800D0370: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D0374: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D0378: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D037C: bne         $a0, $at, L_800D0404
    if (ctx->r4 != ctx->r1) {
        // 0x800D0380: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800D0404;
    }
    // 0x800D0380: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D0384: jal         0x800D0820
    // 0x800D0388: nop

    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800D0388: nop

    after_0:
    // 0x800D038C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D0390: jal         0x800D0894
    // 0x800D0394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800D0394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800D0398: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D039C: bne         $at, $zero, L_800D044C
    if (ctx->r1 != 0) {
        // 0x800D03A0: lui         $s3, 0x8012
        ctx->r19 = S32(0X8012 << 16);
            goto L_800D044C;
    }
    // 0x800D03A0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x800D03A4: addiu       $s3, $s3, -0x52F8
    ctx->r19 = ADD32(ctx->r19, -0X52F8);
    // 0x800D03A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D03AC:
    // 0x800D03AC: jal         0x800D0B68
    // 0x800D03B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_2;
    // 0x800D03B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800D03B4: beq         $v0, $zero, L_800D03E4
    if (ctx->r2 == 0) {
        // 0x800D03B8: sll         $t6, $s0, 1
        ctx->r14 = S32(ctx->r16 << 1);
            goto L_800D03E4;
    }
    // 0x800D03B8: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x800D03BC: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x800D03C0: lbu         $t8, -0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X1);
    // 0x800D03C4: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    // 0x800D03C8: beq         $t8, $zero, L_800D03D8
    if (ctx->r24 == 0) {
        // 0x800D03CC: nop
    
            goto L_800D03D8;
    }
    // 0x800D03CC: nop

    // 0x800D03D0: b           L_800D03D8
    // 0x800D03D4: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
        goto L_800D03D8;
    // 0x800D03D4: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
L_800D03D8:
    // 0x800D03D8: jal         0x80085AD8
    // 0x800D03DC: nop

    _chnests_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x800D03DC: nop

    after_3:
    // 0x800D03E0: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_800D03E4:
    // 0x800D03E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800D03E8: jal         0x800D0894
    // 0x800D03EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_4;
    // 0x800D03EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800D03F0: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D03F4: beql        $at, $zero, L_800D03AC
    if (ctx->r1 == 0) {
        // 0x800D03F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D03AC;
    }
    goto skip_0;
    // 0x800D03F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800D03FC: b           L_800D0450
    // 0x800D0400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800D0450;
    // 0x800D0400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D0404:
    // 0x800D0404: jal         0x800D0820
    // 0x800D0408: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0820(rdram, ctx);
        goto after_5;
    // 0x800D0408: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800D040C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D0410: jal         0x800D0894
    // 0x800D0414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_6;
    // 0x800D0414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800D0418: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D041C: bne         $at, $zero, L_800D044C
    if (ctx->r1 != 0) {
        // 0x800D0420: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D044C;
    }
    // 0x800D0420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D0424:
    // 0x800D0424: jal         0x800D0B68
    // 0x800D0428: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_7;
    // 0x800D0428: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x800D042C: beq         $v0, $zero, L_800D0438
    if (ctx->r2 == 0) {
        // 0x800D0430: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800D0438;
    }
    // 0x800D0430: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800D0434: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D0438:
    // 0x800D0438: jal         0x800D0894
    // 0x800D043C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_8;
    // 0x800D043C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x800D0440: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0444: beql        $at, $zero, L_800D0424
    if (ctx->r1 == 0) {
        // 0x800D0448: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D0424;
    }
    goto skip_1;
    // 0x800D0448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_800D044C:
    // 0x800D044C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D0450:
    // 0x800D0450: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800D0454: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D0458: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D045C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D0460: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D0464: jr          $ra
    // 0x800D0468: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D0468: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D046C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D046C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0470: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D0474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0478: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800D047C: jal         0x800D0A80
    // 0x800D0480: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800D0A80(rdram, ctx);
        goto after_0;
    // 0x800D0480: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800D0484: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D0488: jal         0x800DAC78
    // 0x800D048C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800DAC78(rdram, ctx);
        goto after_1;
    // 0x800D048C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800D0490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0498: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D04A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D04A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D04A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800D04A8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800D04AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D04B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800D04B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800D04B8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800D04BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800D04C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D04C4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D04C8: jal         0x800D0820
    // 0x800D04CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800D04CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800D04D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D04D4: jal         0x800D0894
    // 0x800D04D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800D04D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800D04DC: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D04E0: bne         $at, $zero, L_800D0518
    if (ctx->r1 != 0) {
        // 0x800D04E4: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_800D0518;
    }
    // 0x800D04E4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800D04E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_800D04EC:
    // 0x800D04EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D04F0: jal         0x800D046C
    // 0x800D04F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800D046C(rdram, ctx);
        goto after_2;
    // 0x800D04F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x800D04F8: bne         $v0, $s3, L_800D0504
    if (ctx->r2 != ctx->r19) {
        // 0x800D04FC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800D0504;
    }
    // 0x800D04FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800D0500: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D0504:
    // 0x800D0504: jal         0x800D0894
    // 0x800D0508: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D0894(rdram, ctx);
        goto after_3;
    // 0x800D0508: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800D050C: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D0510: beql        $at, $zero, L_800D04EC
    if (ctx->r1 == 0) {
        // 0x800D0514: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800D04EC;
    }
    goto skip_0;
    // 0x800D0514: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
L_800D0518:
    // 0x800D0518: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D051C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800D0520: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800D0524: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D0528: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800D052C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800D0530: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800D0534: jr          $ra
    // 0x800D0538: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D0538: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D053C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D053C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D0540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0544: bne         $a1, $at, L_800D0584
    if (ctx->r5 != ctx->r1) {
        // 0x800D0548: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D0584;
    }
    // 0x800D0548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D054C: jal         0x800CFC5C
    // 0x800D0550: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D0550: nop

    after_0:
    // 0x800D0554: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D0558: beql        $v0, $at, L_800D0588
    if (ctx->r2 == ctx->r1) {
        // 0x800D055C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D0588;
    }
    goto skip_0;
    // 0x800D055C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D0560: jal         0x800EA05C
    // 0x800D0564: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x800D0564: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800D0568: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800D056C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D0570: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x800D0574: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x800D0578: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D057C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D0580: sh          $v0, -0x4E70($at)
    MEM_H(-0X4E70, ctx->r1) = ctx->r2;
L_800D0584:
    // 0x800D0584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D0588:
    // 0x800D0588: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D058C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0598: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D059C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D05A0: bne         $a1, $at, L_800D05D4
    if (ctx->r5 != ctx->r1) {
        // 0x800D05A4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800D05D4;
    }
    // 0x800D05A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800D05A8: jal         0x800CFC5C
    // 0x800D05AC: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D05AC: nop

    after_0:
    // 0x800D05B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D05B4: beq         $v0, $at, L_800D05D4
    if (ctx->r2 == ctx->r1) {
        // 0x800D05B8: lh          $t6, 0x22($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X22);
            goto L_800D05D4;
    }
    // 0x800D05B8: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800D05BC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800D05C0: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x800D05C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D05C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D05CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D05D0: sh          $t6, -0x4E70($at)
    MEM_H(-0X4E70, ctx->r1) = ctx->r14;
L_800D05D4:
    // 0x800D05D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D05D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D05DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D05E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D05E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D05E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D05EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D05F0: bne         $a1, $at, L_800D0624
    if (ctx->r5 != ctx->r1) {
        // 0x800D05F4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800D0624;
    }
    // 0x800D05F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800D05F8: jal         0x800CFC5C
    // 0x800D05FC: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D05FC: nop

    after_0:
    // 0x800D0600: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D0604: beq         $v0, $at, L_800D0624
    if (ctx->r2 == ctx->r1) {
        // 0x800D0608: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_800D0624;
    }
    // 0x800D0608: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800D060C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800D0610: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x800D0614: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0618: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D061C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D0620: sw          $t6, -0x4E74($at)
    MEM_W(-0X4E74, ctx->r1) = ctx->r14;
L_800D0624:
    // 0x800D0624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D062C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0638: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D063C: bne         $a1, $at, L_800D0670
    if (ctx->r5 != ctx->r1) {
        // 0x800D0640: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D0670;
    }
    // 0x800D0640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0644: jal         0x800CFC5C
    // 0x800D0648: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D0648: nop

    after_0:
    // 0x800D064C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D0650: beq         $v0, $at, L_800D0670
    if (ctx->r2 == ctx->r1) {
        // 0x800D0654: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_800D0670;
    }
    // 0x800D0654: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D0658: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800D065C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D0660: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D0664: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D0668: b           L_800D0674
    // 0x800D066C: lw          $v0, -0x4E74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4E74);
        goto L_800D0674;
    // 0x800D066C: lw          $v0, -0x4E74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4E74);
L_800D0670:
    // 0x800D0670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D0674:
    // 0x800D0674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D067C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D068C: bne         $a1, $at, L_800D06C0
    if (ctx->r5 != ctx->r1) {
        // 0x800D0690: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D06C0;
    }
    // 0x800D0690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0694: jal         0x800CFC5C
    // 0x800D0698: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D0698: nop

    after_0:
    // 0x800D069C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D06A0: beq         $v0, $at, L_800D06C0
    if (ctx->r2 == ctx->r1) {
        // 0x800D06A4: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_800D06C0;
    }
    // 0x800D06A4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D06A8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800D06AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D06B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D06B4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D06B8: b           L_800D06C4
    // 0x800D06BC: lh          $v0, -0x4E70($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X4E70);
        goto L_800D06C4;
    // 0x800D06BC: lh          $v0, -0x4E70($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X4E70);
L_800D06C0:
    // 0x800D06C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D06C4:
    // 0x800D06C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D06C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D06CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D06D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D06D4: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
    // 0x800D06D8: beq         $at, $zero, L_800D0770
    if (ctx->r1 == 0) {
        // 0x800D06DC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800D0770;
    }
    // 0x800D06DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800D06E0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800D06E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D06E8: addu        $at, $at, $t6
    gpr jr_addend_800D06F0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D06EC: lw          $t6, 0x5A10($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A10);
    // 0x800D06F0: jr          $t6
    // 0x800D06F4: nop

    switch (jr_addend_800D06F0 >> 2) {
        case 0: goto L_800D070C; break;
        case 1: goto L_800D06F8; break;
        case 2: goto L_800D074C; break;
        case 3: goto L_800D0738; break;
        case 4: goto L_800D0724; break;
        case 5: goto L_800D0760; break;
        case 6: goto L_800D0768; break;
        default: switch_error(__func__, 0x800D06F0, 0x80125A10);
    }
    // 0x800D06F4: nop

L_800D06F8:
    // 0x800D06F8: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x800D06FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D0700: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800D0704: jr          $ra
    // 0x800D0708: lbu         $v0, -0x543A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X543A);
    return;
    // 0x800D0708: lbu         $v0, -0x543A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X543A);
L_800D070C:
    // 0x800D070C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800D0710: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x800D0714: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D0718: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x800D071C: jr          $ra
    // 0x800D0720: lbu         $v0, -0x54C3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54C3);
    return;
    // 0x800D0720: lbu         $v0, -0x54C3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54C3);
L_800D0724:
    // 0x800D0724: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x800D0728: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D072C: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800D0730: jr          $ra
    // 0x800D0734: lbu         $v0, -0x532E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X532E);
    return;
    // 0x800D0734: lbu         $v0, -0x532E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X532E);
L_800D0738:
    // 0x800D0738: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x800D073C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D0740: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800D0744: jr          $ra
    // 0x800D0748: lbu         $v0, -0x5352($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5352);
    return;
    // 0x800D0748: lbu         $v0, -0x5352($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5352);
L_800D074C:
    // 0x800D074C: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x800D0750: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D0754: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800D0758: jr          $ra
    // 0x800D075C: lbu         $v0, -0x5386($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5386);
    return;
    // 0x800D075C: lbu         $v0, -0x5386($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5386);
L_800D0760:
    // 0x800D0760: jr          $ra
    // 0x800D0764: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x800D0764: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_800D0768:
    // 0x800D0768: jr          $ra
    // 0x800D076C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800D076C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800D0770:
    // 0x800D0770: jr          $ra
    // 0x800D0774: nop

    return;
    // 0x800D0774: nop

;}
RECOMP_FUNC void func_800D0778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D077C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0784: bne         $a1, $at, L_800D07BC
    if (ctx->r5 != ctx->r1) {
        // 0x800D0788: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800D07BC;
    }
    // 0x800D0788: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800D078C: jal         0x800CFC5C
    // 0x800D0790: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D0790: nop

    after_0:
    // 0x800D0794: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D0798: beq         $v0, $at, L_800D07BC
    if (ctx->r2 == ctx->r1) {
        // 0x800D079C: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_800D07BC;
    }
    // 0x800D079C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D07A0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800D07A4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800D07A8: addiu       $t7, $t7, -0x4E80
    ctx->r15 = ADD32(ctx->r15, -0X4E80);
    // 0x800D07AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D07B0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800D07B4: jal         0x800EE7F8
    // 0x800D07B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800D07B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
L_800D07BC:
    // 0x800D07BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D07C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D07C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D07CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D07CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D07D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D07D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D07D8: bne         $a1, $at, L_800D0810
    if (ctx->r5 != ctx->r1) {
        // 0x800D07DC: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800D0810;
    }
    // 0x800D07DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800D07E0: jal         0x800CFC5C
    // 0x800D07E4: nop

    func_800CFC5C(rdram, ctx);
        goto after_0;
    // 0x800D07E4: nop

    after_0:
    // 0x800D07E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D07EC: beq         $v0, $at, L_800D0810
    if (ctx->r2 == ctx->r1) {
        // 0x800D07F0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800D0810;
    }
    // 0x800D07F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800D07F4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D07F8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800D07FC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800D0800: addiu       $t7, $t7, -0x4E80
    ctx->r15 = ADD32(ctx->r15, -0X4E80);
    // 0x800D0804: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D0808: jal         0x800EE7F8
    // 0x800D080C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800D080C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    after_1:
L_800D0810:
    // 0x800D0810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0818: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0820: sltiu       $at, $a0, 0x9
    ctx->r1 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x800D0824: beq         $at, $zero, L_800D088C
    if (ctx->r1 == 0) {
        // 0x800D0828: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800D088C;
    }
    // 0x800D0828: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800D082C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D0830: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D0834: addu        $at, $at, $t6
    gpr jr_addend_800D083C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D0838: lw          $t6, 0x5A2C($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A2C);
    // 0x800D083C: jr          $t6
    // 0x800D0840: nop

    switch (jr_addend_800D083C >> 2) {
        case 0: goto L_800D0844; break;
        case 1: goto L_800D084C; break;
        case 2: goto L_800D0854; break;
        case 3: goto L_800D085C; break;
        case 4: goto L_800D0864; break;
        case 5: goto L_800D086C; break;
        case 6: goto L_800D0874; break;
        case 7: goto L_800D087C; break;
        case 8: goto L_800D0884; break;
        default: switch_error(__func__, 0x800D083C, 0x80125A2C);
    }
    // 0x800D0840: nop

L_800D0844:
    // 0x800D0844: jr          $ra
    // 0x800D0848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D084C:
    // 0x800D084C: jr          $ra
    // 0x800D0850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D0854:
    // 0x800D0854: jr          $ra
    // 0x800D0858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D085C:
    // 0x800D085C: jr          $ra
    // 0x800D0860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D0864:
    // 0x800D0864: jr          $ra
    // 0x800D0868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D086C:
    // 0x800D086C: jr          $ra
    // 0x800D0870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D0874:
    // 0x800D0874: jr          $ra
    // 0x800D0878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D087C:
    // 0x800D087C: jr          $ra
    // 0x800D0880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D0884:
    // 0x800D0884: jr          $ra
    // 0x800D0888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D0888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D088C:
    // 0x800D088C: jr          $ra
    // 0x800D0890: nop

    return;
    // 0x800D0890: nop

;}
RECOMP_FUNC void func_800D0894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0894: sltiu       $at, $a0, 0x9
    ctx->r1 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x800D0898: beq         $at, $zero, L_800D0900
    if (ctx->r1 == 0) {
        // 0x800D089C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800D0900;
    }
    // 0x800D089C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800D08A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D08A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D08A8: addu        $at, $at, $t6
    gpr jr_addend_800D08B0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D08AC: lw          $t6, 0x5A50($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A50);
    // 0x800D08B0: jr          $t6
    // 0x800D08B4: nop

    switch (jr_addend_800D08B0 >> 2) {
        case 0: goto L_800D08B8; break;
        case 1: goto L_800D08C0; break;
        case 2: goto L_800D08C8; break;
        case 3: goto L_800D08D0; break;
        case 4: goto L_800D08D8; break;
        case 5: goto L_800D08E0; break;
        case 6: goto L_800D08E8; break;
        case 7: goto L_800D08F0; break;
        case 8: goto L_800D08F8; break;
        default: switch_error(__func__, 0x800D08B0, 0x80125A50);
    }
    // 0x800D08B4: nop

L_800D08B8:
    // 0x800D08B8: jr          $ra
    // 0x800D08BC: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    return;
    // 0x800D08BC: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_800D08C0:
    // 0x800D08C0: jr          $ra
    // 0x800D08C4: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    return;
    // 0x800D08C4: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_800D08C8:
    // 0x800D08C8: jr          $ra
    // 0x800D08CC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    return;
    // 0x800D08CC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_800D08D0:
    // 0x800D08D0: jr          $ra
    // 0x800D08D4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    // 0x800D08D4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_800D08D8:
    // 0x800D08D8: jr          $ra
    // 0x800D08DC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    return;
    // 0x800D08DC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_800D08E0:
    // 0x800D08E0: jr          $ra
    // 0x800D08E4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    return;
    // 0x800D08E4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_800D08E8:
    // 0x800D08E8: jr          $ra
    // 0x800D08EC: addiu       $v0, $zero, 0x99
    ctx->r2 = ADD32(0, 0X99);
    return;
    // 0x800D08EC: addiu       $v0, $zero, 0x99
    ctx->r2 = ADD32(0, 0X99);
L_800D08F0:
    // 0x800D08F0: jr          $ra
    // 0x800D08F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    return;
    // 0x800D08F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_800D08F8:
    // 0x800D08F8: jr          $ra
    // 0x800D08FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800D08FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_800D0900:
    // 0x800D0900: jr          $ra
    // 0x800D0904: nop

    return;
    // 0x800D0904: nop

;}
RECOMP_FUNC void func_800D0908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0908: sltiu       $at, $a1, 0x9
    ctx->r1 = ctx->r5 < 0X9 ? 1 : 0;
    // 0x800D090C: beq         $at, $zero, L_800D0A74
    if (ctx->r1 == 0) {
        // 0x800D0910: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_800D0A74;
    }
    // 0x800D0910: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800D0914: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D0918: addu        $at, $at, $t6
    gpr jr_addend_800D0920 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D091C: lw          $t6, 0x5A74($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A74);
    // 0x800D0920: jr          $t6
    // 0x800D0924: nop

    switch (jr_addend_800D0920 >> 2) {
        case 0: goto L_800D0928; break;
        case 1: goto L_800D095C; break;
        case 2: goto L_800D09BC; break;
        case 3: goto L_800D09EC; break;
        case 4: goto L_800D098C; break;
        case 5: goto L_800D0A74; break;
        case 6: goto L_800D0A74; break;
        case 7: goto L_800D0A1C; break;
        case 8: goto L_800D0A48; break;
        default: switch_error(__func__, 0x800D0920, 0x80125A74);
    }
    // 0x800D0924: nop

L_800D0928:
    // 0x800D0928: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800D092C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800D0930: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D0934: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x800D0938: lbu         $v1, -0x54C1($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54C1);
    // 0x800D093C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800D0940: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800D0944: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D0948: addu        $t9, $t9, $t8
        ctx->r25 = ADD32(ctx->r25, ctx->r24);
            goto L_800D0A74;
    }
    // 0x800D0948: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D094C: lw          $t9, -0x50D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X50D8);
    // 0x800D0950: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x800D0954: jr          $ra
    // 0x800D0958: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D0958: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D095C:
    // 0x800D095C: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x800D0960: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D0964: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x800D0968: lbu         $v1, -0x5439($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5439);
    // 0x800D096C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x800D0970: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800D0974: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D0978: addu        $t2, $t2, $t1
        ctx->r10 = ADD32(ctx->r10, ctx->r9);
            goto L_800D0A74;
    }
    // 0x800D0978: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800D097C: lw          $t2, -0x50D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X50D8);
    // 0x800D0980: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x800D0984: jr          $ra
    // 0x800D0988: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D0988: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D098C:
    // 0x800D098C: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x800D0990: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D0994: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x800D0998: lbu         $v1, -0x532D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X532D);
    // 0x800D099C: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x800D09A0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800D09A4: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D09A8: addu        $t5, $t5, $t4
        ctx->r13 = ADD32(ctx->r13, ctx->r12);
            goto L_800D0A74;
    }
    // 0x800D09A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D09AC: lw          $t5, -0x50D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X50D8);
    // 0x800D09B0: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x800D09B4: jr          $ra
    // 0x800D09B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D09B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D09BC:
    // 0x800D09BC: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800D09C0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D09C4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x800D09C8: lbu         $v1, -0x5385($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5385);
    // 0x800D09CC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800D09D0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D09D4: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D09D8: addu        $t8, $t8, $t7
        ctx->r24 = ADD32(ctx->r24, ctx->r15);
            goto L_800D0A74;
    }
    // 0x800D09D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D09DC: lw          $t8, -0x50D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X50D8);
    // 0x800D09E0: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x800D09E4: jr          $ra
    // 0x800D09E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D09E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D09EC:
    // 0x800D09EC: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x800D09F0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D09F4: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x800D09F8: lbu         $v1, -0x5351($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5351);
    // 0x800D09FC: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x800D0A00: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800D0A04: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D0A08: addu        $t1, $t1, $t0
        ctx->r9 = ADD32(ctx->r9, ctx->r8);
            goto L_800D0A74;
    }
    // 0x800D0A08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D0A0C: lw          $t1, -0x50D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X50D8);
    // 0x800D0A10: addu        $v0, $v1, $t1
    ctx->r2 = ADD32(ctx->r3, ctx->r9);
    // 0x800D0A14: jr          $ra
    // 0x800D0A18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D0A18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D0A1C:
    // 0x800D0A1C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D0A20: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800D0A24: lbu         $v1, -0x51C5($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X51C5);
    // 0x800D0A28: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x800D0A2C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800D0A30: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D0A34: addu        $t3, $t3, $t2
        ctx->r11 = ADD32(ctx->r11, ctx->r10);
            goto L_800D0A74;
    }
    // 0x800D0A34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D0A38: lw          $t3, -0x50D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X50D8);
    // 0x800D0A3C: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
    // 0x800D0A40: jr          $ra
    // 0x800D0A44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D0A44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D0A48:
    // 0x800D0A48: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D0A4C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800D0A50: lbu         $v1, -0x51A5($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X51A5);
    // 0x800D0A54: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x800D0A58: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800D0A5C: beq         $v1, $zero, L_800D0A74
    if (ctx->r3 == 0) {
        // 0x800D0A60: addu        $t5, $t5, $t4
        ctx->r13 = ADD32(ctx->r13, ctx->r12);
            goto L_800D0A74;
    }
    // 0x800D0A60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D0A64: lw          $t5, -0x50D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X50D8);
    // 0x800D0A68: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x800D0A6C: jr          $ra
    // 0x800D0A70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D0A70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800D0A74:
    // 0x800D0A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D0A78: jr          $ra
    // 0x800D0A7C: nop

    return;
    // 0x800D0A7C: nop

;}
RECOMP_FUNC void func_800D0A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0A80: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800D0A84: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D0A88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0A8C: lw          $t7, -0x50FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X50FC);
    // 0x800D0A90: addu        $v0, $t7, $a0
    ctx->r2 = ADD32(ctx->r15, ctx->r4);
    // 0x800D0A94: jr          $ra
    // 0x800D0A98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x800D0A98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_800D0A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0AA4: jal         0x800D0908
    // 0x800D0AA8: nop

    func_800D0908(rdram, ctx);
        goto after_0;
    // 0x800D0AA8: nop

    after_0:
    // 0x800D0AAC: bne         $v0, $zero, L_800D0ABC
    if (ctx->r2 != 0) {
        // 0x800D0AB0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D0ABC;
    }
    // 0x800D0AB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0AB4: b           L_800D0AF8
    // 0x800D0AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800D0AF8;
    // 0x800D0AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D0ABC:
    // 0x800D0ABC: jal         0x800DA298
    // 0x800D0AC0: nop

    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800D0AC0: nop

    after_1:
    // 0x800D0AC4: bne         $v0, $zero, L_800D0AEC
    if (ctx->r2 != 0) {
        // 0x800D0AC8: nop
    
            goto L_800D0AEC;
    }
    // 0x800D0AC8: nop

    // 0x800D0ACC: jal         0x80088848
    // 0x800D0AD0: nop

    _glcutDll_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x800D0AD0: nop

    after_2:
    // 0x800D0AD4: bne         $v0, $zero, L_800D0AEC
    if (ctx->r2 != 0) {
        // 0x800D0AD8: nop
    
            goto L_800D0AEC;
    }
    // 0x800D0AD8: nop

    // 0x800D0ADC: jal         0x800D395C
    // 0x800D0AE0: nop

    func_800D395C(rdram, ctx);
        goto after_3;
    // 0x800D0AE0: nop

    after_3:
    // 0x800D0AE4: beq         $v0, $zero, L_800D0AF4
    if (ctx->r2 == 0) {
        // 0x800D0AE8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800D0AF4;
    }
    // 0x800D0AE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800D0AEC:
    // 0x800D0AEC: b           L_800D0AF4
    // 0x800D0AF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800D0AF4;
    // 0x800D0AF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800D0AF4:
    // 0x800D0AF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800D0AF8:
    // 0x800D0AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0B00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0B10: jal         0x800D0908
    // 0x800D0B14: nop

    func_800D0908(rdram, ctx);
        goto after_0;
    // 0x800D0B14: nop

    after_0:
    // 0x800D0B18: beq         $v0, $zero, L_800D0B28
    if (ctx->r2 == 0) {
        // 0x800D0B1C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D0B28;
    }
    // 0x800D0B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0B20: jal         0x800DA544
    // 0x800D0B24: nop

    func_800DA544(rdram, ctx);
        goto after_1;
    // 0x800D0B24: nop

    after_1:
L_800D0B28:
    // 0x800D0B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0B30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0B40: jal         0x800D0908
    // 0x800D0B44: nop

    func_800D0908(rdram, ctx);
        goto after_0;
    // 0x800D0B44: nop

    after_0:
    // 0x800D0B48: beq         $v0, $zero, L_800D0B58
    if (ctx->r2 == 0) {
        // 0x800D0B4C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D0B58;
    }
    // 0x800D0B4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0B50: jal         0x800DA524
    // 0x800D0B54: nop

    func_800DA524(rdram, ctx);
        goto after_1;
    // 0x800D0B54: nop

    after_1:
L_800D0B58:
    // 0x800D0B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0B60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0B70: jal         0x800D0A80
    // 0x800D0B74: nop

    func_800D0A80(rdram, ctx);
        goto after_0;
    // 0x800D0B74: nop

    after_0:
    // 0x800D0B78: bne         $v0, $zero, L_800D0B88
    if (ctx->r2 != 0) {
        // 0x800D0B7C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D0B88;
    }
    // 0x800D0B7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0B80: b           L_800D0BC4
    // 0x800D0B84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800D0BC4;
    // 0x800D0B84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800D0B88:
    // 0x800D0B88: jal         0x800DA298
    // 0x800D0B8C: nop

    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800D0B8C: nop

    after_1:
    // 0x800D0B90: bne         $v0, $zero, L_800D0BB8
    if (ctx->r2 != 0) {
        // 0x800D0B94: nop
    
            goto L_800D0BB8;
    }
    // 0x800D0B94: nop

    // 0x800D0B98: jal         0x80088848
    // 0x800D0B9C: nop

    _glcutDll_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x800D0B9C: nop

    after_2:
    // 0x800D0BA0: bne         $v0, $zero, L_800D0BB8
    if (ctx->r2 != 0) {
        // 0x800D0BA4: nop
    
            goto L_800D0BB8;
    }
    // 0x800D0BA4: nop

    // 0x800D0BA8: jal         0x800D395C
    // 0x800D0BAC: nop

    func_800D395C(rdram, ctx);
        goto after_3;
    // 0x800D0BAC: nop

    after_3:
    // 0x800D0BB0: beq         $v0, $zero, L_800D0BC0
    if (ctx->r2 == 0) {
        // 0x800D0BB4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800D0BC0;
    }
    // 0x800D0BB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800D0BB8:
    // 0x800D0BB8: b           L_800D0BC0
    // 0x800D0BBC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800D0BC0;
    // 0x800D0BBC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800D0BC0:
    // 0x800D0BC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800D0BC4:
    // 0x800D0BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0BCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0BD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D0BD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D0BDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D0BE0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800D0BE4: jal         0x800D0A80
    // 0x800D0BE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D0A80(rdram, ctx);
        goto after_0;
    // 0x800D0BE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D0BEC: beq         $v0, $zero, L_800D0C64
    if (ctx->r2 == 0) {
        // 0x800D0BF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D0C64;
    }
    // 0x800D0BF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0BF4: jal         0x800DA544
    // 0x800D0BF8: nop

    func_800DA544(rdram, ctx);
        goto after_1;
    // 0x800D0BF8: nop

    after_1:
    // 0x800D0BFC: beq         $s0, $zero, L_800D0C4C
    if (ctx->r16 == 0) {
        // 0x800D0C00: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800D0C4C;
    }
    // 0x800D0C00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0C04: beq         $s0, $at, L_800D0C34
    if (ctx->r16 == ctx->r1) {
        // 0x800D0C08: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800D0C34;
    }
    // 0x800D0C08: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800D0C0C: bnel        $s0, $at, L_800D0C68
    if (ctx->r16 != ctx->r1) {
        // 0x800D0C10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D0C68;
    }
    goto skip_0;
    // 0x800D0C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800D0C14: jal         0x800D035C
    // 0x800D0C18: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_800D035C(rdram, ctx);
        goto after_2;
    // 0x800D0C18: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x800D0C1C: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x800D0C20: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800D0C24: jal         0x800D24E8
    // 0x800D0C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800D24E8(rdram, ctx);
        goto after_3;
    // 0x800D0C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800D0C2C: b           L_800D0C68
    // 0x800D0C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0C68;
    // 0x800D0C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0C34:
    // 0x800D0C34: jal         0x800D035C
    // 0x800D0C38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D035C(rdram, ctx);
        goto after_4;
    // 0x800D0C38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800D0C3C: addiu       $a0, $zero, 0xD6
    ctx->r4 = ADD32(0, 0XD6);
    // 0x800D0C40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800D0C44: jal         0x800D24E8
    // 0x800D0C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800D24E8(rdram, ctx);
        goto after_5;
    // 0x800D0C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800D0C4C:
    // 0x800D0C4C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800D0C50: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x800D0C54: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x800D0C58: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800D0C5C: jal         0x80101238
    // 0x800D0C60: or          $a1, $t7, $t8
    ctx->r5 = ctx->r15 | ctx->r24;
    func_80101238(rdram, ctx);
        goto after_6;
    // 0x800D0C60: or          $a1, $t7, $t8
    ctx->r5 = ctx->r15 | ctx->r24;
    after_6:
L_800D0C64:
    // 0x800D0C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0C68:
    // 0x800D0C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D0C6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D0C70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D0C88: bne         $a1, $at, L_800D0CB8
    if (ctx->r5 != ctx->r1) {
        // 0x800D0C8C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800D0CB8;
    }
    // 0x800D0C8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800D0C90: jal         0x800D0B08
    // 0x800D0C94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D0B08(rdram, ctx);
        goto after_0;
    // 0x800D0C94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D0C98: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800D0C9C: jal         0x800D0BD4
    // 0x800D0CA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800D0BD4(rdram, ctx);
        goto after_1;
    // 0x800D0CA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800D0CA4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800D0CA8: bnel        $t6, $zero, L_800D0CBC
    if (ctx->r14 != 0) {
        // 0x800D0CAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D0CBC;
    }
    goto skip_0;
    // 0x800D0CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D0CB0: jal         0x800FC660
    // 0x800D0CB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800FC660(rdram, ctx);
        goto after_2;
    // 0x800D0CB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
L_800D0CB8:
    // 0x800D0CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D0CBC:
    // 0x800D0CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0CC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0CC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D0CCC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800D0CD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D0CD4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D0CD8: jr          $ra
    // 0x800D0CDC: lbu         $v0, -0x54C2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54C2);
    return;
    // 0x800D0CDC: lbu         $v0, -0x54C2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54C2);
;}
RECOMP_FUNC void func_800D0CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D0CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D0CE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D0CEC: sltiu       $at, $a2, 0x7
    ctx->r1 = ctx->r6 < 0X7 ? 1 : 0;
    // 0x800D0CF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D0CF4: beq         $at, $zero, L_800D0D94
    if (ctx->r1 == 0) {
        // 0x800D0CF8: sw          $zero, 0x0($a3)
        MEM_W(0X0, ctx->r7) = 0;
            goto L_800D0D94;
    }
    // 0x800D0CF8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x800D0CFC: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x800D0D00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D0D04: addu        $at, $at, $t6
    gpr jr_addend_800D0D0C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D0D08: lw          $t6, 0x5A98($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A98);
    // 0x800D0D0C: jr          $t6
    // 0x800D0D10: nop

    switch (jr_addend_800D0D0C >> 2) {
        case 0: goto L_800D0D14; break;
        case 1: goto L_800D0D28; break;
        case 2: goto L_800D0D58; break;
        case 3: goto L_800D0D50; break;
        case 4: goto L_800D0D3C; break;
        case 5: goto L_800D0D6C; break;
        case 6: goto L_800D0D80; break;
        default: switch_error(__func__, 0x800D0D0C, 0x80125A98);
    }
    // 0x800D0D10: nop

L_800D0D14:
    // 0x800D0D14: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x800D0D18: jal         0x80085900
    // 0x800D0D1C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    _chbounce_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x800D0D1C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x800D0D20: b           L_800D0D9C
    // 0x800D0D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0D9C;
    // 0x800D0D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D28:
    // 0x800D0D28: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x800D0D2C: jal         0x80085900
    // 0x800D0D30: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    _chbounce_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800D0D30: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x800D0D34: b           L_800D0D9C
    // 0x800D0D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0D9C;
    // 0x800D0D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D3C:
    // 0x800D0D3C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x800D0D40: jal         0x80085900
    // 0x800D0D44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    _chbounce_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x800D0D44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x800D0D48: b           L_800D0D9C
    // 0x800D0D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0D9C;
    // 0x800D0D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D50:
    // 0x800D0D50: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D0D54: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_800D0D58:
    // 0x800D0D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D0D5C: jal         0x80108474
    // 0x800D0D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80108474(rdram, ctx);
        goto after_3;
    // 0x800D0D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800D0D64: b           L_800D0D9C
    // 0x800D0D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0D9C;
    // 0x800D0D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D6C:
    // 0x800D0D6C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x800D0D70: jal         0x80085900
    // 0x800D0D74: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    _chbounce_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x800D0D74: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x800D0D78: b           L_800D0D9C
    // 0x800D0D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0D9C;
    // 0x800D0D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D80:
    // 0x800D0D80: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800D0D84: jal         0x80085900
    // 0x800D0D88: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    _chbounce_entrypoint_7(rdram, ctx);
        goto after_5;
    // 0x800D0D88: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x800D0D8C: b           L_800D0D9C
    // 0x800D0D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D0D9C;
    // 0x800D0D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D94:
    // 0x800D0D94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D0D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D0D9C:
    // 0x800D0D9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D0DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D0DA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D0DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0DAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D0DB0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800D0DB4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D0DB8: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x800D0DBC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800D0DC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D0DC4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D0DC8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800D0DCC: beq         $at, $zero, L_800D0F28
    if (ctx->r1 == 0) {
        // 0x800D0DD0: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_800D0F28;
    }
    // 0x800D0DD0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800D0DD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D0DD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D0DDC: addu        $at, $at, $t7
    gpr jr_addend_800D0DE4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D0DE0: lw          $t7, 0x5AB4($at)
    ctx->r15 = ADD32(ctx->r1, 0X5AB4);
    // 0x800D0DE4: jr          $t7
    // 0x800D0DE8: nop

    switch (jr_addend_800D0DE4 >> 2) {
        case 0: goto L_800D0E38; break;
        case 1: goto L_800D0DEC; break;
        case 2: goto L_800D0EA8; break;
        case 3: goto L_800D0EC8; break;
        case 4: goto L_800D0E70; break;
        case 5: goto L_800D0F28; break;
        case 6: goto L_800D0F28; break;
        case 7: goto L_800D0EE8; break;
        case 8: goto L_800D0F08; break;
        default: switch_error(__func__, 0x800D0DE4, 0x80125AB4);
    }
    // 0x800D0DE8: nop

L_800D0DEC:
    // 0x800D0DEC: addiu       $a0, $zero, 0x21F
    ctx->r4 = ADD32(0, 0X21F);
    // 0x800D0DF0: jal         0x800D0CE0
    // 0x800D0DF4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_0;
    // 0x800D0DF4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800D0DF8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800D0DFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0E00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0E04: bne         $t8, $zero, L_800D0E14
    if (ctx->r24 != 0) {
        // 0x800D0E08: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_800D0E14;
    }
    // 0x800D0E08: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x800D0E0C: jal         0x8010108C
    // 0x800D0E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8010108C(rdram, ctx);
        goto after_1;
    // 0x800D0E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_800D0E14:
    // 0x800D0E14: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D0E18: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0E1C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x800D0E20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D0E24: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800D0E28: jal         0x800D05E4
    // 0x800D0E2C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    func_800D05E4(rdram, ctx);
        goto after_2;
    // 0x800D0E2C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x800D0E30: b           L_800D0F38
    // 0x800D0E34: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
        goto L_800D0F38;
    // 0x800D0E34: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_800D0E38:
    // 0x800D0E38: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x800D0E3C: jal         0x800D0CE0
    // 0x800D0E40: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_3;
    // 0x800D0E40: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x800D0E44: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800D0E48: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0E4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0E50: bne         $t1, $zero, L_800D0E60
    if (ctx->r9 != 0) {
        // 0x800D0E54: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_800D0E60;
    }
    // 0x800D0E54: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x800D0E58: jal         0x8010108C
    // 0x800D0E5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8010108C(rdram, ctx);
        goto after_4;
    // 0x800D0E5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_800D0E60:
    // 0x800D0E60: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0E64: andi        $t2, $s0, 0xFFFF
    ctx->r10 = ctx->r16 & 0XFFFF;
    // 0x800D0E68: b           L_800D0F34
    // 0x800D0E6C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
        goto L_800D0F34;
    // 0x800D0E6C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_800D0E70:
    // 0x800D0E70: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    // 0x800D0E74: jal         0x800D0CE0
    // 0x800D0E78: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_5;
    // 0x800D0E78: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x800D0E7C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800D0E80: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0E84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D0E88: bne         $t3, $zero, L_800D0E98
    if (ctx->r11 != 0) {
        // 0x800D0E8C: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_800D0E98;
    }
    // 0x800D0E8C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x800D0E90: jal         0x8010108C
    // 0x800D0E94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8010108C(rdram, ctx);
        goto after_6;
    // 0x800D0E94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_800D0E98:
    // 0x800D0E98: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0E9C: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x800D0EA0: b           L_800D0F34
    // 0x800D0EA4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
        goto L_800D0F34;
    // 0x800D0EA4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_800D0EA8:
    // 0x800D0EA8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x800D0EAC: jal         0x800D0CE0
    // 0x800D0EB0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_7;
    // 0x800D0EB0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x800D0EB4: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0EB8: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x800D0EBC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0EC0: b           L_800D0F34
    // 0x800D0EC4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
        goto L_800D0F34;
    // 0x800D0EC4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_800D0EC8:
    // 0x800D0EC8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    // 0x800D0ECC: jal         0x800D0CE0
    // 0x800D0ED0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_8;
    // 0x800D0ED0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_8:
    // 0x800D0ED4: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0ED8: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x800D0EDC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0EE0: b           L_800D0F34
    // 0x800D0EE4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
        goto L_800D0F34;
    // 0x800D0EE4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_800D0EE8:
    // 0x800D0EE8: addiu       $a0, $zero, 0x4E5
    ctx->r4 = ADD32(0, 0X4E5);
    // 0x800D0EEC: jal         0x800D0CE0
    // 0x800D0EF0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_9;
    // 0x800D0EF0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_9:
    // 0x800D0EF4: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0EF8: andi        $t7, $s0, 0xFFFF
    ctx->r15 = ctx->r16 & 0XFFFF;
    // 0x800D0EFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0F00: b           L_800D0F34
    // 0x800D0F04: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
        goto L_800D0F34;
    // 0x800D0F04: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_800D0F08:
    // 0x800D0F08: addiu       $a0, $zero, 0x3C6
    ctx->r4 = ADD32(0, 0X3C6);
    // 0x800D0F0C: jal         0x800D0CE0
    // 0x800D0F10: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_800D0CE0(rdram, ctx);
        goto after_10;
    // 0x800D0F10: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x800D0F14: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0F18: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x800D0F1C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0F20: b           L_800D0F34
    // 0x800D0F24: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
        goto L_800D0F34;
    // 0x800D0F24: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800D0F28:
    // 0x800D0F28: sra         $s0, $s1, 16
    ctx->r16 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800D0F2C: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x800D0F30: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_800D0F34:
    // 0x800D0F34: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_800D0F38:
    // 0x800D0F38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D0F3C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800D0F40: jal         0x800CFBC8
    // 0x800D0F44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800CFBC8(rdram, ctx);
        goto after_11;
    // 0x800D0F44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x800D0F48: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D0F4C: beql        $t0, $zero, L_800D0F84
    if (ctx->r8 == 0) {
        // 0x800D0F50: lw          $t4, 0x2C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X2C);
            goto L_800D0F84;
    }
    goto skip_0;
    // 0x800D0F50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x800D0F54: lhu         $t1, 0x18($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X18);
    // 0x800D0F58: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D0F5C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800D0F60: beql        $t2, $zero, L_800D0F84
    if (ctx->r10 == 0) {
        // 0x800D0F64: lw          $t4, 0x2C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X2C);
            goto L_800D0F84;
    }
    goto skip_1;
    // 0x800D0F64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x800D0F68: jal         0x80101074
    // 0x800D0F6C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    func_80101074(rdram, ctx);
        goto after_12;
    // 0x800D0F6C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    after_12:
    // 0x800D0F70: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800D0F74: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x800D0F78: jal         0x8010114C
    // 0x800D0F7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8010114C(rdram, ctx);
        goto after_13;
    // 0x800D0F7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x800D0F80: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
L_800D0F84:
    // 0x800D0F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D0F88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D0F8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D0F90: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x800D0F94: jr          $ra
    // 0x800D0F98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D0F98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D0F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D0FA0: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x800D0FA4: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x800D0FA8: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x800D0FAC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800D0FB0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800D0FB4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800D0FB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D0FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0FC0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800D0FC4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800D0FC8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800D0FCC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D0FD0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x800D0FD4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0FD8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800D0FDC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800D0FE0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D0FE4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x800D0FE8: jal         0x800D0DAC
    // 0x800D0FEC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    func_800D0DAC(rdram, ctx);
        goto after_0;
    // 0x800D0FEC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D0FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0FF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D0FF8: jr          $ra
    // 0x800D0FFC: nop

    return;
    // 0x800D0FFC: nop

;}
RECOMP_FUNC void func_800D1000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1000: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800D1004: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D1008: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800D100C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800D1010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D1014: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800D1018: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800D101C: jal         0x800D0A9C
    // 0x800D1020: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_800D0A9C(rdram, ctx);
        goto after_0;
    // 0x800D1020: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800D1024: bne         $v0, $zero, L_800D10C0
    if (ctx->r2 != 0) {
        // 0x800D1028: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D10C0;
    }
    // 0x800D1028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D102C: jal         0x800D0B68
    // 0x800D1030: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_1;
    // 0x800D1030: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800D1034: bne         $v0, $zero, L_800D10C0
    if (ctx->r2 != 0) {
        // 0x800D1038: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D10C0;
    }
    // 0x800D1038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D103C: jal         0x800D0B08
    // 0x800D1040: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B08(rdram, ctx);
        goto after_2;
    // 0x800D1040: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800D1044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D1048: jal         0x800D053C
    // 0x800D104C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D053C(rdram, ctx);
        goto after_3;
    // 0x800D104C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800D1050: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800D1054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D1058: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800D105C: beq         $a1, $zero, L_800D1074
    if (ctx->r5 == 0) {
        // 0x800D1060: nop
    
            goto L_800D1074;
    }
    // 0x800D1060: nop

    // 0x800D1064: jal         0x800EE904
    // 0x800D1068: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EE904(rdram, ctx);
        goto after_4;
    // 0x800D1068: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x800D106C: b           L_800D108C
    // 0x800D1070: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
        goto L_800D108C;
    // 0x800D1070: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_800D1074:
    // 0x800D1074: jal         0x800D07CC
    // 0x800D1078: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D07CC(rdram, ctx);
        goto after_5;
    // 0x800D1078: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x800D107C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800D1080: jal         0x800EE904
    // 0x800D1084: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EE904(rdram, ctx);
        goto after_6;
    // 0x800D1084: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x800D1088: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_800D108C:
    // 0x800D108C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800D1090: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x800D1094: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800D1098: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x800D109C: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x800D10A0: or          $a1, $t6, $t7
    ctx->r5 = ctx->r14 | ctx->r15;
    // 0x800D10A4: addiu       $a0, $a0, 0xF9C
    ctx->r4 = ADD32(ctx->r4, 0XF9C);
    // 0x800D10A8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800D10AC: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800D10B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D10B4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800D10B8: jal         0x80086D58
    // 0x800D10BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    _chbaddiesetup_entrypoint_6(rdram, ctx);
        goto after_7;
    // 0x800D10BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_7:
L_800D10C0:
    // 0x800D10C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D10C4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800D10C8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800D10CC: jr          $ra
    // 0x800D10D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800D10D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800D10D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D10D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D10D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D10DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D10E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D10E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D10E8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800D10EC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800D10F0: jal         0x800D0A9C
    // 0x800D10F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_800D0A9C(rdram, ctx);
        goto after_0;
    // 0x800D10F4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800D10F8: beq         $v0, $zero, L_800D1108
    if (ctx->r2 == 0) {
        // 0x800D10FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D1108;
    }
    // 0x800D10FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D1100: b           L_800D1188
    // 0x800D1104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D1188;
    // 0x800D1104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D1108:
    // 0x800D1108: jal         0x800D0B68
    // 0x800D110C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B68(rdram, ctx);
        goto after_1;
    // 0x800D110C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800D1110: beq         $v0, $zero, L_800D1120
    if (ctx->r2 == 0) {
        // 0x800D1114: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D1120;
    }
    // 0x800D1114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D1118: b           L_800D1188
    // 0x800D111C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D1188;
    // 0x800D111C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D1120:
    // 0x800D1120: jal         0x800D0B08
    // 0x800D1124: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D0B08(rdram, ctx);
        goto after_2;
    // 0x800D1124: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800D1128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D112C: jal         0x800D053C
    // 0x800D1130: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D053C(rdram, ctx);
        goto after_3;
    // 0x800D1130: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800D1134: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800D1138: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x800D113C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D1140: beq         $a1, $zero, L_800D1164
    if (ctx->r5 == 0) {
        // 0x800D1144: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_800D1164;
    }
    // 0x800D1144: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800D1148: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x800D114C: or          $a0, $t6, $t7
    ctx->r4 = ctx->r14 | ctx->r15;
    // 0x800D1150: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1154: jal         0x800D0DAC
    // 0x800D1158: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800D0DAC(rdram, ctx);
        goto after_4;
    // 0x800D1158: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x800D115C: b           L_800D118C
    // 0x800D1160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800D118C;
    // 0x800D1160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D1164:
    // 0x800D1164: jal         0x800D07CC
    // 0x800D1168: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D07CC(rdram, ctx);
        goto after_5;
    // 0x800D1168: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x800D116C: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x800D1170: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x800D1174: or          $a0, $t8, $t9
    ctx->r4 = ctx->r24 | ctx->r25;
    // 0x800D1178: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800D117C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1180: jal         0x800D0DAC
    // 0x800D1184: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800D0DAC(rdram, ctx);
        goto after_6;
    // 0x800D1184: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_6:
L_800D1188:
    // 0x800D1188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D118C:
    // 0x800D118C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D1190: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D1194: jr          $ra
    // 0x800D1198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D1198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D119C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D119C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D11A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D11A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D11A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D11AC: jal         0x800D0B68
    // 0x800D11B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800D0B68(rdram, ctx);
        goto after_0;
    // 0x800D11B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D11B4: bne         $v0, $zero, L_800D1204
    if (ctx->r2 != 0) {
        // 0x800D11B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D1204;
    }
    // 0x800D11B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D11BC: jal         0x800D0A9C
    // 0x800D11C0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800D0A9C(rdram, ctx);
        goto after_1;
    // 0x800D11C0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800D11C4: beq         $v0, $zero, L_800D1204
    if (ctx->r2 == 0) {
        // 0x800D11C8: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_800D1204;
    }
    // 0x800D11C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D11CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D11D0: bne         $t6, $at, L_800D11F8
    if (ctx->r14 != ctx->r1) {
        // 0x800D11D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D11F8;
    }
    // 0x800D11D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D11D8: jal         0x800D0634
    // 0x800D11DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800D0634(rdram, ctx);
        goto after_2;
    // 0x800D11DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800D11E0: jal         0x800FFA88
    // 0x800D11E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800FFA88(rdram, ctx);
        goto after_3;
    // 0x800D11E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800D11E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D11EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D11F0: jal         0x800D05E4
    // 0x800D11F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800D05E4(rdram, ctx);
        goto after_4;
    // 0x800D11F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800D11F8:
    // 0x800D11F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D11FC: jal         0x800D0B38
    // 0x800D1200: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800D0B38(rdram, ctx);
        goto after_5;
    // 0x800D1200: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
L_800D1204:
    // 0x800D1204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D120C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D1210: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D121C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1220: jal         0x800D0634
    // 0x800D1224: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800D0634(rdram, ctx);
        goto after_0;
    // 0x800D1224: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800D1228: beq         $v0, $zero, L_800D1244
    if (ctx->r2 == 0) {
        // 0x800D122C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D1244;
    }
    // 0x800D122C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D1230: jal         0x80106790
    // 0x800D1234: nop

    func_80106790(rdram, ctx);
        goto after_1;
    // 0x800D1234: nop

    after_1:
    // 0x800D1238: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800D123C: jal         0x800EE7F8
    // 0x800D1240: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800D1240: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_2:
L_800D1244:
    // 0x800D1244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D124C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D125C: jal         0x800D0634
    // 0x800D1260: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800D0634(rdram, ctx);
        goto after_0;
    // 0x800D1260: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800D1264: beq         $v0, $zero, L_800D128C
    if (ctx->r2 == 0) {
        // 0x800D1268: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D128C;
    }
    // 0x800D1268: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D126C: jal         0x80106790
    // 0x800D1270: nop

    func_80106790(rdram, ctx);
        goto after_1;
    // 0x800D1270: nop

    after_1:
    // 0x800D1274: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800D1278: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x800D127C: jal         0x800EE7F8
    // 0x800D1280: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800D1280: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800D1284: jal         0x80103014
    // 0x800D1288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80103014(rdram, ctx);
        goto after_3;
    // 0x800D1288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
L_800D128C:
    // 0x800D128C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D1294: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D129C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D12A0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D12A4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800D12A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D12AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D12B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D12B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D12B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D12BC: jal         0x800D0820
    // 0x800D12C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800D12C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800D12C4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D12C8: jal         0x800D0894
    // 0x800D12CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800D12CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800D12D0: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800D12D4: bne         $at, $zero, L_800D1318
    if (ctx->r1 != 0) {
        // 0x800D12D8: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_800D1318;
    }
    // 0x800D12D8: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x800D12DC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D12E0: addiu       $t7, $t7, -0x54C0
    ctx->r15 = ADD32(ctx->r15, -0X54C0);
    // 0x800D12E4: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x800D12E8: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800D12EC: lbu         $t8, -0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, -0X2);
L_800D12F0:
    // 0x800D12F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800D12F4: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    // 0x800D12F8: bne         $s3, $t8, L_800D1304
    if (ctx->r19 != ctx->r24) {
        // 0x800D12FC: nop
    
            goto L_800D1304;
    }
    // 0x800D12FC: nop

    // 0x800D1300: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D1304:
    // 0x800D1304: jal         0x800D0894
    // 0x800D1308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D0894(rdram, ctx);
        goto after_2;
    // 0x800D1308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800D130C: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800D1310: beql        $at, $zero, L_800D12F0
    if (ctx->r1 == 0) {
        // 0x800D1314: lbu         $t8, -0x2($s0)
        ctx->r24 = MEM_BU(ctx->r16, -0X2);
            goto L_800D12F0;
    }
    goto skip_0;
    // 0x800D1314: lbu         $t8, -0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, -0X2);
    skip_0:
L_800D1318:
    // 0x800D1318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D131C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800D1320: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1324: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D1328: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D132C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D1330: jr          $ra
    // 0x800D1334: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D1334: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D1338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1338: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D133C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D1340: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800D1344: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D1348: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D134C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D1350: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D1354: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D1358: jal         0x800D0820
    // 0x800D135C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800D135C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800D1360: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D1364: jal         0x800D0894
    // 0x800D1368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800D1368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800D136C: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D1370: bne         $at, $zero, L_800D13C8
    if (ctx->r1 != 0) {
        // 0x800D1374: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_800D13C8;
    }
    // 0x800D1374: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x800D1378: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D137C: addiu       $t7, $t7, -0x54C0
    ctx->r15 = ADD32(ctx->r15, -0X54C0);
    // 0x800D1380: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x800D1384: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x800D1388: lbu         $t8, -0x2($s1)
    ctx->r24 = MEM_BU(ctx->r17, -0X2);
L_800D138C:
    // 0x800D138C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D1390: bnel        $s3, $t8, L_800D13B0
    if (ctx->r19 != ctx->r24) {
        // 0x800D1394: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800D13B0;
    }
    goto skip_0;
    // 0x800D1394: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800D1398: jal         0x800D0B68
    // 0x800D139C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D0B68(rdram, ctx);
        goto after_2;
    // 0x800D139C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D13A0: beql        $v0, $zero, L_800D13B0
    if (ctx->r2 == 0) {
        // 0x800D13A4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800D13B0;
    }
    goto skip_1;
    // 0x800D13A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800D13A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800D13AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800D13B0:
    // 0x800D13B0: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x800D13B4: jal         0x800D0894
    // 0x800D13B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D0894(rdram, ctx);
        goto after_3;
    // 0x800D13B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800D13BC: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800D13C0: beql        $at, $zero, L_800D138C
    if (ctx->r1 == 0) {
        // 0x800D13C4: lbu         $t8, -0x2($s1)
        ctx->r24 = MEM_BU(ctx->r17, -0X2);
            goto L_800D138C;
    }
    goto skip_2;
    // 0x800D13C4: lbu         $t8, -0x2($s1)
    ctx->r24 = MEM_BU(ctx->r17, -0X2);
    skip_2:
L_800D13C8:
    // 0x800D13C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D13CC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800D13D0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D13D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D13D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D13DC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D13E0: jr          $ra
    // 0x800D13E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D13E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D13E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D13E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D13EC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D13F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D13F4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800D13F8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800D13FC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800D1400: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D1404: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D1408: bne         $a0, $at, L_800D146C
    if (ctx->r4 != ctx->r1) {
        // 0x800D140C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800D146C;
    }
    // 0x800D140C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D1410: jal         0x800D0820
    // 0x800D1414: nop

    func_800D0820(rdram, ctx);
        goto after_0;
    // 0x800D1414: nop

    after_0:
    // 0x800D1418: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D141C: jal         0x800D0894
    // 0x800D1420: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800D0894(rdram, ctx);
        goto after_1;
    // 0x800D1420: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800D1424: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800D1428: bne         $at, $zero, L_800D146C
    if (ctx->r1 != 0) {
        // 0x800D142C: sll         $t6, $s1, 1
        ctx->r14 = S32(ctx->r17 << 1);
            goto L_800D146C;
    }
    // 0x800D142C: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x800D1430: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D1434: addiu       $t7, $t7, -0x52F8
    ctx->r15 = ADD32(ctx->r15, -0X52F8);
    // 0x800D1438: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800D143C: lbu         $t8, -0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, -0X2);
L_800D1440:
    // 0x800D1440: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800D1444: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800D1448: bne         $s3, $t8, L_800D1458
    if (ctx->r19 != ctx->r24) {
        // 0x800D144C: nop
    
            goto L_800D1458;
    }
    // 0x800D144C: nop

    // 0x800D1450: b           L_800D1470
    // 0x800D1454: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
        goto L_800D1470;
    // 0x800D1454: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
L_800D1458:
    // 0x800D1458: jal         0x800D0894
    // 0x800D145C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_800D0894(rdram, ctx);
        goto after_2;
    // 0x800D145C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_2:
    // 0x800D1460: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800D1464: beql        $at, $zero, L_800D1440
    if (ctx->r1 == 0) {
        // 0x800D1468: lbu         $t8, -0x2($s0)
        ctx->r24 = MEM_BU(ctx->r16, -0X2);
            goto L_800D1440;
    }
    goto skip_0;
    // 0x800D1468: lbu         $t8, -0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, -0X2);
    skip_0:
L_800D146C:
    // 0x800D146C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D1470:
    // 0x800D1470: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D1474: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D1478: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D147C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1480: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D1484: jr          $ra
    // 0x800D1488: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D1488: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D1490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1490: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800D1494: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800D1498: addiu       $a0, $a0, 0x1A04
    ctx->r4 = ADD32(ctx->r4, 0X1A04);
    // 0x800D149C: addiu       $a2, $a2, -0x4DB0
    ctx->r6 = ADD32(ctx->r6, -0X4DB0);
    // 0x800D14A0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x800D14A4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x800D14A8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x800D14AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800D14B0: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    // 0x800D14B4: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_800D14B8:
    // 0x800D14B8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x800D14BC: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x800D14C0: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800D14C4: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x800D14C8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x800D14CC: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x800D14D0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x800D14D4: lh          $t1, 0x8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X8);
    // 0x800D14D8: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x800D14DC: sh          $t1, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r9;
    // 0x800D14E0: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x800D14E4: lh          $t4, 0x10($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X10);
    // 0x800D14E8: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x800D14EC: sh          $t4, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r12;
    // 0x800D14F0: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x800D14F4: lh          $t7, 0x18($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X18);
    // 0x800D14F8: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x800D14FC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800D1500: bne         $a1, $a3, L_800D14B8
    if (ctx->r5 != ctx->r7) {
        // 0x800D1504: sh          $t7, 0x6($t8)
        MEM_H(0X6, ctx->r24) = ctx->r15;
            goto L_800D14B8;
    }
    // 0x800D1504: sh          $t7, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r15;
    // 0x800D1508: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1514: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D1518: addiu       $v0, $v0, -0x4DB0
    ctx->r2 = ADD32(ctx->r2, -0X4DB0);
    // 0x800D151C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1520: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800D1524: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x800D1528: jal         0x8001ACEC
    // 0x800D152C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001ACEC(rdram, ctx);
        goto after_0;
    // 0x800D152C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800D1530: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D1534: jal         0x800D1490
    // 0x800D1538: sw          $v0, -0x4DB0($at)
    MEM_W(-0X4DB0, ctx->r1) = ctx->r2;
    func_800D1490(rdram, ctx);
        goto after_1;
    // 0x800D1538: sw          $v0, -0x4DB0($at)
    MEM_W(-0X4DB0, ctx->r1) = ctx->r2;
    after_1:
    // 0x800D153C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D1544: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D154C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D154C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1554: jal         0x8001210C
    // 0x800D1558: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    func_8001210C(rdram, ctx);
        goto after_0;
    // 0x800D1558: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_0:
    // 0x800D155C: addiu       $at, $zero, 0x1FF
    ctx->r1 = ADD32(0, 0X1FF);
    // 0x800D1560: bne         $v0, $at, L_800D15BC
    if (ctx->r2 != ctx->r1) {
        // 0x800D1564: lui         $v1, 0x8013
        ctx->r3 = S32(0X8013 << 16);
            goto L_800D15BC;
    }
    // 0x800D1564: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D1568: addiu       $v1, $v1, -0x4DB0
    ctx->r3 = ADD32(ctx->r3, -0X4DB0);
    // 0x800D156C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800D1570: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800D1574: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D1578: addiu       $a1, $t7, 0x1
    ctx->r5 = ADD32(ctx->r15, 0X1);
    // 0x800D157C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x800D1580: bne         $a1, $at, L_800D1590
    if (ctx->r5 != ctx->r1) {
        // 0x800D1584: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_800D1590;
    }
    // 0x800D1584: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800D1588: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800D158C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800D1590:
    // 0x800D1590: jal         0x8001ACEC
    // 0x800D1594: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    func_8001ACEC(rdram, ctx);
        goto after_1;
    // 0x800D1594: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_1:
    // 0x800D1598: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D159C: addiu       $v1, $v1, -0x4DB0
    ctx->r3 = ADD32(ctx->r3, -0X4DB0);
    // 0x800D15A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800D15A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D15A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800D15AC: jal         0x8001BBA0
    // 0x800D15B0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    rare_memcpy(rdram, ctx);
        goto after_2;
    // 0x800D15B0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_2:
    // 0x800D15B4: jal         0x8001B084
    // 0x800D15B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x800D15B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
L_800D15BC:
    // 0x800D15BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D15C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D15C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D15CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D15CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D15D0: lw          $a0, -0x4DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB0);
    // 0x800D15D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D15D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D15DC: beql        $a0, $zero, L_800D15F8
    if (ctx->r4 == 0) {
        // 0x800D15E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D15F8;
    }
    goto skip_0;
    // 0x800D15E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D15E4: jal         0x8001BAFC
    // 0x800D15E8: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800D15E8: nop

    after_0:
    // 0x800D15EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D15F0: sw          $v0, -0x4DB0($at)
    MEM_W(-0X4DB0, ctx->r1) = ctx->r2;
    // 0x800D15F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D15F8:
    // 0x800D15F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D15FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D160C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D1610: jal         0x8001B084
    // 0x800D1614: lw          $a0, -0x4DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB0);
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800D1614: lw          $a0, -0x4DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB0);
    after_0:
    // 0x800D1618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D161C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D1620: sw          $zero, -0x4DB0($at)
    MEM_W(-0X4DB0, ctx->r1) = 0;
    // 0x800D1624: jr          $ra
    // 0x800D1628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D1628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D162C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D162C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D1630: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800D1634: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D1638: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D163C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800D1640: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D1644: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D1648: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800D164C: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x800D1650: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800D1654: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D1658: addiu       $s4, $s4, -0x4DB0
    ctx->r20 = ADD32(ctx->r20, -0X4DB0);
    // 0x800D165C: addiu       $s3, $s3, 0x1A04
    ctx->r19 = ADD32(ctx->r19, 0X1A04);
    // 0x800D1660: addiu       $s1, $s1, -0x50B0
    ctx->r17 = ADD32(ctx->r17, -0X50B0);
    // 0x800D1664: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800D1668: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D166C: addiu       $s5, $zero, 0x2A
    ctx->r21 = ADD32(0, 0X2A);
L_800D1670:
    // 0x800D1670: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800D1674: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x800D1678: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x800D167C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800D1680: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x800D1684: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x800D1688: jal         0x800D2770
    // 0x800D168C: xor         $a1, $t7, $t0
    ctx->r5 = ctx->r15 ^ ctx->r8;
    func_800D2770(rdram, ctx);
        goto after_0;
    // 0x800D168C: xor         $a1, $t7, $t0
    ctx->r5 = ctx->r15 ^ ctx->r8;
    after_0:
    // 0x800D1690: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800D1694: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800D1698: bne         $s0, $s5, L_800D1670
    if (ctx->r16 != ctx->r21) {
        // 0x800D169C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_800D1670;
    }
    // 0x800D169C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800D16A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D16A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D16A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D16AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D16B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D16B4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800D16B8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800D16BC: jr          $ra
    // 0x800D16C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D16C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D16C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D16C4: jr          $ra
    // 0x800D16C8: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
    return;
    // 0x800D16C8: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
;}
RECOMP_FUNC void func_800D16CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D16CC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800D16D0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D16D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800D16D8: lh          $v1, -0x50AE($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X50AE);
    // 0x800D16DC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800D16E0: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x800D16E4: bne         $v1, $at, L_800D1718
    if (ctx->r3 != ctx->r1) {
            // 0x800D16E8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    func_800D1718(rdram, ctx);
    return;
    }
    // 0x800D16E8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800D16EC: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x800D16F0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800D16F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D16F8: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800D16FC: lw          $t9, -0x4DB0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4DB0);
    // 0x800D1700: lh          $t7, 0x1A04($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1A04);
    // 0x800D1704: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x800D1708: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800D170C: xori        $t8, $t7, 0x3E7
    ctx->r24 = ctx->r15 ^ 0X3E7;
    // 0x800D1710: jr          $ra
    // 0x800D1714: sh          $t8, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r24;
    return;
    // 0x800D1714: sh          $t8, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r24;
;}
RECOMP_FUNC void func_800D1718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1718: bgez        $a1, L_800D1724
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800D171C: addu        $t3, $t3, $t2
        ctx->r11 = ADD32(ctx->r11, ctx->r10);
            goto L_800D1724;
    }
    // 0x800D171C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D1720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800D1724:
    // 0x800D1724: bltz        $v1, L_800D173C
    if (SIGNED(ctx->r3) < 0) {
        // 0x800D1728: lui         $t5, 0x8013
        ctx->r13 = S32(0X8013 << 16);
            goto L_800D173C;
    }
    // 0x800D1728: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800D172C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800D1730: beq         $at, $zero, L_800D173C
    if (ctx->r1 == 0) {
        // 0x800D1734: nop
    
            goto L_800D173C;
    }
    // 0x800D1734: nop

    // 0x800D1738: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800D173C:
    // 0x800D173C: lh          $t3, 0x1A04($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X1A04);
    // 0x800D1740: lw          $t5, -0x4DB0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4DB0);
    // 0x800D1744: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800D1748: xor         $t4, $t3, $a1
    ctx->r12 = ctx->r11 ^ ctx->r5;
    // 0x800D174C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800D1750: sh          $t4, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r12;
    // 0x800D1754: jr          $ra
    // 0x800D1758: nop

    return;
    // 0x800D1758: nop

;}
RECOMP_FUNC void func_800D175C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D175C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1764: jal         0x800D16C4
    // 0x800D1768: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800D16C4(rdram, ctx);
        goto after_0;
    // 0x800D1768: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D176C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D1770: lw          $t6, -0x4DB0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4DB0);
    // 0x800D1774: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x800D1778: addiu       $a3, $a3, 0x1A04
    ctx->r7 = ADD32(ctx->r7, 0X1A04);
    // 0x800D177C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x800D1780: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x800D1784: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x800D1788: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800D178C: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x800D1790: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x800D1794: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D1798: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x800D179C: xor         $t4, $t3, $t9
    ctx->r12 = ctx->r11 ^ ctx->r25;
    // 0x800D17A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800D17A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D17A8: jal         0x800D16CC
    // 0x800D17AC: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    func_800D16CC(rdram, ctx);
        goto after_1;
    // 0x800D17AC: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    after_1:
    // 0x800D17B0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800D17B4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D17B8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800D17BC: lw          $t6, -0x4DB0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4DB0);
    // 0x800D17C0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800D17C4: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x800D17C8: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x800D17CC: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x800D17D0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800D17D4: lh          $t0, 0x0($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X0);
    // 0x800D17D8: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x800D17DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800D17E0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800D17E4: lh          $a0, -0x50B0($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X50B0);
    // 0x800D17E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D17EC: jal         0x800D24E8
    // 0x800D17F0: xor         $a1, $t3, $t0
    ctx->r5 = ctx->r11 ^ ctx->r8;
    func_800D24E8(rdram, ctx);
        goto after_2;
    // 0x800D17F0: xor         $a1, $t3, $t0
    ctx->r5 = ctx->r11 ^ ctx->r8;
    after_2:
    // 0x800D17F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D17F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D17FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D180C: jal         0x800D175C
    // 0x800D1810: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800D175C(rdram, ctx);
        goto after_0;
    // 0x800D1810: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x800D1814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D181C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D182C: jal         0x800D175C
    // 0x800D1830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D175C(rdram, ctx);
        goto after_0;
    // 0x800D1830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800D1834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D183C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D184C: jal         0x800D175C
    // 0x800D1850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800D175C(rdram, ctx);
        goto after_0;
    // 0x800D1850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800D1854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D185C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1864: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D186C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800D1870: jal         0x800D16C4
    // 0x800D1874: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800D16C4(rdram, ctx);
        goto after_0;
    // 0x800D1874: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800D1878: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D187C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800D1880: jal         0x800D16CC
    // 0x800D1884: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D16CC(rdram, ctx);
        goto after_1;
    // 0x800D1884: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800D1888: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800D188C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1890: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800D1894: beq         $t6, $zero, L_800D18E8
    if (ctx->r14 == 0) {
        // 0x800D1898: sll         $v0, $a3, 2
        ctx->r2 = S32(ctx->r7 << 2);
            goto L_800D18E8;
    }
    // 0x800D1898: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x800D189C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800D18A0: lw          $t8, -0x4DB0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4DB0);
    // 0x800D18A4: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x800D18A8: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x800D18AC: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
    // 0x800D18B0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800D18B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D18B8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D18BC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800D18C0: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x800D18C4: lh          $t3, 0x1A04($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X1A04);
    // 0x800D18C8: addiu       $t7, $t7, -0x50B0
    ctx->r15 = ADD32(ctx->r15, -0X50B0);
    // 0x800D18CC: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x800D18D0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x800D18D4: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x800D18D8: jal         0x800D2498
    // 0x800D18DC: xor         $a1, $t3, $t1
    ctx->r5 = ctx->r11 ^ ctx->r9;
    func_800D2498(rdram, ctx);
        goto after_2;
    // 0x800D18DC: xor         $a1, $t3, $t1
    ctx->r5 = ctx->r11 ^ ctx->r9;
    after_2:
    // 0x800D18E0: b           L_800D1920
    // 0x800D18E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D1920;
    // 0x800D18E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D18E8:
    // 0x800D18E8: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800D18EC: lw          $t4, -0x4DB0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4DB0);
    // 0x800D18F0: sll         $t5, $a3, 1
    ctx->r13 = S32(ctx->r7 << 1);
    // 0x800D18F4: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x800D18F8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800D18FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D1900: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800D1904: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x800D1908: lh          $t9, 0x1A04($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X1A04);
    // 0x800D190C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800D1910: lh          $a0, -0x50B0($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X50B0);
    // 0x800D1914: jal         0x800D2770
    // 0x800D1918: xor         $a1, $t9, $t7
    ctx->r5 = ctx->r25 ^ ctx->r15;
    func_800D2770(rdram, ctx);
        goto after_3;
    // 0x800D1918: xor         $a1, $t9, $t7
    ctx->r5 = ctx->r25 ^ ctx->r15;
    after_3:
    // 0x800D191C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D1920:
    // 0x800D1920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D1924: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D192C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D192C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D1938: jal         0x800D1A04
    // 0x800D193C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D1A04(rdram, ctx);
        goto after_0;
    // 0x800D193C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D1940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D1944: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800D1948: jal         0x800D1864
    // 0x800D194C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800D1864(rdram, ctx);
        goto after_1;
    // 0x800D194C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800D1950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D1958: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1968: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800D196C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800D1970: jal         0x800D16C4
    // 0x800D1974: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800D16C4(rdram, ctx);
        goto after_0;
    // 0x800D1974: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D1978: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800D197C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800D1980: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800D1984: bgtz        $a1, L_800D1998
    if (SIGNED(ctx->r5) > 0) {
        // 0x800D1988: sll         $v1, $v0, 2
        ctx->r3 = S32(ctx->r2 << 2);
            goto L_800D1998;
    }
    // 0x800D1988: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x800D198C: beql        $a1, $at, L_800D199C
    if (ctx->r5 == ctx->r1) {
        // 0x800D1990: lw          $t6, 0x28($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X28);
            goto L_800D199C;
    }
    goto skip_0;
    // 0x800D1990: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x800D1994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800D1998:
    // 0x800D1998: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
L_800D199C:
    // 0x800D199C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D19A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800D19A4: beq         $t6, $zero, L_800D19C4
    if (ctx->r14 == 0) {
        // 0x800D19A8: sh          $a1, -0x50AE($at)
        MEM_H(-0X50AE, ctx->r1) = ctx->r5;
            goto L_800D19C4;
    }
    // 0x800D19A8: sh          $a1, -0x50AE($at)
    MEM_H(-0X50AE, ctx->r1) = ctx->r5;
    // 0x800D19AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800D19B0: jal         0x800D1A6C
    // 0x800D19B4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800D1A6C(rdram, ctx);
        goto after_1;
    // 0x800D19B4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x800D19B8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800D19BC: b           L_800D19EC
    // 0x800D19C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_800D19EC;
    // 0x800D19C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_800D19C4:
    // 0x800D19C4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800D19C8: lw          $t7, -0x4DB0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4DB0);
    // 0x800D19CC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x800D19D0: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x800D19D4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800D19D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800D19DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D19E0: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x800D19E4: lh          $t2, 0x1A04($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X1A04);
    // 0x800D19E8: xor         $a1, $t2, $t0
    ctx->r5 = ctx->r10 ^ ctx->r8;
L_800D19EC:
    // 0x800D19EC: jal         0x800D16CC
    // 0x800D19F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800D16CC(rdram, ctx);
        goto after_2;
    // 0x800D19F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x800D19F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D19F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D19FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D1A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1A0C: jal         0x800D16C4
    // 0x800D1A10: nop

    func_800D16C4(rdram, ctx);
        goto after_0;
    // 0x800D1A10: nop

    after_0:
    // 0x800D1A14: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D1A18: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D1A1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1A20: lh          $t7, -0x50AE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X50AE);
    // 0x800D1A24: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800D1A28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800D1A2C: bne         $t7, $at, L_800D1A3C
    if (ctx->r15 != ctx->r1) {
        // 0x800D1A30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D1A3C;
    }
    // 0x800D1A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1A34: b           L_800D1A64
    // 0x800D1A38: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
        goto L_800D1A64;
    // 0x800D1A38: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
L_800D1A3C:
    // 0x800D1A3C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800D1A40: lw          $t8, -0x4DB0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4DB0);
    // 0x800D1A44: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x800D1A48: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x800D1A4C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800D1A50: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D1A54: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800D1A58: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x800D1A5C: lh          $t4, 0x1A04($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X1A04);
    // 0x800D1A60: xor         $v0, $t4, $t1
    ctx->r2 = ctx->r12 ^ ctx->r9;
L_800D1A64:
    // 0x800D1A64: jr          $ra
    // 0x800D1A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D1A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D1A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1A74: jal         0x800D16C4
    // 0x800D1A78: nop

    func_800D16C4(rdram, ctx);
        goto after_0;
    // 0x800D1A78: nop

    after_0:
    // 0x800D1A7C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800D1A80: addiu       $a1, $a1, -0x50B0
    ctx->r5 = ADD32(ctx->r5, -0X50B0);
    // 0x800D1A84: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D1A88: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x800D1A8C: lh          $v1, 0x2($t7)
    ctx->r3 = MEM_H(ctx->r15, 0X2);
    // 0x800D1A90: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800D1A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D1A98: beq         $v1, $at, L_800D1AB4
    if (ctx->r3 == ctx->r1) {
        // 0x800D1A9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D1AB4;
    }
    // 0x800D1A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1AA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D1AA4: bne         $v1, $at, L_800D1ABC
    if (ctx->r3 != ctx->r1) {
        // 0x800D1AA8: sll         $t8, $a0, 2
        ctx->r24 = S32(ctx->r4 << 2);
            goto L_800D1ABC;
    }
    // 0x800D1AA8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800D1AAC: b           L_800D1AC4
    // 0x800D1AB0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_800D1AC4;
    // 0x800D1AB0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_800D1AB4:
    // 0x800D1AB4: b           L_800D1AC4
    // 0x800D1AB8: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
        goto L_800D1AC4;
    // 0x800D1AB8: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
L_800D1ABC:
    // 0x800D1ABC: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x800D1AC0: lh          $v0, 0x2($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X2);
L_800D1AC4:
    // 0x800D1AC4: jr          $ra
    // 0x800D1AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D1AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D1ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1ACC: addiu       $t6, $a0, -0x40
    ctx->r14 = ADD32(ctx->r4, -0X40);
    // 0x800D1AD0: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x800D1AD4: beq         $at, $zero, L_800D1B28
    if (ctx->r1 == 0) {
        // 0x800D1AD8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800D1B28;
    }
    // 0x800D1AD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D1ADC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D1AE0: addu        $at, $at, $t6
    gpr jr_addend_800D1AE8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D1AE4: lw          $t6, 0x5AE0($at)
    ctx->r14 = ADD32(ctx->r1, 0X5AE0);
    // 0x800D1AE8: jr          $t6
    // 0x800D1AEC: nop

    switch (jr_addend_800D1AE8 >> 2) {
        case 0: goto L_800D1AF0; break;
        case 1: goto L_800D1AF8; break;
        case 2: goto L_800D1B00; break;
        case 3: goto L_800D1B08; break;
        case 4: goto L_800D1B10; break;
        case 5: goto L_800D1B28; break;
        case 6: goto L_800D1B18; break;
        case 7: goto L_800D1B20; break;
        default: switch_error(__func__, 0x800D1AE8, 0x80125AE0);
    }
    // 0x800D1AEC: nop

L_800D1AF0:
    // 0x800D1AF0: jr          $ra
    // 0x800D1AF4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    return;
    // 0x800D1AF4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_800D1AF8:
    // 0x800D1AF8: jr          $ra
    // 0x800D1AFC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    return;
    // 0x800D1AFC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_800D1B00:
    // 0x800D1B00: jr          $ra
    // 0x800D1B04: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    return;
    // 0x800D1B04: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_800D1B08:
    // 0x800D1B08: jr          $ra
    // 0x800D1B0C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    return;
    // 0x800D1B0C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_800D1B10:
    // 0x800D1B10: jr          $ra
    // 0x800D1B14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x800D1B14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800D1B18:
    // 0x800D1B18: jr          $ra
    // 0x800D1B1C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    return;
    // 0x800D1B1C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_800D1B20:
    // 0x800D1B20: jr          $ra
    // 0x800D1B24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x800D1B24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800D1B28:
    // 0x800D1B28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D1B2C: jr          $ra
    // 0x800D1B30: nop

    return;
    // 0x800D1B30: nop

;}
RECOMP_FUNC void func_800D1B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1B34: slti        $at, $a0, 0x4BB
    ctx->r1 = SIGNED(ctx->r4) < 0X4BB ? 1 : 0;
    // 0x800D1B38: bne         $at, $zero, L_800D1B80
    if (ctx->r1 != 0) {
        // 0x800D1B3C: addiu       $at, $zero, 0x4D7
        ctx->r1 = ADD32(0, 0X4D7);
            goto L_800D1B80;
    }
    // 0x800D1B3C: addiu       $at, $zero, 0x4D7
    ctx->r1 = ADD32(0, 0X4D7);
    // 0x800D1B40: beq         $a0, $at, L_800D1C14
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B44: addiu       $at, $zero, 0x4E2
        ctx->r1 = ADD32(0, 0X4E2);
            goto L_800D1C14;
    }
    // 0x800D1B44: addiu       $at, $zero, 0x4E2
    ctx->r1 = ADD32(0, 0X4E2);
    // 0x800D1B48: beq         $a0, $at, L_800D1BFC
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B4C: addiu       $at, $zero, 0x4E3
        ctx->r1 = ADD32(0, 0X4E3);
            goto L_800D1BFC;
    }
    // 0x800D1B4C: addiu       $at, $zero, 0x4E3
    ctx->r1 = ADD32(0, 0X4E3);
    // 0x800D1B50: beq         $a0, $at, L_800D1C04
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B54: addiu       $at, $zero, 0x4E4
        ctx->r1 = ADD32(0, 0X4E4);
            goto L_800D1C04;
    }
    // 0x800D1B54: addiu       $at, $zero, 0x4E4
    ctx->r1 = ADD32(0, 0X4E4);
    // 0x800D1B58: beq         $a0, $at, L_800D1C0C
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B5C: addiu       $at, $zero, 0x515
        ctx->r1 = ADD32(0, 0X515);
            goto L_800D1C0C;
    }
    // 0x800D1B5C: addiu       $at, $zero, 0x515
    ctx->r1 = ADD32(0, 0X515);
    // 0x800D1B60: beq         $a0, $at, L_800D1C1C
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B64: addiu       $at, $zero, 0x516
        ctx->r1 = ADD32(0, 0X516);
            goto L_800D1C1C;
    }
    // 0x800D1B64: addiu       $at, $zero, 0x516
    ctx->r1 = ADD32(0, 0X516);
    // 0x800D1B68: beq         $a0, $at, L_800D1C1C
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B6C: addiu       $at, $zero, 0x523
        ctx->r1 = ADD32(0, 0X523);
            goto L_800D1C1C;
    }
    // 0x800D1B6C: addiu       $at, $zero, 0x523
    ctx->r1 = ADD32(0, 0X523);
    // 0x800D1B70: beq         $a0, $at, L_800D1BD4
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B74: nop
    
            goto L_800D1BD4;
    }
    // 0x800D1B74: nop

    // 0x800D1B78: b           L_800D1C30
    // 0x800D1B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D1C30;
    // 0x800D1B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D1B80:
    // 0x800D1B80: addiu       $at, $zero, 0x1D9
    ctx->r1 = ADD32(0, 0X1D9);
    // 0x800D1B84: beq         $a0, $at, L_800D1BDC
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B88: addiu       $at, $zero, 0x29F
        ctx->r1 = ADD32(0, 0X29F);
            goto L_800D1BDC;
    }
    // 0x800D1B88: addiu       $at, $zero, 0x29F
    ctx->r1 = ADD32(0, 0X29F);
    // 0x800D1B8C: beq         $a0, $at, L_800D1BCC
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B90: addiu       $at, $zero, 0x3CA
        ctx->r1 = ADD32(0, 0X3CA);
            goto L_800D1BCC;
    }
    // 0x800D1B90: addiu       $at, $zero, 0x3CA
    ctx->r1 = ADD32(0, 0X3CA);
    // 0x800D1B94: beq         $a0, $at, L_800D1BE4
    if (ctx->r4 == ctx->r1) {
        // 0x800D1B98: addiu       $at, $zero, 0x3CB
        ctx->r1 = ADD32(0, 0X3CB);
            goto L_800D1BE4;
    }
    // 0x800D1B98: addiu       $at, $zero, 0x3CB
    ctx->r1 = ADD32(0, 0X3CB);
    // 0x800D1B9C: beq         $a0, $at, L_800D1BEC
    if (ctx->r4 == ctx->r1) {
        // 0x800D1BA0: addiu       $at, $zero, 0x40D
        ctx->r1 = ADD32(0, 0X40D);
            goto L_800D1BEC;
    }
    // 0x800D1BA0: addiu       $at, $zero, 0x40D
    ctx->r1 = ADD32(0, 0X40D);
    // 0x800D1BA4: beq         $a0, $at, L_800D1BF4
    if (ctx->r4 == ctx->r1) {
        // 0x800D1BA8: addiu       $at, $zero, 0x481
        ctx->r1 = ADD32(0, 0X481);
            goto L_800D1BF4;
    }
    // 0x800D1BA8: addiu       $at, $zero, 0x481
    ctx->r1 = ADD32(0, 0X481);
    // 0x800D1BAC: beq         $a0, $at, L_800D1BF4
    if (ctx->r4 == ctx->r1) {
        // 0x800D1BB0: addiu       $at, $zero, 0x4B7
        ctx->r1 = ADD32(0, 0X4B7);
            goto L_800D1BF4;
    }
    // 0x800D1BB0: addiu       $at, $zero, 0x4B7
    ctx->r1 = ADD32(0, 0X4B7);
    // 0x800D1BB4: beq         $a0, $at, L_800D1C24
    if (ctx->r4 == ctx->r1) {
        // 0x800D1BB8: addiu       $at, $zero, 0x4BA
        ctx->r1 = ADD32(0, 0X4BA);
            goto L_800D1C24;
    }
    // 0x800D1BB8: addiu       $at, $zero, 0x4BA
    ctx->r1 = ADD32(0, 0X4BA);
    // 0x800D1BBC: beq         $a0, $at, L_800D1C14
    if (ctx->r4 == ctx->r1) {
        // 0x800D1BC0: nop
    
            goto L_800D1C14;
    }
    // 0x800D1BC0: nop

    // 0x800D1BC4: b           L_800D1C30
    // 0x800D1BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D1C30;
    // 0x800D1BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D1BCC:
    // 0x800D1BCC: jr          $ra
    // 0x800D1BD0: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    return;
    // 0x800D1BD0: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
L_800D1BD4:
    // 0x800D1BD4: jr          $ra
    // 0x800D1BD8: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    return;
    // 0x800D1BD8: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
L_800D1BDC:
    // 0x800D1BDC: jr          $ra
    // 0x800D1BE0: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    return;
    // 0x800D1BE0: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
L_800D1BE4:
    // 0x800D1BE4: jr          $ra
    // 0x800D1BE8: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    return;
    // 0x800D1BE8: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
L_800D1BEC:
    // 0x800D1BEC: jr          $ra
    // 0x800D1BF0: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    return;
    // 0x800D1BF0: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
L_800D1BF4:
    // 0x800D1BF4: jr          $ra
    // 0x800D1BF8: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    return;
    // 0x800D1BF8: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_800D1BFC:
    // 0x800D1BFC: jr          $ra
    // 0x800D1C00: addiu       $v0, $zero, 0x4D
    ctx->r2 = ADD32(0, 0X4D);
    return;
    // 0x800D1C00: addiu       $v0, $zero, 0x4D
    ctx->r2 = ADD32(0, 0X4D);
L_800D1C04:
    // 0x800D1C04: jr          $ra
    // 0x800D1C08: addiu       $v0, $zero, 0x4A
    ctx->r2 = ADD32(0, 0X4A);
    return;
    // 0x800D1C08: addiu       $v0, $zero, 0x4A
    ctx->r2 = ADD32(0, 0X4A);
L_800D1C0C:
    // 0x800D1C0C: jr          $ra
    // 0x800D1C10: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
    return;
    // 0x800D1C10: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
L_800D1C14:
    // 0x800D1C14: jr          $ra
    // 0x800D1C18: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    return;
    // 0x800D1C18: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
L_800D1C1C:
    // 0x800D1C1C: jr          $ra
    // 0x800D1C20: addiu       $v0, $zero, 0x52
    ctx->r2 = ADD32(0, 0X52);
    return;
    // 0x800D1C20: addiu       $v0, $zero, 0x52
    ctx->r2 = ADD32(0, 0X52);
L_800D1C24:
    // 0x800D1C24: jr          $ra
    // 0x800D1C28: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    return;
    // 0x800D1C28: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x800D1C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D1C30:
    // 0x800D1C30: jr          $ra
    // 0x800D1C34: nop

    return;
    // 0x800D1C34: nop

;}
RECOMP_FUNC void func_800D1C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1C38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1C40: jal         0x800D1A04
    // 0x800D1C44: nop

    func_800D1A04(rdram, ctx);
        goto after_0;
    // 0x800D1C44: nop

    after_0:
    // 0x800D1C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1C4C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800D1C50: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800D1C54: jr          $ra
    // 0x800D1C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D1C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D1C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1C5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D1C60: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D1C64: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D1C68: jr          $ra
    // 0x800D1C6C: lh          $v0, -0x51B0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X51B0);
    return;
    // 0x800D1C6C: lh          $v0, -0x51B0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X51B0);
;}
RECOMP_FUNC void func_800D1C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1C70: jr          $ra
    // 0x800D1C74: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    return;
    // 0x800D1C74: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
;}
RECOMP_FUNC void func_800D1C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1C80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D1C84: jal         0x800D1490
    // 0x800D1C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D1490(rdram, ctx);
        goto after_0;
    // 0x800D1C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D1C8C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1C90: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800D1C94: srl         $t2, $v0, 1
    ctx->r10 = S32(U32(ctx->r2) >> 1);
    // 0x800D1C98: slti        $at, $t2, 0x16
    ctx->r1 = SIGNED(ctx->r10) < 0X16 ? 1 : 0;
    // 0x800D1C9C: bne         $at, $zero, L_800D1CA8
    if (ctx->r1 != 0) {
        // 0x800D1CA0: nop
    
            goto L_800D1CA8;
    }
    // 0x800D1CA0: nop

    // 0x800D1CA4: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
L_800D1CA8:
    // 0x800D1CA8: blez        $t2, L_800D1DEC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800D1CAC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800D1DEC;
    }
    // 0x800D1CAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D1CB0: andi        $v1, $t2, 0x3
    ctx->r3 = ctx->r10 & 0X3;
    // 0x800D1CB4: beq         $v1, $zero, L_800D1D20
    if (ctx->r3 == 0) {
        // 0x800D1CB8: or          $t1, $v1, $zero
        ctx->r9 = ctx->r3 | 0;
            goto L_800D1D20;
    }
    // 0x800D1CB8: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x800D1CBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D1CC0: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x800D1CC4: sll         $a1, $zero, 1
    ctx->r5 = S32(0 << 1);
    // 0x800D1CC8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800D1CCC: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800D1CD0: addiu       $a3, $a3, -0x4DB0
    ctx->r7 = ADD32(ctx->r7, -0X4DB0);
    // 0x800D1CD4: addiu       $t0, $t0, 0x1A04
    ctx->r8 = ADD32(ctx->r8, 0X1A04);
    // 0x800D1CD8: addu        $v0, $a1, $t3
    ctx->r2 = ADD32(ctx->r5, ctx->r11);
    // 0x800D1CDC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_800D1CE0:
    // 0x800D1CE0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x800D1CE4: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x800D1CE8: addu        $t5, $t0, $a2
    ctx->r13 = ADD32(ctx->r8, ctx->r6);
    // 0x800D1CEC: sll         $t4, $t9, 8
    ctx->r12 = S32(ctx->r25 << 8);
    // 0x800D1CF0: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x800D1CF4: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x800D1CF8: or          $v1, $t8, $t4
    ctx->r3 = ctx->r24 | ctx->r12;
    // 0x800D1CFC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800D1D00: addu        $t8, $t9, $a1
    ctx->r24 = ADD32(ctx->r25, ctx->r5);
    // 0x800D1D04: xor         $t7, $t6, $v1
    ctx->r15 = ctx->r14 ^ ctx->r3;
    // 0x800D1D08: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x800D1D0C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800D1D10: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x800D1D14: bne         $t1, $a0, L_800D1CE0
    if (ctx->r9 != ctx->r4) {
        // 0x800D1D18: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_800D1CE0;
    }
    // 0x800D1D18: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800D1D1C: beq         $a0, $t2, L_800D1DEC
    if (ctx->r4 == ctx->r10) {
        // 0x800D1D20: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800D1DEC;
    }
L_800D1D20:
    // 0x800D1D20: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D1D24: sll         $t4, $a2, 3
    ctx->r12 = S32(ctx->r6 << 3);
    // 0x800D1D28: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800D1D2C: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x800D1D30: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800D1D34: addiu       $t0, $t0, 0x1A04
    ctx->r8 = ADD32(ctx->r8, 0X1A04);
    // 0x800D1D38: addu        $v0, $a1, $t3
    ctx->r2 = ADD32(ctx->r5, ctx->r11);
    // 0x800D1D3C: addiu       $a3, $a3, -0x4DB0
    ctx->r7 = ADD32(ctx->r7, -0X4DB0);
    // 0x800D1D40: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x800D1D44: sll         $t1, $t2, 3
    ctx->r9 = S32(ctx->r10 << 3);
L_800D1D48:
    // 0x800D1D48: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800D1D4C: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x800D1D50: addu        $a0, $t0, $a2
    ctx->r4 = ADD32(ctx->r8, ctx->r6);
    // 0x800D1D54: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x800D1D58: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x800D1D5C: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x800D1D60: or          $v1, $t5, $t9
    ctx->r3 = ctx->r13 | ctx->r25;
    // 0x800D1D64: xor         $t8, $t7, $v1
    ctx->r24 = ctx->r15 ^ ctx->r3;
    // 0x800D1D68: addu        $t6, $t4, $a1
    ctx->r14 = ADD32(ctx->r12, ctx->r5);
    // 0x800D1D6C: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x800D1D70: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x800D1D74: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x800D1D78: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x800D1D7C: lh          $t4, 0x8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8);
    // 0x800D1D80: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x800D1D84: or          $v1, $t5, $t7
    ctx->r3 = ctx->r13 | ctx->r15;
    // 0x800D1D88: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x800D1D8C: xor         $t8, $t4, $v1
    ctx->r24 = ctx->r12 ^ ctx->r3;
    // 0x800D1D90: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x800D1D94: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x800D1D98: lbu         $t5, 0x5($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5);
    // 0x800D1D9C: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x800D1DA0: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x800D1DA4: sll         $t4, $t7, 8
    ctx->r12 = S32(ctx->r15 << 8);
    // 0x800D1DA8: or          $v1, $t5, $t4
    ctx->r3 = ctx->r13 | ctx->r12;
    // 0x800D1DAC: addu        $t7, $t9, $a1
    ctx->r15 = ADD32(ctx->r25, ctx->r5);
    // 0x800D1DB0: xor         $t8, $t6, $v1
    ctx->r24 = ctx->r14 ^ ctx->r3;
    // 0x800D1DB4: sh          $t8, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r24;
    // 0x800D1DB8: lbu         $t4, 0x6($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X6);
    // 0x800D1DBC: lbu         $t5, 0x7($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X7);
    // 0x800D1DC0: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x800D1DC4: lh          $t9, 0x18($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X18);
    // 0x800D1DC8: sll         $t6, $t4, 8
    ctx->r14 = S32(ctx->r12 << 8);
    // 0x800D1DCC: or          $v1, $t5, $t6
    ctx->r3 = ctx->r13 | ctx->r14;
    // 0x800D1DD0: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x800D1DD4: addu        $t4, $t7, $a1
    ctx->r12 = ADD32(ctx->r15, ctx->r5);
    // 0x800D1DD8: xor         $t8, $t9, $v1
    ctx->r24 = ctx->r25 ^ ctx->r3;
    // 0x800D1DDC: sh          $t8, 0x6($t4)
    MEM_H(0X6, ctx->r12) = ctx->r24;
    // 0x800D1DE0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800D1DE4: bne         $a2, $t1, L_800D1D48
    if (ctx->r6 != ctx->r9) {
        // 0x800D1DE8: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_800D1D48;
    }
    // 0x800D1DE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800D1DEC:
    // 0x800D1DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D1DF4: jr          $ra
    // 0x800D1DF8: nop

    return;
    // 0x800D1DF8: nop

;}
RECOMP_FUNC void func_800D1DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1DFC: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800D1E00: addiu       $t2, $t2, -0x4DB0
    ctx->r10 = ADD32(ctx->r10, -0X4DB0);
    // 0x800D1E04: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x800D1E08: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800D1E0C: addiu       $a2, $a2, 0x1A04
    ctx->r6 = ADD32(ctx->r6, 0X1A04);
    // 0x800D1E10: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x800D1E14: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x800D1E18: addiu       $a1, $a0, 0x2
    ctx->r5 = ADD32(ctx->r4, 0X2);
    // 0x800D1E1C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x800D1E20: xor         $t9, $t6, $t8
    ctx->r25 = ctx->r14 ^ ctx->r24;
    // 0x800D1E24: sra         $t4, $t9, 8
    ctx->r12 = S32(SIGNED(ctx->r25) >> 8);
    // 0x800D1E28: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    // 0x800D1E2C: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x800D1E30: lh          $t5, 0x0($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X0);
    // 0x800D1E34: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x800D1E38: lh          $t6, 0x0($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X0);
    // 0x800D1E3C: xor         $t9, $t5, $t6
    ctx->r25 = ctx->r13 ^ ctx->r14;
    // 0x800D1E40: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
    // 0x800D1E44: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
L_800D1E48:
    // 0x800D1E48: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x800D1E4C: addu        $v0, $a2, $a3
    ctx->r2 = ADD32(ctx->r6, ctx->r7);
    // 0x800D1E50: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x800D1E54: addu        $t7, $t4, $v1
    ctx->r15 = ADD32(ctx->r12, ctx->r3);
    // 0x800D1E58: lh          $t5, 0x0($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X0);
    // 0x800D1E5C: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800D1E60: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800D1E64: xor         $t6, $t3, $t5
    ctx->r14 = ctx->r11 ^ ctx->r13;
    // 0x800D1E68: sra         $t9, $t6, 8
    ctx->r25 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800D1E6C: sb          $t9, -0x8($a1)
    MEM_B(-0X8, ctx->r5) = ctx->r25;
    // 0x800D1E70: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x800D1E74: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x800D1E78: addu        $t3, $t7, $v1
    ctx->r11 = ADD32(ctx->r15, ctx->r3);
    // 0x800D1E7C: lh          $t5, 0x0($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X0);
    // 0x800D1E80: xor         $t8, $t4, $t5
    ctx->r24 = ctx->r12 ^ ctx->r13;
    // 0x800D1E84: sb          $t8, -0x7($a1)
    MEM_B(-0X7, ctx->r5) = ctx->r24;
    // 0x800D1E88: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x800D1E8C: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x800D1E90: addu        $t3, $t7, $v1
    ctx->r11 = ADD32(ctx->r15, ctx->r3);
    // 0x800D1E94: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x800D1E98: xor         $t5, $t9, $t4
    ctx->r13 = ctx->r25 ^ ctx->r12;
    // 0x800D1E9C: sra         $t8, $t5, 8
    ctx->r24 = S32(SIGNED(ctx->r13) >> 8);
    // 0x800D1EA0: sb          $t8, -0x6($a1)
    MEM_B(-0X6, ctx->r5) = ctx->r24;
    // 0x800D1EA4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800D1EA8: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x800D1EAC: addu        $t9, $t3, $v1
    ctx->r25 = ADD32(ctx->r11, ctx->r3);
    // 0x800D1EB0: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x800D1EB4: xor         $t6, $t7, $t4
    ctx->r14 = ctx->r15 ^ ctx->r12;
    // 0x800D1EB8: sb          $t6, -0x5($a1)
    MEM_B(-0X5, ctx->r5) = ctx->r14;
    // 0x800D1EBC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800D1EC0: lh          $t8, 0x10($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X10);
    // 0x800D1EC4: addu        $t9, $t3, $v1
    ctx->r25 = ADD32(ctx->r11, ctx->r3);
    // 0x800D1EC8: lh          $t7, 0x4($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X4);
    // 0x800D1ECC: xor         $t4, $t8, $t7
    ctx->r12 = ctx->r24 ^ ctx->r15;
    // 0x800D1ED0: sra         $t6, $t4, 8
    ctx->r14 = S32(SIGNED(ctx->r12) >> 8);
    // 0x800D1ED4: sb          $t6, -0x4($a1)
    MEM_B(-0X4, ctx->r5) = ctx->r14;
    // 0x800D1ED8: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x800D1EDC: lh          $t3, 0x10($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X10);
    // 0x800D1EE0: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x800D1EE4: lh          $t7, 0x4($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X4);
    // 0x800D1EE8: xor         $t5, $t3, $t7
    ctx->r13 = ctx->r11 ^ ctx->r15;
    // 0x800D1EEC: sb          $t5, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r13;
    // 0x800D1EF0: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x800D1EF4: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x800D1EF8: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x800D1EFC: lh          $t3, 0x6($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X6);
    // 0x800D1F00: xor         $t7, $t6, $t3
    ctx->r15 = ctx->r14 ^ ctx->r11;
    // 0x800D1F04: sra         $t5, $t7, 8
    ctx->r13 = S32(SIGNED(ctx->r15) >> 8);
    // 0x800D1F08: sb          $t5, -0x2($a1)
    MEM_B(-0X2, ctx->r5) = ctx->r13;
    // 0x800D1F0C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x800D1F10: lh          $t9, 0x18($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X18);
    // 0x800D1F14: addu        $t6, $t8, $v1
    ctx->r14 = ADD32(ctx->r24, ctx->r3);
    // 0x800D1F18: lh          $t3, 0x6($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X6);
    // 0x800D1F1C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800D1F20: xor         $t4, $t9, $t3
    ctx->r12 = ctx->r25 ^ ctx->r11;
    // 0x800D1F24: bne         $a3, $a0, L_800D1E48
    if (ctx->r7 != ctx->r4) {
        // 0x800D1F28: sb          $t4, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r12;
            goto L_800D1E48;
    }
    // 0x800D1F28: sb          $t4, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r12;
    // 0x800D1F2C: jr          $ra
    // 0x800D1F30: nop

    return;
    // 0x800D1F30: nop

;}
RECOMP_FUNC void func_800D1F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1F34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D1F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1F3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800D1F40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800D1F44: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800D1F48: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800D1F4C: jal         0x80088588
    // 0x800D1F50: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    _glgamedata_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800D1F50: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x800D1F54: beq         $v0, $zero, L_800D1FA0
    if (ctx->r2 == 0) {
        // 0x800D1F58: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_800D1FA0;
    }
    // 0x800D1F58: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800D1F5C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800D1F60: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x800D1F64: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800D1F68: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x800D1F6C: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800D1F70: beq         $at, $zero, L_800D1F80
    if (ctx->r1 == 0) {
        // 0x800D1F74: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_800D1F80;
    }
    // 0x800D1F74: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D1F78: b           L_800D1FA4
    // 0x800D1F7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800D1FA4;
    // 0x800D1F7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800D1F80:
    // 0x800D1F80: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800D1F84: sll         $t1, $a1, 1
    ctx->r9 = S32(ctx->r5 << 1);
    // 0x800D1F88: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x800D1F8C: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x800D1F90: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x800D1F94: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x800D1F98: b           L_800D1FA4
    // 0x800D1F9C: or          $v0, $t2, $t4
    ctx->r2 = ctx->r10 | ctx->r12;
        goto L_800D1FA4;
    // 0x800D1F9C: or          $v0, $t2, $t4
    ctx->r2 = ctx->r10 | ctx->r12;
L_800D1FA0:
    // 0x800D1FA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800D1FA4:
    // 0x800D1FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1FA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D1FAC: jr          $ra
    // 0x800D1FB0: nop

    return;
    // 0x800D1FB0: nop

;}
RECOMP_FUNC void func_800D1FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D1FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1FC8: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    // 0x800D1FCC: jal         0x800D395C
    // 0x800D1FD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D395C(rdram, ctx);
        goto after_0;
    // 0x800D1FD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D1FD4: beq         $v0, $zero, L_800D1FF0
    if (ctx->r2 == 0) {
        // 0x800D1FD8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800D1FF0;
    }
    // 0x800D1FD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D1FDC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800D1FE0: addiu       $t7, $t7, -0x4D70
    ctx->r15 = ADD32(ctx->r15, -0X4D70);
    // 0x800D1FE4: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800D1FE8: b           L_800D2000
    // 0x800D1FEC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
        goto L_800D2000;
    // 0x800D1FEC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_800D1FF0:
    // 0x800D1FF0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800D1FF4: addiu       $t9, $t9, -0x4DA0
    ctx->r25 = ADD32(ctx->r25, -0X4DA0);
    // 0x800D1FF8: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800D1FFC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_800D2000:
    // 0x800D2000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2008: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800D200C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2014: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D2018: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D201C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D2020: addiu       $v0, $v0, -0x4D72
    ctx->r2 = ADD32(ctx->r2, -0X4D72);
    // 0x800D2024: addiu       $v1, $v1, -0x4D9A
    ctx->r3 = ADD32(ctx->r3, -0X4D9A);
    // 0x800D2028: sh          $zero, -0x4DA0($at)
    MEM_H(-0X4DA0, ctx->r1) = 0;
    // 0x800D202C: sh          $zero, -0x4D9E($at)
    MEM_H(-0X4D9E, ctx->r1) = 0;
    // 0x800D2030: sh          $zero, -0x4D9C($at)
    MEM_H(-0X4D9C, ctx->r1) = 0;
L_800D2034:
    // 0x800D2034: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800D2038: sh          $zero, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = 0;
    // 0x800D203C: sh          $zero, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = 0;
    // 0x800D2040: sh          $zero, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = 0;
    // 0x800D2044: bne         $v1, $v0, L_800D2034
    if (ctx->r3 != ctx->r2) {
        // 0x800D2048: sh          $zero, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = 0;
            goto L_800D2034;
    }
    // 0x800D2048: sh          $zero, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = 0;
    // 0x800D204C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2054: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D2058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D205C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800D2060: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800D2064: jal         0x800D1FC0
    // 0x800D2068: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D1FC0(rdram, ctx);
        goto after_0;
    // 0x800D2068: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800D206C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800D2070: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x800D2074: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800D2078: bne         $v1, $zero, L_800D2088
    if (ctx->r3 != 0) {
        // 0x800D207C: nop
    
            goto L_800D2088;
    }
    // 0x800D207C: nop

    // 0x800D2080: b           L_800D20D0
    // 0x800D2084: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800D20D0;
    // 0x800D2084: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800D2088:
    // 0x800D2088: beq         $a0, $zero, L_800D20A4
    if (ctx->r4 == 0) {
        // 0x800D208C: lw          $t6, 0x30($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X30);
            goto L_800D20A4;
    }
    // 0x800D208C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800D2090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D2094: beq         $a0, $at, L_800D20AC
    if (ctx->r4 == ctx->r1) {
        // 0x800D2098: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_800D20AC;
    }
    // 0x800D2098: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800D209C: b           L_800D20B0
    // 0x800D20A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_800D20B0;
    // 0x800D20A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_800D20A4:
    // 0x800D20A4: b           L_800D20B0
    // 0x800D20A8: subu        $a0, $t6, $v1
    ctx->r4 = SUB32(ctx->r14, ctx->r3);
        goto L_800D20B0;
    // 0x800D20A8: subu        $a0, $t6, $v1
    ctx->r4 = SUB32(ctx->r14, ctx->r3);
L_800D20AC:
    // 0x800D20AC: subu        $a0, $v1, $t7
    ctx->r4 = SUB32(ctx->r3, ctx->r15);
L_800D20B0:
    // 0x800D20B0: bgtz        $a0, L_800D20D0
    if (SIGNED(ctx->r4) > 0) {
        // 0x800D20B4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_800D20D0;
    }
    // 0x800D20B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800D20B8: beq         $a0, $zero, L_800D20C8
    if (ctx->r4 == 0) {
        // 0x800D20BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800D20C8;
    }
    // 0x800D20BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D20C0: b           L_800D20D0
    // 0x800D20C4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_800D20D0;
    // 0x800D20C4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_800D20C8:
    // 0x800D20C8: b           L_800D20D0
    // 0x800D20CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800D20D0;
    // 0x800D20CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800D20D0:
    // 0x800D20D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D20D4: bnel        $v1, $at, L_800D210C
    if (ctx->r3 != ctx->r1) {
        // 0x800D20D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D210C;
    }
    goto skip_0;
    // 0x800D20D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D20DC: jal         0x800D395C
    // 0x800D20E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800D395C(rdram, ctx);
        goto after_1;
    // 0x800D20E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x800D20E4: beq         $v0, $zero, L_800D20FC
    if (ctx->r2 == 0) {
        // 0x800D20E8: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_800D20FC;
    }
    // 0x800D20E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800D20EC: addiu       $a0, $zero, 0xD54
    ctx->r4 = ADD32(0, 0XD54);
    // 0x800D20F0: jal         0x800DA544
    // 0x800D20F4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800DA544(rdram, ctx);
        goto after_2;
    // 0x800D20F4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x800D20F8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_800D20FC:
    // 0x800D20FC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800D2100: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800D2104: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x800D2108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D210C:
    // 0x800D210C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D2110: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800D2114: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D211C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D211C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2124: jal         0x800D1FC0
    // 0x800D2128: nop

    func_800D1FC0(rdram, ctx);
        goto after_0;
    // 0x800D2128: nop

    after_0:
    // 0x800D212C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2130: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x800D2134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2138: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2140: jr          $ra
    // 0x800D2144: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    return;
    // 0x800D2144: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
;}
RECOMP_FUNC void func_800D2148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2148: srl         $v1, $a1, 1
    ctx->r3 = S32(U32(ctx->r5) >> 1);
    // 0x800D214C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2150: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x800D2154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2158: bne         $at, $zero, L_800D2164
    if (ctx->r1 != 0) {
        // 0x800D215C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800D2164;
    }
    // 0x800D215C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800D2160: addiu       $v1, $zero, 0x17
    ctx->r3 = ADD32(0, 0X17);
L_800D2164:
    // 0x800D2164: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D2168: addiu       $a0, $a0, -0x4DA0
    ctx->r4 = ADD32(ctx->r4, -0X4DA0);
    // 0x800D216C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800D2170: jal         0x8001BBA0
    // 0x800D2174: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    rare_memcpy(rdram, ctx);
        goto after_0;
    // 0x800D2174: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    after_0:
    // 0x800D2178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D217C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2180: jr          $ra
    // 0x800D2184: nop

    return;
    // 0x800D2184: nop

;}
RECOMP_FUNC void func_800D2188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D218C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2190: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D2194: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    // 0x800D2198: jal         0x8001BBA0
    // 0x800D219C: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    rare_memcpy(rdram, ctx);
        goto after_0;
    // 0x800D219C: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    after_0:
    // 0x800D21A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D21A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D21A8: jr          $ra
    // 0x800D21AC: nop

    return;
    // 0x800D21AC: nop

;}
RECOMP_FUNC void func_800D21B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D21B0: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x800D21B4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800D21B8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800D21BC: addiu       $t7, $t7, -0x4D70
    ctx->r15 = ADD32(ctx->r15, -0X4D70);
    // 0x800D21C0: jr          $ra
    // 0x800D21C4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    return;
    // 0x800D21C4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_800D21D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D21D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D21D4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800D21D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D21DC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D21E0: addiu       $t8, $t8, -0x5050
    ctx->r24 = ADD32(ctx->r24, -0X5050);
    // 0x800D21E4: addiu       $t7, $t6, -0x900
    ctx->r15 = ADD32(ctx->r14, -0X900);
    // 0x800D21E8: jr          $ra
    // 0x800D21EC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x800D21EC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_800D21F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D21F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D21F4: addiu       $t7, $t7, -0x4BA4
    ctx->r15 = ADD32(ctx->r15, -0X4BA4);
    // 0x800D21F8: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800D21FC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800D2200: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800D2204: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800D2208: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D220C: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    // 0x800D2210: addu        $a2, $t8, $v0
    ctx->r6 = ADD32(ctx->r24, ctx->r2);
    // 0x800D2214: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x800D2218: beql        $at, $zero, L_800D2254
    if (ctx->r1 == 0) {
            // 0x800D221C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    static_3_800D2254(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D221C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800D2220: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800D2224: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800D2228: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x800D222C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x800D2230: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x800D2234: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x800D2238: bne         $a0, $t1, L_800D2248
    if (ctx->r4 != ctx->r9) {
            // 0x800D223C: nop

    func_800D2248(rdram, ctx);
    return;
    }
    // 0x800D223C: nop

    // 0x800D2240: jr          $ra
    // 0x800D2244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800D2244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800D2248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800D2224:
    // 0x800D2248: bnel        $at, $zero, L_800D2224
    if (ctx->r1 != 0) {
            // 0x800D224C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    static_3_800D2224(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D224C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    skip_0:
    // 0x800D2250: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800D2254: jr          $ra
    // 0x800D2258: nop

    return;
    // 0x800D2258: nop

;}
RECOMP_FUNC void func_800D225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D225C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D2260: addiu       $t7, $t7, -0x4BA4
    ctx->r15 = ADD32(ctx->r15, -0X4BA4);
    // 0x800D2264: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D2268: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800D226C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800D2270: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800D2274: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800D2278: addiu       $a2, $a2, -0x4D40
    ctx->r6 = ADD32(ctx->r6, -0X4D40);
    // 0x800D227C: addu        $a1, $t8, $v0
    ctx->r5 = ADD32(ctx->r24, ctx->r2);
    // 0x800D2280: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800D2284: beq         $at, $zero, L_800D22BC
    if (ctx->r1 == 0) {
        // 0x800D2288: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_800D22BC;
    }
    // 0x800D2288: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800D228C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
L_800D2290:
    // 0x800D2290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800D2294: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800D2298: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x800D229C: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x800D22A0: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x800D22A4: bne         $a0, $t1, L_800D22B4
    if (ctx->r4 != ctx->r9) {
        // 0x800D22A8: nop
    
            goto L_800D22B4;
    }
    // 0x800D22A8: nop

    // 0x800D22AC: jr          $ra
    // 0x800D22B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800D22B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800D22B4:
    // 0x800D22B4: bnel        $at, $zero, L_800D2290
    if (ctx->r1 != 0) {
        // 0x800D22B8: lbu         $v1, 0x0($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X0);
            goto L_800D2290;
    }
    goto skip_0;
    // 0x800D22B8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    skip_0:
L_800D22BC:
    // 0x800D22BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800D22C0: jr          $ra
    // 0x800D22C4: nop

    return;
    // 0x800D22C4: nop

;}
RECOMP_FUNC void func_800D22C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D22C8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D22CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D22D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D22D4: lw          $t7, -0x4BA0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4BA0);
    // 0x800D22D8: jr          $ra
    // 0x800D22DC: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    return;
    // 0x800D22DC: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
;}
RECOMP_FUNC void func_800D22E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D22E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D22E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D22E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800D22EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D22F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D22F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800D22F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800D22FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800D2300: jal         0x800D21F0
    // 0x800D2304: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    func_800D21F0(rdram, ctx);
        goto after_0;
    // 0x800D2304: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    after_0:
    // 0x800D2308: bgez        $v0, L_800D231C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800D230C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800D231C;
    }
    // 0x800D230C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D2310: jal         0x800D225C
    // 0x800D2314: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    func_800D225C(rdram, ctx);
        goto after_1;
    // 0x800D2314: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    after_1:
    // 0x800D2318: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800D231C:
    // 0x800D231C: bgez        $v0, L_800D2330
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800D2320: nop
    
            goto L_800D2330;
    }
    // 0x800D2320: nop

    // 0x800D2324: jal         0x800D22C8
    // 0x800D2328: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    func_800D22C8(rdram, ctx);
        goto after_2;
    // 0x800D2328: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    after_2:
    // 0x800D232C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800D2330:
    // 0x800D2330: bltzl       $v0, L_800D2384
    if (SIGNED(ctx->r2) < 0) {
        // 0x800D2334: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D2384;
    }
    goto skip_0;
    // 0x800D2334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800D2338: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x800D233C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D2340: lbu         $a2, 0x1($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1);
    // 0x800D2344: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800D2348: lbu         $a3, 0x2($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X2);
    // 0x800D234C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x800D2350: jal         0x800FA708
    // 0x800D2354: nop

    func_800FA708(rdram, ctx);
        goto after_3;
    // 0x800D2354: nop

    after_3:
    // 0x800D2358: beq         $v0, $zero, L_800D2380
    if (ctx->r2 == 0) {
        // 0x800D235C: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_800D2380;
    }
    // 0x800D235C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800D2360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D2364: jal         0x800FA9B4
    // 0x800D2368: lh          $a1, 0x6($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X6);
    func_800FA9B4(rdram, ctx);
        goto after_4;
    // 0x800D2368: lh          $a1, 0x6($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X6);
    after_4:
    // 0x800D236C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D2370: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x800D2374: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D2378: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D237C: sh          $t7, -0x4D40($at)
    MEM_H(-0X4D40, ctx->r1) = ctx->r15;
L_800D2380:
    // 0x800D2380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D2384:
    // 0x800D2384: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800D2388: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D238C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D2390: jr          $ra
    // 0x800D2394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D2394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D2398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D239C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D23A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800D23A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D23A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800D23AC: jal         0x800D21F0
    // 0x800D23B0: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    func_800D21F0(rdram, ctx);
        goto after_0;
    // 0x800D23B0: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    after_0:
    // 0x800D23B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D23B8: slti        $t7, $v0, 0x0
    ctx->r15 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x800D23BC: xori        $v0, $t7, 0x1
    ctx->r2 = ctx->r15 ^ 0X1;
    // 0x800D23C0: beq         $v0, $zero, L_800D23D8
    if (ctx->r2 == 0) {
        // 0x800D23C4: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_800D23D8;
    }
    // 0x800D23C4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800D23C8: jal         0x800FA8E8
    // 0x800D23CC: lbu         $a1, 0x1($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X1);
    func_800FA8E8(rdram, ctx);
        goto after_1;
    // 0x800D23CC: lbu         $a1, 0x1($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X1);
    after_1:
    // 0x800D23D0: xori        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 ^ 0X1;
    // 0x800D23D4: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
L_800D23D8:
    // 0x800D23D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D23DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D23E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D23E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D23E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D23EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D23F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800D23F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D23F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800D23FC: jal         0x800D21F0
    // 0x800D2400: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    func_800D21F0(rdram, ctx);
        goto after_0;
    // 0x800D2400: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    after_0:
    // 0x800D2404: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D2408: slti        $t7, $v0, 0x0
    ctx->r15 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x800D240C: xori        $v0, $t7, 0x1
    ctx->r2 = ctx->r15 ^ 0X1;
    // 0x800D2410: beq         $v0, $zero, L_800D2428
    if (ctx->r2 == 0) {
        // 0x800D2414: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_800D2428;
    }
    // 0x800D2414: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800D2418: jal         0x800FA874
    // 0x800D241C: lbu         $a1, 0x1($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X1);
    func_800FA874(rdram, ctx);
        goto after_1;
    // 0x800D241C: lbu         $a1, 0x1($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X1);
    after_1:
    // 0x800D2420: xori        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 ^ 0X1;
    // 0x800D2424: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
L_800D2428:
    // 0x800D2428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D242C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2430: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2438: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D243C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D2440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800D2444: addiu       $v0, $v0, -0x4C0C
    ctx->r2 = ADD32(ctx->r2, -0X4C0C);
    // 0x800D2448: addiu       $v1, $v1, -0x5050
    ctx->r3 = ADD32(ctx->r3, -0X5050);
    // 0x800D244C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_800D2450:
    // 0x800D2450: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x800D2454: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800D2458: sh          $a0, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r4;
    // 0x800D245C: sh          $zero, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = 0;
    // 0x800D2460: bne         $at, $zero, L_800D2450
    if (ctx->r1 != 0) {
        // 0x800D2464: swc1        $f0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f0.u32l;
            goto L_800D2450;
    }
    // 0x800D2464: swc1        $f0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f0.u32l;
    // 0x800D2468: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D246C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D2470: addiu       $v0, $v0, -0x4CE0
    ctx->r2 = ADD32(ctx->r2, -0X4CE0);
    // 0x800D2474: addiu       $v1, $v1, -0x4D40
    ctx->r3 = ADD32(ctx->r3, -0X4D40);
L_800D2478:
    // 0x800D2478: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800D247C: sh          $a0, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r4;
    // 0x800D2480: sh          $a0, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r4;
    // 0x800D2484: sh          $a0, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r4;
    // 0x800D2488: bne         $v1, $v0, L_800D2478
    if (ctx->r3 != ctx->r2) {
        // 0x800D248C: sh          $a0, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = ctx->r4;
            goto L_800D2478;
    }
    // 0x800D248C: sh          $a0, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r4;
    // 0x800D2490: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D249C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D24A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D24A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800D24A8: jal         0x800D21D0
    // 0x800D24AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D24AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800D24B0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800D24B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D24B8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800D24BC: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x800D24C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D24C4: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x800D24C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800D24CC: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    // 0x800D24D0: jal         0x800D22E0
    // 0x800D24D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800D22E0(rdram, ctx);
        goto after_1;
    // 0x800D24D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800D24D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D24DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D24E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D24E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D24E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D24EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D24F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800D24F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800D24F8: jal         0x800D21D0
    // 0x800D24FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D24FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D2500: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x800D2504: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800D2508: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800D250C: bgez        $t6, L_800D2528
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800D2510: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D2528;
    }
    // 0x800D2510: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D2514: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800D2518: jal         0x800D2498
    // 0x800D251C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800D2498(rdram, ctx);
        goto after_1;
    // 0x800D251C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800D2520: b           L_800D2568
    // 0x800D2524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D2568;
    // 0x800D2524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D2528:
    // 0x800D2528: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D252C: sh          $a2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r6;
    // 0x800D2530: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800D2534: sh          $t7, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r15;
    // 0x800D2538: jal         0x800D22E0
    // 0x800D253C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D22E0(rdram, ctx);
        goto after_2;
    // 0x800D253C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x800D2540: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D2544: bne         $v0, $zero, L_800D2560
    if (ctx->r2 != 0) {
        // 0x800D2548: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800D2560;
    }
    // 0x800D2548: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800D254C: lh          $t8, 0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X4);
    // 0x800D2550: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800D2554: nop

    // 0x800D2558: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D255C: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
L_800D2560:
    // 0x800D2560: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800D2564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D2568:
    // 0x800D2568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D256C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2574: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800D2578: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800D257C: sw          $s7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r23;
    // 0x800D2580: sw          $s6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r22;
    // 0x800D2584: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x800D2588: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x800D258C: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x800D2590: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x800D2594: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x800D2598: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x800D259C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x800D25A0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x800D25A4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800D25A8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800D25AC: jal         0x800D8FF8
    // 0x800D25B0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800D25B0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x800D25B4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800D25B8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800D25BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800D25C0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800D25C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D25C8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800D25CC: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x800D25D0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800D25D4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x800D25D8: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800D25DC: addiu       $s6, $s6, -0x4D40
    ctx->r22 = ADD32(ctx->r22, -0X4D40);
    // 0x800D25E0: addiu       $s1, $s1, -0x5050
    ctx->r17 = ADD32(ctx->r17, -0X5050);
    // 0x800D25E4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800D25E8: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x800D25EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800D25F0: addiu       $s4, $zero, 0x5B
    ctx->r20 = ADD32(0, 0X5B);
L_800D25F4:
    // 0x800D25F4: addiu       $s3, $s2, 0xC0
    ctx->r19 = ADD32(ctx->r18, 0XC0);
    // 0x800D25F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800D25FC: jal         0x800D21F0
    // 0x800D2600: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    func_800D21F0(rdram, ctx);
        goto after_1;
    // 0x800D2600: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    after_1:
    // 0x800D2604: bltz        $v0, L_800D26FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800D2608: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800D26FC;
    }
    // 0x800D2608: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D260C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D2610: jal         0x800FA8E8
    // 0x800D2614: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    func_800FA8E8(rdram, ctx);
        goto after_2;
    // 0x800D2614: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    after_2:
    // 0x800D2618: beq         $v0, $s5, L_800D2630
    if (ctx->r2 == ctx->r21) {
        // 0x800D261C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D2630;
    }
    // 0x800D261C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D2620: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x800D2624: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x800D2628: b           L_800D26FC
    // 0x800D262C: sh          $s7, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r23;
        goto L_800D26FC;
    // 0x800D262C: sh          $s7, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r23;
L_800D2630:
    // 0x800D2630: jal         0x800FA874
    // 0x800D2634: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    func_800FA874(rdram, ctx);
        goto after_3;
    // 0x800D2634: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    after_3:
    // 0x800D2638: beql        $v0, $zero, L_800D2700
    if (ctx->r2 == 0) {
        // 0x800D263C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800D2700;
    }
    goto skip_0;
    // 0x800D263C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800D2640: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x800D2644: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x800D2648: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x800D264C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800D2650: nop

    // 0x800D2654: beql        $v0, $t9, L_800D2700
    if (ctx->r2 == ctx->r25) {
        // 0x800D2658: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800D2700;
    }
    goto skip_1;
    // 0x800D2658: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x800D265C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800D2660: nop

    // 0x800D2664: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D2668: sub.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x800D266C: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x800D2670: nop

    // 0x800D2674: bc1fl       L_800D2688
    if (!c1cs) {
        // 0x800D2678: mov.s       $f14, $f28
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
            goto L_800D2688;
    }
    goto skip_2;
    // 0x800D2678: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    skip_2:
    // 0x800D267C: b           L_800D2688
    // 0x800D2680: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
        goto L_800D2688;
    // 0x800D2680: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x800D2684: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
L_800D2688:
    // 0x800D2688: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x800D268C: nop

    // 0x800D2690: bc1fl       L_800D26A4
    if (!c1cs) {
        // 0x800D2694: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800D26A4;
    }
    goto skip_3;
    // 0x800D2694: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x800D2698: b           L_800D26A4
    // 0x800D269C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
        goto L_800D26A4;
    // 0x800D269C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800D26A0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800D26A4:
    // 0x800D26A4: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x800D26A8: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x800D26AC: nop

    // 0x800D26B0: bc1fl       L_800D26C4
    if (!c1cs) {
        // 0x800D26B4: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_800D26C4;
    }
    goto skip_4;
    // 0x800D26B4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_4:
    // 0x800D26B8: b           L_800D26E4
    // 0x800D26BC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_800D26E4;
    // 0x800D26BC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x800D26C0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_800D26C4:
    // 0x800D26C4: nop

    // 0x800D26C8: bc1fl       L_800D26DC
    if (!c1cs) {
        // 0x800D26CC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800D26DC;
    }
    goto skip_5;
    // 0x800D26CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_5:
    // 0x800D26D0: b           L_800D26DC
    // 0x800D26D4: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
        goto L_800D26DC;
    // 0x800D26D4: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800D26D8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800D26DC:
    // 0x800D26DC: mul.s       $f0, $f2, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x800D26E0: nop

L_800D26E4:
    // 0x800D26E4: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800D26E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D26EC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800D26F0: add.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x800D26F4: jal         0x800D22E0
    // 0x800D26F8: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    func_800D22E0(rdram, ctx);
        goto after_4;
    // 0x800D26F8: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    after_4:
L_800D26FC:
    // 0x800D26FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D2700:
    // 0x800D2700: bne         $s2, $s4, L_800D25F4
    if (ctx->r18 != ctx->r20) {
        // 0x800D2704: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800D25F4;
    }
    // 0x800D2704: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800D2708: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800D270C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800D2710: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800D2714: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800D2718: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x800D271C: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x800D2720: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x800D2724: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800D2728: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x800D272C: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x800D2730: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x800D2734: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x800D2738: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x800D273C: lw          $s7, 0x58($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X58);
    // 0x800D2740: jr          $ra
    // 0x800D2744: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800D2744: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800D2748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D274C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2750: jal         0x800D21D0
    // 0x800D2754: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D2754: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D2758: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D275C: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x800D2760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2768: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2778: jal         0x800D21D0
    // 0x800D277C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D277C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D2780: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2784: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800D2788: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x800D278C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D2790: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x800D2794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D279C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D27A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D27A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D27A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D27AC: jal         0x800D21D0
    // 0x800D27B0: nop

    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D27B0: nop

    after_0:
    // 0x800D27B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D27B8: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800D27BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D27C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D27C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D27C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D27CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D27D0: jal         0x800D21D0
    // 0x800D27D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D27D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D27D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D27DC: jal         0x800D21F0
    // 0x800D27E0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    func_800D21F0(rdram, ctx);
        goto after_1;
    // 0x800D27E0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    after_1:
    // 0x800D27E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D27E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D27EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D27F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D27F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D27F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D27FC: jal         0x800D21D0
    // 0x800D2800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D2800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D2804: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D2808: jal         0x800D23E8
    // 0x800D280C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800D23E8(rdram, ctx);
        goto after_1;
    // 0x800D280C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800D2810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2818: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2828: jal         0x800D21D0
    // 0x800D282C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D282C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D2830: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D2834: jal         0x800D2398
    // 0x800D2838: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800D2398(rdram, ctx);
        goto after_1;
    // 0x800D2838: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800D283C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2844: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D284C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D284C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D2850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2854: jal         0x800D21D0
    // 0x800D2858: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D2858: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D285C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800D2860: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x800D2864: jal         0x800D21F0
    // 0x800D2868: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800D21F0(rdram, ctx);
        goto after_1;
    // 0x800D2868: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800D286C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D2870: slti        $t6, $v0, 0x0
    ctx->r14 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x800D2874: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    // 0x800D2878: beq         $v0, $zero, L_800D2890
    if (ctx->r2 == 0) {
        // 0x800D287C: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_800D2890;
    }
    // 0x800D287C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2880: jal         0x800FA818
    // 0x800D2884: lbu         $a1, 0x1($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X1);
    func_800FA818(rdram, ctx);
        goto after_2;
    // 0x800D2884: lbu         $a1, 0x1($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X1);
    after_2:
    // 0x800D2888: xori        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 ^ 0X1;
    // 0x800D288C: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
L_800D2890:
    // 0x800D2890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D2898: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D28A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D28A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D28A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D28A8: jal         0x800D21D0
    // 0x800D28AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D28AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D28B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D28B4: jal         0x800D21F0
    // 0x800D28B8: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    func_800D21F0(rdram, ctx);
        goto after_1;
    // 0x800D28B8: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    after_1:
    // 0x800D28BC: bltz        $v0, L_800D28D4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800D28C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D28D4;
    }
    // 0x800D28C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D28C4: jal         0x800FAA74
    // 0x800D28C8: nop

    func_800FAA74(rdram, ctx);
        goto after_2;
    // 0x800D28C8: nop

    after_2:
    // 0x800D28CC: b           L_800D28D8
    // 0x800D28D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800D28D8;
    // 0x800D28D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D28D4:
    // 0x800D28D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D28D8:
    // 0x800D28D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D28DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D28E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D28E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D28E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D28EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D28F0: jal         0x800D21D0
    // 0x800D28F4: nop

    func_800D21D0(rdram, ctx);
        goto after_0;
    // 0x800D28F4: nop

    after_0:
    // 0x800D28F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D28FC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800D2900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2904: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2910: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D2914: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D2918: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800D291C: addiu       $v1, $v1, -0x4CE0
    ctx->r3 = ADD32(ctx->r3, -0X4CE0);
    // 0x800D2920: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D2924: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x800D2928: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D292C: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x800D2930: lbu         $t8, 0xC($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XC);
    // 0x800D2934: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x800D2938: lbu         $t9, 0xD($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XD);
    // 0x800D293C: sh          $t9, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r25;
    // 0x800D2940: lbu         $t0, 0xE($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XE);
    // 0x800D2944: sh          $t0, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r8;
    // 0x800D2948: lbu         $t1, 0xF($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0XF);
    // 0x800D294C: sh          $t1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r9;
    // 0x800D2950: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800D2954: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x800D2958: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800D295C: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x800D2960: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x800D2964: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800D2968: jr          $ra
    // 0x800D296C: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    return;
    // 0x800D296C: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
;}
RECOMP_FUNC void func_800D2970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2970: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D2974: addiu       $v0, $v0, -0x4CE0
    ctx->r2 = ADD32(ctx->r2, -0X4CE0);
    // 0x800D2978: sb          $zero, 0x18($v0)
    MEM_B(0X18, ctx->r2) = 0;
    // 0x800D297C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x800D2980: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800D2984: jr          $ra
    // 0x800D2988: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    return;
    // 0x800D2988: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800D298C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D298C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D2990: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D2994: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D2998: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800D299C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800D29A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800D29A4: jal         0x800EA05C
    // 0x800D29A8: addiu       $s0, $s0, -0x4AD0
    ctx->r16 = ADD32(ctx->r16, -0X4AD0);
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800D29A8: addiu       $s0, $s0, -0x4AD0
    ctx->r16 = ADD32(ctx->r16, -0X4AD0);
    after_0:
    // 0x800D29AC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D29B0: addiu       $v1, $v1, -0x4CE0
    ctx->r3 = ADD32(ctx->r3, -0X4CE0);
    // 0x800D29B4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800D29B8: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x800D29BC: sb          $zero, 0x18($v1)
    MEM_B(0X18, ctx->r3) = 0;
    // 0x800D29C0: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x800D29C4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D29C8: lh          $t8, -0x4AD0($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X4AD0);
    // 0x800D29CC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x800D29D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D29D4: beql        $s2, $t8, L_800D2A30
    if (ctx->r18 == ctx->r24) {
        // 0x800D29D8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800D2A30;
    }
    goto skip_0;
    // 0x800D29D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800D29DC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_800D29E0:
    // 0x800D29E0: bnel        $s1, $v0, L_800D2A20
    if (ctx->r17 != ctx->r2) {
        // 0x800D29E4: lh          $v0, 0x10($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X10);
            goto L_800D2A20;
    }
    goto skip_1;
    // 0x800D29E4: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    skip_1:
    // 0x800D29E8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x800D29EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D29F0: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x800D29F4: beql        $t9, $zero, L_800D2A0C
    if (ctx->r25 == 0) {
        // 0x800D29F8: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_800D2A0C;
    }
    goto skip_2;
    // 0x800D29F8: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    skip_2:
    // 0x800D29FC: jal         0x800D2910
    // 0x800D2A00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D2910(rdram, ctx);
        goto after_1;
    // 0x800D2A00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800D2A04: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x800D2A08: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
L_800D2A0C:
    // 0x800D2A0C: beq         $t0, $zero, L_800D2A1C
    if (ctx->r8 == 0) {
        // 0x800D2A10: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800D2A1C;
    }
    // 0x800D2A10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D2A14: jal         0x800D2910
    // 0x800D2A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D2910(rdram, ctx);
        goto after_2;
    // 0x800D2A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_800D2A1C:
    // 0x800D2A1C: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
L_800D2A20:
    // 0x800D2A20: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800D2A24: bne         $s2, $v0, L_800D29E0
    if (ctx->r18 != ctx->r2) {
        // 0x800D2A28: nop
    
            goto L_800D29E0;
    }
    // 0x800D2A28: nop

    // 0x800D2A2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D2A30:
    // 0x800D2A30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D2A34: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2A38: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800D2A3C: jr          $ra
    // 0x800D2A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D2A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D2A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2A44: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800D2A48: addiu       $a2, $a2, -0x4CE0
    ctx->r6 = ADD32(ctx->r6, -0X4CE0);
    // 0x800D2A4C: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x800D2A50: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800D2A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2A58: beq         $t6, $zero, L_800D2C44
    if (ctx->r14 == 0) {
        // 0x800D2A5C: sw          $a0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r4;
            goto L_800D2C44;
    }
    // 0x800D2A5C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800D2A60: jal         0x800A89F8
    // 0x800D2A64: nop

    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x800D2A64: nop

    after_0:
    // 0x800D2A68: jal         0x800A9478
    // 0x800D2A6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A9478(rdram, ctx);
        goto after_1;
    // 0x800D2A6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800D2A70: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800D2A74: jal         0x800F6BE4
    // 0x800D2A78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6BE4(rdram, ctx);
        goto after_2;
    // 0x800D2A78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800D2A7C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800D2A80: beq         $v0, $zero, L_800D2AA8
    if (ctx->r2 == 0) {
        // 0x800D2A84: addiu       $a2, $a2, -0x4CE0
        ctx->r6 = ADD32(ctx->r6, -0X4CE0);
            goto L_800D2AA8;
    }
    // 0x800D2A84: addiu       $a2, $a2, -0x4CE0
    ctx->r6 = ADD32(ctx->r6, -0X4CE0);
    // 0x800D2A88: jal         0x800A93E4
    // 0x800D2A8C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800A93E4(rdram, ctx);
        goto after_3;
    // 0x800D2A8C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x800D2A90: jal         0x8010FFD8
    // 0x800D2A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFD8(rdram, ctx);
        goto after_4;
    // 0x800D2A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800D2A98: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800D2A9C: addiu       $a2, $a2, -0x4CE0
    ctx->r6 = ADD32(ctx->r6, -0X4CE0);
    // 0x800D2AA0: b           L_800D2AAC
    // 0x800D2AA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800D2AAC;
    // 0x800D2AA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800D2AA8:
    // 0x800D2AA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800D2AAC:
    // 0x800D2AAC: lbu         $t7, 0x18($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X18);
    // 0x800D2AB0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x800D2AB4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x800D2AB8: beql        $t7, $zero, L_800D2AD4
    if (ctx->r15 == 0) {
        // 0x800D2ABC: lbu         $t8, 0x4($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X4);
            goto L_800D2AD4;
    }
    goto skip_0;
    // 0x800D2ABC: lbu         $t8, 0x4($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X4);
    skip_0:
    // 0x800D2AC0: beql        $v1, $zero, L_800D2AD4
    if (ctx->r3 == 0) {
        // 0x800D2AC4: lbu         $t8, 0x4($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X4);
            goto L_800D2AD4;
    }
    goto skip_1;
    // 0x800D2AC4: lbu         $t8, 0x4($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X4);
    skip_1:
    // 0x800D2AC8: b           L_800D2AE4
    // 0x800D2ACC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800D2AE4;
    // 0x800D2ACC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800D2AD0: lbu         $t8, 0x4($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X4);
L_800D2AD4:
    // 0x800D2AD4: beql        $t8, $zero, L_800D2C48
    if (ctx->r24 == 0) {
        // 0x800D2AD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D2C48;
    }
    goto skip_2;
    // 0x800D2AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800D2ADC: bne         $v1, $zero, L_800D2C44
    if (ctx->r3 != 0) {
        // 0x800D2AE0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800D2C44;
    }
    // 0x800D2AE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800D2AE4:
    // 0x800D2AE4: jal         0x800E3CB8
    // 0x800D2AE8: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_800E3CB8(rdram, ctx);
        goto after_5;
    // 0x800D2AE8: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_5:
    // 0x800D2AEC: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800D2AF0: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800D2AF4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x800D2AF8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800D2AFC: c.eq.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl == ctx->f18.fl;
    // 0x800D2B00: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800D2B04: sub.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x800D2B08: addiu       $a2, $a2, -0x4CE0
    ctx->r6 = ADD32(ctx->r6, -0X4CE0);
    // 0x800D2B0C: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x800D2B10: bc1t        L_800D2C44
    if (c1cs) {
        // 0x800D2B14: swc1        $f4, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
            goto L_800D2C44;
    }
    // 0x800D2B14: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x800D2B18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D2B1C: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    // 0x800D2B20: lh          $t1, 0x6($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X6);
    // 0x800D2B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800D2B28: lui         $t8, 0xDB08
    ctx->r24 = S32(0XDB08 << 16);
    // 0x800D2B2C: sh          $t1, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r9;
    // 0x800D2B30: lh          $t2, 0x8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X8);
    // 0x800D2B34: sh          $t2, 0x2E($a2)
    MEM_H(0X2E, ctx->r6) = ctx->r10;
    // 0x800D2B38: lh          $t3, 0xA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XA);
    // 0x800D2B3C: sh          $t3, 0x30($a2)
    MEM_H(0X30, ctx->r6) = ctx->r11;
    // 0x800D2B40: lh          $t4, 0xC($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XC);
    // 0x800D2B44: sh          $t4, 0x32($a2)
    MEM_H(0X32, ctx->r6) = ctx->r12;
    // 0x800D2B48: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800D2B4C: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800D2B50: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800D2B54: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x800D2B58: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800D2B5C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800D2B60: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800D2B64: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x800D2B68: nop

    // 0x800D2B6C: bc1fl       L_800D2B80
    if (!c1cs) {
        // 0x800D2B70: div.s       $f10, $f18, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
            goto L_800D2B80;
    }
    goto skip_3;
    // 0x800D2B70: div.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    skip_3:
    // 0x800D2B74: b           L_800D2BF0
    // 0x800D2B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_800D2BF0;
    // 0x800D2B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D2B7C: div.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
L_800D2B80:
    // 0x800D2B80: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D2B84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800D2B88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800D2B8C: add.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x800D2B90: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800D2B94: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800D2B98: div.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800D2B9C: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800D2BA0: div.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    // 0x800D2BA4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800D2BA8: sub.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x800D2BAC: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800D2BB0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800D2BB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D2BB8: lui         $at, 0xC380
    ctx->r1 = S32(0XC380 << 16);
    // 0x800D2BBC: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x800D2BC0: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x800D2BC4: div.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800D2BC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D2BCC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800D2BD0: nop

    // 0x800D2BD4: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800D2BD8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800D2BDC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800D2BE0: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x800D2BE4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800D2BE8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800D2BEC: nop

L_800D2BF0:
    // 0x800D2BF0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800D2BF4: addiu       $a1, $zero, -0x7FFF
    ctx->r5 = ADD32(0, -0X7FFF);
    // 0x800D2BF8: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x800D2BFC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800D2C00: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800D2C04: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800D2C08: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x800D2C0C: jal         0x800F0D90
    // 0x800D2C10: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800F0D90(rdram, ctx);
        goto after_6;
    // 0x800D2C10: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_6:
    // 0x800D2C14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800D2C18: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800D2C1C: addiu       $a1, $zero, -0x7FFF
    ctx->r5 = ADD32(0, -0X7FFF);
    // 0x800D2C20: jal         0x800F0D90
    // 0x800D2C24: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    func_800F0D90(rdram, ctx);
        goto after_7;
    // 0x800D2C24: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    after_7:
    // 0x800D2C28: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800D2C2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C30: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x800D2C34: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x800D2C38: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x800D2C3C: jal         0x800D2CC4
    // 0x800D2C40: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    func_800D2CC4(rdram, ctx);
        goto after_8;
    // 0x800D2C40: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    after_8:
L_800D2C44:
    // 0x800D2C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D2C48:
    // 0x800D2C48: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800D2C4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2C54: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D2C58: addiu       $a1, $a1, -0x4CE0
    ctx->r5 = ADD32(ctx->r5, -0X4CE0);
    // 0x800D2C5C: lbu         $t6, 0x1($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1);
    // 0x800D2C60: bne         $t6, $zero, L_800D2CBC
    if (ctx->r14 != 0) {
        // 0x800D2C64: nop
    
            goto L_800D2CBC;
    }
    // 0x800D2C64: nop

    // 0x800D2C68: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800D2C6C: lui         $t8, 0xF800
    ctx->r24 = S32(0XF800 << 16);
    // 0x800D2C70: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800D2C74: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800D2C78: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800D2C7C: lh          $t9, 0x32($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X32);
    // 0x800D2C80: lh          $t5, 0x2E($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X2E);
    // 0x800D2C84: lh          $t2, 0x2C($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X2C);
    // 0x800D2C88: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800D2C8C: lh          $t9, 0x30($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X30);
    // 0x800D2C90: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x800D2C94: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x800D2C98: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x800D2C9C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800D2CA0: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x800D2CA4: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x800D2CA8: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800D2CAC: or          $t0, $t8, $t2
    ctx->r8 = ctx->r24 | ctx->r10;
    // 0x800D2CB0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800D2CB4: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x800D2CB8: sb          $t3, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r11;
L_800D2CBC:
    // 0x800D2CBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2CC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D2CC8: jr          $ra
    // 0x800D2CCC: sb          $zero, -0x4CDF($at)
    MEM_B(-0X4CDF, ctx->r1) = 0;
    return;
    // 0x800D2CCC: sb          $zero, -0x4CDF($at)
    MEM_B(-0X4CDF, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800D2CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2CD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800D2CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D2CD8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D2CDC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D2CE0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800D2CE4: jal         0x800BE58C
    // 0x800D2CE8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800BE58C(rdram, ctx);
        goto after_0;
    // 0x800D2CE8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x800D2CEC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D2CF0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800D2CF4: addiu       $s1, $s1, -0x4CA0
    ctx->r17 = ADD32(ctx->r17, -0X4CA0);
    // 0x800D2CF8: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x800D2CFC: jal         0x8001ACCC
    // 0x800D2D00: sll         $a0, $t6, 1
    ctx->r4 = S32(ctx->r14 << 1);
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x800D2D00: sll         $a0, $t6, 1
    ctx->r4 = S32(ctx->r14 << 1);
    after_1:
    // 0x800D2D04: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x800D2D08: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800D2D0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800D2D10: blez        $t8, L_800D2D3C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800D2D14: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_800D2D3C;
    }
    // 0x800D2D14: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800D2D18: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
L_800D2D1C:
    // 0x800D2D1C: sll         $t0, $v1, 1
    ctx->r8 = S32(ctx->r3 << 1);
    // 0x800D2D20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800D2D24: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800D2D28: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x800D2D2C: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x800D2D30: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800D2D34: bnel        $at, $zero, L_800D2D1C
    if (ctx->r1 != 0) {
        // 0x800D2D38: lw          $t9, 0x0($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X0);
            goto L_800D2D1C;
    }
    goto skip_0;
    // 0x800D2D38: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    skip_0:
L_800D2D3C:
    // 0x800D2D3C: jal         0x800BE52C
    // 0x800D2D40: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800BE52C(rdram, ctx);
        goto after_2;
    // 0x800D2D40: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x800D2D44: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D2D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2D4C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800D2D50: slt         $at, $zero, $t3
    ctx->r1 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800D2D54: beq         $at, $zero, L_800D2E38
    if (ctx->r1 == 0) {
        // 0x800D2D58: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_800D2E38;
    }
    // 0x800D2D58: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800D2D5C: slt         $at, $zero, $a2
    ctx->r1 = SIGNED(0) < SIGNED(ctx->r6) ? 1 : 0;
L_800D2D60:
    // 0x800D2D60: beq         $at, $zero, L_800D2E24
    if (ctx->r1 == 0) {
        // 0x800D2D64: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800D2E24;
    }
    // 0x800D2D64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800D2D68: slt         $at, $zero, $a0
    ctx->r1 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
L_800D2D6C:
    // 0x800D2D6C: beq         $at, $zero, L_800D2E14
    if (ctx->r1 == 0) {
        // 0x800D2D70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800D2E14;
    }
    // 0x800D2D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D2D74: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x800D2D78: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x800D2D7C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
L_800D2D80:
    // 0x800D2D80: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800D2D84: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D2D88: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D2D8C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800D2D90: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800D2D94: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800D2D98: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x800D2D9C: mflo        $t5
    ctx->r13 = lo;
    // 0x800D2DA0: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800D2DA4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800D2DA8: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D2DAC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800D2DB0: mflo        $t2
    ctx->r10 = lo;
    // 0x800D2DB4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800D2DB8: addu        $s0, $t0, $t3
    ctx->r16 = ADD32(ctx->r8, ctx->r11);
    // 0x800D2DBC: jal         0x800E9D68
    // 0x800D2DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9D68(rdram, ctx);
        goto after_3;
    // 0x800D2DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800D2DC4: beql        $v0, $zero, L_800D2DF4
    if (ctx->r2 == 0) {
        // 0x800D2DC8: lw          $v0, 0x54($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X54);
            goto L_800D2DF4;
    }
    goto skip_1;
    // 0x800D2DC8: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    skip_1:
    // 0x800D2DCC: jal         0x800E9DC4
    // 0x800D2DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9DC4(rdram, ctx);
        goto after_4;
    // 0x800D2DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800D2DD4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800D2DD8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800D2DDC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800D2DE0: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x800D2DE4: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x800D2DE8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800D2DEC: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x800D2DF0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
L_800D2DF4:
    // 0x800D2DF4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800D2DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800D2DFC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800D2E00: bnel        $at, $zero, L_800D2D80
    if (ctx->r1 != 0) {
        // 0x800D2E04: lw          $t4, 0x38($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X38);
            goto L_800D2D80;
    }
    goto skip_2;
    // 0x800D2E04: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    skip_2:
    // 0x800D2E08: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800D2E0C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800D2E10: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_800D2E14:
    // 0x800D2E14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800D2E18: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800D2E1C: bnel        $at, $zero, L_800D2D6C
    if (ctx->r1 != 0) {
        // 0x800D2E20: slt         $at, $zero, $a0
        ctx->r1 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_800D2D6C;
    }
    goto skip_3;
    // 0x800D2E20: slt         $at, $zero, $a0
    ctx->r1 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    skip_3:
L_800D2E24:
    // 0x800D2E24: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D2E28: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800D2E2C: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800D2E30: bnel        $at, $zero, L_800D2D60
    if (ctx->r1 != 0) {
        // 0x800D2E34: slt         $at, $zero, $a2
        ctx->r1 = SIGNED(0) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_800D2D60;
    }
    goto skip_4;
    // 0x800D2E34: slt         $at, $zero, $a2
    ctx->r1 = SIGNED(0) < SIGNED(ctx->r6) ? 1 : 0;
    skip_4:
L_800D2E38:
    // 0x800D2E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2E3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D2E40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D2E44: jr          $ra
    // 0x800D2E48: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800D2E48: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800D2E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2E4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D2E50: addiu       $v0, $v0, -0x4CA0
    ctx->r2 = ADD32(ctx->r2, -0X4CA0);
    // 0x800D2E54: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800D2E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2E60: beql        $a0, $zero, L_800D2E80
    if (ctx->r4 == 0) {
        // 0x800D2E64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D2E80;
    }
    goto skip_0;
    // 0x800D2E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D2E68: jal         0x8001B084
    // 0x800D2E6C: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800D2E6C: nop

    after_0:
    // 0x800D2E70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D2E74: addiu       $v0, $v0, -0x4CA0
    ctx->r2 = ADD32(ctx->r2, -0X4CA0);
    // 0x800D2E78: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800D2E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D2E80:
    // 0x800D2E80: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800D2E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2E88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2E90: bltz        $a0, L_800D2EAC
    if (SIGNED(ctx->r4) < 0) {
        // 0x800D2E94: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_800D2EAC;
    }
    // 0x800D2E94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D2E98: addiu       $v0, $v0, -0x4CA0
    ctx->r2 = ADD32(ctx->r2, -0X4CA0);
    // 0x800D2E9C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800D2EA0: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800D2EA4: bnel        $at, $zero, L_800D2EB8
    if (ctx->r1 != 0) {
            // 0x800D2EA8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    static_3_800D2EB8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D2EA8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    skip_0:
L_800D2EAC:
    // 0x800D2EAC: jr          $ra
    // 0x800D2EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D2EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800D2EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2EB4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800D2EB8: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800D2EBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800D2EC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2EC4: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x800D2EC8: beq         $t0, $zero, L_800D2ED8
    if (ctx->r8 == 0) {
        // 0x800D2ECC: nop
    
            goto L_800D2ED8;
    }
    // 0x800D2ECC: nop

    // 0x800D2ED0: b           L_800D2ED8
    // 0x800D2ED4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800D2ED8;
    // 0x800D2ED4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800D2ED8:
    // 0x800D2ED8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800D2EDC: jr          $ra
    // 0x800D2EE0: nop

    return;
    // 0x800D2EE0: nop

;}
RECOMP_FUNC void func_800D2EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2EE4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D2EE8: lw          $a0, -0x4CA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4CA0);
    // 0x800D2EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2EF4: beql        $a0, $zero, L_800D2F10
    if (ctx->r4 == 0) {
        // 0x800D2EF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D2F10;
    }
    goto skip_0;
    // 0x800D2EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D2EFC: jal         0x8001BAFC
    // 0x800D2F00: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800D2F00: nop

    after_0:
    // 0x800D2F04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D2F08: sw          $v0, -0x4CA0($at)
    MEM_W(-0X4CA0, ctx->r1) = ctx->r2;
    // 0x800D2F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D2F10:
    // 0x800D2F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2F14: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D2F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2F28: jal         0x800BDC5C
    // 0x800D2F2C: nop

    func_800BDC5C(rdram, ctx);
        goto after_0;
    // 0x800D2F2C: nop

    after_0:
    // 0x800D2F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2F34: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D2F38: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800D2F3C: jr          $ra
    // 0x800D2F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D2F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D2F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2F44: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800D2F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2F4C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800D2F50: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800D2F54: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800D2F58: jal         0x800E42C0
    // 0x800D2F5C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    func_800E42C0(rdram, ctx);
        goto after_0;
    // 0x800D2F5C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_0:
    // 0x800D2F60: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800D2F64: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x800D2F68: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x800D2F6C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800D2F70: bgez        $a2, L_800D2F80
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800D2F74: sra         $v0, $a2, 1
        ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
            goto L_800D2F80;
    }
    // 0x800D2F74: sra         $v0, $a2, 1
    ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
    // 0x800D2F78: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x800D2F7C: sra         $v0, $at, 1
    ctx->r2 = S32(SIGNED(ctx->r1) >> 1);
L_800D2F80:
    // 0x800D2F80: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D2F84: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800D2F88: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D2F8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800D2F90: addiu       $t5, $a2, 0x12C
    ctx->r13 = ADD32(ctx->r6, 0X12C);
    // 0x800D2F94: mflo        $t7
    ctx->r15 = lo;
    // 0x800D2F98: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800D2F9C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800D2FA0: nop

    // 0x800D2FA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D2FA8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800D2FAC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x800D2FB0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x800D2FB4: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800D2FB8: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D2FBC: mflo        $t0
    ctx->r8 = lo;
    // 0x800D2FC0: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x800D2FC4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800D2FC8: nop

    // 0x800D2FCC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D2FD0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800D2FD4: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x800D2FD8: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x800D2FDC: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x800D2FE0: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D2FE4: mflo        $t3
    ctx->r11 = lo;
    // 0x800D2FE8: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x800D2FEC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800D2FF0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x800D2FF4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D2FF8: lwc1        $f8, 0x5B00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5B00);
    // 0x800D2FFC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800D3000: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800D3004: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x800D3008: nop

    // 0x800D300C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D3010: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x800D3014: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800D3018: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D301C: nop

    // 0x800D3020: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800D3024: nop

    // 0x800D3028: mul.s       $f2, $f18, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800D302C: nop

    // 0x800D3030: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800D3034: nop

    // 0x800D3038: mul.s       $f18, $f10, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x800D303C: nop

    // 0x800D3040: mul.s       $f16, $f6, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x800D3044: add.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800D3048: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800D304C: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800D3050: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x800D3054: nop

    // 0x800D3058: bc1f        L_800D3068
    if (!c1cs) {
        // 0x800D305C: nop
    
            goto L_800D3068;
    }
    // 0x800D305C: nop

    // 0x800D3060: b           L_800D30F4
    // 0x800D3064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D30F4;
    // 0x800D3064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D3068:
    // 0x800D3068: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800D306C: addiu       $v1, $sp, 0x40
    ctx->r3 = ADD32(ctx->r29, 0X40);
    // 0x800D3070: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800D3074: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D3078: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800D307C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800D3080: beq         $v1, $a1, L_800D30C0
    if (ctx->r3 == ctx->r5) {
        // 0x800D3084: multu       $t6, $a2
        result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
            goto L_800D30C0;
    }
    // 0x800D3084: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
L_800D3088:
    // 0x800D3088: mflo        $t7
    ctx->r15 = lo;
    // 0x800D308C: addiu       $t8, $t7, -0x96
    ctx->r24 = ADD32(ctx->r15, -0X96);
    // 0x800D3090: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800D3094: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800D3098: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800D309C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D30A0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800D30A4: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x800D30A8: lwc1        $f18, -0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0X4);
    // 0x800D30AC: add.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x800D30B0: swc1        $f18, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f18.u32l;
    // 0x800D30B4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800D30B8: bne         $v1, $a1, L_800D3088
    if (ctx->r3 != ctx->r5) {
        // 0x800D30BC: multu       $t6, $a2
        result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
            goto L_800D3088;
    }
    // 0x800D30BC: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
L_800D30C0:
    // 0x800D30C0: mflo        $t7
    ctx->r15 = lo;
    // 0x800D30C4: addiu       $t8, $t7, -0x96
    ctx->r24 = ADD32(ctx->r15, -0X96);
    // 0x800D30C8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800D30CC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800D30D0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800D30D4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D30D8: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x800D30DC: lwc1        $f18, -0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0X4);
    // 0x800D30E0: add.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x800D30E4: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x800D30E8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x800D30EC: jal         0x800E3D0C
    // 0x800D30F0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800E3D0C(rdram, ctx);
        goto after_1;
    // 0x800D30F0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
L_800D30F4:
    // 0x800D30F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D30F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800D30FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3104: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x800D3108: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800D310C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x800D3110: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800D3114: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800D3118: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x800D311C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x800D3120: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800D3124: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800D3128: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800D312C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800D3130: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800D3134: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800D3138: jal         0x800EB800
    // 0x800D313C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800EB800(rdram, ctx);
        goto after_0;
    // 0x800D313C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x800D3140: jal         0x800E3980
    // 0x800D3144: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    func_800E3980(rdram, ctx);
        goto after_1;
    // 0x800D3144: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    after_1:
    // 0x800D3148: addiu       $s6, $sp, 0xA8
    ctx->r22 = ADD32(ctx->r29, 0XA8);
    // 0x800D314C: jal         0x800E3958
    // 0x800D3150: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800E3958(rdram, ctx);
        goto after_2;
    // 0x800D3150: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x800D3154: addiu       $s1, $sp, 0x98
    ctx->r17 = ADD32(ctx->r29, 0X98);
    // 0x800D3158: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D315C: jal         0x800BD64C
    // 0x800D3160: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    func_800BD64C(rdram, ctx);
        goto after_3;
    // 0x800D3160: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    after_3:
    // 0x800D3164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D3168: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800D316C: jal         0x800EFB58
    // 0x800D3170: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    func_800EFB58(rdram, ctx);
        goto after_4;
    // 0x800D3170: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    after_4:
    // 0x800D3174: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
    // 0x800D3178: jal         0x800EFD3C
    // 0x800D317C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800EFD3C(rdram, ctx);
        goto after_5;
    // 0x800D317C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x800D3180: lw          $a1, 0x28($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X28);
    // 0x800D3184: lw          $a2, 0x2C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X2C);
    // 0x800D3188: lw          $a3, 0x30($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X30);
    // 0x800D318C: addiu       $s5, $sp, 0x80
    ctx->r21 = ADD32(ctx->r29, 0X80);
    // 0x800D3190: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800D3194: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800D3198: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800D319C: jal         0x800EFA88
    // 0x800D31A0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    func_800EFA88(rdram, ctx);
        goto after_6;
    // 0x800D31A0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    after_6:
    // 0x800D31A4: jal         0x800BCC58
    // 0x800D31A8: nop

    func_800BCC58(rdram, ctx);
        goto after_7;
    // 0x800D31A8: nop

    after_7:
    // 0x800D31AC: bne         $v0, $zero, L_800D3264
    if (ctx->r2 != 0) {
        // 0x800D31B0: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_800D3264;
    }
    // 0x800D31B0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800D31B4: jal         0x800F2100
    // 0x800D31B8: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
    func_800F2100(rdram, ctx);
        goto after_8;
    // 0x800D31B8: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
    after_8:
    // 0x800D31BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800D31C0: jal         0x800F2100
    // 0x800D31C4: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    func_800F2100(rdram, ctx);
        goto after_9;
    // 0x800D31C4: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    after_9:
    // 0x800D31C8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x800D31CC: nop

    // 0x800D31D0: bc1f        L_800D31E0
    if (!c1cs) {
        // 0x800D31D4: nop
    
            goto L_800D31E0;
    }
    // 0x800D31D4: nop

    // 0x800D31D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800D31DC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_800D31E0:
    // 0x800D31E0: jal         0x800F2100
    // 0x800D31E4: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    func_800F2100(rdram, ctx);
        goto after_10;
    // 0x800D31E4: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    after_10:
    // 0x800D31E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x800D31EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D31F0: bc1fl       L_800D3200
    if (!c1cs) {
        // 0x800D31F4: sll         $s0, $s4, 2
        ctx->r16 = S32(ctx->r20 << 2);
            goto L_800D3200;
    }
    goto skip_0;
    // 0x800D31F4: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
    skip_0:
    // 0x800D31F8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800D31FC: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
L_800D3200:
    // 0x800D3200: addu        $v0, $s6, $s0
    ctx->r2 = ADD32(ctx->r22, ctx->r16);
    // 0x800D3204: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800D3208: addu        $t6, $s1, $s0
    ctx->r14 = ADD32(ctx->r17, ctx->r16);
    // 0x800D320C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800D3210: nop

    // 0x800D3214: bc1fl       L_800D3230
    if (!c1cs) {
        // 0x800D3218: addiu       $t9, $sp, 0xAC
        ctx->r25 = ADD32(ctx->r29, 0XAC);
            goto L_800D3230;
    }
    goto skip_1;
    // 0x800D3218: addiu       $t9, $sp, 0xAC
    ctx->r25 = ADD32(ctx->r29, 0XAC);
    skip_1:
    // 0x800D321C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800D3220: addu        $t8, $s5, $s0
    ctx->r24 = ADD32(ctx->r21, ctx->r16);
    // 0x800D3224: b           L_800D3264
    // 0x800D3228: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_800D3264;
    // 0x800D3228: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800D322C: addiu       $t9, $sp, 0xAC
    ctx->r25 = ADD32(ctx->r29, 0XAC);
L_800D3230:
    // 0x800D3230: bne         $v0, $t9, L_800D3254
    if (ctx->r2 != ctx->r25) {
        // 0x800D3234: addu        $t0, $s1, $s0
        ctx->r8 = ADD32(ctx->r17, ctx->r16);
            goto L_800D3254;
    }
    // 0x800D3234: addu        $t0, $s1, $s0
    ctx->r8 = ADD32(ctx->r17, ctx->r16);
    // 0x800D3238: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x800D323C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D3240: jal         0x800F0E28
    // 0x800D3244: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_800F0E28(rdram, ctx);
        goto after_11;
    // 0x800D3244: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_11:
    // 0x800D3248: addu        $t1, $s2, $s0
    ctx->r9 = ADD32(ctx->r18, ctx->r16);
    // 0x800D324C: b           L_800D3264
    // 0x800D3250: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
        goto L_800D3264;
    // 0x800D3250: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_800D3254:
    // 0x800D3254: addu        $t2, $s1, $s0
    ctx->r10 = ADD32(ctx->r17, ctx->r16);
    // 0x800D3258: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800D325C: addu        $t4, $s2, $s0
    ctx->r12 = ADD32(ctx->r18, ctx->r16);
    // 0x800D3260: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
L_800D3264:
    // 0x800D3264: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800D3268: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800D326C: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x800D3270: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x800D3274: addiu       $s1, $sp, 0x8C
    ctx->r17 = ADD32(ctx->r29, 0X8C);
    // 0x800D3278: addiu       $s4, $sp, 0x98
    ctx->r20 = ADD32(ctx->r29, 0X98);
L_800D327C:
    // 0x800D327C: jal         0x800E42C0
    // 0x800D3280: nop

    func_800E42C0(rdram, ctx);
        goto after_12;
    // 0x800D3280: nop

    after_12:
    // 0x800D3284: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x800D3288: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800D328C: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800D3290: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x800D3294: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800D3298: nop

    // 0x800D329C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D32A0: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x800D32A4: nop

    // 0x800D32A8: bc1f        L_800D32E0
    if (!c1cs) {
        // 0x800D32AC: nop
    
            goto L_800D32E0;
    }
    // 0x800D32AC: nop

    // 0x800D32B0: jal         0x800E42C0
    // 0x800D32B4: nop

    func_800E42C0(rdram, ctx);
        goto after_13;
    // 0x800D32B4: nop

    after_13:
    // 0x800D32B8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800D32BC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800D32C0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800D32C4: nop

    // 0x800D32C8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D32CC: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800D32D0: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800D32D4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x800D32D8: nop

    // 0x800D32DC: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
L_800D32E0:
    // 0x800D32E0: jal         0x800E42C0
    // 0x800D32E4: nop

    func_800E42C0(rdram, ctx);
        goto after_14;
    // 0x800D32E4: nop

    after_14:
    // 0x800D32E8: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x800D32EC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x800D32F0: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800D32F4: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x800D32F8: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800D32FC: nop

    // 0x800D3300: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D3304: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x800D3308: nop

    // 0x800D330C: bc1fl       L_800D3348
    if (!c1cs) {
        // 0x800D3310: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800D3348;
    }
    goto skip_2;
    // 0x800D3310: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_2:
    // 0x800D3314: jal         0x800E42C0
    // 0x800D3318: nop

    func_800E42C0(rdram, ctx);
        goto after_15;
    // 0x800D3318: nop

    after_15:
    // 0x800D331C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x800D3320: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800D3324: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800D3328: nop

    // 0x800D332C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D3330: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800D3334: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800D3338: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x800D333C: nop

    // 0x800D3340: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x800D3344: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800D3348:
    // 0x800D3348: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800D334C: bne         $s1, $s4, L_800D327C
    if (ctx->r17 != ctx->r20) {
        // 0x800D3350: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800D327C;
    }
    // 0x800D3350: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800D3354: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x800D3358: jal         0x800EB5E0
    // 0x800D335C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EB5E0(rdram, ctx);
        goto after_16;
    // 0x800D335C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_16:
    // 0x800D3360: jal         0x800BDC5C
    // 0x800D3364: nop

    func_800BDC5C(rdram, ctx);
        goto after_17;
    // 0x800D3364: nop

    after_17:
    // 0x800D3368: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x800D336C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x800D3370: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800D3374: slt         $at, $t7, $s5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x800D3378: bne         $at, $zero, L_800D346C
    if (ctx->r1 != 0) {
        // 0x800D337C: addiu       $s7, $sp, 0x58
        ctx->r23 = ADD32(ctx->r29, 0X58);
            goto L_800D346C;
    }
    // 0x800D337C: addiu       $s7, $sp, 0x58
    ctx->r23 = ADD32(ctx->r29, 0X58);
    // 0x800D3380: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x800D3384: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x800D3388: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
L_800D338C:
    // 0x800D338C: slt         $at, $v1, $s2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800D3390: bnel        $at, $zero, L_800D345C
    if (ctx->r1 != 0) {
        // 0x800D3394: lw          $t4, 0x80($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X80);
            goto L_800D345C;
    }
    goto skip_3;
    // 0x800D3394: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    skip_3:
    // 0x800D3398: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
L_800D339C:
    // 0x800D339C: sll         $s4, $s5, 3
    ctx->r20 = S32(ctx->r21 << 3);
    // 0x800D33A0: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800D33A4: bnel        $at, $zero, L_800D344C
    if (ctx->r1 != 0) {
        // 0x800D33A8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800D344C;
    }
    goto skip_4;
    // 0x800D33A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x800D33AC: lw          $t8, 0x20($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X20);
L_800D33B0:
    // 0x800D33B0: lw          $t4, 0x1C($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X1C);
    // 0x800D33B4: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x800D33B8: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D33BC: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x800D33C0: addu        $t8, $t7, $s5
    ctx->r24 = ADD32(ctx->r15, ctx->r21);
    // 0x800D33C4: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x800D33C8: mflo        $t9
    ctx->r25 = lo;
    // 0x800D33CC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800D33D0: lw          $t9, 0x8($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8);
    // 0x800D33D4: multu       $s2, $t4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D33D8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800D33DC: addu        $t0, $t9, $s2
    ctx->r8 = ADD32(ctx->r25, ctx->r18);
    // 0x800D33E0: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x800D33E4: lw          $t1, 0xC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XC);
    // 0x800D33E8: addu        $t3, $t2, $s4
    ctx->r11 = ADD32(ctx->r10, ctx->r20);
    // 0x800D33EC: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x800D33F0: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x800D33F4: mflo        $t5
    ctx->r13 = lo;
    // 0x800D33F8: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800D33FC: addu        $s0, $t3, $t6
    ctx->r16 = ADD32(ctx->r11, ctx->r14);
    // 0x800D3400: jal         0x800E9DCC
    // 0x800D3404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9DCC(rdram, ctx);
        goto after_18;
    // 0x800D3404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x800D3408: beq         $v0, $zero, L_800D3430
    if (ctx->r2 == 0) {
        // 0x800D340C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D3430;
    }
    // 0x800D340C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D3410: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800D3414: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800D3418: jal         0x800D2F44
    // 0x800D341C: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    func_800D2F44(rdram, ctx);
        goto after_19;
    // 0x800D341C: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    after_19:
    // 0x800D3420: beq         $v0, $zero, L_800D3430
    if (ctx->r2 == 0) {
        // 0x800D3424: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D3430;
    }
    // 0x800D3424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D3428: jal         0x800EB5E0
    // 0x800D342C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EB5E0(rdram, ctx);
        goto after_20;
    // 0x800D342C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_20:
L_800D3430:
    // 0x800D3430: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x800D3434: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800D3438: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800D343C: beql        $at, $zero, L_800D33B0
    if (ctx->r1 == 0) {
        // 0x800D3440: lw          $t8, 0x20($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X20);
            goto L_800D33B0;
    }
    goto skip_5;
    // 0x800D3440: lw          $t8, 0x20($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X20);
    skip_5:
    // 0x800D3444: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x800D3448: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800D344C:
    // 0x800D344C: slt         $at, $v1, $s2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800D3450: beql        $at, $zero, L_800D339C
    if (ctx->r1 == 0) {
        // 0x800D3454: lw          $s1, 0x94($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X94);
            goto L_800D339C;
    }
    goto skip_6;
    // 0x800D3454: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    skip_6:
    // 0x800D3458: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
L_800D345C:
    // 0x800D345C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800D3460: slt         $at, $t4, $s5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x800D3464: beql        $at, $zero, L_800D338C
    if (ctx->r1 == 0) {
        // 0x800D3468: lw          $s2, 0x90($sp)
        ctx->r18 = MEM_W(ctx->r29, 0X90);
            goto L_800D338C;
    }
    goto skip_7;
    // 0x800D3468: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    skip_7:
L_800D346C:
    // 0x800D346C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800D3470: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800D3474: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800D3478: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800D347C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800D3480: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800D3484: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800D3488: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800D348C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800D3490: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3494: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800D3498: jr          $ra
    // 0x800D349C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x800D349C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_800D34A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D34A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D34A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D34A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800D34AC: jal         0x800E7188
    // 0x800D34B0: addiu       $a0, $a0, -0x4A80
    ctx->r4 = ADD32(ctx->r4, -0X4A80);
    func_800E7188(rdram, ctx);
        goto after_0;
    // 0x800D34B0: addiu       $a0, $a0, -0x4A80
    ctx->r4 = ADD32(ctx->r4, -0X4A80);
    after_0:
    // 0x800D34B4: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800D34B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800D34BC: addiu       $a3, $a3, -0x4C90
    ctx->r7 = ADD32(ctx->r7, -0X4C90);
    // 0x800D34C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D34C4: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x800D34C8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_800D34CC:
    // 0x800D34CC: blez        $v0, L_800D34FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800D34D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800D34FC;
    }
    // 0x800D34D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D34D4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D34D8: addiu       $v1, $v1, -0x4A80
    ctx->r3 = ADD32(ctx->r3, -0X4A80);
L_800D34DC:
    // 0x800D34DC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x800D34E0: bne         $a1, $t6, L_800D34F0
    if (ctx->r5 != ctx->r14) {
        // 0x800D34E4: addu        $t7, $a3, $a1
        ctx->r15 = ADD32(ctx->r7, ctx->r5);
            goto L_800D34F0;
    }
    // 0x800D34E4: addu        $t7, $a3, $a1
    ctx->r15 = ADD32(ctx->r7, ctx->r5);
    // 0x800D34E8: b           L_800D34FC
    // 0x800D34EC: sb          $a0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r4;
        goto L_800D34FC;
    // 0x800D34EC: sb          $a0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r4;
L_800D34F0:
    // 0x800D34F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800D34F4: bne         $a0, $a2, L_800D34DC
    if (ctx->r4 != ctx->r6) {
        // 0x800D34F8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800D34DC;
    }
    // 0x800D34F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800D34FC:
    // 0x800D34FC: bne         $a0, $v0, L_800D3508
    if (ctx->r4 != ctx->r2) {
        // 0x800D3500: addu        $t8, $a3, $a1
        ctx->r24 = ADD32(ctx->r7, ctx->r5);
            goto L_800D3508;
    }
    // 0x800D3500: addu        $t8, $a3, $a1
    ctx->r24 = ADD32(ctx->r7, ctx->r5);
    // 0x800D3504: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
L_800D3508:
    // 0x800D3508: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800D350C: bne         $a1, $t1, L_800D34CC
    if (ctx->r5 != ctx->r9) {
        // 0x800D3510: nop
    
            goto L_800D34CC;
    }
    // 0x800D3510: nop

    // 0x800D3514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D351C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3524: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D3528: addiu       $t7, $t7, -0x4AA0
    ctx->r15 = ADD32(ctx->r15, -0X4AA0);
    // 0x800D352C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3530: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800D3534: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x800D3538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D353C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3540: bnel        $a1, $zero, L_800D3564
    if (ctx->r5 != 0) {
        // 0x800D3544: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D3564;
    }
    goto skip_0;
    // 0x800D3544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D3548: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x800D354C: jal         0x800D674C
    // 0x800D3550: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x800D3550: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800D3554: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3558: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800D355C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800D3560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3564:
    // 0x800D3564: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3568: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800D356C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3574: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3578: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D357C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3580: lbu         $t7, -0x4A9E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X4A9E);
    // 0x800D3584: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800D3588: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D358C: bgez        $t7, L_800D35A0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800D3590: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800D35A0;
    }
    // 0x800D3590: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D3594: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D3598: nop

    // 0x800D359C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800D35A0:
    // 0x800D35A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D35A4: lwc1        $f10, 0x5B10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5B10);
    // 0x800D35A8: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800D35AC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800D35B0: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x800D35B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D35BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D35BC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D35C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D35C4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D35C8: jr          $ra
    // 0x800D35CC: lbu         $v0, -0x4A9E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4A9E);
    return;
    // 0x800D35CC: lbu         $v0, -0x4A9E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4A9E);
;}
RECOMP_FUNC void func_800D35D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D35D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800D35D4: beq         $a0, $v0, L_800D35F8
    if (ctx->r4 == ctx->r2) {
        // 0x800D35D8: nop
    
            goto L_800D35F8;
    }
    // 0x800D35D8: nop

    // 0x800D35DC: beq         $a0, $zero, L_800D35F8
    if (ctx->r4 == 0) {
        // 0x800D35E0: slti        $at, $a1, 0x61
        ctx->r1 = SIGNED(ctx->r5) < 0X61 ? 1 : 0;
            goto L_800D35F8;
    }
    // 0x800D35E0: slti        $at, $a1, 0x61
    ctx->r1 = SIGNED(ctx->r5) < 0X61 ? 1 : 0;
    // 0x800D35E4: bne         $at, $zero, L_800D35F8
    if (ctx->r1 != 0) {
        // 0x800D35E8: slti        $at, $a1, 0x7B
        ctx->r1 = SIGNED(ctx->r5) < 0X7B ? 1 : 0;
            goto L_800D35F8;
    }
    // 0x800D35E8: slti        $at, $a1, 0x7B
    ctx->r1 = SIGNED(ctx->r5) < 0X7B ? 1 : 0;
    // 0x800D35EC: beq         $at, $zero, L_800D35F8
    if (ctx->r1 == 0) {
        // 0x800D35F0: nop
    
            goto L_800D35F8;
    }
    // 0x800D35F0: nop

    // 0x800D35F4: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
L_800D35F8:
    // 0x800D35F8: beq         $a0, $zero, L_800D3624
    if (ctx->r4 == 0) {
        // 0x800D35FC: slti        $at, $a1, 0x21
        ctx->r1 = SIGNED(ctx->r5) < 0X21 ? 1 : 0;
            goto L_800D3624;
    }
    // 0x800D35FC: slti        $at, $a1, 0x21
    ctx->r1 = SIGNED(ctx->r5) < 0X21 ? 1 : 0;
    // 0x800D3600: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D3604: beql        $a0, $at, L_800D3640
    if (ctx->r4 == ctx->r1) {
        // 0x800D3608: slti        $at, $a1, 0x80
        ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
            goto L_800D3640;
    }
    goto skip_0;
    // 0x800D3608: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    skip_0:
    // 0x800D360C: beq         $a0, $v0, L_800D3660
    if (ctx->r4 == ctx->r2) {
        // 0x800D3610: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800D3660;
    }
    // 0x800D3610: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D3614: beql        $a0, $at, L_800D367C
    if (ctx->r4 == ctx->r1) {
        // 0x800D3618: slti        $at, $a1, 0x30
        ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
            goto L_800D367C;
    }
    goto skip_1;
    // 0x800D3618: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    skip_1:
    // 0x800D361C: b           L_800D36A0
    // 0x800D3620: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800D36A0;
    // 0x800D3620: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800D3624:
    // 0x800D3624: bne         $at, $zero, L_800D369C
    if (ctx->r1 != 0) {
        // 0x800D3628: slti        $at, $a1, 0x7B
        ctx->r1 = SIGNED(ctx->r5) < 0X7B ? 1 : 0;
            goto L_800D369C;
    }
    // 0x800D3628: slti        $at, $a1, 0x7B
    ctx->r1 = SIGNED(ctx->r5) < 0X7B ? 1 : 0;
    // 0x800D362C: beql        $at, $zero, L_800D36A0
    if (ctx->r1 == 0) {
        // 0x800D3630: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800D36A0;
    }
    goto skip_2;
    // 0x800D3630: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_2:
    // 0x800D3634: jr          $ra
    // 0x800D3638: addiu       $v0, $a1, -0x21
    ctx->r2 = ADD32(ctx->r5, -0X21);
    return;
    // 0x800D3638: addiu       $v0, $a1, -0x21
    ctx->r2 = ADD32(ctx->r5, -0X21);
    // 0x800D363C: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
L_800D3640:
    // 0x800D3640: beq         $at, $zero, L_800D369C
    if (ctx->r1 == 0) {
        // 0x800D3644: lui         $v1, 0x8013
        ctx->r3 = S32(0X8013 << 16);
            goto L_800D369C;
    }
    // 0x800D3644: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D3648: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800D364C: lb          $v1, -0x4C90($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X4C90);
    // 0x800D3650: bltzl       $v1, L_800D36A0
    if (SIGNED(ctx->r3) < 0) {
        // 0x800D3654: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800D36A0;
    }
    goto skip_3;
    // 0x800D3654: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x800D3658: jr          $ra
    // 0x800D365C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800D365C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800D3660:
    // 0x800D3660: blez        $a1, L_800D369C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800D3664: slti        $at, $a1, 0xFD
        ctx->r1 = SIGNED(ctx->r5) < 0XFD ? 1 : 0;
            goto L_800D369C;
    }
    // 0x800D3664: slti        $at, $a1, 0xFD
    ctx->r1 = SIGNED(ctx->r5) < 0XFD ? 1 : 0;
    // 0x800D3668: beql        $at, $zero, L_800D36A0
    if (ctx->r1 == 0) {
        // 0x800D366C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800D36A0;
    }
    goto skip_4;
    // 0x800D366C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_4:
    // 0x800D3670: jr          $ra
    // 0x800D3674: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x800D3674: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800D3678: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
L_800D367C:
    // 0x800D367C: bne         $at, $zero, L_800D3694
    if (ctx->r1 != 0) {
        // 0x800D3680: slti        $at, $a1, 0x3B
        ctx->r1 = SIGNED(ctx->r5) < 0X3B ? 1 : 0;
            goto L_800D3694;
    }
    // 0x800D3680: slti        $at, $a1, 0x3B
    ctx->r1 = SIGNED(ctx->r5) < 0X3B ? 1 : 0;
    // 0x800D3684: beq         $at, $zero, L_800D3694
    if (ctx->r1 == 0) {
        // 0x800D3688: nop
    
            goto L_800D3694;
    }
    // 0x800D3688: nop

    // 0x800D368C: jr          $ra
    // 0x800D3690: addiu       $v0, $a1, -0x30
    ctx->r2 = ADD32(ctx->r5, -0X30);
    return;
    // 0x800D3690: addiu       $v0, $a1, -0x30
    ctx->r2 = ADD32(ctx->r5, -0X30);
L_800D3694:
    // 0x800D3694: jr          $ra
    // 0x800D3698: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x800D3698: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_800D369C:
    // 0x800D369C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800D36A0:
    // 0x800D36A0: jr          $ra
    // 0x800D36A4: nop

    return;
    // 0x800D36A4: nop

;}
RECOMP_FUNC void func_800D36A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D36A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D36AC: sw          $zero, -0x4A94($at)
    MEM_W(-0X4A94, ctx->r1) = 0;
    // 0x800D36B0: sw          $zero, -0x4A9C($at)
    MEM_W(-0X4A9C, ctx->r1) = 0;
    // 0x800D36B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D36B8: sw          $zero, -0x4A8C($at)
    MEM_W(-0X4A8C, ctx->r1) = 0;
    // 0x800D36BC: jr          $ra
    // 0x800D36C0: sw          $zero, -0x4A84($at)
    MEM_W(-0X4A84, ctx->r1) = 0;
    return;
    // 0x800D36C0: sw          $zero, -0x4A84($at)
    MEM_W(-0X4A84, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800D36C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D36C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D36C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D36CC: jal         0x800D35D0
    // 0x800D36D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D35D0(rdram, ctx);
        goto after_0;
    // 0x800D36D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D36D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800D36D8: jal         0x800D3524
    // 0x800D36DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800D3524(rdram, ctx);
        goto after_1;
    // 0x800D36DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x800D36E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800D36E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D36E8: bltz        $a1, L_800D36F8
    if (SIGNED(ctx->r5) < 0) {
        // 0x800D36EC: nop
    
            goto L_800D36F8;
    }
    // 0x800D36EC: nop

    // 0x800D36F0: bne         $v0, $zero, L_800D3708
    if (ctx->r2 != 0) {
        // 0x800D36F4: nop
    
            goto L_800D3708;
    }
    // 0x800D36F4: nop

L_800D36F8:
    // 0x800D36F8: jal         0x800D3574
    // 0x800D36FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800D3574(rdram, ctx);
        goto after_2;
    // 0x800D36FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800D3700: b           L_800D3718
    // 0x800D3704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3718;
    // 0x800D3704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3708:
    // 0x800D3708: jal         0x800B0D6C
    // 0x800D370C: nop

    func_800B0D6C(rdram, ctx);
        goto after_3;
    // 0x800D370C: nop

    after_3:
    // 0x800D3710: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800D3714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3718:
    // 0x800D3718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D371C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3724: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D3728: addiu       $t7, $t7, -0x4AA0
    ctx->r15 = ADD32(ctx->r15, -0X4AA0);
    // 0x800D372C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3730: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800D3734: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800D3738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D373C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3740: beq         $t8, $zero, L_800D3758
    if (ctx->r24 == 0) {
        // 0x800D3744: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_800D3758;
    }
    // 0x800D3744: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800D3748: jal         0x800D6C34
    // 0x800D374C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    func_800D6C34(rdram, ctx);
        goto after_0;
    // 0x800D374C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    after_0:
    // 0x800D3750: b           L_800D3758
    // 0x800D3754: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800D3758;
    // 0x800D3754: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800D3758:
    // 0x800D3758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D375C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3760: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800D3764: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3770: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D3774: lbu         $v0, 0x762C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X762C);
    // 0x800D3778: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x800D377C: slti        $a0, $v0, 0xF
    ctx->r4 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x800D3780: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x800D3784: beq         $v1, $zero, L_800D3790
    if (ctx->r3 == 0) {
        // 0x800D3788: nop
    
            goto L_800D3790;
    }
    // 0x800D3788: nop

    // 0x800D378C: slti        $v1, $v0, 0x1C
    ctx->r3 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
L_800D3790:
    // 0x800D3790: bne         $v0, $at, L_800D379C
    if (ctx->r2 != ctx->r1) {
        // 0x800D3794: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_800D379C;
    }
    // 0x800D3794: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800D3798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800D379C:
    // 0x800D379C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D37A0: lb          $v0, -0x4C0F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X4C0F);
    // 0x800D37A4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800D37A8: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
    // 0x800D37AC: beq         $v0, $zero, L_800D37B8
    if (ctx->r2 == 0) {
        // 0x800D37B0: nop
    
            goto L_800D37B8;
    }
    // 0x800D37B0: nop

    // 0x800D37B4: sltu        $v0, $zero, $a0
    ctx->r2 = 0 < ctx->r4 ? 1 : 0;
L_800D37B8:
    // 0x800D37B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D37C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D37C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D37C4: addiu       $v0, $v0, -0x4C10
    ctx->r2 = ADD32(ctx->r2, -0X4C10);
    // 0x800D37C8: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x800D37CC: jr          $ra
    // 0x800D37D0: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    return;
    // 0x800D37D0: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_800D37D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D37D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D37D8: addiu       $v0, $v0, -0x4C10
    ctx->r2 = ADD32(ctx->r2, -0X4C10);
    // 0x800D37DC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800D37E0: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x800D37E4: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x800D37E8: jr          $ra
    // 0x800D37EC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x800D37EC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800D37F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D37F0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D37F4: jr          $ra
    // 0x800D37F8: lb          $v0, -0x4C0F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X4C0F);
    return;
    // 0x800D37F8: lb          $v0, -0x4C0F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X4C0F);
;}
RECOMP_FUNC void func_800D37FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D37FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3800: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D3804: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800D3808: addiu       $s0, $s0, -0x4C10
    ctx->r16 = ADD32(ctx->r16, -0X4C10);
    // 0x800D380C: lbu         $t6, 0x9($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X9);
    // 0x800D3810: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D3814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3818: bnel        $t6, $at, L_800D3864
    if (ctx->r14 != ctx->r1) {
        // 0x800D381C: lb          $a0, 0x0($s0)
        ctx->r4 = MEM_B(ctx->r16, 0X0);
            goto L_800D3864;
    }
    goto skip_0;
    // 0x800D381C: lb          $a0, 0x0($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X0);
    skip_0:
    // 0x800D3820: jal         0x8001B798
    // 0x800D3824: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x800D3824: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    after_0:
    // 0x800D3828: jal         0x80088580
    // 0x800D382C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _glgamedata_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800D382C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800D3830: jal         0x8001B754
    // 0x800D3834: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x800D3834: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    after_2:
    // 0x800D3838: lb          $t7, 0x8($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X8);
    // 0x800D383C: lbu         $t8, 0xB($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XB);
    // 0x800D3840: lbu         $t9, 0xA($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XA);
    // 0x800D3844: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800D3848: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x800D384C: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
    // 0x800D3850: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x800D3854: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x800D3858: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
    // 0x800D385C: sb          $t9, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r25;
    // 0x800D3860: lb          $a0, 0x0($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X0);
L_800D3864:
    // 0x800D3864: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D3868: beq         $a0, $at, L_800D3880
    if (ctx->r4 == ctx->r1) {
        // 0x800D386C: nop
    
            goto L_800D3880;
    }
    // 0x800D386C: nop

    // 0x800D3870: jal         0x80088558
    // 0x800D3874: nop

    _glsavegame_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x800D3874: nop

    after_3:
    // 0x800D3878: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800D387C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_800D3880:
    // 0x800D3880: jal         0x800D3C70
    // 0x800D3884: nop

    func_800D3C70(rdram, ctx);
        goto after_4;
    // 0x800D3884: nop

    after_4:
    // 0x800D3888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D388C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D3890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3894: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D389C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D389C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D38A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D38A4: jal         0x800D3770
    // 0x800D38A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800D3770(rdram, ctx);
        goto after_0;
    // 0x800D38A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800D38AC: beq         $v0, $zero, L_800D38C0
    if (ctx->r2 == 0) {
        // 0x800D38B0: lui         $s0, 0x8013
        ctx->r16 = S32(0X8013 << 16);
            goto L_800D38C0;
    }
    // 0x800D38B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800D38B4: addiu       $s0, $s0, -0x4C10
    ctx->r16 = ADD32(ctx->r16, -0X4C10);
    // 0x800D38B8: jal         0x80088550
    // 0x800D38BC: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    _glsavegame_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800D38BC: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    after_1:
L_800D38C0:
    // 0x800D38C0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800D38C4: addiu       $s0, $s0, -0x4C10
    ctx->r16 = ADD32(ctx->r16, -0X4C10);
    // 0x800D38C8: lbu         $t6, 0x9($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X9);
    // 0x800D38CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D38D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D38D4: bnel        $t6, $at, L_800D3924
    if (ctx->r14 != ctx->r1) {
        // 0x800D38D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D3924;
    }
    goto skip_0;
    // 0x800D38D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800D38DC: jal         0x8001B668
    // 0x800D38E0: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    func_8001B668(rdram, ctx);
        goto after_2;
    // 0x800D38E0: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    after_2:
    // 0x800D38E4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x800D38E8: jal         0x8001B798
    // 0x800D38EC: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    func_8001B798(rdram, ctx);
        goto after_3;
    // 0x800D38EC: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    after_3:
    // 0x800D38F0: jal         0x80088578
    // 0x800D38F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _glgamedata_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x800D38F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800D38F8: lb          $t7, 0x1($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1);
    // 0x800D38FC: lbu         $t8, 0x3($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3);
    // 0x800D3900: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x800D3904: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800D3908: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800D390C: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x800D3910: sb          $t1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r9;
    // 0x800D3914: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
    // 0x800D3918: sb          $t8, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r24;
    // 0x800D391C: sb          $t9, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r25;
    // 0x800D3920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D3924:
    // 0x800D3924: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D3928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D392C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3934: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D3938: lbu         $v0, -0x4C0E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0E);
    // 0x800D393C: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x800D3940: jr          $ra
    // 0x800D3944: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    return;
    // 0x800D3944: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800D3948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3948: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D394C: lbu         $v0, -0x4C0E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0E);
    // 0x800D3950: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x800D3954: jr          $ra
    // 0x800D3958: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    return;
    // 0x800D3958: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800D395C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D395C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D3960: lbu         $v0, -0x4C0E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0E);
    // 0x800D3964: xori        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 ^ 0X2;
    // 0x800D3968: jr          $ra
    // 0x800D396C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    return;
    // 0x800D396C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800D3970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3978: jal         0x800D37D4
    // 0x800D397C: nop

    func_800D37D4(rdram, ctx);
        goto after_0;
    // 0x800D397C: nop

    after_0:
    // 0x800D3980: jal         0x800D3A14
    // 0x800D3984: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D3A14(rdram, ctx);
        goto after_1;
    // 0x800D3984: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800D3988: jal         0x800D3CF8
    // 0x800D398C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D3CF8(rdram, ctx);
        goto after_2;
    // 0x800D398C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800D3990: jal         0x800D3D10
    // 0x800D3994: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D3D10(rdram, ctx);
        goto after_3;
    // 0x800D3994: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800D3998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D399C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D39A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D39A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D39A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D39AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D39B0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x800D39B4: jal         0x800B2DC0
    // 0x800D39B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800B2DC0(rdram, ctx);
        goto after_0;
    // 0x800D39B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800D39BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D39C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D39C4: sh          $v0, -0x4C04($at)
    MEM_H(-0X4C04, ctx->r1) = ctx->r2;
    // 0x800D39C8: jr          $ra
    // 0x800D39CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D39CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D39D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D39D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D39D4: jr          $ra
    // 0x800D39D8: sb          $a0, -0x4C0E($at)
    MEM_B(-0X4C0E, ctx->r1) = ctx->r4;
    return;
    // 0x800D39D8: sb          $a0, -0x4C0E($at)
    MEM_B(-0X4C0E, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800D39DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D39DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D39E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D39E4: bltz        $a0, L_800D3A04
    if (SIGNED(ctx->r4) < 0) {
        // 0x800D39E8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800D3A04;
    }
    // 0x800D39E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D39EC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800D39F0: addiu       $a1, $a1, 0x39D0
    ctx->r5 = ADD32(ctx->r5, 0X39D0);
    // 0x800D39F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D39F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800D39FC: jal         0x800D3B6C
    // 0x800D3A00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800D3B6C(rdram, ctx);
        goto after_0;
    // 0x800D3A00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800D3A04:
    // 0x800D3A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3A0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3A14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D3A18: jr          $ra
    // 0x800D3A1C: sb          $a0, -0x4C0D($at)
    MEM_B(-0X4C0D, ctx->r1) = ctx->r4;
    return;
    // 0x800D3A1C: sb          $a0, -0x4C0D($at)
    MEM_B(-0X4C0D, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800D3A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3A20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3A24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3A28: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D3A2C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800D3A30: addiu       $a1, $a1, -0x5ABC
    ctx->r5 = ADD32(ctx->r5, -0X5ABC);
    // 0x800D3A34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D3A38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800D3A3C: jal         0x800D3B6C
    // 0x800D3A40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800D3B6C(rdram, ctx);
        goto after_0;
    // 0x800D3A40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800D3A44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3A48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3A4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3A54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3A58: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800D3A5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3A60: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D3A64: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800D3A68: addiu       $a1, $a1, 0x70B0
    ctx->r5 = ADD32(ctx->r5, 0X70B0);
    // 0x800D3A6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800D3A70: jal         0x800D3B6C
    // 0x800D3A74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800D3B6C(rdram, ctx);
        goto after_0;
    // 0x800D3A74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800D3A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3A80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3A8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3A90: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800D3A94: addiu       $a1, $a1, 0x7010
    ctx->r5 = ADD32(ctx->r5, 0X7010);
    // 0x800D3A98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800D3A9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800D3AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D3AA4: jal         0x800D3B6C
    // 0x800D3AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800D3B6C(rdram, ctx);
        goto after_0;
    // 0x800D3AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800D3AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3AB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3ABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3AC0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800D3AC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3AC8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D3ACC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800D3AD0: addiu       $a1, $a1, 0x1864
    ctx->r5 = ADD32(ctx->r5, 0X1864);
    // 0x800D3AD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800D3AD8: jal         0x800D3B6C
    // 0x800D3ADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800D3B6C(rdram, ctx);
        goto after_0;
    // 0x800D3ADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800D3AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3AE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3AE8: jr          $ra
    // 0x800D3AEC: nop

    return;
    // 0x800D3AEC: nop

;}
RECOMP_FUNC void func_800D3AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3AF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3AF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3AF8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D3AFC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800D3B00: addiu       $a1, $a1, 0x1864
    ctx->r5 = ADD32(ctx->r5, 0X1864);
    // 0x800D3B04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800D3B08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800D3B0C: jal         0x800D3B6C
    // 0x800D3B10: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_800D3B6C(rdram, ctx);
        goto after_0;
    // 0x800D3B10: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_0:
    // 0x800D3B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3B1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3B24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3B2C: jal         0x800343B0
    // 0x800D3B30: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x800D3B30: nop

    after_0:
    // 0x800D3B34: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800D3B38: addiu       $a1, $a1, -0x3CDC
    ctx->r5 = ADD32(ctx->r5, -0X3CDC);
    // 0x800D3B3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D3B40: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800D3B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800D3B48: jal         0x800D3B6C
    // 0x800D3B4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800D3B6C(rdram, ctx);
        goto after_1;
    // 0x800D3B4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x800D3B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3B58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3B60: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D3B64: jr          $ra
    // 0x800D3B68: lbu         $v0, -0x4C0D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0D);
    return;
    // 0x800D3B68: lbu         $v0, -0x4C0D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0D);
;}
RECOMP_FUNC void func_800D3B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3B70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D3B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3B78: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D3B7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800D3B80: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800D3B84: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800D3B88: jal         0x800B2A58
    // 0x800D3B8C: lh          $a0, -0x4C04($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4C04);
    func_800B2A58(rdram, ctx);
        goto after_0;
    // 0x800D3B8C: lh          $a0, -0x4C04($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4C04);
    after_0:
    // 0x800D3B90: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800D3B94: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x800D3B98: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3B9C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800D3BA0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800D3BA4: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x800D3BA8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D3BAC: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x800D3BB0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800D3BB4: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x800D3BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3BC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3BD0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800D3BD4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800D3BD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D3BDC: beql        $v0, $zero, L_800D3C08
    if (ctx->r2 == 0) {
        // 0x800D3BE0: lw          $t9, 0x4($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X4);
            goto L_800D3C08;
    }
    goto skip_0;
    // 0x800D3BE0: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    skip_0:
    // 0x800D3BE4: beq         $v0, $at, L_800D3C18
    if (ctx->r2 == ctx->r1) {
        // 0x800D3BE8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800D3C18;
    }
    // 0x800D3BE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D3BEC: beq         $v0, $at, L_800D3C30
    if (ctx->r2 == ctx->r1) {
        // 0x800D3BF0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800D3C30;
    }
    // 0x800D3BF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D3BF4: beql        $v0, $at, L_800D3C50
    if (ctx->r2 == ctx->r1) {
        // 0x800D3BF8: lw          $t9, 0x4($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X4);
            goto L_800D3C50;
    }
    goto skip_1;
    // 0x800D3BF8: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    skip_1:
    // 0x800D3BFC: b           L_800D3C64
    // 0x800D3C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3C64;
    // 0x800D3C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3C04: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
L_800D3C08:
    // 0x800D3C08: jalr        $t9
    // 0x800D3C0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800D3C0C: nop

    after_0:
    // 0x800D3C10: b           L_800D3C64
    // 0x800D3C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3C64;
    // 0x800D3C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3C18:
    // 0x800D3C18: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x800D3C1C: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x800D3C20: jalr        $t9
    // 0x800D3C24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800D3C24: nop

    after_1:
    // 0x800D3C28: b           L_800D3C64
    // 0x800D3C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3C64;
    // 0x800D3C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3C30:
    // 0x800D3C30: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x800D3C34: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x800D3C38: lw          $a1, 0xC($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC);
    // 0x800D3C3C: jalr        $t9
    // 0x800D3C40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800D3C40: nop

    after_2:
    // 0x800D3C44: b           L_800D3C64
    // 0x800D3C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3C64;
    // 0x800D3C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3C4C: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
L_800D3C50:
    // 0x800D3C50: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x800D3C54: lw          $a1, 0xC($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC);
    // 0x800D3C58: jalr        $t9
    // 0x800D3C5C: lw          $a2, 0x10($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800D3C5C: lw          $a2, 0x10($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X10);
    after_3:
    // 0x800D3C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3C64:
    // 0x800D3C64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3C68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3C70: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D3C74: lh          $a0, -0x4C04($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4C04);
    // 0x800D3C78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3C7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3C80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D3C84: beq         $a0, $zero, L_800D3CE4
    if (ctx->r4 == 0) {
        // 0x800D3C88: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800D3CE4;
    }
    // 0x800D3C88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D3C8C: jal         0x800B2890
    // 0x800D3C90: nop

    func_800B2890(rdram, ctx);
        goto after_0;
    // 0x800D3C90: nop

    after_0:
    // 0x800D3C94: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D3C98: jal         0x800B28C4
    // 0x800D3C9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800D3C9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800D3CA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D3CA4: jal         0x800B296C
    // 0x800D3CA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800B296C(rdram, ctx);
        goto after_2;
    // 0x800D3CA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x800D3CAC: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800D3CB0: beq         $at, $zero, L_800D3CD0
    if (ctx->r1 == 0) {
        // 0x800D3CB4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800D3CD0;
    }
    // 0x800D3CB4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800D3CB8:
    // 0x800D3CB8: jal         0x800D3BC8
    // 0x800D3CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800D3BC8(rdram, ctx);
        goto after_3;
    // 0x800D3CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800D3CC0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x800D3CC4: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800D3CC8: bne         $at, $zero, L_800D3CB8
    if (ctx->r1 != 0) {
        // 0x800D3CCC: nop
    
            goto L_800D3CB8;
    }
    // 0x800D3CCC: nop

L_800D3CD0:
    // 0x800D3CD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D3CD4: jal         0x800B2D48
    // 0x800D3CD8: lh          $a0, -0x4C04($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4C04);
    func_800B2D48(rdram, ctx);
        goto after_4;
    // 0x800D3CD8: lh          $a0, -0x4C04($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4C04);
    after_4:
    // 0x800D3CDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D3CE0: sh          $zero, -0x4C04($at)
    MEM_H(-0X4C04, ctx->r1) = 0;
L_800D3CE4:
    // 0x800D3CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3CE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D3CEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D3CF0: jr          $ra
    // 0x800D3CF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800D3CF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800D3CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3CF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D3CFC: jr          $ra
    // 0x800D3D00: sb          $a0, -0x4C0C($at)
    MEM_B(-0X4C0C, ctx->r1) = ctx->r4;
    return;
    // 0x800D3D00: sb          $a0, -0x4C0C($at)
    MEM_B(-0X4C0C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800D3D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D04: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D3D08: jr          $ra
    // 0x800D3D0C: lbu         $v0, -0x4C0C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0C);
    return;
    // 0x800D3D0C: lbu         $v0, -0x4C0C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0C);
;}
RECOMP_FUNC void func_800D3D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D3D14: jr          $ra
    // 0x800D3D18: sb          $a0, -0x4C0B($at)
    MEM_B(-0X4C0B, ctx->r1) = ctx->r4;
    return;
    // 0x800D3D18: sb          $a0, -0x4C0B($at)
    MEM_B(-0X4C0B, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800D3D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D1C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D3D20: jr          $ra
    // 0x800D3D24: lbu         $v0, -0x4C0B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0B);
    return;
    // 0x800D3D24: lbu         $v0, -0x4C0B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4C0B);
;}
RECOMP_FUNC void func_800D3D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D28: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D3D2C: addiu       $v1, $v1, -0x4C10
    ctx->r3 = ADD32(ctx->r3, -0X4C10);
    // 0x800D3D30: lbu         $t6, 0x9($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X9);
    // 0x800D3D34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D3D38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800D3D3C: beql        $t6, $zero, L_800D3D50
    if (ctx->r14 == 0) {
            // 0x800D3D40: sb          $t7, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r15;
    static_3_800D3D50(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D3D40: sb          $t7, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r15;
    skip_0:
    // 0x800D3D44: jr          $ra
    // 0x800D3D48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D3D48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800D3D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D4C: sb          $t7, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r15;
    // 0x800D3D50: jr          $ra
    // 0x800D3D54: nop

    return;
    // 0x800D3D54: nop

;}
RECOMP_FUNC void func_800D3D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D58: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D3D5C: addiu       $v1, $v1, -0x4C10
    ctx->r3 = ADD32(ctx->r3, -0X4C10);
    // 0x800D3D60: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x800D3D64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D3D68: beq         $v0, $at, L_800D3D80
    if (ctx->r2 == ctx->r1) {
        // 0x800D3D6C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800D3D80;
    }
    // 0x800D3D6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D3D70: beq         $v0, $at, L_800D3D8C
    if (ctx->r2 == ctx->r1) {
        // 0x800D3D74: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_800D3D8C;
    }
    // 0x800D3D74: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800D3D78: b           L_800D3D9C
    // 0x800D3D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D3D9C;
    // 0x800D3D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D3D80:
    // 0x800D3D80: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x800D3D84: jr          $ra
    // 0x800D3D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D3D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D3D8C:
    // 0x800D3D8C: sb          $t6, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r14;
    // 0x800D3D90: jr          $ra
    // 0x800D3D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D3D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800D3D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D3D9C:
    // 0x800D3D9C: jr          $ra
    // 0x800D3DA0: nop

    return;
    // 0x800D3DA0: nop

;}
RECOMP_FUNC void func_800D3DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3DAC: jal         0x800F54F0
    // 0x800D3DB0: nop

    func_800F54F0(rdram, ctx);
        goto after_0;
    // 0x800D3DB0: nop

    after_0:
    // 0x800D3DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3DBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3DD0: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3DD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D3DD8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D3DDC: lhu         $v0, -0x4A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4A48);
    // 0x800D3DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3DE8: beql        $v0, $zero, L_800D3E04
    if (ctx->r2 == 0) {
        // 0x800D3DEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800D3E04;
    }
    goto skip_0;
    // 0x800D3DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800D3DF0: jal         0x800DA298
    // 0x800D3DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800D3DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_0:
    // 0x800D3DF8: b           L_800D3E08
    // 0x800D3DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3E08;
    // 0x800D3DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3E00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D3E04:
    // 0x800D3E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3E08:
    // 0x800D3E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3E0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3E14: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3E1C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800D3E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3E24: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800D3E28: jal         0x800DA298
    // 0x800D3E2C: lhu         $a0, -0x4A46($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4A46);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800D3E2C: lhu         $a0, -0x4A46($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4A46);
    after_0:
    // 0x800D3E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3E38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3E40: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3E48: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800D3E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3E50: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800D3E54: jal         0x800DA298
    // 0x800D3E58: lhu         $a0, -0x4A44($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4A44);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800D3E58: lhu         $a0, -0x4A44($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4A44);
    after_0:
    // 0x800D3E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3E64: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3E74: jal         0x800D3E14
    // 0x800D3E78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D3E14(rdram, ctx);
        goto after_0;
    // 0x800D3E78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D3E7C: beq         $v0, $zero, L_800D3E8C
    if (ctx->r2 == 0) {
        // 0x800D3E80: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_800D3E8C;
    }
    // 0x800D3E80: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800D3E84: b           L_800D3EB8
    // 0x800D3E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D3EB8;
    // 0x800D3E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D3E8C:
    // 0x800D3E8C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800D3E90: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D3E94: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800D3E98: lhu         $v0, -0x4A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4A48);
    // 0x800D3E9C: beql        $v0, $zero, L_800D3EB8
    if (ctx->r2 == 0) {
        // 0x800D3EA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800D3EB8;
    }
    goto skip_0;
    // 0x800D3EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x800D3EA4: jal         0x800DA298
    // 0x800D3EA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800D3EA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800D3EAC: b           L_800D3EBC
    // 0x800D3EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800D3EBC;
    // 0x800D3EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D3EB8:
    // 0x800D3EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3EBC:
    // 0x800D3EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3EC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3ED0: jal         0x800D3E14
    // 0x800D3ED4: nop

    func_800D3E14(rdram, ctx);
        goto after_0;
    // 0x800D3ED4: nop

    after_0:
    // 0x800D3ED8: beq         $v0, $zero, L_800D3EE8
    if (ctx->r2 == 0) {
        // 0x800D3EDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D3EE8;
    }
    // 0x800D3EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3EE0: b           L_800D3EEC
    // 0x800D3EE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D3EEC;
    // 0x800D3EE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D3EE8:
    // 0x800D3EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D3EEC:
    // 0x800D3EEC: jr          $ra
    // 0x800D3EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D3EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D3EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3EF4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3EF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D3EFC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D3F00: lhu         $v0, -0x4A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4A48);
    // 0x800D3F04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3F0C: beql        $v0, $zero, L_800D3F20
    if (ctx->r2 == 0) {
        // 0x800D3F10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D3F20;
    }
    goto skip_0;
    // 0x800D3F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D3F14: jal         0x800DA544
    // 0x800D3F18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DA544(rdram, ctx);
        goto after_0;
    // 0x800D3F18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_0:
    // 0x800D3F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3F20:
    // 0x800D3F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3F24: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3F2C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D3F34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800D3F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3F3C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800D3F40: jal         0x800DA544
    // 0x800D3F44: lhu         $a0, -0x4A46($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4A46);
    func_800DA544(rdram, ctx);
        goto after_0;
    // 0x800D3F44: lhu         $a0, -0x4A46($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4A46);
    after_0:
    // 0x800D3F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3F50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3F58: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D3F5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D3F60: addiu       $t7, $t7, -0x4A40
    ctx->r15 = ADD32(ctx->r15, -0X4A40);
    // 0x800D3F64: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3F68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D3F6C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800D3F70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800D3F74: lhu         $a0, -0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, -0X4);
    // 0x800D3F78: jal         0x800DA3B8
    // 0x800D3F7C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800DA3B8(rdram, ctx);
        goto after_0;
    // 0x800D3F7C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x800D3F80: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800D3F84: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D3F88: addiu       $t8, $t8, -0x49F8
    ctx->r24 = ADD32(ctx->r24, -0X49F8);
    // 0x800D3F8C: bne         $v0, $t8, L_800D3FB0
    if (ctx->r2 != ctx->r24) {
        // 0x800D3F90: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_800D3FB0;
    }
    // 0x800D3F90: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D3F94: beql        $t9, $zero, L_800D3FB4
    if (ctx->r25 == 0) {
        // 0x800D3F98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D3FB4;
    }
    goto skip_0;
    // 0x800D3F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D3F9C: jal         0x800F54E4
    // 0x800D3FA0: nop

    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x800D3FA0: nop

    after_1:
    // 0x800D3FA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D3FA8: jal         0x800F4924
    // 0x800D3FAC: addiu       $a1, $zero, 0x3E7
    ctx->r5 = ADD32(0, 0X3E7);
    func_800F4924(rdram, ctx);
        goto after_2;
    // 0x800D3FAC: addiu       $a1, $zero, 0x3E7
    ctx->r5 = ADD32(0, 0X3E7);
    after_2:
L_800D3FB0:
    // 0x800D3FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D3FB4:
    // 0x800D3FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D3FB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D3FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3FC0: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800D3FC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D3FC8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D3FCC: jr          $ra
    // 0x800D3FD0: lhu         $v0, -0x4A42($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4A42);
    return;
    // 0x800D3FD0: lhu         $v0, -0x4A42($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4A42);
;}
RECOMP_FUNC void func_800D3FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3FD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D3FD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D3FDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D3FE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3FE4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800D3FE8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x800D3FEC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800D3FF0: jal         0x800D3E40
    // 0x800D3FF4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x800D3FF4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x800D3FF8: beq         $v0, $zero, L_800D406C
    if (ctx->r2 == 0) {
        // 0x800D3FFC: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_800D406C;
    }
    // 0x800D3FFC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800D4000: jal         0x800D42E8
    // 0x800D4004: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_1;
    // 0x800D4004: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800D4008: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x800D400C: jal         0x800D42E8
    // 0x800D4010: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_2;
    // 0x800D4010: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800D4014: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    // 0x800D4018: jal         0x800D42E8
    // 0x800D401C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_3;
    // 0x800D401C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800D4020: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    // 0x800D4024: jal         0x800D42E8
    // 0x800D4028: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_4;
    // 0x800D4028: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800D402C: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x800D4030: jal         0x800D42E8
    // 0x800D4034: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_5;
    // 0x800D4034: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800D4038: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x800D403C: jal         0x800D42E8
    // 0x800D4040: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_6;
    // 0x800D4040: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800D4044: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x800D4048: jal         0x800D42E8
    // 0x800D404C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D42E8(rdram, ctx);
        goto after_7;
    // 0x800D404C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x800D4050: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D4054: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D4058: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800D405C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800D4060: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800D4064: b           L_800D40F8
    // 0x800D4068: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_800D40F8;
    // 0x800D4068: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_800D406C:
    // 0x800D406C: jal         0x800D3E40
    // 0x800D4070: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800D3E40(rdram, ctx);
        goto after_8;
    // 0x800D4070: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x800D4074: beq         $v0, $zero, L_800D40C4
    if (ctx->r2 == 0) {
        // 0x800D4078: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_800D40C4;
    }
    // 0x800D4078: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800D407C: jal         0x800D4398
    // 0x800D4080: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_9;
    // 0x800D4080: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800D4084: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x800D4088: jal         0x800D4398
    // 0x800D408C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_10;
    // 0x800D408C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800D4090: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    // 0x800D4094: jal         0x800D4398
    // 0x800D4098: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_11;
    // 0x800D4098: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800D409C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    // 0x800D40A0: jal         0x800D4398
    // 0x800D40A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_12;
    // 0x800D40A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x800D40A8: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x800D40AC: jal         0x800D4398
    // 0x800D40B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_13;
    // 0x800D40B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800D40B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800D40B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D40BC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800D40C0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_800D40C4:
    // 0x800D40C4: jal         0x800D3E40
    // 0x800D40C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D3E40(rdram, ctx);
        goto after_14;
    // 0x800D40C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x800D40CC: beq         $v0, $zero, L_800D40F8
    if (ctx->r2 == 0) {
        // 0x800D40D0: addiu       $a0, $zero, 0x46
        ctx->r4 = ADD32(0, 0X46);
            goto L_800D40F8;
    }
    // 0x800D40D0: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x800D40D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800D40D8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800D40DC: jal         0x800D4398
    // 0x800D40E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_15;
    // 0x800D40E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x800D40E4: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x800D40E8: jal         0x800D4398
    // 0x800D40EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D4398(rdram, ctx);
        goto after_16;
    // 0x800D40EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x800D40F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D40F4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_800D40F8:
    // 0x800D40F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D40FC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800D4100: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D4104: bne         $t3, $zero, L_800D4164
    if (ctx->r11 != 0) {
        // 0x800D4108: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_800D4164;
    }
    // 0x800D4108: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800D410C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800D4110: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x800D4114: jal         0x800D433C
    // 0x800D4118: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_800D433C(rdram, ctx);
        goto after_17;
    // 0x800D4118: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_17:
    // 0x800D411C: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x800D4120: jal         0x800D433C
    // 0x800D4124: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D433C(rdram, ctx);
        goto after_18;
    // 0x800D4124: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_18:
    // 0x800D4128: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    // 0x800D412C: jal         0x800D433C
    // 0x800D4130: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D433C(rdram, ctx);
        goto after_19;
    // 0x800D4130: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x800D4134: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    // 0x800D4138: jal         0x800D433C
    // 0x800D413C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D433C(rdram, ctx);
        goto after_20;
    // 0x800D413C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_20:
    // 0x800D4140: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x800D4144: jal         0x800D433C
    // 0x800D4148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D433C(rdram, ctx);
        goto after_21;
    // 0x800D4148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_21:
    // 0x800D414C: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x800D4150: jal         0x800D433C
    // 0x800D4154: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D433C(rdram, ctx);
        goto after_22;
    // 0x800D4154: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_22:
    // 0x800D4158: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x800D415C: jal         0x800D433C
    // 0x800D4160: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D433C(rdram, ctx);
        goto after_23;
    // 0x800D4160: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_23:
L_800D4164:
    // 0x800D4164: bne         $s0, $zero, L_800D4174
    if (ctx->r16 != 0) {
        // 0x800D4168: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_800D4174;
    }
    // 0x800D4168: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800D416C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800D4170: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_800D4174:
    // 0x800D4174: jal         0x800D4298
    // 0x800D4178: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800D4298(rdram, ctx);
        goto after_24;
    // 0x800D4178: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_24:
    // 0x800D417C: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x800D4180: jal         0x800D4298
    // 0x800D4184: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800D4298(rdram, ctx);
        goto after_25;
    // 0x800D4184: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_25:
    // 0x800D4188: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    // 0x800D418C: jal         0x800D4298
    // 0x800D4190: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800D4298(rdram, ctx);
        goto after_26;
    // 0x800D4190: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_26:
    // 0x800D4194: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    // 0x800D4198: jal         0x800D4298
    // 0x800D419C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800D4298(rdram, ctx);
        goto after_27;
    // 0x800D419C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_27:
    // 0x800D41A0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x800D41A4: jal         0x800D4298
    // 0x800D41A8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800D4298(rdram, ctx);
        goto after_28;
    // 0x800D41A8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_28:
    // 0x800D41AC: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x800D41B0: jal         0x800D4298
    // 0x800D41B4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800D4298(rdram, ctx);
        goto after_29;
    // 0x800D41B4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_29:
    // 0x800D41B8: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x800D41BC: jal         0x800D4298
    // 0x800D41C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D4298(rdram, ctx);
        goto after_30;
    // 0x800D41C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
    // 0x800D41C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D41C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D41CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800D41D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D41D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D41D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D41DC: lh          $t6, -0x49E0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X49E0);
    // 0x800D41E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D41E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D41E8: bne         $a0, $t6, L_800D41F8
    if (ctx->r4 != ctx->r14) {
            // 0x800D41EC: nop

    func_800D41F8(rdram, ctx);
    return;
    }
    // 0x800D41EC: nop

    // 0x800D41F0: jr          $ra
    // 0x800D41F4: lh          $v0, -0x49DE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49DE);
    return;
    // 0x800D41F4: lh          $v0, -0x49DE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49DE);
;}
RECOMP_FUNC void func_800D41F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D41F8: lh          $t7, -0x49DC($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X49DC);
    // 0x800D41FC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D4200: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D4204: bne         $a0, $t7, L_800D4214
    if (ctx->r4 != ctx->r15) {
            // 0x800D4208: nop

    func_800D4214(rdram, ctx);
    return;
    }
    // 0x800D4208: nop

    // 0x800D420C: jr          $ra
    // 0x800D4210: lh          $v0, -0x49DA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49DA);
    return;
    // 0x800D4210: lh          $v0, -0x49DA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49DA);
;}
RECOMP_FUNC void func_800D4214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4214: lh          $t8, -0x49D8($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X49D8);
    // 0x800D4218: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800D421C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800D4220: bne         $a0, $t8, L_800D4234
    if (ctx->r4 != ctx->r24) {
            // 0x800D4224: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    func_800D4234(rdram, ctx);
    return;
    }
    // 0x800D4224: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800D4228: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D422C: jr          $ra
    // 0x800D4230: lh          $v0, -0x49D6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49D6);
    return;
    // 0x800D4230: lh          $v0, -0x49D6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49D6);
;}
RECOMP_FUNC void func_800D4234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4234: addiu       $t0, $t0, -0x49E0
    ctx->r8 = ADD32(ctx->r8, -0X49E0);
    // 0x800D4238: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x800D423C: lh          $t1, 0x0($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X0);
    // 0x800D4240: bnel        $a0, $t1, L_800D4254
    if (ctx->r4 != ctx->r9) {
            // 0x800D4244: lh          $t2, 0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X4);
    static_3_800D4254(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D4244: lh          $t2, 0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X4);
    skip_0:
    // 0x800D4248: jr          $ra
    // 0x800D424C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    return;
    // 0x800D424C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
;}
RECOMP_FUNC void func_800D4250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4250: lh          $t2, 0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X4);
    // 0x800D4254: bnel        $a0, $t2, L_800D4268
    if (ctx->r4 != ctx->r10) {
            // 0x800D4258: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    static_3_800D4268(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D4258: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    skip_0:
    // 0x800D425C: jr          $ra
    // 0x800D4260: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    return;
    // 0x800D4260: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
;}
RECOMP_FUNC void func_800D4264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4264: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    // 0x800D4268: bnel        $a0, $t3, L_800D427C
    if (ctx->r4 != ctx->r11) {
            // 0x800D426C: lh          $t4, 0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XC);
    static_3_800D427C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D426C: lh          $t4, 0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XC);
    skip_0:
    // 0x800D4270: jr          $ra
    // 0x800D4274: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
    return;
    // 0x800D4274: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
;}
RECOMP_FUNC void func_800D4278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4278: lh          $t4, 0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XC);
    // 0x800D427C: bnel        $a0, $t4, L_800D4290
    if (ctx->r4 != ctx->r12) {
            // 0x800D4280: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    static_3_800D4290(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D4280: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    skip_0:
    // 0x800D4284: jr          $ra
    // 0x800D4288: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    return;
    // 0x800D4288: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
;}
RECOMP_FUNC void func_800D428C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D428C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x800D4290: jr          $ra
    // 0x800D4294: nop

    return;
    // 0x800D4294: nop

;}
RECOMP_FUNC void func_800D4298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D429C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D42A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D42A4: jal         0x800D41D8
    // 0x800D42A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D41D8(rdram, ctx);
        goto after_0;
    // 0x800D42A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D42AC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800D42B0: beq         $v0, $at, L_800D42CC
    if (ctx->r2 == ctx->r1) {
        // 0x800D42B4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D42CC;
    }
    // 0x800D42B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D42B8: jal         0x800C6E38
    // 0x800D42BC: nop

    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x800D42BC: nop

    after_1:
    // 0x800D42C0: bnel        $v0, $zero, L_800D42D0
    if (ctx->r2 != 0) {
        // 0x800D42C4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800D42D0;
    }
    goto skip_0;
    // 0x800D42C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x800D42C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800D42CC:
    // 0x800D42CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_800D42D0:
    // 0x800D42D0: jal         0x800D192C
    // 0x800D42D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800D192C(rdram, ctx);
        goto after_2;
    // 0x800D42D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800D42D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D42DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D42E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D42E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D42E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D42EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D42F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D42F4: jal         0x800D41D8
    // 0x800D42F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D41D8(rdram, ctx);
        goto after_0;
    // 0x800D42F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D42FC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800D4300: beq         $v0, $at, L_800D431C
    if (ctx->r2 == ctx->r1) {
        // 0x800D4304: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D431C;
    }
    // 0x800D4304: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D4308: jal         0x800C6E38
    // 0x800D430C: nop

    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x800D430C: nop

    after_1:
    // 0x800D4310: bnel        $v0, $zero, L_800D4320
    if (ctx->r2 != 0) {
        // 0x800D4314: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800D4320;
    }
    goto skip_0;
    // 0x800D4314: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x800D4318: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800D431C:
    // 0x800D431C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_800D4320:
    // 0x800D4320: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    // 0x800D4324: jal         0x800D1960
    // 0x800D4328: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800D1960(rdram, ctx);
        goto after_2;
    // 0x800D4328: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800D432C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D4334: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D433C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D433C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4344: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D4348: jal         0x800D41D8
    // 0x800D434C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D41D8(rdram, ctx);
        goto after_0;
    // 0x800D434C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D4350: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800D4354: beq         $v0, $at, L_800D4370
    if (ctx->r2 == ctx->r1) {
        // 0x800D4358: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D4370;
    }
    // 0x800D4358: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D435C: jal         0x800C6E38
    // 0x800D4360: nop

    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x800D4360: nop

    after_1:
    // 0x800D4364: bne         $v0, $zero, L_800D4370
    if (ctx->r2 != 0) {
        // 0x800D4368: nop
    
            goto L_800D4370;
    }
    // 0x800D4368: nop

    // 0x800D436C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800D4370:
    // 0x800D4370: jal         0x800D1ACC
    // 0x800D4374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800D1ACC(rdram, ctx);
        goto after_2;
    // 0x800D4374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800D4378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D437C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800D4380: jal         0x800D1960
    // 0x800D4384: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800D1960(rdram, ctx);
        goto after_3;
    // 0x800D4384: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x800D4388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D438C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D4390: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D439C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D43A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800D43A4: jal         0x800D41D8
    // 0x800D43A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D41D8(rdram, ctx);
        goto after_0;
    // 0x800D43A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D43AC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800D43B0: beq         $v0, $at, L_800D43CC
    if (ctx->r2 == ctx->r1) {
        // 0x800D43B4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800D43CC;
    }
    // 0x800D43B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800D43B8: jal         0x800C6E38
    // 0x800D43BC: nop

    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x800D43BC: nop

    after_1:
    // 0x800D43C0: bne         $v0, $zero, L_800D43CC
    if (ctx->r2 != 0) {
        // 0x800D43C4: nop
    
            goto L_800D43CC;
    }
    // 0x800D43C4: nop

    // 0x800D43C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800D43CC:
    // 0x800D43CC: jal         0x800D1ACC
    // 0x800D43D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800D1ACC(rdram, ctx);
        goto after_2;
    // 0x800D43D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800D43D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D43D8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x800D43DC: jal         0x800D1960
    // 0x800D43E0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800D1960(rdram, ctx);
        goto after_3;
    // 0x800D43E0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x800D43E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D43E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D43EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4400: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D4404: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D4408: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D440C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4410: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800D4414: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800D4418: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800D441C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D4420: jal         0x800D4D5C
    // 0x800D4424: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_800D4D5C(rdram, ctx);
        goto after_0;
    // 0x800D4424: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800D4428: jal         0x800C6784
    // 0x800D442C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800C6784(rdram, ctx);
        goto after_1;
    // 0x800D442C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800D4430: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800D4434: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800D4438: jal         0x800C675C
    // 0x800D443C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800C675C(rdram, ctx);
        goto after_2;
    // 0x800D443C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x800D4440: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4444: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800D4448: lbu         $v0, 0x56($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X56);
    // 0x800D444C: sb          $zero, 0x56($s0)
    MEM_B(0X56, ctx->r16) = 0;
    // 0x800D4450: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D4454: lwc1        $f6, 0x5B20($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5B20);
    // 0x800D4458: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D445C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800D4460: nop

    // 0x800D4464: bc1tl       L_800D4524
    if (c1cs) {
        // 0x800D4468: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D4524;
    }
    goto skip_0;
    // 0x800D4468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800D446C: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800D4470: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D4474: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x800D4478: nop

    // 0x800D447C: bc1f        L_800D4490
    if (!c1cs) {
        // 0x800D4480: nop
    
            goto L_800D4490;
    }
    // 0x800D4480: nop

    // 0x800D4484: swc1        $f2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f2.u32l;
    // 0x800D4488: b           L_800D4520
    // 0x800D448C: sb          $t6, 0x56($s0)
    MEM_B(0X56, ctx->r16) = ctx->r14;
        goto L_800D4520;
    // 0x800D448C: sb          $t6, 0x56($s0)
    MEM_B(0X56, ctx->r16) = ctx->r14;
L_800D4490:
    // 0x800D4490: beq         $v0, $zero, L_800D4520
    if (ctx->r2 == 0) {
        // 0x800D4494: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_800D4520;
    }
    // 0x800D4494: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800D4498: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800D449C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D44A0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D44A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D44A8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800D44AC: nop

    // 0x800D44B0: bc1fl       L_800D4524
    if (!c1cs) {
        // 0x800D44B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D4524;
    }
    goto skip_1;
    // 0x800D44B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800D44B8: lwc1        $f18, 0x5B24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5B24);
    // 0x800D44BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D44C0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800D44C4: nop

    // 0x800D44C8: bc1fl       L_800D4500
    if (!c1cs) {
        // 0x800D44CC: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_800D4500;
    }
    goto skip_2;
    // 0x800D44CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_2:
    // 0x800D44D0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D44D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D44D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800D44DC: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800D44E0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800D44E4: nop

    // 0x800D44E8: bc1fl       L_800D4524
    if (!c1cs) {
        // 0x800D44EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D4524;
    }
    goto skip_3;
    // 0x800D44EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800D44F0: swc1        $f2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f2.u32l;
    // 0x800D44F4: b           L_800D4520
    // 0x800D44F8: sb          $t8, 0x56($s0)
    MEM_B(0X56, ctx->r16) = ctx->r24;
        goto L_800D4520;
    // 0x800D44F8: sb          $t8, 0x56($s0)
    MEM_B(0X56, ctx->r16) = ctx->r24;
    // 0x800D44FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_800D4500:
    // 0x800D4500: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800D4504: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x800D4508: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800D450C: nop

    // 0x800D4510: bc1fl       L_800D4524
    if (!c1cs) {
        // 0x800D4514: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800D4524;
    }
    goto skip_4;
    // 0x800D4514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800D4518: swc1        $f2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f2.u32l;
    // 0x800D451C: sb          $t9, 0x56($s0)
    MEM_B(0X56, ctx->r16) = ctx->r25;
L_800D4520:
    // 0x800D4520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800D4524:
    // 0x800D4524: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D4528: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800D452C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4538: bne         $a1, $zero, L_800D4548
    if (ctx->r5 != 0) {
        // 0x800D453C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D4548;
    }
    // 0x800D453C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4540: b           L_800D4554
    // 0x800D4544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800D4554;
    // 0x800D4544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D4548:
    // 0x800D4548: jal         0x800AAD28
    // 0x800D454C: nop

    func_800AAD28(rdram, ctx);
        goto after_0;
    // 0x800D454C: nop

    after_0:
    // 0x800D4550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D4554:
    // 0x800D4554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D455C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D456C: jal         0x800AAD28
    // 0x800D4570: nop

    func_800AAD28(rdram, ctx);
        goto after_0;
    // 0x800D4570: nop

    after_0:
    // 0x800D4574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D457C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4584: addiu       $sp, $sp, -0x400
    ctx->r29 = ADD32(ctx->r29, -0X400);
    // 0x800D4588: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800D458C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800D4590: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800D4594: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x800D4598: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x800D459C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x800D45A0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x800D45A4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x800D45A8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800D45AC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800D45B0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800D45B4: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x800D45B8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x800D45BC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x800D45C0: sw          $a1, 0x404($sp)
    MEM_W(0X404, ctx->r29) = ctx->r5;
    // 0x800D45C4: sw          $a2, 0x408($sp)
    MEM_W(0X408, ctx->r29) = ctx->r6;
    // 0x800D45C8: sw          $a3, 0x40C($sp)
    MEM_W(0X40C, ctx->r29) = ctx->r7;
    // 0x800D45CC: jal         0x800DA298
    // 0x800D45D0: addiu       $a0, $zero, 0x664
    ctx->r4 = ADD32(0, 0X664);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800D45D0: addiu       $a0, $zero, 0x664
    ctx->r4 = ADD32(0, 0X664);
    after_0:
    // 0x800D45D4: bne         $v0, $zero, L_800D4D20
    if (ctx->r2 != 0) {
        // 0x800D45D8: lw          $a0, 0x404($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X404);
            goto L_800D4D20;
    }
    // 0x800D45D8: lw          $a0, 0x404($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X404);
    // 0x800D45DC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x800D45E0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800D45E4: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x800D45E8: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x800D45EC: lw          $a3, 0x4($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X4);
    // 0x800D45F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D45F4: or          $v1, $v0, $at
    ctx->r3 = ctx->r2 | ctx->r1;
    // 0x800D45F8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x800D45FC: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x800D4600: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800D4604: jal         0x800FAE44
    // 0x800D4608: addiu       $a1, $sp, 0x3E4
    ctx->r5 = ADD32(ctx->r29, 0X3E4);
    func_800FAE44(rdram, ctx);
        goto after_1;
    // 0x800D4608: addiu       $a1, $sp, 0x3E4
    ctx->r5 = ADD32(ctx->r29, 0X3E4);
    after_1:
    // 0x800D460C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800D4610: addiu       $t7, $sp, 0x118
    ctx->r15 = ADD32(ctx->r29, 0X118);
    // 0x800D4614: addiu       $t8, $sp, 0x10C
    ctx->r24 = ADD32(ctx->r29, 0X10C);
    // 0x800D4618: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800D461C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800D4620: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x800D4624: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x800D4628: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800D462C: addiu       $s0, $sp, 0xE4
    ctx->r16 = ADD32(ctx->r29, 0XE4);
    // 0x800D4630: addiu       $s6, $sp, 0xF0
    ctx->r22 = ADD32(ctx->r29, 0XF0);
    // 0x800D4634: addiu       $s4, $sp, 0x100
    ctx->r20 = ADD32(ctx->r29, 0X100);
    // 0x800D4638: addiu       $fp, $sp, 0x8C
    ctx->r30 = ADD32(ctx->r29, 0X8C);
    // 0x800D463C: addiu       $s5, $sp, 0x3D4
    ctx->r21 = ADD32(ctx->r29, 0X3D4);
L_800D4640:
    // 0x800D4640: beq         $s7, $zero, L_800D4650
    if (ctx->r23 == 0) {
        // 0x800D4644: sw          $s0, 0xDC($sp)
        MEM_W(0XDC, ctx->r29) = ctx->r16;
            goto L_800D4650;
    }
    // 0x800D4644: sw          $s0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r16;
    // 0x800D4648: b           L_800D4654
    // 0x800D464C: addiu       $s2, $s0, -0x90
    ctx->r18 = ADD32(ctx->r16, -0X90);
        goto L_800D4654;
    // 0x800D464C: addiu       $s2, $s0, -0x90
    ctx->r18 = ADD32(ctx->r16, -0X90);
L_800D4650:
    // 0x800D4650: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800D4654:
    // 0x800D4654: beq         $s7, $zero, L_800D467C
    if (ctx->r23 == 0) {
        // 0x800D4658: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D467C;
    }
    // 0x800D4658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D465C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D4660: jal         0x800EE7F8
    // 0x800D4664: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800D4664: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x800D4668: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800D466C: jal         0x800EE7F8
    // 0x800D4670: addiu       $a1, $s2, 0xC
    ctx->r5 = ADD32(ctx->r18, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800D4670: addiu       $a1, $s2, 0xC
    ctx->r5 = ADD32(ctx->r18, 0XC);
    after_3:
    // 0x800D4674: b           L_800D4694
    // 0x800D4678: addiu       $a0, $sp, 0x3B8
    ctx->r4 = ADD32(ctx->r29, 0X3B8);
        goto L_800D4694;
    // 0x800D4678: addiu       $a0, $sp, 0x3B8
    ctx->r4 = ADD32(ctx->r29, 0X3B8);
L_800D467C:
    // 0x800D467C: jal         0x800EE7F8
    // 0x800D4680: lw          $a1, 0x408($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X408);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x800D4680: lw          $a1, 0x408($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X408);
    after_4:
    // 0x800D4684: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800D4688: jal         0x800EE7F8
    // 0x800D468C: lw          $a1, 0x404($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X404);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x800D468C: lw          $a1, 0x404($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X404);
    after_5:
    // 0x800D4690: addiu       $a0, $sp, 0x3B8
    ctx->r4 = ADD32(ctx->r29, 0X3B8);
L_800D4694:
    // 0x800D4694: jal         0x800EE7F8
    // 0x800D4698: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x800D4698: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800D469C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800D46A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D46A4: jal         0x800EFB24
    // 0x800D46A8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_800EFB24(rdram, ctx);
        goto after_7;
    // 0x800D46A8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_7:
    // 0x800D46AC: lwc1        $f2, 0x3D4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x800D46B0: lwc1        $f12, 0x3D8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x800D46B4: lwc1        $f0, 0x3DC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x800D46B8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800D46BC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800D46C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D46C4: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800D46C8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800D46CC: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800D46D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800D46D4: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800D46D8: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800D46DC: nop

    // 0x800D46E0: bc1fl       L_800D4828
    if (!c1cs) {
        // 0x800D46E4: sw          $zero, 0x40($s0)
        MEM_W(0X40, ctx->r16) = 0;
            goto L_800D4828;
    }
    goto skip_0;
    // 0x800D46E4: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    skip_0:
    // 0x800D46E8: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800D46EC: lwc1        $f20, 0x4($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800D46F0: addiu       $s1, $s0, 0x44
    ctx->r17 = ADD32(ctx->r16, 0X44);
    // 0x800D46F4: sub.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x800D46F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800D46FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D4700: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x800D4704: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800D4708: lwc1        $f16, 0x4($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800D470C: jal         0x800FABF4
    // 0x800D4710: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800FABF4(rdram, ctx);
        goto after_8;
    // 0x800D4710: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800D4714: beq         $v0, $zero, L_800D4774
    if (ctx->r2 == 0) {
        // 0x800D4718: sw          $v0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r2;
            goto L_800D4774;
    }
    // 0x800D4718: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x800D471C: jal         0x800EF2A0
    // 0x800D4720: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800EF2A0(rdram, ctx);
        goto after_9;
    // 0x800D4720: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_9:
    // 0x800D4724: lwc1        $f10, 0x3D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x800D4728: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800D472C: lwc1        $f6, 0x3D8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x800D4730: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800D4734: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800D4738: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x800D473C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D4740: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800D4744: lwc1        $f6, 0x3DC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x800D4748: addiu       $a1, $sp, 0x3B8
    ctx->r5 = ADD32(ctx->r29, 0X3B8);
    // 0x800D474C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800D4750: add.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800D4754: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D4758: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800D475C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800D4760: nop

    // 0x800D4764: bc1fl       L_800D4778
    if (!c1cs) {
        // 0x800D4768: lw          $t9, 0x40($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X40);
            goto L_800D4778;
    }
    goto skip_1;
    // 0x800D4768: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    skip_1:
    // 0x800D476C: jal         0x800EE7F8
    // 0x800D4770: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    func_800EE7F8(rdram, ctx);
        goto after_10;
    // 0x800D4770: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    after_10:
L_800D4774:
    // 0x800D4774: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
L_800D4778:
    // 0x800D4778: beql        $t9, $zero, L_800D482C
    if (ctx->r25 == 0) {
        // 0x800D477C: lw          $t0, 0x0($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X0);
            goto L_800D482C;
    }
    goto skip_2;
    // 0x800D477C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    skip_2:
    // 0x800D4780: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800D4784: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D4788: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D478C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x800D4790: nop

    // 0x800D4794: bc1fl       L_800D482C
    if (!c1cs) {
        // 0x800D4798: lw          $t0, 0x0($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X0);
            goto L_800D482C;
    }
    goto skip_3;
    // 0x800D4798: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    skip_3:
    // 0x800D479C: lwc1        $f4, 0x5B28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B28);
    // 0x800D47A0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800D47A4: nop

    // 0x800D47A8: bc1fl       L_800D482C
    if (!c1cs) {
        // 0x800D47AC: lw          $t0, 0x0($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X0);
            goto L_800D482C;
    }
    goto skip_4;
    // 0x800D47AC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    skip_4:
    // 0x800D47B0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800D47B4: beq         $a0, $zero, L_800D481C
    if (ctx->r4 == 0) {
        // 0x800D47B8: nop
    
            goto L_800D481C;
    }
    // 0x800D47B8: nop

    // 0x800D47BC: jal         0x800C673C
    // 0x800D47C0: nop

    func_800C673C(rdram, ctx);
        goto after_11;
    // 0x800D47C0: nop

    after_11:
    // 0x800D47C4: sub.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x800D47C8: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x800D47CC: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800D47D0: jal         0x800F2100
    // 0x800D47D4: sub.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f8.fl;
    func_800F2100(rdram, ctx);
        goto after_12;
    // 0x800D47D4: sub.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f8.fl;
    after_12:
    // 0x800D47D8: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x800D47DC: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x800D47E0: nop

    // 0x800D47E4: bc1f        L_800D481C
    if (!c1cs) {
        // 0x800D47E8: nop
    
            goto L_800D481C;
    }
    // 0x800D47E8: nop

    // 0x800D47EC: lwc1        $f18, 0x8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800D47F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800D47F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D47F8: sub.s       $f16, $f18, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x800D47FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800D4800: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x800D4804: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D4808: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800D480C: jal         0x800FABF4
    // 0x800D4810: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800FABF4(rdram, ctx);
        goto after_13;
    // 0x800D4810: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x800D4814: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x800D4818: lwc1        $f20, 0x4($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X4);
L_800D481C:
    // 0x800D481C: b           L_800D4828
    // 0x800D4820: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
        goto L_800D4828;
    // 0x800D4820: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x800D4824: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_800D4828:
    // 0x800D4828: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
L_800D482C:
    // 0x800D482C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800D4830: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D4834: beql        $t0, $zero, L_800D4848
    if (ctx->r8 == 0) {
        // 0x800D4838: lbu         $t1, 0x56($s3)
        ctx->r9 = MEM_BU(ctx->r19, 0X56);
            goto L_800D4848;
    }
    goto skip_5;
    // 0x800D4838: lbu         $t1, 0x56($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X56);
    skip_5:
    // 0x800D483C: jal         0x800D4400
    // 0x800D4840: lw          $a2, 0x40C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40C);
    func_800D4400(rdram, ctx);
        goto after_14;
    // 0x800D4840: lw          $a2, 0x40C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40C);
    after_14:
    // 0x800D4844: lbu         $t1, 0x56($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X56);
L_800D4848:
    // 0x800D4848: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800D484C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800D4850: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x800D4854: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x800D4858: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800D485C: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800D4860: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800D4864: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800D4868: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    // 0x800D486C: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x800D4870: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800D4874: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    // 0x800D4878: lwc1        $f8, 0x4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800D487C: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800D4880: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800D4884: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800D4888: swc1        $f18, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f18.u32l;
    // 0x800D488C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x800D4890: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
    // 0x800D4894: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x800D4898: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x800D489C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800D48A0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x800D48A4: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800D48A8: jal         0x800C6B78
    // 0x800D48AC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800C6B78(rdram, ctx);
        goto after_15;
    // 0x800D48AC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_15:
    // 0x800D48B0: beq         $v0, $zero, L_800D4CB4
    if (ctx->r2 == 0) {
        // 0x800D48B4: sw          $v0, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r2;
            goto L_800D4CB4;
    }
    // 0x800D48B4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x800D48B8: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
    // 0x800D48BC: jal         0x800D4564
    // 0x800D48C0: addiu       $s1, $s3, 0x44
    ctx->r17 = ADD32(ctx->r19, 0X44);
    func_800D4564(rdram, ctx);
        goto after_16;
    // 0x800D48C0: addiu       $s1, $s3, 0x44
    ctx->r17 = ADD32(ctx->r19, 0X44);
    after_16:
    // 0x800D48C4: lbu         $t4, 0x55($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X55);
    // 0x800D48C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D48CC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800D48D0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800D48D4: sb          $t5, 0x55($s3)
    MEM_B(0X55, ctx->r19) = ctx->r13;
    // 0x800D48D8: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x800D48DC: jal         0x800EE7F8
    // 0x800D48E0: sw          $t6, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r14;
    func_800EE7F8(rdram, ctx);
        goto after_17;
    // 0x800D48E0: sw          $t6, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r14;
    after_17:
    // 0x800D48E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D48E8: bne         $s7, $at, L_800D492C
    if (ctx->r23 != ctx->r1) {
        // 0x800D48EC: lw          $t7, 0xFC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XFC);
            goto L_800D492C;
    }
    // 0x800D48EC: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x800D48F0: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x800D48F4: bnel        $a1, $t7, L_800D4930
    if (ctx->r5 != ctx->r15) {
        // 0x800D48F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800D4930;
    }
    goto skip_6;
    // 0x800D48F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_6:
    // 0x800D48FC: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x800D4900: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800D4904: addiu       $a2, $s2, 0x1C
    ctx->r6 = ADD32(ctx->r18, 0X1C);
    // 0x800D4908: beql        $t8, $a1, L_800D4930
    if (ctx->r24 == ctx->r5) {
        // 0x800D490C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800D4930;
    }
    goto skip_7;
    // 0x800D490C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_7:
    // 0x800D4910: jal         0x800EE780
    // 0x800D4914: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EE780(rdram, ctx);
        goto after_18;
    // 0x800D4914: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_18:
    // 0x800D4918: jal         0x800EF2A0
    // 0x800D491C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800EF2A0(rdram, ctx);
        goto after_19;
    // 0x800D491C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_19:
    // 0x800D4920: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800D4924: jal         0x800EE7F8
    // 0x800D4928: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_20;
    // 0x800D4928: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_20:
L_800D492C:
    // 0x800D492C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_800D4930:
    // 0x800D4930: bne         $s7, $at, L_800D4A20
    if (ctx->r23 != ctx->r1) {
        // 0x800D4934: lw          $t9, 0xFC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XFC);
            goto L_800D4A20;
    }
    // 0x800D4934: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x800D4938: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x800D493C: bnel        $a1, $t9, L_800D4A24
    if (ctx->r5 != ctx->r25) {
        // 0x800D4940: lw          $t6, 0x8C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8C);
            goto L_800D4A24;
    }
    goto skip_8;
    // 0x800D4940: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    skip_8:
    // 0x800D4944: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x800D4948: addiu       $s1, $s0, 0x68
    ctx->r17 = ADD32(ctx->r16, 0X68);
    // 0x800D494C: bnel        $t0, $a1, L_800D4A24
    if (ctx->r8 != ctx->r5) {
        // 0x800D4950: lw          $t6, 0x8C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8C);
            goto L_800D4A24;
    }
    goto skip_9;
    // 0x800D4950: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    skip_9:
    // 0x800D4954: jal         0x800D4534
    // 0x800D4958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D4534(rdram, ctx);
        goto after_21;
    // 0x800D4958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x800D495C: beq         $v0, $zero, L_800D4A20
    if (ctx->r2 == 0) {
        // 0x800D4960: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800D4A20;
    }
    // 0x800D4960: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800D4964: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800D4968: jal         0x800F0524
    // 0x800D496C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800F0524(rdram, ctx);
        goto after_22;
    // 0x800D496C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_22:
    // 0x800D4970: addiu       $a0, $sp, 0x3F4
    ctx->r4 = ADD32(ctx->r29, 0X3F4);
    // 0x800D4974: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D4978: jal         0x800EFB24
    // 0x800D497C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_800EFB24(rdram, ctx);
        goto after_23;
    // 0x800D497C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_23:
    // 0x800D4980: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800D4984: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4988: lwc1        $f16, 0x8($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800D498C: addiu       $a0, $sp, 0x3F4
    ctx->r4 = ADD32(ctx->r29, 0X3F4);
    // 0x800D4990: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800D4994: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800D4998: jal         0x800EF368
    // 0x800D499C: nop

    func_800EF368(rdram, ctx);
        goto after_24;
    // 0x800D499C: nop

    after_24:
    // 0x800D49A0: lwc1        $f8, 0x3D4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x800D49A4: lwc1        $f10, 0x3F4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3F4);
    // 0x800D49A8: lwc1        $f16, 0x3D8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x800D49AC: lwc1        $f4, 0x3F8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3F8);
    // 0x800D49B0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800D49B4: lwc1        $f10, 0x3FC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3FC);
    // 0x800D49B8: lwc1        $f8, 0x3DC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x800D49BC: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800D49C0: swc1        $f18, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->f18.u32l;
    // 0x800D49C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D49C8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800D49CC: swc1        $f6, 0x3D8($sp)
    MEM_W(0X3D8, ctx->r29) = ctx->f6.u32l;
    // 0x800D49D0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800D49D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D49D8: swc1        $f18, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = ctx->f18.u32l;
    // 0x800D49DC: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x800D49E0: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x800D49E4: sll         $t3, $t2, 15
    ctx->r11 = S32(ctx->r10 << 15);
    // 0x800D49E8: bltz        $t3, L_800D4A18
    if (SIGNED(ctx->r11) < 0) {
        // 0x800D49EC: nop
    
            goto L_800D4A18;
    }
    // 0x800D49EC: nop

    // 0x800D49F0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x800D49F4: lw          $a2, 0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X4);
    // 0x800D49F8: lw          $a3, 0x8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X8);
    // 0x800D49FC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800D4A00: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800D4A04: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800D4A08: jal         0x800FB434
    // 0x800D4A0C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_800FB434(rdram, ctx);
        goto after_25;
    // 0x800D4A0C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_25:
    // 0x800D4A10: b           L_800D4A20
    // 0x800D4A14: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
        goto L_800D4A20;
    // 0x800D4A14: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_800D4A18:
    // 0x800D4A18: jal         0x800EE7F8
    // 0x800D4A1C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_26;
    // 0x800D4A1C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_26:
L_800D4A20:
    // 0x800D4A20: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
L_800D4A24:
    // 0x800D4A24: bne         $t6, $zero, L_800D4B04
    if (ctx->r14 != 0) {
        // 0x800D4A28: nop
    
            goto L_800D4B04;
    }
    // 0x800D4A28: nop

    // 0x800D4A2C: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x800D4A30: lw          $t8, 0x40C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40C);
    // 0x800D4A34: beq         $t7, $zero, L_800D4B04
    if (ctx->r15 == 0) {
        // 0x800D4A38: nop
    
            goto L_800D4B04;
    }
    // 0x800D4A38: nop

    // 0x800D4A3C: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800D4A40: c.lt.s      $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f16.fl < ctx->f24.fl;
    // 0x800D4A44: nop

    // 0x800D4A48: bc1f        L_800D4B04
    if (!c1cs) {
        // 0x800D4A4C: nop
    
            goto L_800D4B04;
    }
    // 0x800D4A4C: nop

    // 0x800D4A50: jal         0x800F2100
    // 0x800D4A54: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    func_800F2100(rdram, ctx);
        goto after_27;
    // 0x800D4A54: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    after_27:
    // 0x800D4A58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D4A5C: lwc1        $f4, 0x5B2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B2C);
    // 0x800D4A60: addiu       $s1, $s0, 0x68
    ctx->r17 = ADD32(ctx->r16, 0X68);
    // 0x800D4A64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D4A68: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800D4A6C: nop

    // 0x800D4A70: bc1f        L_800D4B04
    if (!c1cs) {
        // 0x800D4A74: nop
    
            goto L_800D4B04;
    }
    // 0x800D4A74: nop

    // 0x800D4A78: jal         0x800D4534
    // 0x800D4A7C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    func_800D4534(rdram, ctx);
        goto after_28;
    // 0x800D4A7C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_28:
    // 0x800D4A80: beq         $v0, $zero, L_800D4B04
    if (ctx->r2 == 0) {
        // 0x800D4A84: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800D4B04;
    }
    // 0x800D4A84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800D4A88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800D4A8C: jal         0x800F0524
    // 0x800D4A90: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800F0524(rdram, ctx);
        goto after_29;
    // 0x800D4A90: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_29:
    // 0x800D4A94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800D4A98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D4A9C: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800D4AA0: addiu       $a0, $sp, 0x3F4
    ctx->r4 = ADD32(ctx->r29, 0X3F4);
    // 0x800D4AA4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800D4AA8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800D4AAC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800D4AB0: jal         0x800EFA20
    // 0x800D4AB4: nop

    func_800EFA20(rdram, ctx);
        goto after_30;
    // 0x800D4AB4: nop

    after_30:
    // 0x800D4AB8: addiu       $a0, $sp, 0x3C8
    ctx->r4 = ADD32(ctx->r29, 0X3C8);
    // 0x800D4ABC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800D4AC0: jal         0x800EE780
    // 0x800D4AC4: addiu       $a2, $sp, 0x3F4
    ctx->r6 = ADD32(ctx->r29, 0X3F4);
    func_800EE780(rdram, ctx);
        goto after_31;
    // 0x800D4AC4: addiu       $a2, $sp, 0x3F4
    ctx->r6 = ADD32(ctx->r29, 0X3F4);
    after_31:
    // 0x800D4AC8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x800D4ACC: lw          $a2, 0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X4);
    // 0x800D4AD0: lw          $a3, 0x8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X8);
    // 0x800D4AD4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800D4AD8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800D4ADC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800D4AE0: addiu       $a0, $sp, 0x3C8
    ctx->r4 = ADD32(ctx->r29, 0X3C8);
    // 0x800D4AE4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800D4AE8: jal         0x800FB434
    // 0x800D4AEC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_800FB434(rdram, ctx);
        goto after_32;
    // 0x800D4AEC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_32:
    // 0x800D4AF0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x800D4AF4: lwc1        $f18, 0x3D4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x800D4AF8: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x800D4AFC: lwc1        $f16, 0x3DC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x800D4B00: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_800D4B04:
    // 0x800D4B04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D4B08: lwc1        $f4, 0x5B30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B30);
    // 0x800D4B0C: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800D4B10: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800D4B14: nop

    // 0x800D4B18: bc1fl       L_800D4C60
    if (!c1cs) {
        // 0x800D4B1C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800D4C60;
    }
    goto skip_10;
    // 0x800D4B1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_10:
    // 0x800D4B20: lwc1        $f8, 0x4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800D4B24: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800D4B28: addiu       $s1, $s0, 0x68
    ctx->r17 = ADD32(ctx->r16, 0X68);
    // 0x800D4B2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800D4B30: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800D4B34: nop

    // 0x800D4B38: bc1tl       L_800D4C60
    if (c1cs) {
        // 0x800D4B3C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800D4C60;
    }
    goto skip_11;
    // 0x800D4B3C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_11:
    // 0x800D4B40: jal         0x800D4534
    // 0x800D4B44: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    func_800D4534(rdram, ctx);
        goto after_33;
    // 0x800D4B44: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_33:
    // 0x800D4B48: beq         $v0, $zero, L_800D4C5C
    if (ctx->r2 == 0) {
        // 0x800D4B4C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_800D4C5C;
    }
    // 0x800D4B4C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800D4B50: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x800D4B54: jal         0x800EE7F8
    // 0x800D4B58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_34;
    // 0x800D4B58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_34:
    // 0x800D4B5C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x800D4B60: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800D4B64: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x800D4B68: jal         0x800EFA4C
    // 0x800D4B6C: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    func_800EFA4C(rdram, ctx);
        goto after_35;
    // 0x800D4B6C: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    after_35:
    // 0x800D4B70: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x800D4B74: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x800D4B78: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800D4B7C: jal         0x800F0CB4
    // 0x800D4B80: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_800F0CB4(rdram, ctx);
        goto after_36;
    // 0x800D4B80: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_36:
    // 0x800D4B84: beq         $v0, $zero, L_800D4BB4
    if (ctx->r2 == 0) {
        // 0x800D4B88: lwc1        $f16, 0xCC($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
            goto L_800D4BB4;
    }
    // 0x800D4B88: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x800D4B8C: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800D4B90: jal         0x800F2100
    // 0x800D4B94: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    func_800F2100(rdram, ctx);
        goto after_37;
    // 0x800D4B94: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    after_37:
    // 0x800D4B98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D4B9C: lwc1        $f4, 0x5B34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B34);
    // 0x800D4BA0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800D4BA4: nop

    // 0x800D4BA8: bc1f        L_800D4BB4
    if (!c1cs) {
        // 0x800D4BAC: nop
    
            goto L_800D4BB4;
    }
    // 0x800D4BAC: nop

    // 0x800D4BB0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800D4BB4:
    // 0x800D4BB4: beq         $s2, $zero, L_800D4C5C
    if (ctx->r18 == 0) {
        // 0x800D4BB8: addiu       $a0, $sp, 0xA4
        ctx->r4 = ADD32(ctx->r29, 0XA4);
            goto L_800D4C5C;
    }
    // 0x800D4BB8: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x800D4BBC: jal         0x800EE7F8
    // 0x800D4BC0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_38;
    // 0x800D4BC0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_38:
    // 0x800D4BC4: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x800D4BC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800D4BCC: jal         0x800F0410
    // 0x800D4BD0: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    func_800F0410(rdram, ctx);
        goto after_39;
    // 0x800D4BD0: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    after_39:
    // 0x800D4BD4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800D4BD8: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x800D4BDC: jal         0x800EFB24
    // 0x800D4BE0: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_800EFB24(rdram, ctx);
        goto after_40;
    // 0x800D4BE0: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_40:
    // 0x800D4BE4: swc1        $f24, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f24.u32l;
    // 0x800D4BE8: jal         0x800EF2A0
    // 0x800D4BEC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_800EF2A0(rdram, ctx);
        goto after_41;
    // 0x800D4BEC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_41:
    // 0x800D4BF0: jal         0x800EEF24
    // 0x800D4BF4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_800EEF24(rdram, ctx);
        goto after_42;
    // 0x800D4BF4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_42:
    // 0x800D4BF8: beq         $v0, $zero, L_800D4C5C
    if (ctx->r2 == 0) {
        // 0x800D4BFC: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800D4C5C;
    }
    // 0x800D4BFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800D4C00: jal         0x800EE7F8
    // 0x800D4C04: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_43;
    // 0x800D4C04: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_43:
    // 0x800D4C08: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800D4C0C: jal         0x800EE7F8
    // 0x800D4C10: lw          $a1, 0x404($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X404);
    func_800EE7F8(rdram, ctx);
        goto after_44;
    // 0x800D4C10: lw          $a1, 0x404($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X404);
    after_44:
    // 0x800D4C14: addiu       $t1, $s7, 0x1
    ctx->r9 = ADD32(ctx->r23, 0X1);
    // 0x800D4C18: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800D4C1C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800D4C20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D4C24: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D4C28: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800D4C2C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800D4C30: nop

    // 0x800D4C34: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800D4C38: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800D4C3C: jal         0x800EF368
    // 0x800D4C40: nop

    func_800EF368(rdram, ctx);
        goto after_45;
    // 0x800D4C40: nop

    after_45:
    // 0x800D4C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D4C48: jal         0x800EF04C
    // 0x800D4C4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EF04C(rdram, ctx);
        goto after_46;
    // 0x800D4C4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_46:
    // 0x800D4C50: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800D4C54: jal         0x800EF04C
    // 0x800D4C58: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EF04C(rdram, ctx);
        goto after_47;
    // 0x800D4C58: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_47:
L_800D4C5C:
    // 0x800D4C5C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_800D4C60:
    // 0x800D4C60: jal         0x800EEF24
    // 0x800D4C64: addiu       $s1, $s7, 0x1
    ctx->r17 = ADD32(ctx->r23, 0X1);
    func_800EEF24(rdram, ctx);
        goto after_48;
    // 0x800D4C64: addiu       $s1, $s7, 0x1
    ctx->r17 = ADD32(ctx->r23, 0X1);
    after_48:
    // 0x800D4C68: beq         $v0, $zero, L_800D4C84
    if (ctx->r2 == 0) {
        // 0x800D4C6C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_800D4C84;
    }
    // 0x800D4C6C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800D4C70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800D4C74: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x800D4C78: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x800D4C7C: jal         0x800FAF78
    // 0x800D4C80: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_800FAF78(rdram, ctx);
        goto after_49;
    // 0x800D4C80: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_49:
L_800D4C84:
    // 0x800D4C84: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x800D4C88: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x800D4C8C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800D4C90: addiu       $t3, $t2, 0x90
    ctx->r11 = ADD32(ctx->r10, 0X90);
    // 0x800D4C94: addiu       $t5, $t4, 0x90
    ctx->r13 = ADD32(ctx->r12, 0X90);
    // 0x800D4C98: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x800D4C9C: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x800D4CA0: or          $s7, $s1, $zero
    ctx->r23 = ctx->r17 | 0;
    // 0x800D4CA4: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    // 0x800D4CA8: addiu       $s6, $s6, 0x90
    ctx->r22 = ADD32(ctx->r22, 0X90);
    // 0x800D4CAC: bne         $s1, $at, L_800D4640
    if (ctx->r17 != ctx->r1) {
        // 0x800D4CB0: addiu       $s4, $s4, 0x90
        ctx->r20 = ADD32(ctx->r20, 0X90);
            goto L_800D4640;
    }
    // 0x800D4CB0: addiu       $s4, $s4, 0x90
    ctx->r20 = ADD32(ctx->r20, 0X90);
L_800D4CB4:
    // 0x800D4CB4: addiu       $t6, $sp, 0x3D0
    ctx->r14 = ADD32(ctx->r29, 0X3D0);
    // 0x800D4CB8: bne         $s4, $t6, L_800D4D00
    if (ctx->r20 != ctx->r14) {
        // 0x800D4CBC: addiu       $t1, $sp, 0x3D0
        ctx->r9 = ADD32(ctx->r29, 0X3D0);
            goto L_800D4D00;
    }
    // 0x800D4CBC: addiu       $t1, $sp, 0x3D0
    ctx->r9 = ADD32(ctx->r29, 0X3D0);
    // 0x800D4CC0: lbu         $t7, 0x56($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X56);
    // 0x800D4CC4: bne         $t7, $zero, L_800D4D00
    if (ctx->r15 != 0) {
        // 0x800D4CC8: nop
    
            goto L_800D4D00;
    }
    // 0x800D4CC8: nop

    // 0x800D4CCC: lw          $t8, 0x1C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X1C);
    // 0x800D4CD0: lw          $a0, 0x408($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X408);
    // 0x800D4CD4: lw          $t9, 0x404($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X404);
    // 0x800D4CD8: beq         $t8, $zero, L_800D4D00
    if (ctx->r24 == 0) {
        // 0x800D4CDC: nop
    
            goto L_800D4D00;
    }
    // 0x800D4CDC: nop

    // 0x800D4CE0: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800D4CE4: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800D4CE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D4CEC: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x800D4CF0: nop

    // 0x800D4CF4: bc1f        L_800D4D00
    if (!c1cs) {
        // 0x800D4CF8: nop
    
            goto L_800D4D00;
    }
    // 0x800D4CF8: nop

    // 0x800D4CFC: sb          $t0, 0x54($s3)
    MEM_B(0X54, ctx->r19) = ctx->r8;
L_800D4D00:
    // 0x800D4D00: bne         $s4, $t1, L_800D4D18
    if (ctx->r20 != ctx->r9) {
        // 0x800D4D04: lw          $a0, 0x408($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X408);
            goto L_800D4D18;
    }
    // 0x800D4D04: lw          $a0, 0x408($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X408);
    // 0x800D4D08: jal         0x800EE7F8
    // 0x800D4D0C: addiu       $a1, $sp, 0x3E4
    ctx->r5 = ADD32(ctx->r29, 0X3E4);
    func_800EE7F8(rdram, ctx);
        goto after_50;
    // 0x800D4D0C: addiu       $a1, $sp, 0x3E4
    ctx->r5 = ADD32(ctx->r29, 0X3E4);
    after_50:
    // 0x800D4D10: b           L_800D4D24
    // 0x800D4D14: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
        goto L_800D4D24;
    // 0x800D4D14: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_800D4D18:
    // 0x800D4D18: jal         0x800EE7F8
    // 0x800D4D1C: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    func_800EE7F8(rdram, ctx);
        goto after_51;
    // 0x800D4D1C: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    after_51:
L_800D4D20:
    // 0x800D4D20: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_800D4D24:
    // 0x800D4D24: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x800D4D28: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x800D4D2C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x800D4D30: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800D4D34: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800D4D38: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800D4D3C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800D4D40: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800D4D44: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800D4D48: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800D4D4C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x800D4D50: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800D4D54: jr          $ra
    // 0x800D4D58: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
    return;
    // 0x800D4D58: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
;}
RECOMP_FUNC void func_800D4D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4D5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D4D60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4D64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D4D68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800D4D6C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800D4D70: jal         0x800EA600
    // 0x800D4D74: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    func_800EA600(rdram, ctx);
        goto after_0;
    // 0x800D4D74: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    after_0:
    // 0x800D4D78: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x800D4D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D4D80: jalr        $t9
    // 0x800D4D84: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800D4D84: nop

    after_1:
    // 0x800D4D88: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800D4D8C: jal         0x800C68AC
    // 0x800D4D90: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800C68AC(rdram, ctx);
        goto after_2;
    // 0x800D4D90: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800D4D94: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800D4D98: jal         0x800C68CC
    // 0x800D4D9C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    func_800C68CC(rdram, ctx);
        goto after_3;
    // 0x800D4D9C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x800D4DA0: jal         0x800C65E0
    // 0x800D4DA4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800C65E0(rdram, ctx);
        goto after_4;
    // 0x800D4DA4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_4:
    // 0x800D4DA8: jal         0x800EA614
    // 0x800D4DAC: nop

    func_800EA614(rdram, ctx);
        goto after_5;
    // 0x800D4DAC: nop

    after_5:
    // 0x800D4DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4DB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D4DB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D4DBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4DD0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D4DD4: lw          $t6, -0x4BE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4BE0);
    // 0x800D4DD8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D4DDC: beq         $t6, $zero, L_800D4E10
    if (ctx->r14 == 0) {
        // 0x800D4DE0: nop
    
            goto L_800D4E10;
    }
    // 0x800D4DE0: nop

    // 0x800D4DE4: beq         $a0, $at, L_800D4E0C
    if (ctx->r4 == ctx->r1) {
        // 0x800D4DE8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800D4E0C;
    }
    // 0x800D4DE8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800D4DEC: beq         $a0, $at, L_800D4E04
    if (ctx->r4 == ctx->r1) {
        // 0x800D4DF0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_800D4E04;
    }
    // 0x800D4DF0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800D4DF4: beql        $a0, $at, L_800D4E10
    if (ctx->r4 == ctx->r1) {
        // 0x800D4DF8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800D4E10;
    }
    goto skip_0;
    // 0x800D4DF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x800D4DFC: jr          $ra
    // 0x800D4E00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800D4E00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800D4E04:
    // 0x800D4E04: jr          $ra
    // 0x800D4E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D4E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D4E0C:
    // 0x800D4E0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800D4E10:
    // 0x800D4E10: jr          $ra
    // 0x800D4E14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800D4E14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_800D4E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4E1C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800D4E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4E24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800D4E28: bne         $a0, $at, L_800D4E34
    if (ctx->r4 != ctx->r1) {
        // 0x800D4E2C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800D4E34;
    }
    // 0x800D4E2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D4E30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800D4E34:
    // 0x800D4E34: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4E38: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    // 0x800D4E3C: bgezl       $t6, L_800D4E54
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800D4E40: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800D4E54;
    }
    goto skip_0;
    // 0x800D4E40: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x800D4E44: jal         0x800FC660
    // 0x800D4E48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800FC660(rdram, ctx);
        goto after_0;
    // 0x800D4E48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800D4E4C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800D4E50: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_800D4E54:
    // 0x800D4E54: jal         0x800D4E7C
    // 0x800D4E58: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800D4E7C(rdram, ctx);
        goto after_1;
    // 0x800D4E58: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x800D4E5C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4E60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800D4E64: jal         0x800D4FB8
    // 0x800D4E68: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    func_800D4FB8(rdram, ctx);
        goto after_2;
    // 0x800D4E68: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    after_2:
    // 0x800D4E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D4E74: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D4E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4E80: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800D4E84: bne         $a0, $at, L_800D4E90
    if (ctx->r4 != ctx->r1) {
        // 0x800D4E88: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D4E90;
    }
    // 0x800D4E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4E8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800D4E90:
    // 0x800D4E90: jal         0x800D4DD0
    // 0x800D4E94: nop

    func_800D4DD0(rdram, ctx);
        goto after_0;
    // 0x800D4E94: nop

    after_0:
    // 0x800D4E98: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D4E9C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x800D4EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4EA4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D4EA8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D4EAC: lbu         $v0, -0x49BF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49BF);
    // 0x800D4EB0: jr          $ra
    // 0x800D4EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D4EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D4EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4EBC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800D4EC0: bne         $a0, $at, L_800D4ECC
    if (ctx->r4 != ctx->r1) {
        // 0x800D4EC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D4ECC;
    }
    // 0x800D4EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4EC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800D4ECC:
    // 0x800D4ECC: jal         0x800D4DD0
    // 0x800D4ED0: nop

    func_800D4DD0(rdram, ctx);
        goto after_0;
    // 0x800D4ED0: nop

    after_0:
    // 0x800D4ED4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D4ED8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x800D4EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4EE0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D4EE4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D4EE8: lbu         $v0, -0x49BE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49BE);
    // 0x800D4EEC: jr          $ra
    // 0x800D4EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D4EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D4EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4EF4: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x800D4EF8: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x800D4EFC: beq         $at, $zero, L_800D4F90
    if (ctx->r1 == 0) {
        // 0x800D4F00: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800D4F90;
    }
    // 0x800D4F00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D4F04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D4F08: addu        $at, $at, $t6
    gpr jr_addend_800D4F10 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D4F0C: lw          $t6, 0x5B40($at)
    ctx->r14 = ADD32(ctx->r1, 0X5B40);
    // 0x800D4F10: jr          $t6
    // 0x800D4F14: nop

    switch (jr_addend_800D4F10 >> 2) {
        case 0: goto L_800D4F18; break;
        case 1: goto L_800D4F20; break;
        case 2: goto L_800D4F90; break;
        case 3: goto L_800D4F90; break;
        case 4: goto L_800D4F90; break;
        case 5: goto L_800D4F28; break;
        case 6: goto L_800D4F30; break;
        case 7: goto L_800D4F38; break;
        case 8: goto L_800D4F90; break;
        case 9: goto L_800D4F40; break;
        case 10: goto L_800D4F48; break;
        case 11: goto L_800D4F50; break;
        case 12: goto L_800D4F58; break;
        case 13: goto L_800D4F60; break;
        case 14: goto L_800D4F68; break;
        case 15: goto L_800D4F70; break;
        case 16: goto L_800D4F78; break;
        case 17: goto L_800D4F80; break;
        case 18: goto L_800D4F88; break;
        default: switch_error(__func__, 0x800D4F10, 0x80125B40);
    }
    // 0x800D4F14: nop

L_800D4F18:
    // 0x800D4F18: jr          $ra
    // 0x800D4F1C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x800D4F1C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_800D4F20:
    // 0x800D4F20: jr          $ra
    // 0x800D4F24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x800D4F24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_800D4F28:
    // 0x800D4F28: jr          $ra
    // 0x800D4F2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800D4F2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_800D4F30:
    // 0x800D4F30: jr          $ra
    // 0x800D4F34: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x800D4F34: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_800D4F38:
    // 0x800D4F38: jr          $ra
    // 0x800D4F3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x800D4F3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_800D4F40:
    // 0x800D4F40: jr          $ra
    // 0x800D4F44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800D4F44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_800D4F48:
    // 0x800D4F48: jr          $ra
    // 0x800D4F4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800D4F4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800D4F50:
    // 0x800D4F50: jr          $ra
    // 0x800D4F54: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x800D4F54: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_800D4F58:
    // 0x800D4F58: jr          $ra
    // 0x800D4F5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800D4F5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_800D4F60:
    // 0x800D4F60: jr          $ra
    // 0x800D4F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D4F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D4F68:
    // 0x800D4F68: jr          $ra
    // 0x800D4F6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800D4F6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_800D4F70:
    // 0x800D4F70: jr          $ra
    // 0x800D4F74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D4F74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D4F78:
    // 0x800D4F78: jr          $ra
    // 0x800D4F7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D4F7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D4F80:
    // 0x800D4F80: jr          $ra
    // 0x800D4F84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800D4F84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_800D4F88:
    // 0x800D4F88: jr          $ra
    // 0x800D4F8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D4F8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D4F90:
    // 0x800D4F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D4F94: jr          $ra
    // 0x800D4F98: nop

    return;
    // 0x800D4F98: nop

;}
RECOMP_FUNC void func_800D4F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4F9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D4FA0: bne         $a0, $at, L_800D4FB0
    if (ctx->r4 != ctx->r1) {
            // 0x800D4FA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_800D4FB0(rdram, ctx);
    return;
    }
    // 0x800D4FA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800D4FA8: jr          $ra
    // 0x800D4FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800D4FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800D4FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4FB0: jr          $ra
    // 0x800D4FB4: nop

    return;
    // 0x800D4FB4: nop

;}
RECOMP_FUNC void func_800D4FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D4FBC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800D4FC0: bne         $a0, $at, L_800D4FCC
    if (ctx->r4 != ctx->r1) {
        // 0x800D4FC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D4FCC;
    }
    // 0x800D4FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4FC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800D4FCC:
    // 0x800D4FCC: jal         0x800D4DD0
    // 0x800D4FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D4DD0(rdram, ctx);
        goto after_0;
    // 0x800D4FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D4FD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4FD8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800D4FDC: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800D4FE0: bgez        $a1, L_800D5004
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800D4FE4: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_800D5004;
    }
    // 0x800D4FE4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800D4FE8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800D4FEC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D4FF0: addiu       $t7, $t7, -0x49C0
    ctx->r15 = ADD32(ctx->r15, -0X49C0);
    // 0x800D4FF4: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x800D4FF8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800D4FFC: b           L_800D5020
    // 0x800D5000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_800D5020;
    // 0x800D5000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800D5004:
    // 0x800D5004: addiu       $t9, $t9, -0x49C0
    ctx->r25 = ADD32(ctx->r25, -0X49C0);
    // 0x800D5008: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800D500C: lbu         $a0, 0x2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2);
    // 0x800D5010: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800D5014: beql        $at, $zero, L_800D5024
    if (ctx->r1 == 0) {
        // 0x800D5018: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800D5024;
    }
    goto skip_0;
    // 0x800D5018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800D501C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_800D5020:
    // 0x800D5020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800D5024:
    // 0x800D5024: sb          $a1, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r5;
    // 0x800D5028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D502C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D5034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D5038: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800D503C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D5040: bne         $a1, $at, L_800D504C
    if (ctx->r5 != ctx->r1) {
        // 0x800D5044: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_800D504C;
    }
    // 0x800D5044: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800D5048: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_800D504C:
    // 0x800D504C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800D5050: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D5054: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800D5058: addiu       $v1, $v1, -0x49C0
    ctx->r3 = ADD32(ctx->r3, -0X49C0);
    // 0x800D505C: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x800D5060: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x800D5064: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D5068: mflo        $t6
    ctx->r14 = lo;
    // 0x800D506C: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x800D5070: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x800D5074: beq         $at, $zero, L_800D5160
    if (ctx->r1 == 0) {
        // 0x800D5078: lbu         $a1, 0x2($v0)
        ctx->r5 = MEM_BU(ctx->r2, 0X2);
            goto L_800D5160;
    }
    // 0x800D5078: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x800D507C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D5080: addu        $at, $at, $t7
    gpr jr_addend_800D5088 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D5084: lw          $t7, 0x5B8C($at)
    ctx->r15 = ADD32(ctx->r1, 0X5B8C);
    // 0x800D5088: jr          $t7
    // 0x800D508C: nop

    switch (jr_addend_800D5088 >> 2) {
        case 0: goto L_800D5090; break;
        case 1: goto L_800D50C8; break;
        case 2: goto L_800D5160; break;
        case 3: goto L_800D5160; break;
        case 4: goto L_800D5160; break;
        case 5: goto L_800D50D0; break;
        case 6: goto L_800D50D0; break;
        case 7: goto L_800D50D0; break;
        case 8: goto L_800D5160; break;
        case 9: goto L_800D50D8; break;
        case 10: goto L_800D50D8; break;
        case 11: goto L_800D50D0; break;
        case 12: goto L_800D50D0; break;
        case 13: goto L_800D50D0; break;
        case 14: goto L_800D50D0; break;
        case 15: goto L_800D50D0; break;
        case 16: goto L_800D50D0; break;
        case 17: goto L_800D50D0; break;
        case 18: goto L_800D50D0; break;
        default: switch_error(__func__, 0x800D5088, 0x80125B8C);
    }
    // 0x800D508C: nop

L_800D5090:
    // 0x800D5090: sltiu       $at, $a0, 0x14
    ctx->r1 = ctx->r4 < 0X14 ? 1 : 0;
    // 0x800D5094: beq         $at, $zero, L_800D5160
    if (ctx->r1 == 0) {
        // 0x800D5098: sll         $t8, $a0, 2
        ctx->r24 = S32(ctx->r4 << 2);
            goto L_800D5160;
    }
    // 0x800D5098: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800D509C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800D50A0: addu        $at, $at, $t8
    gpr jr_addend_800D50A8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D50A4: lw          $t8, 0x5BD8($at)
    ctx->r24 = ADD32(ctx->r1, 0X5BD8);
    // 0x800D50A8: jr          $t8
    // 0x800D50AC: nop

    switch (jr_addend_800D50A8 >> 2) {
        case 0: goto L_800D50B0; break;
        case 1: goto L_800D5160; break;
        case 2: goto L_800D50B0; break;
        case 3: goto L_800D5160; break;
        case 4: goto L_800D5160; break;
        case 5: goto L_800D5160; break;
        case 6: goto L_800D50B0; break;
        case 7: goto L_800D50B0; break;
        case 8: goto L_800D50B0; break;
        case 9: goto L_800D5160; break;
        case 10: goto L_800D50B8; break;
        case 11: goto L_800D50B8; break;
        case 12: goto L_800D50B0; break;
        case 13: goto L_800D5160; break;
        case 14: goto L_800D5160; break;
        case 15: goto L_800D50B0; break;
        case 16: goto L_800D50B0; break;
        case 17: goto L_800D5160; break;
        case 18: goto L_800D50B0; break;
        case 19: goto L_800D50B0; break;
        default: switch_error(__func__, 0x800D50A8, 0x80125BD8);
    }
    // 0x800D50AC: nop

L_800D50B0:
    // 0x800D50B0: b           L_800D5160
    // 0x800D50B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
        goto L_800D5160;
    // 0x800D50B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_800D50B8:
    // 0x800D50B8: lbu         $t9, 0x22($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X22);
    // 0x800D50BC: lbu         $t1, 0x1F($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X1F);
    // 0x800D50C0: b           L_800D5160
    // 0x800D50C4: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
        goto L_800D5160;
    // 0x800D50C4: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
L_800D50C8:
    // 0x800D50C8: b           L_800D5160
    // 0x800D50CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_800D5160;
    // 0x800D50CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800D50D0:
    // 0x800D50D0: b           L_800D5160
    // 0x800D50D4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
        goto L_800D5160;
    // 0x800D50D4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_800D50D8:
    // 0x800D50D8: sltiu       $t2, $a0, 0x1
    ctx->r10 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x800D50DC: beq         $t2, $zero, L_800D5110
    if (ctx->r10 == 0) {
        // 0x800D50E0: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800D5110;
    }
    // 0x800D50E0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800D50E4: bne         $a3, $at, L_800D50F4
    if (ctx->r7 != ctx->r1) {
        // 0x800D50E8: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800D50F4;
    }
    // 0x800D50E8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800D50EC: b           L_800D50F8
    // 0x800D50F0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_800D50F8;
    // 0x800D50F0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_800D50F4:
    // 0x800D50F4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_800D50F8:
    // 0x800D50F8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x800D50FC: jal         0x800D4FB8
    // 0x800D5100: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800D4FB8(rdram, ctx);
        goto after_0;
    // 0x800D5100: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x800D5104: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5108: b           L_800D5160
    // 0x800D510C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
        goto L_800D5160;
    // 0x800D510C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
L_800D5110:
    // 0x800D5110: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800D5114: mflo        $t3
    ctx->r11 = lo;
    // 0x800D5118: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x800D511C: lbu         $v0, 0x1($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X1);
    // 0x800D5120: bgez        $v0, L_800D5130
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800D5124: sra         $a2, $v0, 1
        ctx->r6 = S32(SIGNED(ctx->r2) >> 1);
            goto L_800D5130;
    }
    // 0x800D5124: sra         $a2, $v0, 1
    ctx->r6 = S32(SIGNED(ctx->r2) >> 1);
    // 0x800D5128: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x800D512C: sra         $a2, $at, 1
    ctx->r6 = S32(SIGNED(ctx->r1) >> 1);
L_800D5130:
    // 0x800D5130: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800D5134: bne         $a3, $at, L_800D5154
    if (ctx->r7 != ctx->r1) {
        // 0x800D5138: nop
    
            goto L_800D5154;
    }
    // 0x800D5138: nop

    // 0x800D513C: bgez        $v0, L_800D5150
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800D5140: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_800D5150;
    }
    // 0x800D5140: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x800D5144: beq         $t5, $zero, L_800D5150
    if (ctx->r13 == 0) {
        // 0x800D5148: nop
    
            goto L_800D5150;
    }
    // 0x800D5148: nop

    // 0x800D514C: addiu       $t5, $t5, -0x2
    ctx->r13 = ADD32(ctx->r13, -0X2);
L_800D5150:
    // 0x800D5150: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
L_800D5154:
    // 0x800D5154: bnel        $a2, $zero, L_800D5164
    if (ctx->r6 != 0) {
        // 0x800D5158: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_800D5164;
    }
    goto skip_0;
    // 0x800D5158: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x800D515C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800D5160:
    // 0x800D5160: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_800D5164:
    // 0x800D5164: jal         0x800D4FB8
    // 0x800D5168: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800D4FB8(rdram, ctx);
        goto after_1;
    // 0x800D5168: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x800D516C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D5170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D5174: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D517C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D517C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D5180: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D5184: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800D5188: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800D518C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800D5190: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800D5194: jal         0x800883F8
    // 0x800D5198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    _gcextra_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800D5198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800D519C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D51A0: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800D51A4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800D51A8: sw          $zero, -0x4BE0($at)
    MEM_W(-0X4BE0, ctx->r1) = 0;
    // 0x800D51AC: addiu       $s2, $s2, -0x49C0
    ctx->r18 = ADD32(ctx->r18, -0X49C0);
    // 0x800D51B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800D51B4: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
L_800D51B8:
    // 0x800D51B8: jal         0x800D4EF4
    // 0x800D51BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D4EF4(rdram, ctx);
        goto after_1;
    // 0x800D51BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800D51C0: beq         $v0, $zero, L_800D51DC
    if (ctx->r2 == 0) {
        // 0x800D51C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800D51DC;
    }
    // 0x800D51C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D51C8: jal         0x800D4F9C
    // 0x800D51CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D4F9C(rdram, ctx);
        goto after_2;
    // 0x800D51CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x800D51D0: beql        $v0, $zero, L_800D51E0
    if (ctx->r2 == 0) {
        // 0x800D51D4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800D51E0;
    }
    goto skip_0;
    // 0x800D51D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800D51D8: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
L_800D51DC:
    // 0x800D51DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800D51E0:
    // 0x800D51E0: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x800D51E4: sb          $s0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r16;
    // 0x800D51E8: bne         $s1, $s4, L_800D51B8
    if (ctx->r17 != ctx->r20) {
        // 0x800D51EC: sb          $s0, -0x2($s2)
        MEM_B(-0X2, ctx->r18) = ctx->r16;
            goto L_800D51B8;
    }
    // 0x800D51EC: sb          $s0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r16;
    // 0x800D51F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D51F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D51F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800D51FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800D5200: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800D5204: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800D5208: jr          $ra
    // 0x800D520C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D520C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D5210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5210: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800D5214: bne         $a0, $at, L_800D5220
    if (ctx->r4 != ctx->r1) {
        // 0x800D5218: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_800D5220;
    }
    // 0x800D5218: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800D521C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800D5220:
    // 0x800D5220: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800D5224: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800D5228: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800D522C: jr          $ra
    // 0x800D5230: lbu         $v0, -0x49C0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49C0);
    return;
    // 0x800D5230: lbu         $v0, -0x49C0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49C0);
;}
RECOMP_FUNC void func_800D5234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5234: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D5238: jr          $ra
    // 0x800D523C: sw          $a0, -0x4BE0($at)
    MEM_W(-0X4BE0, ctx->r1) = ctx->r4;
    return;
    // 0x800D523C: sw          $a0, -0x4BE0($at)
    MEM_W(-0X4BE0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800D5240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5240: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D5244: jr          $ra
    // 0x800D5248: lw          $v0, -0x4BE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4BE0);
    return;
    // 0x800D5248: lw          $v0, -0x4BE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4BE0);
;}
RECOMP_FUNC void func_800D5250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D5254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D5258: jal         0x800D52B0
    // 0x800D525C: nop

    func_800D52B0(rdram, ctx);
        goto after_0;
    // 0x800D525C: nop

    after_0:
    // 0x800D5260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D5264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D5268: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D5270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5270: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D5274: jr          $ra
    // 0x800D5278: sb          $zero, -0x4BCF($at)
    MEM_B(-0X4BCF, ctx->r1) = 0;
    return;
    // 0x800D5278: sb          $zero, -0x4BCF($at)
    MEM_B(-0X4BCF, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800D527C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D527C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D5280: addiu       $v0, $v0, -0x4BD0
    ctx->r2 = ADD32(ctx->r2, -0X4BD0);
    // 0x800D5284: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x800D5288: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D528C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x800D5290: jr          $ra
    // 0x800D5294: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    return;
    // 0x800D5294: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800D5298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5298: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D529C: jr          $ra
    // 0x800D52A0: lbu         $v0, -0x4BCF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4BCF);
    return;
    // 0x800D52A0: lbu         $v0, -0x4BCF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4BCF);
;}
RECOMP_FUNC void func_800D52A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D52A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D52A8: jr          $ra
    // 0x800D52AC: lbu         $v0, -0x4BD0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4BD0);
    return;
    // 0x800D52AC: lbu         $v0, -0x4BD0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4BD0);
;}
RECOMP_FUNC void func_800D52B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D52B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D52B4: addiu       $v0, $v0, -0x4BD0
    ctx->r2 = ADD32(ctx->r2, -0X4BD0);
    // 0x800D52B8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800D52BC: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800D52C0: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x800D52C4: jr          $ra
    // 0x800D52C8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    return;
    // 0x800D52C8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800D52CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D52CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D52D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D52D4: jal         0x800D52B0
    // 0x800D52D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D52B0(rdram, ctx);
        goto after_0;
    // 0x800D52D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D52DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D52E0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800D52E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D52E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D52EC: jr          $ra
    // 0x800D52F0: sh          $t6, -0x4BCE($at)
    MEM_H(-0X4BCE, ctx->r1) = ctx->r14;
    return;
    // 0x800D52F0: sh          $t6, -0x4BCE($at)
    MEM_H(-0X4BCE, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800D52F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D52F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D52F8: jr          $ra
    // 0x800D52FC: lh          $v0, -0x4BCE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X4BCE);
    return;
    // 0x800D52FC: lh          $v0, -0x4BCE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X4BCE);
;}
RECOMP_FUNC void func_800D5300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5300: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800D5304: jr          $ra
    // 0x800D5308: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x800D5308: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_800D530C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D530C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800D5310: jr          $ra
    // 0x800D5314: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x800D5314: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_800D5318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5318: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D531C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D5320: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800D5324: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800D5328: jal         0x80088BB8
    // 0x800D532C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    _gspropctrl_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800D532C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x800D5330: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D5334: beq         $v0, $at, L_800D5354
    if (ctx->r2 == ctx->r1) {
        // 0x800D5338: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800D5354;
    }
    // 0x800D5338: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D533C: beq         $v0, $at, L_800D53E8
    if (ctx->r2 == ctx->r1) {
        // 0x800D5340: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800D53E8;
    }
    // 0x800D5340: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800D5344: beq         $v0, $at, L_800D53B4
    if (ctx->r2 == ctx->r1) {
        // 0x800D5348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D53B4;
    }
    // 0x800D5348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D534C: b           L_800D5414
    // 0x800D5350: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800D5414;
    // 0x800D5350: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D5354:
    // 0x800D5354: jal         0x8001211C
    // 0x800D5358: nop

    func_8001211C(rdram, ctx);
        goto after_1;
    // 0x800D5358: nop

    after_1:
    // 0x800D535C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D5360: jal         0x80088BC0
    // 0x800D5364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gspropctrl_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x800D5364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800D5368: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D536C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800D5370: beql        $t6, $t7, L_800D53A4
    if (ctx->r14 == ctx->r15) {
        // 0x800D5374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800D53A4;
    }
    goto skip_0;
    // 0x800D5374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800D5378: jal         0x80088BC8
    // 0x800D537C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gspropctrl_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x800D537C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800D5380: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800D5384: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800D5388: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D538C: lw          $t9, -0x4980($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4980);
    // 0x800D5390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D5394: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800D5398: jalr        $t9
    // 0x800D539C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x800D539C: nop

    after_4:
    // 0x800D53A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800D53A4:
    // 0x800D53A4: jal         0x80088BD0
    // 0x800D53A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _gspropctrl_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x800D53A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x800D53AC: b           L_800D5414
    // 0x800D53B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800D5414;
    // 0x800D53B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D53B4:
    // 0x800D53B4: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x800D53B8: lui         $at, 0x7F
    ctx->r1 = S32(0X7F << 16);
    // 0x800D53BC: lhu         $a1, 0x8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X8);
    // 0x800D53C0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D53C4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800D53C8: lbu         $a3, 0xB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XB);
    // 0x800D53CC: and         $t0, $a2, $at
    ctx->r8 = ctx->r6 & ctx->r1;
    // 0x800D53D0: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800D53D4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    // 0x800D53D8: jal         0x80087AD8
    // 0x800D53DC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    _gcsectionskip_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x800D53DC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x800D53E0: b           L_800D5414
    // 0x800D53E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800D5414;
    // 0x800D53E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D53E8:
    // 0x800D53E8: jal         0x80088BC8
    // 0x800D53EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gspropctrl_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x800D53EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800D53F0: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x800D53F4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800D53F8: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x800D53FC: lw          $t9, -0x4840($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4840);
    // 0x800D5400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800D5404: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800D5408: jalr        $t9
    // 0x800D540C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x800D540C: nop

    after_8:
    // 0x800D5410: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800D5414:
    // 0x800D5414: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800D5418: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800D541C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D5424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5424: jr          $ra
    // 0x800D5428: addiu       $v0, $a0, -0x16
    ctx->r2 = ADD32(ctx->r4, -0X16);
    return;
    // 0x800D5428: addiu       $v0, $a0, -0x16
    ctx->r2 = ADD32(ctx->r4, -0X16);
;}
RECOMP_FUNC void func_800D542C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D542C: jr          $ra
    // 0x800D5430: addiu       $v0, $a0, 0x9A
    ctx->r2 = ADD32(ctx->r4, 0X9A);
    return;
    // 0x800D5430: addiu       $v0, $a0, 0x9A
    ctx->r2 = ADD32(ctx->r4, 0X9A);
;}
RECOMP_FUNC void func_800D5440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D5444: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800D5448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D544C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D5450: lw          $a0, -0x4810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4810);
    // 0x800D5454: jal         0x800B296C
    // 0x800D5458: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800B296C(rdram, ctx);
        goto after_0;
    // 0x800D5458: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800D545C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D5460: lw          $a0, -0x4810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4810);
    // 0x800D5464: jal         0x800B28C4
    // 0x800D5468: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800D5468: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x800D546C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800D5470: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800D5474: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800D5478: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800D547C: beq         $at, $zero, L_800D54AC
    if (ctx->r1 == 0) {
        // 0x800D5480: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800D54AC;
    }
    // 0x800D5480: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D5484: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800D5488: beql        $a2, $t6, L_800D54B0
    if (ctx->r6 == ctx->r14) {
        // 0x800D548C: sltu        $at, $v1, $a1
        ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
            goto L_800D54B0;
    }
    goto skip_0;
    // 0x800D548C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    skip_0:
    // 0x800D5490: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_800D5494:
    // 0x800D5494: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x800D5498: beql        $at, $zero, L_800D54B0
    if (ctx->r1 == 0) {
        // 0x800D549C: sltu        $at, $v1, $a1
        ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
            goto L_800D54B0;
    }
    goto skip_1;
    // 0x800D549C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    skip_1:
    // 0x800D54A0: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800D54A4: bnel        $a2, $t7, L_800D5494
    if (ctx->r6 != ctx->r15) {
        // 0x800D54A8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800D5494;
    }
    goto skip_2;
    // 0x800D54A8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    skip_2:
L_800D54AC:
    // 0x800D54AC: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
L_800D54B0:
    // 0x800D54B0: beq         $at, $zero, L_800D54C8
    if (ctx->r1 == 0) {
        // 0x800D54B4: addiu       $a0, $a0, -0x4810
        ctx->r4 = ADD32(ctx->r4, -0X4810);
            goto L_800D54C8;
    }
    // 0x800D54B4: addiu       $a0, $a0, -0x4810
    ctx->r4 = ADD32(ctx->r4, -0X4810);
    // 0x800D54B8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800D54BC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800D54C0: b           L_800D54E0
    // 0x800D54C4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_800D54E0;
    // 0x800D54C4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_800D54C8:
    // 0x800D54C8: jal         0x800B2974
    // 0x800D54CC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800B2974(rdram, ctx);
        goto after_2;
    // 0x800D54CC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x800D54D0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800D54D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D54D8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800D54DC: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
L_800D54E0:
    // 0x800D54E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D54E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D54E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D54F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D54F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D54F4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D54F8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D54FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D5500: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800D5504: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800D5508: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800D550C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D5510: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D5514: addiu       $s3, $s3, -0x4808
    ctx->r19 = ADD32(ctx->r19, -0X4808);
    // 0x800D5518: addiu       $s2, $s2, -0x4810
    ctx->r18 = ADD32(ctx->r18, -0X4810);
L_800D551C:
    // 0x800D551C: jal         0x800B296C
    // 0x800D5520: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_800B296C(rdram, ctx);
        goto after_0;
    // 0x800D5520: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_0:
    // 0x800D5524: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D5528: jal         0x800B28C4
    // 0x800D552C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800D552C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_1:
    // 0x800D5530: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x800D5534: beq         $at, $zero, L_800D5564
    if (ctx->r1 == 0) {
        // 0x800D5538: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800D5564;
    }
    // 0x800D5538: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800D553C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800D5540: beql        $s1, $t6, L_800D5568
    if (ctx->r17 == ctx->r14) {
        // 0x800D5544: sltu        $at, $v1, $s0
        ctx->r1 = ctx->r3 < ctx->r16 ? 1 : 0;
            goto L_800D5568;
    }
    goto skip_0;
    // 0x800D5544: sltu        $at, $v1, $s0
    ctx->r1 = ctx->r3 < ctx->r16 ? 1 : 0;
    skip_0:
    // 0x800D5548: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_800D554C:
    // 0x800D554C: sltu        $at, $v1, $s0
    ctx->r1 = ctx->r3 < ctx->r16 ? 1 : 0;
    // 0x800D5550: beql        $at, $zero, L_800D5568
    if (ctx->r1 == 0) {
        // 0x800D5554: sltu        $at, $v1, $s0
        ctx->r1 = ctx->r3 < ctx->r16 ? 1 : 0;
            goto L_800D5568;
    }
    goto skip_1;
    // 0x800D5554: sltu        $at, $v1, $s0
    ctx->r1 = ctx->r3 < ctx->r16 ? 1 : 0;
    skip_1:
    // 0x800D5558: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800D555C: bnel        $s1, $t7, L_800D554C
    if (ctx->r17 != ctx->r15) {
        // 0x800D5560: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800D554C;
    }
    goto skip_2;
    // 0x800D5560: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    skip_2:
L_800D5564:
    // 0x800D5564: sltu        $at, $v1, $s0
    ctx->r1 = ctx->r3 < ctx->r16 ? 1 : 0;
L_800D5568:
    // 0x800D5568: beq         $at, $zero, L_800D5578
    if (ctx->r1 == 0) {
        // 0x800D556C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800D5578;
    }
    // 0x800D556C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800D5570: b           L_800D5584
    // 0x800D5574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800D5584;
    // 0x800D5574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D5578:
    // 0x800D5578: bne         $s2, $s3, L_800D551C
    if (ctx->r18 != ctx->r19) {
        // 0x800D557C: nop
    
            goto L_800D551C;
    }
    // 0x800D557C: nop

    // 0x800D5580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800D5584:
    // 0x800D5584: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D5588: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D558C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D5590: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5594: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D5598: jr          $ra
    // 0x800D559C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D559C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D55A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D55A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D55A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D55A8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800D55AC: jal         0x800B2D70
    // 0x800D55B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800B2D70(rdram, ctx);
        goto after_0;
    // 0x800D55B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x800D55B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D55B8: sw          $v0, -0x4810($at)
    MEM_W(-0X4810, ctx->r1) = ctx->r2;
    // 0x800D55BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800D55C0: jal         0x800B2D70
    // 0x800D55C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800B2D70(rdram, ctx);
        goto after_1;
    // 0x800D55C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800D55C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D55CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D55D0: sw          $v0, -0x480C($at)
    MEM_W(-0X480C, ctx->r1) = ctx->r2;
    // 0x800D55D4: jr          $ra
    // 0x800D55D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D55D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D55DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D55DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D55E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800D55E4: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800D55E8: addiu       $s3, $s3, -0x4810
    ctx->r19 = ADD32(ctx->r19, -0X4810);
    // 0x800D55EC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800D55F0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x800D55F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D55F8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800D55FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800D5600: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800D5604: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x800D5608: jal         0x800B296C
    // 0x800D560C: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    func_800B296C(rdram, ctx);
        goto after_0;
    // 0x800D560C: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    after_0:
    // 0x800D5610: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800D5614: jal         0x800B28C4
    // 0x800D5618: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800D5618: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x800D561C: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x800D5620: beq         $at, $zero, L_800D5664
    if (ctx->r1 == 0) {
        // 0x800D5624: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800D5664;
    }
    // 0x800D5624: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D5628: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
L_800D562C:
    // 0x800D562C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800D5630: blezl       $t7, L_800D5658
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800D5634: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_800D5658;
    }
    goto skip_0;
    // 0x800D5634: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_0:
L_800D5638:
    // 0x800D5638: jal         0x800D56C4
    // 0x800D563C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_800D56C4(rdram, ctx);
        goto after_2;
    // 0x800D563C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_2:
    // 0x800D5640: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800D5644: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800D5648: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800D564C: bne         $at, $zero, L_800D5638
    if (ctx->r1 != 0) {
        // 0x800D5650: nop
    
            goto L_800D5638;
    }
    // 0x800D5650: nop

    // 0x800D5654: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_800D5658:
    // 0x800D5658: sltu        $at, $s1, $s2
    ctx->r1 = ctx->r17 < ctx->r18 ? 1 : 0;
    // 0x800D565C: bnel        $at, $zero, L_800D562C
    if (ctx->r1 != 0) {
        // 0x800D5660: lw          $t7, 0x0($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X0);
            goto L_800D562C;
    }
    goto skip_1;
    // 0x800D5660: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    skip_1:
L_800D5664:
    // 0x800D5664: jal         0x800B28B8
    // 0x800D5668: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_800B28B8(rdram, ctx);
        goto after_3;
    // 0x800D5668: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_3:
    // 0x800D566C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D5670: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800D5674: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800D5678: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800D567C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800D5680: jr          $ra
    // 0x800D5684: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D5684: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D5688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D568C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D5690: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800D5694: jal         0x800B2F58
    // 0x800D5698: lw          $a0, -0x4810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4810);
    func_800B2F58(rdram, ctx);
        goto after_0;
    // 0x800D5698: lw          $a0, -0x4810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4810);
    after_0:
    // 0x800D569C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D56A0: addiu       $v1, $v1, -0x4810
    ctx->r3 = ADD32(ctx->r3, -0X4810);
    // 0x800D56A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800D56A8: jal         0x800B2F58
    // 0x800D56AC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    func_800B2F58(rdram, ctx);
        goto after_1;
    // 0x800D56AC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    after_1:
    // 0x800D56B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D56B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D56B8: sw          $v0, -0x480C($at)
    MEM_W(-0X480C, ctx->r1) = ctx->r2;
    // 0x800D56BC: jr          $ra
    // 0x800D56C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800D56C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800D56C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D56C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D56C8: beq         $a0, $zero, L_800D57F0
    if (ctx->r4 == 0) {
        // 0x800D56CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800D57F0;
    }
    // 0x800D56CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D56D0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800D56D4: addiu       $t1, $t1, -0x481C
    ctx->r9 = ADD32(ctx->r9, -0X481C);
    // 0x800D56D8: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x800D56DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800D56E0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D56E4: blez        $v0, L_800D5720
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800D56E8: lui         $t2, 0x8013
        ctx->r10 = S32(0X8013 << 16);
            goto L_800D5720;
    }
    // 0x800D56E8: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800D56EC: lw          $t6, -0x4BB0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4BB0);
    // 0x800D56F0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D56F4: addiu       $a1, $a1, -0x4BB0
    ctx->r5 = ADD32(ctx->r5, -0X4BB0);
    // 0x800D56F8: beq         $a0, $t6, L_800D5720
    if (ctx->r4 == ctx->r14) {
        // 0x800D56FC: nop
    
            goto L_800D5720;
    }
    // 0x800D56FC: nop

    // 0x800D5700: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800D5704:
    // 0x800D5704: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800D5708: beq         $at, $zero, L_800D5720
    if (ctx->r1 == 0) {
        // 0x800D570C: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_800D5720;
    }
    // 0x800D570C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800D5710: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800D5714: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800D5718: bnel        $a0, $t9, L_800D5704
    if (ctx->r4 != ctx->r25) {
        // 0x800D571C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800D5704;
    }
    goto skip_0;
    // 0x800D571C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_800D5720:
    // 0x800D5720: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D5724: bne         $v1, $v0, L_800D5734
    if (ctx->r3 != ctx->r2) {
        // 0x800D5728: addiu       $a1, $a1, -0x4BB0
        ctx->r5 = ADD32(ctx->r5, -0X4BB0);
            goto L_800D5734;
    }
    // 0x800D5728: addiu       $a1, $a1, -0x4BB0
    ctx->r5 = ADD32(ctx->r5, -0X4BB0);
    // 0x800D572C: b           L_800D57F4
    // 0x800D5730: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800D57F4;
    // 0x800D5730: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800D5734:
    // 0x800D5734: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800D5738: addiu       $t2, $t2, -0x49A8
    ctx->r10 = ADD32(ctx->r10, -0X49A8);
    // 0x800D573C: sb          $v1, -0x481B($at)
    MEM_B(-0X481B, ctx->r1) = ctx->r3;
    // 0x800D5740: addu        $a3, $v1, $t2
    ctx->r7 = ADD32(ctx->r3, ctx->r10);
    // 0x800D5744: lbu         $a2, 0x0($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X0);
    // 0x800D5748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D574C: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x800D5750: bne         $a2, $at, L_800D57E0
    if (ctx->r6 != ctx->r1) {
        // 0x800D5754: addu        $t4, $a1, $t3
        ctx->r12 = ADD32(ctx->r5, ctx->r11);
            goto L_800D57E0;
    }
    // 0x800D5754: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x800D5758: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x800D575C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800D5760: jal         0x8001B084
    // 0x800D5764: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800D5764: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x800D5768: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800D576C: addiu       $t1, $t1, -0x481C
    ctx->r9 = ADD32(ctx->r9, -0X481C);
    // 0x800D5770: lbu         $a2, 0x0($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X0);
    // 0x800D5774: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D5778: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D577C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800D5780: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x800D5784: andi        $a0, $t5, 0xFF
    ctx->r4 = ctx->r13 & 0XFF;
    // 0x800D5788: addiu       $a1, $a1, -0x4BB0
    ctx->r5 = ADD32(ctx->r5, -0X4BB0);
    // 0x800D578C: sb          $t5, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r13;
    // 0x800D5790: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D5794: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800D5798: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800D579C: lbu         $t6, -0x49A8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X49A8);
    // 0x800D57A0: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800D57A4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800D57A8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D57AC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800D57B0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800D57B4: addiu       $t0, $t0, -0x4920
    ctx->r8 = ADD32(ctx->r8, -0X4920);
    // 0x800D57B8: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x800D57BC: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x800D57C0: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x800D57C4: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x800D57C8: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x800D57CC: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800D57D0: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x800D57D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D57D8: b           L_800D57F4
    // 0x800D57DC: sh          $t5, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r13;
        goto L_800D57F4;
    // 0x800D57DC: sh          $t5, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r13;
L_800D57E0:
    // 0x800D57E0: addiu       $t8, $a2, -0x1
    ctx->r24 = ADD32(ctx->r6, -0X1);
    // 0x800D57E4: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x800D57E8: b           L_800D57F4
    // 0x800D57EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800D57F4;
    // 0x800D57EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800D57F0:
    // 0x800D57F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_800D57F4:
    // 0x800D57F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D57F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D57FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D5804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5804: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D5808: lbu         $v0, -0x481C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X481C);
    // 0x800D580C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D5810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D5814: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800D5818: blez        $v0, L_800D5858
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800D581C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800D5858;
    }
    // 0x800D581C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800D5820: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D5824: lw          $t6, -0x4BB0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4BB0);
    // 0x800D5828: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D582C: addiu       $a1, $a1, -0x4BB0
    ctx->r5 = ADD32(ctx->r5, -0X4BB0);
    // 0x800D5830: beq         $a0, $t6, L_800D5858
    if (ctx->r4 == ctx->r14) {
        // 0x800D5834: nop
    
            goto L_800D5858;
    }
    // 0x800D5834: nop

    // 0x800D5838: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800D583C:
    // 0x800D583C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800D5840: beq         $at, $zero, L_800D5858
    if (ctx->r1 == 0) {
        // 0x800D5844: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_800D5858;
    }
    // 0x800D5844: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800D5848: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800D584C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800D5850: bnel        $a0, $t9, L_800D583C
    if (ctx->r4 != ctx->r25) {
        // 0x800D5854: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800D583C;
    }
    goto skip_0;
    // 0x800D5854: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_800D5858:
    // 0x800D5858: bnel        $v1, $v0, L_800D586C
    if (ctx->r3 != ctx->r2) {
        // 0x800D585C: sw          $v1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r3;
            goto L_800D586C;
    }
    goto skip_1;
    // 0x800D585C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    skip_1:
    // 0x800D5860: b           L_800D589C
    // 0x800D5864: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_800D589C;
    // 0x800D5864: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800D5868: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_800D586C:
    // 0x800D586C: jal         0x8001BAFC
    // 0x800D5870: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    defrag(rdram, ctx);
        goto after_0;
    // 0x800D5870: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800D5874: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800D5878: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D587C: addiu       $a1, $a1, -0x4BB0
    ctx->r5 = ADD32(ctx->r5, -0X4BB0);
    // 0x800D5880: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5884: beq         $v0, $a0, L_800D5898
    if (ctx->r2 == ctx->r4) {
        // 0x800D5888: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800D5898;
    }
    // 0x800D5888: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800D588C: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x800D5890: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x800D5894: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_800D5898:
    // 0x800D5898: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_800D589C:
    // 0x800D589C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D58A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D58A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D58AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D58AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D58B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D58B4: jal         0x800D5688
    // 0x800D58B8: nop

    func_800D5688(rdram, ctx);
        goto after_0;
    // 0x800D58B8: nop

    after_0:
    // 0x800D58BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D58C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D58C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D58CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D58CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D58D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D58D4: jal         0x8001A2B0
    // 0x800D58D8: nop

    func_8001A2B0(rdram, ctx);
        goto after_0;
    // 0x800D58D8: nop

    after_0:
    // 0x800D58DC: jal         0x800D55DC
    // 0x800D58E0: nop

    func_800D55DC(rdram, ctx);
        goto after_1;
    // 0x800D58E0: nop

    after_1:
    // 0x800D58E4: jal         0x800D55DC
    // 0x800D58E8: nop

    func_800D55DC(rdram, ctx);
        goto after_2;
    // 0x800D58E8: nop

    after_2:
    // 0x800D58EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D58F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D58F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800D58FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D58FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D5900: lw          $t6, -0x4700($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4700);
    // 0x800D5904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D5908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D590C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800D5910: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D5914: addiu       $a1, $a1, -0x4BC0
    ctx->r5 = ADD32(ctx->r5, -0X4BC0);
    // 0x800D5918: jal         0x8001E210
    // 0x800D591C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_8001E210(rdram, ctx);
        goto after_0;
    // 0x800D591C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800D5920: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D5924: lw          $v0, -0x4BC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4BC0);
    // 0x800D5928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D592C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D5930: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x800D5934: jr          $ra
    // 0x800D5938: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x800D5938: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_800D593C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D593C: jr          $ra
    // 0x800D5940: addiu       $v0, $zero, 0x3666
    ctx->r2 = ADD32(0, 0X3666);
    return;
    // 0x800D5940: addiu       $v0, $zero, 0x3666
    ctx->r2 = ADD32(0, 0X3666);
;}
RECOMP_FUNC void func_800D5944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5944: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D5948: jr          $ra
    // 0x800D594C: lw          $v0, -0x4818($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4818);
    return;
    // 0x800D594C: lw          $v0, -0x4818($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4818);
;}
RECOMP_FUNC void func_800D5950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5950: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D5954: lw          $t6, -0x4700($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4700);
    // 0x800D5958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D595C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D5960: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800D5964: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D5968: addiu       $a1, $a1, -0x4BC0
    ctx->r5 = ADD32(ctx->r5, -0X4BC0);
    // 0x800D596C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800D5970: jal         0x8001E210
    // 0x800D5974: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    func_8001E210(rdram, ctx);
        goto after_0;
    // 0x800D5974: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_0:
    // 0x800D5978: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D597C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800D5980: lw          $t7, -0x4700($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4700);
    // 0x800D5984: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D5988: addiu       $a1, $a1, -0x4BBC
    ctx->r5 = ADD32(ctx->r5, -0X4BBC);
    // 0x800D598C: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    // 0x800D5990: jal         0x8001E210
    // 0x800D5994: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8001E210(rdram, ctx);
        goto after_1;
    // 0x800D5994: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x800D5998: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800D599C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800D59A0: lw          $t0, -0x4BC0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4BC0);
    // 0x800D59A4: lw          $t8, -0x4BBC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4BBC);
    // 0x800D59A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D59AC: srl         $t1, $t0, 6
    ctx->r9 = S32(U32(ctx->r8) >> 6);
    // 0x800D59B0: srl         $t9, $t8, 6
    ctx->r25 = S32(U32(ctx->r24) >> 6);
    // 0x800D59B4: subu        $v0, $t9, $t1
    ctx->r2 = SUB32(ctx->r25, ctx->r9);
    // 0x800D59B8: jr          $ra
    // 0x800D59BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800D59BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800D59C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D59C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D59C4: lw          $t6, -0x4700($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4700);
    // 0x800D59C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D59CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D59D0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800D59D4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D59D8: addiu       $a1, $a1, -0x4BC0
    ctx->r5 = ADD32(ctx->r5, -0X4BC0);
    // 0x800D59DC: jal         0x8001E210
    // 0x800D59E0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_8001E210(rdram, ctx);
        goto after_0;
    // 0x800D59E0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800D59E4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800D59E8: lw          $v0, -0x4BC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4BC0);
    // 0x800D59EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D59F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D59F4: sll         $t8, $v0, 26
    ctx->r24 = S32(ctx->r2 << 26);
    // 0x800D59F8: srl         $t9, $t8, 30
    ctx->r25 = S32(U32(ctx->r24) >> 30);
    // 0x800D59FC: jr          $ra
    // 0x800D5A00: andi        $v0, $t9, 0x1
    ctx->r2 = ctx->r25 & 0X1;
    return;
    // 0x800D5A00: andi        $v0, $t9, 0x1
    ctx->r2 = ctx->r25 & 0X1;
;}
RECOMP_FUNC void func_800D5A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5A04: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800D5A08: lbu         $v1, -0x481C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X481C);
    // 0x800D5A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D5A10: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800D5A14: blezl       $v1, L_800D5A54
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800D5A18: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800D5A54;
    }
    goto skip_0;
    // 0x800D5A18: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_0:
    // 0x800D5A1C: lh          $t6, -0x4920($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X4920);
    // 0x800D5A20: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800D5A24: addiu       $a1, $a1, -0x4920
    ctx->r5 = ADD32(ctx->r5, -0X4920);
    // 0x800D5A28: beql        $a0, $t6, L_800D5A54
    if (ctx->r4 == ctx->r14) {
        // 0x800D5A2C: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800D5A54;
    }
    goto skip_1;
    // 0x800D5A2C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x800D5A30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800D5A34:
    // 0x800D5A34: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800D5A38: beq         $at, $zero, L_800D5A50
    if (ctx->r1 == 0) {
        // 0x800D5A3C: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_800D5A50;
    }
    // 0x800D5A3C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x800D5A40: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800D5A44: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x800D5A48: bnel        $a0, $t9, L_800D5A34
    if (ctx->r4 != ctx->r25) {
        // 0x800D5A4C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800D5A34;
    }
    goto skip_2;
    // 0x800D5A4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
L_800D5A50:
    // 0x800D5A50: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_800D5A54:
    // 0x800D5A54: beq         $at, $zero, L_800D5A64
    if (ctx->r1 == 0) {
            // 0x800D5A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    func_800D5A64(rdram, ctx);
    return;
    }
    // 0x800D5A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800D5A5C: jr          $ra
    // 0x800D5A60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800D5A60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
