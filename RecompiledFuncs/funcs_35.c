#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800F9BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9BAC: jal         0x800D9240
    // 0x800F9BB0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_800D9240(rdram, ctx);
        goto after_0;
    // 0x800F9BB0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x800F9BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9BBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9BCC: jal         0x800F8B88
    // 0x800F9BD0: nop

    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x800F9BD0: nop

    after_0:
    // 0x800F9BD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F9BD8: bnel        $v0, $at, L_800F9C2C
    if (ctx->r2 != ctx->r1) {
        // 0x800F9BDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9C2C;
    }
    goto skip_0;
    // 0x800F9BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800F9BE0: jal         0x800DB9B0
    // 0x800F9BE4: nop

    func_800DB9B0(rdram, ctx);
        goto after_1;
    // 0x800F9BE4: nop

    after_1:
    // 0x800F9BE8: bne         $v0, $zero, L_800F9C28
    if (ctx->r2 != 0) {
        // 0x800F9BEC: lui         $t6, 0x8013
        ctx->r14 = S32(0X8013 << 16);
            goto L_800F9C28;
    }
    // 0x800F9BEC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F9BF0: lbu         $t6, 0x5520($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5520);
    // 0x800F9BF4: addiu       $t7, $t6, -0xD
    ctx->r15 = ADD32(ctx->r14, -0XD);
    // 0x800F9BF8: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x800F9BFC: beq         $at, $zero, L_800F9C18
    if (ctx->r1 == 0) {
        // 0x800F9C00: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800F9C18;
    }
    // 0x800F9C00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9C04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800F9C08: addu        $at, $at, $t7
    gpr jr_addend_800F9C10 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F9C0C: lw          $t7, 0x60D4($at)
    ctx->r15 = ADD32(ctx->r1, 0X60D4);
    // 0x800F9C10: jr          $t7
    // 0x800F9C14: nop

    switch (jr_addend_800F9C10 >> 2) {
        case 0: goto L_800F9C28; break;
        case 1: goto L_800F9C28; break;
        case 2: goto L_800F9C28; break;
        case 3: goto L_800F9C28; break;
        case 4: goto L_800F9C28; break;
        case 5: goto L_800F9C28; break;
        case 6: goto L_800F9C28; break;
        default: switch_error(__func__, 0x800F9C10, 0x801260D4);
    }
    // 0x800F9C14: nop

L_800F9C18:
    // 0x800F9C18: jal         0x800BEAF4
    // 0x800F9C1C: nop

    func_800BEAF4(rdram, ctx);
        goto after_2;
    // 0x800F9C1C: nop

    after_2:
    // 0x800F9C20: jal         0x800F9488
    // 0x800F9C24: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_800F9488(rdram, ctx);
        goto after_3;
    // 0x800F9C24: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
L_800F9C28:
    // 0x800F9C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9C2C:
    // 0x800F9C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9C30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9C38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9C40: jal         0x800F8B88
    // 0x800F9C44: nop

    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x800F9C44: nop

    after_0:
    // 0x800F9C48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F9C4C: bnel        $v0, $at, L_800F9C60
    if (ctx->r2 != ctx->r1) {
        // 0x800F9C50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9C60;
    }
    goto skip_0;
    // 0x800F9C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800F9C54: jal         0x800F9488
    // 0x800F9C58: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_800F9488(rdram, ctx);
        goto after_1;
    // 0x800F9C58: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_1:
    // 0x800F9C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9C60:
    // 0x800F9C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9C64: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9C6C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F9C70: lbu         $t6, 0x5520($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5520);
    // 0x800F9C74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F9C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9C7C: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x800F9C80: sltiu       $at, $t7, 0x12
    ctx->r1 = ctx->r15 < 0X12 ? 1 : 0;
    // 0x800F9C84: beq         $at, $zero, L_800F9EAC
    if (ctx->r1 == 0) {
        // 0x800F9C88: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800F9EAC;
    }
    // 0x800F9C88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9C8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800F9C90: addu        $at, $at, $t7
    gpr jr_addend_800F9C98 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F9C94: lw          $t7, 0x60F0($at)
    ctx->r15 = ADD32(ctx->r1, 0X60F0);
    // 0x800F9C98: jr          $t7
    // 0x800F9C9C: nop

    switch (jr_addend_800F9C98 >> 2) {
        case 0: goto L_800F9CA0; break;
        case 1: goto L_800F9CC0; break;
        case 2: goto L_800F9CE0; break;
        case 3: goto L_800F9D00; break;
        case 4: goto L_800F9D10; break;
        case 5: goto L_800F9D30; break;
        case 6: goto L_800F9D50; break;
        case 7: goto L_800F9D60; break;
        case 8: goto L_800F9D80; break;
        case 9: goto L_800F9D90; break;
        case 10: goto L_800F9DA0; break;
        case 11: goto L_800F9DDC; break;
        case 12: goto L_800F9DFC; break;
        case 13: goto L_800F9E0C; break;
        case 14: goto L_800F9E2C; break;
        case 15: goto L_800F9E3C; break;
        case 16: goto L_800F9E4C; break;
        case 17: goto L_800F9E88; break;
        default: switch_error(__func__, 0x800F9C98, 0x801260F0);
    }
    // 0x800F9C9C: nop

L_800F9CA0:
    // 0x800F9CA0: jal         0x800C9510
    // 0x800F9CA4: nop

    func_800C9510(rdram, ctx);
        goto after_0;
    // 0x800F9CA4: nop

    after_0:
    // 0x800F9CA8: bnel        $v0, $zero, L_800F9EB0
    if (ctx->r2 != 0) {
        // 0x800F9CAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_0;
    // 0x800F9CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800F9CB0: jal         0x800F9488
    // 0x800F9CB4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800F9488(rdram, ctx);
        goto after_1;
    // 0x800F9CB4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x800F9CB8: b           L_800F9EB0
    // 0x800F9CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9CC0:
    // 0x800F9CC0: jal         0x800C95D4
    // 0x800F9CC4: nop

    func_800C95D4(rdram, ctx);
        goto after_2;
    // 0x800F9CC4: nop

    after_2:
    // 0x800F9CC8: beql        $v0, $zero, L_800F9EB0
    if (ctx->r2 == 0) {
        // 0x800F9CCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_1;
    // 0x800F9CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800F9CD0: jal         0x800F9488
    // 0x800F9CD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_3;
    // 0x800F9CD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800F9CD8: b           L_800F9EB0
    // 0x800F9CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9CE0:
    // 0x800F9CE0: jal         0x800C9510
    // 0x800F9CE4: nop

    func_800C9510(rdram, ctx);
        goto after_4;
    // 0x800F9CE4: nop

    after_4:
    // 0x800F9CE8: bnel        $v0, $zero, L_800F9EB0
    if (ctx->r2 != 0) {
        // 0x800F9CEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_2;
    // 0x800F9CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800F9CF0: jal         0x800F9488
    // 0x800F9CF4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800F9488(rdram, ctx);
        goto after_5;
    // 0x800F9CF4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x800F9CF8: b           L_800F9EB0
    // 0x800F9CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D00:
    // 0x800F9D00: jal         0x800F9488
    // 0x800F9D04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_800F9488(rdram, ctx);
        goto after_6;
    // 0x800F9D04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_6:
    // 0x800F9D08: b           L_800F9EB0
    // 0x800F9D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D10:
    // 0x800F9D10: jal         0x800C95D4
    // 0x800F9D14: nop

    func_800C95D4(rdram, ctx);
        goto after_7;
    // 0x800F9D14: nop

    after_7:
    // 0x800F9D18: beql        $v0, $zero, L_800F9EB0
    if (ctx->r2 == 0) {
        // 0x800F9D1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_3;
    // 0x800F9D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x800F9D20: jal         0x800F9488
    // 0x800F9D24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_8;
    // 0x800F9D24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x800F9D28: b           L_800F9EB0
    // 0x800F9D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D30:
    // 0x800F9D30: jal         0x800C9510
    // 0x800F9D34: nop

    func_800C9510(rdram, ctx);
        goto after_9;
    // 0x800F9D34: nop

    after_9:
    // 0x800F9D38: bnel        $v0, $zero, L_800F9EB0
    if (ctx->r2 != 0) {
        // 0x800F9D3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_4;
    // 0x800F9D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x800F9D40: jal         0x800F9488
    // 0x800F9D44: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800F9488(rdram, ctx);
        goto after_10;
    // 0x800F9D44: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x800F9D48: b           L_800F9EB0
    // 0x800F9D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D50:
    // 0x800F9D50: jal         0x800F9488
    // 0x800F9D54: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800F9488(rdram, ctx);
        goto after_11;
    // 0x800F9D54: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_11:
    // 0x800F9D58: b           L_800F9EB0
    // 0x800F9D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D60:
    // 0x800F9D60: jal         0x800C95D4
    // 0x800F9D64: nop

    func_800C95D4(rdram, ctx);
        goto after_12;
    // 0x800F9D64: nop

    after_12:
    // 0x800F9D68: beql        $v0, $zero, L_800F9EB0
    if (ctx->r2 == 0) {
        // 0x800F9D6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_5;
    // 0x800F9D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x800F9D70: jal         0x800F9488
    // 0x800F9D74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_13;
    // 0x800F9D74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x800F9D78: b           L_800F9EB0
    // 0x800F9D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D80:
    // 0x800F9D80: jal         0x800F9488
    // 0x800F9D84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_14;
    // 0x800F9D84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x800F9D88: b           L_800F9EB0
    // 0x800F9D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9D90:
    // 0x800F9D90: jal         0x800F9488
    // 0x800F9D94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_15;
    // 0x800F9D94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x800F9D98: b           L_800F9EB0
    // 0x800F9D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9DA0:
    // 0x800F9DA0: jal         0x800F929C
    // 0x800F9DA4: nop

    func_800F929C(rdram, ctx);
        goto after_16;
    // 0x800F9DA4: nop

    after_16:
    // 0x800F9DA8: jal         0x800878A0
    // 0x800F9DAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _plsu_entrypoint_1(rdram, ctx);
        goto after_17;
    // 0x800F9DAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x800F9DB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F9DB4: bne         $v0, $at, L_800F9DCC
    if (ctx->r2 != ctx->r1) {
        // 0x800F9DB8: nop
    
            goto L_800F9DCC;
    }
    // 0x800F9DB8: nop

    // 0x800F9DBC: jal         0x800F9488
    // 0x800F9DC0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_800F9488(rdram, ctx);
        goto after_18;
    // 0x800F9DC0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_18:
    // 0x800F9DC4: b           L_800F9EB0
    // 0x800F9DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9DCC:
    // 0x800F9DCC: jal         0x800F9488
    // 0x800F9DD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F9488(rdram, ctx);
        goto after_19;
    // 0x800F9DD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_19:
    // 0x800F9DD4: b           L_800F9EB0
    // 0x800F9DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9DDC:
    // 0x800F9DDC: jal         0x800C9510
    // 0x800F9DE0: nop

    func_800C9510(rdram, ctx);
        goto after_20;
    // 0x800F9DE0: nop

    after_20:
    // 0x800F9DE4: bnel        $v0, $zero, L_800F9EB0
    if (ctx->r2 != 0) {
        // 0x800F9DE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_6;
    // 0x800F9DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x800F9DEC: jal         0x800F9488
    // 0x800F9DF0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800F9488(rdram, ctx);
        goto after_21;
    // 0x800F9DF0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_21:
    // 0x800F9DF4: b           L_800F9EB0
    // 0x800F9DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9DFC:
    // 0x800F9DFC: jal         0x800F9488
    // 0x800F9E00: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800F9488(rdram, ctx);
        goto after_22;
    // 0x800F9E00: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_22:
    // 0x800F9E04: b           L_800F9EB0
    // 0x800F9E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9E0C:
    // 0x800F9E0C: jal         0x800C95D4
    // 0x800F9E10: nop

    func_800C95D4(rdram, ctx);
        goto after_23;
    // 0x800F9E10: nop

    after_23:
    // 0x800F9E14: beql        $v0, $zero, L_800F9EB0
    if (ctx->r2 == 0) {
        // 0x800F9E18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_7;
    // 0x800F9E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x800F9E1C: jal         0x800F9488
    // 0x800F9E20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_24;
    // 0x800F9E20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_24:
    // 0x800F9E24: b           L_800F9EB0
    // 0x800F9E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9E2C:
    // 0x800F9E2C: jal         0x800F9488
    // 0x800F9E30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_25;
    // 0x800F9E30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_25:
    // 0x800F9E34: b           L_800F9EB0
    // 0x800F9E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9E3C:
    // 0x800F9E3C: jal         0x800F9488
    // 0x800F9E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_26;
    // 0x800F9E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_26:
    // 0x800F9E44: b           L_800F9EB0
    // 0x800F9E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9E4C:
    // 0x800F9E4C: jal         0x800F8A5C
    // 0x800F9E50: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F8A5C(rdram, ctx);
        goto after_27;
    // 0x800F9E50: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_27:
    // 0x800F9E54: jal         0x800EA05C
    // 0x800F9E58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_28;
    // 0x800F9E58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_28:
    // 0x800F9E5C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800F9E60: bne         $v0, $t8, L_800F9E78
    if (ctx->r2 != ctx->r24) {
        // 0x800F9E64: nop
    
            goto L_800F9E78;
    }
    // 0x800F9E64: nop

    // 0x800F9E68: jal         0x800F9488
    // 0x800F9E6C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800F9488(rdram, ctx);
        goto after_29;
    // 0x800F9E6C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_29:
    // 0x800F9E70: b           L_800F9EB0
    // 0x800F9E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9E78:
    // 0x800F9E78: jal         0x800F9488
    // 0x800F9E7C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_800F9488(rdram, ctx);
        goto after_30;
    // 0x800F9E7C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_30:
    // 0x800F9E80: b           L_800F9EB0
    // 0x800F9E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9EB0;
    // 0x800F9E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9E88:
    // 0x800F9E88: jal         0x800F8A5C
    // 0x800F9E8C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F8A5C(rdram, ctx);
        goto after_31;
    // 0x800F9E8C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_31:
    // 0x800F9E90: jal         0x800EA05C
    // 0x800F9E94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_32;
    // 0x800F9E94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_32:
    // 0x800F9E98: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800F9E9C: bnel        $v0, $t9, L_800F9EB0
    if (ctx->r2 != ctx->r25) {
        // 0x800F9EA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9EB0;
    }
    goto skip_8;
    // 0x800F9EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x800F9EA4: jal         0x800F9488
    // 0x800F9EA8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_800F9488(rdram, ctx);
        goto after_33;
    // 0x800F9EA8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_33:
L_800F9EAC:
    // 0x800F9EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9EB0:
    // 0x800F9EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F9EB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9EC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F9ECC: bgez        $a1, L_800F9EDC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800F9ED0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800F9EDC;
    }
    // 0x800F9ED0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800F9ED4: jal         0x800FC660
    // 0x800F9ED8: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    func_800FC660(rdram, ctx);
        goto after_0;
    // 0x800F9ED8: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    after_0:
L_800F9EDC:
    // 0x800F9EDC: jal         0x800F9F04
    // 0x800F9EE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F9F04(rdram, ctx);
        goto after_1;
    // 0x800F9EE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800F9EE4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9EE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800F9EEC: jal         0x800F9F2C
    // 0x800F9EF0: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    func_800F9F2C(rdram, ctx);
        goto after_2;
    // 0x800F9EF0: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    after_2:
    // 0x800F9EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9EFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9F04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F9F08: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F9F0C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800F9F10: jr          $ra
    // 0x800F9F14: lh          $v0, 0x5530($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5530);
    return;
    // 0x800F9F14: lh          $v0, 0x5530($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5530);
;}
RECOMP_FUNC void func_800F9F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9F18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F9F1C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F9F20: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800F9F24: jr          $ra
    // 0x800F9F28: lh          $v0, 0x5532($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5532);
    return;
    // 0x800F9F28: lh          $v0, 0x5532($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5532);
;}
RECOMP_FUNC void func_800F9F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9F2C: bgez        $a1, L_800F9F4C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800F9F30: sll         $t8, $a0, 2
        ctx->r24 = S32(ctx->r4 << 2);
            goto L_800F9F4C;
    }
    // 0x800F9F30: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800F9F34: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800F9F38: addiu       $t7, $t7, 0x5530
    ctx->r15 = ADD32(ctx->r15, 0X5530);
    // 0x800F9F3C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F9F40: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800F9F44: b           L_800F9F6C
    // 0x800F9F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_800F9F6C;
    // 0x800F9F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800F9F4C:
    // 0x800F9F4C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800F9F50: addiu       $t9, $t9, 0x5530
    ctx->r25 = ADD32(ctx->r25, 0X5530);
    // 0x800F9F54: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x800F9F58: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x800F9F5C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800F9F60: beq         $at, $zero, L_800F9F6C
    if (ctx->r1 == 0) {
        // 0x800F9F64: nop
    
            goto L_800F9F6C;
    }
    // 0x800F9F64: nop

    // 0x800F9F68: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800F9F6C:
    // 0x800F9F6C: jr          $ra
    // 0x800F9F70: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    return;
    // 0x800F9F70: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800F9F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9F74: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F9F78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F9F7C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F9F80: jr          $ra
    // 0x800F9F84: sh          $a1, 0x5532($at)
    MEM_H(0X5532, ctx->r1) = ctx->r5;
    return;
    // 0x800F9F84: sh          $a1, 0x5532($at)
    MEM_H(0X5532, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_800F9F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F9F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F9F98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800F9F9C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800F9FA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F9FA4: lw          $t7, 0x2C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X2C);
    // 0x800F9FA8: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x800F9FAC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800F9FB0: addu        $s1, $t8, $a0
    ctx->r17 = ADD32(ctx->r24, ctx->r4);
    // 0x800F9FB4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800F9FB8: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800F9FBC: beq         $at, $zero, L_800F9FEC
    if (ctx->r1 == 0) {
        // 0x800F9FC0: nop
    
            goto L_800F9FEC;
    }
    // 0x800F9FC0: nop

    // 0x800F9FC4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_800F9FC8:
    // 0x800F9FC8: beql        $a0, $zero, L_800F9FE0
    if (ctx->r4 == 0) {
        // 0x800F9FCC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_800F9FE0;
    }
    goto skip_0;
    // 0x800F9FCC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x800F9FD0: jal         0x8001BAFC
    // 0x800F9FD4: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800F9FD4: nop

    after_0:
    // 0x800F9FD8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800F9FDC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800F9FE0:
    // 0x800F9FE0: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800F9FE4: bnel        $at, $zero, L_800F9FC8
    if (ctx->r1 != 0) {
        // 0x800F9FE8: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_800F9FC8;
    }
    goto skip_1;
    // 0x800F9FE8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_1:
L_800F9FEC:
    // 0x800F9FEC: jal         0x8001BAFC
    // 0x800F9FF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    defrag(rdram, ctx);
        goto after_1;
    // 0x800F9FF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800F9FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9FF8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800F9FFC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FA000: jr          $ra
    // 0x800FA004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FA004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FA010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA010: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800FA014: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800FA018: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FA01C: addiu       $v0, $v0, 0x3DC0
    ctx->r2 = ADD32(ctx->r2, 0X3DC0);
    // 0x800FA020: addiu       $v1, $v1, 0x3880
    ctx->r3 = ADD32(ctx->r3, 0X3880);
L_800FA024:
    // 0x800FA024: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x800FA028: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800FA02C: bne         $at, $zero, L_800FA024
    if (ctx->r1 != 0) {
        // 0x800FA030: sb          $zero, -0xC($v1)
        MEM_B(-0XC, ctx->r3) = 0;
            goto L_800FA024;
    }
    // 0x800FA030: sb          $zero, -0xC($v1)
    MEM_B(-0XC, ctx->r3) = 0;
    // 0x800FA034: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800FA038: addiu       $v1, $v1, 0x3DC0
    ctx->r3 = ADD32(ctx->r3, 0X3DC0);
    // 0x800FA03C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FA040:
    // 0x800FA040: lb          $t6, 0x0($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X0);
    // 0x800FA044: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800FA048: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800FA04C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800FA050: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800FA054: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FA058: bne         $at, $zero, L_800FA040
    if (ctx->r1 != 0) {
        // 0x800FA05C: add.s       $f0, $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
            goto L_800FA040;
    }
    // 0x800FA05C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x800FA060: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800FA064: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800FA068: addiu       $a1, $a1, 0x3DC0
    ctx->r5 = ADD32(ctx->r5, 0X3DC0);
    // 0x800FA06C: addiu       $v1, $v1, 0x3880
    ctx->r3 = ADD32(ctx->r3, 0X3880);
    // 0x800FA070: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800FA074:
    // 0x800FA074: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x800FA078: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x800FA07C: beq         $a0, $zero, L_800FA094
    if (ctx->r4 == 0) {
        // 0x800FA080: subu        $t7, $a2, $v0
        ctx->r15 = SUB32(ctx->r6, ctx->r2);
            goto L_800FA094;
    }
    // 0x800FA080: subu        $t7, $a2, $v0
    ctx->r15 = SUB32(ctx->r6, ctx->r2);
    // 0x800FA084: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x800FA088: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x800FA08C: b           L_800FA098
    // 0x800FA090: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
        goto L_800FA098;
    // 0x800FA090: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
L_800FA094:
    // 0x800FA094: sb          $t7, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r15;
L_800FA098:
    // 0x800FA098: beq         $a0, $zero, L_800FA0A8
    if (ctx->r4 == 0) {
        // 0x800FA09C: addiu       $t8, $v0, -0x2
        ctx->r24 = ADD32(ctx->r2, -0X2);
            goto L_800FA0A8;
    }
    // 0x800FA09C: addiu       $t8, $v0, -0x2
    ctx->r24 = ADD32(ctx->r2, -0X2);
    // 0x800FA0A0: b           L_800FA0AC
    // 0x800FA0A4: sb          $t8, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r24;
        goto L_800FA0AC;
    // 0x800FA0A4: sb          $t8, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r24;
L_800FA0A8:
    // 0x800FA0A8: sb          $zero, 0xB($v1)
    MEM_B(0XB, ctx->r3) = 0;
L_800FA0AC:
    // 0x800FA0AC: lb          $t0, 0xA($v1)
    ctx->r8 = MEM_B(ctx->r3, 0XA);
    // 0x800FA0B0: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x800FA0B4: lb          $t4, 0xB($v1)
    ctx->r12 = MEM_B(ctx->r3, 0XB);
    // 0x800FA0B8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FA0BC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800FA0C0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x800FA0C4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FA0C8: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x800FA0CC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800FA0D0: sb          $zero, -0x10($v1)
    MEM_B(-0X10, ctx->r3) = 0;
    // 0x800FA0D4: sb          $zero, -0xB($v1)
    MEM_B(-0XB, ctx->r3) = 0;
    // 0x800FA0D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FA0DC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800FA0E0: sb          $zero, -0xA($v1)
    MEM_B(-0XA, ctx->r3) = 0;
    // 0x800FA0E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FA0E8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800FA0EC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800FA0F0: nop

    // 0x800FA0F4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800FA0F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800FA0FC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800FA100: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x800FA104: nop

    // 0x800FA108: sh          $t2, -0x16($v1)
    MEM_H(-0X16, ctx->r3) = ctx->r10;
    // 0x800FA10C: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800FA110: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800FA114: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x800FA118: bne         $v1, $a1, L_800FA074
    if (ctx->r3 != ctx->r5) {
        // 0x800FA11C: sh          $t6, -0x14($v1)
        MEM_H(-0X14, ctx->r3) = ctx->r14;
            goto L_800FA074;
    }
    // 0x800FA11C: sh          $t6, -0x14($v1)
    MEM_H(-0X14, ctx->r3) = ctx->r14;
    // 0x800FA120: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800FA124: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FA128: jr          $ra
    // 0x800FA12C: sb          $t7, 0x57B0($at)
    MEM_B(0X57B0, ctx->r1) = ctx->r15;
    return;
    // 0x800FA12C: sb          $t7, 0x57B0($at)
    MEM_B(0X57B0, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_800FA130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA130: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA134: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA138: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA13C: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA140: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA144: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA148: lbu         $t8, 0xC($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XC);
    // 0x800FA14C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA154: beql        $a1, $t8, L_800FA234
    if (ctx->r5 == ctx->r24) {
        // 0x800FA158: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA234;
    }
    goto skip_0;
    // 0x800FA158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FA15C: beq         $a1, $zero, L_800FA214
    if (ctx->r5 == 0) {
        // 0x800FA160: sb          $a1, 0xC($v1)
        MEM_B(0XC, ctx->r3) = ctx->r5;
            goto L_800FA214;
    }
    // 0x800FA160: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x800FA164: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FA168: beq         $a1, $at, L_800FA188
    if (ctx->r5 == ctx->r1) {
        // 0x800FA16C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800FA188;
    }
    // 0x800FA16C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FA170: beq         $a1, $at, L_800FA1B4
    if (ctx->r5 == ctx->r1) {
        // 0x800FA174: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800FA1B4;
    }
    // 0x800FA174: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FA178: beql        $a1, $at, L_800FA204
    if (ctx->r5 == ctx->r1) {
        // 0x800FA17C: lw          $a0, 0x18($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X18);
            goto L_800FA204;
    }
    goto skip_1;
    // 0x800FA17C: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    skip_1:
    // 0x800FA180: b           L_800FA234
    // 0x800FA184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FA234;
    // 0x800FA184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA188:
    // 0x800FA188: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x800FA18C: bnel        $t9, $zero, L_800FA234
    if (ctx->r25 != 0) {
        // 0x800FA190: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA234;
    }
    goto skip_2;
    // 0x800FA190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800FA194: lb          $a0, 0xE($v1)
    ctx->r4 = MEM_B(ctx->r3, 0XE);
    // 0x800FA198: lbu         $a1, 0x5($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X5);
    // 0x800FA19C: lbu         $a2, 0x12($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X12);
    // 0x800FA1A0: jal         0x8008A580
    // 0x800FA1A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    _scinfobar_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800FA1A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x800FA1A8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800FA1AC: b           L_800FA230
    // 0x800FA1B0: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
        goto L_800FA230;
    // 0x800FA1B0: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
L_800FA1B4:
    // 0x800FA1B4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x800FA1B8: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x800FA1BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FA1C0: bnel        $t0, $v0, L_800FA1DC
    if (ctx->r8 != ctx->r2) {
        // 0x800FA1C4: lh          $t3, 0x2($v1)
        ctx->r11 = MEM_H(ctx->r3, 0X2);
            goto L_800FA1DC;
    }
    goto skip_3;
    // 0x800FA1C4: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    skip_3:
    // 0x800FA1C8: lh          $t1, 0x8($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X8);
    // 0x800FA1CC: lh          $t2, 0x2($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2);
    // 0x800FA1D0: beql        $t1, $t2, L_800FA1E8
    if (ctx->r9 == ctx->r10) {
        // 0x800FA1D4: lbu         $t4, 0x11($v1)
        ctx->r12 = MEM_BU(ctx->r3, 0X11);
            goto L_800FA1E8;
    }
    goto skip_4;
    // 0x800FA1D4: lbu         $t4, 0x11($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X11);
    skip_4:
    // 0x800FA1D8: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
L_800FA1DC:
    // 0x800FA1DC: sh          $v0, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r2;
    // 0x800FA1E0: sh          $t3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r11;
    // 0x800FA1E4: lbu         $t4, 0x11($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X11);
L_800FA1E8:
    // 0x800FA1E8: bnel        $t4, $zero, L_800FA234
    if (ctx->r12 != 0) {
        // 0x800FA1EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA234;
    }
    goto skip_5;
    // 0x800FA1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x800FA1F0: jal         0x8008A5B0
    // 0x800FA1F4: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    _scinfobar_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800FA1F4: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    after_1:
    // 0x800FA1F8: b           L_800FA234
    // 0x800FA1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FA234;
    // 0x800FA1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FA200: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
L_800FA204:
    // 0x800FA204: jal         0x8008A5B0
    // 0x800FA208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _scinfobar_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x800FA208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800FA20C: b           L_800FA234
    // 0x800FA210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FA234;
    // 0x800FA210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA214:
    // 0x800FA214: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x800FA218: beql        $a0, $zero, L_800FA234
    if (ctx->r4 == 0) {
        // 0x800FA21C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA234;
    }
    goto skip_6;
    // 0x800FA21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x800FA220: jal         0x8008A588
    // 0x800FA224: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    _scinfobar_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x800FA224: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x800FA228: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800FA22C: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
L_800FA230:
    // 0x800FA230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA234:
    // 0x800FA234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FA238: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA240: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA244: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA248: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA24C: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA250: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FA258: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA260: beq         $a1, $zero, L_800FA27C
    if (ctx->r5 == 0) {
        // 0x800FA264: sb          $a1, 0x10($v0)
        MEM_B(0X10, ctx->r2) = ctx->r5;
            goto L_800FA27C;
    }
    // 0x800FA264: sb          $a1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r5;
    // 0x800FA268: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FA26C: beql        $a1, $at, L_800FA29C
    if (ctx->r5 == ctx->r1) {
        // 0x800FA270: lbu         $t9, 0xC($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0XC);
            goto L_800FA29C;
    }
    goto skip_0;
    // 0x800FA270: lbu         $t9, 0xC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XC);
    skip_0:
    // 0x800FA274: b           L_800FA2B4
    // 0x800FA278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FA2B4;
    // 0x800FA278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA27C:
    // 0x800FA27C: lbu         $t8, 0xC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XC);
    // 0x800FA280: beql        $t8, $zero, L_800FA2B4
    if (ctx->r24 == 0) {
        // 0x800FA284: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA2B4;
    }
    goto skip_1;
    // 0x800FA284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800FA288: jal         0x800FA130
    // 0x800FA28C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800FA130(rdram, ctx);
        goto after_0;
    // 0x800FA28C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x800FA290: b           L_800FA2B4
    // 0x800FA294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FA2B4;
    // 0x800FA294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FA298: lbu         $t9, 0xC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XC);
L_800FA29C:
    // 0x800FA29C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FA2A0: beql        $t9, $at, L_800FA2B4
    if (ctx->r25 == ctx->r1) {
        // 0x800FA2A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA2B4;
    }
    goto skip_2;
    // 0x800FA2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800FA2A8: jal         0x800FA130
    // 0x800FA2AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800FA130(rdram, ctx);
        goto after_1;
    // 0x800FA2AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800FA2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA2B4:
    // 0x800FA2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FA2B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA2C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800FA2C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FA2C8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800FA2CC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800FA2D0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800FA2D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800FA2D8: jal         0x800D8FF8
    // 0x800FA2DC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800FA2DC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x800FA2E0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800FA2E4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800FA2E8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800FA2EC: addiu       $s0, $s0, 0x3880
    ctx->r16 = ADD32(ctx->r16, 0X3880);
    // 0x800FA2F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800FA2F4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_800FA2F8:
    // 0x800FA2F8: lbu         $t6, 0x10($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10);
    // 0x800FA2FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FA300: bnel        $s3, $t6, L_800FA360
    if (ctx->r19 != ctx->r14) {
        // 0x800FA304: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA360;
    }
    goto skip_0;
    // 0x800FA304: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800FA308: jal         0x800FA874
    // 0x800FA30C: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    func_800FA874(rdram, ctx);
        goto after_1;
    // 0x800FA30C: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    after_1:
    // 0x800FA310: beql        $v0, $zero, L_800FA360
    if (ctx->r2 == 0) {
        // 0x800FA314: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA360;
    }
    goto skip_1;
    // 0x800FA314: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x800FA318: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800FA31C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800FA320: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x800FA324: nop

    // 0x800FA328: bc1fl       L_800FA360
    if (!c1cs) {
        // 0x800FA32C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA360;
    }
    goto skip_2;
    // 0x800FA32C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x800FA330: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800FA334: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FA338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA33C: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x800FA340: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800FA344: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x800FA348: nop

    // 0x800FA34C: bc1fl       L_800FA360
    if (!c1cs) {
        // 0x800FA350: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA360;
    }
    goto skip_3;
    // 0x800FA350: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x800FA354: jal         0x800FA240
    // 0x800FA358: swc1        $f20, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f20.u32l;
    func_800FA240(rdram, ctx);
        goto after_2;
    // 0x800FA358: swc1        $f20, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f20.u32l;
    after_2:
    // 0x800FA35C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FA360:
    // 0x800FA360: slti        $at, $s1, 0x30
    ctx->r1 = SIGNED(ctx->r17) < 0X30 ? 1 : 0;
    // 0x800FA364: bne         $at, $zero, L_800FA2F8
    if (ctx->r1 != 0) {
        // 0x800FA368: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800FA2F8;
    }
    // 0x800FA368: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x800FA36C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800FA370: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800FA374: addiu       $s2, $s2, 0x3DC0
    ctx->r18 = ADD32(ctx->r18, 0X3DC0);
    // 0x800FA378: addiu       $s0, $s0, 0x3880
    ctx->r16 = ADD32(ctx->r16, 0X3880);
    // 0x800FA37C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800FA380:
    // 0x800FA380: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800FA384: beql        $a0, $zero, L_800FA398
    if (ctx->r4 == 0) {
        // 0x800FA388: lbu         $v0, 0xC($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XC);
            goto L_800FA398;
    }
    goto skip_4;
    // 0x800FA388: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    skip_4:
    // 0x800FA38C: jal         0x8008A590
    // 0x800FA390: nop

    _scinfobar_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x800FA390: nop

    after_3:
    // 0x800FA394: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
L_800FA398:
    // 0x800FA398: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FA39C: beql        $v0, $s3, L_800FA3C0
    if (ctx->r2 == ctx->r19) {
        // 0x800FA3A0: lb          $v0, 0xD($s0)
        ctx->r2 = MEM_B(ctx->r16, 0XD);
            goto L_800FA3C0;
    }
    goto skip_5;
    // 0x800FA3A0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    skip_5:
    // 0x800FA3A4: beq         $v0, $at, L_800FA434
    if (ctx->r2 == ctx->r1) {
        // 0x800FA3A8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800FA434;
    }
    // 0x800FA3A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FA3AC: beq         $v0, $at, L_800FA464
    if (ctx->r2 == ctx->r1) {
        // 0x800FA3B0: nop
    
            goto L_800FA464;
    }
    // 0x800FA3B0: nop

    // 0x800FA3B4: b           L_800FA4DC
    // 0x800FA3B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_800FA4DC;
    // 0x800FA3B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800FA3BC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
L_800FA3C0:
    // 0x800FA3C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FA3C4: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800FA3C8: beq         $at, $zero, L_800FA414
    if (ctx->r1 == 0) {
        // 0x800FA3CC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FA414;
    }
    // 0x800FA3CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800FA3D0: addu        $t7, $s2, $v0
    ctx->r15 = ADD32(ctx->r18, ctx->r2);
    // 0x800FA3D4: lb          $v1, 0x0($t7)
    ctx->r3 = MEM_B(ctx->r15, 0X0);
    // 0x800FA3D8: lb          $t9, 0xA($s0)
    ctx->r25 = MEM_B(ctx->r16, 0XA);
    // 0x800FA3DC: lb          $t3, 0xB($s0)
    ctx->r11 = MEM_B(ctx->r16, 0XB);
    // 0x800FA3E0: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x800FA3E4: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800FA3E8: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x800FA3EC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800FA3F0: sb          $t6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r14;
    // 0x800FA3F4: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x800FA3F8: mflo        $t0
    ctx->r8 = lo;
    // 0x800FA3FC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800FA400: sh          $t1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r9;
    // 0x800FA404: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800FA408: mflo        $t4
    ctx->r12 = lo;
    // 0x800FA40C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800FA410: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
L_800FA414:
    // 0x800FA414: sltiu       $at, $a0, 0xA
    ctx->r1 = ctx->r4 < 0XA ? 1 : 0;
    // 0x800FA418: bne         $at, $zero, L_800FA4D8
    if (ctx->r1 != 0) {
        // 0x800FA41C: addiu       $t7, $zero, 0xA
        ctx->r15 = ADD32(0, 0XA);
            goto L_800FA4D8;
    }
    // 0x800FA41C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800FA420: sb          $t7, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r15;
    // 0x800FA424: jal         0x800FA130
    // 0x800FA428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800FA130(rdram, ctx);
        goto after_4;
    // 0x800FA428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800FA42C: b           L_800FA4DC
    // 0x800FA430: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_800FA4DC;
    // 0x800FA430: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FA434:
    // 0x800FA434: jal         0x8008A628
    // 0x800FA438: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    _scinfobar_entrypoint_21(rdram, ctx);
        goto after_5;
    // 0x800FA438: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_5:
    // 0x800FA43C: beql        $v0, $zero, L_800FA4DC
    if (ctx->r2 == 0) {
        // 0x800FA440: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA4DC;
    }
    goto skip_6;
    // 0x800FA440: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x800FA444: lbu         $t9, 0x11($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X11);
    // 0x800FA448: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800FA44C: bnel        $t9, $zero, L_800FA4DC
    if (ctx->r25 != 0) {
        // 0x800FA450: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA4DC;
    }
    goto skip_7;
    // 0x800FA450: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x800FA454: jal         0x8008A5B0
    // 0x800FA458: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    _scinfobar_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x800FA458: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_6:
    // 0x800FA45C: b           L_800FA4DC
    // 0x800FA460: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_800FA4DC;
    // 0x800FA460: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FA464:
    // 0x800FA464: jal         0x8008A628
    // 0x800FA468: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    _scinfobar_entrypoint_21(rdram, ctx);
        goto after_7;
    // 0x800FA468: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_7:
    // 0x800FA46C: beql        $v0, $zero, L_800FA4DC
    if (ctx->r2 == 0) {
        // 0x800FA470: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA4DC;
    }
    goto skip_8;
    // 0x800FA470: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x800FA474: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x800FA478: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FA47C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA480: blez        $v0, L_800FA4C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800FA484: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_800FA4C8;
    }
    // 0x800FA484: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800FA488: sb          $t8, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r24;
    // 0x800FA48C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x800FA490: lb          $t3, 0xA($s0)
    ctx->r11 = MEM_B(ctx->r16, 0XA);
    // 0x800FA494: lb          $t6, 0xB($s0)
    ctx->r14 = MEM_B(ctx->r16, 0XB);
    // 0x800FA498: addu        $t0, $s2, $v0
    ctx->r8 = ADD32(ctx->r18, ctx->r2);
    // 0x800FA49C: lb          $v1, 0x0($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X0);
    // 0x800FA4A0: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x800FA4A4: lh          $t5, 0x8($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8);
    // 0x800FA4A8: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800FA4AC: mflo        $t2
    ctx->r10 = lo;
    // 0x800FA4B0: subu        $t4, $t1, $t2
    ctx->r12 = SUB32(ctx->r9, ctx->r10);
    // 0x800FA4B4: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x800FA4B8: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800FA4BC: mflo        $t7
    ctx->r15 = lo;
    // 0x800FA4C0: subu        $t9, $t5, $t7
    ctx->r25 = SUB32(ctx->r13, ctx->r15);
    // 0x800FA4C4: sh          $t9, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r25;
L_800FA4C8:
    // 0x800FA4C8: bgtzl       $v0, L_800FA4DC
    if (SIGNED(ctx->r2) > 0) {
        // 0x800FA4CC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FA4DC;
    }
    goto skip_9;
    // 0x800FA4CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x800FA4D0: jal         0x800FA130
    // 0x800FA4D4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_800FA130(rdram, ctx);
        goto after_8;
    // 0x800FA4D4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_8:
L_800FA4D8:
    // 0x800FA4D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FA4DC:
    // 0x800FA4DC: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x800FA4E0: bne         $s1, $at, L_800FA380
    if (ctx->r17 != ctx->r1) {
        // 0x800FA4E4: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800FA380;
    }
    // 0x800FA4E4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x800FA4E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA4EC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800FA4F0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA4F4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800FA4F8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800FA4FC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800FA500: jr          $ra
    // 0x800FA504: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800FA504: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FA508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA508: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800FA50C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FA510: lbu         $t6, 0x57B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X57B0);
    // 0x800FA514: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800FA518: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800FA51C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800FA520: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800FA524: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800FA528: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800FA52C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800FA530: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800FA534: beq         $t6, $zero, L_800FA5E0
    if (ctx->r14 == 0) {
        // 0x800FA538: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800FA5E0;
    }
    // 0x800FA538: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FA53C: jal         0x800A9C98
    // 0x800FA540: nop

    func_800A9C98(rdram, ctx);
        goto after_0;
    // 0x800FA540: nop

    after_0:
    // 0x800FA544: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA548: bne         $v1, $zero, L_800FA55C
    if (ctx->r3 != 0) {
        // 0x800FA54C: nop
    
            goto L_800FA55C;
    }
    // 0x800FA54C: nop

    // 0x800FA550: jal         0x800DB9B0
    // 0x800FA554: nop

    func_800DB9B0(rdram, ctx);
        goto after_1;
    // 0x800FA554: nop

    after_1:
    // 0x800FA558: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_800FA55C:
    // 0x800FA55C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800FA560: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x800FA564: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x800FA568: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x800FA56C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800FA570: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x800FA574: addiu       $s2, $s2, 0x39B4
    ctx->r18 = ADD32(ctx->r18, 0X39B4);
    // 0x800FA578: addiu       $s3, $s3, 0x3998
    ctx->r19 = ADD32(ctx->r19, 0X3998);
    // 0x800FA57C: addiu       $s4, $s4, 0x3D6C
    ctx->r20 = ADD32(ctx->r20, 0X3D6C);
    // 0x800FA580: addiu       $s5, $s5, 0x3DC0
    ctx->r21 = ADD32(ctx->r21, 0X3DC0);
    // 0x800FA584: addiu       $s0, $s0, 0x3880
    ctx->r16 = ADD32(ctx->r16, 0X3880);
    // 0x800FA588: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
L_800FA58C:
    // 0x800FA58C: xor         $v0, $s0, $s2
    ctx->r2 = ctx->r16 ^ ctx->r18;
    // 0x800FA590: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA594: beql        $a1, $zero, L_800FA5D8
    if (ctx->r5 == 0) {
        // 0x800FA598: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800FA5D8;
    }
    goto skip_0;
    // 0x800FA598: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x800FA59C: beq         $v1, $zero, L_800FA5B8
    if (ctx->r3 == 0) {
        // 0x800FA5A0: xor         $v0, $s0, $s3
        ctx->r2 = ctx->r16 ^ ctx->r19;
            goto L_800FA5B8;
    }
    // 0x800FA5A0: xor         $v0, $s0, $s3
    ctx->r2 = ctx->r16 ^ ctx->r19;
    // 0x800FA5A4: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA5A8: beq         $v1, $zero, L_800FA5B8
    if (ctx->r3 == 0) {
        // 0x800FA5AC: nop
    
            goto L_800FA5B8;
    }
    // 0x800FA5AC: nop

    // 0x800FA5B0: xor         $v1, $s0, $s4
    ctx->r3 = ctx->r16 ^ ctx->r20;
    // 0x800FA5B4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
L_800FA5B8:
    // 0x800FA5B8: beq         $s1, $zero, L_800FA5C8
    if (ctx->r17 == 0) {
        // 0x800FA5BC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_800FA5C8;
    }
    // 0x800FA5BC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800FA5C0: bnel        $v1, $zero, L_800FA5D8
    if (ctx->r3 != 0) {
        // 0x800FA5C4: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800FA5D8;
    }
    goto skip_1;
    // 0x800FA5C4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_1:
L_800FA5C8:
    // 0x800FA5C8: lh          $a2, 0x6($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X6);
    // 0x800FA5CC: jal         0x8008A640
    // 0x800FA5D0: lh          $a3, 0x8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8);
    _scinfobar_entrypoint_24(rdram, ctx);
        goto after_2;
    // 0x800FA5D0: lh          $a3, 0x8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8);
    after_2:
    // 0x800FA5D4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_800FA5D8:
    // 0x800FA5D8: bnel        $s0, $s5, L_800FA58C
    if (ctx->r16 != ctx->r21) {
        // 0x800FA5DC: lw          $a1, 0x18($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X18);
            goto L_800FA58C;
    }
    goto skip_2;
    // 0x800FA5DC: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    skip_2:
L_800FA5E0:
    // 0x800FA5E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800FA5E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FA5E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA5EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800FA5F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800FA5F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800FA5F8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA5FC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800FA600: jr          $ra
    // 0x800FA604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800FA604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FA608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA608: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA60C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FA610: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FA614: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800FA618: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800FA61C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA620: addiu       $s1, $s1, 0x3DC0
    ctx->r17 = ADD32(ctx->r17, 0X3DC0);
    // 0x800FA624: addiu       $s0, $s0, 0x3880
    ctx->r16 = ADD32(ctx->r16, 0X3880);
    // 0x800FA628: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
L_800FA62C:
    // 0x800FA62C: beql        $a0, $zero, L_800FA644
    if (ctx->r4 == 0) {
        // 0x800FA630: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800FA644;
    }
    goto skip_0;
    // 0x800FA630: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x800FA634: jal         0x8001BAFC
    // 0x800FA638: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800FA638: nop

    after_0:
    // 0x800FA63C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x800FA640: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_800FA644:
    // 0x800FA644: bnel        $s0, $s1, L_800FA62C
    if (ctx->r16 != ctx->r17) {
        // 0x800FA648: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_800FA62C;
    }
    goto skip_1;
    // 0x800FA648: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x800FA64C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA650: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FA654: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FA658: jr          $ra
    // 0x800FA65C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FA65C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FA660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA664: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FA668: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FA66C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800FA670: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800FA674: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA678: addiu       $s1, $s1, 0x3DC0
    ctx->r17 = ADD32(ctx->r17, 0X3DC0);
    // 0x800FA67C: addiu       $s0, $s0, 0x3880
    ctx->r16 = ADD32(ctx->r16, 0X3880);
    // 0x800FA680: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
L_800FA684:
    // 0x800FA684: beql        $a0, $zero, L_800FA69C
    if (ctx->r4 == 0) {
        // 0x800FA688: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800FA69C;
    }
    goto skip_0;
    // 0x800FA688: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x800FA68C: jal         0x8008A588
    // 0x800FA690: nop

    _scinfobar_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800FA690: nop

    after_0:
    // 0x800FA694: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x800FA698: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_800FA69C:
    // 0x800FA69C: bnel        $s0, $s1, L_800FA684
    if (ctx->r16 != ctx->r17) {
        // 0x800FA6A0: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_800FA684;
    }
    goto skip_1;
    // 0x800FA6A0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x800FA6A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA6A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FA6AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FA6B0: jr          $ra
    // 0x800FA6B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FA6B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FA6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA6B8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA6BC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA6C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA6C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA6C8: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA6CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA6D4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA6D8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800FA6DC: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x800FA6E0: jal         0x8008A598
    // 0x800FA6E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _scinfobar_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800FA6E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800FA6E8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA6EC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800FA6F0: jal         0x8008A5C0
    // 0x800FA6F4: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    _scinfobar_entrypoint_8(rdram, ctx);
        goto after_1;
    // 0x800FA6F4: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    after_1:
    // 0x800FA6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FA6FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FA700: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA708: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x800FA70C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA710: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800FA714: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800FA718: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FA71C: addiu       $t8, $t8, 0x3880
    ctx->r24 = ADD32(ctx->r24, 0X3880);
    // 0x800FA720: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA724: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x800FA728: lb          $t0, 0xE($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XE);
    // 0x800FA72C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FA734: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FA738: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800FA73C: bne         $a2, $t0, L_800FA750
    if (ctx->r6 != ctx->r8) {
        // 0x800FA740: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_800FA750;
    }
    // 0x800FA740: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800FA744: lbu         $t2, 0x12($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X12);
    // 0x800FA748: beql        $a3, $t2, L_800FA79C
    if (ctx->r7 == ctx->r10) {
        // 0x800FA74C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_800FA79C;
    }
    goto skip_0;
    // 0x800FA74C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    skip_0:
L_800FA750:
    // 0x800FA750: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800FA754: beql        $a0, $zero, L_800FA778
    if (ctx->r4 == 0) {
        // 0x800FA758: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_800FA778;
    }
    goto skip_1;
    // 0x800FA758: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x800FA75C: jal         0x8008A638
    // 0x800FA760: nop

    _scinfobar_entrypoint_23(rdram, ctx);
        goto after_0;
    // 0x800FA760: nop

    after_0:
    // 0x800FA764: beql        $v0, $zero, L_800FA778
    if (ctx->r2 == 0) {
        // 0x800FA768: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_800FA778;
    }
    goto skip_2;
    // 0x800FA768: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_2:
    // 0x800FA76C: b           L_800FA804
    // 0x800FA770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FA804;
    // 0x800FA770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FA774: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
L_800FA778:
    // 0x800FA778: beql        $a0, $zero, L_800FA79C
    if (ctx->r4 == 0) {
        // 0x800FA77C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_800FA79C;
    }
    goto skip_3;
    // 0x800FA77C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    skip_3:
    // 0x800FA780: jal         0x8008A5B8
    // 0x800FA784: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    _scinfobar_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800FA784: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800FA788: bnel        $v0, $zero, L_800FA79C
    if (ctx->r2 != 0) {
        // 0x800FA78C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_800FA79C;
    }
    goto skip_4;
    // 0x800FA78C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    skip_4:
    // 0x800FA790: b           L_800FA804
    // 0x800FA794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FA804;
    // 0x800FA794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FA798: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_800FA79C:
    // 0x800FA79C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA7A0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
    // 0x800FA7A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800FA7A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FA7AC: sb          $t3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r11;
    // 0x800FA7B0: jal         0x800FA240
    // 0x800FA7B4: sb          $t4, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r12;
    func_800FA240(rdram, ctx);
        goto after_2;
    // 0x800FA7B4: sb          $t4, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r12;
    after_2:
    // 0x800FA7B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FA7BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FA7C0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800FA7C4: jal         0x8008A600
    // 0x800FA7C8: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    _scinfobar_entrypoint_16(rdram, ctx);
        goto after_3;
    // 0x800FA7C8: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x800FA7CC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800FA7D0: beql        $v0, $t5, L_800FA7F4
    if (ctx->r2 == ctx->r13) {
        // 0x800FA7D4: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_800FA7F4;
    }
    goto skip_5;
    // 0x800FA7D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x800FA7D8: jal         0x8008A630
    // 0x800FA7DC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    _scinfobar_entrypoint_22(rdram, ctx);
        goto after_4;
    // 0x800FA7DC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_4:
    // 0x800FA7E0: beq         $v0, $zero, L_800FA7F0
    if (ctx->r2 == 0) {
        // 0x800FA7E4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800FA7F0;
    }
    // 0x800FA7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA7E8: jal         0x8008A5B0
    // 0x800FA7EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    _scinfobar_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x800FA7EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_5:
L_800FA7F0:
    // 0x800FA7F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_800FA7F4:
    // 0x800FA7F4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA7F8: jal         0x800FA6B8
    // 0x800FA7FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_800FA6B8(rdram, ctx);
        goto after_6;
    // 0x800FA7FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x800FA800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FA804:
    // 0x800FA804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FA80C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FA810: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA818: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA81C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA820: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA824: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA828: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA82C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA830: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x800FA834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FA838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA83C: beq         $t8, $zero, L_800FA850
    if (ctx->r24 == 0) {
        // 0x800FA840: nop
    
            goto L_800FA850;
    }
    // 0x800FA840: nop

    // 0x800FA844: lb          $t9, 0xE($v0)
    ctx->r25 = MEM_B(ctx->r2, 0XE);
    // 0x800FA848: beq         $a1, $t9, L_800FA858
    if (ctx->r5 == ctx->r25) {
        // 0x800FA84C: nop
    
            goto L_800FA858;
    }
    // 0x800FA84C: nop

L_800FA850:
    // 0x800FA850: b           L_800FA864
    // 0x800FA854: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FA864;
    // 0x800FA854: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FA858:
    // 0x800FA858: jal         0x800FA240
    // 0x800FA85C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800FA240(rdram, ctx);
        goto after_0;
    // 0x800FA85C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800FA860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FA864:
    // 0x800FA864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FA868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FA86C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA874: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA878: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA87C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA880: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA884: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA888: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA88C: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    // 0x800FA890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FA894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA898: beq         $a2, $zero, L_800FA8AC
    if (ctx->r6 == 0) {
        // 0x800FA89C: nop
    
            goto L_800FA8AC;
    }
    // 0x800FA89C: nop

    // 0x800FA8A0: lb          $t8, 0xE($v1)
    ctx->r24 = MEM_B(ctx->r3, 0XE);
    // 0x800FA8A4: beql        $a1, $t8, L_800FA8B8
    if (ctx->r5 == ctx->r24) {
        // 0x800FA8A8: lbu         $v0, 0xC($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0XC);
            goto L_800FA8B8;
    }
    goto skip_0;
    // 0x800FA8A8: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    skip_0:
L_800FA8AC:
    // 0x800FA8AC: b           L_800FA8D8
    // 0x800FA8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FA8D8;
    // 0x800FA8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FA8B4: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
L_800FA8B8:
    // 0x800FA8B8: xori        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 ^ 0X2;
    // 0x800FA8BC: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x800FA8C0: beql        $v0, $zero, L_800FA8DC
    if (ctx->r2 == 0) {
        // 0x800FA8C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA8DC;
    }
    goto skip_1;
    // 0x800FA8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800FA8C8: jal         0x8008A630
    // 0x800FA8CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _scinfobar_entrypoint_22(rdram, ctx);
        goto after_0;
    // 0x800FA8CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800FA8D0: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA8D4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_800FA8D8:
    // 0x800FA8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA8DC:
    // 0x800FA8DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FA8E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA8E8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA8EC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA8F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA8F4: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA8F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA8FC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA900: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x800FA904: beq         $t8, $zero, L_800FA918
    if (ctx->r24 == 0) {
        // 0x800FA908: nop
    
            goto L_800FA918;
    }
    // 0x800FA908: nop

    // 0x800FA90C: lb          $t9, 0xE($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XE);
    // 0x800FA910: beql        $a1, $t9, L_800FA924
    if (ctx->r5 == ctx->r25) {
            // 0x800FA914: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    static_3_800FA924(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800FA914: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    skip_0:
L_800FA918:
    // 0x800FA918: jr          $ra
    // 0x800FA91C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800FA91C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_800FA920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA920: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x800FA924: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA928: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800FA92C: jr          $ra
    // 0x800FA930: nop

    return;
    // 0x800FA930: nop

;}
RECOMP_FUNC void func_800FA934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA934: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA938: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA93C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA940: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FA944: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA948: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800FA94C: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    // 0x800FA950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FA954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA958: beq         $a2, $zero, L_800FA96C
    if (ctx->r6 == 0) {
        // 0x800FA95C: nop
    
            goto L_800FA96C;
    }
    // 0x800FA95C: nop

    // 0x800FA960: lb          $t8, 0xE($v1)
    ctx->r24 = MEM_B(ctx->r3, 0XE);
    // 0x800FA964: beql        $a1, $t8, L_800FA978
    if (ctx->r5 == ctx->r24) {
        // 0x800FA968: lbu         $v0, 0xC($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0XC);
            goto L_800FA978;
    }
    goto skip_0;
    // 0x800FA968: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    skip_0:
L_800FA96C:
    // 0x800FA96C: b           L_800FA998
    // 0x800FA970: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800FA998;
    // 0x800FA970: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800FA974: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
L_800FA978:
    // 0x800FA978: xori        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 ^ 0X2;
    // 0x800FA97C: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x800FA980: beql        $v0, $zero, L_800FA99C
    if (ctx->r2 == 0) {
        // 0x800FA984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA99C;
    }
    goto skip_1;
    // 0x800FA984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800FA988: jal         0x8008A628
    // 0x800FA98C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _scinfobar_entrypoint_21(rdram, ctx);
        goto after_0;
    // 0x800FA98C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800FA990: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA994: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_800FA998:
    // 0x800FA998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA99C:
    // 0x800FA99C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FA9A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA9A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FA9AC: jr          $ra
    // 0x800FA9B0: sb          $a0, 0x57B0($at)
    MEM_B(0X57B0, ctx->r1) = ctx->r4;
    return;
    // 0x800FA9B0: sb          $a0, 0x57B0($at)
    MEM_B(0X57B0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800FA9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA9B4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA9B8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA9BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FA9C0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FA9C4: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800FA9C8: lw          $a2, 0x3898($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3898);
    // 0x800FA9CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FA9D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA9D4: beql        $a2, $zero, L_800FA9E8
    if (ctx->r6 == 0) {
        // 0x800FA9D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FA9E8;
    }
    goto skip_0;
    // 0x800FA9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FA9DC: jal         0x8008A5C8
    // 0x800FA9E0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _scinfobar_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x800FA9E0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800FA9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FA9E8:
    // 0x800FA9E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FA9EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FA9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA9F4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FA9F8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FA9FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FAA00: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FAA04: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800FAA08: lw          $a2, 0x3898($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3898);
    // 0x800FAA0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FAA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FAA14: beql        $a2, $zero, L_800FAA28
    if (ctx->r6 == 0) {
        // 0x800FAA18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FAA28;
    }
    goto skip_0;
    // 0x800FAA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FAA1C: jal         0x8008A5A0
    // 0x800FAA20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _scinfobar_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800FAA20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800FAA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FAA28:
    // 0x800FAA28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FAA2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FAA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAA34: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FAA38: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FAA3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FAA40: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FAA44: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800FAA48: lw          $a2, 0x3898($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3898);
    // 0x800FAA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FAA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FAA54: beq         $a2, $zero, L_800FAA64
    if (ctx->r6 == 0) {
        // 0x800FAA58: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800FAA64;
    }
    // 0x800FAA58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800FAA5C: jal         0x8008A5A8
    // 0x800FAA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _scinfobar_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800FAA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800FAA64:
    // 0x800FAA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FAA68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FAA6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FAA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAA74: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FAA78: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FAA7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FAA80: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FAA84: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800FAA88: lw          $a2, 0x3898($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3898);
    // 0x800FAA8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FAA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FAA94: beq         $a2, $zero, L_800FAAA4
    if (ctx->r6 == 0) {
        // 0x800FAA98: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800FAAA4;
    }
    // 0x800FAA98: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800FAA9C: jal         0x8008A5A8
    // 0x800FAAA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _scinfobar_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800FAAA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
L_800FAAA4:
    // 0x800FAAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FAAA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FAAAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FAAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAAB4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800FAAB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FAABC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800FAAC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FAAC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FAAC8: addiu       $t7, $t7, 0x3880
    ctx->r15 = ADD32(ctx->r15, 0X3880);
    // 0x800FAACC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FAAD0: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800FAAD4: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x800FAAD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FAADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAAE0: bne         $t8, $zero, L_800FAAF0
    if (ctx->r24 != 0) {
        // 0x800FAAE4: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_800FAAF0;
    }
    // 0x800FAAE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FAAE8: b           L_800FAB38
    // 0x800FAAEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FAB38;
    // 0x800FAAEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FAAF0:
    // 0x800FAAF0: sb          $t9, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r25;
    // 0x800FAAF4: jal         0x800FA240
    // 0x800FAAF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800FA240(rdram, ctx);
        goto after_0;
    // 0x800FAAF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800FAAFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800FAB00: jal         0x8008A5B8
    // 0x800FAB04: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _scinfobar_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800FAB04: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800FAB08: bne         $v0, $zero, L_800FAB18
    if (ctx->r2 != 0) {
        // 0x800FAB0C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_800FAB18;
    }
    // 0x800FAB0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FAB10: b           L_800FAB38
    // 0x800FAB14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FAB38;
    // 0x800FAB14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FAB18:
    // 0x800FAB18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FAB1C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800FAB20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FAB24: jal         0x8008A5B0
    // 0x800FAB28: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    _scinfobar_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x800FAB28: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x800FAB2C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800FAB30: sb          $t0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r8;
    // 0x800FAB34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FAB38:
    // 0x800FAB38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAB3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FAB40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FAB44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FAB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAB50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FAB54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FAB58: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x800FAB5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAB60: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800FAB64: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FAB68: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FAB6C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800FAB70: jal         0x800EE7F8
    // 0x800FAB74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800FAB74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800FAB78: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800FAB7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FAB80: jal         0x800EFB24
    // 0x800FAB84: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x800FAB84: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800FAB88: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800FAB8C: jal         0x800EF368
    // 0x800FAB90: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800EF368(rdram, ctx);
        goto after_2;
    // 0x800FAB90: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800FAB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FAB98: jal         0x800EF04C
    // 0x800FAB9C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x800FAB9C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x800FABA0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800FABA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FABA8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800FABAC: jal         0x800C6A7C
    // 0x800FABB0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_800C6A7C(rdram, ctx);
        goto after_4;
    // 0x800FABB0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x800FABB4: bne         $v0, $zero, L_800FABC4
    if (ctx->r2 != 0) {
        // 0x800FABB8: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_800FABC4;
    }
    // 0x800FABB8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800FABBC: b           L_800FABE0
    // 0x800FABC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FABE0;
    // 0x800FABC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FABC4:
    // 0x800FABC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FABC8: jal         0x800EF3DC
    // 0x800FABCC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF3DC(rdram, ctx);
        goto after_5;
    // 0x800FABCC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x800FABD0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800FABD4: jal         0x800EE7F8
    // 0x800FABD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x800FABD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800FABDC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_800FABE0:
    // 0x800FABE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FABE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FABE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800FABEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FABF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FABF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FABF8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FABFC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FAC00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAC04: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800FAC08: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FAC0C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800FAC10: jal         0x800EE7F8
    // 0x800FAC14: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800FAC14: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x800FAC18: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800FAC1C: jal         0x800EE7F8
    // 0x800FAC20: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800FAC20: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_1:
    // 0x800FAC24: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800FAC28: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FAC2C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800FAC30: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800FAC34: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800FAC38: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800FAC3C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800FAC40: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800FAC44: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x800FAC48: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800FAC4C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x800FAC50: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x800FAC54: jal         0x800FAB50
    // 0x800FAC58: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800FAB50(rdram, ctx);
        goto after_2;
    // 0x800FAC58: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800FAC5C: bne         $v0, $zero, L_800FAC6C
    if (ctx->r2 != 0) {
        // 0x800FAC60: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800FAC6C;
    }
    // 0x800FAC60: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800FAC64: b           L_800FAC90
    // 0x800FAC68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FAC90;
    // 0x800FAC68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FAC6C:
    // 0x800FAC6C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800FAC70: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800FAC74: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800FAC78: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800FAC7C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800FAC80: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800FAC84: jal         0x800EE7F8
    // 0x800FAC88: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800FAC88: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800FAC8C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_800FAC90:
    // 0x800FAC90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAC94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800FAC98: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FACA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FACA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FACA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FACA8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800FACAC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FACB0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FACB4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800FACB8: jal         0x800EE7F8
    // 0x800FACBC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800FACBC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800FACC0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800FACC4: jal         0x800EE7F8
    // 0x800FACC8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800FACC8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800FACCC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800FACD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FACD4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800FACD8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800FACDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FACE0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800FACE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FACE8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800FACEC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800FACF0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800FACF4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800FACF8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800FACFC: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800FAD00: jal         0x800C6A7C
    // 0x800FAD04: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    func_800C6A7C(rdram, ctx);
        goto after_2;
    // 0x800FAD04: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800FAD08: beq         $v0, $zero, L_800FAD58
    if (ctx->r2 == 0) {
        // 0x800FAD0C: lwc1        $f4, 0x38($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
            goto L_800FAD58;
    }
    // 0x800FAD0C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FAD10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FAD14: nop

    // 0x800FAD18: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800FAD1C: nop

    // 0x800FAD20: bc1fl       L_800FAD3C
    if (!c1cs) {
        // 0x800FAD24: lw          $v0, 0x40($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X40);
            goto L_800FAD3C;
    }
    goto skip_0;
    // 0x800FAD24: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x800FAD28: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x800FAD2C: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x800FAD30: bgezl       $t7, L_800FAD5C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800FAD34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FAD5C;
    }
    goto skip_1;
    // 0x800FAD34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800FAD38: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_800FAD3C:
    // 0x800FAD3C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800FAD40: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800FAD44: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800FAD48: nop

    // 0x800FAD4C: bc1fl       L_800FAD5C
    if (!c1cs) {
        // 0x800FAD50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FAD5C;
    }
    goto skip_2;
    // 0x800FAD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800FAD54: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_800FAD58:
    // 0x800FAD58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FAD5C:
    // 0x800FAD5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800FAD60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FAD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAD68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FAD6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FAD70: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FAD74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800FAD78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAD7C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FAD80: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800FAD84: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FAD88: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800FAD8C: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x800FAD90: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800FAD94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FAD98: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800FAD9C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800FADA0: jal         0x800EFA4C
    // 0x800FADA4: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800FADA4: nop

    after_0:
    // 0x800FADA8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800FADAC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800FADB0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800FADB4: jal         0x800C6C94
    // 0x800FADB8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_800C6C94(rdram, ctx);
        goto after_1;
    // 0x800FADB8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_1:
    // 0x800FADBC: beq         $v0, $zero, L_800FAE30
    if (ctx->r2 == 0) {
        // 0x800FADC0: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800FAE30;
    }
    // 0x800FADC0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FADC4: lwc1        $f0, 0x6140($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6140);
    // 0x800FADC8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800FADCC: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FADD0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FADD4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800FADD8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800FADDC: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800FADE0: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800FADE4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FADE8: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800FADEC: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800FADF0: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x800FADF4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800FADF8: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800FADFC: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800FAE00: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800FAE04: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800FAE08: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800FAE0C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800FAE10: beql        $t6, $zero, L_800FAE34
    if (ctx->r14 == 0) {
        // 0x800FAE14: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FAE34;
    }
    goto skip_0;
    // 0x800FAE14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800FAE18: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800FAE1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FAE20: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x800FAE24: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800FAE28: jal         0x800FACA0
    // 0x800FAE2C: nop

    func_800FACA0(rdram, ctx);
        goto after_2;
    // 0x800FAE2C: nop

    after_2:
L_800FAE30:
    // 0x800FAE30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FAE34:
    // 0x800FAE34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FAE38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800FAE3C: jr          $ra
    // 0x800FAE40: nop

    return;
    // 0x800FAE40: nop

;}
RECOMP_FUNC void func_800FAE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAE44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800FAE48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FAE4C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800FAE50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800FAE54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAE58: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800FAE5C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800FAE60: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FAE64: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800FAE68: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x800FAE6C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800FAE70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FAE74: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800FAE78: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800FAE7C: jal         0x800EFA4C
    // 0x800FAE80: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800FAE80: nop

    after_0:
    // 0x800FAE84: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800FAE88: jal         0x800EE7F8
    // 0x800FAE8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800FAE8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800FAE90: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800FAE94: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800FAE98: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800FAE9C: jal         0x800C6C94
    // 0x800FAEA0: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_800C6C94(rdram, ctx);
        goto after_2;
    // 0x800FAEA0: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_2:
    // 0x800FAEA4: beq         $v0, $zero, L_800FAF64
    if (ctx->r2 == 0) {
        // 0x800FAEA8: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_800FAF64;
    }
    // 0x800FAEA8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FAEAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800FAEB0: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FAEB4: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FAEB8: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x800FAEBC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800FAEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FAEC4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800FAEC8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800FAECC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x800FAED0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800FAED4: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FAED8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800FAEDC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800FAEE0: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x800FAEE4: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800FAEE8: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800FAEEC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800FAEF0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FAEF4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x800FAEF8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FAEFC: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FAF00: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800FAF04: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800FAF08: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800FAF0C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800FAF10: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800FAF14: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x800FAF18: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FAF1C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800FAF20: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800FAF24: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x800FAF28: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800FAF2C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FAF30: jal         0x800EE7F8
    // 0x800FAF34: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800FAF34: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800FAF38: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800FAF3C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800FAF40: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800FAF44: beql        $t6, $zero, L_800FAF68
    if (ctx->r14 == 0) {
        // 0x800FAF48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FAF68;
    }
    goto skip_0;
    // 0x800FAF48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800FAF4C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800FAF50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FAF54: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x800FAF58: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800FAF5C: jal         0x800FACA0
    // 0x800FAF60: nop

    func_800FACA0(rdram, ctx);
        goto after_4;
    // 0x800FAF60: nop

    after_4:
L_800FAF64:
    // 0x800FAF64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FAF68:
    // 0x800FAF68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FAF6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800FAF70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FAF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAF78: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800FAF7C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800FAF80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800FAF84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAF88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FAF8C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800FAF90: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800FAF94: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x800FAF98: jal         0x800EFB24
    // 0x800FAF9C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800FAF9C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x800FAFA0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800FAFA4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800FAFA8: jal         0x800EFB24
    // 0x800FAFAC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x800FAFAC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_1:
    // 0x800FAFB0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800FAFB4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800FAFB8: jal         0x800EFB24
    // 0x800FAFBC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x800FAFBC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x800FAFC0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800FAFC4: jal         0x800EEAA4
    // 0x800FAFC8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EEAA4(rdram, ctx);
        goto after_3;
    // 0x800FAFC8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x800FAFCC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800FAFD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800FAFD4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x800FAFD8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800FAFDC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x800FAFE0: nop

    // 0x800FAFE4: bc1fl       L_800FAFF4
    if (!c1cs) {
        // 0x800FAFE8: lwc1        $f6, 0x0($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
            goto L_800FAFF4;
    }
    goto skip_0;
    // 0x800FAFE8: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800FAFEC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x800FAFF0: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
L_800FAFF4:
    // 0x800FAFF4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FAFF8: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FAFFC: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x800FB000: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800FB004: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800FB008: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x800FB00C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800FB010: mul.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x800FB014: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800FB018: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x800FB01C: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800FB020: mul.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x800FB024: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800FB028: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x800FB02C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB030: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FB034: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800FB038: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB040: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800FB044: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x800FB048: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800FB04C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FB054: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x800FB058: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800FB05C: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x800FB060: jal         0x800EFB24
    // 0x800FB064: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800FB064: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_0:
    // 0x800FB068: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800FB06C: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x800FB070: jal         0x800EFB24
    // 0x800FB074: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x800FB074: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_1:
    // 0x800FB078: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x800FB07C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x800FB080: jal         0x800EFB24
    // 0x800FB084: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x800FB084: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x800FB088: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800FB08C: jal         0x800EF410
    // 0x800FB090: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800EF410(rdram, ctx);
        goto after_3;
    // 0x800FB090: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_3:
    // 0x800FB094: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800FB098: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800FB09C: jal         0x800EF934
    // 0x800FB0A0: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_800EF934(rdram, ctx);
        goto after_4;
    // 0x800FB0A0: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_4:
    // 0x800FB0A4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x800FB0A8: jal         0x800EEAA4
    // 0x800FB0AC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800EEAA4(rdram, ctx);
        goto after_5;
    // 0x800FB0AC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x800FB0B0: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x800FB0B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800FB0B8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x800FB0BC: beq         $t6, $zero, L_800FB0D8
    if (ctx->r14 == 0) {
        // 0x800FB0C0: addiu       $a1, $sp, 0x30
        ctx->r5 = ADD32(ctx->r29, 0X30);
            goto L_800FB0D8;
    }
    // 0x800FB0C0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800FB0C4: jal         0x800EEAA4
    // 0x800FB0C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_6;
    // 0x800FB0C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x800FB0CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FB0D0: swc1        $f0, 0x57C0($at)
    MEM_W(0X57C0, ctx->r1) = ctx->f0.u32l;
    // 0x800FB0D4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
L_800FB0D8:
    // 0x800FB0D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FB0DC: lwc1        $f4, 0x57C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X57C0);
    // 0x800FB0E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FB0E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FB0E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800FB0EC: nop

    // 0x800FB0F0: bc1fl       L_800FB10C
    if (!c1cs) {
        // 0x800FB0F4: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800FB10C;
    }
    goto skip_0;
    // 0x800FB0F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x800FB0F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800FB0FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800FB100: b           L_800FB110
    // 0x800FB104: nop

        goto L_800FB110;
    // 0x800FB104: nop

    // 0x800FB108: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800FB10C:
    // 0x800FB10C: nop

L_800FB110:
    // 0x800FB110: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800FB114: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800FB118: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FB11C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800FB120: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x800FB124: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800FB128: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800FB12C: jal         0x800EF934
    // 0x800FB130: nop

    func_800EF934(rdram, ctx);
        goto after_7;
    // 0x800FB130: nop

    after_7:
    // 0x800FB134: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800FB138: jal         0x800EEAA4
    // 0x800FB13C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800EEAA4(rdram, ctx);
        goto after_8;
    // 0x800FB13C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_8:
    // 0x800FB140: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800FB144: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800FB148: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x800FB14C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800FB150: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x800FB154: nop

    // 0x800FB158: bc1f        L_800FB164
    if (!c1cs) {
        // 0x800FB15C: nop
    
            goto L_800FB164;
    }
    // 0x800FB15C: nop

    // 0x800FB160: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_800FB164:
    // 0x800FB164: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800FB168: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FB16C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FB170: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800FB174: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800FB178: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x800FB17C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800FB180: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800FB184: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800FB188: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x800FB18C: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800FB190: mul.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x800FB194: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800FB198: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x800FB19C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB1A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FB1A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x800FB1A8: jr          $ra
    // 0x800FB1AC: nop

    return;
    // 0x800FB1AC: nop

;}
RECOMP_FUNC void func_800FB1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB1B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FB1B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB1B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800FB1BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800FB1C0: jal         0x800EE7F8
    // 0x800FB1C4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800FB1C4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800FB1C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FB1CC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800FB1D0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800FB1D4: jal         0x800C6A7C
    // 0x800FB1D8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    func_800C6A7C(rdram, ctx);
        goto after_1;
    // 0x800FB1D8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x800FB1DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB1E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800FB1E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB1EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FB1F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FB1F4: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x800FB1F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB1FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800FB200: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800FB204: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800FB208: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800FB20C: jal         0x800C7A68
    // 0x800FB210: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7A68(rdram, ctx);
        goto after_0;
    // 0x800FB210: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x800FB214: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800FB218: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FB21C: jal         0x800FB1B0
    // 0x800FB220: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_800FB1B0(rdram, ctx);
        goto after_1;
    // 0x800FB220: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x800FB224: bne         $v0, $zero, L_800FB234
    if (ctx->r2 != 0) {
        // 0x800FB228: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_800FB234;
    }
    // 0x800FB228: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FB22C: b           L_800FB298
    // 0x800FB230: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
        goto L_800FB298;
    // 0x800FB230: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
L_800FB234:
    // 0x800FB234: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800FB238: jal         0x800C7A68
    // 0x800FB23C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7A68(rdram, ctx);
        goto after_2;
    // 0x800FB23C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x800FB240: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800FB244: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FB248: jal         0x800FB1B0
    // 0x800FB24C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_800FB1B0(rdram, ctx);
        goto after_3;
    // 0x800FB24C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x800FB250: bne         $v0, $zero, L_800FB268
    if (ctx->r2 != 0) {
        // 0x800FB254: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_800FB268;
    }
    // 0x800FB254: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FB258: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FB25C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800FB260: b           L_800FB29C
    // 0x800FB264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FB29C;
    // 0x800FB264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FB268:
    // 0x800FB268: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800FB26C: jal         0x800C7A68
    // 0x800FB270: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7A68(rdram, ctx);
        goto after_4;
    // 0x800FB270: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x800FB274: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800FB278: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FB27C: jal         0x800FB1B0
    // 0x800FB280: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_800FB1B0(rdram, ctx);
        goto after_5;
    // 0x800FB280: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_5:
    // 0x800FB284: bne         $v0, $zero, L_800FB298
    if (ctx->r2 != 0) {
        // 0x800FB288: lwc1        $f0, 0x34($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
            goto L_800FB298;
    }
    // 0x800FB288: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800FB28C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FB290: b           L_800FB29C
    // 0x800FB294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FB29C;
    // 0x800FB294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FB298:
    // 0x800FB298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FB29C:
    // 0x800FB29C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FB2A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800FB2A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB2AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FB2B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800FB2B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800FB2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB2BC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800FB2C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800FB2C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800FB2C8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800FB2CC: jal         0x800EFA4C
    // 0x800FB2D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800FB2D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x800FB2D4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800FB2D8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800FB2DC: jal         0x800EE780
    // 0x800FB2E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800EE780(rdram, ctx);
        goto after_1;
    // 0x800FB2E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x800FB2E4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800FB2E8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800FB2EC: jal         0x800EFB24
    // 0x800FB2F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x800FB2F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x800FB2F4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800FB2F8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800FB2FC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800FB300: jal         0x800BEF00
    // 0x800FB304: addiu       $a3, $zero, 0x1F00
    ctx->r7 = ADD32(0, 0X1F00);
    func_800BEF00(rdram, ctx);
        goto after_3;
    // 0x800FB304: addiu       $a3, $zero, 0x1F00
    ctx->r7 = ADD32(0, 0X1F00);
    after_3:
    // 0x800FB308: beq         $v0, $zero, L_800FB324
    if (ctx->r2 == 0) {
        // 0x800FB30C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800FB324;
    }
    // 0x800FB30C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800FB310: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800FB314: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800FB318: jal         0x800EE7F8
    // 0x800FB31C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x800FB31C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_4:
    // 0x800FB320: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_800FB324:
    // 0x800FB324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800FB32C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800FB330: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB338: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800FB33C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800FB340: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800FB344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FB348: jr          $ra
    // 0x800FB34C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    return;
    // 0x800FB34C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800FB350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FB354: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800FB358: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB35C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB360: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800FB364: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800FB368: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x800FB36C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800FB370: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800FB374: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FB378: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800FB37C: jal         0x800EE7F8
    // 0x800FB380: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800FB380: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    after_0:
    // 0x800FB384: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800FB388: jal         0x800FB2AC
    // 0x800FB38C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_800FB2AC(rdram, ctx);
        goto after_1;
    // 0x800FB38C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_1:
    // 0x800FB390: bne         $v0, $zero, L_800FB3A0
    if (ctx->r2 != 0) {
        // 0x800FB394: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800FB3A0;
    }
    // 0x800FB394: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800FB398: b           L_800FB3B0
    // 0x800FB39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FB3B0;
    // 0x800FB39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FB3A0:
    // 0x800FB3A0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800FB3A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB3A8: jal         0x800FB338
    // 0x800FB3AC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    func_800FB338(rdram, ctx);
        goto after_2;
    // 0x800FB3AC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_2:
L_800FB3B0:
    // 0x800FB3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB3B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FB3B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB3C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FB3C4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800FB3C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB3CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FB3D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FB3D4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800FB3D8: jal         0x800EEB40
    // 0x800FB3DC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_800EEB40(rdram, ctx);
        goto after_0;
    // 0x800FB3DC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800FB3E0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800FB3E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800FB3E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800FB3EC: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800FB3F0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB3F4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800FB3F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800FB3FC: nop

    // 0x800FB400: bc1fl       L_800FB414
    if (!c1cs) {
        // 0x800FB404: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_800FB414;
    }
    goto skip_0;
    // 0x800FB404: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x800FB408: b           L_800FB424
    // 0x800FB40C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FB424;
    // 0x800FB40C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FB410: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_800FB414:
    // 0x800FB414: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800FB418: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800FB41C: jal         0x800C6B78
    // 0x800FB420: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800C6B78(rdram, ctx);
        goto after_1;
    // 0x800FB420: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
L_800FB424:
    // 0x800FB424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FB42C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB434: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FB438: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800FB43C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800FB440: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FB444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB448: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FB44C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800FB450: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800FB454: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800FB458: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800FB45C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x800FB460: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FB464: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x800FB468: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800FB46C: jal         0x800EFA4C
    // 0x800FB470: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800FB470: nop

    after_0:
    // 0x800FB474: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x800FB478: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800FB47C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800FB480: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800FB484: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800FB488: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x800FB48C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800FB490: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800FB494: jal         0x800EFA4C
    // 0x800FB498: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800FB498: nop

    after_1:
    // 0x800FB49C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800FB4A0: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800FB4A4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800FB4A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800FB4AC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x800FB4B0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800FB4B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800FB4B8: jal         0x800C6B78
    // 0x800FB4BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800C6B78(rdram, ctx);
        goto after_2;
    // 0x800FB4BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_2:
    // 0x800FB4C0: beq         $v0, $zero, L_800FB4F4
    if (ctx->r2 == 0) {
        // 0x800FB4C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800FB4F4;
    }
    // 0x800FB4C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800FB4C8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800FB4CC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800FB4D0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800FB4D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800FB4D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800FB4DC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB4E0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800FB4E4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800FB4E8: jal         0x800EFA4C
    // 0x800FB4EC: nop

    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x800FB4EC: nop

    after_3:
    // 0x800FB4F0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_800FB4F4:
    // 0x800FB4F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB4F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800FB4FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800FB500: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB508: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x800FB50C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x800FB510: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x800FB514: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x800FB518: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x800FB51C: sh          $t8, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r24;
    // 0x800FB520: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x800FB524: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x800FB528: lh          $t0, 0x6($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X6);
    // 0x800FB52C: jr          $ra
    // 0x800FB530: sh          $t0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r8;
    return;
    // 0x800FB530: sh          $t0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_800FB540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FB544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB548: lbu         $t6, 0x33($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X33);
    // 0x800FB54C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FB550: bnel        $t6, $zero, L_800FB5B0
    if (ctx->r14 != 0) {
        // 0x800FB554: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FB5B0;
    }
    goto skip_0;
    // 0x800FB554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FB558: lh          $a0, 0x28($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X28);
    // 0x800FB55C: jal         0x800FED70
    // 0x800FB560: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800FED70(rdram, ctx);
        goto after_0;
    // 0x800FB560: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x800FB564: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800FB568: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800FB56C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800FB570: sb          $t7, 0x33($a1)
    MEM_B(0X33, ctx->r5) = ctx->r15;
    // 0x800FB574: lh          $a0, 0x28($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X28);
    // 0x800FB578: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x800FB57C: addiu       $v1, $v1, 0x3DE0
    ctx->r3 = ADD32(ctx->r3, 0X3DE0);
    // 0x800FB580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FB584:
    // 0x800FB584: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x800FB588: bnel        $a0, $t8, L_800FB5A4
    if (ctx->r4 != ctx->r24) {
        // 0x800FB58C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800FB5A4;
    }
    goto skip_1;
    // 0x800FB58C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x800FB590: jal         0x800DA544
    // 0x800FB594: addiu       $a0, $v0, 0x53E
    ctx->r4 = ADD32(ctx->r2, 0X53E);
    func_800DA544(rdram, ctx);
        goto after_1;
    // 0x800FB594: addiu       $a0, $v0, 0x53E
    ctx->r4 = ADD32(ctx->r2, 0X53E);
    after_1:
    // 0x800FB598: b           L_800FB5B0
    // 0x800FB59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FB5B0;
    // 0x800FB59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB5A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800FB5A4:
    // 0x800FB5A4: bne         $v0, $a1, L_800FB584
    if (ctx->r2 != ctx->r5) {
        // 0x800FB5A8: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_800FB584;
    }
    // 0x800FB5A8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800FB5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FB5B0:
    // 0x800FB5B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FB5B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FB5C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB5C4: lbu         $t6, 0x33($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X33);
    // 0x800FB5C8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FB5CC: beql        $t6, $zero, L_800FB5EC
    if (ctx->r14 == 0) {
        // 0x800FB5D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FB5EC;
    }
    goto skip_0;
    // 0x800FB5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FB5D4: lh          $a0, 0x28($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X28);
    // 0x800FB5D8: jal         0x800FED90
    // 0x800FB5DC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800FED90(rdram, ctx);
        goto after_0;
    // 0x800FB5DC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x800FB5E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800FB5E4: sb          $zero, 0x33($a1)
    MEM_B(0X33, ctx->r5) = 0;
    // 0x800FB5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FB5EC:
    // 0x800FB5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FB5F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB5F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FB5FC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FB600: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800FB604: addiu       $a2, $a2, 0x59B0
    ctx->r6 = ADD32(ctx->r6, 0X59B0);
    // 0x800FB608: addiu       $a1, $a1, 0x57D0
    ctx->r5 = ADD32(ctx->r5, 0X57D0);
    // 0x800FB60C: lh          $v0, 0x28($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X28);
    // 0x800FB610: bne         $a0, $v0, L_800FB620
    if (ctx->r4 != ctx->r2) {
            // 0x800FB614: nop

    func_800FB620(rdram, ctx);
    return;
    }
    // 0x800FB614: nop

    // 0x800FB618: jr          $ra
    // 0x800FB61C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x800FB61C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_800FB620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800FB610:
    // 0x800FB620: bnel        $v1, $zero, L_800FB638
    if (ctx->r3 != 0) {
        // 0x800FB624: addiu       $a1, $a1, 0x50
        ctx->r5 = ADD32(ctx->r5, 0X50);
            goto L_800FB638;
    }
    goto skip_0;
    // 0x800FB624: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    skip_0:
    // 0x800FB628: bgezl       $v0, L_800FB638
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800FB62C: addiu       $a1, $a1, 0x50
        ctx->r5 = ADD32(ctx->r5, 0X50);
            goto L_800FB638;
    }
    goto skip_1;
    // 0x800FB62C: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    skip_1:
    // 0x800FB630: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800FB634: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
L_800FB638:
    // 0x800FB638: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x800FB63C: bnel        $at, $zero, L_800FB610
    if (ctx->r1 != 0) {
            // 0x800FB640: lh          $v0, 0x28($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X28);
    static_3_800FB610(rdram, ctx);
    return;
    }
    goto skip_2;
    // 0x800FB640: lh          $v0, 0x28($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X28);
    skip_2:
    // 0x800FB644: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800FB648: jr          $ra
    // 0x800FB64C: nop

    return;
    // 0x800FB64C: nop

;}
RECOMP_FUNC void func_800FB650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB650: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FB654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB658: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800FB65C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800FB660: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800FB664: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    // 0x800FB668: jal         0x800B2FE0
    // 0x800FB66C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800B2FE0(rdram, ctx);
        goto after_0;
    // 0x800FB66C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x800FB670: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800FB674: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800FB678: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x800FB67C: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x800FB680: addu        $v0, $a3, $t6
    ctx->r2 = ADD32(ctx->r7, ctx->r14);
    // 0x800FB684: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x800FB688: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x800FB68C: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x800FB690: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x800FB694: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800FB698: jal         0x800B3044
    // 0x800FB69C: addiu       $a0, $a3, 0x38
    ctx->r4 = ADD32(ctx->r7, 0X38);
    func_800B3044(rdram, ctx);
        goto after_1;
    // 0x800FB69C: addiu       $a0, $a3, 0x38
    ctx->r4 = ADD32(ctx->r7, 0X38);
    after_1:
    // 0x800FB6A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB6A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800FB6A8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800FB6AC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800FB6B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB6B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FB6B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FB6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB6C8: jal         0x800FB650
    // 0x800FB6CC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_800FB650(rdram, ctx);
        goto after_0;
    // 0x800FB6CC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_0:
    // 0x800FB6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FB6D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB6E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FB6E4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FB6E8: addiu       $v0, $v0, 0x59B4
    ctx->r2 = ADD32(ctx->r2, 0X59B4);
    // 0x800FB6EC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x800FB6F0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x800FB6F4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FB6F8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FB6FC: addiu       $v1, $v1, 0x59B8
    ctx->r3 = ADD32(ctx->r3, 0X59B8);
    // 0x800FB700: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x800FB704: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800FB708: lbu         $t8, 0x30($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X30);
    // 0x800FB70C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FB710: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x800FB714: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FB718: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FB71C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FB720: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x800FB724: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800FB728: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800FB72C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800FB730: andi        $t9, $t8, 0xFFF0
    ctx->r25 = ctx->r24 & 0XFFF0;
    // 0x800FB734: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x800FB738: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x800FB73C: sh          $t6, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r14;
    // 0x800FB740: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x800FB744: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x800FB748: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x800FB74C: sb          $zero, 0x31($a0)
    MEM_B(0X31, ctx->r4) = 0;
    // 0x800FB750: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    // 0x800FB754: sb          $zero, 0x34($a0)
    MEM_B(0X34, ctx->r4) = 0;
    // 0x800FB758: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x800FB75C: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x800FB760: bne         $a1, $zero, L_800FB76C
    if (ctx->r5 != 0) {
        // 0x800FB764: swc1        $f10, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->f10.u32l;
            goto L_800FB76C;
    }
    // 0x800FB764: swc1        $f10, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f10.u32l;
    // 0x800FB768: sb          $zero, 0x33($a0)
    MEM_B(0X33, ctx->r4) = 0;
L_800FB76C:
    // 0x800FB76C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB774: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FB778: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FB77C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800FB780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB784: jal         0x80017764
    // 0x800FB788: lh          $a0, 0x28($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X28);
    func_80017764(rdram, ctx);
        goto after_0;
    // 0x800FB788: lh          $a0, 0x28($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X28);
    after_0:
    // 0x800FB78C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FB790: jal         0x800FB6C0
    // 0x800FB794: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800FB6C0(rdram, ctx);
        goto after_1;
    // 0x800FB794: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800FB798: jal         0x800FB5BC
    // 0x800FB79C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB5BC(rdram, ctx);
        goto after_2;
    // 0x800FB79C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800FB7A0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FB7A4: addiu       $t9, $t9, 0x57D0
    ctx->r25 = ADD32(ctx->r25, 0X57D0);
    // 0x800FB7A8: subu        $a0, $s0, $t9
    ctx->r4 = SUB32(ctx->r16, ctx->r25);
    // 0x800FB7AC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FB7B0: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x800FB7B4: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x800FB7B8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800FB7BC: mflo        $t0
    ctx->r8 = lo;
    // 0x800FB7C0: andi        $t8, $t7, 0xFF0F
    ctx->r24 = ctx->r15 & 0XFF0F;
    // 0x800FB7C4: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x800FB7C8: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x800FB7CC: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x800FB7D0: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    // 0x800FB7D4: jal         0x80017404
    // 0x800FB7D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80017404(rdram, ctx);
        goto after_3;
    // 0x800FB7D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_3:
    // 0x800FB7DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FB7E0: jal         0x800FB6E0
    // 0x800FB7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800FB6E0(rdram, ctx);
        goto after_4;
    // 0x800FB7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800FB7E8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800FB7EC: jal         0x800172D4
    // 0x800FB7F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800172D4(rdram, ctx);
        goto after_5;
    // 0x800FB7F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_5:
    // 0x800FB7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB7F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FB7FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FB800: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FB808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB808: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FB80C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800FB810: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800FB814: addiu       $s1, $s1, 0x3E40
    ctx->r17 = ADD32(ctx->r17, 0X3E40);
    // 0x800FB818: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x800FB81C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FB820: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800FB824: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800FB828: beq         $t6, $zero, L_800FB838
    if (ctx->r14 == 0) {
        // 0x800FB82C: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_800FB838;
    }
    // 0x800FB82C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800FB830: jal         0x800FB908
    // 0x800FB834: nop

    func_800FB908(rdram, ctx);
        goto after_0;
    // 0x800FB834: nop

    after_0:
L_800FB838:
    // 0x800FB838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FB83C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800FB840: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x800FB844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FB848: swc1        $f4, 0x59B4($at)
    MEM_W(0X59B4, ctx->r1) = ctx->f4.u32l;
    // 0x800FB84C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FB850: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FB854: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FB858: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FB85C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800FB860: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800FB864: addiu       $s2, $s2, 0x59B0
    ctx->r18 = ADD32(ctx->r18, 0X59B0);
    // 0x800FB868: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FB86C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x800FB870: swc1        $f6, 0x59B8($at)
    MEM_W(0X59B8, ctx->r1) = ctx->f6.u32l;
L_800FB874:
    // 0x800FB874: lbu         $t8, 0x30($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X30);
    // 0x800FB878: sh          $s1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r17;
    // 0x800FB87C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x800FB880: andi        $t9, $t8, 0xFF0F
    ctx->r25 = ctx->r24 & 0XFF0F;
    // 0x800FB884: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    // 0x800FB888: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x800FB88C: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x800FB890: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x800FB894: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800FB898: jal         0x800B3268
    // 0x800FB89C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800B3268(rdram, ctx);
        goto after_1;
    // 0x800FB89C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x800FB8A0: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x800FB8A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FB8A8: jal         0x800FB6E0
    // 0x800FB8AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800FB6E0(rdram, ctx);
        goto after_2;
    // 0x800FB8AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800FB8B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800FB8B4: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x800FB8B8: addu        $v0, $s0, $t0
    ctx->r2 = ADD32(ctx->r16, ctx->r8);
    // 0x800FB8BC: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x800FB8C0: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x800FB8C4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800FB8C8: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x800FB8CC: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x800FB8D0: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x800FB8D4: bne         $at, $zero, L_800FB874
    if (ctx->r1 != 0) {
        // 0x800FB8D8: sw          $zero, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = 0;
            goto L_800FB874;
    }
    // 0x800FB8D8: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x800FB8DC: jal         0x800FE614
    // 0x800FB8E0: nop

    func_800FE614(rdram, ctx);
        goto after_3;
    // 0x800FB8E0: nop

    after_3:
    // 0x800FB8E4: jal         0x80017864
    // 0x800FB8E8: nop

    func_80017864(rdram, ctx);
        goto after_4;
    // 0x800FB8E8: nop

    after_4:
    // 0x800FB8EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB8F0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800FB8F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800FB8F8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800FB8FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800FB900: jr          $ra
    // 0x800FB904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FB904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800FB908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FB90C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB910: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FB914: jal         0x80017244
    // 0x800FB918: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80017244(rdram, ctx);
        goto after_0;
    // 0x800FB918: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800FB91C: jal         0x80016E7C
    // 0x800FB920: nop

    func_80016E7C(rdram, ctx);
        goto after_1;
    // 0x800FB920: nop

    after_1:
    // 0x800FB924: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FB928: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FB92C: addiu       $s1, $s1, 0x59B0
    ctx->r17 = ADD32(ctx->r17, 0X59B0);
    // 0x800FB930: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
L_800FB934:
    // 0x800FB934: jal         0x800B3248
    // 0x800FB938: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_800B3248(rdram, ctx);
        goto after_2;
    // 0x800FB938: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_2:
    // 0x800FB93C: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x800FB940: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800FB944: bne         $at, $zero, L_800FB934
    if (ctx->r1 != 0) {
        // 0x800FB948: sw          $zero, -0x18($s0)
        MEM_W(-0X18, ctx->r16) = 0;
            goto L_800FB934;
    }
    // 0x800FB948: sw          $zero, -0x18($s0)
    MEM_W(-0X18, ctx->r16) = 0;
    // 0x800FB94C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB950: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FB954: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FB958: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FB95C: sb          $zero, 0x3E40($at)
    MEM_B(0X3E40, ctx->r1) = 0;
    // 0x800FB960: jr          $ra
    // 0x800FB964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FB964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FB968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB968: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800FB96C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800FB970: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x800FB974: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x800FB978: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800FB97C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800FB980: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800FB984: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800FB988: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800FB98C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800FB990: jal         0x800D8FF8
    // 0x800FB994: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800FB994: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x800FB998: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FB99C: addiu       $s0, $s0, 0x59B1
    ctx->r16 = ADD32(ctx->r16, 0X59B1);
    // 0x800FB9A0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x800FB9A4: jal         0x80090200
    // 0x800FB9A8: lbu         $s1, 0x0($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X0);
    func_80090200(rdram, ctx);
        goto after_1;
    // 0x800FB9A8: lbu         $s1, 0x0($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X0);
    after_1:
    // 0x800FB9AC: beq         $v0, $zero, L_800FB9C4
    if (ctx->r2 == 0) {
        // 0x800FB9B0: nop
    
            goto L_800FB9C4;
    }
    // 0x800FB9B0: nop

    // 0x800FB9B4: jal         0x800A5490
    // 0x800FB9B8: nop

    func_800A5490(rdram, ctx);
        goto after_2;
    // 0x800FB9B8: nop

    after_2:
    // 0x800FB9BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800FB9C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_800FB9C4:
    // 0x800FB9C4: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800FB9C8: addiu       $s4, $s4, 0x57D0
    ctx->r20 = ADD32(ctx->r20, 0X57D0);
    // 0x800FB9CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FB9D0: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x800FB9D4: addiu       $s7, $s7, 0x59B0
    ctx->r23 = ADD32(ctx->r23, 0X59B0);
    // 0x800FB9D8: lwc1        $f20, 0x6150($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6150);
    // 0x800FB9DC: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800FB9E0: addiu       $s5, $zero, 0x50
    ctx->r21 = ADD32(0, 0X50);
    // 0x800FB9E4: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
L_800FB9E8:
    // 0x800FB9E8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800FB9EC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800FB9F0: bltzl       $t6, L_800FBBC8
    if (SIGNED(ctx->r14) < 0) {
        // 0x800FB9F4: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBBC8;
    }
    goto skip_0;
    // 0x800FB9F4: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FB9F8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800FB9FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800FBA00: jal         0x800F13F0
    // 0x800FBA04: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800F13F0(rdram, ctx);
        goto after_3;
    // 0x800FBA04: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x800FBA08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FBA0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FBA10: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x800FBA14: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800FBA18: nop

    // 0x800FBA1C: bc1f        L_800FBA74
    if (!c1cs) {
        // 0x800FBA20: nop
    
            goto L_800FBA74;
    }
    // 0x800FBA20: nop

    // 0x800FBA24: subu        $t7, $s0, $s4
    ctx->r15 = SUB32(ctx->r16, ctx->r20);
    // 0x800FBA28: div         $zero, $t7, $s5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r21)));
    // 0x800FBA2C: mflo        $a0
    ctx->r4 = lo;
    // 0x800FBA30: bne         $s5, $zero, L_800FBA3C
    if (ctx->r21 != 0) {
        // 0x800FBA34: nop
    
            goto L_800FBA3C;
    }
    // 0x800FBA34: nop

    // 0x800FBA38: break       7
    do_break(2148514360);
L_800FBA3C:
    // 0x800FBA3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBA40: bne         $s5, $at, L_800FBA54
    if (ctx->r21 != ctx->r1) {
        // 0x800FBA44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FBA54;
    }
    // 0x800FBA44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FBA48: bne         $t7, $at, L_800FBA54
    if (ctx->r15 != ctx->r1) {
        // 0x800FBA4C: nop
    
            goto L_800FBA54;
    }
    // 0x800FBA4C: nop

    // 0x800FBA50: break       6
    do_break(2148514384);
L_800FBA54:
    // 0x800FBA54: jal         0x80017778
    // 0x800FBA58: nop

    func_80017778(rdram, ctx);
        goto after_4;
    // 0x800FBA58: nop

    after_4:
    // 0x800FBA5C: beq         $v0, $zero, L_800FBA74
    if (ctx->r2 == 0) {
        // 0x800FBA60: nop
    
            goto L_800FBA74;
    }
    // 0x800FBA60: nop

    // 0x800FBA64: jal         0x800FB774
    // 0x800FBA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB774(rdram, ctx);
        goto after_5;
    // 0x800FBA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800FBA6C: b           L_800FBBC8
    // 0x800FBA70: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
        goto L_800FBBC8;
    // 0x800FBA70: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FBA74:
    // 0x800FBA74: beql        $s1, $zero, L_800FBB28
    if (ctx->r17 == 0) {
        // 0x800FBA78: lwc1        $f2, 0x18($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
            goto L_800FBB28;
    }
    goto skip_1;
    // 0x800FBA78: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x800FBA7C: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800FBA80: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800FBA84: subu        $t8, $s0, $s4
    ctx->r24 = SUB32(ctx->r16, ctx->r20);
    // 0x800FBA88: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x800FBA8C: nop

    // 0x800FBA90: bc1f        L_800FBAB0
    if (!c1cs) {
        // 0x800FBA94: nop
    
            goto L_800FBAB0;
    }
    // 0x800FBA94: nop

    // 0x800FBA98: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800FBA9C: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800FBAA0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800FBAA4: nop

    // 0x800FBAA8: bc1tl       L_800FBBC8
    if (c1cs) {
        // 0x800FBAAC: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBBC8;
    }
    goto skip_2;
    // 0x800FBAAC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_2:
L_800FBAB0:
    // 0x800FBAB0: div         $zero, $t8, $s5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r21)));
    // 0x800FBAB4: sub.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x800FBAB8: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800FBABC: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800FBAC0: mflo        $a0
    ctx->r4 = lo;
    // 0x800FBAC4: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800FBAC8: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800FBACC: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x800FBAD0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800FBAD4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800FBAD8: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800FBADC: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x800FBAE0: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x800FBAE4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x800FBAE8: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x800FBAEC: bne         $s5, $zero, L_800FBAF8
    if (ctx->r21 != 0) {
        // 0x800FBAF0: nop
    
            goto L_800FBAF8;
    }
    // 0x800FBAF0: nop

    // 0x800FBAF4: break       7
    do_break(2148514548);
L_800FBAF8:
    // 0x800FBAF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBAFC: bne         $s5, $at, L_800FBB10
    if (ctx->r21 != ctx->r1) {
        // 0x800FBB00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FBB10;
    }
    // 0x800FBB00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FBB04: bne         $t8, $at, L_800FBB10
    if (ctx->r24 != ctx->r1) {
        // 0x800FBB08: nop
    
            goto L_800FBB10;
    }
    // 0x800FBB08: nop

    // 0x800FBB0C: break       6
    do_break(2148514572);
L_800FBB10:
    // 0x800FBB10: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x800FBB14: jal         0x80017534
    // 0x800FBB18: nop

    func_80017534(rdram, ctx);
        goto after_6;
    // 0x800FBB18: nop

    after_6:
    // 0x800FBB1C: b           L_800FBBC8
    // 0x800FBB20: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
        goto L_800FBBC8;
    // 0x800FBB20: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x800FBB24: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
L_800FBB28:
    // 0x800FBB28: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800FBB2C: subu        $t0, $s0, $s4
    ctx->r8 = SUB32(ctx->r16, ctx->r20);
    // 0x800FBB30: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x800FBB34: nop

    // 0x800FBB38: bc1f        L_800FBB58
    if (!c1cs) {
        // 0x800FBB3C: nop
    
            goto L_800FBB58;
    }
    // 0x800FBB3C: nop

    // 0x800FBB40: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800FBB44: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800FBB48: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800FBB4C: nop

    // 0x800FBB50: bc1tl       L_800FBBC8
    if (c1cs) {
        // 0x800FBB54: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBBC8;
    }
    goto skip_3;
    // 0x800FBB54: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_3:
L_800FBB58:
    // 0x800FBB58: div         $zero, $t0, $s5
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r21)));
    // 0x800FBB5C: sub.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x800FBB60: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800FBB64: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800FBB68: mflo        $a0
    ctx->r4 = lo;
    // 0x800FBB6C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800FBB70: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x800FBB74: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x800FBB78: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800FBB7C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800FBB80: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x800FBB84: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x800FBB88: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x800FBB8C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x800FBB90: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x800FBB94: bne         $s5, $zero, L_800FBBA0
    if (ctx->r21 != 0) {
        // 0x800FBB98: nop
    
            goto L_800FBBA0;
    }
    // 0x800FBB98: nop

    // 0x800FBB9C: break       7
    do_break(2148514716);
L_800FBBA0:
    // 0x800FBBA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBBA4: bne         $s5, $at, L_800FBBB8
    if (ctx->r21 != ctx->r1) {
        // 0x800FBBA8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FBBB8;
    }
    // 0x800FBBA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FBBAC: bne         $t0, $at, L_800FBBB8
    if (ctx->r8 != ctx->r1) {
        // 0x800FBBB0: nop
    
            goto L_800FBBB8;
    }
    // 0x800FBBB0: nop

    // 0x800FBBB4: break       6
    do_break(2148514740);
L_800FBBB8:
    // 0x800FBBB8: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x800FBBBC: jal         0x80017534
    // 0x800FBBC0: nop

    func_80017534(rdram, ctx);
        goto after_7;
    // 0x800FBBC0: nop

    after_7:
    // 0x800FBBC4: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FBBC8:
    // 0x800FBBC8: sltu        $at, $s0, $s7
    ctx->r1 = ctx->r16 < ctx->r23 ? 1 : 0;
    // 0x800FBBCC: bnel        $at, $zero, L_800FB9E8
    if (ctx->r1 != 0) {
        // 0x800FBBD0: lh          $t6, 0x28($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X28);
            goto L_800FB9E8;
    }
    goto skip_4;
    // 0x800FBBD0: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    skip_4:
    // 0x800FBBD4: jal         0x800175F0
    // 0x800FBBD8: nop

    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x800FBBD8: nop

    after_8:
    // 0x800FBBDC: jal         0x800FDC58
    // 0x800FBBE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800FDC58(rdram, ctx);
        goto after_9;
    // 0x800FBBE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x800FBBE4: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800FBBE8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x800FBBEC: lh          $t2, 0x28($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X28);
L_800FBBF0:
    // 0x800FBBF0: bltzl       $t2, L_800FBCB8
    if (SIGNED(ctx->r10) < 0) {
        // 0x800FBBF4: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBCB8;
    }
    goto skip_5;
    // 0x800FBBF4: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_5:
    // 0x800FBBF8: subu        $t3, $s0, $s4
    ctx->r11 = SUB32(ctx->r16, ctx->r20);
    // 0x800FBBFC: div         $zero, $t3, $s5
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r21)));
    // 0x800FBC00: mflo        $s1
    ctx->r17 = lo;
    // 0x800FBC04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FBC08: bne         $s5, $zero, L_800FBC14
    if (ctx->r21 != 0) {
        // 0x800FBC0C: nop
    
            goto L_800FBC14;
    }
    // 0x800FBC0C: nop

    // 0x800FBC10: break       7
    do_break(2148514832);
L_800FBC14:
    // 0x800FBC14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBC18: bne         $s5, $at, L_800FBC2C
    if (ctx->r21 != ctx->r1) {
        // 0x800FBC1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FBC2C;
    }
    // 0x800FBC1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FBC20: bne         $t3, $at, L_800FBC2C
    if (ctx->r11 != ctx->r1) {
        // 0x800FBC24: nop
    
            goto L_800FBC2C;
    }
    // 0x800FBC24: nop

    // 0x800FBC28: break       6
    do_break(2148514856);
L_800FBC2C:
    // 0x800FBC2C: jal         0x80017EC0
    // 0x800FBC30: nop

    func_80017EC0(rdram, ctx);
        goto after_10;
    // 0x800FBC30: nop

    after_10:
    // 0x800FBC34: andi        $s3, $s1, 0xFF
    ctx->r19 = ctx->r17 & 0XFF;
    // 0x800FBC38: jal         0x800170D4
    // 0x800FBC3C: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_800170D4(rdram, ctx);
        goto after_11;
    // 0x800FBC3C: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_11:
    // 0x800FBC40: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800FBC44: jal         0x80017070
    // 0x800FBC48: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_80017070(rdram, ctx);
        goto after_12;
    // 0x800FBC48: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_12:
    // 0x800FBC4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FBC50: jal         0x800177C4
    // 0x800FBC54: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_800177C4(rdram, ctx);
        goto after_13;
    // 0x800FBC54: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_13:
    // 0x800FBC58: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800FBC5C: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
    // 0x800FBC60: and         $s2, $s2, $v1
    ctx->r18 = ctx->r18 & ctx->r3;
    // 0x800FBC64: beq         $v0, $zero, L_800FBC74
    if (ctx->r2 == 0) {
        // 0x800FBC68: and         $a0, $t4, $v1
        ctx->r4 = ctx->r12 & ctx->r3;
            goto L_800FBC74;
    }
    // 0x800FBC68: and         $a0, $t4, $v1
    ctx->r4 = ctx->r12 & ctx->r3;
    // 0x800FBC6C: bne         $a0, $zero, L_800FBC84
    if (ctx->r4 != 0) {
        // 0x800FBC70: nop
    
            goto L_800FBC84;
    }
    // 0x800FBC70: nop

L_800FBC74:
    // 0x800FBC74: bnel        $v0, $zero, L_800FBCB8
    if (ctx->r2 != 0) {
        // 0x800FBC78: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBCB8;
    }
    goto skip_6;
    // 0x800FBC78: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_6:
    // 0x800FBC7C: bnel        $s2, $zero, L_800FBCB8
    if (ctx->r18 != 0) {
        // 0x800FBC80: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBCB8;
    }
    goto skip_7;
    // 0x800FBC80: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_7:
L_800FBC84:
    // 0x800FBC84: bnel        $s2, $zero, L_800FBC98
    if (ctx->r18 != 0) {
        // 0x800FBC88: andi        $a0, $s3, 0xFF
        ctx->r4 = ctx->r19 & 0XFF;
            goto L_800FBC98;
    }
    goto skip_8;
    // 0x800FBC88: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    skip_8:
    // 0x800FBC8C: beq         $a0, $zero, L_800FBCA8
    if (ctx->r4 == 0) {
        // 0x800FBC90: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800FBCA8;
    }
    // 0x800FBC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FBC94: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
L_800FBC98:
    // 0x800FBC98: jal         0x80017404
    // 0x800FBC9C: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    func_80017404(rdram, ctx);
        goto after_14;
    // 0x800FBC9C: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    after_14:
    // 0x800FBCA0: b           L_800FBCB4
    // 0x800FBCA4: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
        goto L_800FBCB4;
    // 0x800FBCA4: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
L_800FBCA8:
    // 0x800FBCA8: jal         0x80017404
    // 0x800FBCAC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_80017404(rdram, ctx);
        goto after_15;
    // 0x800FBCAC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_15:
    // 0x800FBCB0: sb          $s6, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r22;
L_800FBCB4:
    // 0x800FBCB4: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FBCB8:
    // 0x800FBCB8: sltu        $at, $s0, $s7
    ctx->r1 = ctx->r16 < ctx->r23 ? 1 : 0;
    // 0x800FBCBC: bnel        $at, $zero, L_800FBBF0
    if (ctx->r1 != 0) {
        // 0x800FBCC0: lh          $t2, 0x28($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X28);
            goto L_800FBBF0;
    }
    goto skip_9;
    // 0x800FBCC0: lh          $t2, 0x28($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X28);
    skip_9:
    // 0x800FBCC4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FBCC8: addiu       $s1, $s1, 0x59B0
    ctx->r17 = ADD32(ctx->r17, 0X59B0);
    // 0x800FBCCC: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x800FBCD0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800FBCD4: beql        $t5, $zero, L_800FBE9C
    if (ctx->r13 == 0) {
        // 0x800FBCD8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800FBE9C;
    }
    goto skip_10;
    // 0x800FBCD8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_10:
    // 0x800FBCDC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800FBCE0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x800FBCE4: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
L_800FBCE8:
    // 0x800FBCE8: bltzl       $t6, L_800FBE8C
    if (SIGNED(ctx->r14) < 0) {
        // 0x800FBCEC: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBE8C;
    }
    goto skip_11;
    // 0x800FBCEC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_11:
    // 0x800FBCF0: lh          $a0, 0x2A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2A);
    // 0x800FBCF4: beql        $a0, $zero, L_800FBE8C
    if (ctx->r4 == 0) {
        // 0x800FBCF8: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBE8C;
    }
    goto skip_12;
    // 0x800FBCF8: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_12:
    // 0x800FBCFC: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FBD00: c.lt.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl < ctx->f10.fl;
    // 0x800FBD04: nop

    // 0x800FBD08: bc1f        L_800FBD2C
    if (!c1cs) {
        // 0x800FBD0C: nop
    
            goto L_800FBD2C;
    }
    // 0x800FBD0C: nop

    // 0x800FBD10: jal         0x800D8FF8
    // 0x800FBD14: nop

    func_800D8FF8(rdram, ctx);
        goto after_16;
    // 0x800FBD14: nop

    after_16:
    // 0x800FBD18: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FBD1C: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x800FBD20: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x800FBD24: b           L_800FBE88
    // 0x800FBD28: sb          $s6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r22;
        goto L_800FBE88;
    // 0x800FBD28: sb          $s6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r22;
L_800FBD2C:
    // 0x800FBD2C: bgezl       $a0, L_800FBDE8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800FBD30: lw          $v1, 0x20($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X20);
            goto L_800FBDE8;
    }
    goto skip_13;
    // 0x800FBD30: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    skip_13:
    // 0x800FBD34: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x800FBD38: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    // 0x800FBD3C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800FBD40: beq         $t9, $zero, L_800FBD6C
    if (ctx->r25 == 0) {
        // 0x800FBD44: sw          $t8, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r24;
            goto L_800FBD6C;
    }
    // 0x800FBD44: sw          $t8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r24;
    // 0x800FBD48: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x800FBD4C: bnel        $t0, $zero, L_800FBD70
    if (ctx->r8 != 0) {
        // 0x800FBD50: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_800FBD70;
    }
    goto skip_14;
    // 0x800FBD50: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_14:
    // 0x800FBD54: bgtz        $t8, L_800FBD6C
    if (SIGNED(ctx->r24) > 0) {
        // 0x800FBD58: or          $t1, $t8, $zero
        ctx->r9 = ctx->r24 | 0;
            goto L_800FBD6C;
    }
    // 0x800FBD58: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x800FBD5C: jal         0x800FB774
    // 0x800FBD60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB774(rdram, ctx);
        goto after_17;
    // 0x800FBD60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x800FBD64: b           L_800FBE8C
    // 0x800FBD68: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
        goto L_800FBE8C;
    // 0x800FBD68: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FBD6C:
    // 0x800FBD6C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_800FBD70:
    // 0x800FBD70: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x800FBD74: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800FBD78: bnel        $at, $zero, L_800FBD90
    if (ctx->r1 != 0) {
        // 0x800FBD7C: sb          $s6, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r22;
            goto L_800FBD90;
    }
    goto skip_15;
    // 0x800FBD7C: sb          $s6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r22;
    skip_15:
    // 0x800FBD80: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x800FBD84: b           L_800FBD90
    // 0x800FBD88: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
        goto L_800FBD90;
    // 0x800FBD88: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    // 0x800FBD8C: sb          $s6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r22;
L_800FBD90:
    // 0x800FBD90: lbu         $t3, 0x34($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X34);
    // 0x800FBD94: bnel        $t3, $zero, L_800FBE8C
    if (ctx->r11 != 0) {
        // 0x800FBD98: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBE8C;
    }
    goto skip_16;
    // 0x800FBD98: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_16:
    // 0x800FBD9C: subu        $t4, $s0, $s4
    ctx->r12 = SUB32(ctx->r16, ctx->r20);
    // 0x800FBDA0: div         $zero, $t4, $s5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r21)));
    // 0x800FBDA4: mflo        $a0
    ctx->r4 = lo;
    // 0x800FBDA8: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x800FBDAC: bne         $s5, $zero, L_800FBDB8
    if (ctx->r21 != 0) {
        // 0x800FBDB0: nop
    
            goto L_800FBDB8;
    }
    // 0x800FBDB0: nop

    // 0x800FBDB4: break       7
    do_break(2148515252);
L_800FBDB8:
    // 0x800FBDB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBDBC: bne         $s5, $at, L_800FBDD0
    if (ctx->r21 != ctx->r1) {
        // 0x800FBDC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FBDD0;
    }
    // 0x800FBDC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FBDC4: bne         $t4, $at, L_800FBDD0
    if (ctx->r12 != ctx->r1) {
        // 0x800FBDC8: nop
    
            goto L_800FBDD0;
    }
    // 0x800FBDC8: nop

    // 0x800FBDCC: break       6
    do_break(2148515276);
L_800FBDD0:
    // 0x800FBDD0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800FBDD4: jal         0x80017404
    // 0x800FBDD8: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    func_80017404(rdram, ctx);
        goto after_18;
    // 0x800FBDD8: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    after_18:
    // 0x800FBDDC: b           L_800FBE8C
    // 0x800FBDE0: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
        goto L_800FBE8C;
    // 0x800FBDE0: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x800FBDE4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
L_800FBDE8:
    // 0x800FBDE8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800FBDEC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800FBDF0: beql        $at, $zero, L_800FBE88
    if (ctx->r1 == 0) {
        // 0x800FBDF4: sh          $zero, 0x2A($s0)
        MEM_H(0X2A, ctx->r16) = 0;
            goto L_800FBE88;
    }
    goto skip_17;
    // 0x800FBDF4: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    skip_17:
    // 0x800FBDF8: bne         $v1, $zero, L_800FBE10
    if (ctx->r3 != 0) {
        // 0x800FBDFC: subu        $t9, $s0, $s4
        ctx->r25 = SUB32(ctx->r16, ctx->r20);
            goto L_800FBE10;
    }
    // 0x800FBDFC: subu        $t9, $s0, $s4
    ctx->r25 = SUB32(ctx->r16, ctx->r20);
    // 0x800FBE00: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x800FBE04: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x800FBE08: lh          $a0, 0x2A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2A);
    // 0x800FBE0C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_800FBE10:
    // 0x800FBE10: addu        $t6, $v1, $a0
    ctx->r14 = ADD32(ctx->r3, ctx->r4);
    // 0x800FBE14: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800FBE18: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x800FBE1C: bne         $at, $zero, L_800FBE30
    if (ctx->r1 != 0) {
        // 0x800FBE20: or          $t7, $t6, $zero
        ctx->r15 = ctx->r14 | 0;
            goto L_800FBE30;
    }
    // 0x800FBE20: or          $t7, $t6, $zero
    ctx->r15 = ctx->r14 | 0;
    // 0x800FBE24: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x800FBE28: b           L_800FBE34
    // 0x800FBE2C: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
        goto L_800FBE34;
    // 0x800FBE2C: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
L_800FBE30:
    // 0x800FBE30: sb          $s6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r22;
L_800FBE34:
    // 0x800FBE34: lbu         $t8, 0x34($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X34);
    // 0x800FBE38: bnel        $t8, $zero, L_800FBE8C
    if (ctx->r24 != 0) {
        // 0x800FBE3C: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FBE8C;
    }
    goto skip_18;
    // 0x800FBE3C: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_18:
    // 0x800FBE40: div         $zero, $t9, $s5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r21)));
    // 0x800FBE44: mflo        $a0
    ctx->r4 = lo;
    // 0x800FBE48: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x800FBE4C: bne         $s5, $zero, L_800FBE58
    if (ctx->r21 != 0) {
        // 0x800FBE50: nop
    
            goto L_800FBE58;
    }
    // 0x800FBE50: nop

    // 0x800FBE54: break       7
    do_break(2148515412);
L_800FBE58:
    // 0x800FBE58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBE5C: bne         $s5, $at, L_800FBE70
    if (ctx->r21 != ctx->r1) {
        // 0x800FBE60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FBE70;
    }
    // 0x800FBE60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FBE64: bne         $t9, $at, L_800FBE70
    if (ctx->r25 != ctx->r1) {
        // 0x800FBE68: nop
    
            goto L_800FBE70;
    }
    // 0x800FBE68: nop

    // 0x800FBE6C: break       6
    do_break(2148515436);
L_800FBE70:
    // 0x800FBE70: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800FBE74: jal         0x80017404
    // 0x800FBE78: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    func_80017404(rdram, ctx);
        goto after_19;
    // 0x800FBE78: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    after_19:
    // 0x800FBE7C: b           L_800FBE8C
    // 0x800FBE80: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
        goto L_800FBE8C;
    // 0x800FBE80: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x800FBE84: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
L_800FBE88:
    // 0x800FBE88: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FBE8C:
    // 0x800FBE8C: sltu        $at, $s0, $s7
    ctx->r1 = ctx->r16 < ctx->r23 ? 1 : 0;
    // 0x800FBE90: bnel        $at, $zero, L_800FBCE8
    if (ctx->r1 != 0) {
        // 0x800FBE94: lh          $t6, 0x28($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X28);
            goto L_800FBCE8;
    }
    goto skip_19;
    // 0x800FBE94: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    skip_19:
    // 0x800FBE98: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800FBE9C:
    // 0x800FBE9C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800FBEA0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBEA4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800FBEA8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800FBEAC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800FBEB0: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBEB4: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800FBEB8: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x800FBEBC: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x800FBEC0: jr          $ra
    // 0x800FBEC4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800FBEC4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800FBEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBEC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FBECC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800FBED0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800FBED4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FBED8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800FBEDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800FBEE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800FBEE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FBEE8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800FBEEC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800FBEF0: jal         0x800B3034
    // 0x800FBEF4: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    func_800B3034(rdram, ctx);
        goto after_0;
    // 0x800FBEF4: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    after_0:
    // 0x800FBEF8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800FBEFC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800FBF00: addiu       $s1, $zero, 0x7FFF
    ctx->r17 = ADD32(0, 0X7FFF);
    // 0x800FBF04: lui         $s2, 0x4000
    ctx->r18 = S32(0X4000 << 16);
    // 0x800FBF08: bne         $at, $zero, L_800FBF6C
    if (ctx->r1 != 0) {
        // 0x800FBF0C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_800FBF6C;
    }
    // 0x800FBF0C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800FBF10: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
L_800FBF14:
    // 0x800FBF14: jal         0x800B31B8
    // 0x800FBF18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_1;
    // 0x800FBF18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800FBF1C: beq         $v0, $zero, L_800FBF5C
    if (ctx->r2 == 0) {
        // 0x800FBF20: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_800FBF5C;
    }
    // 0x800FBF20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FBF24: jal         0x800B301C
    // 0x800FBF28: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    func_800B301C(rdram, ctx);
        goto after_2;
    // 0x800FBF28: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    after_2:
    // 0x800FBF2C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800FBF30: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800FBF34: bnel        $at, $zero, L_800FBF58
    if (ctx->r1 != 0) {
        // 0x800FBF38: or          $s1, $v1, $zero
        ctx->r17 = ctx->r3 | 0;
            goto L_800FBF58;
    }
    goto skip_0;
    // 0x800FBF38: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    skip_0:
    // 0x800FBF3C: bnel        $s1, $v1, L_800FBF60
    if (ctx->r17 != ctx->r3) {
        // 0x800FBF40: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800FBF60;
    }
    goto skip_1;
    // 0x800FBF40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800FBF44: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800FBF48: slt         $at, $t6, $s2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800FBF4C: beql        $at, $zero, L_800FBF60
    if (ctx->r1 == 0) {
        // 0x800FBF50: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800FBF60;
    }
    goto skip_2;
    // 0x800FBF50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x800FBF54: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_800FBF58:
    // 0x800FBF58: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
L_800FBF5C:
    // 0x800FBF5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800FBF60:
    // 0x800FBF60: slt         $at, $s0, $s4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800FBF64: bnel        $at, $zero, L_800FBF14
    if (ctx->r1 != 0) {
        // 0x800FBF68: lw          $a0, 0x38($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X38);
            goto L_800FBF14;
    }
    goto skip_3;
    // 0x800FBF68: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    skip_3:
L_800FBF6C:
    // 0x800FBF6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800FBF70: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x800FBF74: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800FBF78: sw          $s2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r18;
    // 0x800FBF7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBF80: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800FBF84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800FBF88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800FBF8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBF90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FBF94: jr          $ra
    // 0x800FBF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FBF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800FBF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBF9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FBFA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FBFA4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FBFA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FBFAC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FBFB0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FBFB4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FBFB8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FBFBC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x800FBFC0: lw          $s2, 0x0($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X0);
    // 0x800FBFC4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800FBFC8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800FBFCC: lw          $s0, 0x0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X0);
    // 0x800FBFD0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x800FBFD4: beq         $s0, $zero, L_800FBFF0
    if (ctx->r16 == 0) {
        // 0x800FBFD8: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_800FBFF0;
    }
    // 0x800FBFD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FBFDC: jal         0x800B31B8
    // 0x800FBFE0: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    func_800B31B8(rdram, ctx);
        goto after_0;
    // 0x800FBFE0: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    after_0:
    // 0x800FBFE4: bne         $v0, $zero, L_800FBFF0
    if (ctx->r2 != 0) {
        // 0x800FBFE8: nop
    
            goto L_800FBFF0;
    }
    // 0x800FBFE8: nop

    // 0x800FBFEC: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
L_800FBFF0:
    // 0x800FBFF0: bgez        $s2, L_800FC074
    if (SIGNED(ctx->r18) >= 0) {
        // 0x800FBFF4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800FC074;
    }
    // 0x800FBFF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FBFF8: jal         0x800B301C
    // 0x800FBFFC: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    func_800B301C(rdram, ctx);
        goto after_1;
    // 0x800FBFFC: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_1:
    // 0x800FC000: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FC004: jal         0x80017764
    // 0x800FC008: lh          $a0, 0x28($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X28);
    func_80017764(rdram, ctx);
        goto after_2;
    // 0x800FC008: lh          $a0, 0x28($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X28);
    after_2:
    // 0x800FC00C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800FC010: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800FC014: beq         $at, $zero, L_800FC02C
    if (ctx->r1 == 0) {
        // 0x800FC018: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_800FC02C;
    }
    // 0x800FC018: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x800FC01C: jal         0x80017764
    // 0x800FC020: lh          $a0, 0x28($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X28);
    func_80017764(rdram, ctx);
        goto after_3;
    // 0x800FC020: lh          $a0, 0x28($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X28);
    after_3:
    // 0x800FC024: b           L_800FC02C
    // 0x800FC028: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_800FC02C;
    // 0x800FC028: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800FC02C:
    // 0x800FC02C: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x800FC030: beq         $s0, $zero, L_800FC074
    if (ctx->r16 == 0) {
        // 0x800FC034: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_800FC074;
    }
    // 0x800FC034: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FC038: jal         0x800B301C
    // 0x800FC03C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    func_800B301C(rdram, ctx);
        goto after_4;
    // 0x800FC03C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_4:
    // 0x800FC040: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800FC044: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800FC048: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800FC04C: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x800FC050: jal         0x800B32C0
    // 0x800FC054: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    func_800B32C0(rdram, ctx);
        goto after_5;
    // 0x800FC054: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_5:
    // 0x800FC058: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x800FC05C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800FC060: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FC064: jal         0x800FBEC8
    // 0x800FC068: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800FBEC8(rdram, ctx);
        goto after_6;
    // 0x800FC068: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x800FC06C: b           L_800FC10C
    // 0x800FC070: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800FC10C;
    // 0x800FC070: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800FC074:
    // 0x800FC074: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x800FC078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FC07C: bne         $s0, $zero, L_800FC0DC
    if (ctx->r16 != 0) {
        // 0x800FC080: nop
    
            goto L_800FC0DC;
    }
    // 0x800FC080: nop

    // 0x800FC084: jal         0x800B301C
    // 0x800FC088: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    func_800B301C(rdram, ctx);
        goto after_7;
    // 0x800FC088: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_7:
    // 0x800FC08C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800FC090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FC094: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800FC098: slt         $at, $v1, $s2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800FC09C: bne         $at, $zero, L_800FC0BC
    if (ctx->r1 != 0) {
        // 0x800FC0A0: nop
    
            goto L_800FC0BC;
    }
    // 0x800FC0A0: nop

    // 0x800FC0A4: bne         $s2, $v1, L_800FC0CC
    if (ctx->r18 != ctx->r3) {
        // 0x800FC0A8: lw          $t1, 0x34($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X34);
            goto L_800FC0CC;
    }
    // 0x800FC0A8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800FC0AC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x800FC0B0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800FC0B4: bnel        $at, $zero, L_800FC0D0
    if (ctx->r1 != 0) {
        // 0x800FC0B8: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_800FC0D0;
    }
    goto skip_0;
    // 0x800FC0B8: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    skip_0:
L_800FC0BC:
    // 0x800FC0BC: jal         0x800FB650
    // 0x800FC0C0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800FB650(rdram, ctx);
        goto after_8;
    // 0x800FC0C0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x800FC0C4: b           L_800FC0DC
    // 0x800FC0C8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
        goto L_800FC0DC;
    // 0x800FC0C8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_800FC0CC:
    // 0x800FC0CC: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
L_800FC0D0:
    // 0x800FC0D0: jal         0x800B3044
    // 0x800FC0D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800B3044(rdram, ctx);
        goto after_9;
    // 0x800FC0D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x800FC0D8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_800FC0DC:
    // 0x800FC0DC: beq         $s0, $zero, L_800FC0F8
    if (ctx->r16 == 0) {
        // 0x800FC0E0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_800FC0F8;
    }
    // 0x800FC0E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FC0E4: jal         0x800B301C
    // 0x800FC0E8: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    func_800B301C(rdram, ctx);
        goto after_10;
    // 0x800FC0E8: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_10:
    // 0x800FC0EC: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x800FC0F0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800FC0F4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_800FC0F8:
    // 0x800FC0F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FC0FC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800FC100: jal         0x800FBEC8
    // 0x800FC104: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_800FBEC8(rdram, ctx);
        goto after_11;
    // 0x800FC104: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_11:
    // 0x800FC108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800FC10C:
    // 0x800FC10C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC110: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC114: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC118: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FC11C: jr          $ra
    // 0x800FC120: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800FC120: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800FC124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC124: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FC128: lh          $t6, 0x5988($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5988);
    // 0x800FC12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC134: beq         $a0, $t6, L_800FC198
    if (ctx->r4 == ctx->r14) {
        // 0x800FC138: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800FC198;
    }
    // 0x800FC138: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800FC13C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FC140: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    // 0x800FC144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC148: jal         0x800FB6E0
    // 0x800FC14C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800FB6E0(rdram, ctx);
        goto after_0;
    // 0x800FC14C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800FC150: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800FC154: jal         0x800172D4
    // 0x800FC158: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800172D4(rdram, ctx);
        goto after_1;
    // 0x800FC158: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x800FC15C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800FC160: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FC164: jal         0x80017764
    // 0x800FC168: sh          $a0, 0x5988($at)
    MEM_H(0X5988, ctx->r1) = ctx->r4;
    func_80017764(rdram, ctx);
        goto after_2;
    // 0x800FC168: sh          $a0, 0x5988($at)
    MEM_H(0X5988, ctx->r1) = ctx->r4;
    after_2:
    // 0x800FC16C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FC170: sw          $v0, 0x5980($at)
    MEM_W(0X5980, ctx->r1) = ctx->r2;
    // 0x800FC174: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FC178: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC17C: sh          $zero, 0x598A($at)
    MEM_H(0X598A, ctx->r1) = 0;
    // 0x800FC180: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FC184: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FC188: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800FC18C: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    // 0x800FC190: jal         0x800FB6C0
    // 0x800FC194: swc1        $f4, 0x5964($at)
    MEM_W(0X5964, ctx->r1) = ctx->f4.u32l;
    func_800FB6C0(rdram, ctx);
        goto after_3;
    // 0x800FC194: swc1        $f4, 0x5964($at)
    MEM_W(0X5964, ctx->r1) = ctx->f4.u32l;
    after_3:
L_800FC198:
    // 0x800FC198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC1A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC1AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC1B0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FC1B4: jal         0x800FB774
    // 0x800FC1B8: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    func_800FB774(rdram, ctx);
        goto after_0;
    // 0x800FC1B8: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    after_0:
    // 0x800FC1BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC1C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC1CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FC1D0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FC1D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC1D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FC1DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC1E0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC1E4: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800FC1E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800FC1EC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800FC1F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FC1F4: addiu       $s3, $s3, 0x5960
    ctx->r19 = ADD32(ctx->r19, 0X5960);
    // 0x800FC1F8: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC1FC: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
L_800FC200:
    // 0x800FC200: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800FC204: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800FC208: bltzl       $a0, L_800FC21C
    if (SIGNED(ctx->r4) < 0) {
        // 0x800FC20C: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC21C;
    }
    goto skip_0;
    // 0x800FC20C: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC210: jal         0x800FCB00
    // 0x800FC214: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800FCB00(rdram, ctx);
        goto after_0;
    // 0x800FC214: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800FC218: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC21C:
    // 0x800FC21C: bnel        $s0, $s3, L_800FC200
    if (ctx->r16 != ctx->r19) {
        // 0x800FC220: lh          $a0, 0x28($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X28);
            goto L_800FC200;
    }
    goto skip_1;
    // 0x800FC220: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    skip_1:
    // 0x800FC224: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FC228: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC22C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC230: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC234: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FC238: jr          $ra
    // 0x800FC23C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FC23C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FC240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC240: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FC244: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FC248: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC24C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FC250: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC254: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC258: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800FC25C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800FC260: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800FC264: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FC268: addiu       $s3, $s3, 0x5960
    ctx->r19 = ADD32(ctx->r19, 0X5960);
    // 0x800FC26C: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC270: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
L_800FC274:
    // 0x800FC274: bltzl       $a0, L_800FC2A0
    if (SIGNED(ctx->r4) < 0) {
        // 0x800FC278: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC2A0;
    }
    goto skip_0;
    // 0x800FC278: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC27C: jal         0x800FE7A8
    // 0x800FC280: nop

    func_800FE7A8(rdram, ctx);
        goto after_0;
    // 0x800FC280: nop

    after_0:
    // 0x800FC284: bne         $v0, $zero, L_800FC29C
    if (ctx->r2 != 0) {
        // 0x800FC288: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_800FC29C;
    }
    // 0x800FC288: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800FC28C: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    // 0x800FC290: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800FC294: jal         0x800FCB00
    // 0x800FC298: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800FCB00(rdram, ctx);
        goto after_1;
    // 0x800FC298: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_800FC29C:
    // 0x800FC29C: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC2A0:
    // 0x800FC2A0: bnel        $s0, $s3, L_800FC274
    if (ctx->r16 != ctx->r19) {
        // 0x800FC2A4: lh          $a0, 0x28($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X28);
            goto L_800FC274;
    }
    goto skip_1;
    // 0x800FC2A4: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    skip_1:
    // 0x800FC2A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FC2AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC2B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC2B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC2B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FC2BC: jr          $ra
    // 0x800FC2C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FC2C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FC2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC2C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FC2C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC2CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC2D0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FC2D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FC2D8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC2DC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FC2E0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800FC2E4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800FC2E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FC2EC: addiu       $s1, $s1, 0x5960
    ctx->r17 = ADD32(ctx->r17, 0X5960);
    // 0x800FC2F0: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC2F4: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
L_800FC2F8:
    // 0x800FC2F8: bltzl       $a0, L_800FC324
    if (SIGNED(ctx->r4) < 0) {
        // 0x800FC2FC: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC324;
    }
    goto skip_0;
    // 0x800FC2FC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC300: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x800FC304: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800FC308: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800FC30C: srl         $t7, $t6, 28
    ctx->r15 = S32(U32(ctx->r14) >> 28);
    // 0x800FC310: bnel        $t7, $zero, L_800FC324
    if (ctx->r15 != 0) {
        // 0x800FC314: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC324;
    }
    goto skip_1;
    // 0x800FC314: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_1:
    // 0x800FC318: jal         0x800FCB00
    // 0x800FC31C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800FCB00(rdram, ctx);
        goto after_0;
    // 0x800FC31C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800FC320: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC324:
    // 0x800FC324: bnel        $s0, $s1, L_800FC2F8
    if (ctx->r16 != ctx->r17) {
        // 0x800FC328: lh          $a0, 0x28($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X28);
            goto L_800FC2F8;
    }
    goto skip_2;
    // 0x800FC328: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    skip_2:
    // 0x800FC32C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FC330: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC334: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC338: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC33C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FC340: jr          $ra
    // 0x800FC344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FC344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FC348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC348: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FC34C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800FC350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FC354: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800FC358: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800FC35C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800FC360: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC364: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800FC368: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800FC36C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800FC370: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x800FC374: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FC378: addiu       $s4, $s4, 0x5960
    ctx->r20 = ADD32(ctx->r20, 0X5960);
    // 0x800FC37C: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC380: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
L_800FC384:
    // 0x800FC384: bltzl       $a0, L_800FC3B0
    if (SIGNED(ctx->r4) < 0) {
        // 0x800FC388: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC3B0;
    }
    goto skip_0;
    // 0x800FC388: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC38C: jal         0x800FE7A8
    // 0x800FC390: nop

    func_800FE7A8(rdram, ctx);
        goto after_0;
    // 0x800FC390: nop

    after_0:
    // 0x800FC394: bne         $v0, $zero, L_800FC3AC
    if (ctx->r2 != 0) {
        // 0x800FC398: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_800FC3AC;
    }
    // 0x800FC398: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800FC39C: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    // 0x800FC3A0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800FC3A4: jal         0x800FCB00
    // 0x800FC3A8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_800FCB00(rdram, ctx);
        goto after_1;
    // 0x800FC3A8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_1:
L_800FC3AC:
    // 0x800FC3AC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC3B0:
    // 0x800FC3B0: bnel        $s0, $s4, L_800FC384
    if (ctx->r16 != ctx->r20) {
        // 0x800FC3B4: lh          $a0, 0x28($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X28);
            goto L_800FC384;
    }
    goto skip_1;
    // 0x800FC3B4: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    skip_1:
    // 0x800FC3B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FC3BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FC3C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC3C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800FC3C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800FC3CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800FC3D0: jr          $ra
    // 0x800FC3D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FC3D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800FC3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC3D8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800FC3DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC3E8: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x800FC3EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FC3F0: bc1f        L_800FC400
    if (!c1cs) {
        // 0x800FC3F4: nop
    
            goto L_800FC400;
    }
    // 0x800FC3F4: nop

    // 0x800FC3F8: b           L_800FC4A0
    // 0x800FC3FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_800FC4A0;
    // 0x800FC3FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_800FC400:
    // 0x800FC400: bne         $a2, $at, L_800FC420
    if (ctx->r6 != ctx->r1) {
        // 0x800FC404: nop
    
            goto L_800FC420;
    }
    // 0x800FC404: nop

    // 0x800FC408: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800FC40C: jal         0x80017764
    // 0x800FC410: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_80017764(rdram, ctx);
        goto after_0;
    // 0x800FC410: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800FC414: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC418: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800FC41C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_800FC420:
    // 0x800FC420: bnel        $a1, $a2, L_800FC434
    if (ctx->r5 != ctx->r6) {
        // 0x800FC424: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_800FC434;
    }
    goto skip_0;
    // 0x800FC424: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_0:
    // 0x800FC428: b           L_800FC4A0
    // 0x800FC42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800FC4A0;
    // 0x800FC42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800FC430: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_800FC434:
    // 0x800FC434: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800FC438: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x800FC43C: nop

    // 0x800FC440: bc1fl       L_800FC454
    if (!c1cs) {
        // 0x800FC444: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_800FC454;
    }
    goto skip_1;
    // 0x800FC444: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_1:
    // 0x800FC448: b           L_800FC49C
    // 0x800FC44C: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
        goto L_800FC49C;
    // 0x800FC44C: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
    // 0x800FC450: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_800FC454:
    // 0x800FC454: subu        $t6, $a1, $a2
    ctx->r14 = SUB32(ctx->r5, ctx->r6);
    // 0x800FC458: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800FC45C: mul.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800FC460: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FC464: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FC468: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FC46C: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800FC470: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FC474: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800FC478: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x800FC47C: nop

    // 0x800FC480: bgez        $v0, L_800FC490
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800FC484: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800FC490;
    }
    // 0x800FC484: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800FC488: b           L_800FC49C
    // 0x800FC48C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_800FC49C;
    // 0x800FC48C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_800FC490:
    // 0x800FC490: bnel        $v0, $zero, L_800FC4A0
    if (ctx->r2 != 0) {
        // 0x800FC494: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800FC4A0;
    }
    goto skip_2;
    // 0x800FC494: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_2:
    // 0x800FC498: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800FC49C:
    // 0x800FC49C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800FC4A0:
    // 0x800FC4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC4A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC4B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FC4B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC4BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800FC4C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800FC4C4: bne         $a1, $at, L_800FC4E8
    if (ctx->r5 != ctx->r1) {
        // 0x800FC4C8: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_800FC4E8;
    }
    // 0x800FC4C8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800FC4CC: jal         0x800FB5F8
    // 0x800FC4D0: nop

    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC4D0: nop

    after_0:
    // 0x800FC4D4: bnel        $v0, $zero, L_800FC4E8
    if (ctx->r2 != 0) {
        // 0x800FC4D8: lw          $a1, 0x20($v0)
        ctx->r5 = MEM_W(ctx->r2, 0X20);
            goto L_800FC4E8;
    }
    goto skip_0;
    // 0x800FC4D8: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
    skip_0:
    // 0x800FC4DC: b           L_800FC4F8
    // 0x800FC4E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FC4F8;
    // 0x800FC4E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FC4E4: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
L_800FC4E8:
    // 0x800FC4E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800FC4EC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800FC4F0: jal         0x800FC3D8
    // 0x800FC4F4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_800FC3D8(rdram, ctx);
        goto after_1;
    // 0x800FC4F4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
L_800FC4F8:
    // 0x800FC4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC500: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC50C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FC510: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x800FC514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC518: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FC51C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FC520: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800FC524: bne         $a1, $s0, L_800FC538
    if (ctx->r5 != ctx->r16) {
        // 0x800FC528: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_800FC538;
    }
    // 0x800FC528: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800FC52C: jal         0x80017764
    // 0x800FC530: nop

    func_80017764(rdram, ctx);
        goto after_0;
    // 0x800FC530: nop

    after_0:
    // 0x800FC534: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_800FC538:
    // 0x800FC538: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FC53C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FC540: bne         $t7, $s0, L_800FC54C
    if (ctx->r15 != ctx->r16) {
        // 0x800FC544: nop
    
            goto L_800FC54C;
    }
    // 0x800FC544: nop

    // 0x800FC548: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_800FC54C:
    // 0x800FC54C: jal         0x800FB5F8
    // 0x800FC550: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800FB5F8(rdram, ctx);
        goto after_1;
    // 0x800FC550: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800FC554: beq         $v0, $zero, L_800FC604
    if (ctx->r2 == 0) {
        // 0x800FC558: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FC604;
    }
    // 0x800FC558: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FC55C: lh          $t9, 0x28($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X28);
    // 0x800FC560: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800FC564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FC568: bltz        $t9, L_800FC578
    if (SIGNED(ctx->r25) < 0) {
        // 0x800FC56C: nop
    
            goto L_800FC578;
    }
    // 0x800FC56C: nop

    // 0x800FC570: beql        $t0, $zero, L_800FC5CC
    if (ctx->r8 == 0) {
        // 0x800FC574: lbu         $t5, 0x34($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X34);
            goto L_800FC5CC;
    }
    goto skip_0;
    // 0x800FC574: lbu         $t5, 0x34($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X34);
    skip_0:
L_800FC578:
    // 0x800FC578: jal         0x800FB6E0
    // 0x800FC57C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800FB6E0(rdram, ctx);
        goto after_2;
    // 0x800FC57C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800FC580: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800FC584: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC588: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    // 0x800FC58C: sb          $zero, 0x31($s0)
    MEM_B(0X31, ctx->r16) = 0;
    // 0x800FC590: sh          $t1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r9;
    // 0x800FC594: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x800FC598: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800FC59C: jal         0x800FB6C0
    // 0x800FC5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB6C0(rdram, ctx);
        goto after_3;
    // 0x800FC5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800FC5A4: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800FC5A8: addiu       $t2, $t2, 0x57D0
    ctx->r10 = ADD32(ctx->r10, 0X57D0);
    // 0x800FC5AC: subu        $a0, $s0, $t2
    ctx->r4 = SUB32(ctx->r16, ctx->r10);
    // 0x800FC5B0: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FC5B4: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x800FC5B8: mflo        $t3
    ctx->r11 = lo;
    // 0x800FC5BC: andi        $a0, $t3, 0xFF
    ctx->r4 = ctx->r11 & 0XFF;
    // 0x800FC5C0: jal         0x800172D4
    // 0x800FC5C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800172D4(rdram, ctx);
        goto after_4;
    // 0x800FC5C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x800FC5C8: lbu         $t5, 0x34($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X34);
L_800FC5CC:
    // 0x800FC5CC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FC5D0: addiu       $t6, $t6, 0x57D0
    ctx->r14 = ADD32(ctx->r14, 0X57D0);
    // 0x800FC5D4: bne         $t5, $zero, L_800FC5F4
    if (ctx->r13 != 0) {
        // 0x800FC5D8: subu        $a0, $s0, $t6
        ctx->r4 = SUB32(ctx->r16, ctx->r14);
            goto L_800FC5F4;
    }
    // 0x800FC5D8: subu        $a0, $s0, $t6
    ctx->r4 = SUB32(ctx->r16, ctx->r14);
    // 0x800FC5DC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FC5E0: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x800FC5E4: mflo        $t7
    ctx->r15 = lo;
    // 0x800FC5E8: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    // 0x800FC5EC: jal         0x80017404
    // 0x800FC5F0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    func_80017404(rdram, ctx);
        goto after_5;
    // 0x800FC5F0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    after_5:
L_800FC5F4:
    // 0x800FC5F4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FC5F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FC5FC: jal         0x800FB540
    // 0x800FC600: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    func_800FB540(rdram, ctx);
        goto after_6;
    // 0x800FC600: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    after_6:
L_800FC604:
    // 0x800FC604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FC60C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FC610: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC61C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FC624: jal         0x800FC508
    // 0x800FC628: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800FC508(rdram, ctx);
        goto after_0;
    // 0x800FC628: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x800FC62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC634: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC63C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800FC648: jal         0x800FC508
    // 0x800FC64C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800FC508(rdram, ctx);
        goto after_0;
    // 0x800FC64C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x800FC650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC658: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC668: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800FC66C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800FC670: jal         0x800FC508
    // 0x800FC674: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800FC508(rdram, ctx);
        goto after_0;
    // 0x800FC674: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x800FC678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC67C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC680: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC68C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC690: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800FC694: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FC698: jal         0x800FC508
    // 0x800FC69C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800FC508(rdram, ctx);
        goto after_0;
    // 0x800FC69C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800FC6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC6A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC6A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC6B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC6B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC6B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FC6BC: jal         0x800FB5F8
    // 0x800FC6C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC6C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800FC6C4: beq         $v0, $zero, L_800FC738
    if (ctx->r2 == 0) {
        // 0x800FC6C8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FC738;
    }
    // 0x800FC6C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FC6CC: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x800FC6D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800FC6D4: bgez        $t6, L_800FC730
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800FC6D8: nop
    
            goto L_800FC730;
    }
    // 0x800FC6D8: nop

    // 0x800FC6DC: jal         0x800FB6E0
    // 0x800FC6E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800FB6E0(rdram, ctx);
        goto after_1;
    // 0x800FC6E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800FC6E4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FC6E8: addiu       $t7, $t7, 0x57D0
    ctx->r15 = ADD32(ctx->r15, 0X57D0);
    // 0x800FC6EC: subu        $a0, $s0, $t7
    ctx->r4 = SUB32(ctx->r16, ctx->r15);
    // 0x800FC6F0: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FC6F4: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x800FC6F8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800FC6FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC700: mflo        $t8
    ctx->r24 = lo;
    // 0x800FC704: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
    // 0x800FC708: andi        $a0, $t8, 0xFF
    ctx->r4 = ctx->r24 & 0XFF;
    // 0x800FC70C: sh          $a1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r5;
    // 0x800FC710: jal         0x800172D4
    // 0x800FC714: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    func_800172D4(rdram, ctx);
        goto after_2;
    // 0x800FC714: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x800FC718: jal         0x80017764
    // 0x800FC71C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80017764(rdram, ctx);
        goto after_3;
    // 0x800FC71C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x800FC720: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800FC724: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x800FC728: jal         0x800FB6C0
    // 0x800FC72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB6C0(rdram, ctx);
        goto after_4;
    // 0x800FC72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_800FC730:
    // 0x800FC730: jal         0x800FB540
    // 0x800FC734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB540(rdram, ctx);
        goto after_5;
    // 0x800FC734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_800FC738:
    // 0x800FC738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC73C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FC740: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FC744: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC74C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC754: jal         0x800FB5F8
    // 0x800FC758: nop

    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC758: nop

    after_0:
    // 0x800FC75C: beq         $v0, $zero, L_800FC778
    if (ctx->r2 == 0) {
        // 0x800FC760: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FC778;
    }
    // 0x800FC760: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800FC764: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x800FC768: bltzl       $t6, L_800FC77C
    if (SIGNED(ctx->r14) < 0) {
        // 0x800FC76C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FC77C;
    }
    goto skip_0;
    // 0x800FC76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FC770: jal         0x800FB774
    // 0x800FC774: nop

    func_800FB774(rdram, ctx);
        goto after_1;
    // 0x800FC774: nop

    after_1:
L_800FC778:
    // 0x800FC778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FC77C:
    // 0x800FC77C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC780: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC78C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC790: jal         0x800FB5F8
    // 0x800FC794: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC794: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800FC798: beq         $v0, $zero, L_800FC7B4
    if (ctx->r2 == 0) {
        // 0x800FC79C: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_800FC7B4;
    }
    // 0x800FC79C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC7A0: lbu         $t0, 0x30($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X30);
    // 0x800FC7A4: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x800FC7A8: andi        $t1, $t0, 0xFF0F
    ctx->r9 = ctx->r8 & 0XFF0F;
    // 0x800FC7AC: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x800FC7B0: sb          $t2, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r10;
L_800FC7B4:
    // 0x800FC7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC7B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC7BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC7C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC7C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC7CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC7D0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC7D4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FC7D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC7DC: addiu       $s1, $s1, 0x59B0
    ctx->r17 = ADD32(ctx->r17, 0X59B0);
    // 0x800FC7E0: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC7E4: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
L_800FC7E8:
    // 0x800FC7E8: bltzl       $t6, L_800FC7FC
    if (SIGNED(ctx->r14) < 0) {
        // 0x800FC7EC: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC7FC;
    }
    goto skip_0;
    // 0x800FC7EC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC7F0: jal         0x800FB774
    // 0x800FC7F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB774(rdram, ctx);
        goto after_0;
    // 0x800FC7F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800FC7F8: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC7FC:
    // 0x800FC7FC: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800FC800: bnel        $at, $zero, L_800FC7E8
    if (ctx->r1 != 0) {
        // 0x800FC804: lh          $t6, 0x28($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X28);
            goto L_800FC7E8;
    }
    goto skip_1;
    // 0x800FC804: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    skip_1:
    // 0x800FC808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC80C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC810: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC814: jr          $ra
    // 0x800FC818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FC818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FC81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC81C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC820: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC824: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC828: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC82C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FC830: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC834: addiu       $s1, $s1, 0x59B0
    ctx->r17 = ADD32(ctx->r17, 0X59B0);
    // 0x800FC838: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC83C: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
L_800FC840:
    // 0x800FC840: bltzl       $a0, L_800FC864
    if (SIGNED(ctx->r4) < 0) {
        // 0x800FC844: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC864;
    }
    goto skip_0;
    // 0x800FC844: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC848: jal         0x800FE7A8
    // 0x800FC84C: nop

    func_800FE7A8(rdram, ctx);
        goto after_0;
    // 0x800FC84C: nop

    after_0:
    // 0x800FC850: bnel        $v0, $zero, L_800FC864
    if (ctx->r2 != 0) {
        // 0x800FC854: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC864;
    }
    goto skip_1;
    // 0x800FC854: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_1:
    // 0x800FC858: jal         0x800FB774
    // 0x800FC85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB774(rdram, ctx);
        goto after_1;
    // 0x800FC85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800FC860: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC864:
    // 0x800FC864: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800FC868: bnel        $at, $zero, L_800FC840
    if (ctx->r1 != 0) {
        // 0x800FC86C: lh          $a0, 0x28($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X28);
            goto L_800FC840;
    }
    goto skip_2;
    // 0x800FC86C: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    skip_2:
    // 0x800FC870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC874: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC878: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC87C: jr          $ra
    // 0x800FC880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FC880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FC884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC888: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC88C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC890: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FC894: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FC898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC89C: addiu       $s1, $s1, 0x59B0
    ctx->r17 = ADD32(ctx->r17, 0X59B0);
    // 0x800FC8A0: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FC8A4: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
L_800FC8A8:
    // 0x800FC8A8: bltzl       $t6, L_800FC8CC
    if (SIGNED(ctx->r14) < 0) {
        // 0x800FC8AC: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC8CC;
    }
    goto skip_0;
    // 0x800FC8AC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FC8B0: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x800FC8B4: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x800FC8B8: bnel        $t8, $zero, L_800FC8CC
    if (ctx->r24 != 0) {
        // 0x800FC8BC: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FC8CC;
    }
    goto skip_1;
    // 0x800FC8BC: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_1:
    // 0x800FC8C0: jal         0x800FB774
    // 0x800FC8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB774(rdram, ctx);
        goto after_0;
    // 0x800FC8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800FC8C8: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FC8CC:
    // 0x800FC8CC: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800FC8D0: bnel        $at, $zero, L_800FC8A8
    if (ctx->r1 != 0) {
        // 0x800FC8D4: lh          $t6, 0x28($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X28);
            goto L_800FC8A8;
    }
    goto skip_2;
    // 0x800FC8D4: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    skip_2:
    // 0x800FC8D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC8DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FC8E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FC8E4: jr          $ra
    // 0x800FC8E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FC8E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FC8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC8EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC8F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC8F4: jal         0x800FB5F8
    // 0x800FC8F8: nop

    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC8F8: nop

    after_0:
    // 0x800FC8FC: beq         $v0, $zero, L_800FC924
    if (ctx->r2 == 0) {
        // 0x800FC900: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800FC924;
    }
    // 0x800FC900: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FC904: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800FC908: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x800FC90C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC910: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FC914: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x800FC918: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x800FC91C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x800FC920: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
L_800FC924:
    // 0x800FC924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC92C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC93C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800FC940: jal         0x800FB5F8
    // 0x800FC944: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC944: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800FC948: beq         $v0, $zero, L_800FC96C
    if (ctx->r2 == 0) {
        // 0x800FC94C: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_800FC96C;
    }
    // 0x800FC94C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FC950: lbu         $t6, 0x30($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X30);
    // 0x800FC954: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x800FC958: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800FC95C: andi        $t7, $t6, 0xFFF0
    ctx->r15 = ctx->r14 & 0XFFF0;
    // 0x800FC960: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x800FC964: sb          $t8, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r24;
    // 0x800FC968: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
L_800FC96C:
    // 0x800FC96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC974: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC97C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FC980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC984: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800FC988: jal         0x800FB5F8
    // 0x800FC98C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FC98C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800FC990: beq         $v0, $zero, L_800FC9A4
    if (ctx->r2 == 0) {
        // 0x800FC994: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_800FC9A4;
    }
    // 0x800FC994: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FC998: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x800FC99C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800FC9A0: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
L_800FC9A4:
    // 0x800FC9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC9A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FC9AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FC9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC9B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FC9B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800FC9BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FC9C0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FC9C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FC9C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FC9CC: beq         $a0, $zero, L_800FC9F8
    if (ctx->r4 == 0) {
        // 0x800FC9D0: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800FC9F8;
    }
    // 0x800FC9D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FC9D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FC9D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FC9DC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FC9E0: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800FC9E4: addiu       $s2, $s2, 0x59B8
    ctx->r18 = ADD32(ctx->r18, 0X59B8);
    // 0x800FC9E8: addiu       $s1, $s1, 0x59B4
    ctx->r17 = ADD32(ctx->r17, 0X59B4);
    // 0x800FC9EC: swc1        $f12, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f12.u32l;
    // 0x800FC9F0: b           L_800FCA1C
    // 0x800FC9F4: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
        goto L_800FCA1C;
    // 0x800FC9F4: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
L_800FC9F8:
    // 0x800FC9F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FC9FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FCA00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FCA04: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FCA08: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800FCA0C: addiu       $s2, $s2, 0x59B8
    ctx->r18 = ADD32(ctx->r18, 0X59B8);
    // 0x800FCA10: addiu       $s1, $s1, 0x59B4
    ctx->r17 = ADD32(ctx->r17, 0X59B4);
    // 0x800FCA14: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x800FCA18: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
L_800FCA1C:
    // 0x800FCA1C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FCA20: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800FCA24: addiu       $s3, $s3, 0x5960
    ctx->r19 = ADD32(ctx->r19, 0X5960);
    // 0x800FCA28: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
    // 0x800FCA2C: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
L_800FCA30:
    // 0x800FCA30: bltzl       $a0, L_800FCA6C
    if (SIGNED(ctx->r4) < 0) {
        // 0x800FCA34: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FCA6C;
    }
    goto skip_0;
    // 0x800FCA34: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_0:
    // 0x800FCA38: jal         0x800FE7A8
    // 0x800FCA3C: nop

    func_800FE7A8(rdram, ctx);
        goto after_0;
    // 0x800FCA3C: nop

    after_0:
    // 0x800FCA40: bnel        $v0, $zero, L_800FCA6C
    if (ctx->r2 != 0) {
        // 0x800FCA44: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FCA6C;
    }
    goto skip_1;
    // 0x800FCA44: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_1:
    // 0x800FCA48: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    // 0x800FCA4C: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x800FCA50: bnel        $t7, $zero, L_800FCA6C
    if (ctx->r15 != 0) {
        // 0x800FCA54: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_800FCA6C;
    }
    goto skip_2;
    // 0x800FCA54: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    skip_2:
    // 0x800FCA58: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800FCA5C: lwc1        $f16, 0x0($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X0);
    // 0x800FCA60: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x800FCA64: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x800FCA68: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
L_800FCA6C:
    // 0x800FCA6C: bnel        $s0, $s3, L_800FCA30
    if (ctx->r16 != ctx->r19) {
        // 0x800FCA70: lh          $a0, 0x28($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X28);
            goto L_800FCA30;
    }
    goto skip_3;
    // 0x800FCA70: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    skip_3:
    // 0x800FCA74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FCA78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FCA7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FCA80: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCA84: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FCA88: jr          $ra
    // 0x800FCA8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FCA8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FCA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCA90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FCA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCA98: jal         0x800FB5F8
    // 0x800FCA9C: nop

    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCA9C: nop

    after_0:
    // 0x800FCAA0: beq         $v0, $zero, L_800FCAD0
    if (ctx->r2 == 0) {
        // 0x800FCAA4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FCAD0;
    }
    // 0x800FCAA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800FCAA8: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x800FCAAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FCAB0: sb          $t6, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r14;
    // 0x800FCAB4: beq         $t7, $zero, L_800FCAC8
    if (ctx->r15 == 0) {
        // 0x800FCAB8: nop
    
            goto L_800FCAC8;
    }
    // 0x800FCAB8: nop

    // 0x800FCABC: lbu         $t8, 0x34($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X34);
    // 0x800FCAC0: beql        $t8, $zero, L_800FCAD4
    if (ctx->r24 == 0) {
        // 0x800FCAC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FCAD4;
    }
    goto skip_0;
    // 0x800FCAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_800FCAC8:
    // 0x800FCAC8: jal         0x800FB774
    // 0x800FCACC: nop

    func_800FB774(rdram, ctx);
        goto after_1;
    // 0x800FCACC: nop

    after_1:
L_800FCAD0:
    // 0x800FCAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FCAD4:
    // 0x800FCAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FCAD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCAE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FCAE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCAE8: jal         0x800FCB54
    // 0x800FCAEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800FCB54(rdram, ctx);
        goto after_0;
    // 0x800FCAEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x800FCAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FCAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FCAF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCB00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FCB04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCB08: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FCB0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FCB10: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800FCB14: jal         0x800FB5F8
    // 0x800FCB18: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCB18: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800FCB1C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCB20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800FCB24: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FCB2C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800FCB30: addiu       $t9, $t8, 0x3C
    ctx->r25 = ADD32(ctx->r24, 0X3C);
    // 0x800FCB34: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800FCB38: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800FCB3C: jal         0x800FCB9C
    // 0x800FCB40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800FCB9C(rdram, ctx);
        goto after_1;
    // 0x800FCB40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x800FCB44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCB48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FCB4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCB54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FCB58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCB5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FCB60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FCB64: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800FCB68: jal         0x800FB5F8
    // 0x800FCB6C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCB6C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800FCB70: addiu       $t6, $v0, 0x3C
    ctx->r14 = ADD32(ctx->r2, 0X3C);
    // 0x800FCB74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800FCB78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800FCB7C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB80: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800FCB84: jal         0x800FCB9C
    // 0x800FCB88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800FCB9C(rdram, ctx);
        goto after_1;
    // 0x800FCB88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x800FCB8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCB90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FCB94: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCB9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FCBA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCBA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FCBA8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800FCBAC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800FCBB0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800FCBB4: jal         0x800FB5F8
    // 0x800FCBB8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCBB8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800FCBBC: beq         $v0, $zero, L_800FCCC0
    if (ctx->r2 == 0) {
        // 0x800FCBC0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FCCC0;
    }
    // 0x800FCBC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FCBC4: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x800FCBC8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800FCBCC: bgezl       $t6, L_800FCC48
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800FCBD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800FCC48;
    }
    goto skip_0;
    // 0x800FCBD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800FCBD4: beq         $t7, $zero, L_800FCCC0
    if (ctx->r15 == 0) {
        // 0x800FCBD8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FCCC0;
    }
    // 0x800FCBD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800FCBDC: jal         0x800FB6E0
    // 0x800FCBE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800FB6E0(rdram, ctx);
        goto after_1;
    // 0x800FCBE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800FCBE4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800FCBE8: addiu       $t8, $t8, 0x57D0
    ctx->r24 = ADD32(ctx->r24, 0X57D0);
    // 0x800FCBEC: subu        $a0, $s0, $t8
    ctx->r4 = SUB32(ctx->r16, ctx->r24);
    // 0x800FCBF0: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FCBF4: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x800FCBF8: mflo        $t9
    ctx->r25 = lo;
    // 0x800FCBFC: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    // 0x800FCC00: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x800FCC04: jal         0x800172D4
    // 0x800FCC08: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800172D4(rdram, ctx);
        goto after_2;
    // 0x800FCC08: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x800FCC0C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800FCC10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FCC14: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x800FCC18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FCC1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FCC20: sh          $t1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r9;
    // 0x800FCC24: jal         0x800FB6C0
    // 0x800FCC28: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    func_800FB6C0(rdram, ctx);
        goto after_3;
    // 0x800FCC28: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x800FCC2C: lbu         $t2, 0x34($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X34);
    // 0x800FCC30: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x800FCC34: bnel        $t2, $zero, L_800FCC48
    if (ctx->r10 != 0) {
        // 0x800FCC38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800FCC48;
    }
    goto skip_1;
    // 0x800FCC38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800FCC3C: jal         0x80017404
    // 0x800FCC40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017404(rdram, ctx);
        goto after_4;
    // 0x800FCC40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800FCC44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800FCC48:
    // 0x800FCC48: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800FCC4C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800FCC50: jal         0x800FBF9C
    // 0x800FCC54: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800FBF9C(rdram, ctx);
        goto after_5;
    // 0x800FCC54: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_5:
    // 0x800FCC58: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800FCC5C: lw          $t3, 0x20($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X20);
    // 0x800FCC60: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x800FCC64: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800FCC68: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800FCC6C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800FCC70: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800FCC74: beq         $at, $zero, L_800FCC84
    if (ctx->r1 == 0) {
        // 0x800FCC78: negu        $t7, $t6
        ctx->r15 = SUB32(0, ctx->r14);
            goto L_800FCC84;
    }
    // 0x800FCC78: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x800FCC7C: b           L_800FCC88
    // 0x800FCC80: sh          $t5, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r13;
        goto L_800FCC88;
    // 0x800FCC80: sh          $t5, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r13;
L_800FCC84:
    // 0x800FCC84: sh          $t7, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r15;
L_800FCC88:
    // 0x800FCC88: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800FCC8C: sw          $t8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r24;
    // 0x800FCC90: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800FCC94: beq         $t9, $zero, L_800FCCAC
    if (ctx->r25 == 0) {
        // 0x800FCC98: nop
    
            goto L_800FCCAC;
    }
    // 0x800FCC98: nop

    // 0x800FCC9C: jal         0x800FB540
    // 0x800FCCA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB540(rdram, ctx);
        goto after_6;
    // 0x800FCCA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800FCCA4: b           L_800FCCB8
    // 0x800FCCA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_800FCCB8;
    // 0x800FCCA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_800FCCAC:
    // 0x800FCCAC: jal         0x800FB5BC
    // 0x800FCCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FB5BC(rdram, ctx);
        goto after_7;
    // 0x800FCCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800FCCB4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_800FCCB8:
    // 0x800FCCB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FCCBC: sb          $t0, 0x59B0($at)
    MEM_B(0X59B0, ctx->r1) = ctx->r8;
L_800FCCC0:
    // 0x800FCCC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCCC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FCCC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800FCCCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCCD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FCCD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCCDC: jal         0x800FB5F8
    // 0x800FCCE0: nop

    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCCE0: nop

    after_0:
    // 0x800FCCE4: beq         $v0, $zero, L_800FCD00
    if (ctx->r2 == 0) {
        // 0x800FCCE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FCD00;
    }
    // 0x800FCCE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FCCEC: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x800FCCF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FCCF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800FCCF8: bne         $t6, $at, L_800FCD08
    if (ctx->r14 != ctx->r1) {
        // 0x800FCCFC: nop
    
            goto L_800FCD08;
    }
    // 0x800FCCFC: nop

L_800FCD00:
    // 0x800FCD00: b           L_800FCD08
    // 0x800FCD04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_800FCD08;
    // 0x800FCD04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800FCD08:
    // 0x800FCD08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800FCD0C: jr          $ra
    // 0x800FCD10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800FCD10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800FCD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCD14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FCD18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCD1C: jal         0x800FB5F8
    // 0x800FCD20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCD20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800FCD24: beq         $v0, $zero, L_800FCD4C
    if (ctx->r2 == 0) {
        // 0x800FCD28: lui         $t6, 0x8013
        ctx->r14 = S32(0X8013 << 16);
            goto L_800FCD4C;
    }
    // 0x800FCD28: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FCD2C: addiu       $t6, $t6, 0x57D0
    ctx->r14 = ADD32(ctx->r14, 0X57D0);
    // 0x800FCD30: subu        $a0, $v0, $t6
    ctx->r4 = SUB32(ctx->r2, ctx->r14);
    // 0x800FCD34: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FCD38: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x800FCD3C: mflo        $t7
    ctx->r15 = lo;
    // 0x800FCD40: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    // 0x800FCD44: jal         0x800174C0
    // 0x800FCD48: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800174C0(rdram, ctx);
        goto after_1;
    // 0x800FCD48: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800FCD4C:
    // 0x800FCD4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FCD50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FCD54: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCD5C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800FCD60: lbu         $t6, 0x3E40($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E40);
    // 0x800FCD64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FCD68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCD6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FCD70: beq         $t6, $zero, L_800FCDA0
    if (ctx->r14 == 0) {
        // 0x800FCD74: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800FCDA0;
    }
    // 0x800FCD74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FCD78: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FCD7C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FCD80: addiu       $s1, $s1, 0x59B0
    ctx->r17 = ADD32(ctx->r17, 0X59B0);
    // 0x800FCD84: addiu       $s0, $s0, 0x57D0
    ctx->r16 = ADD32(ctx->r16, 0X57D0);
L_800FCD88:
    // 0x800FCD88: jal         0x800B32E4
    // 0x800FCD8C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x800FCD8C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_0:
    // 0x800FCD90: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x800FCD94: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800FCD98: bne         $at, $zero, L_800FCD88
    if (ctx->r1 != 0) {
        // 0x800FCD9C: sw          $v0, -0x18($s0)
        MEM_W(-0X18, ctx->r16) = ctx->r2;
            goto L_800FCD88;
    }
    // 0x800FCD9C: sw          $v0, -0x18($s0)
    MEM_W(-0X18, ctx->r16) = ctx->r2;
L_800FCDA0:
    // 0x800FCDA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCDA4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FCDA8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FCDAC: jr          $ra
    // 0x800FCDB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FCDB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FCDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCDB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FCDB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCDBC: jal         0x800FB5F8
    // 0x800FCDC0: nop

    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCDC0: nop

    after_0:
    // 0x800FCDC4: beq         $v0, $zero, L_800FCDD4
    if (ctx->r2 == 0) {
        // 0x800FCDC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FCDD4;
    }
    // 0x800FCDC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FCDCC: b           L_800FCDD8
    // 0x800FCDD0: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
        goto L_800FCDD8;
    // 0x800FCDD0: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
L_800FCDD4:
    // 0x800FCDD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FCDD8:
    // 0x800FCDD8: jr          $ra
    // 0x800FCDDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800FCDDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800FCDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCDE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FCDE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCDE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FCDEC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FCDF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FCDF4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FCDF8: jal         0x800FB5F8
    // 0x800FCDFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCDFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800FCE00: bne         $v0, $zero, L_800FCE10
    if (ctx->r2 != 0) {
        // 0x800FCE04: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800FCE10;
    }
    // 0x800FCE04: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800FCE08: b           L_800FCEBC
    // 0x800FCE0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FCEBC;
    // 0x800FCE0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FCE10:
    // 0x800FCE10: lbu         $t6, 0x32($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X32);
    // 0x800FCE14: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FCE18: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FCE1C: beq         $t6, $zero, L_800FCE38
    if (ctx->r14 == 0) {
        // 0x800FCE20: addiu       $t9, $t9, 0x57D0
        ctx->r25 = ADD32(ctx->r25, 0X57D0);
            goto L_800FCE38;
    }
    // 0x800FCE20: addiu       $t9, $t9, 0x57D0
    ctx->r25 = ADD32(ctx->r25, 0X57D0);
    // 0x800FCE24: lw          $t8, 0x2C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2C);
    // 0x800FCE28: bnel        $t7, $t8, L_800FCE3C
    if (ctx->r15 != ctx->r24) {
        // 0x800FCE2C: subu        $s0, $s1, $t9
        ctx->r16 = SUB32(ctx->r17, ctx->r25);
            goto L_800FCE3C;
    }
    goto skip_0;
    // 0x800FCE2C: subu        $s0, $s1, $t9
    ctx->r16 = SUB32(ctx->r17, ctx->r25);
    skip_0:
    // 0x800FCE30: b           L_800FCEBC
    // 0x800FCE34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800FCEBC;
    // 0x800FCE34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FCE38:
    // 0x800FCE38: subu        $s0, $s1, $t9
    ctx->r16 = SUB32(ctx->r17, ctx->r25);
L_800FCE3C:
    // 0x800FCE3C: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FCE40: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x800FCE44: mflo        $s0
    ctx->r16 = lo;
    // 0x800FCE48: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800FCE4C: jal         0x80017108
    // 0x800FCE50: nop

    func_80017108(rdram, ctx);
        goto after_1;
    // 0x800FCE50: nop

    after_1:
    // 0x800FCE54: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800FCE58: bnel        $v0, $t1, L_800FCEB0
    if (ctx->r2 != ctx->r9) {
        // 0x800FCE5C: lw          $t4, 0x24($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X24);
            goto L_800FCEB0;
    }
    goto skip_1;
    // 0x800FCE5C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800FCE60: jal         0x80017210
    // 0x800FCE64: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80017210(rdram, ctx);
        goto after_2;
    // 0x800FCE64: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x800FCE68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FCE6C: beql        $v0, $at, L_800FCE84
    if (ctx->r2 == ctx->r1) {
        // 0x800FCE70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800FCE84;
    }
    goto skip_2;
    // 0x800FCE70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800FCE74: jal         0x800177C4
    // 0x800FCE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800177C4(rdram, ctx);
        goto after_3;
    // 0x800FCE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800FCE7C: beq         $v0, $zero, L_800FCEAC
    if (ctx->r2 == 0) {
        // 0x800FCE80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800FCEAC;
    }
    // 0x800FCE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800FCE84:
    // 0x800FCE84: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800FCE88: jal         0x800178C4
    // 0x800FCE8C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800178C4(rdram, ctx);
        goto after_4;
    // 0x800FCE8C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x800FCE90: beq         $v0, $zero, L_800FCEAC
    if (ctx->r2 == 0) {
        // 0x800FCE94: lw          $t2, 0x24($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X24);
            goto L_800FCEAC;
    }
    // 0x800FCE94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FCE98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800FCE9C: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
    // 0x800FCEA0: sb          $t3, 0x32($s1)
    MEM_B(0X32, ctx->r17) = ctx->r11;
    // 0x800FCEA4: b           L_800FCEBC
    // 0x800FCEA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800FCEBC;
    // 0x800FCEA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FCEAC:
    // 0x800FCEAC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
L_800FCEB0:
    // 0x800FCEB0: sb          $zero, 0x32($s1)
    MEM_B(0X32, ctx->r17) = 0;
    // 0x800FCEB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FCEB8: sw          $t4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r12;
L_800FCEBC:
    // 0x800FCEBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCEC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FCEC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FCEC8: jr          $ra
    // 0x800FCECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FCECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FCED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCED0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FCED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCED8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FCEDC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800FCEE0: jal         0x800FB5F8
    // 0x800FCEE4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800FB5F8(rdram, ctx);
        goto after_0;
    // 0x800FCEE4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800FCEE8: beq         $v0, $zero, L_800FCF3C
    if (ctx->r2 == 0) {
        // 0x800FCEEC: lui         $t6, 0x8013
        ctx->r14 = S32(0X8013 << 16);
            goto L_800FCF3C;
    }
    // 0x800FCEEC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FCEF0: addiu       $t6, $t6, 0x57D0
    ctx->r14 = ADD32(ctx->r14, 0X57D0);
    // 0x800FCEF4: subu        $a3, $v0, $t6
    ctx->r7 = SUB32(ctx->r2, ctx->r14);
    // 0x800FCEF8: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x800FCEFC: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x800FCF00: mflo        $a3
    ctx->r7 = lo;
    // 0x800FCF04: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x800FCF08: jal         0x80017108
    // 0x800FCF0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80017108(rdram, ctx);
        goto after_1;
    // 0x800FCF0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x800FCF10: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800FCF14: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800FCF18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800FCF1C: beq         $v0, $t8, L_800FCF2C
    if (ctx->r2 == ctx->r24) {
        // 0x800FCF20: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_800FCF2C;
    }
    // 0x800FCF20: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800FCF24: b           L_800FCF40
    // 0x800FCF28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FCF40;
    // 0x800FCF28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FCF2C:
    // 0x800FCF2C: jal         0x80017D74
    // 0x800FCF30: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_80017D74(rdram, ctx);
        goto after_2;
    // 0x800FCF30: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800FCF34: b           L_800FCF44
    // 0x800FCF38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FCF44;
    // 0x800FCF38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FCF3C:
    // 0x800FCF3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FCF40:
    // 0x800FCF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FCF44:
    // 0x800FCF44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FCF48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCF50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FCF54: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800FCF58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCF5C: addiu       $v1, $v1, 0x3DE0
    ctx->r3 = ADD32(ctx->r3, 0X3DE0);
    // 0x800FCF60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FCF64: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_800FCF68:
    // 0x800FCF68: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x800FCF6C: bnel        $a0, $t6, L_800FCF88
    if (ctx->r4 != ctx->r14) {
        // 0x800FCF70: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800FCF88;
    }
    goto skip_0;
    // 0x800FCF70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x800FCF74: jal         0x800DA298
    // 0x800FCF78: addiu       $a0, $v0, 0x53E
    ctx->r4 = ADD32(ctx->r2, 0X53E);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800FCF78: addiu       $a0, $v0, 0x53E
    ctx->r4 = ADD32(ctx->r2, 0X53E);
    after_0:
    // 0x800FCF7C: b           L_800FCF98
    // 0x800FCF80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800FCF98;
    // 0x800FCF80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FCF84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800FCF88:
    // 0x800FCF88: bne         $v0, $a1, L_800FCF68
    if (ctx->r2 != ctx->r5) {
        // 0x800FCF8C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_800FCF68;
    }
    // 0x800FCF8C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800FCF90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800FCF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FCF98:
    // 0x800FCF98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FCF9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FCFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCFB0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FCFB4: addiu       $t7, $t7, 0x5A20
    ctx->r15 = ADD32(ctx->r15, 0X5A20);
    // 0x800FCFB8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800FCFBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FCFC0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800FCFC4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800FCFC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FCFCC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800FCFD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCFD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800FCFD8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800FCFDC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800FCFE0: bne         $a1, $v1, L_800FD0E4
    if (ctx->r5 != ctx->r3) {
        // 0x800FCFE4: or          $t0, $t6, $zero
        ctx->r8 = ctx->r14 | 0;
            goto L_800FD0E4;
    }
    // 0x800FCFE4: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x800FCFE8: beq         $a3, $zero, L_800FD060
    if (ctx->r7 == 0) {
        // 0x800FCFEC: or          $t8, $a3, $zero
        ctx->r24 = ctx->r7 | 0;
            goto L_800FD060;
    }
    // 0x800FCFEC: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x800FCFF0: lh          $v0, 0xA($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XA);
    // 0x800FCFF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FCFF8: or          $t9, $a2, $zero
    ctx->r25 = ctx->r6 | 0;
    // 0x800FCFFC: beq         $v0, $at, L_800FD044
    if (ctx->r2 == ctx->r1) {
        // 0x800FD000: lui         $t1, 0x393
        ctx->r9 = S32(0X393 << 16);
            goto L_800FD044;
    }
    // 0x800FD000: lui         $t1, 0x393
    ctx->r9 = S32(0X393 << 16);
    // 0x800FD004: ori         $t1, $t1, 0x8700
    ctx->r9 = ctx->r9 | 0X8700;
    // 0x800FD008: div         $zero, $t1, $v0
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r2)));
    // 0x800FD00C: mflo        $a1
    ctx->r5 = lo;
    // 0x800FD010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD014: bne         $v0, $zero, L_800FD020
    if (ctx->r2 != 0) {
        // 0x800FD018: nop
    
            goto L_800FD020;
    }
    // 0x800FD018: nop

    // 0x800FD01C: break       7
    do_break(2148519964);
L_800FD020:
    // 0x800FD020: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD024: bne         $v0, $at, L_800FD038
    if (ctx->r2 != ctx->r1) {
        // 0x800FD028: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FD038;
    }
    // 0x800FD028: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FD02C: bne         $t1, $at, L_800FD038
    if (ctx->r9 != ctx->r1) {
        // 0x800FD030: nop
    
            goto L_800FD038;
    }
    // 0x800FD030: nop

    // 0x800FD034: break       6
    do_break(2148519988);
L_800FD038:
    // 0x800FD038: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD03C: jal         0x800FCED0
    // 0x800FD040: nop

    func_800FCED0(rdram, ctx);
        goto after_0;
    // 0x800FD040: nop

    after_0:
L_800FD044:
    // 0x800FD044: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800FD048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD04C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD050: jal         0x800FCDE0
    // 0x800FD054: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    func_800FCDE0(rdram, ctx);
        goto after_1;
    // 0x800FD054: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    after_1:
    // 0x800FD058: b           L_800FD0D0
    // 0x800FD05C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
        goto L_800FD0D0;
    // 0x800FD05C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
L_800FD060:
    // 0x800FD060: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800FD064: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD068: lui         $t4, 0x393
    ctx->r12 = S32(0X393 << 16);
    // 0x800FD06C: lh          $v0, 0x8($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X8);
    // 0x800FD070: ori         $t4, $t4, 0x8700
    ctx->r12 = ctx->r12 | 0X8700;
    // 0x800FD074: beql        $v0, $at, L_800FD0BC
    if (ctx->r2 == ctx->r1) {
        // 0x800FD078: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_800FD0BC;
    }
    goto skip_0;
    // 0x800FD078: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    skip_0:
    // 0x800FD07C: div         $zero, $t4, $v0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r2)));
    // 0x800FD080: mflo        $a1
    ctx->r5 = lo;
    // 0x800FD084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD088: bne         $v0, $zero, L_800FD094
    if (ctx->r2 != 0) {
        // 0x800FD08C: nop
    
            goto L_800FD094;
    }
    // 0x800FD08C: nop

    // 0x800FD090: break       7
    do_break(2148520080);
L_800FD094:
    // 0x800FD094: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD098: bne         $v0, $at, L_800FD0AC
    if (ctx->r2 != ctx->r1) {
        // 0x800FD09C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FD0AC;
    }
    // 0x800FD09C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FD0A0: bne         $t4, $at, L_800FD0AC
    if (ctx->r12 != ctx->r1) {
        // 0x800FD0A4: nop
    
            goto L_800FD0AC;
    }
    // 0x800FD0A4: nop

    // 0x800FD0A8: break       6
    do_break(2148520104);
L_800FD0AC:
    // 0x800FD0AC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD0B0: jal         0x800FCED0
    // 0x800FD0B4: nop

    func_800FCED0(rdram, ctx);
        goto after_2;
    // 0x800FD0B4: nop

    after_2:
    // 0x800FD0B8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
L_800FD0BC:
    // 0x800FD0BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD0C0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD0C4: jal         0x800FCDE0
    // 0x800FD0C8: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    func_800FCDE0(rdram, ctx);
        goto after_3;
    // 0x800FD0C8: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    after_3:
    // 0x800FD0CC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
L_800FD0D0:
    // 0x800FD0D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD0D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FD0D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800FD0DC: b           L_800FD28C
    // 0x800FD0E0: sb          $t6, 0x5A3C($at)
    MEM_B(0X5A3C, ctx->r1) = ctx->r14;
        goto L_800FD28C;
    // 0x800FD0E0: sb          $t6, 0x5A3C($at)
    MEM_B(0X5A3C, ctx->r1) = ctx->r14;
L_800FD0E4:
    // 0x800FD0E4: bne         $v1, $zero, L_800FD28C
    if (ctx->r3 != 0) {
        // 0x800FD0E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800FD28C;
    }
    // 0x800FD0E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD0EC: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x800FD0F0: jal         0x800FCCD4
    // 0x800FD0F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_800FCCD4(rdram, ctx);
        goto after_4;
    // 0x800FD0F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_4:
    // 0x800FD0F8: bnel        $v0, $zero, L_800FD124
    if (ctx->r2 != 0) {
        // 0x800FD0FC: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_800FD124;
    }
    goto skip_1;
    // 0x800FD0FC: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    skip_1:
    // 0x800FD100: jal         0x80017764
    // 0x800FD104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80017764(rdram, ctx);
        goto after_5;
    // 0x800FD104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800FD108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD10C: jal         0x800FC688
    // 0x800FD110: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800FC688(rdram, ctx);
        goto after_6;
    // 0x800FD110: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x800FD114: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800FD118: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD11C: sb          $t8, 0x59D5($at)
    MEM_B(0X59D5, ctx->r1) = ctx->r24;
    // 0x800FD120: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
L_800FD124:
    // 0x800FD124: bne         $s0, $at, L_800FD144
    if (ctx->r16 != ctx->r1) {
        // 0x800FD128: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800FD144;
    }
    // 0x800FD128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD12C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD130: lui         $a1, 0x3E00
    ctx->r5 = S32(0X3E00 << 16);
    // 0x800FD134: jal         0x800FC97C
    // 0x800FD138: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800FC97C(rdram, ctx);
        goto after_7;
    // 0x800FD138: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x800FD13C: b           L_800FD154
    // 0x800FD140: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_800FD154;
    // 0x800FD140: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_800FD144:
    // 0x800FD144: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x800FD148: jal         0x800FC97C
    // 0x800FD14C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800FC97C(rdram, ctx);
        goto after_8;
    // 0x800FD14C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_8:
    // 0x800FD150: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_800FD154:
    // 0x800FD154: beql        $t9, $zero, L_800FD1D4
    if (ctx->r25 == 0) {
        // 0x800FD158: lw          $t4, 0x30($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X30);
            goto L_800FD1D4;
    }
    goto skip_2;
    // 0x800FD158: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x800FD15C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800FD160: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD164: lui         $t2, 0x393
    ctx->r10 = S32(0X393 << 16);
    // 0x800FD168: lh          $v0, 0xA($t1)
    ctx->r2 = MEM_H(ctx->r9, 0XA);
    // 0x800FD16C: ori         $t2, $t2, 0x8700
    ctx->r10 = ctx->r10 | 0X8700;
    // 0x800FD170: beql        $v0, $at, L_800FD1B8
    if (ctx->r2 == ctx->r1) {
        // 0x800FD174: lw          $t3, 0x30($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X30);
            goto L_800FD1B8;
    }
    goto skip_3;
    // 0x800FD174: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x800FD178: div         $zero, $t2, $v0
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r2)));
    // 0x800FD17C: mflo        $a1
    ctx->r5 = lo;
    // 0x800FD180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD184: bne         $v0, $zero, L_800FD190
    if (ctx->r2 != 0) {
        // 0x800FD188: nop
    
            goto L_800FD190;
    }
    // 0x800FD188: nop

    // 0x800FD18C: break       7
    do_break(2148520332);
L_800FD190:
    // 0x800FD190: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD194: bne         $v0, $at, L_800FD1A8
    if (ctx->r2 != ctx->r1) {
        // 0x800FD198: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FD1A8;
    }
    // 0x800FD198: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FD19C: bne         $t2, $at, L_800FD1A8
    if (ctx->r10 != ctx->r1) {
        // 0x800FD1A0: nop
    
            goto L_800FD1A8;
    }
    // 0x800FD1A0: nop

    // 0x800FD1A4: break       6
    do_break(2148520356);
L_800FD1A8:
    // 0x800FD1A8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD1AC: jal         0x800FCED0
    // 0x800FD1B0: nop

    func_800FCED0(rdram, ctx);
        goto after_9;
    // 0x800FD1B0: nop

    after_9:
    // 0x800FD1B4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
L_800FD1B8:
    // 0x800FD1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD1BC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD1C0: jal         0x800FCDE0
    // 0x800FD1C4: lw          $a1, 0x4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X4);
    func_800FCDE0(rdram, ctx);
        goto after_10;
    // 0x800FD1C4: lw          $a1, 0x4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X4);
    after_10:
    // 0x800FD1C8: b           L_800FD240
    // 0x800FD1CC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
        goto L_800FD240;
    // 0x800FD1CC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800FD1D0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_800FD1D4:
    // 0x800FD1D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD1D8: lui         $t5, 0x393
    ctx->r13 = S32(0X393 << 16);
    // 0x800FD1DC: lh          $v0, 0x8($t4)
    ctx->r2 = MEM_H(ctx->r12, 0X8);
    // 0x800FD1E0: ori         $t5, $t5, 0x8700
    ctx->r13 = ctx->r13 | 0X8700;
    // 0x800FD1E4: beql        $v0, $at, L_800FD22C
    if (ctx->r2 == ctx->r1) {
        // 0x800FD1E8: lw          $t6, 0x30($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X30);
            goto L_800FD22C;
    }
    goto skip_4;
    // 0x800FD1E8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    skip_4:
    // 0x800FD1EC: div         $zero, $t5, $v0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r2)));
    // 0x800FD1F0: mflo        $a1
    ctx->r5 = lo;
    // 0x800FD1F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD1F8: bne         $v0, $zero, L_800FD204
    if (ctx->r2 != 0) {
        // 0x800FD1FC: nop
    
            goto L_800FD204;
    }
    // 0x800FD1FC: nop

    // 0x800FD200: break       7
    do_break(2148520448);
L_800FD204:
    // 0x800FD204: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD208: bne         $v0, $at, L_800FD21C
    if (ctx->r2 != ctx->r1) {
        // 0x800FD20C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FD21C;
    }
    // 0x800FD20C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FD210: bne         $t5, $at, L_800FD21C
    if (ctx->r13 != ctx->r1) {
        // 0x800FD214: nop
    
            goto L_800FD21C;
    }
    // 0x800FD214: nop

    // 0x800FD218: break       6
    do_break(2148520472);
L_800FD21C:
    // 0x800FD21C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD220: jal         0x800FCED0
    // 0x800FD224: nop

    func_800FCED0(rdram, ctx);
        goto after_11;
    // 0x800FD224: nop

    after_11:
    // 0x800FD228: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
L_800FD22C:
    // 0x800FD22C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FD230: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800FD234: jal         0x800FCDE0
    // 0x800FD238: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    func_800FCDE0(rdram, ctx);
        goto after_12;
    // 0x800FD238: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    after_12:
    // 0x800FD23C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
L_800FD240:
    // 0x800FD240: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD244: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800FD248: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800FD24C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800FD250: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FD254: sb          $t7, 0x5A3C($at)
    MEM_B(0X5A3C, ctx->r1) = ctx->r15;
    // 0x800FD258: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD25C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FD260: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800FD264: addiu       $v1, $v1, 0x5A40
    ctx->r3 = ADD32(ctx->r3, 0X5A40);
    // 0x800FD268: swc1        $f4, 0x5A30($at)
    MEM_W(0X5A30, ctx->r1) = ctx->f4.u32l;
    // 0x800FD26C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800FD270: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD274: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800FD278: bne         $v0, $at, L_800FD288
    if (ctx->r2 != ctx->r1) {
        // 0x800FD27C: addiu       $t2, $v0, 0x1
        ctx->r10 = ADD32(ctx->r2, 0X1);
            goto L_800FD288;
    }
    // 0x800FD27C: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x800FD280: b           L_800FD28C
    // 0x800FD284: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_800FD28C;
    // 0x800FD284: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_800FD288:
    // 0x800FD288: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_800FD28C:
    // 0x800FD28C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FD290: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FD294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FD298: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FD2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD2A0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FD2A4: addiu       $v1, $v1, 0x59C0
    ctx->r3 = ADD32(ctx->r3, 0X59C0);
    // 0x800FD2A8: lh          $t6, 0x20($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X20);
    // 0x800FD2AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FD2B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FD2B4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800FD2B8: sltiu       $at, $t7, 0x17
    ctx->r1 = ctx->r15 < 0X17 ? 1 : 0;
    // 0x800FD2BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800FD2C0: beq         $at, $zero, L_800FDBA8
    if (ctx->r1 == 0) {
        // 0x800FD2C4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800FDBA8;
    }
    // 0x800FD2C4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800FD2C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FD2CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FD2D0: addu        $at, $at, $t7
    gpr jr_addend_800FD2D8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800FD2D4: lw          $t7, 0x6160($at)
    ctx->r15 = ADD32(ctx->r1, 0X6160);
    // 0x800FD2D8: jr          $t7
    // 0x800FD2DC: nop

    switch (jr_addend_800FD2D8 >> 2) {
        case 0: goto L_800FD2E0; break;
        case 1: goto L_800FDBA8; break;
        case 2: goto L_800FDBA8; break;
        case 3: goto L_800FDBA8; break;
        case 4: goto L_800FD8AC; break;
        case 5: goto L_800FD8EC; break;
        case 6: goto L_800FD3F8; break;
        case 7: goto L_800FD924; break;
        case 8: goto L_800FD994; break;
        case 9: goto L_800FD9CC; break;
        case 10: goto L_800FDA04; break;
        case 11: goto L_800FD414; break;
        case 12: goto L_800FD444; break;
        case 13: goto L_800FD47C; break;
        case 14: goto L_800FDA3C; break;
        case 15: goto L_800FDB4C; break;
        case 16: goto L_800FD5C0; break;
        case 17: goto L_800FD634; break;
        case 18: goto L_800FD788; break;
        case 19: goto L_800FD570; break;
        case 20: goto L_800FD4E8; break;
        case 21: goto L_800FD840; break;
        case 22: goto L_800FD538; break;
        default: switch_error(__func__, 0x800FD2D8, 0x80126160);
    }
    // 0x800FD2DC: nop

L_800FD2E0:
    // 0x800FD2E0: lw          $a0, 0x28($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X28);
    // 0x800FD2E4: jal         0x800CBBE0
    // 0x800FD2E8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800CBBE0(rdram, ctx);
        goto after_0;
    // 0x800FD2E8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x800FD2EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800FD2F0: beq         $v0, $a0, L_800FD3A8
    if (ctx->r2 == ctx->r4) {
        // 0x800FD2F4: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_800FD3A8;
    }
    // 0x800FD2F4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800FD2F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FD2FC: bne         $v0, $at, L_800FDBA8
    if (ctx->r2 != ctx->r1) {
        // 0x800FD300: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_800FDBA8;
    }
    // 0x800FD300: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800FD304: addiu       $v0, $v0, 0x41E4
    ctx->r2 = ADD32(ctx->r2, 0X41E4);
    // 0x800FD308: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800FD30C: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800FD310: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800FD314: addiu       $t8, $t8, 0x3F68
    ctx->r24 = ADD32(ctx->r24, 0X3F68);
    // 0x800FD318: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800FD31C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD320: bc1t        L_800FD368
    if (c1cs) {
        // 0x800FD324: nop
    
            goto L_800FD368;
    }
    // 0x800FD324: nop

    // 0x800FD328: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    // 0x800FD32C: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800FD330: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800FD334: nop

    // 0x800FD338: bc1t        L_800FD368
    if (c1cs) {
        // 0x800FD33C: nop
    
            goto L_800FD368;
    }
    // 0x800FD33C: nop

    // 0x800FD340: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FD344: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x800FD348: nop

    // 0x800FD34C: bc1t        L_800FD368
    if (c1cs) {
        // 0x800FD350: nop
    
            goto L_800FD368;
    }
    // 0x800FD350: nop

    // 0x800FD354: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800FD358: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x800FD35C: nop

    // 0x800FD360: bc1fl       L_800FD374
    if (!c1cs) {
        // 0x800FD364: add.s       $f8, $f0, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_800FD374;
    }
    goto skip_0;
    // 0x800FD364: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    skip_0:
L_800FD368:
    // 0x800FD368: b           L_800FD398
    // 0x800FD36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FD398;
    // 0x800FD36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FD370: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
L_800FD374:
    // 0x800FD374: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800FD378: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x800FD37C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x800FD380: nop

    // 0x800FD384: bc1f        L_800FD394
    if (!c1cs) {
        // 0x800FD388: nop
    
            goto L_800FD394;
    }
    // 0x800FD388: nop

    // 0x800FD38C: b           L_800FD394
    // 0x800FD390: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800FD394;
    // 0x800FD390: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800FD394:
    // 0x800FD394: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800FD398:
    // 0x800FD398: bnel        $v0, $a0, L_800FDBAC
    if (ctx->r2 != ctx->r4) {
        // 0x800FD39C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FDBAC;
    }
    goto skip_1;
    // 0x800FD39C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800FD3A0: b           L_800FDBA8
    // 0x800FD3A4: sw          $t8, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r24;
        goto L_800FDBA8;
    // 0x800FD3A4: sw          $t8, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r24;
L_800FD3A8:
    // 0x800FD3A8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800FD3AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FD3B0: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800FD3B4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD3B8: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FD3BC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800FD3C0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD3C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD3C8: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x800FD3CC: bc1fl       L_800FDBAC
    if (!c1cs) {
        // 0x800FD3D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FDBAC;
    }
    goto skip_2;
    // 0x800FD3D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800FD3D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD3D8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD3DC: jal         0x800FCFB0
    // 0x800FD3E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_1;
    // 0x800FD3E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800FD3E4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800FD3E8: addiu       $t9, $t9, 0x3FC8
    ctx->r25 = ADD32(ctx->r25, 0X3FC8);
    // 0x800FD3EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD3F0: b           L_800FDBA8
    // 0x800FD3F4: sw          $t9, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r25;
        goto L_800FDBA8;
    // 0x800FD3F4: sw          $t9, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r25;
L_800FD3F8:
    // 0x800FD3F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD3FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FD400: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800FD404: jal         0x800FEDC4
    // 0x800FD408: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_2;
    // 0x800FD408: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_2:
    // 0x800FD40C: b           L_800FDBAC
    // 0x800FD410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD414:
    // 0x800FD414: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD418: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD41C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800FD420: jal         0x800FEDC4
    // 0x800FD424: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_3;
    // 0x800FD424: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_3:
    // 0x800FD428: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FD42C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FD430: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800FD434: jal         0x800FEDC4
    // 0x800FD438: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_4;
    // 0x800FD438: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_4:
    // 0x800FD43C: b           L_800FDBAC
    // 0x800FD440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD444:
    // 0x800FD444: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x800FD448: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x800FD44C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD450: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD454: jal         0x800FEDC4
    // 0x800FD458: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_5;
    // 0x800FD458: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_5:
    // 0x800FD45C: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x800FD460: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x800FD464: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FD468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FD46C: jal         0x800FEDC4
    // 0x800FD470: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_6;
    // 0x800FD470: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_6:
    // 0x800FD474: b           L_800FDBAC
    // 0x800FD478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD47C:
    // 0x800FD47C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800FD480: addiu       $a1, $a1, 0x41F4
    ctx->r5 = ADD32(ctx->r5, 0X41F4);
    // 0x800FD484: jal         0x800EEAD4
    // 0x800FD488: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_7;
    // 0x800FD488: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_7:
    // 0x800FD48C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FD490: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FD494: lui         $a2, 0x455A
    ctx->r6 = S32(0X455A << 16);
    // 0x800FD498: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x800FD49C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x800FD4A0: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x800FD4A4: lwc1        $f14, 0x61BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X61BC);
    // 0x800FD4A8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800FD4AC: jal         0x800F10B4
    // 0x800FD4B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x800FD4B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800FD4B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FD4B8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x800FD4BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD4C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD4C4: jal         0x800FEDC4
    // 0x800FD4C8: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_9;
    // 0x800FD4C8: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_9:
    // 0x800FD4CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FD4D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FD4D4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800FD4D8: jal         0x800FEDC4
    // 0x800FD4DC: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_10;
    // 0x800FD4DC: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_10:
    // 0x800FD4E0: b           L_800FDBAC
    // 0x800FD4E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD4E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD4E8:
    // 0x800FD4E8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800FD4EC: addiu       $a1, $a1, 0x4200
    ctx->r5 = ADD32(ctx->r5, 0X4200);
    // 0x800FD4F0: jal         0x800EEAD4
    // 0x800FD4F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_11;
    // 0x800FD4F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_11:
    // 0x800FD4F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FD4FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FD500: lui         $a2, 0x459C
    ctx->r6 = S32(0X459C << 16);
    // 0x800FD504: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x800FD508: lwc1        $f14, 0x61C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X61C0);
    // 0x800FD50C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800FD510: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800FD514: jal         0x800F10B4
    // 0x800FD518: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_12;
    // 0x800FD518: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x800FD51C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FD520: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD524: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800FD528: jal         0x800FEDC4
    // 0x800FD52C: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_13;
    // 0x800FD52C: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_13:
    // 0x800FD530: b           L_800FDBAC
    // 0x800FD534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD538:
    // 0x800FD538: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x800FD53C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x800FD540: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD544: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD548: jal         0x800FEDC4
    // 0x800FD54C: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_14;
    // 0x800FD54C: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_14:
    // 0x800FD550: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x800FD554: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x800FD558: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FD55C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FD560: jal         0x800FEDC4
    // 0x800FD564: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_15;
    // 0x800FD564: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_15:
    // 0x800FD568: b           L_800FDBAC
    // 0x800FD56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD570:
    // 0x800FD570: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800FD574: addiu       $a1, $a1, 0x420C
    ctx->r5 = ADD32(ctx->r5, 0X420C);
    // 0x800FD578: jal         0x800EEAD4
    // 0x800FD57C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_16;
    // 0x800FD57C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_16:
    // 0x800FD580: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800FD584: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FD588: lui         $a2, 0x455A
    ctx->r6 = S32(0X455A << 16);
    // 0x800FD58C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x800FD590: lwc1        $f14, 0x61C4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X61C4);
    // 0x800FD594: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800FD598: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x800FD59C: jal         0x800F10B4
    // 0x800FD5A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_17;
    // 0x800FD5A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x800FD5A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FD5A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD5AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD5B0: jal         0x800FEDC4
    // 0x800FD5B4: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    func_800FEDC4(rdram, ctx);
        goto after_18;
    // 0x800FD5B4: lui         $a3, 0x3FE0
    ctx->r7 = S32(0X3FE0 << 16);
    after_18:
    // 0x800FD5B8: b           L_800FDBAC
    // 0x800FD5BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FDBAC;
    // 0x800FD5BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FD5C0:
    // 0x800FD5C0: jal         0x80087F38
    // 0x800FD5C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    _gcmapsects_entrypoint_7(rdram, ctx);
        goto after_19;
    // 0x800FD5C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_19:
    // 0x800FD5C8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FD5CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD5D0: beq         $v0, $at, L_800FD5E0
    if (ctx->r2 == ctx->r1) {
        // 0x800FD5D4: addiu       $v1, $v1, 0x59C0
        ctx->r3 = ADD32(ctx->r3, 0X59C0);
            goto L_800FD5E0;
    }
    // 0x800FD5D4: addiu       $v1, $v1, 0x59C0
    ctx->r3 = ADD32(ctx->r3, 0X59C0);
    // 0x800FD5D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD5DC: sb          $v0, 0x59D1($at)
    MEM_B(0X59D1, ctx->r1) = ctx->r2;
L_800FD5E0:
    // 0x800FD5E0: lbu         $v0, 0x11($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X11);
    // 0x800FD5E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800FD5E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FD5EC: beq         $v0, $a0, L_800FD600
    if (ctx->r2 == ctx->r4) {
        // 0x800FD5F0: addiu       $a1, $zero, 0x4B
        ctx->r5 = ADD32(0, 0X4B);
            goto L_800FD600;
    }
    // 0x800FD5F0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD5F4: beq         $v0, $at, L_800FD600
    if (ctx->r2 == ctx->r1) {
        // 0x800FD5F8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800FD600;
    }
    // 0x800FD5F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800FD5FC: bne         $v0, $at, L_800FDBA8
    if (ctx->r2 != ctx->r1) {
        // 0x800FD600: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_800FDBA8;
    }
L_800FD600:
    // 0x800FD600: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD604: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FD608: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD60C: addiu       $a2, $a2, 0x401C
    ctx->r6 = ADD32(ctx->r6, 0X401C);
    // 0x800FD610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD614: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD618: jal         0x800FCFB0
    // 0x800FD61C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_20;
    // 0x800FD61C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_20:
    // 0x800FD620: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800FD624: addiu       $t0, $t0, 0x4010
    ctx->r8 = ADD32(ctx->r8, 0X4010);
    // 0x800FD628: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD62C: b           L_800FDBA8
    // 0x800FD630: sw          $t0, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r8;
        goto L_800FDBA8;
    // 0x800FD630: sw          $t0, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r8;
L_800FD634:
    // 0x800FD634: jal         0x80087F38
    // 0x800FD638: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    _gcmapsects_entrypoint_7(rdram, ctx);
        goto after_21;
    // 0x800FD638: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_21:
    // 0x800FD63C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FD640: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD644: beq         $v0, $at, L_800FD654
    if (ctx->r2 == ctx->r1) {
        // 0x800FD648: addiu       $v1, $v1, 0x59C0
        ctx->r3 = ADD32(ctx->r3, 0X59C0);
            goto L_800FD654;
    }
    // 0x800FD648: addiu       $v1, $v1, 0x59C0
    ctx->r3 = ADD32(ctx->r3, 0X59C0);
    // 0x800FD64C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD650: sb          $v0, 0x59D1($at)
    MEM_B(0X59D1, ctx->r1) = ctx->r2;
L_800FD654:
    // 0x800FD654: lbu         $v0, 0x11($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X11);
    // 0x800FD658: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FD65C: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD660: beq         $v0, $zero, L_800FD6E4
    if (ctx->r2 == 0) {
        // 0x800FD664: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_800FD6E4;
    }
    // 0x800FD664: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD668: beq         $v0, $at, L_800FD71C
    if (ctx->r2 == ctx->r1) {
        // 0x800FD66C: lui         $t3, 0x8013
        ctx->r11 = S32(0X8013 << 16);
            goto L_800FD71C;
    }
    // 0x800FD66C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800FD670: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800FD674: beq         $v0, $a0, L_800FD6E4
    if (ctx->r2 == ctx->r4) {
        // 0x800FD678: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800FD6E4;
    }
    // 0x800FD678: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FD67C: bne         $v0, $at, L_800FDBA8
    if (ctx->r2 != ctx->r1) {
        // 0x800FD680: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_800FDBA8;
    }
    // 0x800FD680: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD684: beq         $a3, $zero, L_800FD6B4
    if (ctx->r7 == 0) {
        // 0x800FD688: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800FD6B4;
    }
    // 0x800FD688: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD68C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD690: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FD694: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD698: addiu       $a2, $a2, 0x401C
    ctx->r6 = ADD32(ctx->r6, 0X401C);
    // 0x800FD69C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD6A0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD6A4: jal         0x800FCFB0
    // 0x800FD6A8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_22;
    // 0x800FD6A8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_22:
    // 0x800FD6AC: b           L_800FD6D0
    // 0x800FD6B0: nop

        goto L_800FD6D0;
    // 0x800FD6B0: nop

L_800FD6B4:
    // 0x800FD6B4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD6B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD6BC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD6C0: addiu       $a2, $a2, 0x4004
    ctx->r6 = ADD32(ctx->r6, 0X4004);
    // 0x800FD6C4: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD6C8: jal         0x800FCFB0
    // 0x800FD6CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_23;
    // 0x800FD6CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_23:
L_800FD6D0:
    // 0x800FD6D0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800FD6D4: addiu       $t1, $t1, 0x4010
    ctx->r9 = ADD32(ctx->r9, 0X4010);
    // 0x800FD6D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD6DC: b           L_800FDBA8
    // 0x800FD6E0: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
        goto L_800FDBA8;
    // 0x800FD6E0: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
L_800FD6E4:
    // 0x800FD6E4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD6E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FD6EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD6F0: addiu       $a2, $a2, 0x401C
    ctx->r6 = ADD32(ctx->r6, 0X401C);
    // 0x800FD6F4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD6F8: jal         0x800FCFB0
    // 0x800FD6FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_24;
    // 0x800FD6FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_24:
    // 0x800FD700: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800FD704: addiu       $t2, $t2, 0x4010
    ctx->r10 = ADD32(ctx->r10, 0X4010);
    // 0x800FD708: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD70C: sw          $t2, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r10;
    // 0x800FD710: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD714: b           L_800FDBA8
    // 0x800FD718: sb          $zero, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = 0;
        goto L_800FDBA8;
    // 0x800FD718: sb          $zero, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = 0;
L_800FD71C:
    // 0x800FD71C: lbu         $t3, 0x5A1E($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5A1E);
    // 0x800FD720: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD724: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD728: beq         $t3, $zero, L_800FD75C
    if (ctx->r11 == 0) {
        // 0x800FD72C: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_800FD75C;
    }
    // 0x800FD72C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD730: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD734: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FD738: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD73C: addiu       $a2, $a2, 0x4028
    ctx->r6 = ADD32(ctx->r6, 0X4028);
    // 0x800FD740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD744: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD748: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD74C: jal         0x800FCFB0
    // 0x800FD750: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_25;
    // 0x800FD750: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_25:
    // 0x800FD754: b           L_800FD774
    // 0x800FD758: nop

        goto L_800FD774;
    // 0x800FD758: nop

L_800FD75C:
    // 0x800FD75C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD760: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FD764: addiu       $a2, $a2, 0x401C
    ctx->r6 = ADD32(ctx->r6, 0X401C);
    // 0x800FD768: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD76C: jal         0x800FCFB0
    // 0x800FD770: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_26;
    // 0x800FD770: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_26:
L_800FD774:
    // 0x800FD774: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800FD778: addiu       $t4, $t4, 0x4010
    ctx->r12 = ADD32(ctx->r12, 0X4010);
    // 0x800FD77C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD780: b           L_800FDBA8
    // 0x800FD784: sw          $t4, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r12;
        goto L_800FDBA8;
    // 0x800FD784: sw          $t4, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r12;
L_800FD788:
    // 0x800FD788: jal         0x80087F38
    // 0x800FD78C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    _gcmapsects_entrypoint_7(rdram, ctx);
        goto after_27;
    // 0x800FD78C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_27:
    // 0x800FD790: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FD794: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD798: beq         $v0, $at, L_800FD7A8
    if (ctx->r2 == ctx->r1) {
        // 0x800FD79C: addiu       $v1, $v1, 0x59C0
        ctx->r3 = ADD32(ctx->r3, 0X59C0);
            goto L_800FD7A8;
    }
    // 0x800FD79C: addiu       $v1, $v1, 0x59C0
    ctx->r3 = ADD32(ctx->r3, 0X59C0);
    // 0x800FD7A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD7A4: sb          $v0, 0x59D1($at)
    MEM_B(0X59D1, ctx->r1) = ctx->r2;
L_800FD7A8:
    // 0x800FD7A8: lbu         $v0, 0x11($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X11);
    // 0x800FD7AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FD7B0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD7B4: beq         $v0, $zero, L_800FD7D4
    if (ctx->r2 == 0) {
        // 0x800FD7B8: nop
    
            goto L_800FD7D4;
    }
    // 0x800FD7B8: nop

    // 0x800FD7BC: beq         $v0, $at, L_800FD7D4
    if (ctx->r2 == ctx->r1) {
        // 0x800FD7C0: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_800FD7D4;
    }
    // 0x800FD7C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800FD7C4: beq         $v0, $a0, L_800FD7D4
    if (ctx->r2 == ctx->r4) {
        // 0x800FD7C8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800FD7D4;
    }
    // 0x800FD7C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FD7CC: bnel        $v0, $at, L_800FDBAC
    if (ctx->r2 != ctx->r1) {
        // 0x800FD7D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FDBAC;
    }
    goto skip_3;
    // 0x800FD7D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
L_800FD7D4:
    // 0x800FD7D4: beq         $a3, $zero, L_800FD804
    if (ctx->r7 == 0) {
        // 0x800FD7D8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800FD804;
    }
    // 0x800FD7D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD7DC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD7E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FD7E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD7E8: addiu       $a2, $a2, 0x4028
    ctx->r6 = ADD32(ctx->r6, 0X4028);
    // 0x800FD7EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD7F0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD7F4: jal         0x800FCFB0
    // 0x800FD7F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_28;
    // 0x800FD7F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_28:
    // 0x800FD7FC: b           L_800FD820
    // 0x800FD800: nop

        goto L_800FD820;
    // 0x800FD800: nop

L_800FD804:
    // 0x800FD804: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD808: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FD80C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD810: addiu       $a2, $a2, 0x4004
    ctx->r6 = ADD32(ctx->r6, 0X4004);
    // 0x800FD814: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD818: jal         0x800FCFB0
    // 0x800FD81C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_29;
    // 0x800FD81C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_29:
L_800FD820:
    // 0x800FD820: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800FD824: addiu       $t5, $t5, 0x4010
    ctx->r13 = ADD32(ctx->r13, 0X4010);
    // 0x800FD828: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD82C: sw          $t5, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r13;
    // 0x800FD830: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD834: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FD838: b           L_800FDBA8
    // 0x800FD83C: sb          $t6, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = ctx->r14;
        goto L_800FDBA8;
    // 0x800FD83C: sb          $t6, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = ctx->r14;
L_800FD840:
    // 0x800FD840: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD848: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD84C: beq         $t7, $zero, L_800FD880
    if (ctx->r15 == 0) {
        // 0x800FD850: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_800FD880;
    }
    // 0x800FD850: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD854: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD858: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD85C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD860: addiu       $a2, $a2, 0x401C
    ctx->r6 = ADD32(ctx->r6, 0X401C);
    // 0x800FD864: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD868: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD86C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800FD870: jal         0x800FCFB0
    // 0x800FD874: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_30;
    // 0x800FD874: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x800FD878: b           L_800FD898
    // 0x800FD87C: nop

        goto L_800FD898;
    // 0x800FD87C: nop

L_800FD880:
    // 0x800FD880: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD884: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FD888: addiu       $a2, $a2, 0x4004
    ctx->r6 = ADD32(ctx->r6, 0X4004);
    // 0x800FD88C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD890: jal         0x800FCFB0
    // 0x800FD894: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_31;
    // 0x800FD894: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_31:
L_800FD898:
    // 0x800FD898: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800FD89C: addiu       $t8, $t8, 0x4010
    ctx->r24 = ADD32(ctx->r24, 0X4010);
    // 0x800FD8A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD8A4: b           L_800FDBA8
    // 0x800FD8A8: sw          $t8, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r24;
        goto L_800FDBA8;
    // 0x800FD8A8: sw          $t8, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r24;
L_800FD8AC:
    // 0x800FD8AC: lbu         $t9, 0x40($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X40);
    // 0x800FD8B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD8B4: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD8B8: bne         $t9, $zero, L_800FD8D8
    if (ctx->r25 != 0) {
        // 0x800FD8BC: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_800FD8D8;
    }
    // 0x800FD8BC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD8C0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD8C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FD8C8: addiu       $a2, $a2, 0x4004
    ctx->r6 = ADD32(ctx->r6, 0X4004);
    // 0x800FD8CC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD8D0: jal         0x800FCFB0
    // 0x800FD8D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_32;
    // 0x800FD8D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_32:
L_800FD8D8:
    // 0x800FD8D8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800FD8DC: addiu       $t0, $t0, 0x4010
    ctx->r8 = ADD32(ctx->r8, 0X4010);
    // 0x800FD8E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD8E4: b           L_800FDBA8
    // 0x800FD8E8: sw          $t0, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r8;
        goto L_800FDBA8;
    // 0x800FD8E8: sw          $t0, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r8;
L_800FD8EC:
    // 0x800FD8EC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD8F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FD8F4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD8F8: addiu       $a2, $a2, 0x4040
    ctx->r6 = ADD32(ctx->r6, 0X4040);
    // 0x800FD8FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD900: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD904: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD908: jal         0x800FCFB0
    // 0x800FD90C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_33;
    // 0x800FD90C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_33:
    // 0x800FD910: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800FD914: addiu       $t1, $t1, 0x4010
    ctx->r9 = ADD32(ctx->r9, 0X4010);
    // 0x800FD918: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD91C: b           L_800FDBA8
    // 0x800FD920: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
        goto L_800FDBA8;
    // 0x800FD920: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
L_800FD924:
    // 0x800FD924: jal         0x800DA298
    // 0x800FD928: addiu       $a0, $zero, 0x9F0
    ctx->r4 = ADD32(0, 0X9F0);
    func_800DA298(rdram, ctx);
        goto after_34;
    // 0x800FD928: addiu       $a0, $zero, 0x9F0
    ctx->r4 = ADD32(0, 0X9F0);
    after_34:
    // 0x800FD92C: beq         $v0, $zero, L_800FD960
    if (ctx->r2 == 0) {
        // 0x800FD930: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800FD960;
    }
    // 0x800FD930: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD934: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD938: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FD93C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD940: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FD944: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FD948: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x800FD94C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD950: jal         0x800FCFB0
    // 0x800FD954: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_35;
    // 0x800FD954: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_35:
    // 0x800FD958: b           L_800FD980
    // 0x800FD95C: nop

        goto L_800FD980;
    // 0x800FD95C: nop

L_800FD960:
    // 0x800FD960: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD964: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FD968: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD96C: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FD970: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x800FD974: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD978: jal         0x800FCFB0
    // 0x800FD97C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_36;
    // 0x800FD97C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_36:
L_800FD980:
    // 0x800FD980: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800FD984: addiu       $t2, $t2, 0x4010
    ctx->r10 = ADD32(ctx->r10, 0X4010);
    // 0x800FD988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD98C: b           L_800FDBA8
    // 0x800FD990: sw          $t2, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r10;
        goto L_800FDBA8;
    // 0x800FD990: sw          $t2, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r10;
L_800FD994:
    // 0x800FD994: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD99C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD9A0: addiu       $a2, $a2, 0x4034
    ctx->r6 = ADD32(ctx->r6, 0X4034);
    // 0x800FD9A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD9A8: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD9AC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD9B0: jal         0x800FCFB0
    // 0x800FD9B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_37;
    // 0x800FD9B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_37:
    // 0x800FD9B8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800FD9BC: addiu       $t3, $t3, 0x4010
    ctx->r11 = ADD32(ctx->r11, 0X4010);
    // 0x800FD9C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD9C4: b           L_800FDBA8
    // 0x800FD9C8: sw          $t3, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r11;
        goto L_800FDBA8;
    // 0x800FD9C8: sw          $t3, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r11;
L_800FD9CC:
    // 0x800FD9CC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FD9D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FD9D4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FD9D8: addiu       $a2, $a2, 0x401C
    ctx->r6 = ADD32(ctx->r6, 0X401C);
    // 0x800FD9DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FD9E0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FD9E4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FD9E8: jal         0x800FCFB0
    // 0x800FD9EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_38;
    // 0x800FD9EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_38:
    // 0x800FD9F0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800FD9F4: addiu       $t4, $t4, 0x4010
    ctx->r12 = ADD32(ctx->r12, 0X4010);
    // 0x800FD9F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FD9FC: b           L_800FDBA8
    // 0x800FDA00: sw          $t4, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r12;
        goto L_800FDBA8;
    // 0x800FDA00: sw          $t4, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r12;
L_800FDA04:
    // 0x800FDA04: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDA08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FDA0C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDA10: addiu       $a2, $a2, 0x4028
    ctx->r6 = ADD32(ctx->r6, 0X4028);
    // 0x800FDA14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDA18: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x800FDA1C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FDA20: jal         0x800FCFB0
    // 0x800FDA24: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_39;
    // 0x800FDA24: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_39:
    // 0x800FDA28: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800FDA2C: addiu       $t5, $t5, 0x4010
    ctx->r13 = ADD32(ctx->r13, 0X4010);
    // 0x800FDA30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDA34: b           L_800FDBA8
    // 0x800FDA38: sw          $t5, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r13;
        goto L_800FDBA8;
    // 0x800FDA38: sw          $t5, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r13;
L_800FDA3C:
    // 0x800FDA3C: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
    // 0x800FDA40: jal         0x800DA298
    // 0x800FDA44: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800DA298(rdram, ctx);
        goto after_40;
    // 0x800FDA44: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_40:
    // 0x800FDA48: beq         $v0, $zero, L_800FDBA8
    if (ctx->r2 == 0) {
        // 0x800FDA4C: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_800FDBA8;
    }
    // 0x800FDA4C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800FDA50: lui         $a1, 0x44DA
    ctx->r5 = S32(0X44DA << 16);
    // 0x800FDA54: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDA58: addiu       $a2, $a2, 0x4218
    ctx->r6 = ADD32(ctx->r6, 0X4218);
    // 0x800FDA5C: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x800FDA60: jal         0x800EFFB4
    // 0x800FDA64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800EFFB4(rdram, ctx);
        goto after_41;
    // 0x800FDA64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_41:
    // 0x800FDA68: beq         $v0, $zero, L_800FDAB8
    if (ctx->r2 == 0) {
        // 0x800FDA6C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_800FDAB8;
    }
    // 0x800FDA6C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FDA70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDA74: addiu       $v0, $v0, 0x5A44
    ctx->r2 = ADD32(ctx->r2, 0X5A44);
    // 0x800FDA78: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FDA7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FDA80: nop

    // 0x800FDA84: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x800FDA88: nop

    // 0x800FDA8C: bc1fl       L_800FDB00
    if (!c1cs) {
        // 0x800FDA90: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_800FDB00;
    }
    goto skip_4;
    // 0x800FDA90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_4:
    // 0x800FDA94: jal         0x800D8FF8
    // 0x800FDA98: nop

    func_800D8FF8(rdram, ctx);
        goto after_42;
    // 0x800FDA98: nop

    after_42:
    // 0x800FDA9C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDAA0: addiu       $v0, $v0, 0x5A44
    ctx->r2 = ADD32(ctx->r2, 0X5A44);
    // 0x800FDAA4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FDAA8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x800FDAAC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x800FDAB0: b           L_800FDAFC
    // 0x800FDAB4: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
        goto L_800FDAFC;
    // 0x800FDAB4: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
L_800FDAB8:
    // 0x800FDAB8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDABC: addiu       $v0, $v0, 0x5A44
    ctx->r2 = ADD32(ctx->r2, 0X5A44);
    // 0x800FDAC0: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FDAC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FDAC8: nop

    // 0x800FDACC: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x800FDAD0: nop

    // 0x800FDAD4: bc1fl       L_800FDB00
    if (!c1cs) {
        // 0x800FDAD8: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_800FDB00;
    }
    goto skip_5;
    // 0x800FDAD8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_5:
    // 0x800FDADC: jal         0x800D8FF8
    // 0x800FDAE0: nop

    func_800D8FF8(rdram, ctx);
        goto after_43;
    // 0x800FDAE0: nop

    after_43:
    // 0x800FDAE4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDAE8: addiu       $v0, $v0, 0x5A44
    ctx->r2 = ADD32(ctx->r2, 0X5A44);
    // 0x800FDAEC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FDAF0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x800FDAF4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x800FDAF8: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
L_800FDAFC:
    // 0x800FDAFC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_800FDB00:
    // 0x800FDB00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FDB04: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x800FDB08: nop

    // 0x800FDB0C: bc1fl       L_800FDBAC
    if (!c1cs) {
        // 0x800FDB10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FDBAC;
    }
    goto skip_6;
    // 0x800FDB10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x800FDB14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FDB18: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800FDB1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FDB20: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x800FDB24: addiu       $t6, $t6, 0x41CC
    ctx->r14 = ADD32(ctx->r14, 0X41CC);
    // 0x800FDB28: addiu       $t7, $t7, 0x41D8
    ctx->r15 = ADD32(ctx->r15, 0X41D8);
    // 0x800FDB2C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDB30: bc1f        L_800FDB44
    if (!c1cs) {
        // 0x800FDB34: nop
    
            goto L_800FDB44;
    }
    // 0x800FDB34: nop

    // 0x800FDB38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDB3C: b           L_800FDBA8
    // 0x800FDB40: sw          $t6, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r14;
        goto L_800FDBA8;
    // 0x800FDB40: sw          $t6, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r14;
L_800FDB44:
    // 0x800FDB44: b           L_800FDBA8
    // 0x800FDB48: sw          $t7, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r15;
        goto L_800FDBA8;
    // 0x800FDB48: sw          $t7, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r15;
L_800FDB4C:
    // 0x800FDB4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDB50: addiu       $v0, $v0, 0x5A44
    ctx->r2 = ADD32(ctx->r2, 0X5A44);
    // 0x800FDB54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FDB58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FDB5C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800FDB60: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDB64: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDB68: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x800FDB6C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDB70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDB74: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    // 0x800FDB78: bc1fl       L_800FDB9C
    if (!c1cs) {
        // 0x800FDB7C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800FDB9C;
    }
    goto skip_7;
    // 0x800FDB7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_7:
    // 0x800FDB80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FDB84: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800FDB88: jal         0x800FCFB0
    // 0x800FDB8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_44;
    // 0x800FDB8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_44:
    // 0x800FDB90: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDB94: addiu       $v0, $v0, 0x5A44
    ctx->r2 = ADD32(ctx->r2, 0X5A44);
    // 0x800FDB98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_800FDB9C:
    // 0x800FDB9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FDBA0: nop

    // 0x800FDBA4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_800FDBA8:
    // 0x800FDBA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FDBAC:
    // 0x800FDBAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FDBB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FDBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FDBB8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FDBBC: lbu         $t6, 0x5A00($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5A00);
    // 0x800FDBC0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800FDBC4: addiu       $t8, $t8, 0x4224
    ctx->r24 = ADD32(ctx->r24, 0X4224);
    // 0x800FDBC8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800FDBCC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800FDBD0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800FDBD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FDBD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FDBDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FDBE0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800FDBE4: beq         $t9, $at, L_800FDC18
    if (ctx->r25 == ctx->r1) {
        // 0x800FDBE8: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_800FDC18;
    }
    // 0x800FDBE8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800FDBEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FDBF0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDBF4: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDBF8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800FDBFC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x800FDC00: jal         0x800FCFB0
    // 0x800FDC04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_0;
    // 0x800FDC04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800FDC08: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800FDC0C: addiu       $t1, $t1, 0x4010
    ctx->r9 = ADD32(ctx->r9, 0X4010);
    // 0x800FDC10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDC14: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
L_800FDC18:
    // 0x800FDC18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FDC1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FDC20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FDC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FDC28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDC2C: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x800FDC30: lbu         $t6, 0x40($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X40);
    // 0x800FDC34: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x800FDC38: beq         $a0, $t6, L_800FDC50
    if (ctx->r4 == ctx->r14) {
        // 0x800FDC3C: nop
    
            goto L_800FDC50;
    }
    // 0x800FDC3C: nop

    // 0x800FDC40: bne         $t7, $zero, L_800FDC50
    if (ctx->r15 != 0) {
        // 0x800FDC44: sb          $a0, 0x40($v0)
        MEM_B(0X40, ctx->r2) = ctx->r4;
            goto L_800FDC50;
    }
    // 0x800FDC44: sb          $a0, 0x40($v0)
    MEM_B(0X40, ctx->r2) = ctx->r4;
    // 0x800FDC48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800FDC4C: sb          $t8, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r24;
L_800FDC50:
    // 0x800FDC50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FDC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FDC58: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800FDC5C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800FDC60: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800FDC64: addiu       $s1, $s1, 0x59C0
    ctx->r17 = ADD32(ctx->r17, 0X59C0);
    // 0x800FDC68: lbu         $t7, 0x41($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X41);
    // 0x800FDC6C: lbu         $t6, 0xF($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XF);
    // 0x800FDC70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FDC74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800FDC78: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x800FDC7C: bne         $t7, $zero, L_800FE3D8
    if (ctx->r15 != 0) {
        // 0x800FDC80: sw          $t6, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r14;
            goto L_800FE3D8;
    }
    // 0x800FDC80: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x800FDC84: lbu         $t8, 0x16($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X16);
    // 0x800FDC88: beql        $t8, $zero, L_800FE3DC
    if (ctx->r24 == 0) {
        // 0x800FDC8C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800FE3DC;
    }
    goto skip_0;
    // 0x800FDC8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800FDC90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FDC94: lwc1        $f6, 0x3C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x800FDC98: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800FDC9C: nop

    // 0x800FDCA0: bc1f        L_800FDCBC
    if (!c1cs) {
        // 0x800FDCA4: nop
    
            goto L_800FDCBC;
    }
    // 0x800FDCA4: nop

    // 0x800FDCA8: jal         0x800D8FF8
    // 0x800FDCAC: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800FDCAC: nop

    after_0:
    // 0x800FDCB0: lwc1        $f8, 0x3C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x800FDCB4: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800FDCB8: swc1        $f10, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
L_800FDCBC:
    // 0x800FDCBC: jal         0x80090200
    // 0x800FDCC0: nop

    func_80090200(rdram, ctx);
        goto after_1;
    // 0x800FDCC0: nop

    after_1:
    // 0x800FDCC4: beql        $v0, $zero, L_800FE3DC
    if (ctx->r2 == 0) {
        // 0x800FDCC8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800FE3DC;
    }
    goto skip_1;
    // 0x800FDCC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800FDCCC: jal         0x8008FF94
    // 0x800FDCD0: nop

    func_8008FF94(rdram, ctx);
        goto after_2;
    // 0x800FDCD0: nop

    after_2:
    // 0x800FDCD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FDCD8: bne         $v0, $at, L_800FDCE8
    if (ctx->r2 != ctx->r1) {
        // 0x800FDCDC: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_800FDCE8;
    }
    // 0x800FDCDC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800FDCE0: b           L_800FDCEC
    // 0x800FDCE4: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
        goto L_800FDCEC;
    // 0x800FDCE4: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
L_800FDCE8:
    // 0x800FDCE8: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
L_800FDCEC:
    // 0x800FDCEC: lbu         $t0, 0x17($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X17);
    // 0x800FDCF0: bne         $t0, $zero, L_800FE0F4
    if (ctx->r8 != 0) {
        // 0x800FDCF4: nop
    
            goto L_800FE0F4;
    }
    // 0x800FDCF4: nop

    // 0x800FDCF8: lh          $v0, 0x22($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X22);
    // 0x800FDCFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FDD00: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800FDD04: beq         $v0, $at, L_800FDD28
    if (ctx->r2 == ctx->r1) {
        // 0x800FDD08: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_800FDD28;
    }
    // 0x800FDD08: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x800FDD0C: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x800FDD10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800FDD14: addiu       $t2, $t2, 0x3E84
    ctx->r10 = ADD32(ctx->r10, 0X3E84);
    // 0x800FDD18: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800FDD1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDD20: b           L_800FDD30
    // 0x800FDD24: sw          $t3, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r11;
        goto L_800FDD30;
    // 0x800FDD24: sw          $t3, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r11;
L_800FDD28:
    // 0x800FDD28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDD2C: sw          $zero, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = 0;
L_800FDD30:
    // 0x800FDD30: jal         0x8008FE68
    // 0x800FDD34: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_8008FE68(rdram, ctx);
        goto after_3;
    // 0x800FDD34: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x800FDD38: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FDD3C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FDD40: addiu       $v0, $v0, 0x5A3F
    ctx->r2 = ADD32(ctx->r2, 0X5A3F);
    // 0x800FDD44: addiu       $v1, $v1, 0x5A3C
    ctx->r3 = ADD32(ctx->r3, 0X5A3C);
L_800FDD48:
    // 0x800FDD48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800FDD4C: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800FDD50: bne         $at, $zero, L_800FDD48
    if (ctx->r1 != 0) {
        // 0x800FDD54: sb          $zero, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = 0;
            goto L_800FDD48;
    }
    // 0x800FDD54: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x800FDD58: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDD5C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FDD60: addiu       $a2, $a2, 0x59EC
    ctx->r6 = ADD32(ctx->r6, 0X59EC);
    // 0x800FDD64: addiu       $a1, $a1, 0x59E8
    ctx->r5 = ADD32(ctx->r5, 0X59E8);
    // 0x800FDD68: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800FDD6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800FDD70: jal         0x800CCEF4
    // 0x800FDD74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800CCEF4(rdram, ctx);
        goto after_4;
    // 0x800FDD74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x800FDD78: beql        $v0, $zero, L_800FDFF8
    if (ctx->r2 == 0) {
        // 0x800FDD7C: lh          $t7, 0x20($s1)
        ctx->r15 = MEM_H(ctx->r17, 0X20);
            goto L_800FDFF8;
    }
    goto skip_2;
    // 0x800FDD7C: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
    skip_2:
    // 0x800FDD80: jal         0x800CBBE0
    // 0x800FDD84: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    func_800CBBE0(rdram, ctx);
        goto after_5;
    // 0x800FDD84: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_5:
    // 0x800FDD88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FDD8C: jal         0x800CBC00
    // 0x800FDD90: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    func_800CBC00(rdram, ctx);
        goto after_6;
    // 0x800FDD90: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_6:
    // 0x800FDD94: bne         $v0, $zero, L_800FDDBC
    if (ctx->r2 != 0) {
        // 0x800FDD98: sll         $t4, $s0, 2
        ctx->r12 = S32(ctx->r16 << 2);
            goto L_800FDDBC;
    }
    // 0x800FDD98: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x800FDD9C: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x800FDDA0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800FDDA4: addiu       $t5, $t5, 0x3E84
    ctx->r13 = ADD32(ctx->r13, 0X3E84);
    // 0x800FDDA8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800FDDAC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800FDDB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDDB4: b           L_800FDFF4
    // 0x800FDDB8: sw          $t6, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r14;
        goto L_800FDFF4;
    // 0x800FDDB8: sw          $t6, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r14;
L_800FDDBC:
    // 0x800FDDBC: jal         0x800CBBE0
    // 0x800FDDC0: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    func_800CBBE0(rdram, ctx);
        goto after_7;
    // 0x800FDDC0: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_7:
    // 0x800FDDC4: sltiu       $at, $v0, 0x12
    ctx->r1 = ctx->r2 < 0X12 ? 1 : 0;
    // 0x800FDDC8: beq         $at, $zero, L_800FDFF4
    if (ctx->r1 == 0) {
        // 0x800FDDCC: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_800FDFF4;
    }
    // 0x800FDDCC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800FDDD0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FDDD4: addu        $at, $at, $t7
    gpr jr_addend_800FDDDC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800FDDD8: lw          $t7, 0x61C8($at)
    ctx->r15 = ADD32(ctx->r1, 0X61C8);
    // 0x800FDDDC: jr          $t7
    // 0x800FDDE0: nop

    switch (jr_addend_800FDDDC >> 2) {
        case 0: goto L_800FDDE4; break;
        case 1: goto L_800FDE1C; break;
        case 2: goto L_800FDFF4; break;
        case 3: goto L_800FDFF4; break;
        case 4: goto L_800FDFF4; break;
        case 5: goto L_800FDFF4; break;
        case 6: goto L_800FDFF4; break;
        case 7: goto L_800FDE54; break;
        case 8: goto L_800FDE64; break;
        case 9: goto L_800FDE70; break;
        case 10: goto L_800FDFF4; break;
        case 11: goto L_800FDFF4; break;
        case 12: goto L_800FDEA8; break;
        case 13: goto L_800FDEC8; break;
        case 14: goto L_800FDED8; break;
        case 15: goto L_800FDF04; break;
        case 16: goto L_800FDF3C; break;
        case 17: goto L_800FDFA4; break;
        default: switch_error(__func__, 0x800FDDDC, 0x801261C8);
    }
    // 0x800FDDE0: nop

L_800FDDE4:
    // 0x800FDDE4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDDE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FDDEC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDDF0: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDDF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDDF8: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x800FDDFC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDE00: jal         0x800FCFB0
    // 0x800FDE04: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_8;
    // 0x800FDE04: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800FDE08: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800FDE0C: addiu       $t8, $t8, 0x3FC8
    ctx->r24 = ADD32(ctx->r24, 0X3FC8);
    // 0x800FDE10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDE14: b           L_800FDFF4
    // 0x800FDE18: sw          $t8, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r24;
        goto L_800FDFF4;
    // 0x800FDE18: sw          $t8, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r24;
L_800FDE1C:
    // 0x800FDE1C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDE20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FDE24: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDE28: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDE2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDE30: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x800FDE34: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDE38: jal         0x800FCFB0
    // 0x800FDE3C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_9;
    // 0x800FDE3C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x800FDE40: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800FDE44: addiu       $t9, $t9, 0x3FC8
    ctx->r25 = ADD32(ctx->r25, 0X3FC8);
    // 0x800FDE48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDE4C: b           L_800FDFF4
    // 0x800FDE50: sw          $t9, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r25;
        goto L_800FDFF4;
    // 0x800FDE50: sw          $t9, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r25;
L_800FDE54:
    // 0x800FDE54: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800FDE58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDE5C: b           L_800FDFF4
    // 0x800FDE60: sb          $t0, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = ctx->r8;
        goto L_800FDFF4;
    // 0x800FDE60: sb          $t0, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = ctx->r8;
L_800FDE64:
    // 0x800FDE64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDE68: b           L_800FDFF4
    // 0x800FDE6C: sb          $zero, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = 0;
        goto L_800FDFF4;
    // 0x800FDE6C: sb          $zero, 0x5A1E($at)
    MEM_B(0X5A1E, ctx->r1) = 0;
L_800FDE70:
    // 0x800FDE70: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDE74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FDE78: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDE7C: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDE80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDE84: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x800FDE88: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDE8C: jal         0x800FCFB0
    // 0x800FDE90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_10;
    // 0x800FDE90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x800FDE94: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800FDE98: addiu       $t1, $t1, 0x4064
    ctx->r9 = ADD32(ctx->r9, 0X4064);
    // 0x800FDE9C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDEA0: b           L_800FDFF4
    // 0x800FDEA4: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
        goto L_800FDFF4;
    // 0x800FDEA4: sw          $t1, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r9;
L_800FDEA8:
    // 0x800FDEA8: jal         0x800DA298
    // 0x800FDEAC: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
    func_800DA298(rdram, ctx);
        goto after_11;
    // 0x800FDEAC: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
    after_11:
    // 0x800FDEB0: beq         $v0, $zero, L_800FDFF4
    if (ctx->r2 == 0) {
        // 0x800FDEB4: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_800FDFF4;
    }
    // 0x800FDEB4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800FDEB8: addiu       $t2, $t2, 0x41CC
    ctx->r10 = ADD32(ctx->r10, 0X41CC);
    // 0x800FDEBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDEC0: b           L_800FDFF4
    // 0x800FDEC4: sw          $t2, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r10;
        goto L_800FDFF4;
    // 0x800FDEC4: sw          $t2, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r10;
L_800FDEC8:
    // 0x800FDEC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FDECC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDED0: b           L_800FDFF4
    // 0x800FDED4: swc1        $f6, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f6.u32l;
        goto L_800FDFF4;
    // 0x800FDED4: swc1        $f6, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f6.u32l;
L_800FDED8:
    // 0x800FDED8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDEDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FDEE0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDEE4: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDEE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDEEC: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x800FDEF0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDEF4: jal         0x800FCFB0
    // 0x800FDEF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_12;
    // 0x800FDEF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x800FDEFC: b           L_800FDFF8
    // 0x800FDF00: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
        goto L_800FDFF8;
    // 0x800FDF00: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
L_800FDF04:
    // 0x800FDF04: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDF08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FDF0C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDF10: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDF14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDF18: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    // 0x800FDF1C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDF20: jal         0x800FCFB0
    // 0x800FDF24: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_13;
    // 0x800FDF24: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x800FDF28: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800FDF2C: addiu       $t3, $t3, 0x419C
    ctx->r11 = ADD32(ctx->r11, 0X419C);
    // 0x800FDF30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDF34: b           L_800FDFF4
    // 0x800FDF38: sw          $t3, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r11;
        goto L_800FDFF4;
    // 0x800FDF38: sw          $t3, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r11;
L_800FDF3C:
    // 0x800FDF3C: jal         0x800DA298
    // 0x800FDF40: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    func_800DA298(rdram, ctx);
        goto after_14;
    // 0x800FDF40: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    after_14:
    // 0x800FDF44: beq         $v0, $zero, L_800FDF90
    if (ctx->r2 == 0) {
        // 0x800FDF48: nop
    
            goto L_800FDF90;
    }
    // 0x800FDF48: nop

    // 0x800FDF4C: jal         0x800DA298
    // 0x800FDF50: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_800DA298(rdram, ctx);
        goto after_15;
    // 0x800FDF50: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_15:
    // 0x800FDF54: bne         $v0, $zero, L_800FDF90
    if (ctx->r2 != 0) {
        // 0x800FDF58: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800FDF90;
    }
    // 0x800FDF58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDF5C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDF60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FDF64: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDF68: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDF6C: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    // 0x800FDF70: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDF74: jal         0x800FCFB0
    // 0x800FDF78: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_16;
    // 0x800FDF78: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x800FDF7C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800FDF80: addiu       $t4, $t4, 0x4010
    ctx->r12 = ADD32(ctx->r12, 0X4010);
    // 0x800FDF84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDF88: b           L_800FDFF4
    // 0x800FDF8C: sw          $t4, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r12;
        goto L_800FDFF4;
    // 0x800FDF8C: sw          $t4, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r12;
L_800FDF90:
    // 0x800FDF90: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800FDF94: addiu       $t5, $t5, 0x4124
    ctx->r13 = ADD32(ctx->r13, 0X4124);
    // 0x800FDF98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDF9C: b           L_800FDFF4
    // 0x800FDFA0: sw          $t5, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r13;
        goto L_800FDFF4;
    // 0x800FDFA0: sw          $t5, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r13;
L_800FDFA4:
    // 0x800FDFA4: jal         0x800DA298
    // 0x800FDFA8: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    func_800DA298(rdram, ctx);
        goto after_17;
    // 0x800FDFA8: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    after_17:
    // 0x800FDFAC: beql        $v0, $zero, L_800FDFF8
    if (ctx->r2 == 0) {
        // 0x800FDFB0: lh          $t7, 0x20($s1)
        ctx->r15 = MEM_H(ctx->r17, 0X20);
            goto L_800FDFF8;
    }
    goto skip_3;
    // 0x800FDFB0: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
    skip_3:
    // 0x800FDFB4: jal         0x800DA298
    // 0x800FDFB8: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_800DA298(rdram, ctx);
        goto after_18;
    // 0x800FDFB8: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_18:
    // 0x800FDFBC: bne         $v0, $zero, L_800FDFF4
    if (ctx->r2 != 0) {
        // 0x800FDFC0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800FDFF4;
    }
    // 0x800FDFC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FDFC4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FDFC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FDFCC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800FDFD0: addiu       $a2, $a2, 0x3E84
    ctx->r6 = ADD32(ctx->r6, 0X3E84);
    // 0x800FDFD4: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    // 0x800FDFD8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800FDFDC: jal         0x800FCFB0
    // 0x800FDFE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800FCFB0(rdram, ctx);
        goto after_19;
    // 0x800FDFE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_19:
    // 0x800FDFE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800FDFE8: addiu       $t6, $t6, 0x4010
    ctx->r14 = ADD32(ctx->r14, 0X4010);
    // 0x800FDFEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDFF0: sw          $t6, 0x5A04($at)
    MEM_W(0X5A04, ctx->r1) = ctx->r14;
L_800FDFF4:
    // 0x800FDFF4: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
L_800FDFF8:
    // 0x800FDFF8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800FDFFC: beq         $t7, $zero, L_800FE00C
    if (ctx->r15 == 0) {
        // 0x800FE000: nop
    
            goto L_800FE00C;
    }
    // 0x800FE000: nop

    // 0x800FE004: jal         0x800FD2A0
    // 0x800FE008: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_800FD2A0(rdram, ctx);
        goto after_20;
    // 0x800FE008: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_20:
L_800FE00C:
    // 0x800FE00C: jal         0x800FDBB8
    // 0x800FE010: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    func_800FDBB8(rdram, ctx);
        goto after_21;
    // 0x800FE010: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_21:
    // 0x800FE014: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800FE018: lw          $t8, 0x5A40($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5A40);
    // 0x800FE01C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FE020: addiu       $s0, $s0, 0x5A20
    ctx->r16 = ADD32(ctx->r16, 0X5A20);
    // 0x800FE024: blez        $t8, L_800FE0F4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800FE028: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_800FE0F4;
    }
    // 0x800FE028: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800FE02C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_800FE030:
    // 0x800FE030: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800FE034: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE038: addiu       $t9, $t9, 0x5A3C
    ctx->r25 = ADD32(ctx->r25, 0X5A3C);
    // 0x800FE03C: beq         $a0, $zero, L_800FE0D8
    if (ctx->r4 == 0) {
        // 0x800FE040: addu        $v1, $a3, $t9
        ctx->r3 = ADD32(ctx->r7, ctx->r25);
            goto L_800FE0D8;
    }
    // 0x800FE040: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x800FE044: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x800FE048: beq         $t0, $zero, L_800FE06C
    if (ctx->r8 == 0) {
        // 0x800FE04C: nop
    
            goto L_800FE06C;
    }
    // 0x800FE04C: nop

    // 0x800FE050: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x800FE054: jal         0x800FCCD4
    // 0x800FE058: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_800FCCD4(rdram, ctx);
        goto after_22;
    // 0x800FE058: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_22:
    // 0x800FE05C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x800FE060: bne         $v0, $zero, L_800FE0D8
    if (ctx->r2 != 0) {
        // 0x800FE064: lw          $a3, 0x54($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X54);
            goto L_800FE0D8;
    }
    // 0x800FE064: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x800FE068: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800FE06C:
    // 0x800FE06C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FE070: lwc1        $f4, 0x6210($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6210);
    // 0x800FE074: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800FE078: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800FE07C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800FE080: addiu       $t3, $t3, 0x5A30
    ctx->r11 = ADD32(ctx->r11, 0X5A30);
    // 0x800FE084: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800FE088: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x800FE08C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FE090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FE094: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x800FE098: jal         0x800FCAE0
    // 0x800FE09C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_800FCAE0(rdram, ctx);
        goto after_23;
    // 0x800FE09C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_23:
    // 0x800FE0A0: jal         0x800FCA90
    // 0x800FE0A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800FCA90(rdram, ctx);
        goto after_24;
    // 0x800FE0A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_24:
    // 0x800FE0A8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x800FE0AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FE0B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FE0B4: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x800FE0B8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800FE0BC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800FE0C0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FE0C4: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x800FE0C8: lw          $t6, 0x5A40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A40);
    // 0x800FE0CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE0D0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800FE0D4: sw          $t7, 0x5A40($at)
    MEM_W(0X5A40, ctx->r1) = ctx->r15;
L_800FE0D8:
    // 0x800FE0D8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800FE0DC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800FE0E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FE0E4: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x800FE0E8: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x800FE0EC: bne         $a3, $at, L_800FE030
    if (ctx->r7 != ctx->r1) {
        // 0x800FE0F0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800FE030;
    }
    // 0x800FE0F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800FE0F4:
    // 0x800FE0F4: jal         0x800FE914
    // 0x800FE0F8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800FE914(rdram, ctx);
        goto after_25;
    // 0x800FE0F8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_25:
    // 0x800FE0FC: lbu         $t0, 0x17($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X17);
    // 0x800FE100: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FE104: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800FE108: bnel        $t0, $zero, L_800FE3DC
    if (ctx->r8 != 0) {
        // 0x800FE10C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800FE3DC;
    }
    goto skip_4;
    // 0x800FE10C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x800FE110: lw          $v1, 0x5A04($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5A04);
    // 0x800FE114: lw          $t1, 0x5A08($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5A08);
    // 0x800FE118: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x800FE11C: bnel        $t1, $v1, L_800FE14C
    if (ctx->r9 != ctx->r3) {
        // 0x800FE120: lbu         $v0, 0xF($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0XF);
            goto L_800FE14C;
    }
    goto skip_5;
    // 0x800FE120: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    skip_5:
    // 0x800FE124: lbu         $t3, 0x10($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X10);
    // 0x800FE128: bnel        $t2, $t3, L_800FE14C
    if (ctx->r10 != ctx->r11) {
        // 0x800FE12C: lbu         $v0, 0xF($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0XF);
            goto L_800FE14C;
    }
    goto skip_6;
    // 0x800FE12C: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    skip_6:
    // 0x800FE130: lbu         $t4, 0xF($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XF);
    // 0x800FE134: bnel        $t4, $zero, L_800FE14C
    if (ctx->r12 != 0) {
        // 0x800FE138: lbu         $v0, 0xF($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0XF);
            goto L_800FE14C;
    }
    goto skip_7;
    // 0x800FE138: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    skip_7:
    // 0x800FE13C: lbu         $t5, 0x18($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X18);
    // 0x800FE140: beql        $t5, $zero, L_800FE314
    if (ctx->r13 == 0) {
        // 0x800FE144: lbu         $t2, 0x14($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X14);
            goto L_800FE314;
    }
    goto skip_8;
    // 0x800FE144: lbu         $t2, 0x14($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X14);
    skip_8:
    // 0x800FE148: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
L_800FE14C:
    // 0x800FE14C: bne         $v0, $zero, L_800FE15C
    if (ctx->r2 != 0) {
        // 0x800FE150: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_800FE15C;
    }
    // 0x800FE150: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x800FE154: b           L_800FE184
    // 0x800FE158: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800FE184;
    // 0x800FE158: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800FE15C:
    // 0x800FE15C: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x800FE160: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE164: sb          $t6, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r14;
    // 0x800FE168: beq         $a0, $at, L_800FE184
    if (ctx->r4 == ctx->r1) {
        // 0x800FE16C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800FE184;
    }
    // 0x800FE16C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800FE170: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x800FE174: jal         0x800FC97C
    // 0x800FE178: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800FC97C(rdram, ctx);
        goto after_26;
    // 0x800FE178: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_26:
    // 0x800FE17C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FE180: lw          $v1, 0x5A04($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5A04);
L_800FE184:
    // 0x800FE184: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x800FE188: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE18C: sw          $v1, 0x5A08($at)
    MEM_W(0X5A08, ctx->r1) = ctx->r3;
    // 0x800FE190: beq         $v1, $zero, L_800FE308
    if (ctx->r3 == 0) {
        // 0x800FE194: sb          $t7, 0x10($s1)
        MEM_B(0X10, ctx->r17) = ctx->r15;
            goto L_800FE308;
    }
    // 0x800FE194: sb          $t7, 0x10($s1)
    MEM_B(0X10, ctx->r17) = ctx->r15;
    // 0x800FE198: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x800FE19C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE1A0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x800FE1A4: beql        $a0, $at, L_800FE30C
    if (ctx->r4 == ctx->r1) {
        // 0x800FE1A8: lbu         $t1, 0xF($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0XF);
            goto L_800FE30C;
    }
    goto skip_9;
    // 0x800FE1A8: lbu         $t1, 0xF($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XF);
    skip_9:
    // 0x800FE1AC: beql        $t8, $zero, L_800FE264
    if (ctx->r24 == 0) {
        // 0x800FE1B0: mtc1        $s0, $f10
        ctx->f10.u32l = ctx->r16;
            goto L_800FE264;
    }
    goto skip_10;
    // 0x800FE1B0: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    skip_10:
    // 0x800FE1B4: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x800FE1B8: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x800FE1BC: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800FE1C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FE1C4: jal         0x800FCDE0
    // 0x800FE1C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_800FCDE0(rdram, ctx);
        goto after_27;
    // 0x800FE1C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_27:
    // 0x800FE1CC: bne         $v0, $zero, L_800FE1DC
    if (ctx->r2 != 0) {
        // 0x800FE1D0: lwc1        $f0, 0x3C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800FE1DC;
    }
    // 0x800FE1D0: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800FE1D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800FE1D8: sb          $t9, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r25;
L_800FE1DC:
    // 0x800FE1DC: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800FE1E0: lw          $t0, 0x5A04($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5A04);
    // 0x800FE1E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE1E8: lui         $t1, 0x393
    ctx->r9 = S32(0X393 << 16);
    // 0x800FE1EC: lh          $v0, 0xA($t0)
    ctx->r2 = MEM_H(ctx->r8, 0XA);
    // 0x800FE1F0: ori         $t1, $t1, 0x8700
    ctx->r9 = ctx->r9 | 0X8700;
    // 0x800FE1F4: beql        $v0, $at, L_800FE30C
    if (ctx->r2 == ctx->r1) {
        // 0x800FE1F8: lbu         $t1, 0xF($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0XF);
            goto L_800FE30C;
    }
    goto skip_11;
    // 0x800FE1F8: lbu         $t1, 0xF($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XF);
    skip_11:
    // 0x800FE1FC: div         $zero, $t1, $v0
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r2)));
    // 0x800FE200: mflo        $t2
    ctx->r10 = lo;
    // 0x800FE204: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800FE208: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800FE20C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FE210: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FE214: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x800FE218: bne         $v0, $zero, L_800FE224
    if (ctx->r2 != 0) {
        // 0x800FE21C: nop
    
            goto L_800FE224;
    }
    // 0x800FE21C: nop

    // 0x800FE220: break       7
    do_break(2148524576);
L_800FE224:
    // 0x800FE224: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE228: bne         $v0, $at, L_800FE23C
    if (ctx->r2 != ctx->r1) {
        // 0x800FE22C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FE23C;
    }
    // 0x800FE22C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FE230: bne         $t1, $at, L_800FE23C
    if (ctx->r9 != ctx->r1) {
        // 0x800FE234: nop
    
            goto L_800FE23C;
    }
    // 0x800FE234: nop

    // 0x800FE238: break       6
    do_break(2148524600);
L_800FE23C:
    // 0x800FE23C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800FE240: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800FE244: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800FE248: jal         0x800FCED0
    // 0x800FE24C: nop

    func_800FCED0(rdram, ctx);
        goto after_28;
    // 0x800FE24C: nop

    after_28:
    // 0x800FE250: bne         $v0, $zero, L_800FE308
    if (ctx->r2 != 0) {
        // 0x800FE254: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_800FE308;
    }
    // 0x800FE254: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800FE258: b           L_800FE308
    // 0x800FE25C: sb          $t4, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r12;
        goto L_800FE308;
    // 0x800FE25C: sb          $t4, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r12;
    // 0x800FE260: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
L_800FE264:
    // 0x800FE264: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x800FE268: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800FE26C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FE270: jal         0x800FCDE0
    // 0x800FE274: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_800FCDE0(rdram, ctx);
        goto after_29;
    // 0x800FE274: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_29:
    // 0x800FE278: bne         $v0, $zero, L_800FE288
    if (ctx->r2 != 0) {
        // 0x800FE27C: lwc1        $f0, 0x3C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800FE288;
    }
    // 0x800FE27C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800FE280: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800FE284: sb          $t5, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r13;
L_800FE288:
    // 0x800FE288: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FE28C: lw          $t6, 0x5A04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A04);
    // 0x800FE290: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE294: lui         $t7, 0x393
    ctx->r15 = S32(0X393 << 16);
    // 0x800FE298: lh          $v0, 0x8($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X8);
    // 0x800FE29C: ori         $t7, $t7, 0x8700
    ctx->r15 = ctx->r15 | 0X8700;
    // 0x800FE2A0: beql        $v0, $at, L_800FE30C
    if (ctx->r2 == ctx->r1) {
        // 0x800FE2A4: lbu         $t1, 0xF($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0XF);
            goto L_800FE30C;
    }
    goto skip_12;
    // 0x800FE2A4: lbu         $t1, 0xF($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XF);
    skip_12:
    // 0x800FE2A8: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x800FE2AC: mflo        $t8
    ctx->r24 = lo;
    // 0x800FE2B0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800FE2B4: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800FE2B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FE2BC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FE2C0: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x800FE2C4: bne         $v0, $zero, L_800FE2D0
    if (ctx->r2 != 0) {
        // 0x800FE2C8: nop
    
            goto L_800FE2D0;
    }
    // 0x800FE2C8: nop

    // 0x800FE2CC: break       7
    do_break(2148524748);
L_800FE2D0:
    // 0x800FE2D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE2D4: bne         $v0, $at, L_800FE2E8
    if (ctx->r2 != ctx->r1) {
        // 0x800FE2D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800FE2E8;
    }
    // 0x800FE2D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FE2DC: bne         $t7, $at, L_800FE2E8
    if (ctx->r15 != ctx->r1) {
        // 0x800FE2E0: nop
    
            goto L_800FE2E8;
    }
    // 0x800FE2E0: nop

    // 0x800FE2E4: break       6
    do_break(2148524772);
L_800FE2E8:
    // 0x800FE2E8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800FE2EC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800FE2F0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800FE2F4: jal         0x800FCED0
    // 0x800FE2F8: nop

    func_800FCED0(rdram, ctx);
        goto after_30;
    // 0x800FE2F8: nop

    after_30:
    // 0x800FE2FC: bne         $v0, $zero, L_800FE308
    if (ctx->r2 != 0) {
        // 0x800FE300: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_800FE308;
    }
    // 0x800FE300: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800FE304: sb          $t0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r8;
L_800FE308:
    // 0x800FE308: lbu         $t1, 0xF($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XF);
L_800FE30C:
    // 0x800FE30C: sb          $t1, 0x18($s1)
    MEM_B(0X18, ctx->r17) = ctx->r9;
    // 0x800FE310: lbu         $t2, 0x14($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X14);
L_800FE314:
    // 0x800FE314: beql        $t2, $zero, L_800FE3DC
    if (ctx->r10 == 0) {
        // 0x800FE318: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800FE3DC;
    }
    goto skip_13;
    // 0x800FE318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_13:
    // 0x800FE31C: lbu         $t3, 0x13($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X13);
    // 0x800FE320: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x800FE324: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE328: beq         $t3, $zero, L_800FE388
    if (ctx->r11 == 0) {
        // 0x800FE32C: nop
    
            goto L_800FE388;
    }
    // 0x800FE32C: nop

    // 0x800FE330: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE334: beq         $a0, $at, L_800FE344
    if (ctx->r4 == ctx->r1) {
        // 0x800FE338: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_800FE344;
    }
    // 0x800FE338: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800FE33C: jal         0x800FC934
    // 0x800FE340: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_800FC934(rdram, ctx);
        goto after_31;
    // 0x800FE340: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_31:
L_800FE344:
    // 0x800FE344: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE348: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FE34C: addiu       $s0, $s0, 0x5A2C
    ctx->r16 = ADD32(ctx->r16, 0X5A2C);
    // 0x800FE350: addiu       $v0, $v0, 0x5A20
    ctx->r2 = ADD32(ctx->r2, 0X5A20);
    // 0x800FE354: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_800FE358:
    // 0x800FE358: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800FE35C: beql        $a0, $zero, L_800FE378
    if (ctx->r4 == 0) {
        // 0x800FE360: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800FE378;
    }
    goto skip_14;
    // 0x800FE360: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_14:
    // 0x800FE364: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x800FE368: jal         0x800FC934
    // 0x800FE36C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_800FC934(rdram, ctx);
        goto after_32;
    // 0x800FE36C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_32:
    // 0x800FE370: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800FE374: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800FE378:
    // 0x800FE378: bnel        $v0, $s0, L_800FE358
    if (ctx->r2 != ctx->r16) {
        // 0x800FE37C: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_800FE358;
    }
    goto skip_15;
    // 0x800FE37C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_15:
    // 0x800FE380: b           L_800FE3D8
    // 0x800FE384: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
        goto L_800FE3D8;
    // 0x800FE384: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
L_800FE388:
    // 0x800FE388: beq         $a0, $at, L_800FE398
    if (ctx->r4 == ctx->r1) {
        // 0x800FE38C: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_800FE398;
    }
    // 0x800FE38C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800FE390: jal         0x800FC934
    // 0x800FE394: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800FC934(rdram, ctx);
        goto after_33;
    // 0x800FE394: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_33:
L_800FE398:
    // 0x800FE398: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE39C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FE3A0: addiu       $s0, $s0, 0x5A2C
    ctx->r16 = ADD32(ctx->r16, 0X5A2C);
    // 0x800FE3A4: addiu       $v0, $v0, 0x5A20
    ctx->r2 = ADD32(ctx->r2, 0X5A20);
    // 0x800FE3A8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_800FE3AC:
    // 0x800FE3AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800FE3B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800FE3B4: beql        $a0, $zero, L_800FE3CC
    if (ctx->r4 == 0) {
        // 0x800FE3B8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800FE3CC;
    }
    goto skip_16;
    // 0x800FE3B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_16:
    // 0x800FE3BC: jal         0x800FC934
    // 0x800FE3C0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_800FC934(rdram, ctx);
        goto after_34;
    // 0x800FE3C0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_34:
    // 0x800FE3C4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800FE3C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800FE3CC:
    // 0x800FE3CC: bnel        $v0, $s0, L_800FE3AC
    if (ctx->r2 != ctx->r16) {
        // 0x800FE3D0: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_800FE3AC;
    }
    goto skip_17;
    // 0x800FE3D0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_17:
    // 0x800FE3D4: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
L_800FE3D8:
    // 0x800FE3D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800FE3DC:
    // 0x800FE3DC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800FE3E0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800FE3E4: jr          $ra
    // 0x800FE3E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800FE3E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800FE3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE3EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FE3F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE3F4: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    // 0x800FE3F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE3FC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800FE400: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x800FE404: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x800FE408: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800FE40C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800FE410: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800FE414: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800FE418: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800FE41C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800FE420: beq         $a0, $at, L_800FE430
    if (ctx->r4 == ctx->r1) {
        // 0x800FE424: sdc1        $f20, 0x10($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
            goto L_800FE430;
    }
    // 0x800FE424: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800FE428: jal         0x800FCA90
    // 0x800FE42C: nop

    func_800FCA90(rdram, ctx);
        goto after_0;
    // 0x800FE42C: nop

    after_0:
L_800FE430:
    // 0x800FE430: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800FE434: addiu       $s5, $s5, 0x5A40
    ctx->r21 = ADD32(ctx->r21, 0X5A40);
    // 0x800FE438: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x800FE43C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800FE440: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800FE444: blez        $t6, L_800FE4B4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800FE448: lui         $s2, 0x8013
        ctx->r18 = S32(0X8013 << 16);
            goto L_800FE4B4;
    }
    // 0x800FE448: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800FE44C: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x800FE450: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800FE454: addiu       $s6, $s6, 0x5A3C
    ctx->r22 = ADD32(ctx->r22, 0X5A3C);
    // 0x800FE458: addiu       $s2, $s2, 0x5A20
    ctx->r18 = ADD32(ctx->r18, 0X5A20);
    // 0x800FE45C: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
L_800FE460:
    // 0x800FE460: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800FE464: addu        $s0, $s6, $s1
    ctx->r16 = ADD32(ctx->r22, ctx->r17);
    // 0x800FE468: beql        $a0, $zero, L_800FE4A8
    if (ctx->r4 == 0) {
        // 0x800FE46C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FE4A8;
    }
    goto skip_0;
    // 0x800FE46C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800FE470: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x800FE474: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800FE478: addiu       $t8, $t8, 0x5A30
    ctx->r24 = ADD32(ctx->r24, 0X5A30);
    // 0x800FE47C: beql        $t7, $zero, L_800FE4A8
    if (ctx->r15 == 0) {
        // 0x800FE480: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FE4A8;
    }
    goto skip_1;
    // 0x800FE480: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x800FE484: jal         0x800FCA90
    // 0x800FE488: addu        $s4, $s3, $t8
    ctx->r20 = ADD32(ctx->r19, ctx->r24);
    func_800FCA90(rdram, ctx);
        goto after_1;
    // 0x800FE488: addu        $s4, $s3, $t8
    ctx->r20 = ADD32(ctx->r19, ctx->r24);
    after_1:
    // 0x800FE48C: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x800FE490: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x800FE494: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x800FE498: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800FE49C: swc1        $f20, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f20.u32l;
    // 0x800FE4A0: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x800FE4A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FE4A8:
    // 0x800FE4A8: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800FE4AC: bne         $s1, $s7, L_800FE460
    if (ctx->r17 != ctx->r23) {
        // 0x800FE4B0: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800FE460;
    }
    // 0x800FE4B0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_800FE4B4:
    // 0x800FE4B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800FE4B8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800FE4BC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800FE4C0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800FE4C4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800FE4C8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800FE4CC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800FE4D0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800FE4D4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x800FE4D8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x800FE4DC: jr          $ra
    // 0x800FE4E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800FE4E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800FE4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE4E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FE4E8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FE4EC: lbu         $t6, 0x59D7($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X59D7);
    // 0x800FE4F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800FE4F4: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x800FE4F8: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x800FE4FC: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800FE500: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800FE504: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800FE508: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800FE50C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800FE510: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800FE514: beq         $t6, $zero, L_800FE524
    if (ctx->r14 == 0) {
        // 0x800FE518: sdc1        $f20, 0x10($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
            goto L_800FE524;
    }
    // 0x800FE518: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800FE51C: b           L_800FE5E4
    // 0x800FE520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800FE5E4;
    // 0x800FE520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800FE524:
    // 0x800FE524: jal         0x800C77DC
    // 0x800FE528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_0;
    // 0x800FE528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800FE52C: jal         0x800FDC28
    // 0x800FE530: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800FDC28(rdram, ctx);
        goto after_1;
    // 0x800FE530: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800FE534: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE538: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    // 0x800FE53C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE540: beq         $a0, $at, L_800FE550
    if (ctx->r4 == ctx->r1) {
        // 0x800FE544: nop
    
            goto L_800FE550;
    }
    // 0x800FE544: nop

    // 0x800FE548: jal         0x800FC74C
    // 0x800FE54C: nop

    func_800FC74C(rdram, ctx);
        goto after_2;
    // 0x800FE54C: nop

    after_2:
L_800FE550:
    // 0x800FE550: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800FE554: addiu       $s5, $s5, 0x5A40
    ctx->r21 = ADD32(ctx->r21, 0X5A40);
    // 0x800FE558: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x800FE55C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800FE560: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800FE564: blez        $t7, L_800FE5D4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800FE568: lui         $s2, 0x8013
        ctx->r18 = S32(0X8013 << 16);
            goto L_800FE5D4;
    }
    // 0x800FE568: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800FE56C: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x800FE570: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800FE574: addiu       $s6, $s6, 0x5A3C
    ctx->r22 = ADD32(ctx->r22, 0X5A3C);
    // 0x800FE578: addiu       $s2, $s2, 0x5A20
    ctx->r18 = ADD32(ctx->r18, 0X5A20);
    // 0x800FE57C: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
L_800FE580:
    // 0x800FE580: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800FE584: addu        $s0, $s6, $s1
    ctx->r16 = ADD32(ctx->r22, ctx->r17);
    // 0x800FE588: beql        $a0, $zero, L_800FE5C8
    if (ctx->r4 == 0) {
        // 0x800FE58C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FE5C8;
    }
    goto skip_0;
    // 0x800FE58C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800FE590: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x800FE594: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE598: addiu       $t9, $t9, 0x5A30
    ctx->r25 = ADD32(ctx->r25, 0X5A30);
    // 0x800FE59C: beql        $t8, $zero, L_800FE5C8
    if (ctx->r24 == 0) {
        // 0x800FE5A0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FE5C8;
    }
    goto skip_1;
    // 0x800FE5A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x800FE5A4: jal         0x800FC74C
    // 0x800FE5A8: addu        $s4, $s3, $t9
    ctx->r20 = ADD32(ctx->r19, ctx->r25);
    func_800FC74C(rdram, ctx);
        goto after_3;
    // 0x800FE5A8: addu        $s4, $s3, $t9
    ctx->r20 = ADD32(ctx->r19, ctx->r25);
    after_3:
    // 0x800FE5AC: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x800FE5B0: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x800FE5B4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x800FE5B8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FE5BC: swc1        $f20, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f20.u32l;
    // 0x800FE5C0: sw          $t1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r9;
    // 0x800FE5C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FE5C8:
    // 0x800FE5C8: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800FE5CC: bne         $s1, $s7, L_800FE580
    if (ctx->r17 != ctx->r23) {
        // 0x800FE5D0: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800FE580;
    }
    // 0x800FE5D0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_800FE5D4:
    // 0x800FE5D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FE5D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE5DC: sb          $t2, 0x5A01($at)
    MEM_B(0X5A01, ctx->r1) = ctx->r10;
    // 0x800FE5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FE5E4:
    // 0x800FE5E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800FE5E8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800FE5EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800FE5F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800FE5F4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800FE5F8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800FE5FC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800FE600: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800FE604: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x800FE608: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x800FE60C: jr          $ra
    // 0x800FE610: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800FE610: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800FE614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE614: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE618: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    // 0x800FE61C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FE620: sb          $t6, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r14;
    // 0x800FE624: sb          $zero, 0x17($a0)
    MEM_B(0X17, ctx->r4) = 0;
    // 0x800FE628: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800FE62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE630: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800FE634: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE638: addiu       $v0, $t8, 0x59C0
    ctx->r2 = ADD32(ctx->r24, 0X59C0);
    // 0x800FE63C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE644: sw          $t7, 0x5A40($at)
    MEM_W(0X5A40, ctx->r1) = ctx->r15;
    // 0x800FE648: addiu       $a0, $a0, 0x59C4
    ctx->r4 = ADD32(ctx->r4, 0X59C4);
    // 0x800FE64C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800FE650:
    // 0x800FE650: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800FE654: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800FE658: sb          $zero, 0x34($v1)
    MEM_B(0X34, ctx->r3) = 0;
    // 0x800FE65C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800FE660: bne         $at, $zero, L_800FE650
    if (ctx->r1 != 0) {
        // 0x800FE664: sh          $zero, 0x34($v0)
        MEM_H(0X34, ctx->r2) = 0;
            goto L_800FE650;
    }
    // 0x800FE664: sh          $zero, 0x34($v0)
    MEM_H(0X34, ctx->r2) = 0;
    // 0x800FE668: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FE66C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE670: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE674: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FE678: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FE67C: addiu       $a1, $a1, 0x5A3F
    ctx->r5 = ADD32(ctx->r5, 0X5A3F);
    // 0x800FE680: addiu       $v0, $v0, 0x5A3C
    ctx->r2 = ADD32(ctx->r2, 0X5A3C);
    // 0x800FE684: addiu       $a0, $a0, 0x5A30
    ctx->r4 = ADD32(ctx->r4, 0X5A30);
    // 0x800FE688: addiu       $v1, $v1, 0x5A20
    ctx->r3 = ADD32(ctx->r3, 0X5A20);
L_800FE68C:
    // 0x800FE68C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800FE690: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800FE694: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800FE698: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800FE69C: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x800FE6A0: swc1        $f0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f0.u32l;
    // 0x800FE6A4: bne         $at, $zero, L_800FE68C
    if (ctx->r1 != 0) {
        // 0x800FE6A8: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_800FE68C;
    }
    // 0x800FE6A8: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x800FE6AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE6B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE6B4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FE6B8: addiu       $v1, $v1, 0x5A1E
    ctx->r3 = ADD32(ctx->r3, 0X5A1E);
    // 0x800FE6BC: addiu       $v0, $v0, 0x5A12
    ctx->r2 = ADD32(ctx->r2, 0X5A12);
    // 0x800FE6C0: sb          $zero, 0x5A10($at)
    MEM_B(0X5A10, ctx->r1) = 0;
    // 0x800FE6C4: sb          $zero, 0x5A11($at)
    MEM_B(0X5A11, ctx->r1) = 0;
L_800FE6C8:
    // 0x800FE6C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800FE6CC: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x800FE6D0: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x800FE6D4: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x800FE6D8: bne         $v0, $v1, L_800FE6C8
    if (ctx->r2 != ctx->r3) {
        // 0x800FE6DC: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_800FE6C8;
    }
    // 0x800FE6DC: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x800FE6E0: jal         0x800FDC28
    // 0x800FE6E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800FDC28(rdram, ctx);
        goto after_0;
    // 0x800FE6E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800FE6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FE6F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FE6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE6F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE6FC: bne         $a0, $zero, L_800FE720
    if (ctx->r4 != 0) {
        // 0x800FE700: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800FE720;
    }
    // 0x800FE700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE704: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FE708: lbu         $t6, 0x59D6($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X59D6);
    // 0x800FE70C: beql        $t6, $zero, L_800FE724
    if (ctx->r14 == 0) {
        // 0x800FE710: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FE724;
    }
    goto skip_0;
    // 0x800FE710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FE714: jal         0x800FE4E4
    // 0x800FE718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800FE4E4(rdram, ctx);
        goto after_0;
    // 0x800FE718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800FE71C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_800FE720:
    // 0x800FE720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FE724:
    // 0x800FE724: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE728: sb          $a0, 0x59D6($at)
    MEM_B(0X59D6, ctx->r1) = ctx->r4;
    // 0x800FE72C: jr          $ra
    // 0x800FE730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800FE730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800FE734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE734: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE738: jr          $ra
    // 0x800FE73C: sb          $a0, 0x59D7($at)
    MEM_B(0X59D7, ctx->r1) = ctx->r4;
    return;
    // 0x800FE73C: sb          $a0, 0x59D7($at)
    MEM_B(0X59D7, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800FE740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FE744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE748: jal         0x800EA05C
    // 0x800FE74C: nop

    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800FE74C: nop

    after_0:
    // 0x800FE750: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FE754: addiu       $v1, $v1, 0x5A10
    ctx->r3 = ADD32(ctx->r3, 0X5A10);
    // 0x800FE758: lbu         $t6, 0x6($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X6);
    // 0x800FE75C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FE760: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800FE764: beq         $t6, $zero, L_800FE770
    if (ctx->r14 == 0) {
        // 0x800FE768: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_800FE770;
    }
    // 0x800FE768: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE76C: sb          $zero, 0x6($v1)
    MEM_B(0X6, ctx->r3) = 0;
L_800FE770:
    // 0x800FE770: sw          $zero, 0x5A08($at)
    MEM_W(0X5A08, ctx->r1) = 0;
    // 0x800FE774: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE778: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE77C: swc1        $f4, 0x5A0C($at)
    MEM_W(0X5A0C, ctx->r1) = ctx->f4.u32l;
    // 0x800FE780: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    // 0x800FE784: jal         0x80087870
    // 0x800FE788: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _cothemedll_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800FE788: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x800FE78C: jal         0x80087860
    // 0x800FE790: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    _cothemedll_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800FE790: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800FE794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE798: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE79C: sh          $v0, 0x59E2($at)
    MEM_H(0X59E2, ctx->r1) = ctx->r2;
    // 0x800FE7A0: jr          $ra
    // 0x800FE7A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800FE7A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800FE7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE7A8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FE7AC: lh          $t6, 0x59C8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X59C8);
    // 0x800FE7B0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FE7B4: bne         $a0, $t6, L_800FE7C4
    if (ctx->r4 != ctx->r14) {
            // 0x800FE7B8: nop

    func_800FE7C4(rdram, ctx);
    return;
    }
    // 0x800FE7B8: nop

    // 0x800FE7BC: jr          $ra
    // 0x800FE7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800FE7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800FE7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE7C4: lw          $t7, 0x5A40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5A40);
    // 0x800FE7C8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FE7CC: addiu       $v1, $v1, 0x5A3C
    ctx->r3 = ADD32(ctx->r3, 0X5A3C);
    // 0x800FE7D0: blez        $t7, L_800FE814
    if (SIGNED(ctx->r15) <= 0) {
            // 0x800FE7D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    static_3_800FE814(rdram, ctx);
    return;
    }
    // 0x800FE7D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FE7D8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FE7DC: addiu       $a1, $a1, 0x5A20
    ctx->r5 = ADD32(ctx->r5, 0X5A20);
    // 0x800FE7E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800FE7E4: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x800FE7E8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800FE7EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800FE7F0: beq         $t8, $zero, L_800FE80C
    if (ctx->r24 == 0) {
            // 0x800FE7F4: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    func_800FE80C(rdram, ctx);
    return;
    }
    // 0x800FE7F4: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x800FE7F8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800FE7FC: bne         $a0, $t1, L_800FE80C
    if (ctx->r4 != ctx->r9) {
            // 0x800FE800: nop

    func_800FE80C(rdram, ctx);
    return;
    }
    // 0x800FE800: nop

    // 0x800FE804: jr          $ra
    // 0x800FE808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800FE808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800FE80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800FE7E4:
    // 0x800FE80C: bne         $v0, $a2, L_800FE7E4
    if (ctx->r2 != ctx->r6) {
            // 0x800FE810: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    static_3_800FE7E4(rdram, ctx);
    return;
    }
    // 0x800FE810: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800FE814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FE818: jr          $ra
    // 0x800FE81C: nop

    return;
    // 0x800FE81C: nop

;}
RECOMP_FUNC void func_800FE820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE820: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FE824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FE828: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE82C: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x800FE830: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800FE834: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800FE838: sb          $t6, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r14;
    // 0x800FE83C: jr          $ra
    // 0x800FE840: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x800FE840: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800FE844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE848: jr          $ra
    // 0x800FE84C: sb          $a0, 0x59CE($at)
    MEM_B(0X59CE, ctx->r1) = ctx->r4;
    return;
    // 0x800FE84C: sb          $a0, 0x59CE($at)
    MEM_B(0X59CE, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800FE850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE858: jal         0x800DA544
    // 0x800FE85C: addiu       $a0, $zero, 0x674
    ctx->r4 = ADD32(0, 0X674);
    func_800DA544(rdram, ctx);
        goto after_0;
    // 0x800FE85C: addiu       $a0, $zero, 0x674
    ctx->r4 = ADD32(0, 0X674);
    after_0:
    // 0x800FE860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FE868: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FE870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE878: jal         0x800DA544
    // 0x800FE87C: addiu       $a0, $zero, 0x675
    ctx->r4 = ADD32(0, 0X675);
    func_800DA544(rdram, ctx);
        goto after_0;
    // 0x800FE87C: addiu       $a0, $zero, 0x675
    ctx->r4 = ADD32(0, 0X675);
    after_0:
    // 0x800FE880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FE888: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FE890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE890: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE894: jr          $ra
    // 0x800FE898: lbu         $v0, 0x59CE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X59CE);
    return;
    // 0x800FE898: lbu         $v0, 0x59CE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X59CE);
;}
RECOMP_FUNC void func_800FE89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE89C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FE8A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE8A4: jr          $ra
    // 0x800FE8A8: sb          $t6, 0x59CF($at)
    MEM_B(0X59CF, ctx->r1) = ctx->r14;
    return;
    // 0x800FE8A8: sb          $t6, 0x59CF($at)
    MEM_B(0X59CF, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800FE8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE8AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FE8B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE8B4: jr          $ra
    // 0x800FE8B8: sb          $t6, 0x59D8($at)
    MEM_B(0X59D8, ctx->r1) = ctx->r14;
    return;
    // 0x800FE8B8: sb          $t6, 0x59D8($at)
    MEM_B(0X59D8, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800FE8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE8C0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800FE8C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FE8C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800FE8CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE8D0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE8D4: jal         0x80087880
    // 0x800FE8D8: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    _cothemedll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800FE8D8: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    after_0:
    // 0x800FE8DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE8E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FE8E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FE8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE8EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE8F0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FE8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE8F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE8FC: jal         0x80087878
    // 0x800FE900: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    _cothemedll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800FE900: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    after_0:
    // 0x800FE904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FE90C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FE914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE914: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800FE918: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FE91C: lh          $a2, 0x59CA($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X59CA);
    // 0x800FE920: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800FE924: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800FE928: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800FE92C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800FE930: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800FE934: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FE938: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FE93C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800FE940: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800FE944: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800FE948: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800FE94C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800FE950: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800FE954: addiu       $t0, $t0, 0x42DC
    ctx->r8 = ADD32(ctx->r8, 0X42DC);
    // 0x800FE958: addiu       $a1, $a1, 0x5A10
    ctx->r5 = ADD32(ctx->r5, 0X5A10);
    // 0x800FE95C: addiu       $s0, $s0, 0x5A0C
    ctx->r16 = ADD32(ctx->r16, 0X5A0C);
    // 0x800FE960: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x800FE964: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800FE968: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x800FE96C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
L_800FE970:
    // 0x800FE970: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x800FE974: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800FE978: addiu       $t8, $t8, 0x4314
    ctx->r24 = ADD32(ctx->r24, 0X4314);
    // 0x800FE97C: beq         $t6, $zero, L_800FEA1C
    if (ctx->r14 == 0) {
        // 0x800FE980: sll         $t7, $v1, 3
        ctx->r15 = S32(ctx->r3 << 3);
            goto L_800FEA1C;
    }
    // 0x800FE980: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x800FE984: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800FE988: bne         $v1, $s4, L_800FE9D0
    if (ctx->r3 != ctx->r20) {
        // 0x800FE98C: lwc1        $f12, 0x0($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
            goto L_800FE9D0;
    }
    // 0x800FE98C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800FE990: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800FE994: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE998: lwc1        $f8, 0x59F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X59F0);
    // 0x800FE99C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FE9A0: mtc1        $s3, $f10
    ctx->f10.u32l = ctx->r19;
    // 0x800FE9A4: nop

    // 0x800FE9A8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800FE9AC: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800FE9B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800FE9B4: nop

    // 0x800FE9B8: bc1fl       L_800FE9F0
    if (!c1cs) {
        // 0x800FE9BC: lwc1        $f0, 0x0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
            goto L_800FE9F0;
    }
    goto skip_0;
    // 0x800FE9BC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800FE9C0: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800FE9C4: mfc1        $s3, $f16
    ctx->r19 = (int32_t)ctx->f16.u32l;
    // 0x800FE9C8: b           L_800FE9F0
    // 0x800FE9CC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
        goto L_800FE9F0;
    // 0x800FE9CC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_800FE9D0:
    // 0x800FE9D0: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x800FE9D4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800FE9D8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x800FE9DC: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800FE9E0: beql        $at, $zero, L_800FE9F0
    if (ctx->r1 == 0) {
        // 0x800FE9E4: lwc1        $f0, 0x0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
            goto L_800FE9F0;
    }
    goto skip_1;
    // 0x800FE9E4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x800FE9E8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800FE9EC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_800FE9F0:
    // 0x800FE9F0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x800FE9F4: nop

    // 0x800FE9F8: bc1fl       L_800FEA08
    if (!c1cs) {
        // 0x800FE9FC: lwc1        $f0, 0x4($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
            goto L_800FEA08;
    }
    goto skip_2;
    // 0x800FE9FC: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    skip_2:
    // 0x800FEA00: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800FEA04: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
L_800FEA08:
    // 0x800FEA08: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800FEA0C: nop

    // 0x800FEA10: bc1fl       L_800FEA20
    if (!c1cs) {
        // 0x800FEA14: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800FEA20;
    }
    goto skip_3;
    // 0x800FEA14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x800FEA18: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_800FEA1C:
    // 0x800FEA1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800FEA20:
    // 0x800FEA20: bne         $v1, $a3, L_800FE970
    if (ctx->r3 != ctx->r7) {
        // 0x800FEA24: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800FE970;
    }
    // 0x800FEA24: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800FEA28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FEA2C: lh          $v0, 0x59E4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X59E4);
    // 0x800FEA30: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800FEA34: addiu       $s1, $s1, 0x3E60
    ctx->r17 = ADD32(ctx->r17, 0X3E60);
    // 0x800FEA38: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800FEA3C: beq         $at, $zero, L_800FEA48
    if (ctx->r1 == 0) {
        // 0x800FEA40: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800FEA48;
    }
    // 0x800FEA40: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FEA44: lwc1        $f20, 0x0($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X0);
L_800FEA48:
    // 0x800FEA48: bne         $s3, $v0, L_800FEA5C
    if (ctx->r19 != ctx->r2) {
        // 0x800FEA4C: nop
    
            goto L_800FEA5C;
    }
    // 0x800FEA4C: nop

    // 0x800FEA50: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x800FEA54: beq         $t3, $zero, L_800FEAF0
    if (ctx->r11 == 0) {
        // 0x800FEA58: nop
    
            goto L_800FEAF0;
    }
    // 0x800FEA58: nop

L_800FEA5C:
    // 0x800FEA5C: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    // 0x800FEA60: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800FEA64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FEA68: beq         $a0, $at, L_800FEAE4
    if (ctx->r4 == ctx->r1) {
        // 0x800FEA6C: addiu       $s1, $s1, 0x3E60
        ctx->r17 = ADD32(ctx->r17, 0X3E60);
            goto L_800FEAE4;
    }
    // 0x800FEA6C: addiu       $s1, $s1, 0x3E60
    ctx->r17 = ADD32(ctx->r17, 0X3E60);
    // 0x800FEA70: jal         0x800FCCD4
    // 0x800FEA74: nop

    func_800FCCD4(rdram, ctx);
        goto after_0;
    // 0x800FEA74: nop

    after_0:
    // 0x800FEA78: bne         $v0, $zero, L_800FEA98
    if (ctx->r2 != 0) {
        // 0x800FEA7C: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800FEA98;
    }
    // 0x800FEA7C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FEA80: jal         0x80017764
    // 0x800FEA84: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    func_80017764(rdram, ctx);
        goto after_1;
    // 0x800FEA84: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    after_1:
    // 0x800FEA88: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FEA8C: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    // 0x800FEA90: jal         0x800FC688
    // 0x800FEA94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800FC688(rdram, ctx);
        goto after_2;
    // 0x800FEA94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
L_800FEA98:
    // 0x800FEA98: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800FEA9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FEAA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800FEAA4: beq         $t4, $zero, L_800FEAB8
    if (ctx->r12 == 0) {
        // 0x800FEAA8: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_800FEAB8;
    }
    // 0x800FEAA8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800FEAAC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800FEAB0: b           L_800FEAC0
    // 0x800FEAB4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
        goto L_800FEAC0;
    // 0x800FEAB4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
L_800FEAB8:
    // 0x800FEAB8: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800FEABC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
L_800FEAC0:
    // 0x800FEAC0: jal         0x800FC4B0
    // 0x800FEAC4: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    func_800FC4B0(rdram, ctx);
        goto after_3;
    // 0x800FEAC4: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    after_3:
    // 0x800FEAC8: beq         $v0, $zero, L_800FEAE4
    if (ctx->r2 == 0) {
        // 0x800FEACC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800FEAE4;
    }
    // 0x800FEACC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800FEAD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FEAD4: lh          $a0, 0x59C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X59C8);
    // 0x800FEAD8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800FEADC: jal         0x800FCB00
    // 0x800FEAE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800FCB00(rdram, ctx);
        goto after_4;
    // 0x800FEAE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_800FEAE4:
    // 0x800FEAE4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x800FEAE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FEAEC: lh          $v0, 0x59E4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X59E4);
L_800FEAF0:
    // 0x800FEAF0: bne         $s3, $v0, L_800FEB0C
    if (ctx->r19 != ctx->r2) {
        // 0x800FEAF4: lui         $t5, 0x8013
        ctx->r13 = S32(0X8013 << 16);
            goto L_800FEB0C;
    }
    // 0x800FEAF4: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800FEAF8: lbu         $t5, 0x59D5($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X59D5);
    // 0x800FEAFC: bne         $t5, $zero, L_800FEB0C
    if (ctx->r13 != 0) {
        // 0x800FEB00: nop
    
            goto L_800FEB0C;
    }
    // 0x800FEB00: nop

    // 0x800FEB04: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800FEB08: beq         $t6, $zero, L_800FEBF0
    if (ctx->r14 == 0) {
        // 0x800FEB0C: lui         $t7, 0x8013
        ctx->r15 = S32(0X8013 << 16);
            goto L_800FEBF0;
    }
L_800FEB0C:
    // 0x800FEB0C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FEB10: lw          $t7, 0x5A40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5A40);
    // 0x800FEB14: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800FEB18: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800FEB1C: blezl       $t7, L_800FEBE0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800FEB20: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_800FEBE0;
    }
    goto skip_4;
    // 0x800FEB20: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_4:
    // 0x800FEB24: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FEB28: addiu       $s0, $s0, 0x5A20
    ctx->r16 = ADD32(ctx->r16, 0X5A20);
L_800FEB2C:
    // 0x800FEB2C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800FEB30: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800FEB34: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x800FEB38: beql        $a0, $zero, L_800FEBC8
    if (ctx->r4 == 0) {
        // 0x800FEB3C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FEBC8;
    }
    goto skip_5;
    // 0x800FEB3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x800FEB40: lbu         $t8, 0x5A3C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5A3C);
    // 0x800FEB44: beql        $t8, $zero, L_800FEBC8
    if (ctx->r24 == 0) {
        // 0x800FEB48: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FEBC8;
    }
    goto skip_6;
    // 0x800FEB48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x800FEB4C: jal         0x800FCCD4
    // 0x800FEB50: nop

    func_800FCCD4(rdram, ctx);
        goto after_5;
    // 0x800FEB50: nop

    after_5:
    // 0x800FEB54: beq         $v0, $zero, L_800FEBC4
    if (ctx->r2 == 0) {
        // 0x800FEB58: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_800FEBC4;
    }
    // 0x800FEB58: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FEB5C: beq         $t9, $zero, L_800FEB70
    if (ctx->r25 == 0) {
        // 0x800FEB60: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_800FEB70;
    }
    // 0x800FEB60: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800FEB64: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800FEB68: b           L_800FEBA0
    // 0x800FEB6C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
        goto L_800FEBA0;
    // 0x800FEB6C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
L_800FEB70:
    // 0x800FEB70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FEB74: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x800FEB78: lwc1        $f0, 0x5A30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A30);
    // 0x800FEB7C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x800FEB80: nop

    // 0x800FEB84: bc1fl       L_800FEB98
    if (!c1cs) {
        // 0x800FEB88: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800FEB98;
    }
    goto skip_7;
    // 0x800FEB88: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_7:
    // 0x800FEB8C: b           L_800FEB98
    // 0x800FEB90: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
        goto L_800FEB98;
    // 0x800FEB90: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800FEB94: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800FEB98:
    // 0x800FEB98: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x800FEB9C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
L_800FEBA0:
    // 0x800FEBA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800FEBA4: jal         0x800FC4B0
    // 0x800FEBA8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800FC4B0(rdram, ctx);
        goto after_6;
    // 0x800FEBA8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_6:
    // 0x800FEBAC: beq         $v0, $zero, L_800FEBC4
    if (ctx->r2 == 0) {
        // 0x800FEBB0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800FEBC4;
    }
    // 0x800FEBB0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800FEBB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800FEBB8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800FEBBC: jal         0x800FCB00
    // 0x800FEBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800FCB00(rdram, ctx);
        goto after_7;
    // 0x800FEBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
L_800FEBC4:
    // 0x800FEBC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800FEBC8:
    // 0x800FEBC8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800FEBCC: bne         $s1, $s4, L_800FEB2C
    if (ctx->r17 != ctx->r20) {
        // 0x800FEBD0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800FEB2C;
    }
    // 0x800FEBD0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800FEBD4: b           L_800FEBE8
    // 0x800FEBD8: nop

        goto L_800FEBE8;
    // 0x800FEBD8: nop

    // 0x800FEBDC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_800FEBE0:
    // 0x800FEBE0: nop

    // 0x800FEBE4: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
L_800FEBE8:
    // 0x800FEBE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FEBEC: sb          $zero, 0x59D5($at)
    MEM_B(0X59D5, ctx->r1) = 0;
L_800FEBF0:
    // 0x800FEBF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800FEBF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FEBF8: sh          $s3, 0x59E4($at)
    MEM_H(0X59E4, ctx->r1) = ctx->r19;
    // 0x800FEBFC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800FEC00: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800FEC04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800FEC08: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800FEC0C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800FEC10: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800FEC14: jr          $ra
    // 0x800FEC18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800FEC18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FEC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEC1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FEC20: jr          $ra
    // 0x800FEC24: swc1        $f12, 0x59F0($at)
    MEM_W(0X59F0, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800FEC24: swc1        $f12, 0x59F0($at)
    MEM_W(0X59F0, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800FEC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEC28: bne         $a0, $zero, L_800FEC58
    if (ctx->r4 != 0) {
        // 0x800FEC2C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800FEC58;
    }
    // 0x800FEC2C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800FEC30: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800FEC34: lbu         $t6, 0x762C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X762C);
    // 0x800FEC38: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x800FEC3C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800FEC40: bne         $t6, $at, L_800FEC50
    if (ctx->r14 != ctx->r1) {
        // 0x800FEC44: nop
    
            goto L_800FEC50;
    }
    // 0x800FEC44: nop

    // 0x800FEC48: jr          $ra
    // 0x800FEC4C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x800FEC4C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_800FEC50:
    // 0x800FEC50: jr          $ra
    // 0x800FEC54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800FEC54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800FEC58:
    // 0x800FEC58: jr          $ra
    // 0x800FEC5C: nop

    return;
    // 0x800FEC5C: nop

;}
RECOMP_FUNC void func_800FEC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FEC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FEC68: jal         0x800FEC28
    // 0x800FEC6C: nop

    func_800FEC28(rdram, ctx);
        goto after_0;
    // 0x800FEC6C: nop

    after_0:
    // 0x800FEC70: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FEC74: addiu       $t6, $t6, 0x5A10
    ctx->r14 = ADD32(ctx->r14, 0X5A10);
    // 0x800FEC78: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x800FEC7C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x800FEC80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FEC84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800FEC88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800FEC8C: bne         $v0, $at, L_800FECA4
    if (ctx->r2 != ctx->r1) {
        // 0x800FEC90: sb          $t8, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r24;
            goto L_800FECA4;
    }
    // 0x800FEC90: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x800FEC94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FEC98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FEC9C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FECA0: swc1        $f4, 0x59F0($at)
    MEM_W(0X59F0, ctx->r1) = ctx->f4.u32l;
L_800FECA4:
    // 0x800FECA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FECA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FECAC: sw          $t9, 0x3E60($at)
    MEM_W(0X3E60, ctx->r1) = ctx->r25;
    // 0x800FECB0: jr          $ra
    // 0x800FECB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800FECB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800FECB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FECB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FECBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FECC0: jal         0x800FEC28
    // 0x800FECC4: nop

    func_800FEC28(rdram, ctx);
        goto after_0;
    // 0x800FECC4: nop

    after_0:
    // 0x800FECC8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FECCC: addiu       $t6, $t6, 0x5A10
    ctx->r14 = ADD32(ctx->r14, 0X5A10);
    // 0x800FECD0: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x800FECD4: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x800FECD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800FECDC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800FECE0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800FECE4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x800FECE8: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x800FECEC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800FECF0:
    // 0x800FECF0: bnel        $v0, $v1, L_800FECF0
    if (ctx->r2 != ctx->r3) {
        // 0x800FECF4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800FECF0;
    }
    goto skip_0;
    // 0x800FECF4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x800FECF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FECFC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FED00: sw          $t9, 0x3E60($at)
    MEM_W(0X3E60, ctx->r1) = ctx->r25;
    // 0x800FED04: jr          $ra
    // 0x800FED08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800FED08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800FED0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FED0C: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x800FED10: sltiu       $at, $t6, 0x83
    ctx->r1 = ctx->r14 < 0X83 ? 1 : 0;
    // 0x800FED14: beq         $at, $zero, L_800FED68
    if (ctx->r1 == 0) {
        // 0x800FED18: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800FED68;
    }
    // 0x800FED18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FED1C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FED20: addu        $at, $at, $t6
    gpr jr_addend_800FED28 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800FED24: lw          $t6, 0x6214($at)
    ctx->r14 = ADD32(ctx->r1, 0X6214);
    // 0x800FED28: jr          $t6
    // 0x800FED2C: nop

    switch (jr_addend_800FED28 >> 2) {
        case 0: goto L_800FED68; break;
        case 1: goto L_800FED30; break;
        case 2: goto L_800FED68; break;
        case 3: goto L_800FED68; break;
        case 4: goto L_800FED38; break;
        case 5: goto L_800FED68; break;
        case 6: goto L_800FED68; break;
        case 7: goto L_800FED68; break;
        case 8: goto L_800FED68; break;
        case 9: goto L_800FED38; break;
        case 10: goto L_800FED38; break;
        case 11: goto L_800FED38; break;
        case 12: goto L_800FED38; break;
        case 13: goto L_800FED68; break;
        case 14: goto L_800FED68; break;
        case 15: goto L_800FED68; break;
        case 16: goto L_800FED68; break;
        case 17: goto L_800FED38; break;
        case 18: goto L_800FED68; break;
        case 19: goto L_800FED68; break;
        case 20: goto L_800FED68; break;
        case 21: goto L_800FED38; break;
        case 22: goto L_800FED38; break;
        case 23: goto L_800FED38; break;
        case 24: goto L_800FED68; break;
        case 25: goto L_800FED68; break;
        case 26: goto L_800FED38; break;
        case 27: goto L_800FED68; break;
        case 28: goto L_800FED68; break;
        case 29: goto L_800FED68; break;
        case 30: goto L_800FED68; break;
        case 31: goto L_800FED68; break;
        case 32: goto L_800FED68; break;
        case 33: goto L_800FED68; break;
        case 34: goto L_800FED68; break;
        case 35: goto L_800FED68; break;
        case 36: goto L_800FED68; break;
        case 37: goto L_800FED68; break;
        case 38: goto L_800FED68; break;
        case 39: goto L_800FED68; break;
        case 40: goto L_800FED68; break;
        case 41: goto L_800FED68; break;
        case 42: goto L_800FED40; break;
        case 43: goto L_800FED68; break;
        case 44: goto L_800FED68; break;
        case 45: goto L_800FED38; break;
        case 46: goto L_800FED68; break;
        case 47: goto L_800FED68; break;
        case 48: goto L_800FED38; break;
        case 49: goto L_800FED68; break;
        case 50: goto L_800FED68; break;
        case 51: goto L_800FED68; break;
        case 52: goto L_800FED68; break;
        case 53: goto L_800FED68; break;
        case 54: goto L_800FED68; break;
        case 55: goto L_800FED68; break;
        case 56: goto L_800FED68; break;
        case 57: goto L_800FED38; break;
        case 58: goto L_800FED68; break;
        case 59: goto L_800FED68; break;
        case 60: goto L_800FED68; break;
        case 61: goto L_800FED68; break;
        case 62: goto L_800FED68; break;
        case 63: goto L_800FED68; break;
        case 64: goto L_800FED68; break;
        case 65: goto L_800FED68; break;
        case 66: goto L_800FED68; break;
        case 67: goto L_800FED38; break;
        case 68: goto L_800FED68; break;
        case 69: goto L_800FED68; break;
        case 70: goto L_800FED68; break;
        case 71: goto L_800FED68; break;
        case 72: goto L_800FED68; break;
        case 73: goto L_800FED68; break;
        case 74: goto L_800FED68; break;
        case 75: goto L_800FED68; break;
        case 76: goto L_800FED68; break;
        case 77: goto L_800FED68; break;
        case 78: goto L_800FED68; break;
        case 79: goto L_800FED68; break;
        case 80: goto L_800FED68; break;
        case 81: goto L_800FED68; break;
        case 82: goto L_800FED38; break;
        case 83: goto L_800FED68; break;
        case 84: goto L_800FED68; break;
        case 85: goto L_800FED68; break;
        case 86: goto L_800FED68; break;
        case 87: goto L_800FED68; break;
        case 88: goto L_800FED68; break;
        case 89: goto L_800FED68; break;
        case 90: goto L_800FED68; break;
        case 91: goto L_800FED68; break;
        case 92: goto L_800FED68; break;
        case 93: goto L_800FED68; break;
        case 94: goto L_800FED68; break;
        case 95: goto L_800FED38; break;
        case 96: goto L_800FED68; break;
        case 97: goto L_800FED68; break;
        case 98: goto L_800FED68; break;
        case 99: goto L_800FED68; break;
        case 100: goto L_800FED68; break;
        case 101: goto L_800FED68; break;
        case 102: goto L_800FED68; break;
        case 103: goto L_800FED40; break;
        case 104: goto L_800FED68; break;
        case 105: goto L_800FED68; break;
        case 106: goto L_800FED68; break;
        case 107: goto L_800FED68; break;
        case 108: goto L_800FED68; break;
        case 109: goto L_800FED68; break;
        case 110: goto L_800FED68; break;
        case 111: goto L_800FED68; break;
        case 112: goto L_800FED68; break;
        case 113: goto L_800FED68; break;
        case 114: goto L_800FED68; break;
        case 115: goto L_800FED68; break;
        case 116: goto L_800FED68; break;
        case 117: goto L_800FED68; break;
        case 118: goto L_800FED38; break;
        case 119: goto L_800FED68; break;
        case 120: goto L_800FED68; break;
        case 121: goto L_800FED68; break;
        case 122: goto L_800FED68; break;
        case 123: goto L_800FED68; break;
        case 124: goto L_800FED68; break;
        case 125: goto L_800FED68; break;
        case 126: goto L_800FED68; break;
        case 127: goto L_800FED68; break;
        case 128: goto L_800FED68; break;
        case 129: goto L_800FED68; break;
        case 130: goto L_800FED38; break;
        default: switch_error(__func__, 0x800FED28, 0x80126214);
    }
    // 0x800FED2C: nop

L_800FED30:
    // 0x800FED30: b           L_800FED44
    // 0x800FED34: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_800FED44;
    // 0x800FED34: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_800FED38:
    // 0x800FED38: b           L_800FED44
    // 0x800FED3C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_800FED44;
    // 0x800FED3C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_800FED40:
    // 0x800FED40: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_800FED44:
    // 0x800FED44: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FED48: addiu       $t7, $t7, 0x5A10
    ctx->r15 = ADD32(ctx->r15, 0X5A10);
    // 0x800FED4C: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x800FED50: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x800FED54: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800FED58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FED5C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x800FED60: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x800FED64: sw          $t0, 0x3E60($at)
    MEM_W(0X3E60, ctx->r1) = ctx->r8;
L_800FED68:
    // 0x800FED68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FED70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FED74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FED78: jal         0x800FED0C
    // 0x800FED7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800FED0C(rdram, ctx);
        goto after_0;
    // 0x800FED7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800FED80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FED84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FED88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FED90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FED90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FED94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FED98: jal         0x800FED0C
    // 0x800FED9C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800FED0C(rdram, ctx);
        goto after_0;
    // 0x800FED9C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x800FEDA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800FEDA4: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x800FEDA8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800FEDAC:
    // 0x800FEDAC: bnel        $v0, $v1, L_800FEDAC
    if (ctx->r2 != ctx->r3) {
        // 0x800FEDB0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800FEDAC;
    }
    goto skip_0;
    // 0x800FEDB0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x800FEDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FEDB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FEDBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FEDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEDC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FEDC8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FEDCC: addiu       $v1, $v1, 0x59C0
    ctx->r3 = ADD32(ctx->r3, 0X59C0);
    // 0x800FEDD0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800FEDD4: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x800FEDD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FEDDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FEDE0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800FEDE4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800FEDE8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800FEDEC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800FEDF0: lh          $t0, 0x36($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X36);
    // 0x800FEDF4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800FEDF8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800FEDFC: bne         $a1, $t0, L_800FEE74
    if (ctx->r5 != ctx->r8) {
        // 0x800FEE00: addu        $s0, $v1, $a2
        ctx->r16 = ADD32(ctx->r3, ctx->r6);
            goto L_800FEE74;
    }
    // 0x800FEE00: addu        $s0, $v1, $a2
    ctx->r16 = ADD32(ctx->r3, ctx->r6);
    // 0x800FEE04: beql        $a1, $zero, L_800FEE78
    if (ctx->r5 == 0) {
        // 0x800FEE08: lbu         $a0, 0x34($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X34);
            goto L_800FEE78;
    }
    goto skip_0;
    // 0x800FEE08: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    skip_0:
    // 0x800FEE0C: jal         0x800EA05C
    // 0x800FEE10: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800FEE10: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x800FEE14: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800FEE18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FEE1C: addiu       $v1, $v1, 0x59C0
    ctx->r3 = ADD32(ctx->r3, 0X59C0);
    // 0x800FEE20: addu        $s0, $v1, $a2
    ctx->r16 = ADD32(ctx->r3, ctx->r6);
    // 0x800FEE24: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEE28: jal         0x800C3648
    // 0x800FEE2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800C3648(rdram, ctx);
        goto after_1;
    // 0x800FEE2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800FEE30: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800FEE34: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800FEE38: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FEE3C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x800FEE40: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FEE44: lh          $t3, 0x3E5E($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X3E5E);
    // 0x800FEE48: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEE4C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800FEE50: nop

    // 0x800FEE54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FEE58: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800FEE5C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800FEE60: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800FEE64: jal         0x800C3058
    // 0x800FEE68: nop

    func_800C3058(rdram, ctx);
        goto after_2;
    // 0x800FEE68: nop

    after_2:
    // 0x800FEE6C: b           L_800FEF84
    // 0x800FEE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800FEF84;
    // 0x800FEE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FEE74:
    // 0x800FEE74: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
L_800FEE78:
    // 0x800FEE78: beql        $a0, $zero, L_800FEEC4
    if (ctx->r4 == 0) {
        // 0x800FEE7C: lw          $t5, 0x34($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X34);
            goto L_800FEEC4;
    }
    goto skip_1;
    // 0x800FEE7C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x800FEE80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FEE84: nop

    // 0x800FEE88: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x800FEE8C: nop

    // 0x800FEE90: bc1t        L_800FEEB4
    if (c1cs) {
        // 0x800FEE94: nop
    
            goto L_800FEEB4;
    }
    // 0x800FEE94: nop

    // 0x800FEE98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800FEE9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800FEEA0: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800FEEA4: jal         0x800C3A40
    // 0x800FEEA8: nop

    func_800C3A40(rdram, ctx);
        goto after_3;
    // 0x800FEEA8: nop

    after_3:
    // 0x800FEEAC: b           L_800FEEC0
    // 0x800FEEB0: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
        goto L_800FEEC0;
    // 0x800FEEB0: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
L_800FEEB4:
    // 0x800FEEB4: jal         0x800C2FDC
    // 0x800FEEB8: nop

    func_800C2FDC(rdram, ctx);
        goto after_4;
    // 0x800FEEB8: nop

    after_4:
    // 0x800FEEBC: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
L_800FEEC0:
    // 0x800FEEC0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
L_800FEEC4:
    // 0x800FEEC4: beql        $t5, $zero, L_800FEF78
    if (ctx->r13 == 0) {
        // 0x800FEEC8: lw          $t3, 0x34($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X34);
            goto L_800FEF78;
    }
    goto skip_2;
    // 0x800FEEC8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x800FEECC: jal         0x800C2E04
    // 0x800FEED0: nop

    func_800C2E04(rdram, ctx);
        goto after_5;
    // 0x800FEED0: nop

    after_5:
    // 0x800FEED4: sb          $v0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r2;
    // 0x800FEED8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x800FEEDC: jal         0x800C330C
    // 0x800FEEE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_6;
    // 0x800FEEE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x800FEEE4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800FEEE8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800FEEEC: addiu       $t9, $t9, 0x3E64
    ctx->r25 = ADD32(ctx->r25, 0X3E64);
    // 0x800FEEF0: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800FEEF4: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x800FEEF8: lh          $a1, -0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, -0X8);
    // 0x800FEEFC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800FEF00: jal         0x800C301C
    // 0x800FEF04: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    func_800C301C(rdram, ctx);
        goto after_7;
    // 0x800FEF04: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    after_7:
    // 0x800FEF08: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800FEF0C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800FEF10: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEF14: lh          $t8, -0x6($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X6);
    // 0x800FEF18: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800FEF1C: nop

    // 0x800FEF20: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800FEF24: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800FEF28: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800FEF2C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800FEF30: jal         0x800C3058
    // 0x800FEF34: nop

    func_800C3058(rdram, ctx);
        goto after_8;
    // 0x800FEF34: nop

    after_8:
    // 0x800FEF38: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800FEF3C: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEF40: jal         0x800C31DC
    // 0x800FEF44: lw          $a1, -0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, -0X4);
    func_800C31DC(rdram, ctx);
        goto after_9;
    // 0x800FEF44: lw          $a1, -0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, -0X4);
    after_9:
    // 0x800FEF48: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEF4C: jal         0x800C36F4
    // 0x800FEF50: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_800C36F4(rdram, ctx);
        goto after_10;
    // 0x800FEF50: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_10:
    // 0x800FEF54: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEF58: jal         0x800C368C
    // 0x800FEF5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C368C(rdram, ctx);
        goto after_11;
    // 0x800FEF5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800FEF60: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x800FEF64: jal         0x800C33DC
    // 0x800FEF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C33DC(rdram, ctx);
        goto after_12;
    // 0x800FEF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800FEF6C: jal         0x800C3BDC
    // 0x800FEF70: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    func_800C3BDC(rdram, ctx);
        goto after_13;
    // 0x800FEF70: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    after_13:
    // 0x800FEF74: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
L_800FEF78:
    // 0x800FEF78: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800FEF7C: sh          $t3, 0x36($t4)
    MEM_H(0X36, ctx->r12) = ctx->r11;
    // 0x800FEF80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FEF84:
    // 0x800FEF84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FEF88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800FEF8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FEF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEF94: beq         $a2, $zero, L_800FEFCC
    if (ctx->r6 == 0) {
            // 0x800FEF98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    func_800FEFCC(rdram, ctx);
    return;
    }
    // 0x800FEF98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800FEF9C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800FEFA0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800FEFA4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FEFA8: addiu       $t7, $t7, 0x3E84
    ctx->r15 = ADD32(ctx->r15, 0X3E84);
    // 0x800FEFAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FEFB0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800FEFB4: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800FEFB8: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x800FEFBC: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x800FEFC0: lh          $t9, 0xA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XA);
    // 0x800FEFC4: jr          $ra
    // 0x800FEFC8: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    return;
    // 0x800FEFC8: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
;}
RECOMP_FUNC void func_800FEFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEFCC: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x800FEFD0: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x800FEFD4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800FEFD8: addiu       $t2, $t2, 0x3E84
    ctx->r10 = ADD32(ctx->r10, 0X3E84);
    // 0x800FEFDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800FEFE0: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x800FEFE4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800FEFE8: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x800FEFEC: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x800FEFF0: lh          $t4, 0x8($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X8);
    // 0x800FEFF4: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x800FEFF8: jr          $ra
    // 0x800FEFFC: nop

    return;
    // 0x800FEFFC: nop

;}
RECOMP_FUNC void func_800FF000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF000: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FF004: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x800FF008: sb          $a0, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r4;
    // 0x800FF00C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FF010: lwc1        $f4, 0x6420($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6420);
    // 0x800FF014: jr          $ra
    // 0x800FF018: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x800FF018: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800FF01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF01C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FF020: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x800FF024: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800FF028: sb          $v1, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r3;
    // 0x800FF02C: sb          $v1, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r3;
    // 0x800FF030: jr          $ra
    // 0x800FF034: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    return;
    // 0x800FF034: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800FF038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FF03C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FF040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FF044: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FF048: jal         0x80087868
    // 0x800FF04C: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    _cothemedll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800FF04C: addiu       $a0, $a0, 0x59C0
    ctx->r4 = ADD32(ctx->r4, 0X59C0);
    after_0:
    // 0x800FF050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FF054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FF058: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FF060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF060: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800FF064: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800FF068: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800FF06C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x800FF070: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    // 0x800FF074: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FF078: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800FF07C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x800FF080: bc1f        L_800FF090
    if (!c1cs) {
        // 0x800FF084: sw          $a3, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r7;
            goto L_800FF090;
    }
    // 0x800FF084: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x800FF088: b           L_800FF094
    // 0x800FF08C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800FF094;
    // 0x800FF08C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800FF090:
    // 0x800FF090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800FF094:
    // 0x800FF094: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800FF098: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800FF09C: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800FF0A0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FF0A4: mul.s       $f22, $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x800FF0A8: nop

    // 0x800FF0AC: mul.s       $f20, $f6, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800FF0B0: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x800FF0B4: nop

    // 0x800FF0B8: bc1f        L_800FF130
    if (!c1cs) {
        // 0x800FF0BC: nop
    
            goto L_800FF130;
    }
    // 0x800FF0BC: nop

    // 0x800FF0C0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800FF0C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x800FF0C8: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x800FF0CC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800FF0D0: nop

    // 0x800FF0D4: bc1fl       L_800FF0E8
    if (!c1cs) {
        // 0x800FF0D8: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_800FF0E8;
    }
    goto skip_0;
    // 0x800FF0D8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x800FF0DC: b           L_800FF0E8
    // 0x800FF0E0: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
        goto L_800FF0E8;
    // 0x800FF0E0: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
    // 0x800FF0E4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_800FF0E8:
    // 0x800FF0E8: div.s       $f10, $f20, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
    // 0x800FF0EC: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800FF0F0: sub.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800FF0F4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800FF0F8: nop

    // 0x800FF0FC: bc1f        L_800FF108
    if (!c1cs) {
        // 0x800FF100: nop
    
            goto L_800FF108;
    }
    // 0x800FF100: nop

    // 0x800FF104: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_800FF108:
    // 0x800FF108: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800FF10C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FF110: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FF114: add.s       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x800FF118: add.s       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x800FF11C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800FF120: nop

    // 0x800FF124: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800FF128: b           L_800FF144
    // 0x800FF12C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
        goto L_800FF144;
    // 0x800FF12C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
L_800FF130:
    // 0x800FF130: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800FF134: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800FF138: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x800FF13C: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800FF140: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
L_800FF144:
    // 0x800FF144: mul.s       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800FF148: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800FF14C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FF150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FF154: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800FF158: sub.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x800FF15C: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x800FF160: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x800FF164: sub.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x800FF168: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FF16C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x800FF170: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800FF174: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800FF178: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x800FF17C: div.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x800FF180: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x800FF184: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x800FF188: bc1fl       L_800FF224
    if (!c1cs) {
        // 0x800FF18C: mov.s       $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
            goto L_800FF224;
    }
    goto skip_1;
    // 0x800FF18C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    skip_1:
    // 0x800FF190: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FF194: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800FF198: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x800FF19C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x800FF1A0: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x800FF1A4: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x800FF1A8: jal         0x8002DCA0
    // 0x800FF1AC: add.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x800FF1AC: add.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f4.fl;
    after_0:
    // 0x800FF1B0: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800FF1B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800FF1B8: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x800FF1BC: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x800FF1C0: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800FF1C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800FF1C8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800FF1CC: bc1fl       L_800FF1DC
    if (!c1cs) {
        // 0x800FF1D0: sub.s       $f10, $f2, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f20.fl;
            goto L_800FF1DC;
    }
    goto skip_2;
    // 0x800FF1D0: sub.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f20.fl;
    skip_2:
    // 0x800FF1D4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800FF1D8: sub.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f20.fl;
L_800FF1DC:
    // 0x800FF1DC: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800FF1E0: div.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800FF1E4: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x800FF1E8: nop

    // 0x800FF1EC: bc1f        L_800FF1F8
    if (!c1cs) {
        // 0x800FF1F0: nop
    
            goto L_800FF1F8;
    }
    // 0x800FF1F0: nop

    // 0x800FF1F4: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_800FF1F8:
    // 0x800FF1F8: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800FF1FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FF200: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FF204: add.s       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x800FF208: add.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x800FF20C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800FF210: nop

    // 0x800FF214: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800FF218: b           L_800FF22C
    // 0x800FF21C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
        goto L_800FF22C;
    // 0x800FF21C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x800FF220: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_800FF224:
    // 0x800FF224: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x800FF228: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
L_800FF22C:
    // 0x800FF22C: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x800FF230: nop

    // 0x800FF234: bc1fl       L_800FF258
    if (!c1cs) {
        // 0x800FF238: sub.s       $f16, $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
            goto L_800FF258;
    }
    goto skip_3;
    // 0x800FF238: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
    skip_3:
    // 0x800FF23C: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x800FF240: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800FF244: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800FF248: mul.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800FF24C: b           L_800FF37C
    // 0x800FF250: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800FF37C;
    // 0x800FF250: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FF254: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
L_800FF258:
    // 0x800FF258: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800FF25C: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x800FF260: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FF264: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800FF268: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800FF26C: sub.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x800FF270: bc1fl       L_800FF2DC
    if (!c1cs) {
        // 0x800FF274: swc1        $f18, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
            goto L_800FF2DC;
    }
    goto skip_4;
    // 0x800FF274: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    skip_4:
    // 0x800FF278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FF27C: nop

    // 0x800FF280: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x800FF284: nop

    // 0x800FF288: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800FF28C: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800FF290: div.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800FF294: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    // 0x800FF298: nop

    // 0x800FF29C: bc1f        L_800FF2CC
    if (!c1cs) {
        // 0x800FF2A0: nop
    
            goto L_800FF2CC;
    }
    // 0x800FF2A0: nop

    // 0x800FF2A4: sub.s       $f10, $f22, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f22.fl - ctx->f14.fl;
    // 0x800FF2A8: div.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800FF2AC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x800FF2B0: nop

    // 0x800FF2B4: bc1f        L_800FF2C0
    if (!c1cs) {
        // 0x800FF2B8: nop
    
            goto L_800FF2C0;
    }
    // 0x800FF2B8: nop

    // 0x800FF2BC: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_800FF2C0:
    // 0x800FF2C0: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x800FF2C4: b           L_800FF2E0
    // 0x800FF2C8: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
        goto L_800FF2E0;
    // 0x800FF2C8: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_800FF2CC:
    // 0x800FF2CC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x800FF2D0: b           L_800FF2E0
    // 0x800FF2D4: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
        goto L_800FF2E0;
    // 0x800FF2D4: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x800FF2D8: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
L_800FF2DC:
    // 0x800FF2DC: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_800FF2E0:
    // 0x800FF2E0: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x800FF2E4: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800FF2E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FF2EC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800FF2F0: nop

    // 0x800FF2F4: bc1fl       L_800FF348
    if (!c1cs) {
        // 0x800FF2F8: mov.s       $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
            goto L_800FF348;
    }
    goto skip_5;
    // 0x800FF2F8: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
    skip_5:
    // 0x800FF2FC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800FF300: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x800FF304: add.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x800FF308: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x800FF30C: nop

    // 0x800FF310: bc1fl       L_800FF328
    if (!c1cs) {
        // 0x800FF314: add.s       $f4, $f20, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f2.fl;
            goto L_800FF328;
    }
    goto skip_6;
    // 0x800FF314: add.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f2.fl;
    skip_6:
    // 0x800FF318: neg.s       $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = -ctx->f20.fl;
    // 0x800FF31C: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x800FF320: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800FF324: add.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f2.fl;
L_800FF328:
    // 0x800FF328: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FF32C: nop

    // 0x800FF330: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x800FF334: nop

    // 0x800FF338: mul.s       $f14, $f6, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800FF33C: b           L_800FF348
    // 0x800FF340: nop

        goto L_800FF348;
    // 0x800FF340: nop

    // 0x800FF344: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_800FF348:
    // 0x800FF348: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800FF34C: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800FF350: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800FF354: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800FF358: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800FF35C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800FF360: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800FF364: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800FF368: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800FF36C: add.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x800FF370: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800FF374: nop

    // 0x800FF378: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800FF37C:
    // 0x800FF37C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800FF380: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800FF384: jr          $ra
    // 0x800FF388: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800FF388: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800FF390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FF394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FF398: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FF39C: jal         0x801065E0
    // 0x800FF3A0: sw          $zero, 0x5A50($at)
    MEM_W(0X5A50, ctx->r1) = 0;
    func_801065E0(rdram, ctx);
        goto after_0;
    // 0x800FF3A0: sw          $zero, 0x5A50($at)
    MEM_W(0X5A50, ctx->r1) = 0;
    after_0:
    // 0x800FF3A4: jal         0x80104170
    // 0x800FF3A8: nop

    func_80104170(rdram, ctx);
        goto after_1;
    // 0x800FF3A8: nop

    after_1:
    // 0x800FF3AC: jal         0x80104350
    // 0x800FF3B0: nop

    func_80104350(rdram, ctx);
        goto after_2;
    // 0x800FF3B0: nop

    after_2:
    // 0x800FF3B4: jal         0x80105410
    // 0x800FF3B8: nop

    func_80105410(rdram, ctx);
        goto after_3;
    // 0x800FF3B8: nop

    after_3:
    // 0x800FF3BC: jal         0x80105C20
    // 0x800FF3C0: nop

    func_80105C20(rdram, ctx);
        goto after_4;
    // 0x800FF3C0: nop

    after_4:
    // 0x800FF3C4: jal         0x80106A20
    // 0x800FF3C8: nop

    func_80106A20(rdram, ctx);
        goto after_5;
    // 0x800FF3C8: nop

    after_5:
    // 0x800FF3CC: jal         0x80106DF0
    // 0x800FF3D0: nop

    func_80106DF0(rdram, ctx);
        goto after_6;
    // 0x800FF3D0: nop

    after_6:
    // 0x800FF3D4: jal         0x80107BB0
    // 0x800FF3D8: nop

    func_80107BB0(rdram, ctx);
        goto after_7;
    // 0x800FF3D8: nop

    after_7:
    // 0x800FF3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FF3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FF3E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FF3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FF3F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FF3F4: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x800FF3F8: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x800FF3FC: bltzl       $t8, L_800FF440
    if (SIGNED(ctx->r24) < 0) {
        // 0x800FF400: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800FF440;
    }
    goto skip_0;
    // 0x800FF400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800FF404: jal         0x80100368
    // 0x800FF408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x800FF408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800FF40C: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x800FF410: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800FF414: beql        $t9, $zero, L_800FF434
    if (ctx->r25 == 0) {
        // 0x800FF418: lbu         $t1, 0x64($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X64);
            goto L_800FF434;
    }
    goto skip_1;
    // 0x800FF418: lbu         $t1, 0x64($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X64);
    skip_1:
    // 0x800FF41C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800FF420: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x800FF424: jalr        $t9
    // 0x800FF428: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800FF428: nop

    after_1:
    // 0x800FF42C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800FF430: lbu         $t1, 0x64($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X64);
L_800FF434:
    // 0x800FF434: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x800FF438: sb          $t2, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r10;
    // 0x800FF43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800FF440:
    // 0x800FF440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FF444: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FF44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF44C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FF450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FF454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FF458: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    // 0x800FF45C: jal         0x80101238
    // 0x800FF460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80101238(rdram, ctx);
        goto after_0;
    // 0x800FF460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800FF464: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x800FF468: jal         0x801067C4
    // 0x800FF46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801067C4(rdram, ctx);
        goto after_1;
    // 0x800FF46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800FF470: beq         $v0, $zero, L_800FF490
    if (ctx->r2 == 0) {
        // 0x800FF474: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FF490;
    }
    // 0x800FF474: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800FF478:
    // 0x800FF478: jal         0x800FF3EC
    // 0x800FF47C: nop

    func_800FF3EC(rdram, ctx);
        goto after_2;
    // 0x800FF47C: nop

    after_2:
    // 0x800FF480: jal         0x8010682C
    // 0x800FF484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010682C(rdram, ctx);
        goto after_3;
    // 0x800FF484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800FF488: bne         $v0, $zero, L_800FF478
    if (ctx->r2 != 0) {
        // 0x800FF48C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FF478;
    }
    // 0x800FF48C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800FF490:
    // 0x800FF490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FF494: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FF498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FF49C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FF4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF4A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FF4A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FF4AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800FF4B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800FF4B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FF4B8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800FF4BC: jal         0x8010381C
    // 0x800FF4C0: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    func_8010381C(rdram, ctx);
        goto after_0;
    // 0x800FF4C0: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x800FF4C4: jal         0x80103938
    // 0x800FF4C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80103938(rdram, ctx);
        goto after_1;
    // 0x800FF4C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800FF4CC: lw          $t6, 0x7C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X7C);
    // 0x800FF4D0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x800FF4D4: beql        $t7, $zero, L_800FF500
    if (ctx->r15 == 0) {
        // 0x800FF4D8: lhu         $t0, 0x24($s0)
        ctx->r8 = MEM_HU(ctx->r16, 0X24);
            goto L_800FF500;
    }
    goto skip_0;
    // 0x800FF4D8: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    skip_0:
    // 0x800FF4DC: jal         0x80105494
    // 0x800FF4E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80105494(rdram, ctx);
        goto after_2;
    // 0x800FF4E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x800FF4E4: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x800FF4E8: sll         $t8, $a0, 23
    ctx->r24 = S32(ctx->r4 << 23);
    // 0x800FF4EC: jal         0x800D8808
    // 0x800FF4F0: srl         $a0, $t8, 29
    ctx->r4 = S32(U32(ctx->r24) >> 29);
    func_800D8808(rdram, ctx);
        goto after_3;
    // 0x800FF4F0: srl         $a0, $t8, 29
    ctx->r4 = S32(U32(ctx->r24) >> 29);
    after_3:
    // 0x800FF4F4: jal         0x80105634
    // 0x800FF4F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80105634(rdram, ctx);
        goto after_4;
    // 0x800FF4F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x800FF4FC: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
L_800FF500:
    // 0x800FF500: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800FF504: andi        $t1, $t0, 0x3F
    ctx->r9 = ctx->r8 & 0X3F;
    // 0x800FF508: jal         0x80104328
    // 0x800FF50C: sh          $t1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r9;
    func_80104328(rdram, ctx);
        goto after_5;
    // 0x800FF50C: sh          $t1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r9;
    after_5:
    // 0x800FF510: jal         0x80089D40
    // 0x800FF514: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    _subaddieaudioloop_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x800FF514: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x800FF518: jal         0x80104504
    // 0x800FF51C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80104504(rdram, ctx);
        goto after_7;
    // 0x800FF51C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x800FF520: jal         0x80106EE0
    // 0x800FF524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80106EE0(rdram, ctx);
        goto after_8;
    // 0x800FF524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x800FF528: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800FF52C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x800FF530: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_800FF534:
    // 0x800FF534: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800FF538: jal         0x80100074
    // 0x800FF53C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80100074(rdram, ctx);
        goto after_9;
    // 0x800FF53C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800FF540: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800FF544: bnel        $s0, $s1, L_800FF534
    if (ctx->r16 != ctx->r17) {
        // 0x800FF548: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800FF534;
    }
    goto skip_1;
    // 0x800FF548: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x800FF54C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FF550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FF554: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800FF558: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800FF55C: jr          $ra
    // 0x800FF560: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FF560: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FF564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF564: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FF568: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FF56C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FF570: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FF574: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    // 0x800FF578: jal         0x80101238
    // 0x800FF57C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80101238(rdram, ctx);
        goto after_0;
    // 0x800FF57C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800FF580: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x800FF584: jal         0x801067C4
    // 0x800FF588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801067C4(rdram, ctx);
        goto after_1;
    // 0x800FF588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800FF58C: beq         $v0, $zero, L_800FF5CC
    if (ctx->r2 == 0) {
        // 0x800FF590: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FF5CC;
    }
    // 0x800FF590: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800FF594:
    // 0x800FF594: jal         0x800FF3EC
    // 0x800FF598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FF3EC(rdram, ctx);
        goto after_2;
    // 0x800FF598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800FF59C: jal         0x800FF4A4
    // 0x800FF5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FF4A4(rdram, ctx);
        goto after_3;
    // 0x800FF5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800FF5A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800FF5A8: beql        $a0, $zero, L_800FF5BC
    if (ctx->r4 == 0) {
        // 0x800FF5AC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800FF5BC;
    }
    goto skip_0;
    // 0x800FF5AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x800FF5B0: jal         0x800EBFF4
    // 0x800FF5B4: nop

    func_800EBFF4(rdram, ctx);
        goto after_4;
    // 0x800FF5B4: nop

    after_4:
    // 0x800FF5B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800FF5BC:
    // 0x800FF5BC: jal         0x8010682C
    // 0x800FF5C0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    func_8010682C(rdram, ctx);
        goto after_5;
    // 0x800FF5C0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    after_5:
    // 0x800FF5C4: bne         $v0, $zero, L_800FF594
    if (ctx->r2 != 0) {
        // 0x800FF5C8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FF594;
    }
    // 0x800FF5C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800FF5CC:
    // 0x800FF5CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FF5D0: sw          $zero, 0x5A50($at)
    MEM_W(0X5A50, ctx->r1) = 0;
    // 0x800FF5D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800FF5D8: jal         0x801041A0
    // 0x800FF5DC: sw          $zero, 0x7194($at)
    MEM_W(0X7194, ctx->r1) = 0;
    func_801041A0(rdram, ctx);
        goto after_6;
    // 0x800FF5DC: sw          $zero, 0x7194($at)
    MEM_W(0X7194, ctx->r1) = 0;
    after_6:
    // 0x800FF5E0: jal         0x80104378
    // 0x800FF5E4: nop

    func_80104378(rdram, ctx);
        goto after_7;
    // 0x800FF5E4: nop

    after_7:
    // 0x800FF5E8: jal         0x80105438
    // 0x800FF5EC: nop

    func_80105438(rdram, ctx);
        goto after_8;
    // 0x800FF5EC: nop

    after_8:
    // 0x800FF5F0: jal         0x80105C48
    // 0x800FF5F4: nop

    func_80105C48(rdram, ctx);
        goto after_9;
    // 0x800FF5F4: nop

    after_9:
    // 0x800FF5F8: jal         0x80106608
    // 0x800FF5FC: nop

    func_80106608(rdram, ctx);
        goto after_10;
    // 0x800FF5FC: nop

    after_10:
    // 0x800FF600: jal         0x80106A28
    // 0x800FF604: nop

    func_80106A28(rdram, ctx);
        goto after_11;
    // 0x800FF604: nop

    after_11:
    // 0x800FF608: jal         0x80106E18
    // 0x800FF60C: nop

    func_80106E18(rdram, ctx);
        goto after_12;
    // 0x800FF60C: nop

    after_12:
    // 0x800FF610: jal         0x8010DF98
    // 0x800FF614: nop

    func_8010DF98(rdram, ctx);
        goto after_13;
    // 0x800FF614: nop

    after_13:
    // 0x800FF618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FF61C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FF620: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FF624: jr          $ra
    // 0x800FF628: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FF628: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800FF62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF62C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800FF630: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FF634: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FF638: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FF63C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FF640: jal         0x800BEC1C
    // 0x800FF644: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800BEC1C(rdram, ctx);
        goto after_0;
    // 0x800FF644: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800FF648: beq         $v0, $zero, L_800FF658
    if (ctx->r2 == 0) {
        // 0x800FF64C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800FF658;
    }
    // 0x800FF64C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800FF650: b           L_800FF658
    // 0x800FF654: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_800FF658;
    // 0x800FF654: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_800FF658:
    // 0x800FF658: jal         0x8010D1E8
    // 0x800FF65C: nop

    func_8010D1E8(rdram, ctx);
        goto after_1;
    // 0x800FF65C: nop

    after_1:
    // 0x800FF660: jal         0x800DB9B0
    // 0x800FF664: nop

    func_800DB9B0(rdram, ctx);
        goto after_2;
    // 0x800FF664: nop

    after_2:
    // 0x800FF668: beq         $v0, $zero, L_800FF684
    if (ctx->r2 == 0) {
        // 0x800FF66C: addiu       $s2, $sp, 0x40
        ctx->r18 = ADD32(ctx->r29, 0X40);
            goto L_800FF684;
    }
    // 0x800FF66C: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x800FF670: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x800FF674: jal         0x800E3980
    // 0x800FF678: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800E3980(rdram, ctx);
        goto after_3;
    // 0x800FF678: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x800FF67C: b           L_800FF68C
    // 0x800FF680: nop

        goto L_800FF68C;
    // 0x800FF680: nop

L_800FF684:
    // 0x800FF684: jal         0x8010D254
    // 0x800FF688: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8010D254(rdram, ctx);
        goto after_4;
    // 0x800FF688: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
L_800FF68C:
    // 0x800FF68C: jal         0x801067C4
    // 0x800FF690: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_801067C4(rdram, ctx);
        goto after_5;
    // 0x800FF690: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x800FF694: beq         $v0, $zero, L_800FFA18
    if (ctx->r2 == 0) {
        // 0x800FF698: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FFA18;
    }
    // 0x800FF698: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800FF69C:
    // 0x800FF69C: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x800FF6A0: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x800FF6A4: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x800FF6A8: bltz        $t8, L_800FFA08
    if (SIGNED(ctx->r24) < 0) {
        // 0x800FF6AC: nop
    
            goto L_800FFA08;
    }
    // 0x800FF6AC: nop

    // 0x800FF6B0: lw          $t9, 0x74($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X74);
    // 0x800FF6B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FF6B8: sll         $t1, $t9, 27
    ctx->r9 = S32(ctx->r25 << 27);
    // 0x800FF6BC: bgez        $t1, L_800FF6F4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800FF6C0: nop
    
            goto L_800FF6F4;
    }
    // 0x800FF6C0: nop

    // 0x800FF6C4: jal         0x8010038C
    // 0x800FF6C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8010038C(rdram, ctx);
        goto after_6;
    // 0x800FF6C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x800FF6CC: beql        $v0, $zero, L_800FF738
    if (ctx->r2 == 0) {
        // 0x800FF6D0: lh          $t3, 0x8C($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X8C);
            goto L_800FF738;
    }
    goto skip_0;
    // 0x800FF6D0: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
    skip_0:
    // 0x800FF6D4: jal         0x80100368
    // 0x800FF6D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80100368(rdram, ctx);
        goto after_7;
    // 0x800FF6D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800FF6DC: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x800FF6E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FF6E4: jalr        $t9
    // 0x800FF6E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x800FF6E8: nop

    after_8:
    // 0x800FF6EC: b           L_800FF738
    // 0x800FF6F0: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
        goto L_800FF738;
    // 0x800FF6F0: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
L_800FF6F4:
    // 0x800FF6F4: jal         0x80100120
    // 0x800FF6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80100120(rdram, ctx);
        goto after_9;
    // 0x800FF6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800FF6FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FF700: jal         0x8010038C
    // 0x800FF704: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8010038C(rdram, ctx);
        goto after_10;
    // 0x800FF704: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
    // 0x800FF708: beql        $v0, $zero, L_800FF738
    if (ctx->r2 == 0) {
        // 0x800FF70C: lh          $t3, 0x8C($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X8C);
            goto L_800FF738;
    }
    goto skip_1;
    // 0x800FF70C: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
    skip_1:
    // 0x800FF710: jal         0x80100368
    // 0x800FF714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80100368(rdram, ctx);
        goto after_11;
    // 0x800FF714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800FF718: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x800FF71C: beql        $t2, $zero, L_800FF738
    if (ctx->r10 == 0) {
        // 0x800FF720: lh          $t3, 0x8C($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X8C);
            goto L_800FF738;
    }
    goto skip_2;
    // 0x800FF720: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
    skip_2:
    // 0x800FF724: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x800FF728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800FF72C: jalr        $t9
    // 0x800FF730: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x800FF730: nop

    after_12:
    // 0x800FF734: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
L_800FF738:
    // 0x800FF738: beql        $t3, $zero, L_800FF764
    if (ctx->r11 == 0) {
        // 0x800FF73C: lh          $t7, 0x90($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X90);
            goto L_800FF764;
    }
    goto skip_3;
    // 0x800FF73C: lh          $t7, 0x90($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X90);
    skip_3:
    // 0x800FF740: lw          $t4, 0x74($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X74);
    // 0x800FF744: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x800FF748: bgezl       $t6, L_800FF764
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800FF74C: lh          $t7, 0x90($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X90);
            goto L_800FF764;
    }
    goto skip_4;
    // 0x800FF74C: lh          $t7, 0x90($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X90);
    skip_4:
    // 0x800FF750: jal         0x80104248
    // 0x800FF754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104248(rdram, ctx);
        goto after_13;
    // 0x800FF754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x800FF758: jal         0x8008ADE4
    // 0x800FF75C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008ADE4(rdram, ctx);
        goto after_14;
    // 0x800FF75C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x800FF760: lh          $t7, 0x90($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X90);
L_800FF764:
    // 0x800FF764: beql        $t7, $zero, L_800FF778
    if (ctx->r15 == 0) {
        // 0x800FF768: lhu         $t8, 0x78($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X78);
            goto L_800FF778;
    }
    goto skip_5;
    // 0x800FF768: lhu         $t8, 0x78($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X78);
    skip_5:
    // 0x800FF76C: jal         0x801061D8
    // 0x800FF770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801061D8(rdram, ctx);
        goto after_15;
    // 0x800FF770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x800FF774: lhu         $t8, 0x78($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X78);
L_800FF778:
    // 0x800FF778: andi        $t0, $t8, 0x3
    ctx->r8 = ctx->r24 & 0X3;
    // 0x800FF77C: beql        $t0, $zero, L_800FF790
    if (ctx->r8 == 0) {
        // 0x800FF780: lw          $t1, 0x94($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X94);
            goto L_800FF790;
    }
    goto skip_6;
    // 0x800FF780: lw          $t1, 0x94($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X94);
    skip_6:
    // 0x800FF784: jal         0x80089CC8
    // 0x800FF788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiefade_entrypoint_7(rdram, ctx);
        goto after_16;
    // 0x800FF788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x800FF78C: lw          $t1, 0x94($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X94);
L_800FF790:
    // 0x800FF790: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800FF794: srl         $t9, $t2, 22
    ctx->r25 = S32(U32(ctx->r10) >> 22);
    // 0x800FF798: beql        $t9, $zero, L_800FF7AC
    if (ctx->r25 == 0) {
        // 0x800FF79C: lh          $t3, 0x8E($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X8E);
            goto L_800FF7AC;
    }
    goto skip_7;
    // 0x800FF79C: lh          $t3, 0x8E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8E);
    skip_7:
    // 0x800FF7A0: jal         0x80106F70
    // 0x800FF7A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106F70(rdram, ctx);
        goto after_17;
    // 0x800FF7A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x800FF7A8: lh          $t3, 0x8E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8E);
L_800FF7AC:
    // 0x800FF7AC: beql        $t3, $zero, L_800FF7C0
    if (ctx->r11 == 0) {
        // 0x800FF7B0: lw          $t4, 0x78($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X78);
            goto L_800FF7C0;
    }
    goto skip_8;
    // 0x800FF7B0: lw          $t4, 0x78($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X78);
    skip_8:
    // 0x800FF7B4: jal         0x80104780
    // 0x800FF7B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104780(rdram, ctx);
        goto after_18;
    // 0x800FF7B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x800FF7BC: lw          $t4, 0x78($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X78);
L_800FF7C0:
    // 0x800FF7C0: sll         $t6, $t4, 28
    ctx->r14 = S32(ctx->r12 << 28);
    // 0x800FF7C4: bgezl       $t6, L_800FF7F8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800FF7C8: lw          $t7, 0x74($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X74);
            goto L_800FF7F8;
    }
    goto skip_9;
    // 0x800FF7C8: lw          $t7, 0x74($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X74);
    skip_9:
    // 0x800FF7CC: jal         0x80085908
    // 0x800FF7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _chbounce_entrypoint_8(rdram, ctx);
        goto after_19;
    // 0x800FF7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x800FF7D4: jal         0x80103014
    // 0x800FF7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103014(rdram, ctx);
        goto after_20;
    // 0x800FF7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x800FF7DC: beq         $s3, $zero, L_800FFA00
    if (ctx->r19 == 0) {
        // 0x800FF7E0: nop
    
            goto L_800FFA00;
    }
    // 0x800FF7E0: nop

    // 0x800FF7E4: jal         0x8008A7A8
    // 0x800FF7E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiezone_entrypoint_0(rdram, ctx);
        goto after_21;
    // 0x800FF7E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x800FF7EC: b           L_800FFA00
    // 0x800FF7F0: nop

        goto L_800FFA00;
    // 0x800FF7F0: nop

    // 0x800FF7F4: lw          $t7, 0x74($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X74);
L_800FF7F8:
    // 0x800FF7F8: sll         $t0, $t7, 26
    ctx->r8 = S32(ctx->r15 << 26);
    // 0x800FF7FC: bltz        $t0, L_800FF824
    if (SIGNED(ctx->r8) < 0) {
        // 0x800FF800: nop
    
            goto L_800FF824;
    }
    // 0x800FF800: nop

    // 0x800FF804: jal         0x80103014
    // 0x800FF808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103014(rdram, ctx);
        goto after_22;
    // 0x800FF808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x800FF80C: beq         $s3, $zero, L_800FFA00
    if (ctx->r19 == 0) {
        // 0x800FF810: nop
    
            goto L_800FFA00;
    }
    // 0x800FF810: nop

    // 0x800FF814: jal         0x8008A7A8
    // 0x800FF818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiezone_entrypoint_0(rdram, ctx);
        goto after_23;
    // 0x800FF818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x800FF81C: b           L_800FFA00
    // 0x800FF820: nop

        goto L_800FFA00;
    // 0x800FF820: nop

L_800FF824:
    // 0x800FF824: jal         0x800136E4
    // 0x800FF828: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    func_800136E4(rdram, ctx);
        goto after_24;
    // 0x800FF828: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    after_24:
    // 0x800FF82C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800FF830: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FF834: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800FF838: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800FF83C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800FF840: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800FF844: nop

    // 0x800FF848: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800FF84C: beql        $t2, $zero, L_800FF89C
    if (ctx->r10 == 0) {
        // 0x800FF850: mfc1        $t2, $f4
        ctx->r10 = (int32_t)ctx->f4.u32l;
            goto L_800FF89C;
    }
    goto skip_10;
    // 0x800FF850: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    skip_10:
    // 0x800FF854: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FF858: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FF85C: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800FF860: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800FF864: nop

    // 0x800FF868: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF86C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800FF870: nop

    // 0x800FF874: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800FF878: bne         $t2, $zero, L_800FF890
    if (ctx->r10 != 0) {
        // 0x800FF87C: nop
    
            goto L_800FF890;
    }
    // 0x800FF87C: nop

    // 0x800FF880: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x800FF884: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FF888: b           L_800FF8A8
    // 0x800FF88C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_800FF8A8;
    // 0x800FF88C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_800FF890:
    // 0x800FF890: b           L_800FF8A8
    // 0x800FF894: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_800FF8A8;
    // 0x800FF894: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800FF898: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
L_800FF89C:
    // 0x800FF89C: nop

    // 0x800FF8A0: bltz        $t2, L_800FF890
    if (SIGNED(ctx->r10) < 0) {
        // 0x800FF8A4: nop
    
            goto L_800FF890;
    }
    // 0x800FF8A4: nop

L_800FF8A8:
    // 0x800FF8A8: lhu         $t5, 0x28($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X28);
    // 0x800FF8AC: sll         $t4, $t2, 7
    ctx->r12 = S32(ctx->r10 << 7);
    // 0x800FF8B0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800FF8B4: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x800FF8B8: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x800FF8BC: sh          $t7, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r15;
    // 0x800FF8C0: jal         0x800136E4
    // 0x800FF8C4: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    func_800136E4(rdram, ctx);
        goto after_25;
    // 0x800FF8C4: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    after_25:
    // 0x800FF8C8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800FF8CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800FF8D0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800FF8D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800FF8D8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800FF8DC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800FF8E0: nop

    // 0x800FF8E4: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x800FF8E8: beql        $t0, $zero, L_800FF938
    if (ctx->r8 == 0) {
        // 0x800FF8EC: mfc1        $t0, $f6
        ctx->r8 = (int32_t)ctx->f6.u32l;
            goto L_800FF938;
    }
    goto skip_11;
    // 0x800FF8EC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    skip_11:
    // 0x800FF8F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FF8F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800FF8F8: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x800FF8FC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800FF900: nop

    // 0x800FF904: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800FF908: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800FF90C: nop

    // 0x800FF910: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x800FF914: bne         $t0, $zero, L_800FF92C
    if (ctx->r8 != 0) {
        // 0x800FF918: nop
    
            goto L_800FF92C;
    }
    // 0x800FF918: nop

    // 0x800FF91C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800FF920: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FF924: b           L_800FF944
    // 0x800FF928: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_800FF944;
    // 0x800FF928: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_800FF92C:
    // 0x800FF92C: b           L_800FF944
    // 0x800FF930: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_800FF944;
    // 0x800FF930: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800FF934: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
L_800FF938:
    // 0x800FF938: nop

    // 0x800FF93C: bltz        $t0, L_800FF92C
    if (SIGNED(ctx->r8) < 0) {
        // 0x800FF940: nop
    
            goto L_800FF92C;
    }
    // 0x800FF940: nop

L_800FF944:
    // 0x800FF944: lhu         $t3, 0x26($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X26);
    // 0x800FF948: sll         $t9, $t0, 7
    ctx->r25 = S32(ctx->r8 << 7);
    // 0x800FF94C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800FF950: andi        $t5, $t3, 0x7F
    ctx->r13 = ctx->r11 & 0X7F;
    // 0x800FF954: or          $t4, $t9, $t5
    ctx->r12 = ctx->r25 | ctx->r13;
    // 0x800FF958: sh          $t4, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r12;
    // 0x800FF95C: jal         0x800136E4
    // 0x800FF960: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    func_800136E4(rdram, ctx);
        goto after_26;
    // 0x800FF960: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    after_26:
    // 0x800FF964: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800FF968: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800FF96C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800FF970: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x800FF974: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800FF978: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800FF97C: srl         $t0, $v0, 14
    ctx->r8 = S32(U32(ctx->r2) >> 14);
    // 0x800FF980: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800FF984: nop

    // 0x800FF988: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800FF98C: beql        $t7, $zero, L_800FF9DC
    if (ctx->r15 == 0) {
        // 0x800FF990: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_800FF9DC;
    }
    goto skip_12;
    // 0x800FF990: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_12:
    // 0x800FF994: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FF998: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800FF99C: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x800FF9A0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800FF9A4: nop

    // 0x800FF9A8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF9AC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800FF9B0: nop

    // 0x800FF9B4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800FF9B8: bne         $t7, $zero, L_800FF9D0
    if (ctx->r15 != 0) {
        // 0x800FF9BC: nop
    
            goto L_800FF9D0;
    }
    // 0x800FF9BC: nop

    // 0x800FF9C0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800FF9C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800FF9C8: b           L_800FF9E8
    // 0x800FF9CC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_800FF9E8;
    // 0x800FF9CC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_800FF9D0:
    // 0x800FF9D0: b           L_800FF9E8
    // 0x800FF9D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_800FF9E8;
    // 0x800FF9D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800FF9D8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_800FF9DC:
    // 0x800FF9DC: nop

    // 0x800FF9E0: bltz        $t7, L_800FF9D0
    if (SIGNED(ctx->r15) < 0) {
        // 0x800FF9E4: nop
    
            goto L_800FF9D0;
    }
    // 0x800FF9E4: nop

L_800FF9E8:
    // 0x800FF9E8: xor         $t1, $t7, $t0
    ctx->r9 = ctx->r15 ^ ctx->r8;
    // 0x800FF9EC: sll         $t2, $t1, 23
    ctx->r10 = S32(ctx->r9 << 23);
    // 0x800FF9F0: srl         $t3, $t2, 9
    ctx->r11 = S32(U32(ctx->r10) >> 9);
    // 0x800FF9F4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800FF9F8: xor         $t9, $t3, $v0
    ctx->r25 = ctx->r11 ^ ctx->r2;
    // 0x800FF9FC: sw          $t9, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r25;
L_800FFA00:
    // 0x800FFA00: jal         0x80103040
    // 0x800FFA04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103040(rdram, ctx);
        goto after_27;
    // 0x800FFA04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
L_800FFA08:
    // 0x800FFA08: jal         0x8010682C
    // 0x800FFA0C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_8010682C(rdram, ctx);
        goto after_28;
    // 0x800FFA0C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_28:
    // 0x800FFA10: bne         $v0, $zero, L_800FF69C
    if (ctx->r2 != 0) {
        // 0x800FFA14: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FF69C;
    }
    // 0x800FFA14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800FFA18:
    // 0x800FFA18: jal         0x8010DF3C
    // 0x800FFA1C: nop

    func_8010DF3C(rdram, ctx);
        goto after_29;
    // 0x800FFA1C: nop

    after_29:
    // 0x800FFA20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FFA24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FFA28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FFA2C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFA30: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FFA34: jr          $ra
    // 0x800FFA38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800FFA38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800FFA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFA3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FFA40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFA44: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800FFA48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800FFA4C: jal         0x800FF3EC
    // 0x800FFA50: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_800FF3EC(rdram, ctx);
        goto after_0;
    // 0x800FFA50: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x800FFA54: jal         0x800FF4A4
    // 0x800FFA58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800FF4A4(rdram, ctx);
        goto after_1;
    // 0x800FFA58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800FFA5C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFA60: lhu         $a0, 0x1A($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X1A);
    // 0x800FFA64: srl         $t8, $a0, 5
    ctx->r24 = S32(U32(ctx->r4) >> 5);
    // 0x800FFA68: jal         0x801066C0
    // 0x800FFA6C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_801066C0(rdram, ctx);
        goto after_2;
    // 0x800FFA6C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x800FFA70: jal         0x800EBFF4
    // 0x800FFA74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EBFF4(rdram, ctx);
        goto after_3;
    // 0x800FFA74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x800FFA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FFA7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FFA80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FFA8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFA90: jal         0x80106790
    // 0x800FFA94: nop

    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800FFA94: nop

    after_0:
    // 0x800FFA98: jal         0x800FFAB0
    // 0x800FFA9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800FFAB0(rdram, ctx);
        goto after_1;
    // 0x800FFA9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800FFAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FFAA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FFAA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFAB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FFAB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFAB8: lbu         $t7, 0x65($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X65);
    // 0x800FFABC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FFAC0: addiu       $v1, $v1, 0x5A50
    ctx->r3 = ADD32(ctx->r3, 0X5A50);
    // 0x800FFAC4: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x800FFAC8: sb          $t8, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r24;
    // 0x800FFACC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800FFAD0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800FFAD4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800FFAD8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800FFADC: lw          $a2, 0x40($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X40);
    // 0x800FFAE0: beql        $a2, $zero, L_800FFB3C
    if (ctx->r6 == 0) {
        // 0x800FFAE4: lbu         $t9, 0x7B($a1)
        ctx->r25 = MEM_BU(ctx->r5, 0X7B);
            goto L_800FFB3C;
    }
    goto skip_0;
    // 0x800FFAE4: lbu         $t9, 0x7B($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X7B);
    skip_0:
    // 0x800FFAE8: lw          $t1, 0x6C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X6C);
    // 0x800FFAEC: addiu       $at, $zero, 0x243
    ctx->r1 = ADD32(0, 0X243);
    // 0x800FFAF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800FFAF4: sll         $t2, $t1, 11
    ctx->r10 = S32(ctx->r9 << 11);
    // 0x800FFAF8: srl         $t3, $t2, 20
    ctx->r11 = S32(U32(ctx->r10) >> 20);
    // 0x800FFAFC: beql        $t3, $at, L_800FFB3C
    if (ctx->r11 == ctx->r1) {
        // 0x800FFB00: lbu         $t9, 0x7B($a1)
        ctx->r25 = MEM_BU(ctx->r5, 0X7B);
            goto L_800FFB3C;
    }
    goto skip_1;
    // 0x800FFB00: lbu         $t9, 0x7B($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X7B);
    skip_1:
    // 0x800FFB04: jal         0x80106790
    // 0x800FFB08: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800FFB08: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x800FFB0C: lbu         $t5, 0x65($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X65);
    // 0x800FFB10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800FFB14: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800FFB18: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x800FFB1C: sb          $t6, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r14;
    // 0x800FFB20: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
    // 0x800FFB24: addiu       $v1, $v1, 0x5A50
    ctx->r3 = ADD32(ctx->r3, 0X5A50);
    // 0x800FFB28: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x800FFB2C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800FFB30: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800FFB34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800FFB38: lbu         $t9, 0x7B($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X7B);
L_800FFB3C:
    // 0x800FFB3C: lbu         $t5, 0x74($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X74);
    // 0x800FFB40: andi        $t0, $t9, 0xFFFB
    ctx->r8 = ctx->r25 & 0XFFFB;
    // 0x800FFB44: sb          $t0, 0x7B($a1)
    MEM_B(0X7B, ctx->r5) = ctx->r8;
    // 0x800FFB48: lw          $t1, 0x78($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X78);
    // 0x800FFB4C: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x800FFB50: sll         $t2, $t1, 29
    ctx->r10 = S32(ctx->r9 << 29);
    // 0x800FFB54: srl         $t3, $t2, 31
    ctx->r11 = S32(U32(ctx->r10) >> 31);
    // 0x800FFB58: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800FFB5C: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x800FFB60: sb          $t7, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r15;
    // 0x800FFB64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FFB68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FFB6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFB74: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FFB78: lw          $t6, 0x5A50($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A50);
    // 0x800FFB7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FFB80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FFB84: blez        $t6, L_800FFBD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800FFB88: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800FFBD0;
    }
    // 0x800FFB88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FFB8C: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x800FFB90: jal         0x801067C4
    // 0x800FFB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x800FFB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800FFB98: beq         $v0, $zero, L_800FFBC8
    if (ctx->r2 == 0) {
        // 0x800FFB9C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FFBC8;
    }
    // 0x800FFB9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800FFBA0:
    // 0x800FFBA0: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x800FFBA4: sll         $t9, $t7, 14
    ctx->r25 = S32(ctx->r15 << 14);
    // 0x800FFBA8: bgez        $t9, L_800FFBB8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800FFBAC: nop
    
            goto L_800FFBB8;
    }
    // 0x800FFBAC: nop

    // 0x800FFBB0: jal         0x800FFA3C
    // 0x800FFBB4: nop

    func_800FFA3C(rdram, ctx);
        goto after_1;
    // 0x800FFBB4: nop

    after_1:
L_800FFBB8:
    // 0x800FFBB8: jal         0x8010682C
    // 0x800FFBBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010682C(rdram, ctx);
        goto after_2;
    // 0x800FFBBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800FFBC0: bne         $v0, $zero, L_800FFBA0
    if (ctx->r2 != 0) {
        // 0x800FFBC4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FFBA0;
    }
    // 0x800FFBC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800FFBC8:
    // 0x800FFBC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FFBCC: sw          $zero, 0x5A50($at)
    MEM_W(0X5A50, ctx->r1) = 0;
L_800FFBD0:
    // 0x800FFBD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFBD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FFBD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FFBDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFBE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFBEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FFBF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFBF4: jal         0x800FFC3C
    // 0x800FFBF8: nop

    func_800FFC3C(rdram, ctx);
        goto after_0;
    // 0x800FFBF8: nop

    after_0:
    // 0x800FFBFC: jal         0x8010DEFC
    // 0x800FFC00: nop

    func_8010DEFC(rdram, ctx);
        goto after_1;
    // 0x800FFC00: nop

    after_1:
    // 0x800FFC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FFC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FFC0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFC14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FFC18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFC1C: jal         0x800FFC3C
    // 0x800FFC20: nop

    func_800FFC3C(rdram, ctx);
        goto after_0;
    // 0x800FFC20: nop

    after_0:
    // 0x800FFC24: jal         0x8010DEFC
    // 0x800FFC28: nop

    func_8010DEFC(rdram, ctx);
        goto after_1;
    // 0x800FFC28: nop

    after_1:
    // 0x800FFC2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FFC30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FFC34: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFC3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FFC40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FFC44: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x800FFC48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FFC4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FFC50: jal         0x801067C4
    // 0x800FFC54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x800FFC54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800FFC58: beq         $v0, $zero, L_800FFC7C
    if (ctx->r2 == 0) {
        // 0x800FFC5C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FFC7C;
    }
    // 0x800FFC5C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800FFC60:
    // 0x800FFC60: lbu         $t6, 0x7E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X7E);
    // 0x800FFC64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800FFC68: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x800FFC6C: jal         0x8010682C
    // 0x800FFC70: sb          $t7, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r15;
    func_8010682C(rdram, ctx);
        goto after_1;
    // 0x800FFC70: sb          $t7, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r15;
    after_1:
    // 0x800FFC74: bne         $v0, $zero, L_800FFC60
    if (ctx->r2 != 0) {
        // 0x800FFC78: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FFC60;
    }
    // 0x800FFC78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800FFC7C:
    // 0x800FFC7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFC80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FFC84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FFC88: jr          $ra
    // 0x800FFC8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FFC8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FFC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFC90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FFC94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FFC98: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x800FFC9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FFCA0: jal         0x801067C4
    // 0x800FFCA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x800FFCA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800FFCA8: beql        $v0, $zero, L_800FFD00
    if (ctx->r2 == 0) {
        // 0x800FFCAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800FFD00;
    }
    goto skip_0;
    // 0x800FFCAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800FFCB0: lw          $t6, 0x7C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X7C);
L_800FFCB4:
    // 0x800FFCB4: sll         $t8, $t6, 19
    ctx->r24 = S32(ctx->r14 << 19);
    // 0x800FFCB8: bgez        $t8, L_800FFCEC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800FFCBC: nop
    
            goto L_800FFCEC;
    }
    // 0x800FFCBC: nop

    // 0x800FFCC0: lbu         $t9, 0x70($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X70);
    // 0x800FFCC4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800FFCC8: beq         $t0, $zero, L_800FFCEC
    if (ctx->r8 == 0) {
        // 0x800FFCCC: nop
    
            goto L_800FFCEC;
    }
    // 0x800FFCCC: nop

    // 0x800FFCD0: lbu         $v1, 0x71($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X71);
    // 0x800FFCD4: srl         $t1, $v1, 7
    ctx->r9 = S32(U32(ctx->r3) >> 7);
    // 0x800FFCD8: xori        $t3, $t1, 0x1
    ctx->r11 = ctx->r9 ^ 0X1;
    // 0x800FFCDC: sll         $t5, $t3, 7
    ctx->r13 = S32(ctx->r11 << 7);
    // 0x800FFCE0: andi        $t6, $v1, 0xFF7F
    ctx->r14 = ctx->r3 & 0XFF7F;
    // 0x800FFCE4: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x800FFCE8: sb          $t7, 0x71($v0)
    MEM_B(0X71, ctx->r2) = ctx->r15;
L_800FFCEC:
    // 0x800FFCEC: jal         0x8010682C
    // 0x800FFCF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010682C(rdram, ctx);
        goto after_1;
    // 0x800FFCF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800FFCF4: bnel        $v0, $zero, L_800FFCB4
    if (ctx->r2 != 0) {
        // 0x800FFCF8: lw          $t6, 0x7C($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X7C);
            goto L_800FFCB4;
    }
    goto skip_1;
    // 0x800FFCF8: lw          $t6, 0x7C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X7C);
    skip_1:
    // 0x800FFCFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800FFD00:
    // 0x800FFD00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FFD04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FFD08: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFD10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FFD14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FFD18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FFD1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800FFD20: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800FFD24: bne         $a0, $at, L_800FFD34
    if (ctx->r4 != ctx->r1) {
        // 0x800FFD28: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800FFD34;
    }
    // 0x800FFD28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FFD2C: b           L_800FFD40
    // 0x800FFD30: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
        goto L_800FFD40;
    // 0x800FFD30: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_800FFD34:
    // 0x800FFD34: jal         0x80106730
    // 0x800FFD38: nop

    func_80106730(rdram, ctx);
        goto after_0;
    // 0x800FFD38: nop

    after_0:
    // 0x800FFD3C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800FFD40:
    // 0x800FFD40: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800FFD44: addiu       $s2, $s2, 0x4390
    ctx->r18 = ADD32(ctx->r18, 0X4390);
    // 0x800FFD48: jal         0x801068A8
    // 0x800FFD4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801068A8(rdram, ctx);
        goto after_1;
    // 0x800FFD4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800FFD50: beq         $v0, $zero, L_800FFDA4
    if (ctx->r2 == 0) {
        // 0x800FFD54: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800FFDA4;
    }
    // 0x800FFD54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FFD58: blezl       $s1, L_800FFDA8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x800FFD5C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800FFDA8;
    }
    goto skip_0;
    // 0x800FFD5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800FFD60: lw          $t6, 0x70($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X70);
L_800FFD64:
    // 0x800FFD64: sll         $t8, $t6, 28
    ctx->r24 = S32(ctx->r14 << 28);
    // 0x800FFD68: bgez        $t8, L_800FFD88
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800FFD6C: nop
    
            goto L_800FFD88;
    }
    // 0x800FFD6C: nop

    // 0x800FFD70: jal         0x80103AC0
    // 0x800FFD74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103AC0(rdram, ctx);
        goto after_2;
    // 0x800FFD74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800FFD78: bne         $v0, $zero, L_800FFD88
    if (ctx->r2 != 0) {
        // 0x800FFD7C: nop
    
            goto L_800FFD88;
    }
    // 0x800FFD7C: nop

    // 0x800FFD80: jal         0x8010381C
    // 0x800FFD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010381C(rdram, ctx);
        goto after_3;
    // 0x800FFD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_800FFD88:
    // 0x800FFD88: jal         0x80106920
    // 0x800FFD8C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80106920(rdram, ctx);
        goto after_4;
    // 0x800FFD8C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x800FFD90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800FFD94: beq         $v0, $zero, L_800FFDA4
    if (ctx->r2 == 0) {
        // 0x800FFD98: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_800FFDA4;
    }
    // 0x800FFD98: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800FFD9C: bgtzl       $s1, L_800FFD64
    if (SIGNED(ctx->r17) > 0) {
        // 0x800FFDA0: lw          $t6, 0x70($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X70);
            goto L_800FFD64;
    }
    goto skip_1;
    // 0x800FFDA0: lw          $t6, 0x70($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X70);
    skip_1:
L_800FFDA4:
    // 0x800FFDA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800FFDA8:
    // 0x800FFDA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FFDAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFDB0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800FFDB4: jr          $ra
    // 0x800FFDB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FFDB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FFDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFDBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FFDC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FFDC4: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x800FFDC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FFDCC: jal         0x801067C4
    // 0x800FFDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x800FFDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800FFDD4: beq         $v0, $zero, L_800FFDF4
    if (ctx->r2 == 0) {
        // 0x800FFDD8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FFDF4;
    }
    // 0x800FFDD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800FFDDC:
    // 0x800FFDDC: jal         0x8010381C
    // 0x800FFDE0: nop

    func_8010381C(rdram, ctx);
        goto after_1;
    // 0x800FFDE0: nop

    after_1:
    // 0x800FFDE4: jal         0x8010682C
    // 0x800FFDE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010682C(rdram, ctx);
        goto after_2;
    // 0x800FFDE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800FFDEC: bne         $v0, $zero, L_800FFDDC
    if (ctx->r2 != 0) {
        // 0x800FFDF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800FFDDC;
    }
    // 0x800FFDF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800FFDF4:
    // 0x800FFDF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFDF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FFDFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FFE00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800FFE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFE08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FFE0C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800FFE10: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x800FFE14: addiu       $s3, $s3, 0x4394
    ctx->r19 = ADD32(ctx->r19, 0X4394);
    // 0x800FFE18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FFE1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800FFE20: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800FFE24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800FFE28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800FFE2C: jal         0x801068A8
    // 0x800FFE30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801068A8(rdram, ctx);
        goto after_0;
    // 0x800FFE30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x800FFE34: beq         $v0, $zero, L_800FFE70
    if (ctx->r2 == 0) {
        // 0x800FFE38: addiu       $s2, $zero, 0x8
        ctx->r18 = ADD32(0, 0X8);
            goto L_800FFE70;
    }
    // 0x800FFE38: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x800FFE3C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
L_800FFE40:
    // 0x800FFE40: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800FFE44: beq         $a0, $zero, L_800FFE58
    if (ctx->r4 == 0) {
        // 0x800FFE48: nop
    
            goto L_800FFE58;
    }
    // 0x800FFE48: nop

    // 0x800FFE4C: jal         0x800DC060
    // 0x800FFE50: nop

    func_800DC060(rdram, ctx);
        goto after_1;
    // 0x800FFE50: nop

    after_1:
    // 0x800FFE54: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_800FFE58:
    // 0x800FFE58: jal         0x80106920
    // 0x800FFE5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80106920(rdram, ctx);
        goto after_2;
    // 0x800FFE5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x800FFE60: beq         $v0, $zero, L_800FFE70
    if (ctx->r2 == 0) {
        // 0x800FFE64: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800FFE70;
    }
    // 0x800FFE64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800FFE68: bnel        $s1, $s2, L_800FFE40
    if (ctx->r17 != ctx->r18) {
        // 0x800FFE6C: lw          $s0, 0x0($v0)
        ctx->r16 = MEM_W(ctx->r2, 0X0);
            goto L_800FFE40;
    }
    goto skip_0;
    // 0x800FFE6C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    skip_0:
L_800FFE70:
    // 0x800FFE70: jal         0x80106630
    // 0x800FFE74: nop

    func_80106630(rdram, ctx);
        goto after_3;
    // 0x800FFE74: nop

    after_3:
    // 0x800FFE78: jal         0x801041C8
    // 0x800FFE7C: nop

    func_801041C8(rdram, ctx);
        goto after_4;
    // 0x800FFE7C: nop

    after_4:
    // 0x800FFE80: jal         0x801043A0
    // 0x800FFE84: nop

    func_801043A0(rdram, ctx);
        goto after_5;
    // 0x800FFE84: nop

    after_5:
    // 0x800FFE88: jal         0x8010545C
    // 0x800FFE8C: nop

    func_8010545C(rdram, ctx);
        goto after_6;
    // 0x800FFE8C: nop

    after_6:
    // 0x800FFE90: jal         0x80105CD0
    // 0x800FFE94: nop

    func_80105CD0(rdram, ctx);
        goto after_7;
    // 0x800FFE94: nop

    after_7:
    // 0x800FFE98: jal         0x80106A60
    // 0x800FFE9C: nop

    func_80106A60(rdram, ctx);
        goto after_8;
    // 0x800FFE9C: nop

    after_8:
    // 0x800FFEA0: jal         0x80106E50
    // 0x800FFEA4: nop

    func_80106E50(rdram, ctx);
        goto after_9;
    // 0x800FFEA4: nop

    after_9:
    // 0x800FFEA8: jal         0x80107C10
    // 0x800FFEAC: nop

    func_80107C10(rdram, ctx);
        goto after_10;
    // 0x800FFEAC: nop

    after_10:
    // 0x800FFEB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FFEB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800FFEB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800FFEBC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFEC0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800FFEC4: jr          $ra
    // 0x800FFEC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FFEC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FFECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFECC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800FFED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFED4: beq         $a2, $zero, L_80100024
    if (ctx->r6 == 0) {
        // 0x800FFED8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80100024;
    }
    // 0x800FFED8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800FFEDC: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x800FFEE0: addu        $t1, $a0, $t6
    ctx->r9 = ADD32(ctx->r4, ctx->r14);
    // 0x800FFEE4: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
    // 0x800FFEE8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x800FFEEC: ori         $at, $at, 0xFFFC
    ctx->r1 = ctx->r1 | 0XFFFC;
    // 0x800FFEF0: beq         $a0, $zero, L_800FFFC4
    if (ctx->r4 == 0) {
        // 0x800FFEF4: addiu       $a1, $a2, 0x3
        ctx->r5 = ADD32(ctx->r6, 0X3);
            goto L_800FFFC4;
    }
    // 0x800FFEF4: addiu       $a1, $a2, 0x3
    ctx->r5 = ADD32(ctx->r6, 0X3);
    // 0x800FFEF8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800FFEFC: jal         0x8001B7B8
    // 0x800FFF00: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8001B7B8(rdram, ctx);
        goto after_0;
    // 0x800FFF00: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x800FFF04: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800FFF08: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800FFF0C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x800FFF10: ori         $at, $at, 0xFFFC
    ctx->r1 = ctx->r1 | 0XFFFC;
    // 0x800FFF14: addiu       $a1, $a2, 0x3
    ctx->r5 = ADD32(ctx->r6, 0X3);
    // 0x800FFF18: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x800FFF1C: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
    // 0x800FFF20: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800FFF24: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800FFF28: jal         0x8001B710
    // 0x800FFF2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8001B710(rdram, ctx);
        goto after_1;
    // 0x800FFF2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_1:
    // 0x800FFF30: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFF34: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800FFF38: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800FFF3C: sra         $a2, $a1, 2
    ctx->r6 = S32(SIGNED(ctx->r5) >> 2);
    // 0x800FFF40: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800FFF44: beq         $at, $zero, L_8010001C
    if (ctx->r1 == 0) {
        // 0x800FFF48: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8010001C;
    }
    // 0x800FFF48: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800FFF4C: sra         $a3, $v1, 2
    ctx->r7 = S32(SIGNED(ctx->r3) >> 2);
    // 0x800FFF50: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800FFF54: bne         $at, $zero, L_8010001C
    if (ctx->r1 != 0) {
        // 0x800FFF58: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8010001C;
    }
    // 0x800FFF58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800FFF5C: subu        $t0, $a2, $a3
    ctx->r8 = SUB32(ctx->r6, ctx->r7);
    // 0x800FFF60: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800FFF64: andi        $t8, $t0, 0x3
    ctx->r24 = ctx->r8 & 0X3;
    // 0x800FFF68: negu        $t0, $t8
    ctx->r8 = SUB32(0, ctx->r24);
    // 0x800FFF6C: beq         $t0, $zero, L_800FFF94
    if (ctx->r8 == 0) {
        // 0x800FFF70: addu        $a1, $t0, $a2
        ctx->r5 = ADD32(ctx->r8, ctx->r6);
            goto L_800FFF94;
    }
    // 0x800FFF70: addu        $a1, $t0, $a2
    ctx->r5 = ADD32(ctx->r8, ctx->r6);
    // 0x800FFF74: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800FFF78: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
L_800FFF7C:
    // 0x800FFF7C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800FFF80: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800FFF84: bne         $a1, $a0, L_800FFF7C
    if (ctx->r5 != ctx->r4) {
        // 0x800FFF88: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_800FFF7C;
    }
    // 0x800FFF88: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800FFF8C: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x800FFF90: beq         $t2, $a3, L_8010001C
    if (ctx->r10 == ctx->r7) {
        // 0x800FFF94: sll         $t3, $a0, 2
        ctx->r11 = S32(ctx->r4 << 2);
            goto L_8010001C;
    }
L_800FFF94:
    // 0x800FFF94: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x800FFF98: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x800FFF9C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
L_800FFFA0:
    // 0x800FFFA0: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800FFFA4: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x800FFFA8: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x800FFFAC: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x800FFFB0: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x800FFFB4: bne         $a0, $a1, L_800FFFA0
    if (ctx->r4 != ctx->r5) {
        // 0x800FFFB8: sw          $zero, 0x10($v1)
        MEM_W(0X10, ctx->r3) = 0;
            goto L_800FFFA0;
    }
    // 0x800FFFB8: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x800FFFBC: b           L_8010001C
    // 0x800FFFC0: nop

        goto L_8010001C;
    // 0x800FFFC0: nop

L_800FFFC4:
    // 0x800FFFC4: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x800FFFC8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800FFFCC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x800FFFD0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800FFFD4: jal         0x8001B668
    // 0x800FFFD8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8001B668(rdram, ctx);
        goto after_2;
    // 0x800FFFD8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_2:
    // 0x800FFFDC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800FFFE0: sh          $v0, 0x82($t1)
    MEM_H(0X82, ctx->r9) = ctx->r2;
    // 0x800FFFE4: jal         0x8001B798
    // 0x800FFFE8: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
    func_8001B798(rdram, ctx);
        goto after_3;
    // 0x800FFFE8: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
    after_3:
    // 0x800FFFEC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFFF0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800FFFF4: sra         $a2, $a1, 2
    ctx->r6 = S32(SIGNED(ctx->r5) >> 2);
    // 0x800FFFF8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800FFFFC: bltz        $a2, L_8010001C
    if (SIGNED(ctx->r6) < 0) {
        // 0x80100000: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8010001C;
    }
    // 0x80100000: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80100004: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x80100008: addu        $v1, $v0, $t5
    ctx->r3 = ADD32(ctx->r2, ctx->r13);
L_8010000C:
    // 0x8010000C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80100010: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80100014: bgez        $a0, L_8010000C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80100018: sw          $zero, 0x4($v1)
        MEM_W(0X4, ctx->r3) = 0;
            goto L_8010000C;
    }
    // 0x80100018: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_8010001C:
    // 0x8010001C: b           L_8010004C
    // 0x80100020: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
        goto L_8010004C;
    // 0x80100020: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
L_80100024:
    // 0x80100024: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x80100028: addu        $t1, $a3, $t6
    ctx->r9 = ADD32(ctx->r7, ctx->r14);
    // 0x8010002C: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
    // 0x80100030: beq         $a0, $zero, L_8010004C
    if (ctx->r4 == 0) {
        // 0x80100034: nop
    
            goto L_8010004C;
    }
    // 0x80100034: nop

    // 0x80100038: jal         0x8001B754
    // 0x8010003C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x8010003C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_4:
    // 0x80100040: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80100044: sh          $zero, 0x82($t1)
    MEM_H(0X82, ctx->r9) = 0;
    // 0x80100048: lh          $a0, 0x82($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X82);
L_8010004C:
    // 0x8010004C: beq         $a0, $zero, L_80100064
    if (ctx->r4 == 0) {
        // 0x80100050: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80100064;
    }
    // 0x80100050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80100054: jal         0x8001B798
    // 0x80100058: nop

    func_8001B798(rdram, ctx);
        goto after_5;
    // 0x80100058: nop

    after_5:
    // 0x8010005C: b           L_80100068
    // 0x80100060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80100068;
    // 0x80100060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80100064:
    // 0x80100064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80100068:
    // 0x80100068: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8010006C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe_create(rdram, ctx);
    // 0x80100074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010007C: jal         0x800FFECC
    // 0x80100080: nop

    func_800FFECC(rdram, ctx);
        goto after_0;
    // 0x80100080: nop

    after_0:
    // 0x80100084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010008C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe_slot_table(rdram, ctx);
    // 0x80100094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100098: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8010009C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801000A0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x801000A4: lh          $a2, 0x82($t7)
    ctx->r6 = MEM_H(ctx->r15, 0X82);
    // 0x801000A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801000AC: beq         $a2, $zero, L_801000C8
    if (ctx->r6 == 0) {
        // 0x801000B0: sll         $a0, $a2, 16
        ctx->r4 = S32(ctx->r6 << 16);
            goto L_801000C8;
    }
    // 0x801000B0: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x801000B4: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801000B8: jal         0x8001B798
    // 0x801000BC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x801000BC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x801000C0: b           L_801000CC
    // 0x801000C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801000CC;
    // 0x801000C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801000C8:
    // 0x801000C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801000CC:
    // 0x801000CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801000D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801000D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801000D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801000DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801000E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801000E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801000E8: jal         0x80100094
    // 0x801000EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80100094(rdram, ctx);
        goto after_0;
    // 0x801000EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801000F0: bne         $v0, $zero, L_80100104
    if (ctx->r2 != 0) {
        // 0x801000F4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80100104;
    }
    // 0x801000F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801000F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801000FC: jal         0x80100074
    // 0x80100100: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_80100074(rdram, ctx);
        goto after_1;
    // 0x80100100: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
L_80100104:
    // 0x80100104: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80100108: jal         0x80100094
    // 0x8010010C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80100094(rdram, ctx);
        goto after_2;
    // 0x8010010C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80100110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100118: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100120: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80100124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80100128: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010012C: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x80100130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80100134: sll         $t8, $t6, 10
    ctx->r24 = S32(ctx->r14 << 10);
    // 0x80100138: bltzl       $t8, L_801001C8
    if (SIGNED(ctx->r24) < 0) {
        // 0x8010013C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801001C8;
    }
    goto skip_0;
    // 0x8010013C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80100140: jal         0x80100368
    // 0x80100144: nop

    func_80100368(rdram, ctx);
        goto after_0;
    // 0x80100144: nop

    after_0:
    // 0x80100148: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    tooie_probe_dispatch(rdram, ctx);
    // 0x8010014C: beql        $v1, $zero, L_801001BC
    if (ctx->r3 == 0) {
        // 0x80100150: lbu         $t1, 0x75($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X75);
            goto L_801001BC;
    }
    goto skip_1;
    // 0x80100150: lbu         $t1, 0x75($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X75);
    skip_1:
    // 0x80100154: lw          $t9, 0x70($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X70);
    // 0x80100158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010015C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80100160: sll         $t1, $t9, 28
    ctx->r9 = S32(ctx->r25 << 28);
    // 0x80100164: bgez        $t1, L_8010018C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80100168: nop
    
            goto L_8010018C;
    }
    // 0x80100168: nop

    // 0x8010016C: jal         0x80102F74
    // 0x80100170: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80102F74(rdram, ctx);
        goto after_1;
    // 0x80100170: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80100174: beq         $v0, $zero, L_8010018C
    if (ctx->r2 == 0) {
        // 0x80100178: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_8010018C;
    }
    // 0x80100178: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8010017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80100180: jal         0x8010381C
    // 0x80100184: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8010381C(rdram, ctx);
        goto after_2;
    // 0x80100184: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x80100188: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_8010018C:
    // 0x8010018C: jalr        $v1
    // 0x80100190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x80100190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80100194: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x80100198: sll         $t4, $t2, 14
    ctx->r12 = S32(ctx->r10 << 14);
    // 0x8010019C: bgezl       $t4, L_801001BC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801001A0: lbu         $t1, 0x75($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X75);
            goto L_801001BC;
    }
    goto skip_2;
    // 0x801001A0: lbu         $t1, 0x75($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X75);
    skip_2:
    // 0x801001A4: lbu         $t6, 0x7E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X7E);
    // 0x801001A8: ori         $t8, $t6, 0x80
    ctx->r24 = ctx->r14 | 0X80;
    // 0x801001AC: sb          $t8, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r24;
    // 0x801001B0: andi        $t9, $t8, 0xBF
    ctx->r25 = ctx->r24 & 0XBF;
    // 0x801001B4: sb          $t9, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r25;
    // 0x801001B8: lbu         $t1, 0x75($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X75);
L_801001BC:
    // 0x801001BC: ori         $t2, $t1, 0x20
    ctx->r10 = ctx->r9 | 0X20;
    // 0x801001C0: sb          $t2, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r10;
    // 0x801001C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801001C8:
    // 0x801001C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801001CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801001D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801001D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801001D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801001DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801001E0: jal         0x8010D1E8
    // 0x801001E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8010D1E8(rdram, ctx);
        goto after_0;
    // 0x801001E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x801001E8: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x801001EC: jal         0x801067C4
    // 0x801001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801067C4(rdram, ctx);
        goto after_1;
    // 0x801001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801001F4: beq         $v0, $zero, L_80100214
    if (ctx->r2 == 0) {
        // 0x801001F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80100214;
    }
    // 0x801001F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_801001FC:
    // 0x801001FC: jal         0x80100120
    // 0x80100200: nop

    func_80100120(rdram, ctx);
        goto after_2;
    // 0x80100200: nop

    after_2:
    // 0x80100204: jal         0x8010682C
    // 0x80100208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010682C(rdram, ctx);
        goto after_3;
    // 0x80100208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010020C: bne         $v0, $zero, L_801001FC
    if (ctx->r2 != 0) {
        // 0x80100210: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801001FC;
    }
    // 0x80100210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80100214:
    // 0x80100214: jal         0x800FFB74
    // 0x80100218: nop

    func_800FFB74(rdram, ctx);
        goto after_4;
    // 0x80100218: nop

    after_4:
    // 0x8010021C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80100220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80100228: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100238: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x8010023C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80100240: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80100244: sll         $t8, $t6, 17
    ctx->r24 = S32(ctx->r14 << 17);
    // 0x80100248: bltzl       $t8, L_8010025C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8010024C: lhu         $t9, 0x7C($a2)
        ctx->r25 = MEM_HU(ctx->r6, 0X7C);
            goto L_8010025C;
    }
    goto skip_0;
    // 0x8010024C: lhu         $t9, 0x7C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X7C);
    skip_0:
    // 0x80100250: b           L_801002B0
    // 0x80100254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801002B0;
    // 0x80100254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80100258: lhu         $t9, 0x7C($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X7C);
L_8010025C:
    // 0x8010025C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80100260: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    // 0x80100264: bne         $t9, $zero, L_80100274
    if (ctx->r25 != 0) {
        // 0x80100268: nop
    
            goto L_80100274;
    }
    // 0x80100268: nop

    // 0x8010026C: b           L_801002B0
    // 0x80100270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801002B0;
    // 0x80100270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80100274:
    // 0x80100274: jal         0x800EEB40
    // 0x80100278: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800EEB40(rdram, ctx);
        goto after_0;
    // 0x80100278: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010027C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80100280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80100284: lhu         $v1, 0x7C($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X7C);
    // 0x80100288: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010028C: mflo        $t0
    ctx->r8 = lo;
    // 0x80100290: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80100294: nop

    // 0x80100298: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010029C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801002A0: nop

    // 0x801002A4: bc1fl       L_801002B4
    if (!c1cs) {
        // 0x801002A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801002B4;
    }
    goto skip_1;
    // 0x801002A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801002AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801002B0:
    // 0x801002B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801002B4:
    // 0x801002B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801002B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801002C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801002C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801002C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801002C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801002CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801002D0: jal         0x801001D8
    // 0x801002D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_801001D8(rdram, ctx);
        goto after_0;
    // 0x801002D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x801002D8: jal         0x80089FB8
    // 0x801002DC: nop

    _suautobaddies_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x801002DC: nop

    after_1:
    // 0x801002E0: jal         0x800FFB74
    // 0x801002E4: nop

    func_800FFB74(rdram, ctx);
        goto after_2;
    // 0x801002E4: nop

    after_2:
    // 0x801002E8: jal         0x800F54E4
    // 0x801002EC: nop

    func_800F54E4(rdram, ctx);
        goto after_3;
    // 0x801002EC: nop

    after_3:
    // 0x801002F0: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x801002F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801002F8: jal         0x800F5A00
    // 0x801002FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5A00(rdram, ctx);
        goto after_4;
    // 0x801002FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80100300: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    // 0x80100304: jal         0x801067C4
    // 0x80100308: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801067C4(rdram, ctx);
        goto after_5;
    // 0x80100308: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x8010030C: beq         $v0, $zero, L_80100350
    if (ctx->r2 == 0) {
        // 0x80100310: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80100350;
    }
    // 0x80100310: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80100314:
    // 0x80100314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80100318: jal         0x80100230
    // 0x8010031C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80100230(rdram, ctx);
        goto after_6;
    // 0x8010031C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80100320: beq         $v0, $zero, L_80100340
    if (ctx->r2 == 0) {
        // 0x80100324: nop
    
            goto L_80100340;
    }
    // 0x80100324: nop

    // 0x80100328: jal         0x80081D34
    // 0x8010032C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_80081D34(rdram, ctx);
        goto after_7;
    // 0x8010032C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_7:
    // 0x80100330: beq         $v0, $zero, L_80100340
    if (ctx->r2 == 0) {
        // 0x80100334: nop
    
            goto L_80100340;
    }
    // 0x80100334: nop

    // 0x80100338: jal         0x800819B4
    // 0x8010033C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_800819B4(rdram, ctx);
        goto after_8;
    // 0x8010033C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_8:
L_80100340:
    // 0x80100340: jal         0x8010682C
    // 0x80100344: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8010682C(rdram, ctx);
        goto after_9;
    // 0x80100344: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x80100348: bne         $v0, $zero, L_80100314
    if (ctx->r2 != 0) {
        // 0x8010034C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80100314;
    }
    // 0x8010034C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80100350:
    // 0x80100350: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80100354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100358: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010035C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80100360: jr          $ra
    // 0x80100364: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80100364: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80100368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010036C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100370: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x80100374: jalr        $t9
    // 0x80100378: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80100378: nop

    after_0:
    // 0x8010037C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100384: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010038C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010038C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100394: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80100398: lh          $t7, 0x7E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X7E);
    // 0x8010039C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801003A0: bltzl       $t7, L_80100404
    if (SIGNED(ctx->r15) < 0) {
        // 0x801003A4: lw          $v0, 0x7C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X7C);
            goto L_80100404;
    }
    goto skip_0;
    // 0x801003A4: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    skip_0:
    // 0x801003A8: lbu         $t9, 0x7E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7E);
    // 0x801003AC: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    // 0x801003B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801003B4: ori         $t0, $t9, 0x80
    ctx->r8 = ctx->r25 | 0X80;
    // 0x801003B8: sb          $t0, 0x7E($a0)
    MEM_B(0X7E, ctx->r4) = ctx->r8;
    // 0x801003BC: jal         0x8010108C
    // 0x801003C0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8010108C(rdram, ctx);
        goto after_0;
    // 0x801003C0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x801003C4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801003C8: lw          $t1, 0x64($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X64);
    // 0x801003CC: sll         $t3, $t1, 14
    ctx->r11 = S32(ctx->r9 << 14);
    // 0x801003D0: bgezl       $t3, L_801003E4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801003D4: lw          $t4, 0x78($a3)
        ctx->r12 = MEM_W(ctx->r7, 0X78);
            goto L_801003E4;
    }
    goto skip_1;
    // 0x801003D4: lw          $t4, 0x78($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X78);
    skip_1:
    // 0x801003D8: b           L_80100464
    // 0x801003DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80100464;
    // 0x801003DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801003E0: lw          $t4, 0x78($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X78);
L_801003E4:
    // 0x801003E4: sll         $t6, $t4, 26
    ctx->r14 = S32(ctx->r12 << 26);
    // 0x801003E8: bgezl       $t6, L_80100404
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801003EC: lw          $v0, 0x7C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X7C);
            goto L_80100404;
    }
    goto skip_2;
    // 0x801003EC: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    skip_2:
    // 0x801003F0: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x801003F4: jal         0x80081D34
    // 0x801003F8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80081D34(rdram, ctx);
        goto after_1;
    // 0x801003F8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x801003FC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80100400: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
L_80100404:
    // 0x80100404: sll         $t8, $v0, 17
    ctx->r24 = S32(ctx->r2 << 17);
    // 0x80100408: bltzl       $t8, L_8010041C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8010040C: lhu         $v1, 0x7C($a3)
        ctx->r3 = MEM_HU(ctx->r7, 0X7C);
            goto L_8010041C;
    }
    goto skip_3;
    // 0x8010040C: lhu         $v1, 0x7C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X7C);
    skip_3:
    // 0x80100410: b           L_80100464
    // 0x80100414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80100464;
    // 0x80100414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80100418: lhu         $v1, 0x7C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X7C);
L_8010041C:
    // 0x8010041C: sll         $t0, $v0, 18
    ctx->r8 = S32(ctx->r2 << 18);
    // 0x80100420: bne         $v1, $zero, L_80100430
    if (ctx->r3 != 0) {
        // 0x80100424: nop
    
            goto L_80100430;
    }
    // 0x80100424: nop

    // 0x80100428: b           L_80100464
    // 0x8010042C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80100464;
    // 0x8010042C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80100430:
    // 0x80100430: bgez        $t0, L_80100448
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80100434: sll         $t2, $v0, 19
        ctx->r10 = S32(ctx->r2 << 19);
            goto L_80100448;
    }
    // 0x80100434: sll         $t2, $v0, 19
    ctx->r10 = S32(ctx->r2 << 19);
    // 0x80100438: bgezl       $t2, L_8010044C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8010043C: mtc1        $v1, $f4
        ctx->f4.u32l = ctx->r3;
            goto L_8010044C;
    }
    goto skip_4;
    // 0x8010043C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    skip_4:
    // 0x80100440: b           L_80100464
    // 0x80100444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80100464;
    // 0x80100444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80100448:
    // 0x80100448: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
L_8010044C:
    // 0x8010044C: addiu       $a0, $a3, 0x4
    ctx->r4 = ADD32(ctx->r7, 0X4);
    // 0x80100450: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80100454: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80100458: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010045C: jal         0x800EFFB4
    // 0x80100460: nop

    func_800EFFB4(rdram, ctx);
        goto after_2;
    // 0x80100460: nop

    after_2:
L_80100464:
    // 0x80100464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010046C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100480: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80100484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80100488: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8010048C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80100490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80100494: addiu       $t7, $t7, 0x43A0
    ctx->r15 = ADD32(ctx->r15, 0X43A0);
    // 0x80100498: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8010049C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x801004A0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801004A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801004A8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801004AC: bnel        $a2, $zero, L_801004DC
    if (ctx->r6 != 0) {
        // 0x801004B0: lh          $t0, 0x2($s0)
        ctx->r8 = MEM_H(ctx->r16, 0X2);
            goto L_801004DC;
    }
    goto skip_0;
    // 0x801004B0: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    skip_0:
    // 0x801004B4: sh          $a1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r5;
    // 0x801004B8: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x801004BC: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x801004C0: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801004C4: mflo        $a0
    ctx->r4 = lo;
    // 0x801004C8: jal         0x8001ACCC
    // 0x801004CC: nop

    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x801004CC: nop

    after_0:
    // 0x801004D0: b           L_8010050C
    // 0x801004D4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
        goto L_8010050C;
    // 0x801004D4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x801004D8: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
L_801004DC:
    // 0x801004DC: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801004E0: beq         $at, $zero, L_8010050C
    if (ctx->r1 == 0) {
        // 0x801004E4: nop
    
            goto L_8010050C;
    }
    // 0x801004E4: nop

    // 0x801004E8: sh          $a3, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r7;
    // 0x801004EC: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x801004F0: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x801004F4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801004F8: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801004FC: mflo        $a1
    ctx->r5 = lo;
    // 0x80100500: jal         0x8001B208
    // 0x80100504: nop

    func_8001B208(rdram, ctx);
        goto after_1;
    // 0x80100504: nop

    after_1:
    // 0x80100508: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
L_8010050C:
    // 0x8010050C: jal         0x8001211C
    // 0x80100510: nop

    func_8001211C(rdram, ctx);
        goto after_2;
    // 0x80100510: nop

    after_2:
    // 0x80100514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80100518: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8010051C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80100520: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100524: jr          $ra
    // 0x80100528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80100528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8010052C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010052C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80100538: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010053C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80100540: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80100544: jal         0x8001211C
    // 0x80100548: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x80100548: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8010054C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80100550: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80100554: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80100558: addiu       $s1, $s1, 0x43DC
    ctx->r17 = ADD32(ctx->r17, 0X43DC);
    // 0x8010055C: addiu       $s0, $s0, 0x43A0
    ctx->r16 = ADD32(ctx->r16, 0X43A0);
    // 0x80100560: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_80100564:
    // 0x80100564: beql        $a0, $zero, L_80100598
    if (ctx->r4 == 0) {
        // 0x80100568: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80100598;
    }
    goto skip_0;
    // 0x80100568: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x8010056C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80100570: subu        $t7, $s2, $t6
    ctx->r15 = SUB32(ctx->r18, ctx->r14);
    // 0x80100574: slti        $at, $t7, 0x1F
    ctx->r1 = SIGNED(ctx->r15) < 0X1F ? 1 : 0;
    // 0x80100578: bnel        $at, $zero, L_80100598
    if (ctx->r1 != 0) {
        // 0x8010057C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80100598;
    }
    goto skip_1;
    // 0x8010057C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_1:
    // 0x80100580: jal         0x8001B084
    // 0x80100584: nop

    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x80100584: nop

    after_1:
    // 0x80100588: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8010058C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80100590: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80100594: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80100598:
    // 0x80100598: bnel        $s0, $s1, L_80100564
    if (ctx->r16 != ctx->r17) {
        // 0x8010059C: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_80100564;
    }
    goto skip_2;
    // 0x8010059C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x801005A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801005A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801005A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801005AC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801005B0: jr          $ra
    // 0x801005B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x801005B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801005B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801005B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801005BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801005C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801005C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x801005C8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x801005CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801005D0: addiu       $s1, $s1, 0x43DC
    ctx->r17 = ADD32(ctx->r17, 0X43DC);
    // 0x801005D4: addiu       $s0, $s0, 0x43A0
    ctx->r16 = ADD32(ctx->r16, 0X43A0);
    // 0x801005D8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_801005DC:
    // 0x801005DC: beql        $a0, $zero, L_801005F4
    if (ctx->r4 == 0) {
        // 0x801005E0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_801005F4;
    }
    goto skip_0;
    // 0x801005E0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x801005E4: jal         0x8001BAFC
    // 0x801005E8: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x801005E8: nop

    after_0:
    // 0x801005EC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x801005F0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_801005F4:
    // 0x801005F4: bnel        $s0, $s1, L_801005DC
    if (ctx->r16 != ctx->r17) {
        // 0x801005F8: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_801005DC;
    }
    goto skip_1;
    // 0x801005F8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x801005FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80100600: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80100604: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80100608: jr          $ra
    // 0x8010060C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8010060C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80100610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80100614: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80100618: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8010061C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80100620: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80100624: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80100628: addiu       $s1, $s1, 0x43DC
    ctx->r17 = ADD32(ctx->r17, 0X43DC);
    // 0x8010062C: addiu       $s0, $s0, 0x43A0
    ctx->r16 = ADD32(ctx->r16, 0X43A0);
    // 0x80100630: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_80100634:
    // 0x80100634: beql        $a0, $zero, L_80100654
    if (ctx->r4 == 0) {
        // 0x80100638: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80100654;
    }
    goto skip_0;
    // 0x80100638: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x8010063C: jal         0x8001B084
    // 0x80100640: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x80100640: nop

    after_0:
    // 0x80100644: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80100648: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x8010064C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80100650: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80100654:
    // 0x80100654: bnel        $s0, $s1, L_80100634
    if (ctx->r16 != ctx->r17) {
        // 0x80100658: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_80100634;
    }
    goto skip_1;
    // 0x80100658: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x8010065C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80100660: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80100664: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80100668: jr          $ra
    // 0x8010066C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8010066C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80100670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100678: jal         0x80100610
    // 0x8010067C: nop

    func_80100610(rdram, ctx);
        goto after_0;
    // 0x8010067C: nop

    after_0:
    // 0x80100680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100688: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100690: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80100694: addiu       $a2, $a2, 0x5A60
    ctx->r6 = ADD32(ctx->r6, 0X5A60);
    // 0x80100698: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8010069C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801006A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801006A4: bne         $t6, $zero, L_801006C4
    if (ctx->r14 != 0) {
        // 0x801006A8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801006C4;
    }
    // 0x801006A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801006AC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x801006B0: jal         0x800B3268
    // 0x801006B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x801006B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x801006B8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x801006BC: addiu       $a2, $a2, 0x5A60
    ctx->r6 = ADD32(ctx->r6, 0X5A60);
    // 0x801006C0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_801006C4:
    // 0x801006C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801006C8: jal         0x800B3044
    // 0x801006CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800B3044(rdram, ctx);
        goto after_1;
    // 0x801006CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801006D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801006D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801006D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801006E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801006E0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x801006E4: lw          $t6, 0x5A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A64);
    // 0x801006E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801006EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801006F0: bne         $t6, $zero, L_8010070C
    if (ctx->r14 != 0) {
        // 0x801006F4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8010070C;
    }
    // 0x801006F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801006F8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x801006FC: jal         0x800B3268
    // 0x80100700: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x80100700: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80100704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100708: sw          $v0, 0x5A64($at)
    MEM_W(0X5A64, ctx->r1) = ctx->r2;
L_8010070C:
    // 0x8010070C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100710: addiu       $a0, $a0, 0x5A64
    ctx->r4 = ADD32(ctx->r4, 0X5A64);
    // 0x80100714: jal         0x800B3044
    // 0x80100718: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800B3044(rdram, ctx);
        goto after_1;
    // 0x80100718: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8010071C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100724: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010072C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010072C: beql        $a0, $zero, L_8010077C
    if (ctx->r4 == 0) {
        // 0x80100730: lbu         $t2, 0x0($a1)
        ctx->r10 = MEM_BU(ctx->r5, 0X0);
            goto L_8010077C;
    }
    goto skip_0;
    // 0x80100730: lbu         $t2, 0x0($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X0);
    skip_0:
    // 0x80100734: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80100738: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x8010073C: xor         $v0, $t6, $t7
    ctx->r2 = ctx->r14 ^ ctx->r15;
    // 0x80100740: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80100744: beq         $v0, $zero, L_801007B0
    if (ctx->r2 == 0) {
        // 0x80100748: nop
    
            goto L_801007B0;
    }
    // 0x80100748: nop

    // 0x8010074C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80100750: lbu         $t9, 0x1($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X1);
    // 0x80100754: xor         $v0, $t8, $t9
    ctx->r2 = ctx->r24 ^ ctx->r25;
    // 0x80100758: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8010075C: beq         $v0, $zero, L_801007B0
    if (ctx->r2 == 0) {
        // 0x80100760: nop
    
            goto L_801007B0;
    }
    // 0x80100760: nop

    // 0x80100764: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80100768: lbu         $t1, 0x2($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X2);
    // 0x8010076C: xor         $v0, $t0, $t1
    ctx->r2 = ctx->r8 ^ ctx->r9;
    // 0x80100770: jr          $ra
    // 0x80100774: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x80100774: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80100778: lbu         $t2, 0x0($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X0);
L_8010077C:
    // 0x8010077C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80100780: xor         $v0, $v1, $t2
    ctx->r2 = ctx->r3 ^ ctx->r10;
    // 0x80100784: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80100788: beq         $v0, $zero, L_801007B0
    if (ctx->r2 == 0) {
        // 0x8010078C: nop
    
            goto L_801007B0;
    }
    // 0x8010078C: nop

    // 0x80100790: lbu         $t3, 0x1($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X1);
    // 0x80100794: xor         $v0, $v1, $t3
    ctx->r2 = ctx->r3 ^ ctx->r11;
    // 0x80100798: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8010079C: beq         $v0, $zero, L_801007B0
    if (ctx->r2 == 0) {
        // 0x801007A0: nop
    
            goto L_801007B0;
    }
    // 0x801007A0: nop

    // 0x801007A4: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x801007A8: xor         $v0, $v1, $t4
    ctx->r2 = ctx->r3 ^ ctx->r12;
    // 0x801007AC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_801007B0:
    // 0x801007B0: jr          $ra
    // 0x801007B4: nop

    return;
    // 0x801007B4: nop

;}
RECOMP_FUNC void func_801007B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801007B8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801007BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801007C0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x801007C4: addiu       $s0, $s0, 0x5A60
    ctx->r16 = ADD32(ctx->r16, 0X5A60);
    // 0x801007C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801007CC: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x801007D0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801007D4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801007D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801007DC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x801007E0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x801007E4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x801007E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801007EC: beq         $s1, $zero, L_80100898
    if (ctx->r17 == 0) {
        // 0x801007F0: sw          $a0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r4;
            goto L_80100898;
    }
    // 0x801007F0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801007F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801007F8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x801007FC: jal         0x800B3034
    // 0x80100800: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800B3034(rdram, ctx);
        goto after_0;
    // 0x80100800: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80100804: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80100808: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8010080C: beq         $at, $zero, L_80100898
    if (ctx->r1 == 0) {
        // 0x80100810: nop
    
            goto L_80100898;
    }
    // 0x80100810: nop

    // 0x80100814: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_80100818:
    // 0x80100818: jal         0x800B31B8
    // 0x8010081C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800B31B8(rdram, ctx);
        goto after_1;
    // 0x8010081C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x80100820: beq         $v0, $zero, L_80100874
    if (ctx->r2 == 0) {
        // 0x80100824: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_80100874;
    }
    // 0x80100824: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80100828: jal         0x800B301C
    // 0x8010082C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_800B301C(rdram, ctx);
        goto after_2;
    // 0x8010082C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_2:
    // 0x80100830: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80100834: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80100838: bnel        $s4, $t8, L_80100878
    if (ctx->r20 != ctx->r24) {
        // 0x8010083C: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_80100878;
    }
    goto skip_0;
    // 0x8010083C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x80100840: lh          $t9, 0x6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6);
    // 0x80100844: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80100848: bnel        $s2, $t9, L_80100878
    if (ctx->r18 != ctx->r25) {
        // 0x8010084C: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_80100878;
    }
    goto skip_1;
    // 0x8010084C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x80100850: jal         0x8010072C
    // 0x80100854: addiu       $a1, $v0, 0x9
    ctx->r5 = ADD32(ctx->r2, 0X9);
    func_8010072C(rdram, ctx);
        goto after_3;
    // 0x80100854: addiu       $a1, $v0, 0x9
    ctx->r5 = ADD32(ctx->r2, 0X9);
    after_3:
    // 0x80100858: beql        $v0, $zero, L_80100878
    if (ctx->r2 == 0) {
        // 0x8010085C: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_80100878;
    }
    goto skip_2;
    // 0x8010085C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x80100860: lbu         $t0, 0x8($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X8);
    // 0x80100864: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80100868: sb          $t1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r9;
    // 0x8010086C: b           L_80100918
    // 0x80100870: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
        goto L_80100918;
    // 0x80100870: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_80100874:
    // 0x80100874: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
L_80100878:
    // 0x80100878: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8010087C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80100880: jal         0x800B3034
    // 0x80100884: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_800B3034(rdram, ctx);
        goto after_4;
    // 0x80100884: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_4:
    // 0x80100888: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8010088C: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80100890: bnel        $at, $zero, L_80100818
    if (ctx->r1 != 0) {
        // 0x80100894: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_80100818;
    }
    goto skip_3;
    // 0x80100894: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_3:
L_80100898:
    // 0x80100898: jal         0x801006E0
    // 0x8010089C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_801006E0(rdram, ctx);
        goto after_5;
    // 0x8010089C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x801008A0: beq         $s2, $zero, L_801008B8
    if (ctx->r18 == 0) {
        // 0x801008A4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801008B8;
    }
    // 0x801008A4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801008A8: jal         0x800D674C
    // 0x801008AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800D674C(rdram, ctx);
        goto after_6;
    // 0x801008AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x801008B0: b           L_801008BC
    // 0x801008B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801008BC;
    // 0x801008B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801008B8:
    // 0x801008B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801008BC:
    // 0x801008BC: jal         0x800B2840
    // 0x801008C0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_800B2840(rdram, ctx);
        goto after_7;
    // 0x801008C0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_7:
    // 0x801008C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801008C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801008CC: jal         0x80088798
    // 0x801008D0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    _glpackvtx_entrypoint_0(rdram, ctx);
        goto after_8;
    // 0x801008D0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_8:
    // 0x801008D4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801008D8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x801008DC: sh          $s4, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r20;
    // 0x801008E0: sh          $s2, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r18;
    // 0x801008E4: beq         $s3, $zero, L_80100900
    if (ctx->r19 == 0) {
        // 0x801008E8: sb          $t5, 0x8($s1)
        MEM_B(0X8, ctx->r17) = ctx->r13;
            goto L_80100900;
    }
    // 0x801008E8: sb          $t5, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r13;
    // 0x801008EC: addiu       $a0, $s1, 0x9
    ctx->r4 = ADD32(ctx->r17, 0X9);
    // 0x801008F0: jal         0x800F2F20
    // 0x801008F4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800F2F20(rdram, ctx);
        goto after_9;
    // 0x801008F4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x801008F8: b           L_80100918
    // 0x801008FC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
        goto L_80100918;
    // 0x801008FC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_80100900:
    // 0x80100900: addiu       $a0, $s1, 0x9
    ctx->r4 = ADD32(ctx->r17, 0X9);
    // 0x80100904: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80100908: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8010090C: jal         0x800F31EC
    // 0x80100910: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_800F31EC(rdram, ctx);
        goto after_10;
    // 0x80100910: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_10:
    // 0x80100914: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_80100918:
    // 0x80100918: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8010091C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100920: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80100924: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80100928: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010092C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80100930: jr          $ra
    // 0x80100934: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80100934: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80100938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010093C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80100940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100944: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100948: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    // 0x8010094C: jal         0x800B301C
    // 0x80100950: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80100950: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x80100954: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80100958: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8010095C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80100960: bne         $t8, $zero, L_801009B4
    if (ctx->r24 != 0) {
        // 0x80100964: sb          $t7, 0x8($v0)
        MEM_B(0X8, ctx->r2) = ctx->r15;
            goto L_801009B4;
    }
    // 0x80100964: sb          $t7, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r15;
    // 0x80100968: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8010096C: jal         0x800887A0
    // 0x80100970: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _glpackvtx_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80100970: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80100974: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80100978: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010097C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80100980: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x80100984: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80100988: jal         0x800B32C0
    // 0x8010098C: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    func_800B32C0(rdram, ctx);
        goto after_2;
    // 0x8010098C: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    after_2:
    // 0x80100990: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100994: jal         0x800B3204
    // 0x80100998: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    func_800B3204(rdram, ctx);
        goto after_3;
    // 0x80100998: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    after_3:
    // 0x8010099C: bne         $v0, $zero, L_801009B4
    if (ctx->r2 != 0) {
        // 0x801009A0: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_801009B4;
    }
    // 0x801009A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801009A4: jal         0x800B3248
    // 0x801009A8: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    func_800B3248(rdram, ctx);
        goto after_4;
    // 0x801009A8: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    after_4:
    // 0x801009AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801009B0: sw          $zero, 0x5A64($at)
    MEM_W(0X5A64, ctx->r1) = 0;
L_801009B4:
    // 0x801009B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801009B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801009BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801009C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801009C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801009C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801009CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801009D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801009D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801009D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801009DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801009E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801009E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801009E8: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_801009EC:
    // 0x801009EC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x801009F0: beql        $a0, $zero, L_80100A04
    if (ctx->r4 == 0) {
        // 0x801009F4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80100A04;
    }
    goto skip_0;
    // 0x801009F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x801009F8: jal         0x800B23E0
    // 0x801009FC: nop

    func_800B23E0(rdram, ctx);
        goto after_0;
    // 0x801009FC: nop

    after_0:
    // 0x80100A00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80100A04:
    // 0x80100A04: bne         $s0, $s2, L_801009EC
    if (ctx->r16 != ctx->r18) {
        // 0x80100A08: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_801009EC;
    }
    // 0x80100A08: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80100A0C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80100A10: lbu         $v0, 0x8($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X8);
    // 0x80100A14: beql        $v0, $zero, L_80100A28
    if (ctx->r2 == 0) {
        // 0x80100A18: lw          $t7, 0x28($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X28);
            goto L_80100A28;
    }
    goto skip_1;
    // 0x80100A18: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x80100A1C: jal         0x80100938
    // 0x80100A20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80100938(rdram, ctx);
        goto after_1;
    // 0x80100A20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80100A24: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
L_80100A28:
    // 0x80100A28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80100A2C: addiu       $s0, $s0, 0x5A60
    ctx->r16 = ADD32(ctx->r16, 0X5A60);
    // 0x80100A30: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    // 0x80100A34: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80100A38: jal         0x800B32C0
    // 0x80100A3C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B32C0(rdram, ctx);
        goto after_2;
    // 0x80100A3C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x80100A40: jal         0x800B3204
    // 0x80100A44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B3204(rdram, ctx);
        goto after_3;
    // 0x80100A44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x80100A48: bnel        $v0, $zero, L_80100A60
    if (ctx->r2 != 0) {
        // 0x80100A4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80100A60;
    }
    goto skip_2;
    // 0x80100A4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80100A50: jal         0x800B3248
    // 0x80100A54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B3248(rdram, ctx);
        goto after_4;
    // 0x80100A54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_4:
    // 0x80100A58: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80100A5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80100A60:
    // 0x80100A60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100A64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80100A68: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80100A6C: jr          $ra
    // 0x80100A70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80100A70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80100A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80100A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100A80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80100A84: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100A88: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x80100A8C: jal         0x800B301C
    // 0x80100A90: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80100A90: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    after_0:
    // 0x80100A94: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80100A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100A9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80100AA0: beq         $t6, $zero, L_80100AB8
    if (ctx->r14 == 0) {
        // 0x80100AA4: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_80100AB8;
    }
    // 0x80100AA4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80100AA8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80100AAC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80100AB0: b           L_80100AB8
    // 0x80100AB4: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
        goto L_80100AB8;
    // 0x80100AB4: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
L_80100AB8:
    // 0x80100AB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80100ABC: jr          $ra
    // 0x80100AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80100AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80100AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100AC8: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x80100ACC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80100AD0: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80100AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100AD8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100ADC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80100AE0: jal         0x800B301C
    // 0x80100AE4: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80100AE4: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    after_0:
    // 0x80100AE8: lbu         $t7, 0x8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8);
    // 0x80100AEC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80100AF0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100AF4: bne         $t7, $zero, L_80100B04
    if (ctx->r15 != 0) {
        // 0x80100AF8: nop
    
            goto L_80100B04;
    }
    // 0x80100AF8: nop

    // 0x80100AFC: b           L_80100B2C
    // 0x80100B00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80100B2C;
    // 0x80100B00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80100B04:
    // 0x80100B04: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    // 0x80100B08: jal         0x800B301C
    // 0x80100B0C: lbu         $a1, 0x8($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X8);
    func_800B301C(rdram, ctx);
        goto after_1;
    // 0x80100B0C: lbu         $a1, 0x8($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X8);
    after_1:
    // 0x80100B10: lbu         $t8, 0x8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8);
    // 0x80100B14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80100B18: beq         $t8, $zero, L_80100B28
    if (ctx->r24 == 0) {
        // 0x80100B1C: nop
    
            goto L_80100B28;
    }
    // 0x80100B1C: nop

    // 0x80100B20: b           L_80100B28
    // 0x80100B24: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
        goto L_80100B28;
    // 0x80100B24: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
L_80100B28:
    // 0x80100B28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80100B2C:
    // 0x80100B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100B34: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100B3C: addiu       $t6, $zero, 0x3667
    ctx->r14 = ADD32(0, 0X3667);
    // 0x80100B40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100B44: jr          $ra
    // 0x80100B48: sw          $t6, 0x5A68($at)
    MEM_W(0X5A68, ctx->r1) = ctx->r14;
    return;
    // 0x80100B48: sw          $t6, 0x5A68($at)
    MEM_W(0X5A68, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80100B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80100B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80100B54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80100B58: jal         0x80100C74
    // 0x80100B5C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80100C74(rdram, ctx);
        goto after_0;
    // 0x80100B5C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80100B60: jal         0x80100C74
    // 0x80100B64: nop

    func_80100C74(rdram, ctx);
        goto after_1;
    // 0x80100B64: nop

    after_1:
    // 0x80100B68: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x80100B6C: addiu       $s1, $s1, 0x5A60
    ctx->r17 = ADD32(ctx->r17, 0X5A60);
    // 0x80100B70: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80100B74: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80100B78: beql        $a0, $zero, L_80100BE4
    if (ctx->r4 == 0) {
        // 0x80100B7C: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_80100BE4;
    }
    goto skip_0;
    // 0x80100B7C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x80100B80: jal         0x800B3034
    // 0x80100B84: nop

    func_800B3034(rdram, ctx);
        goto after_2;
    // 0x80100B84: nop

    after_2:
    // 0x80100B88: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80100B8C: bnel        $at, $zero, L_80100BE4
    if (ctx->r1 != 0) {
        // 0x80100B90: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_80100BE4;
    }
    goto skip_1;
    // 0x80100B90: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x80100B94: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_80100B98:
    // 0x80100B98: jal         0x800B31B8
    // 0x80100B9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_3;
    // 0x80100B9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80100BA0: beq         $v0, $zero, L_80100BBC
    if (ctx->r2 == 0) {
        // 0x80100BA4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80100BBC;
    }
    // 0x80100BA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80100BA8: jal         0x800B301C
    // 0x80100BAC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800B301C(rdram, ctx);
        goto after_4;
    // 0x80100BAC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_4:
    // 0x80100BB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80100BB4: jal         0x801009C4
    // 0x80100BB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801009C4(rdram, ctx);
        goto after_5;
    // 0x80100BB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_80100BBC:
    // 0x80100BBC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80100BC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80100BC4: beql        $a0, $zero, L_80100BE4
    if (ctx->r4 == 0) {
        // 0x80100BC8: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_80100BE4;
    }
    goto skip_2;
    // 0x80100BC8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x80100BCC: jal         0x800B3034
    // 0x80100BD0: nop

    func_800B3034(rdram, ctx);
        goto after_6;
    // 0x80100BD0: nop

    after_6:
    // 0x80100BD4: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80100BD8: bnel        $at, $zero, L_80100B98
    if (ctx->r1 != 0) {
        // 0x80100BDC: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_80100B98;
    }
    goto skip_3;
    // 0x80100BDC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x80100BE0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_80100BE4:
    // 0x80100BE4: beql        $a0, $zero, L_80100BFC
    if (ctx->r4 == 0) {
        // 0x80100BE8: lw          $a0, 0x4($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X4);
            goto L_80100BFC;
    }
    goto skip_4;
    // 0x80100BE8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    skip_4:
    // 0x80100BEC: jal         0x800B3248
    // 0x80100BF0: nop

    func_800B3248(rdram, ctx);
        goto after_7;
    // 0x80100BF0: nop

    after_7:
    // 0x80100BF4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80100BF8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
L_80100BFC:
    // 0x80100BFC: beql        $a0, $zero, L_80100C64
    if (ctx->r4 == 0) {
        // 0x80100C00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80100C64;
    }
    goto skip_5;
    // 0x80100C00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x80100C04: jal         0x800B3034
    // 0x80100C08: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_800B3034(rdram, ctx);
        goto after_8;
    // 0x80100C08: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_8:
    // 0x80100C0C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80100C10: bne         $at, $zero, L_80100C54
    if (ctx->r1 != 0) {
        // 0x80100C14: nop
    
            goto L_80100C54;
    }
    // 0x80100C14: nop

    // 0x80100C18: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
L_80100C1C:
    // 0x80100C1C: jal         0x800B31B8
    // 0x80100C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_9;
    // 0x80100C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80100C24: beq         $v0, $zero, L_80100C3C
    if (ctx->r2 == 0) {
        // 0x80100C28: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80100C3C;
    }
    // 0x80100C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80100C2C: jal         0x800B301C
    // 0x80100C30: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_800B301C(rdram, ctx);
        goto after_10;
    // 0x80100C30: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_10:
    // 0x80100C34: jal         0x800887A0
    // 0x80100C38: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    _glpackvtx_entrypoint_1(rdram, ctx);
        goto after_11;
    // 0x80100C38: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_11:
L_80100C3C:
    // 0x80100C3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80100C40: jal         0x800B3034
    // 0x80100C44: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_800B3034(rdram, ctx);
        goto after_12;
    // 0x80100C44: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_12:
    // 0x80100C48: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80100C4C: bnel        $at, $zero, L_80100C1C
    if (ctx->r1 != 0) {
        // 0x80100C50: lw          $a0, 0x4($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X4);
            goto L_80100C1C;
    }
    goto skip_6;
    // 0x80100C50: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    skip_6:
L_80100C54:
    // 0x80100C54: jal         0x800B3248
    // 0x80100C58: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_800B3248(rdram, ctx);
        goto after_13;
    // 0x80100C58: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_13:
    // 0x80100C5C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80100C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80100C64:
    // 0x80100C64: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80100C68: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80100C6C: jr          $ra
    // 0x80100C70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80100C70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80100C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100C74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80100C78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80100C7C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x80100C80: addiu       $s1, $s1, 0x5A60
    ctx->r17 = ADD32(ctx->r17, 0X5A60);
    // 0x80100C84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80100C88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80100C8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80100C90: beq         $a0, $zero, L_80100D10
    if (ctx->r4 == 0) {
        // 0x80100C94: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80100D10;
    }
    // 0x80100C94: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80100C98: jal         0x800B3034
    // 0x80100C9C: nop

    func_800B3034(rdram, ctx);
        goto after_0;
    // 0x80100C9C: nop

    after_0:
    // 0x80100CA0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80100CA4: bnel        $at, $zero, L_80100D14
    if (ctx->r1 != 0) {
        // 0x80100CA8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80100D14;
    }
    goto skip_0;
    // 0x80100CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80100CAC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_80100CB0:
    // 0x80100CB0: jal         0x800B31B8
    // 0x80100CB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_1;
    // 0x80100CB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80100CB8: beq         $v0, $zero, L_80100CEC
    if (ctx->r2 == 0) {
        // 0x80100CBC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80100CEC;
    }
    // 0x80100CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80100CC0: jal         0x800B301C
    // 0x80100CC4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800B301C(rdram, ctx);
        goto after_2;
    // 0x80100CC4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x80100CC8: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80100CCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80100CD0: beq         $v1, $zero, L_80100CEC
    if (ctx->r3 == 0) {
        // 0x80100CD4: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_80100CEC;
    }
    // 0x80100CD4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80100CD8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80100CDC: bne         $t7, $zero, L_80100CEC
    if (ctx->r15 != 0) {
        // 0x80100CE0: sb          $t6, 0xA($v0)
        MEM_B(0XA, ctx->r2) = ctx->r14;
            goto L_80100CEC;
    }
    // 0x80100CE0: sb          $t6, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r14;
    // 0x80100CE4: jal         0x801009C4
    // 0x80100CE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801009C4(rdram, ctx);
        goto after_3;
    // 0x80100CE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_80100CEC:
    // 0x80100CEC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80100CF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80100CF4: beql        $a0, $zero, L_80100D14
    if (ctx->r4 == 0) {
        // 0x80100CF8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80100D14;
    }
    goto skip_1;
    // 0x80100CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80100CFC: jal         0x800B3034
    // 0x80100D00: nop

    func_800B3034(rdram, ctx);
        goto after_4;
    // 0x80100D00: nop

    after_4:
    // 0x80100D04: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80100D08: bnel        $at, $zero, L_80100CB0
    if (ctx->r1 != 0) {
        // 0x80100D0C: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_80100CB0;
    }
    goto skip_2;
    // 0x80100D0C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_2:
L_80100D10:
    // 0x80100D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80100D14:
    // 0x80100D14: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80100D18: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80100D1C: jr          $ra
    // 0x80100D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80100D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80100D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100D24: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80100D28: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80100D2C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80100D30: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80100D34: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80100D38: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80100D3C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80100D40: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80100D44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80100D48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80100D4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80100D50: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80100D54: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80100D58: jal         0x80100690
    // 0x80100D5C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_80100690(rdram, ctx);
        goto after_0;
    // 0x80100D5C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x80100D60: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80100D64: jal         0x800B2840
    // 0x80100D68: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800B2840(rdram, ctx);
        goto after_1;
    // 0x80100D68: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80100D6C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80100D70: sll         $s5, $s4, 2
    ctx->r21 = S32(ctx->r20 << 2);
    // 0x80100D74: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80100D78: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    // 0x80100D7C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_80100D80:
    // 0x80100D80: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80100D84: beq         $at, $zero, L_80100DA8
    if (ctx->r1 == 0) {
        // 0x80100D88: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80100DA8;
    }
    // 0x80100D88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80100D8C: jal         0x800B2400
    // 0x80100D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800B2400(rdram, ctx);
        goto after_2;
    // 0x80100D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80100D94: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80100D98: lbu         $t7, 0x17($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X17);
    // 0x80100D9C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80100DA0: b           L_80100DAC
    // 0x80100DA4: sb          $t8, 0x17($v0)
    MEM_B(0X17, ctx->r2) = ctx->r24;
        goto L_80100DAC;
    // 0x80100DA4: sb          $t8, 0x17($v0)
    MEM_B(0X17, ctx->r2) = ctx->r24;
L_80100DA8:
    // 0x80100DA8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80100DAC:
    // 0x80100DAC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80100DB0: bne         $s0, $s2, L_80100D80
    if (ctx->r16 != ctx->r18) {
        // 0x80100DB4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80100D80;
    }
    // 0x80100DB4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80100DB8: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80100DBC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80100DC0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80100DC4: beq         $t9, $zero, L_80100DDC
    if (ctx->r25 == 0) {
        // 0x80100DC8: lw          $a2, 0x68($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X68);
            goto L_80100DDC;
    }
    // 0x80100DC8: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80100DCC: jal         0x801007B8
    // 0x80100DD0: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    func_801007B8(rdram, ctx);
        goto after_3;
    // 0x80100DD0: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    after_3:
    // 0x80100DD4: b           L_80100DE0
    // 0x80100DD8: sb          $v0, 0x8($s6)
    MEM_B(0X8, ctx->r22) = ctx->r2;
        goto L_80100DE0;
    // 0x80100DD8: sb          $v0, 0x8($s6)
    MEM_B(0X8, ctx->r22) = ctx->r2;
L_80100DDC:
    // 0x80100DDC: sb          $zero, 0x8($s6)
    MEM_B(0X8, ctx->r22) = 0;
L_80100DE0:
    // 0x80100DE0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80100DE4: sb          $t0, 0x9($s6)
    MEM_B(0X9, ctx->r22) = ctx->r8;
    // 0x80100DE8: sb          $zero, 0xA($s6)
    MEM_B(0XA, ctx->r22) = 0;
    // 0x80100DEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80100DF0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80100DF4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80100DF8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80100DFC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80100E00: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80100E04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80100E08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100E0C: lh          $v0, 0x52($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X52);
    // 0x80100E10: jr          $ra
    // 0x80100E14: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80100E14: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80100E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80100E1C: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x80100E20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80100E24: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80100E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100E2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100E30: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80100E34: jal         0x800B301C
    // 0x80100E38: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80100E38: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    after_0:
    // 0x80100E3C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80100E40: sb          $t7, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r15;
    // 0x80100E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100E4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80100E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100E54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80100E58: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80100E5C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80100E60: addiu       $s2, $s2, 0x5A60
    ctx->r18 = ADD32(ctx->r18, 0X5A60);
    // 0x80100E64: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80100E68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80100E6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80100E70: beq         $a0, $zero, L_80100E84
    if (ctx->r4 == 0) {
        // 0x80100E74: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80100E84;
    }
    // 0x80100E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80100E78: jal         0x800B32E4
    // 0x80100E7C: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x80100E7C: nop

    after_0:
    // 0x80100E80: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_80100E84:
    // 0x80100E84: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80100E88: beql        $a0, $zero, L_80100EF8
    if (ctx->r4 == 0) {
        // 0x80100E8C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80100EF8;
    }
    goto skip_0;
    // 0x80100E8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80100E90: jal         0x800B3034
    // 0x80100E94: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_800B3034(rdram, ctx);
        goto after_1;
    // 0x80100E94: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_1:
    // 0x80100E98: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80100E9C: bne         $at, $zero, L_80100EE8
    if (ctx->r1 != 0) {
        // 0x80100EA0: nop
    
            goto L_80100EE8;
    }
    // 0x80100EA0: nop

    // 0x80100EA4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
L_80100EA8:
    // 0x80100EA8: jal         0x800B31B8
    // 0x80100EAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_2;
    // 0x80100EAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80100EB0: beq         $v0, $zero, L_80100ED0
    if (ctx->r2 == 0) {
        // 0x80100EB4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80100ED0;
    }
    // 0x80100EB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80100EB8: jal         0x800B301C
    // 0x80100EBC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_800B301C(rdram, ctx);
        goto after_3;
    // 0x80100EBC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_3:
    // 0x80100EC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80100EC4: jal         0x8001BAFC
    // 0x80100EC8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    defrag(rdram, ctx);
        goto after_4;
    // 0x80100EC8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_4:
    // 0x80100ECC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_80100ED0:
    // 0x80100ED0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80100ED4: jal         0x800B3034
    // 0x80100ED8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_800B3034(rdram, ctx);
        goto after_5;
    // 0x80100ED8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_5:
    // 0x80100EDC: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80100EE0: bnel        $at, $zero, L_80100EA8
    if (ctx->r1 != 0) {
        // 0x80100EE4: lw          $a0, 0x4($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X4);
            goto L_80100EA8;
    }
    goto skip_1;
    // 0x80100EE4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    skip_1:
L_80100EE8:
    // 0x80100EE8: jal         0x800B32E4
    // 0x80100EEC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_800B32E4(rdram, ctx);
        goto after_6;
    // 0x80100EEC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_6:
    // 0x80100EF0: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x80100EF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80100EF8:
    // 0x80100EF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100EFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80100F00: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80100F04: jr          $ra
    // 0x80100F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80100F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80100F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100F0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80100F10: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80100F14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80100F18: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80100F1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100F20: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x80100F24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80100F28: jal         0x800B301C
    // 0x80100F2C: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80100F2C: lw          $a0, 0x5A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A60);
    after_0:
    // 0x80100F30: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80100F34: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80100F38: beq         $t6, $zero, L_80100FF4
    if (ctx->r14 == 0) {
        // 0x80100F3C: andi        $a1, $t6, 0xFF
        ctx->r5 = ctx->r14 & 0XFF;
            goto L_80100FF4;
    }
    // 0x80100F3C: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x80100F40: lw          $a0, 0x5A64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A64);
    // 0x80100F44: jal         0x800B301C
    // 0x80100F48: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_800B301C(rdram, ctx);
        goto after_1;
    // 0x80100F48: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x80100F4C: lbu         $t7, 0x8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8);
    // 0x80100F50: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80100F54: beql        $t7, $zero, L_80100FF8
    if (ctx->r15 == 0) {
        // 0x80100F58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80100FF8;
    }
    goto skip_0;
    // 0x80100F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80100F5C: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80100F60: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80100F64: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80100F68: lh          $t9, 0x6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6);
    // 0x80100F6C: slti        $at, $t9, 0x3666
    ctx->r1 = SIGNED(ctx->r25) < 0X3666 ? 1 : 0;
    // 0x80100F70: beq         $at, $zero, L_80100F9C
    if (ctx->r1 == 0) {
        // 0x80100F74: nop
    
            goto L_80100F9C;
    }
    // 0x80100F74: nop

    // 0x80100F78: jal         0x80100938
    // 0x80100F7C: lbu         $a0, 0x8($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X8);
    func_80100938(rdram, ctx);
        goto after_2;
    // 0x80100F7C: lbu         $a0, 0x8($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X8);
    after_2:
    // 0x80100F80: jal         0x801006E0
    // 0x80100F84: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_801006E0(rdram, ctx);
        goto after_3;
    // 0x80100F84: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80100F88: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80100F8C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80100F90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80100F94: b           L_80100FA4
    // 0x80100F98: sb          $t1, 0x8($t2)
    MEM_B(0X8, ctx->r10) = ctx->r9;
        goto L_80100FA4;
    // 0x80100F98: sb          $t1, 0x8($t2)
    MEM_B(0X8, ctx->r10) = ctx->r9;
L_80100F9C:
    // 0x80100F9C: jal         0x800887A0
    // 0x80100FA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    _glpackvtx_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80100FA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_4:
L_80100FA4:
    // 0x80100FA4: jal         0x800D674C
    // 0x80100FA8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800D674C(rdram, ctx);
        goto after_5;
    // 0x80100FA8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x80100FAC: jal         0x800B2840
    // 0x80100FB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2840(rdram, ctx);
        goto after_6;
    // 0x80100FB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x80100FB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80100FB8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80100FBC: jal         0x80088798
    // 0x80100FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _glpackvtx_entrypoint_0(rdram, ctx);
        goto after_7;
    // 0x80100FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80100FC4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80100FC8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80100FCC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80100FD0: addiu       $v1, $v1, 0x5A60
    ctx->r3 = ADD32(ctx->r3, 0X5A60);
    // 0x80100FD4: sh          $t3, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r11;
    // 0x80100FD8: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x80100FDC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80100FE0: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x80100FE4: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x80100FE8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80100FEC: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
    // 0x80100FF0: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_80100FF4:
    // 0x80100FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80100FF8:
    // 0x80100FF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80100FFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80101000: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101014: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80101018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010101C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80101020: jal         0x800EE7F8
    // 0x80101024: addiu       $a0, $a0, 0x5A70
    ctx->r4 = ADD32(ctx->r4, 0X5A70);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80101024: addiu       $a0, $a0, 0x5A70
    ctx->r4 = ADD32(ctx->r4, 0X5A70);
    after_0:
    // 0x80101028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010102C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101030: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010103C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101040: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80101044: jal         0x800EE7F8
    // 0x80101048: addiu       $a1, $a1, 0x5A70
    ctx->r5 = ADD32(ctx->r5, 0X5A70);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80101048: addiu       $a1, $a1, 0x5A70
    ctx->r5 = ADD32(ctx->r5, 0X5A70);
    after_0:
    // 0x8010104C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101054: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010105C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010105C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80101060: jr          $ra
    // 0x80101064: swc1        $f12, 0x5A7C($at)
    MEM_W(0X5A7C, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x80101064: swc1        $f12, 0x5A7C($at)
    MEM_W(0X5A7C, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80101068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101068: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010106C: jr          $ra
    // 0x80101070: lwc1        $f0, 0x5A7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A7C);
    return;
    // 0x80101070: lwc1        $f0, 0x5A7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A7C);
;}
RECOMP_FUNC void func_80101074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101074: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80101078: jr          $ra
    // 0x8010107C: sw          $a0, 0x5A80($at)
    MEM_W(0X5A80, ctx->r1) = ctx->r4;
    return;
    // 0x8010107C: sw          $a0, 0x5A80($at)
    MEM_W(0X5A80, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80101080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101080: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80101084: jr          $ra
    // 0x80101088: lw          $v0, 0x5A80($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5A80);
    return;
    // 0x80101088: lw          $v0, 0x5A80($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5A80);
;}
RECOMP_FUNC void func_8010108C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010108C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80101090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80101094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80101098: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8010109C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801010A0: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x801010A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801010A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801010AC: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x801010B0: bgez        $t8, L_80101138
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801010B4: nop
    
            goto L_80101138;
    }
    // 0x801010B4: nop

    // 0x801010B8: jal         0x80081D34
    // 0x801010BC: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    func_80081D34(rdram, ctx);
        goto after_0;
    // 0x801010BC: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    after_0:
    // 0x801010C0: beq         $v0, $zero, L_801010D8
    if (ctx->r2 == 0) {
        // 0x801010C4: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_801010D8;
    }
    // 0x801010C4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801010C8: jal         0x80081D80
    // 0x801010CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80081D80(rdram, ctx);
        goto after_1;
    // 0x801010CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801010D0: b           L_801010DC
    // 0x801010D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801010DC;
    // 0x801010D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801010D8:
    // 0x801010D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801010DC:
    // 0x801010DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801010E0: jal         0x80100368
    // 0x801010E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80100368(rdram, ctx);
        goto after_2;
    // 0x801010E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x801010E8: lw          $t9, 0x40($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X40);
    // 0x801010EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801010F0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801010F4: jalr        $t9
    // 0x801010F8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801010F8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x801010FC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80101100: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80101104: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80101108: beq         $t0, $zero, L_80101130
    if (ctx->r8 == 0) {
        // 0x8010110C: nop
    
            goto L_80101130;
    }
    // 0x8010110C: nop

    // 0x80101110: bne         $v1, $zero, L_80101130
    if (ctx->r3 != 0) {
        // 0x80101114: nop
    
            goto L_80101130;
    }
    // 0x80101114: nop

    // 0x80101118: bgtz        $v0, L_80101130
    if (SIGNED(ctx->r2) > 0) {
        // 0x8010111C: nop
    
            goto L_80101130;
    }
    // 0x8010111C: nop

    // 0x80101120: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80101124: jal         0x800819B4
    // 0x80101128: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_800819B4(rdram, ctx);
        goto after_4;
    // 0x80101128: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_4:
    // 0x8010112C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
L_80101130:
    // 0x80101130: b           L_80101138
    // 0x80101134: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80101138;
    // 0x80101134: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80101138:
    // 0x80101138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010113C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80101140: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80101144: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010114C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101154: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80101158: jal         0x80106790
    // 0x8010115C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x8010115C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80101160: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101164: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80101168: jal         0x8010108C
    // 0x8010116C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_8010108C(rdram, ctx);
        goto after_1;
    // 0x8010116C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80101170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101178: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101180: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80101184: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80101188: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010118C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80101190: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x80101194: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80101198: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010119C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801011A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801011A4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801011A8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x801011AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801011B0: jal         0x801067C4
    // 0x801011B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x801011B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x801011B8: beq         $v0, $zero, L_80101214
    if (ctx->r2 == 0) {
        // 0x801011BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101214;
    }
    // 0x801011BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_801011C0:
    // 0x801011C0: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x801011C4: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x801011C8: bltz        $t8, L_80101204
    if (SIGNED(ctx->r24) < 0) {
        // 0x801011CC: nop
    
            goto L_80101204;
    }
    // 0x801011CC: nop

    // 0x801011D0: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x801011D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801011D8: sll         $t0, $t9, 11
    ctx->r8 = S32(ctx->r25 << 11);
    // 0x801011DC: srl         $t1, $t0, 20
    ctx->r9 = S32(U32(ctx->r8) >> 20);
    // 0x801011E0: bne         $s1, $t1, L_80101204
    if (ctx->r17 != ctx->r9) {
        // 0x801011E4: nop
    
            goto L_80101204;
    }
    // 0x801011E4: nop

    // 0x801011E8: jal         0x8010108C
    // 0x801011EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8010108C(rdram, ctx);
        goto after_1;
    // 0x801011EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x801011F0: blez        $v0, L_80101204
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801011F4: nop
    
            goto L_80101204;
    }
    // 0x801011F4: nop

    // 0x801011F8: bne         $s0, $zero, L_80101204
    if (ctx->r16 != 0) {
        // 0x801011FC: nop
    
            goto L_80101204;
    }
    // 0x801011FC: nop

    // 0x80101200: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80101204:
    // 0x80101204: jal         0x8010682C
    // 0x80101208: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8010682C(rdram, ctx);
        goto after_2;
    // 0x80101208: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x8010120C: bne         $v0, $zero, L_801011C0
    if (ctx->r2 != 0) {
        // 0x80101210: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801011C0;
    }
    // 0x80101210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80101214:
    // 0x80101214: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80101218: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8010121C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80101220: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80101224: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80101228: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010122C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80101230: jr          $ra
    // 0x80101234: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80101234: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80101238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101238: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8010123C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80101240: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80101244: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80101248: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x8010124C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80101250: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80101254: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80101258: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8010125C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80101260: jal         0x801067C4
    // 0x80101264: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x80101264: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x80101268: beq         $v0, $zero, L_801012B0
    if (ctx->r2 == 0) {
        // 0x8010126C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801012B0;
    }
    // 0x8010126C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80101270:
    // 0x80101270: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x80101274: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80101278: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x8010127C: bltz        $t8, L_801012A0
    if (SIGNED(ctx->r24) < 0) {
        // 0x80101280: nop
    
            goto L_801012A0;
    }
    // 0x80101280: nop

    // 0x80101284: jal         0x8010108C
    // 0x80101288: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8010108C(rdram, ctx);
        goto after_1;
    // 0x80101288: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x8010128C: blez        $v0, L_801012A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80101290: nop
    
            goto L_801012A0;
    }
    // 0x80101290: nop

    // 0x80101294: bne         $s0, $zero, L_801012A0
    if (ctx->r16 != 0) {
        // 0x80101298: nop
    
            goto L_801012A0;
    }
    // 0x80101298: nop

    // 0x8010129C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801012A0:
    // 0x801012A0: jal         0x8010682C
    // 0x801012A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8010682C(rdram, ctx);
        goto after_2;
    // 0x801012A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x801012A8: bne         $v0, $zero, L_80101270
    if (ctx->r2 != 0) {
        // 0x801012AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101270;
    }
    // 0x801012AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_801012B0:
    // 0x801012B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801012B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801012B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801012BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801012C0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801012C4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801012C8: jr          $ra
    // 0x801012CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x801012CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801012D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801012D0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801012D4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801012D8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x801012DC: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x801012E0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801012E4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801012E8: addiu       $s5, $sp, 0x40
    ctx->r21 = ADD32(ctx->r29, 0X40);
    // 0x801012EC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801012F0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x801012F4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801012F8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801012FC: mul.s       $f20, $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80101300: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80101304: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x80101308: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010130C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80101310: jal         0x801067C4
    // 0x80101314: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x80101314: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x80101318: beq         $v0, $zero, L_8010137C
    if (ctx->r2 == 0) {
        // 0x8010131C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8010137C;
    }
    // 0x8010131C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80101320:
    // 0x80101320: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x80101324: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80101328: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x8010132C: bltz        $t8, L_8010136C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80101330: nop
    
            goto L_8010136C;
    }
    // 0x80101330: nop

    // 0x80101334: jal         0x800EEB40
    // 0x80101338: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EEB40(rdram, ctx);
        goto after_1;
    // 0x80101338: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x8010133C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80101340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101344: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80101348: bc1f        L_8010136C
    if (!c1cs) {
        // 0x8010134C: nop
    
            goto L_8010136C;
    }
    // 0x8010134C: nop

    // 0x80101350: jal         0x8010108C
    // 0x80101354: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8010108C(rdram, ctx);
        goto after_2;
    // 0x80101354: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80101358: blez        $v0, L_8010136C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010135C: nop
    
            goto L_8010136C;
    }
    // 0x8010135C: nop

    // 0x80101360: bne         $s1, $zero, L_8010136C
    if (ctx->r17 != 0) {
        // 0x80101364: nop
    
            goto L_8010136C;
    }
    // 0x80101364: nop

    // 0x80101368: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8010136C:
    // 0x8010136C: jal         0x8010682C
    // 0x80101370: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8010682C(rdram, ctx);
        goto after_3;
    // 0x80101370: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x80101374: bne         $v0, $zero, L_80101320
    if (ctx->r2 != 0) {
        // 0x80101378: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80101320;
    }
    // 0x80101378: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8010137C:
    // 0x8010137C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80101380: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80101384: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80101388: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8010138C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80101390: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80101394: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80101398: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8010139C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x801013A0: jr          $ra
    // 0x801013A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x801013A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801013A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801013A8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801013AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801013B0: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x801013B4: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x801013B8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x801013BC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x801013C0: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x801013C4: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x801013C8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x801013CC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x801013D0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801013D4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801013D8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801013DC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801013E0: jal         0x800BE3F8
    // 0x801013E4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_800BE3F8(rdram, ctx);
        goto after_0;
    // 0x801013E4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_0:
    // 0x801013E8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801013EC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x801013F0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801013F4: beq         $t6, $zero, L_80101488
    if (ctx->r14 == 0) {
        // 0x801013F8: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80101488;
    }
    // 0x801013F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801013FC: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
L_80101400:
    // 0x80101400: jal         0x800E9E88
    // 0x80101404: nop

    func_800E9E88(rdram, ctx);
        goto after_1;
    // 0x80101404: nop

    after_1:
    // 0x80101408: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010140C: jal         0x800E9EB4
    // 0x80101410: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_2;
    // 0x80101410: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    after_2:
    // 0x80101414: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80101418: beq         $at, $zero, L_80101474
    if (ctx->r1 == 0) {
        // 0x8010141C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80101474;
    }
    // 0x8010141C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80101420: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_80101424:
    // 0x80101424: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80101428: beql        $t8, $zero, L_80101468
    if (ctx->r24 == 0) {
        // 0x8010142C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101468;
    }
    goto skip_0;
    // 0x8010142C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x80101430: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80101434: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80101438: lhu         $t9, 0x18($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X18);
    // 0x8010143C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80101440: beql        $t0, $zero, L_80101468
    if (ctx->r8 == 0) {
        // 0x80101444: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101468;
    }
    goto skip_1;
    // 0x80101444: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_1:
    // 0x80101448: jal         0x8010114C
    // 0x8010144C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8010114C(rdram, ctx);
        goto after_3;
    // 0x8010144C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_3:
    // 0x80101450: blez        $v0, L_80101464
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80101454: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80101464;
    }
    // 0x80101454: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80101458: bnel        $s2, $zero, L_80101468
    if (ctx->r18 != 0) {
        // 0x8010145C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101468;
    }
    goto skip_2;
    // 0x8010145C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_2:
    // 0x80101460: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80101464:
    // 0x80101464: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80101468:
    // 0x80101468: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x8010146C: bnel        $at, $zero, L_80101424
    if (ctx->r1 != 0) {
        // 0x80101470: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_80101424;
    }
    goto skip_3;
    // 0x80101470: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_3:
L_80101474:
    // 0x80101474: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
    // 0x80101478: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8010147C: bne         $a0, $zero, L_80101400
    if (ctx->r4 != 0) {
        // 0x80101480: nop
    
            goto L_80101400;
    }
    // 0x80101480: nop

    // 0x80101484: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
L_80101488:
    // 0x80101488: jal         0x800BDC44
    // 0x8010148C: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    func_800BDC44(rdram, ctx);
        goto after_4;
    // 0x8010148C: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    after_4:
    // 0x80101490: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80101494: jal         0x800E9E88
    // 0x80101498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800E9E88(rdram, ctx);
        goto after_5;
    // 0x80101498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x8010149C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801014A0: jal         0x800E9EB4
    // 0x801014A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_6;
    // 0x801014A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801014A8: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x801014AC: beq         $at, $zero, L_80101574
    if (ctx->r1 == 0) {
        // 0x801014B0: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_80101574;
    }
    // 0x801014B0: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x801014B4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801014B8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801014BC: nop

    // 0x801014C0: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
L_801014C4:
    // 0x801014C4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x801014C8: beql        $t2, $zero, L_80101568
    if (ctx->r10 == 0) {
        // 0x801014CC: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101568;
    }
    goto skip_4;
    // 0x801014CC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_4:
    // 0x801014D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801014D4: lhu         $t3, 0x18($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X18);
    // 0x801014D8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x801014DC: beql        $t4, $zero, L_80101568
    if (ctx->r12 == 0) {
        // 0x801014E0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101568;
    }
    goto skip_5;
    // 0x801014E0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_5:
    // 0x801014E4: jal         0x80106790
    // 0x801014E8: nop

    func_80106790(rdram, ctx);
        goto after_7;
    // 0x801014E8: nop

    after_7:
    // 0x801014EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801014F0: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x801014F4: jal         0x800EEB40
    // 0x801014F8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800EEB40(rdram, ctx);
        goto after_8;
    // 0x801014F8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_8:
    // 0x801014FC: jal         0x800BDC5C
    // 0x80101500: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800BDC5C(rdram, ctx);
        goto after_9;
    // 0x80101500: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_9:
    // 0x80101504: jal         0x800BDC5C
    // 0x80101508: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    func_800BDC5C(rdram, ctx);
        goto after_10;
    // 0x80101508: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    after_10:
    // 0x8010150C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80101510: mtc1        $s6, $f10
    ctx->f10.u32l = ctx->r22;
    // 0x80101514: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80101518: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010151C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80101520: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80101524: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80101528: nop

    // 0x8010152C: mul.s       $f18, $f22, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80101530: nop

    // 0x80101534: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80101538: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x8010153C: nop

    // 0x80101540: bc1f        L_80101564
    if (!c1cs) {
        // 0x80101544: nop
    
            goto L_80101564;
    }
    // 0x80101544: nop

    // 0x80101548: jal         0x8010108C
    // 0x8010154C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8010108C(rdram, ctx);
        goto after_11;
    // 0x8010154C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_11:
    // 0x80101550: blezl       $s3, L_80101568
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80101554: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101568;
    }
    goto skip_6;
    // 0x80101554: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_6:
    // 0x80101558: bnel        $s2, $zero, L_80101568
    if (ctx->r18 != 0) {
        // 0x8010155C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80101568;
    }
    goto skip_7;
    // 0x8010155C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_7:
    // 0x80101560: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_80101564:
    // 0x80101564: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80101568:
    // 0x80101568: sltu        $at, $s0, $s7
    ctx->r1 = ctx->r16 < ctx->r23 ? 1 : 0;
    // 0x8010156C: bnel        $at, $zero, L_801014C4
    if (ctx->r1 != 0) {
        // 0x80101570: lw          $t1, 0x8($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X8);
            goto L_801014C4;
    }
    goto skip_8;
    // 0x80101570: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    skip_8:
L_80101574:
    // 0x80101574: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80101578: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8010157C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80101580: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80101584: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80101588: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8010158C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80101590: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80101594: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80101598: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8010159C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x801015A0: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x801015A4: jr          $ra
    // 0x801015A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x801015A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801015B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801015B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x801015B4: jr          $ra
    // 0x801015B8: addiu       $v0, $v0, 0x5A90
    ctx->r2 = ADD32(ctx->r2, 0X5A90);
    return;
    // 0x801015B8: addiu       $v0, $v0, 0x5A90
    ctx->r2 = ADD32(ctx->r2, 0X5A90);
;}
RECOMP_FUNC void func_801015BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801015BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801015C0: jr          $ra
    // 0x801015C4: sh          $zero, 0x5A94($at)
    MEM_H(0X5A94, ctx->r1) = 0;
    return;
    // 0x801015C4: sh          $zero, 0x5A94($at)
    MEM_H(0X5A94, ctx->r1) = 0;
;}
RECOMP_FUNC void func_801015C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801015C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801015D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801015D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801015D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801015D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801015DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801015E0: jal         0x801039E4
    // 0x801015E4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_801039E4(rdram, ctx);
        goto after_0;
    // 0x801015E4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x801015E8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x801015EC: jal         0x80103D48
    // 0x801015F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103D48(rdram, ctx);
        goto after_1;
    // 0x801015F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801015F4: jal         0x80104248
    // 0x801015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104248(rdram, ctx);
        goto after_2;
    // 0x801015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801015FC: beq         $v0, $zero, L_80101638
    if (ctx->r2 == 0) {
        // 0x80101600: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101638;
    }
    // 0x80101600: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101604: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x80101608: sll         $t8, $t6, 19
    ctx->r24 = S32(ctx->r14 << 19);
    // 0x8010160C: bltz        $t8, L_80101620
    if (SIGNED(ctx->r24) < 0) {
        // 0x80101610: nop
    
            goto L_80101620;
    }
    // 0x80101610: nop

    // 0x80101614: jal         0x8008B304
    // 0x80101618: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8008B304(rdram, ctx);
        goto after_3;
    // 0x80101618: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8010161C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_80101620:
    // 0x80101620: jal         0x8008AEDC
    // 0x80101624: nop

    func_8008AEDC(rdram, ctx);
        goto after_4;
    // 0x80101624: nop

    after_4:
    // 0x80101628: jal         0x8008C27C
    // 0x8010162C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008C27C(rdram, ctx);
        goto after_5;
    // 0x8010162C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80101630: jal         0x800DF41C
    // 0x80101634: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_6;
    // 0x80101634: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
L_80101638:
    // 0x80101638: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8010163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101640: jal         0x80089828
    // 0x80101644: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    _suexpression_entrypoint_20(rdram, ctx);
        goto after_7;
    // 0x80101644: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    after_7:
    // 0x80101648: beq         $v0, $zero, L_8010165C
    if (ctx->r2 == 0) {
        // 0x8010164C: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_8010165C;
    }
    // 0x8010164C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80101650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101654: jal         0x80089820
    // 0x80101658: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _suexpression_entrypoint_19(rdram, ctx);
        goto after_8;
    // 0x80101658: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_8010165C:
    // 0x8010165C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80101660: lh          $t1, 0x10($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X10);
    // 0x80101664: beql        $t1, $zero, L_8010170C
    if (ctx->r9 == 0) {
        // 0x80101668: lw          $t8, 0x34($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X34);
            goto L_8010170C;
    }
    goto skip_0;
    // 0x80101668: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8010166C: jal         0x80104248
    // 0x80101670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104248(rdram, ctx);
        goto after_9;
    // 0x80101670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80101674: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80101678: jal         0x800B27E0
    // 0x8010167C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800B27E0(rdram, ctx);
        goto after_10;
    // 0x8010167C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_10:
    // 0x80101680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101684: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    // 0x80101688: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8010168C: jal         0x8010108C
    // 0x80101690: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8010108C(rdram, ctx);
        goto after_11;
    // 0x80101690: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_11:
    // 0x80101694: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80101698: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8010169C: beq         $a0, $zero, L_801016F4
    if (ctx->r4 == 0) {
        // 0x801016A0: nop
    
            goto L_801016F4;
    }
    // 0x801016A0: nop

    // 0x801016A4: beql        $a3, $zero, L_8010170C
    if (ctx->r7 == 0) {
        // 0x801016A8: lw          $t8, 0x34($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X34);
            goto L_8010170C;
    }
    goto skip_1;
    // 0x801016A8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x801016AC: lw          $t2, 0x7C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X7C);
    // 0x801016B0: sll         $t4, $t2, 19
    ctx->r12 = S32(ctx->r10 << 19);
    // 0x801016B4: bltzl       $t4, L_801016DC
    if (SIGNED(ctx->r12) < 0) {
        // 0x801016B8: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_801016DC;
    }
    goto skip_2;
    // 0x801016B8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_2:
    // 0x801016BC: jal         0x8008AEDC
    // 0x801016C0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_8008AEDC(rdram, ctx);
        goto after_12;
    // 0x801016C0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_12:
    // 0x801016C4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x801016C8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801016CC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x801016D0: jal         0x8008C200
    // 0x801016D4: lh          $a0, 0x10($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X10);
    func_8008C200(rdram, ctx);
        goto after_13;
    // 0x801016D4: lh          $a0, 0x10($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X10);
    after_13:
    // 0x801016D8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_801016DC:
    // 0x801016DC: jal         0x800AE080
    // 0x801016E0: lh          $a0, 0x10($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X10);
    func_800AE080(rdram, ctx);
        goto after_14;
    // 0x801016E0: lh          $a0, 0x10($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X10);
    after_14:
    // 0x801016E4: jal         0x800DF72C
    // 0x801016E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF72C(rdram, ctx);
        goto after_15;
    // 0x801016E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x801016EC: b           L_8010170C
    // 0x801016F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
        goto L_8010170C;
    // 0x801016F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
L_801016F4:
    // 0x801016F4: beq         $a3, $zero, L_80101708
    if (ctx->r7 == 0) {
        // 0x801016F8: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_80101708;
    }
    // 0x801016F8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x801016FC: lh          $a0, 0x10($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X10);
    // 0x80101700: jal         0x800ADD80
    // 0x80101704: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800ADD80(rdram, ctx);
        goto after_16;
    // 0x80101704: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_16:
L_80101708:
    // 0x80101708: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
L_8010170C:
    // 0x8010170C: beq         $t8, $zero, L_8010171C
    if (ctx->r24 == 0) {
        // 0x80101710: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_8010171C;
    }
    // 0x80101710: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80101714: jal         0x800897E0
    // 0x80101718: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _suexpression_entrypoint_11(rdram, ctx);
        goto after_17;
    // 0x80101718: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_17:
L_8010171C:
    // 0x8010171C: jal         0x800DF410
    // 0x80101720: lbu         $a0, 0x9B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9B);
    func_800DF410(rdram, ctx);
        goto after_18;
    // 0x80101720: lbu         $a0, 0x9B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9B);
    after_18:
    // 0x80101724: lhu         $a0, 0x7A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7A);
    // 0x80101728: srl         $t9, $a0, 14
    ctx->r25 = S32(U32(ctx->r4) >> 14);
    // 0x8010172C: jal         0x800DF830
    // 0x80101730: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800DF830(rdram, ctx);
        goto after_19;
    // 0x80101730: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_19:
    // 0x80101734: jal         0x8008A0F0
    // 0x80101738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddieskeleton_entrypoint_4(rdram, ctx);
        goto after_20;
    // 0x80101738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8010173C: jal         0x800DF738
    // 0x80101740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF738(rdram, ctx);
        goto after_21;
    // 0x80101740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x80101744: lbu         $t0, 0x70($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X70);
    // 0x80101748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010174C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80101750: bne         $t1, $zero, L_80101768
    if (ctx->r9 != 0) {
        // 0x80101754: nop
    
            goto L_80101768;
    }
    // 0x80101754: nop

    // 0x80101758: lw          $t2, 0x70($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X70);
    // 0x8010175C: sll         $t4, $t2, 10
    ctx->r12 = S32(ctx->r10 << 10);
    // 0x80101760: bgezl       $t4, L_8010177C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80101764: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010177C;
    }
    goto skip_3;
    // 0x80101764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
L_80101768:
    // 0x80101768: jal         0x80103CDC
    // 0x8010176C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80103CDC(rdram, ctx);
        goto after_22;
    // 0x8010176C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_22:
    // 0x80101770: jal         0x800DF818
    // 0x80101774: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_23;
    // 0x80101774: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_23:
    // 0x80101778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8010177C:
    // 0x8010177C: jal         0x80106A98
    // 0x80101780: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80106A98(rdram, ctx);
        goto after_24;
    // 0x80101780: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_24:
    // 0x80101784: jal         0x80101934
    // 0x80101788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80101934(rdram, ctx);
        goto after_25;
    // 0x80101788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8010178C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80101790: jal         0x800D731C
    // 0x80101794: lhu         $a0, 0x14($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X14);
    func_800D731C(rdram, ctx);
        goto after_26;
    // 0x80101794: lhu         $a0, 0x14($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X14);
    after_26:
    // 0x80101798: beq         $v0, $zero, L_801017A8
    if (ctx->r2 == 0) {
        // 0x8010179C: andi        $a0, $v0, 0xFF
        ctx->r4 = ctx->r2 & 0XFF;
            goto L_801017A8;
    }
    // 0x8010179C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x801017A0: jal         0x800DF7E8
    // 0x801017A4: nop

    func_800DF7E8(rdram, ctx);
        goto after_27;
    // 0x801017A4: nop

    after_27:
L_801017A8:
    // 0x801017A8: jal         0x80103D70
    // 0x801017AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103D70(rdram, ctx);
        goto after_28;
    // 0x801017AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x801017B0: lbu         $t7, 0x7E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X7E);
    // 0x801017B4: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x801017B8: sb          $t8, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r24;
    // 0x801017BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801017C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801017C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801017C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801017D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801017D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801017D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801017D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801017DC: jal         0x801039E4
    // 0x801017E0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_801039E4(rdram, ctx);
        goto after_0;
    // 0x801017E0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x801017E4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x801017E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801017EC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x801017F0: jal         0x8010108C
    // 0x801017F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8010108C(rdram, ctx);
        goto after_1;
    // 0x801017F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x801017F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801017FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80101800: jr          $ra
    // 0x80101804: nop

    return;
    // 0x80101804: nop

;}
RECOMP_FUNC void func_80101808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101808: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8010180C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80101810: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80101814: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80101818: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8010181C: jal         0x800DF47C
    // 0x80101820: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800DF47C(rdram, ctx);
        goto after_0;
    // 0x80101820: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80101824: jal         0x801027F4
    // 0x80101828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801027F4(rdram, ctx);
        goto after_1;
    // 0x80101828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010182C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80101830: jal         0x801018D8
    // 0x80101834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801018D8(rdram, ctx);
        goto after_2;
    // 0x80101834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80101838: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8010183C: jal         0x8010347C
    // 0x80101840: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_8010347C(rdram, ctx);
        goto after_3;
    // 0x80101840: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x80101844: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x80101848: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8010184C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80101850: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80101854: jal         0x800DE448
    // 0x80101858: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_800DE448(rdram, ctx);
        goto after_4;
    // 0x80101858: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x8010185C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80101860: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80101864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80101868: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010187C: jal         0x80101970
    // 0x80101880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80101970(rdram, ctx);
        goto after_0;
    // 0x80101880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101884: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x80101888: addiu       $a1, $a1, 0x15D0
    ctx->r5 = ADD32(ctx->r5, 0X15D0);
    // 0x8010188C: jal         0x80101808
    // 0x80101890: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80101808(rdram, ctx);
        goto after_1;
    // 0x80101890: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80101894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010189C: jr          $ra
    return;
;}
RECOMP_FUNC void func_801018A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801018A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801018A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801018AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801018B0: jal         0x80101970
    // 0x801018B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80101970(rdram, ctx);
        goto after_0;
    // 0x801018B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801018B8: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x801018BC: addiu       $a1, $a1, 0x17D0
    ctx->r5 = ADD32(ctx->r5, 0X17D0);
    // 0x801018C0: jal         0x80101808
    // 0x801018C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80101808(rdram, ctx);
        goto after_1;
    // 0x801018C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801018C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801018CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801018D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801018D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801018D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801018DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801018E0: lhu         $t6, 0x94($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X94);
    // 0x801018E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801018E8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801018EC: beq         $t7, $zero, L_80101904
    if (ctx->r15 == 0) {
        // 0x801018F0: nop
    
            goto L_80101904;
    }
    // 0x801018F0: nop

    // 0x801018F4: jal         0x80101918
    // 0x801018F8: lwc1        $f12, 0x38($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X38);
    func_80101918(rdram, ctx);
        goto after_0;
    // 0x801018F8: lwc1        $f12, 0x38($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X38);
    after_0:
    // 0x801018FC: b           L_80101904
    // 0x80101900: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80101904;
    // 0x80101900: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80101904:
    // 0x80101904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010190C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80101910: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101918: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x8010191C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80101920: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80101924: addiu       $v0, $v1, 0x43E0
    ctx->r2 = ADD32(ctx->r3, 0X43E0);
    // 0x80101928: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8010192C: jr          $ra
    // 0x80101930: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x80101930: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80101934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010193C: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x80101940: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80101944: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x80101948: beq         $t6, $zero, L_80101960
    if (ctx->r14 == 0) {
        // 0x8010194C: sll         $t7, $t6, 2
        ctx->r15 = S32(ctx->r14 << 2);
            goto L_80101960;
    }
    // 0x8010194C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80101950: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80101954: lw          $t9, 0x43E8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X43E8);
    // 0x80101958: jalr        $t9
    // 0x8010195C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8010195C: nop

    after_0:
L_80101960:
    // 0x80101960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101968: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101978: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010197C: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    // 0x80101980: sll         $t7, $a0, 11
    ctx->r15 = S32(ctx->r4 << 11);
    // 0x80101984: jal         0x800DF470
    // 0x80101988: srl         $a0, $t7, 31
    ctx->r4 = S32(U32(ctx->r15) >> 31);
    func_800DF470(rdram, ctx);
        goto after_0;
    // 0x80101988: srl         $a0, $t7, 31
    ctx->r4 = S32(U32(ctx->r15) >> 31);
    after_0:
    // 0x8010198C: jal         0x80100368
    // 0x80101990: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80100368(rdram, ctx);
        goto after_1;
    // 0x80101990: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80101994: lhu         $t9, 0x1A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X1A);
    // 0x80101998: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8010199C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801019A0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801019A4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x801019A8: bgez        $t9, L_801019BC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801019AC: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801019BC;
    }
    // 0x801019AC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801019B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801019B4: nop

    // 0x801019B8: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_801019BC:
    // 0x801019BC: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x801019C0: nop

    // 0x801019C4: bc1tl       L_801019E0
    if (c1cs) {
        // 0x801019C8: lw          $t1, 0x0($t0)
        ctx->r9 = MEM_W(ctx->r8, 0X0);
            goto L_801019E0;
    }
    goto skip_0;
    // 0x801019C8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    skip_0:
    // 0x801019CC: jal         0x800DF428
    // 0x801019D0: nop

    func_800DF428(rdram, ctx);
        goto after_2;
    // 0x801019D0: nop

    after_2:
    // 0x801019D4: b           L_80101A28
    // 0x801019D8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
        goto L_80101A28;
    // 0x801019D8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x801019DC: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
L_801019E0:
    // 0x801019E0: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x801019E4: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x801019E8: bnel        $t3, $zero, L_80101A28
    if (ctx->r11 != 0) {
        // 0x801019EC: lw          $t4, 0x18($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X18);
            goto L_80101A28;
    }
    goto skip_1;
    // 0x801019EC: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x801019F0: jal         0x800EA068
    // 0x801019F4: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_800EA068(rdram, ctx);
        goto after_3;
    // 0x801019F4: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_3:
    // 0x801019F8: beq         $v0, $zero, L_80101A08
    if (ctx->r2 == 0) {
        // 0x801019FC: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80101A08;
    }
    // 0x801019FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80101A00: b           L_80101A1C
    // 0x80101A04: lwc1        $f12, 0x6430($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6430);
        goto L_80101A1C;
    // 0x80101A04: lwc1        $f12, 0x6430($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6430);
L_80101A08:
    // 0x80101A08: jal         0x800D2F20
    // 0x80101A0C: nop

    func_800D2F20(rdram, ctx);
        goto after_4;
    // 0x80101A0C: nop

    after_4:
    // 0x80101A10: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80101A14: nop

    // 0x80101A18: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
L_80101A1C:
    // 0x80101A1C: jal         0x800DF428
    // 0x80101A20: nop

    func_800DF428(rdram, ctx);
        goto after_5;
    // 0x80101A20: nop

    after_5:
    // 0x80101A24: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
L_80101A28:
    // 0x80101A28: lw          $t5, 0x94($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X94);
    // 0x80101A2C: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80101A30: bgezl       $t7, L_80101A44
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80101A34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80101A44;
    }
    goto skip_2;
    // 0x80101A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80101A38: jal         0x800DF440
    // 0x80101A3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF440(rdram, ctx);
        goto after_6;
    // 0x80101A3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80101A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80101A44:
    // 0x80101A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101A48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101A58: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80101A5C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80101A60: sll         $t8, $t6, 19
    ctx->r24 = S32(ctx->r14 << 19);
    // 0x80101A64: bltzl       $t8, L_80101B5C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80101A68: lw          $a1, 0x78($a2)
        ctx->r5 = MEM_W(ctx->r6, 0X78);
            goto L_80101B5C;
    }
    goto skip_0;
    // 0x80101A68: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
    skip_0:
    // 0x80101A6C: lw          $v1, 0x78($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X78);
    // 0x80101A70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80101A74: sll         $v0, $v1, 18
    ctx->r2 = S32(ctx->r3 << 18);
    // 0x80101A78: srl         $t9, $v0, 30
    ctx->r25 = S32(U32(ctx->r2) >> 30);
    // 0x80101A7C: beq         $t9, $zero, L_80101AA0
    if (ctx->r25 == 0) {
        // 0x80101A80: nop
    
            goto L_80101AA0;
    }
    // 0x80101A80: nop

    // 0x80101A84: beq         $t9, $at, L_80101AD8
    if (ctx->r25 == ctx->r1) {
        // 0x80101A88: sll         $v0, $v1, 20
        ctx->r2 = S32(ctx->r3 << 20);
            goto L_80101AD8;
    }
    // 0x80101A88: sll         $v0, $v1, 20
    ctx->r2 = S32(ctx->r3 << 20);
    // 0x80101A8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80101A90: beq         $t9, $at, L_80101B1C
    if (ctx->r25 == ctx->r1) {
        // 0x80101A94: sll         $t3, $v1, 20
        ctx->r11 = S32(ctx->r3 << 20);
            goto L_80101B1C;
    }
    // 0x80101A94: sll         $t3, $v1, 20
    ctx->r11 = S32(ctx->r3 << 20);
    // 0x80101A98: b           L_80101B5C
    // 0x80101A9C: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
        goto L_80101B5C;
    // 0x80101A9C: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
L_80101AA0:
    // 0x80101AA0: jal         0x800DC0C0
    // 0x80101AA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x80101AA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80101AA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80101AAC: lwc1        $f4, 0x6434($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6434);
    // 0x80101AB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80101AB4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80101AB8: nop

    // 0x80101ABC: bc1fl       L_80101B5C
    if (!c1cs) {
        // 0x80101AC0: lw          $a1, 0x78($a2)
        ctx->r5 = MEM_W(ctx->r6, 0X78);
            goto L_80101B5C;
    }
    goto skip_1;
    // 0x80101AC0: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
    skip_1:
    // 0x80101AC4: lbu         $t0, 0x7A($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X7A);
    // 0x80101AC8: andi        $t1, $t0, 0xFFCF
    ctx->r9 = ctx->r8 & 0XFFCF;
    // 0x80101ACC: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x80101AD0: b           L_80101B58
    // 0x80101AD4: sb          $t2, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r10;
        goto L_80101B58;
    // 0x80101AD4: sb          $t2, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r10;
L_80101AD8:
    // 0x80101AD8: srl         $t3, $v0, 29
    ctx->r11 = S32(U32(ctx->r2) >> 29);
    // 0x80101ADC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80101AE0: bne         $t3, $at, L_80101AFC
    if (ctx->r11 != ctx->r1) {
        // 0x80101AE4: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_80101AFC;
    }
    // 0x80101AE4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80101AE8: lbu         $t4, 0x7A($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X7A);
    // 0x80101AEC: andi        $t5, $t4, 0xFFCF
    ctx->r13 = ctx->r12 & 0XFFCF;
    // 0x80101AF0: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x80101AF4: b           L_80101B58
    // 0x80101AF8: sb          $t6, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r14;
        goto L_80101B58;
    // 0x80101AF8: sb          $t6, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r14;
L_80101AFC:
    // 0x80101AFC: lbu         $t0, 0x7A($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X7A);
    // 0x80101B00: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80101B04: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80101B08: andi        $t9, $t8, 0xE
    ctx->r25 = ctx->r24 & 0XE;
    // 0x80101B0C: andi        $t1, $t0, 0xFFF1
    ctx->r9 = ctx->r8 & 0XFFF1;
    // 0x80101B10: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80101B14: b           L_80101B58
    // 0x80101B18: sb          $t2, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r10;
        goto L_80101B58;
    // 0x80101B18: sb          $t2, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r10;
L_80101B1C:
    // 0x80101B1C: lbu         $t8, 0x7A($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X7A);
    // 0x80101B20: srl         $t4, $t3, 29
    ctx->r12 = S32(U32(ctx->r11) >> 29);
    // 0x80101B24: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80101B28: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80101B2C: andi        $t7, $t6, 0xE
    ctx->r15 = ctx->r14 & 0XE;
    // 0x80101B30: andi        $t0, $t8, 0xFFF1
    ctx->r8 = ctx->r24 & 0XFFF1;
    // 0x80101B34: or          $t9, $t7, $t0
    ctx->r25 = ctx->r15 | ctx->r8;
    // 0x80101B38: sb          $t9, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r25;
    // 0x80101B3C: lw          $t1, 0x78($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X78);
    // 0x80101B40: andi        $t5, $t9, 0xCF
    ctx->r13 = ctx->r25 & 0XCF;
    // 0x80101B44: sll         $t2, $t1, 20
    ctx->r10 = S32(ctx->r9 << 20);
    // 0x80101B48: srl         $t3, $t2, 29
    ctx->r11 = S32(U32(ctx->r10) >> 29);
    // 0x80101B4C: bnel        $t3, $zero, L_80101B5C
    if (ctx->r11 != 0) {
        // 0x80101B50: lw          $a1, 0x78($a2)
        ctx->r5 = MEM_W(ctx->r6, 0X78);
            goto L_80101B5C;
    }
    goto skip_2;
    // 0x80101B50: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
    skip_2:
    // 0x80101B54: sb          $t5, 0x7A($a2)
    MEM_B(0X7A, ctx->r6) = ctx->r13;
L_80101B58:
    // 0x80101B58: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
L_80101B5C:
    // 0x80101B5C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80101B60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80101B64: sll         $t6, $a1, 20
    ctx->r14 = S32(ctx->r5 << 20);
    // 0x80101B68: srl         $t8, $t6, 29
    ctx->r24 = S32(U32(ctx->r14) >> 29);
    // 0x80101B6C: jal         0x800DF744
    // 0x80101B70: addiu       $a1, $t8, 0x1
    ctx->r5 = ADD32(ctx->r24, 0X1);
    func_800DF744(rdram, ctx);
        goto after_1;
    // 0x80101B70: addiu       $a1, $t8, 0x1
    ctx->r5 = ADD32(ctx->r24, 0X1);
    after_1:
    // 0x80101B74: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80101B78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80101B7C: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
    // 0x80101B80: sll         $t7, $a1, 20
    ctx->r15 = S32(ctx->r5 << 20);
    // 0x80101B84: srl         $t0, $t7, 29
    ctx->r8 = S32(U32(ctx->r15) >> 29);
    // 0x80101B88: jal         0x800DF744
    // 0x80101B8C: addiu       $a1, $t0, 0x1
    ctx->r5 = ADD32(ctx->r8, 0X1);
    func_800DF744(rdram, ctx);
        goto after_2;
    // 0x80101B8C: addiu       $a1, $t0, 0x1
    ctx->r5 = ADD32(ctx->r8, 0X1);
    after_2:
    // 0x80101B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101B98: jr          $ra
    // 0x80101B9C: nop

    return;
    // 0x80101B9C: nop

;}
RECOMP_FUNC void func_80101BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101BA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80101BAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80101BB0: jal         0x800DF744
    // 0x80101BB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800DF744(rdram, ctx);
        goto after_0;
    // 0x80101BB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80101BB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80101BBC: jal         0x800DF744
    // 0x80101BC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800DF744(rdram, ctx);
        goto after_1;
    // 0x80101BC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80101BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101BCC: jr          $ra
    // 0x80101BD0: nop

    return;
    // 0x80101BD0: nop

;}
RECOMP_FUNC void func_80101BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101BE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80101BE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80101BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80101BEC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80101BF0: jal         0x80102394
    // 0x80101BF4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80102394(rdram, ctx);
        goto after_0;
    // 0x80101BF4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80101BF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80101BFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80101C00: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80101C04: lbu         $t9, 0x72($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X72);
    // 0x80101C08: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x80101C0C: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x80101C10: andi        $t0, $t9, 0xFF03
    ctx->r8 = ctx->r25 & 0XFF03;
    // 0x80101C14: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x80101C18: bne         $v0, $zero, L_80101C28
    if (ctx->r2 != 0) {
        // 0x80101C1C: sb          $t1, 0x72($a0)
        MEM_B(0X72, ctx->r4) = ctx->r9;
            goto L_80101C28;
    }
    // 0x80101C1C: sb          $t1, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r9;
    // 0x80101C20: b           L_80101CC8
    // 0x80101C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80101CC8;
    // 0x80101C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80101C28:
    // 0x80101C28: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x80101C2C: beq         $t3, $zero, L_80101CBC
    if (ctx->r11 == 0) {
        // 0x80101C30: nop
    
            goto L_80101CBC;
    }
    // 0x80101C30: nop

    // 0x80101C34: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80101C38: jal         0x80104248
    // 0x80101C3C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80104248(rdram, ctx);
        goto after_1;
    // 0x80101C3C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x80101C40: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80101C44: bne         $v0, $zero, L_80101C60
    if (ctx->r2 != 0) {
        // 0x80101C48: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80101C60;
    }
    // 0x80101C48: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80101C4C: jal         0x801042B8
    // 0x80101C50: nop

    func_801042B8(rdram, ctx);
        goto after_2;
    // 0x80101C50: nop

    after_2:
    // 0x80101C54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80101C58: jal         0x8008AF24
    // 0x80101C5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x80101C5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
L_80101C60:
    // 0x80101C60: jal         0x8008B284
    // 0x80101C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B284(rdram, ctx);
        goto after_4;
    // 0x80101C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80101C68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80101C6C: bne         $v0, $at, L_80101C7C
    if (ctx->r2 != ctx->r1) {
        // 0x80101C70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80101C7C;
    }
    // 0x80101C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101C74: jal         0x8008B134
    // 0x80101C78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80101C78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_80101C7C:
    // 0x80101C7C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80101C80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80101C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101C88: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80101C8C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80101C90: jal         0x8008AED4
    // 0x80101C94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8008AED4(rdram, ctx);
        goto after_6;
    // 0x80101C94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_6:
    // 0x80101C98: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80101C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101CA0: jal         0x8008B1BC
    // 0x80101CA4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x80101CA4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_7:
    // 0x80101CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80101CAC: jal         0x8008B188
    // 0x80101CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B188(rdram, ctx);
        goto after_8;
    // 0x80101CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80101CB4: b           L_80101CC8
    // 0x80101CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80101CC8;
    // 0x80101CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80101CBC:
    // 0x80101CBC: jal         0x80104328
    // 0x80101CC0: nop

    func_80104328(rdram, ctx);
        goto after_9;
    // 0x80101CC0: nop

    after_9:
    // 0x80101CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80101CC8:
    // 0x80101CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80101CCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80101CD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80101CD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101CE4: jal         0x80104248
    // 0x80101CE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101CE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101CEC: beq         $v0, $zero, L_80101CFC
    if (ctx->r2 == 0) {
        // 0x80101CF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101CFC;
    }
    // 0x80101CF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101CF4: jal         0x8008B1BC
    // 0x80101CF8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B1BC(rdram, ctx);
        goto after_1;
    // 0x80101CF8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80101CFC:
    // 0x80101CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101D04: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101D14: jal         0x80104248
    // 0x80101D18: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101D18: nop

    after_0:
    // 0x80101D1C: beq         $v0, $zero, L_80101D34
    if (ctx->r2 == 0) {
        // 0x80101D20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101D34;
    }
    // 0x80101D20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101D24: jal         0x8008B2AC
    // 0x80101D28: nop

    func_8008B2AC(rdram, ctx);
        goto after_1;
    // 0x80101D28: nop

    after_1:
    // 0x80101D2C: b           L_80101D40
    // 0x80101D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80101D40;
    // 0x80101D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80101D34:
    // 0x80101D34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80101D38: nop

    // 0x80101D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80101D40:
    // 0x80101D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101D44: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101D54: jal         0x80104248
    // 0x80101D58: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101D58: nop

    after_0:
    // 0x80101D5C: beq         $v0, $zero, L_80101D6C
    if (ctx->r2 == 0) {
        // 0x80101D60: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101D6C;
    }
    // 0x80101D60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101D64: jal         0x8008B134
    // 0x80101D68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_1;
    // 0x80101D68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80101D6C:
    // 0x80101D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101D74: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101D84: jal         0x80104248
    // 0x80101D88: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101D88: nop

    after_0:
    // 0x80101D8C: beq         $v0, $zero, L_80101D9C
    if (ctx->r2 == 0) {
        // 0x80101D90: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101D9C;
    }
    // 0x80101D90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101D94: jal         0x8008B134
    // 0x80101D98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_1;
    // 0x80101D98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_80101D9C:
    // 0x80101D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101DA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101DB4: jal         0x80104248
    // 0x80101DB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101DB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101DBC: beq         $v0, $zero, L_80101DCC
    if (ctx->r2 == 0) {
        // 0x80101DC0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101DCC;
    }
    // 0x80101DC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101DC4: jal         0x8008B4A8
    // 0x80101DC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B4A8(rdram, ctx);
        goto after_1;
    // 0x80101DC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80101DCC:
    // 0x80101DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101DD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101DDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101DE4: jal         0x80104248
    // 0x80101DE8: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101DE8: nop

    after_0:
    // 0x80101DEC: bne         $v0, $zero, L_80101DFC
    if (ctx->r2 != 0) {
        // 0x80101DF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101DFC;
    }
    // 0x80101DF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101DF4: b           L_80101E04
    // 0x80101DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80101E04;
    // 0x80101DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80101DFC:
    // 0x80101DFC: jal         0x8008B324
    // 0x80101E00: nop

    func_8008B324(rdram, ctx);
        goto after_1;
    // 0x80101E00: nop

    after_1:
L_80101E04:
    // 0x80101E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101E0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101E1C: jal         0x80104248
    // 0x80101E20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101E20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101E24: bne         $v0, $zero, L_80101E34
    if (ctx->r2 != 0) {
        // 0x80101E28: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101E34;
    }
    // 0x80101E28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101E2C: b           L_80101E3C
    // 0x80101E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80101E3C;
    // 0x80101E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80101E34:
    // 0x80101E34: jal         0x8008B348
    // 0x80101E38: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80101E38: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80101E3C:
    // 0x80101E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101E44: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101E4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80101E50: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80101E54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80101E58: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80101E5C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80101E60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80101E64: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80101E68: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80101E6C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80101E70: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80101E74: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80101E78: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x80101E7C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80101E80: bc1tl       L_80101EC8
    if (c1cs) {
        // 0x80101E84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80101EC8;
    }
    goto skip_0;
    // 0x80101E84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80101E88: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80101E8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_80101E90:
    // 0x80101E90: jal         0x80101E14
    // 0x80101E94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80101E14(rdram, ctx);
        goto after_0;
    // 0x80101E94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80101E98: beql        $v0, $zero, L_80101EAC
    if (ctx->r2 == 0) {
        // 0x80101E9C: lwc1        $f0, 0x4($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
            goto L_80101EAC;
    }
    goto skip_1;
    // 0x80101E9C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x80101EA0: b           L_80101EC8
    // 0x80101EA4: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
        goto L_80101EC8;
    // 0x80101EA4: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80101EA8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
L_80101EAC:
    // 0x80101EAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80101EB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80101EB4: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x80101EB8: nop

    // 0x80101EBC: bc1fl       L_80101E90
    if (!c1cs) {
        // 0x80101EC0: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_80101E90;
    }
    goto skip_2;
    // 0x80101EC0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_2:
    // 0x80101EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80101EC8:
    // 0x80101EC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80101ECC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80101ED0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80101ED4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80101ED8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80101EDC: jr          $ra
    // 0x80101EE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80101EE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80101EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80101EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101EEC: jal         0x80104248
    // 0x80101EF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101EF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101EF4: beq         $v0, $zero, L_80101F14
    if (ctx->r2 == 0) {
        // 0x80101EF8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101F14;
    }
    // 0x80101EF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101EFC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80101F00: jal         0x8008B10C
    // 0x80101F04: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8008B10C(rdram, ctx);
        goto after_1;
    // 0x80101F04: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80101F08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80101F0C: jal         0x8008B2DC
    // 0x80101F10: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8008B2DC(rdram, ctx);
        goto after_2;
    // 0x80101F10: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
L_80101F14:
    // 0x80101F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80101F1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80101F28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101F2C: jal         0x80104248
    // 0x80101F30: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80101F30: nop

    after_0:
    // 0x80101F34: beq         $v0, $zero, L_80101F4C
    if (ctx->r2 == 0) {
        // 0x80101F38: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101F4C;
    }
    // 0x80101F38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101F3C: jal         0x8008B2B4
    // 0x80101F40: nop

    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x80101F40: nop

    after_1:
    // 0x80101F44: b           L_80101F58
    // 0x80101F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80101F58;
    // 0x80101F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80101F4C:
    // 0x80101F4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80101F50: nop

    // 0x80101F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80101F58:
    // 0x80101F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80101F5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101F64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80101F68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101F6C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80101F70: jal         0x80102394
    // 0x80101F74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80102394(rdram, ctx);
        goto after_0;
    // 0x80101F74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101F78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80101F7C: jal         0x80104248
    // 0x80101F80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80104248(rdram, ctx);
        goto after_1;
    // 0x80101F80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80101F84: bne         $v0, $zero, L_80101F94
    if (ctx->r2 != 0) {
        // 0x80101F88: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80101F94;
    }
    // 0x80101F88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80101F8C: b           L_80101FCC
    // 0x80101F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80101FCC;
    // 0x80101F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80101F94:
    // 0x80101F94: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80101F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80101F9C: beq         $t6, $zero, L_80101FCC
    if (ctx->r14 == 0) {
        // 0x80101FA0: nop
    
            goto L_80101FCC;
    }
    // 0x80101FA0: nop

    // 0x80101FA4: jal         0x8008B264
    // 0x80101FA8: nop

    func_8008B264(rdram, ctx);
        goto after_2;
    // 0x80101FA8: nop

    after_2:
    // 0x80101FAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80101FB0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80101FB4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80101FB8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80101FBC: lhu         $t1, 0x4($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X4);
    // 0x80101FC0: xor         $v0, $v0, $t1
    ctx->r2 = ctx->r2 ^ ctx->r9;
    // 0x80101FC4: b           L_80101FCC
    // 0x80101FC8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_80101FCC;
    // 0x80101FC8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80101FCC:
    // 0x80101FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80101FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80101FD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80101FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80101FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80101FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80101FE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80101FE8: jal         0x80101F64
    // 0x80101FEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80101F64(rdram, ctx);
        goto after_0;
    // 0x80101FEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80101FF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80101FF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80101FF8: jal         0x80101BE0
    // 0x80101FFC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80101BE0(rdram, ctx);
        goto after_1;
    // 0x80101FFC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80102000: beql        $v0, $zero, L_80102030
    if (ctx->r2 == 0) {
        // 0x80102004: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80102030;
    }
    goto skip_0;
    // 0x80102004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80102008: jal         0x80104248
    // 0x8010200C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80104248(rdram, ctx);
        goto after_2;
    // 0x8010200C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80102010: beq         $v0, $zero, L_8010202C
    if (ctx->r2 == 0) {
        // 0x80102014: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8010202C;
    }
    // 0x80102014: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80102018: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8010201C: beql        $t6, $zero, L_80102030
    if (ctx->r14 == 0) {
        // 0x80102020: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80102030;
    }
    goto skip_1;
    // 0x80102020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80102024: jal         0x8008B064
    // 0x80102028: nop

    func_8008B064(rdram, ctx);
        goto after_3;
    // 0x80102028: nop

    after_3:
L_8010202C:
    // 0x8010202C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80102030:
    // 0x80102030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80102034: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010203C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010203C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102044: jal         0x80102394
    // 0x80102048: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80102394(rdram, ctx);
        goto after_0;
    // 0x80102048: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010204C: bne         $v0, $zero, L_80102060
    if (ctx->r2 != 0) {
        // 0x80102050: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80102060;
    }
    // 0x80102050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102054: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80102058: b           L_80102070
    // 0x8010205C: nop

        goto L_80102070;
    // 0x8010205C: nop

L_80102060:
    // 0x80102060: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80102064: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80102068: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8010206C: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
L_80102070:
    // 0x80102070: jr          $ra
    // 0x80102074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80102074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80102078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010207C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102080: jal         0x80104248
    // 0x80102084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80102084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80102088: beq         $v0, $zero, L_80102098
    if (ctx->r2 == 0) {
        // 0x8010208C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80102098;
    }
    // 0x8010208C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80102090: jal         0x8008B1C8
    // 0x80102094: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B1C8(rdram, ctx);
        goto after_1;
    // 0x80102094: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80102098:
    // 0x80102098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010209C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801020A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801020A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801020A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801020AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801020B0: jal         0x80104248
    // 0x801020B4: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x801020B4: nop

    after_0:
    // 0x801020B8: beq         $v0, $zero, L_801020CC
    if (ctx->r2 == 0) {
        // 0x801020BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801020CC;
    }
    // 0x801020BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801020C0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801020C4: jal         0x8008B1C8
    // 0x801020C8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B1C8(rdram, ctx);
        goto after_1;
    // 0x801020C8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
L_801020CC:
    // 0x801020CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801020D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801020D4: jr          $ra
    // 0x801020D8: nop

    return;
    // 0x801020D8: nop

;}
RECOMP_FUNC void func_801020DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801020DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801020E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801020E4: jal         0x80104248
    // 0x801020E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x801020E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801020EC: beq         $v0, $zero, L_80102118
    if (ctx->r2 == 0) {
        // 0x801020F0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80102118;
    }
    // 0x801020F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801020F4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801020F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801020FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80102100: bne         $t6, $at, L_80102110
    if (ctx->r14 != ctx->r1) {
        // 0x80102104: nop
    
            goto L_80102110;
    }
    // 0x80102104: nop

    // 0x80102108: b           L_80102110
    // 0x8010210C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80102110;
    // 0x8010210C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80102110:
    // 0x80102110: jal         0x8008B1A0
    // 0x80102114: nop

    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x80102114: nop

    after_1:
L_80102118:
    // 0x80102118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010211C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102120: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010212C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102130: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80102134: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80102138: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010213C: jal         0x8001210C
    // 0x80102140: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8001210C(rdram, ctx);
        goto after_0;
    // 0x80102140: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80102144: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80102148: bnel        $v0, $t6, L_80102180
    if (ctx->r2 != ctx->r14) {
        // 0x8010214C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80102180;
    }
    goto skip_0;
    // 0x8010214C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80102150: jal         0x800DC298
    // 0x80102154: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    func_800DC298(rdram, ctx);
        goto after_1;
    // 0x80102154: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80102158: beq         $v0, $zero, L_8010217C
    if (ctx->r2 == 0) {
        // 0x8010215C: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_8010217C;
    }
    // 0x8010215C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80102160: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80102164: beq         $a1, $at, L_80102174
    if (ctx->r5 == ctx->r1) {
        // 0x80102168: nop
    
            goto L_80102174;
    }
    // 0x80102168: nop

    // 0x8010216C: jal         0x80102424
    // 0x80102170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80102424(rdram, ctx);
        goto after_2;
    // 0x80102170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_80102174:
    // 0x80102174: b           L_80102180
    // 0x80102178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80102180;
    // 0x80102178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010217C:
    // 0x8010217C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80102180:
    // 0x80102180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102188: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102190: beql        $a1, $zero, L_801021AC
    if (ctx->r5 == 0) {
            // 0x80102194: lbu         $t9, 0x74($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X74);
    static_3_801021AC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80102194: lbu         $t9, 0x74($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X74);
    skip_0:
    // 0x80102198: lbu         $t6, 0x74($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X74);
    // 0x8010219C: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x801021A0: jr          $ra
    // 0x801021A4: sb          $t7, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r15;
    return;
    // 0x801021A4: sb          $t7, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_801021A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801021A8: lbu         $t9, 0x74($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X74);
    // 0x801021AC: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x801021B0: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x801021B4: jr          $ra
    // 0x801021B8: nop

    return;
    // 0x801021B8: nop

;}
RECOMP_FUNC void func_801021BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801021BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801021C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801021C4: jal         0x80102394
    // 0x801021C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80102394(rdram, ctx);
        goto after_0;
    // 0x801021C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801021CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801021D0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x801021D4: beq         $t6, $zero, L_801021F4
    if (ctx->r14 == 0) {
        // 0x801021D8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_801021F4;
    }
    // 0x801021D8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801021DC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801021E0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801021E4: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x801021E8: lhu         $v0, 0x4($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X4);
    // 0x801021EC: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x801021F0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_801021F4:
    // 0x801021F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801021F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801021FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102204: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80102208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010220C: jal         0x80104248
    // 0x80102210: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80102210: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80102214: beq         $v0, $zero, L_801022D4
    if (ctx->r2 == 0) {
        // 0x80102218: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_801022D4;
    }
    // 0x80102218: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8010221C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80102220: jal         0x801039E4
    // 0x80102224: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_801039E4(rdram, ctx);
        goto after_1;
    // 0x80102224: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x80102228: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8010222C: jal         0x8008B304
    // 0x80102230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B304(rdram, ctx);
        goto after_2;
    // 0x80102230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80102234: jal         0x8008B4D4
    // 0x80102238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B4D4(rdram, ctx);
        goto after_3;
    // 0x80102238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8010223C: jal         0x800DF330
    // 0x80102240: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800DF330(rdram, ctx);
        goto after_4;
    // 0x80102240: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x80102244: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80102248: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8010224C: jal         0x80103CDC
    // 0x80102250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80103CDC(rdram, ctx);
        goto after_5;
    // 0x80102250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80102254: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80102258: jal         0x800B26F0
    // 0x8010225C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B26F0(rdram, ctx);
        goto after_6;
    // 0x8010225C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x80102260: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80102264: jal         0x800B27E0
    // 0x80102268: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B27E0(rdram, ctx);
        goto after_7;
    // 0x80102268: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x8010226C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80102270: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80102274: jal         0x800AE160
    // 0x80102278: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_800AE160(rdram, ctx);
        goto after_8;
    // 0x80102278: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x8010227C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80102280: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80102284: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80102288: jal         0x800879B0
    // 0x8010228C: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    _dbanim_entrypoint_0(rdram, ctx);
        goto after_9;
    // 0x8010228C: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    after_9:
    // 0x80102290: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80102294: lbu         $t9, 0x70($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X70);
    // 0x80102298: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8010229C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x801022A0: beq         $t0, $zero, L_801022C4
    if (ctx->r8 == 0) {
        // 0x801022A4: nop
    
            goto L_801022C4;
    }
    // 0x801022A4: nop

    // 0x801022A8: jal         0x80103D00
    // 0x801022AC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80103D00(rdram, ctx);
        goto after_10;
    // 0x801022AC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x801022B0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x801022B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801022B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801022BC: jal         0x800879B0
    // 0x801022C0: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    _dbanim_entrypoint_0(rdram, ctx);
        goto after_11;
    // 0x801022C0: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    after_11:
L_801022C4:
    // 0x801022C4: jal         0x800DF41C
    // 0x801022C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF41C(rdram, ctx);
        goto after_12;
    // 0x801022C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x801022CC: jal         0x800DF72C
    // 0x801022D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF72C(rdram, ctx);
        goto after_13;
    // 0x801022D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
L_801022D4:
    // 0x801022D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801022D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801022DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801022E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801022E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801022E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801022EC: jal         0x80104248
    // 0x801022F0: nop

    func_80104248(rdram, ctx);
        goto after_0;
    // 0x801022F0: nop

    after_0:
    // 0x801022F4: beq         $v0, $zero, L_8010230C
    if (ctx->r2 == 0) {
        // 0x801022F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8010230C;
    }
    // 0x801022F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801022FC: jal         0x8008B264
    // 0x80102300: nop

    func_8008B264(rdram, ctx);
        goto after_1;
    // 0x80102300: nop

    after_1:
    // 0x80102304: b           L_80102314
    // 0x80102308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80102314;
    // 0x80102308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010230C:
    // 0x8010230C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80102310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80102314:
    // 0x80102314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102318: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102328: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010232C: jal         0x80104248
    // 0x80102330: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80104248(rdram, ctx);
        goto after_0;
    // 0x80102330: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80102334: beq         $v0, $zero, L_80102380
    if (ctx->r2 == 0) {
        // 0x80102338: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80102380;
    }
    // 0x80102338: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010233C: jal         0x8008B2B4
    // 0x80102340: nop

    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x80102340: nop

    after_1:
    // 0x80102344: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80102348: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8010234C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80102350: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80102354: nop

    // 0x80102358: bc1f        L_80102378
    if (!c1cs) {
        // 0x8010235C: nop
    
            goto L_80102378;
    }
    // 0x8010235C: nop

    // 0x80102360: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80102364: nop

    // 0x80102368: bc1f        L_80102378
    if (!c1cs) {
        // 0x8010236C: nop
    
            goto L_80102378;
    }
    // 0x8010236C: nop

    // 0x80102370: b           L_80102384
    // 0x80102374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80102384;
    // 0x80102374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80102378:
    // 0x80102378: b           L_80102384
    // 0x8010237C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80102384;
    // 0x8010237C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80102380:
    // 0x80102380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80102384:
    // 0x80102384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010238C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010239C: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x801023A0: addiu       $a1, $zero, 0x99
    ctx->r5 = ADD32(0, 0X99);
    // 0x801023A4: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x801023A8: bgez        $t8, L_801023C8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801023AC: nop
    
            goto L_801023C8;
    }
    // 0x801023AC: nop

    // 0x801023B0: jal         0x8010108C
    // 0x801023B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010108C(rdram, ctx);
        goto after_0;
    // 0x801023B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801023B8: jal         0x80101080
    // 0x801023BC: nop

    func_80101080(rdram, ctx);
        goto after_1;
    // 0x801023BC: nop

    after_1:
    // 0x801023C0: b           L_801023D8
    // 0x801023C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801023D8;
    // 0x801023C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801023C8:
    // 0x801023C8: jal         0x80100368
    // 0x801023CC: nop

    func_80100368(rdram, ctx);
        goto after_2;
    // 0x801023CC: nop

    after_2:
    // 0x801023D0: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x801023D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801023D8:
    // 0x801023D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801023DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801023E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801023E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801023E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801023EC: jal         0x80102394
    // 0x801023F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80102394(rdram, ctx);
        goto after_0;
    // 0x801023F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801023F4: bne         $v0, $zero, L_80102404
    if (ctx->r2 != 0) {
        // 0x801023F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80102404;
    }
    // 0x801023F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801023FC: b           L_80102414
    // 0x80102400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80102414;
    // 0x80102400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80102404:
    // 0x80102404: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80102408: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8010240C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80102410: lhu         $v0, 0x6($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X6);
L_80102414:
    // 0x80102414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010241C: jr          $ra
    // 0x80102420: nop

    return;
    // 0x80102420: nop

;}
RECOMP_FUNC void func_80102424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80102428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010242C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80102430: jal         0x80102394
    // 0x80102434: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80102394(rdram, ctx);
        goto after_0;
    // 0x80102434: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80102438: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8010243C: jal         0x80104248
    // 0x80102440: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80104248(rdram, ctx);
        goto after_1;
    // 0x80102440: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80102444: beq         $v0, $zero, L_80102484
    if (ctx->r2 == 0) {
        // 0x80102448: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80102484;
    }
    // 0x80102448: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010244C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80102450: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80102454: beq         $t6, $zero, L_80102484
    if (ctx->r14 == 0) {
        // 0x80102458: sll         $t8, $t7, 3
        ctx->r24 = S32(ctx->r15 << 3);
            goto L_80102484;
    }
    // 0x80102458: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8010245C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80102460: lhu         $v0, 0x6($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X6);
    // 0x80102464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80102468: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x8010246C: beq         $t0, $zero, L_8010247C
    if (ctx->r8 == 0) {
        // 0x80102470: nop
    
            goto L_8010247C;
    }
    // 0x80102470: nop

    // 0x80102474: b           L_8010247C
    // 0x80102478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8010247C;
    // 0x80102478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8010247C:
    // 0x8010247C: jal         0x8008B1A0
    // 0x80102480: nop

    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x80102480: nop

    after_2:
L_80102484:
    // 0x80102484: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80102488: jal         0x80101FDC
    // 0x8010248C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80101FDC(rdram, ctx);
        goto after_3;
    // 0x8010248C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80102490: jal         0x80104248
    // 0x80102494: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80104248(rdram, ctx);
        goto after_4;
    // 0x80102494: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x80102498: beq         $v0, $zero, L_8010261C
    if (ctx->r2 == 0) {
        // 0x8010249C: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_8010261C;
    }
    // 0x8010249C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801024A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x801024A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801024A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801024AC: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x801024B0: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x801024B4: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x801024B8: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x801024BC: beq         $t7, $zero, L_801024F0
    if (ctx->r15 == 0) {
        // 0x801024C0: sw          $t5, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r13;
            goto L_801024F0;
    }
    // 0x801024C0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801024C4: jal         0x8008B134
    // 0x801024C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x801024C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x801024CC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801024D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801024D4: andi        $t8, $t6, 0x100
    ctx->r24 = ctx->r14 & 0X100;
    // 0x801024D8: beq         $t8, $zero, L_801024E8
    if (ctx->r24 == 0) {
        // 0x801024DC: nop
    
            goto L_801024E8;
    }
    // 0x801024DC: nop

    // 0x801024E0: b           L_801024E8
    // 0x801024E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_801024E8;
    // 0x801024E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801024E8:
    // 0x801024E8: jal         0x8008B4A8
    // 0x801024EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B4A8(rdram, ctx);
        goto after_6;
    // 0x801024EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
L_801024F0:
    // 0x801024F0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801024F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801024F8: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x801024FC: beql        $t0, $zero, L_80102510
    if (ctx->r8 == 0) {
        // 0x80102500: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_80102510;
    }
    goto skip_0;
    // 0x80102500: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80102504: jal         0x8008B134
    // 0x80102508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80102508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x8010250C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_80102510:
    // 0x80102510: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80102514: andi        $t1, $t2, 0x4
    ctx->r9 = ctx->r10 & 0X4;
    // 0x80102518: beql        $t1, $zero, L_8010252C
    if (ctx->r9 == 0) {
        // 0x8010251C: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_8010252C;
    }
    goto skip_1;
    // 0x8010251C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x80102520: jal         0x8008B134
    // 0x80102524: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80102524: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x80102528: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
L_8010252C:
    // 0x8010252C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80102530: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x80102534: beql        $t4, $zero, L_80102548
    if (ctx->r12 == 0) {
        // 0x80102538: lw          $t5, 0x18($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X18);
            goto L_80102548;
    }
    goto skip_2;
    // 0x80102538: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    skip_2:
    // 0x8010253C: jal         0x8008B188
    // 0x80102540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B188(rdram, ctx);
        goto after_9;
    // 0x80102540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80102544: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_80102548:
    // 0x80102548: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8010254C: andi        $t7, $t5, 0x10
    ctx->r15 = ctx->r13 & 0X10;
    // 0x80102550: beql        $t7, $zero, L_80102564
    if (ctx->r15 == 0) {
        // 0x80102554: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_80102564;
    }
    goto skip_3;
    // 0x80102554: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    skip_3:
    // 0x80102558: jal         0x8008B188
    // 0x8010255C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B188(rdram, ctx);
        goto after_10;
    // 0x8010255C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80102560: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
L_80102564:
    // 0x80102564: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80102568: andi        $t8, $t6, 0x800
    ctx->r24 = ctx->r14 & 0X800;
    // 0x8010256C: beql        $t8, $zero, L_8010259C
    if (ctx->r24 == 0) {
        // 0x80102570: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_8010259C;
    }
    goto skip_4;
    // 0x80102570: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_4:
    // 0x80102574: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80102578: jal         0x800DC298
    // 0x8010257C: nop

    func_800DC298(rdram, ctx);
        goto after_11;
    // 0x8010257C: nop

    after_11:
    // 0x80102580: beq         $v0, $zero, L_80102590
    if (ctx->r2 == 0) {
        // 0x80102584: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80102590;
    }
    // 0x80102584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80102588: b           L_80102590
    // 0x8010258C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80102590;
    // 0x8010258C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80102590:
    // 0x80102590: jal         0x8008B188
    // 0x80102594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B188(rdram, ctx);
        goto after_12;
    // 0x80102594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_12:
    // 0x80102598: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_8010259C:
    // 0x8010259C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801025A0: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x801025A4: beql        $t0, $zero, L_801025B8
    if (ctx->r8 == 0) {
        // 0x801025A8: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_801025B8;
    }
    goto skip_5;
    // 0x801025A8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    skip_5:
    // 0x801025AC: jal         0x8008B10C
    // 0x801025B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B10C(rdram, ctx);
        goto after_13;
    // 0x801025B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_13:
    // 0x801025B4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_801025B8:
    // 0x801025B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801025BC: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
    // 0x801025C0: andi        $t1, $t2, 0x80
    ctx->r9 = ctx->r10 & 0X80;
    // 0x801025C4: beql        $t1, $zero, L_801025D8
    if (ctx->r9 == 0) {
        // 0x801025C8: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_801025D8;
    }
    goto skip_6;
    // 0x801025C8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    skip_6:
    // 0x801025CC: jal         0x8008B10C
    // 0x801025D0: ori         $a1, $a1, 0xBE77
    ctx->r5 = ctx->r5 | 0XBE77;
    func_8008B10C(rdram, ctx);
        goto after_14;
    // 0x801025D0: ori         $a1, $a1, 0xBE77
    ctx->r5 = ctx->r5 | 0XBE77;
    after_14:
    // 0x801025D4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
L_801025D8:
    // 0x801025D8: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x801025DC: beql        $t4, $zero, L_801025FC
    if (ctx->r12 == 0) {
        // 0x801025E0: lw          $t5, 0x18($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X18);
            goto L_801025FC;
    }
    goto skip_7;
    // 0x801025E0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    skip_7:
    // 0x801025E4: jal         0x800DC0C0
    // 0x801025E8: nop

    func_800DC0C0(rdram, ctx);
        goto after_15;
    // 0x801025E8: nop

    after_15:
    // 0x801025EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801025F0: jal         0x8008B10C
    // 0x801025F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B10C(rdram, ctx);
        goto after_16;
    // 0x801025F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_16:
    // 0x801025F8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_801025FC:
    // 0x801025FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80102600: andi        $t7, $t5, 0x20
    ctx->r15 = ctx->r13 & 0X20;
    // 0x80102604: beq         $t7, $zero, L_80102614
    if (ctx->r15 == 0) {
        // 0x80102608: nop
    
            goto L_80102614;
    }
    // 0x80102608: nop

    // 0x8010260C: b           L_80102614
    // 0x80102610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80102614;
    // 0x80102610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80102614:
    // 0x80102614: jal         0x80102190
    // 0x80102618: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80102190(rdram, ctx);
        goto after_17;
    // 0x80102618: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
L_8010261C:
    // 0x8010261C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102620: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80102624: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010262C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010262C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80102630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102634: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80102638: lh          $a3, 0x10($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X10);
    // 0x8010263C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80102640: beql        $a3, $zero, L_801026BC
    if (ctx->r7 == 0) {
        // 0x80102644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801026BC;
    }
    goto skip_0;
    // 0x80102644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80102648: beq         $a1, $zero, L_801026B8
    if (ctx->r5 == 0) {
        // 0x8010264C: sll         $a0, $a3, 16
        ctx->r4 = S32(ctx->r7 << 16);
            goto L_801026B8;
    }
    // 0x8010264C: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80102650: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80102654: jal         0x800AE080
    // 0x80102658: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800AE080(rdram, ctx);
        goto after_0;
    // 0x80102658: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x8010265C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80102660: jal         0x800AE6BC
    // 0x80102664: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800AE6BC(rdram, ctx);
        goto after_1;
    // 0x80102664: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80102668: bne         $v0, $zero, L_8010269C
    if (ctx->r2 != 0) {
        // 0x8010266C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8010269C;
    }
    // 0x8010266C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80102670: jal         0x800E09B8
    // 0x80102674: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800E09B8(rdram, ctx);
        goto after_2;
    // 0x80102674: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80102678: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x8010267C: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80102680: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80102684: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80102688: jal         0x800AE6FC
    // 0x8010268C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800AE6FC(rdram, ctx);
        goto after_3;
    // 0x8010268C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80102690: jal         0x800E0A28
    // 0x80102694: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    func_800E0A28(rdram, ctx);
        goto after_4;
    // 0x80102694: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    after_4:
    // 0x80102698: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8010269C:
    // 0x8010269C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801026A0: jal         0x800E0ACC
    // 0x801026A4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_800E0ACC(rdram, ctx);
        goto after_5;
    // 0x801026A4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_5:
    // 0x801026A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801026AC: jal         0x800E0AF0
    // 0x801026B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_6;
    // 0x801026B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x801026B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_801026B8:
    // 0x801026B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801026BC:
    // 0x801026BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801026C0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x801026C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801026CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801026CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801026D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801026D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801026D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801026DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801026E0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801026E4: jal         0x800D3E40
    // 0x801026E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x801026E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x801026EC: beq         $v0, $zero, L_80102708
    if (ctx->r2 == 0) {
        // 0x801026F0: lwc1        $f2, 0x28($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80102708;
    }
    // 0x801026F0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801026F4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801026F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801026FC: nop

    // 0x80102700: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80102704: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
L_80102708:
    // 0x80102708: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8010270C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80102710: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80102714: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80102718: nop

    // 0x8010271C: bc1fl       L_80102730
    if (!c1cs) {
        // 0x80102720: sub.s       $f6, $f2, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80102730;
    }
    goto skip_0;
    // 0x80102720: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    skip_0:
    // 0x80102724: b           L_80102740
    // 0x80102728: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
        goto L_80102740;
    // 0x80102728: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010272C: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
L_80102730:
    // 0x80102730: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80102734: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80102738: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8010273C: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
L_80102740:
    // 0x80102740: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80102744: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80102748: nop

    // 0x8010274C: bc1fl       L_8010275C
    if (!c1cs) {
        // 0x80102750: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_8010275C;
    }
    goto skip_1;
    // 0x80102750: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_1:
    // 0x80102754: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80102758: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8010275C:
    // 0x8010275C: jal         0x80101CDC
    // 0x80102760: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80101CDC(rdram, ctx);
        goto after_1;
    // 0x80102760: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80102764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010276C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102780: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80102784: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80102788: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x8010278C: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80102790: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80102794: jr          $ra
    // 0x80102798: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80102798: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8010279C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010279C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801027A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801027A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801027A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801027AC: jal         0x800136E4
    // 0x801027B0: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x801027B0: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    after_0:
    // 0x801027B4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801027B8: swc1        $f0, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f0.u32l;
    // 0x801027BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801027C0: jal         0x800136E4
    // 0x801027C4: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x801027C4: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    after_1:
    // 0x801027C8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801027CC: swc1        $f0, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f0.u32l;
    // 0x801027D0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801027D4: jal         0x800136E4
    // 0x801027D8: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x801027D8: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    after_2:
    // 0x801027DC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x801027E0: swc1        $f0, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->f0.u32l;
    // 0x801027E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801027E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801027EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801027F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801027F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801027F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801027FC: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80102800: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80102804: srl         $t7, $t6, 31
    ctx->r15 = S32(U32(ctx->r14) >> 31);
    // 0x80102808: beql        $t7, $zero, L_80102834
    if (ctx->r15 == 0) {
        // 0x8010280C: addiu       $v0, $a0, 0x44
        ctx->r2 = ADD32(ctx->r4, 0X44);
            goto L_80102834;
    }
    goto skip_0;
    // 0x8010280C: addiu       $v0, $a0, 0x44
    ctx->r2 = ADD32(ctx->r4, 0X44);
    skip_0:
    // 0x80102810: jal         0x80102780
    // 0x80102814: addiu       $a1, $a1, 0x5AA0
    ctx->r5 = ADD32(ctx->r5, 0X5AA0);
    func_80102780(rdram, ctx);
        goto after_0;
    // 0x80102814: addiu       $a1, $a1, 0x5AA0
    ctx->r5 = ADD32(ctx->r5, 0X5AA0);
    after_0:
    // 0x80102818: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010281C: addiu       $v0, $a1, 0x5AA0
    ctx->r2 = ADD32(ctx->r5, 0X5AA0);
    // 0x80102820: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80102824: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80102828: b           L_80102834
    // 0x8010282C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_80102834;
    // 0x8010282C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80102830: addiu       $v0, $a0, 0x44
    ctx->r2 = ADD32(ctx->r4, 0X44);
L_80102834:
    // 0x80102834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010283C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102844: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80102848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010284C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80102850: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80102854: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80102858: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010285C: jal         0x80102D78
    // 0x80102860: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80102D78(rdram, ctx);
        goto after_0;
    // 0x80102860: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x80102864: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80102868: jal         0x80102924
    // 0x8010286C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80102924(rdram, ctx);
        goto after_1;
    // 0x8010286C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80102870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80102874: jal         0x80102B2C
    // 0x80102878: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80102B2C(rdram, ctx);
        goto after_2;
    // 0x80102878: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x8010287C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80102880: jal         0x80102CF4
    // 0x80102884: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_80102CF4(rdram, ctx);
        goto after_3;
    // 0x80102884: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_3:
    // 0x80102888: beq         $v0, $zero, L_801028AC
    if (ctx->r2 == 0) {
        // 0x8010288C: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_801028AC;
    }
    // 0x8010288C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80102890: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80102894: beq         $a1, $at, L_801028A4
    if (ctx->r5 == ctx->r1) {
        // 0x80102898: nop
    
            goto L_801028A4;
    }
    // 0x80102898: nop

    // 0x8010289C: jal         0x80102424
    // 0x801028A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80102424(rdram, ctx);
        goto after_4;
    // 0x801028A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_801028A4:
    // 0x801028A4: b           L_801028B0
    // 0x801028A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801028B0;
    // 0x801028A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801028AC:
    // 0x801028AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801028B0:
    // 0x801028B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801028B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801028B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801028BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801028C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801028C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801028C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801028CC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801028D0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801028D4: jal         0x80102D78
    // 0x801028D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80102D78(rdram, ctx);
        goto after_0;
    // 0x801028D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801028DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801028E0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x801028E4: swc1        $f0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f0.u32l;
    // 0x801028E8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801028EC: lwc1        $f12, 0x48($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X48);
    // 0x801028F0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x801028F4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801028F8: jal         0x800F1FF0
    // 0x801028FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F1FF0(rdram, ctx);
        goto after_1;
    // 0x801028FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80102900: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80102904: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80102908: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x8010290C: jal         0x800F2094
    // 0x80102910: lwc1        $f14, 0x54($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X54);
    func_800F2094(rdram, ctx);
        goto after_2;
    // 0x80102910: lwc1        $f14, 0x54($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X54);
    after_2:
    // 0x80102914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80102918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010291C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010292C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80102930: jal         0x800136E4
    // 0x80102934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x80102934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80102938: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8010293C: swc1        $f0, 0x54($t6)
    MEM_W(0X54, ctx->r14) = ctx->f0.u32l;
    // 0x80102940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102948: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102958: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010295C: jal         0x800136E4
    // 0x80102960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x80102960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80102964: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80102968: swc1        $f0, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->f0.u32l;
    // 0x8010296C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102974: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010297C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010297C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102980: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80102984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102988: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010298C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80102990: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80102994: jal         0x800DC0C0
    // 0x80102998: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x80102998: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8010299C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801029A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801029A4: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801029A8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801029AC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801029B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801029B4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801029B8: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x801029BC: mul.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x801029C0: add.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x801029C4: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801029C8: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801029CC: bc1fl       L_801029E0
    if (!c1cs) {
        // 0x801029D0: neg.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
            goto L_801029E0;
    }
    goto skip_0;
    // 0x801029D0: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    skip_0:
    // 0x801029D4: b           L_801029E0
    // 0x801029D8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_801029E0;
    // 0x801029D8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x801029DC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_801029E0:
    // 0x801029E0: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801029E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801029E8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801029EC: jal         0x80102924
    // 0x801029F0: nop

    func_80102924(rdram, ctx);
        goto after_1;
    // 0x801029F0: nop

    after_1:
    // 0x801029F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801029F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801029FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102A08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80102A0C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80102A10: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80102A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102A18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80102A1C: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x80102A20: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80102A24: bc1fl       L_80102A38
    if (!c1cs) {
        // 0x80102A28: sub.s       $f12, $f14, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f6.fl;
            goto L_80102A38;
    }
    goto skip_0;
    // 0x80102A28: sub.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f6.fl;
    skip_0:
    // 0x80102A2C: b           L_80102B1C
    // 0x80102A30: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
        goto L_80102B1C;
    // 0x80102A30: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    // 0x80102A34: sub.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f6.fl;
L_80102A38:
    // 0x80102A38: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80102A3C: jal         0x80013728
    // 0x80102A40: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_80013728(rdram, ctx);
        goto after_0;
    // 0x80102A40: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80102A44: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80102A48: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80102A4C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80102A50: lw          $t7, 0x74($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X74);
    // 0x80102A54: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80102A58: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80102A5C: sll         $t9, $t7, 27
    ctx->r25 = S32(ctx->r15 << 27);
    // 0x80102A60: bgezl       $t9, L_80102AA4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80102A64: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80102AA4;
    }
    goto skip_1;
    // 0x80102A64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_1:
    // 0x80102A68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80102A6C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80102A70: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80102A74: nop

    // 0x80102A78: bc1t        L_80102A98
    if (c1cs) {
        // 0x80102A7C: nop
    
            goto L_80102A98;
    }
    // 0x80102A7C: nop

    // 0x80102A80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80102A84: nop

    // 0x80102A88: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80102A8C: nop

    // 0x80102A90: bc1fl       L_80102AA4
    if (!c1cs) {
        // 0x80102A94: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80102AA4;
    }
    goto skip_2;
    // 0x80102A94: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_2:
L_80102A98:
    // 0x80102A98: b           L_80102B1C
    // 0x80102A9C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_80102B1C;
    // 0x80102A9C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x80102AA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80102AA4:
    // 0x80102AA4: negu        $t0, $a3
    ctx->r8 = SUB32(0, ctx->r7);
    // 0x80102AA8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80102AAC: nop

    // 0x80102AB0: bc1fl       L_80102AEC
    if (!c1cs) {
        // 0x80102AB4: mtc1        $t0, $f4
        ctx->f4.u32l = ctx->r8;
            goto L_80102AEC;
    }
    goto skip_3;
    // 0x80102AB4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    skip_3:
    // 0x80102AB8: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x80102ABC: nop

    // 0x80102AC0: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80102AC4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80102AC8: nop

    // 0x80102ACC: bc1fl       L_80102AE0
    if (!c1cs) {
        // 0x80102AD0: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_80102AE0;
    }
    goto skip_4;
    // 0x80102AD0: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_4:
    // 0x80102AD4: b           L_80102B14
    // 0x80102AD8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80102B14;
    // 0x80102AD8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80102ADC: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_80102AE0:
    // 0x80102AE0: b           L_80102B14
    // 0x80102AE4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_80102B14;
    // 0x80102AE4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80102AE8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
L_80102AEC:
    // 0x80102AEC: nop

    // 0x80102AF0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80102AF4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80102AF8: nop

    // 0x80102AFC: bc1fl       L_80102B10
    if (!c1cs) {
        // 0x80102B00: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_80102B10;
    }
    goto skip_5;
    // 0x80102B00: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_5:
    // 0x80102B04: b           L_80102B10
    // 0x80102B08: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_80102B10;
    // 0x80102B08: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80102B0C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_80102B10:
    // 0x80102B10: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80102B14:
    // 0x80102B14: jal         0x800136E4
    // 0x80102B18: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80102B18: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    after_1:
L_80102B1C:
    // 0x80102B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102B24: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102B2C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80102B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102B38: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80102B3C: lw          $a2, 0x54($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X54);
    // 0x80102B40: lw          $a1, 0x48($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X48);
    // 0x80102B44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80102B48: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80102B4C: jal         0x80102A04
    // 0x80102B50: nop

    func_80102A04(rdram, ctx);
        goto after_0;
    // 0x80102B50: nop

    after_0:
    // 0x80102B54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80102B58: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x80102B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102B64: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102B6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80102B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102B78: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80102B7C: lw          $a2, 0x50($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X50);
    // 0x80102B80: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80102B84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80102B88: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80102B8C: jal         0x80102A04
    // 0x80102B90: nop

    func_80102A04(rdram, ctx);
        goto after_0;
    // 0x80102B90: nop

    after_0:
    // 0x80102B94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80102B98: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80102B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102BA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80102BB0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80102BB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80102BB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80102BBC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80102BC0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80102BC4: lwc1        $f14, 0x54($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X54);
    // 0x80102BC8: lwc1        $f12, 0x48($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X48);
    // 0x80102BCC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80102BD0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80102BD4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80102BD8: jal         0x800F1FF0
    // 0x80102BDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F1FF0(rdram, ctx);
        goto after_0;
    // 0x80102BDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80102BE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80102BE4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x80102BE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80102BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80102BF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80102BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80102C00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80102C04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80102C08: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80102C0C: jal         0x800D8FF8
    // 0x80102C10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80102C10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80102C14: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80102C18: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80102C1C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80102C20: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80102C24: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80102C28: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80102C2C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80102C30: lwc1        $f14, 0x54($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80102C34: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80102C38: jal         0x800F1FF0
    // 0x80102C3C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F1FF0(rdram, ctx);
        goto after_1;
    // 0x80102C3C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80102C40: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80102C44: swc1        $f0, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f0.u32l;
    // 0x80102C48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80102C4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80102C50: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102C58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80102C5C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80102C60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80102C64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80102C68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80102C6C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80102C70: lwc1        $f14, 0x50($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80102C74: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80102C78: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80102C7C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80102C80: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80102C84: jal         0x800F1FF0
    // 0x80102C88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F1FF0(rdram, ctx);
        goto after_0;
    // 0x80102C88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80102C8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80102C90: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80102C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80102C98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80102C9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102CA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102CA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102CAC: lwc1        $f14, 0x50($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80102CB0: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80102CB4: jal         0x800F20BC
    // 0x80102CB8: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_800F20BC(rdram, ctx);
        goto after_0;
    // 0x80102CB8: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
    // 0x80102CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102CC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102CD4: lwc1        $f14, 0x54($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X54);
    // 0x80102CD8: lwc1        $f12, 0x48($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X48);
    // 0x80102CDC: jal         0x800F20BC
    // 0x80102CE0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_800F20BC(rdram, ctx);
        goto after_0;
    // 0x80102CE0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
    // 0x80102CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102CEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102CF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102CFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80102D00: lwc1        $f14, 0x54($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X54);
    // 0x80102D04: lwc1        $f12, 0x48($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X48);
    // 0x80102D08: jal         0x800F20BC
    // 0x80102D0C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_800F20BC(rdram, ctx);
        goto after_0;
    // 0x80102D0C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_0:
    // 0x80102D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102D18: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102D28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80102D2C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80102D30: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80102D34: jal         0x800F20BC
    // 0x80102D38: lwc1        $f12, 0x48($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X48);
    func_800F20BC(rdram, ctx);
        goto after_0;
    // 0x80102D38: lwc1        $f12, 0x48($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X48);
    after_0:
    // 0x80102D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102D44: jr          $ra
    // 0x80102D48: nop

    return;
    // 0x80102D48: nop

;}
RECOMP_FUNC void func_80102D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102D54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80102D58: lwc1        $f14, 0x50($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80102D5C: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80102D60: jal         0x800F20BC
    // 0x80102D64: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_800F20BC(rdram, ctx);
        goto after_0;
    // 0x80102D64: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_0:
    // 0x80102D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102D70: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102D80: jal         0x800F1DF4
    // 0x80102D84: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800F1DF4(rdram, ctx);
        goto after_0;
    // 0x80102D84: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80102D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102D90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102DA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80102DA4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80102DA8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80102DAC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80102DB0: lhu         $t8, 0x12($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X12);
    // 0x80102DB4: srl         $t9, $t8, 1
    ctx->r25 = S32(U32(ctx->r24) >> 1);
    // 0x80102DB8: jal         0x8001210C
    // 0x80102DBC: and         $a0, $t9, $a1
    ctx->r4 = ctx->r25 & ctx->r5;
    func_8001210C(rdram, ctx);
        goto after_0;
    // 0x80102DBC: and         $a0, $t9, $a1
    ctx->r4 = ctx->r25 & ctx->r5;
    after_0:
    // 0x80102DC0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80102DC4: bnel        $v0, $t0, L_80102DF8
    if (ctx->r2 != ctx->r8) {
        // 0x80102DC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80102DF8;
    }
    goto skip_0;
    // 0x80102DC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80102DCC: jal         0x800DC298
    // 0x80102DD0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    func_800DC298(rdram, ctx);
        goto after_1;
    // 0x80102DD0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80102DD4: beq         $v0, $zero, L_80102DF4
    if (ctx->r2 == 0) {
        // 0x80102DD8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80102DF4;
    }
    // 0x80102DD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80102DDC: lw          $a1, 0x48($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X48);
    // 0x80102DE0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80102DE4: jal         0x8010297C
    // 0x80102DE8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_8010297C(rdram, ctx);
        goto after_2;
    // 0x80102DE8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80102DEC: b           L_80102DF8
    // 0x80102DF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80102DF8;
    // 0x80102DF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80102DF4:
    // 0x80102DF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80102DF8:
    // 0x80102DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102E00: jr          $ra
    return;
;}
