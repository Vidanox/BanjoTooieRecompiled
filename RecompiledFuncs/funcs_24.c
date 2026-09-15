#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800A4C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4C90: jal         0x800A93E4
    // 0x800A4C94: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800A93E4(rdram, ctx);
        goto after_0;
    // 0x800A4C94: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A4C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4CA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4CB0: jal         0x800A4C88
    // 0x800A4CB4: nop

    func_800A4C88(rdram, ctx);
        goto after_0;
    // 0x800A4CB4: nop

    after_0:
    // 0x800A4CB8: beq         $v0, $zero, L_800A4CD0
    if (ctx->r2 == 0) {
        // 0x800A4CBC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800A4CD0;
    }
    // 0x800A4CBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A4CC0: jal         0x80110014
    // 0x800A4CC4: nop

    func_80110014(rdram, ctx);
        goto after_1;
    // 0x800A4CC4: nop

    after_1:
    // 0x800A4CC8: b           L_800A4CD4
    // 0x800A4CCC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800A4CD4;
    // 0x800A4CCC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800A4CD0:
    // 0x800A4CD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800A4CD4:
    // 0x800A4CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4CDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800A4CE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4CF0: jal         0x800A4C48
    // 0x800A4CF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A4C48(rdram, ctx);
        goto after_0;
    // 0x800A4CF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A4CF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A4CFC: jal         0x800CA7E4
    // 0x800A4D00: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800CA7E4(rdram, ctx);
        goto after_1;
    // 0x800A4D00: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A4D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4D0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4D1C: jal         0x800A4C48
    // 0x800A4D20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A4C48(rdram, ctx);
        goto after_0;
    // 0x800A4D20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A4D24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A4D28: jal         0x800CA9D8
    // 0x800A4D2C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800CA9D8(rdram, ctx);
        goto after_1;
    // 0x800A4D2C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A4D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4D38: jr          $ra
    // 0x800A4D3C: nop

    return;
    // 0x800A4D3C: nop

;}
RECOMP_FUNC void func_800A4D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4D44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4D48: jal         0x800A4C88
    // 0x800A4D4C: nop

    func_800A4C88(rdram, ctx);
        goto after_0;
    // 0x800A4D4C: nop

    after_0:
    // 0x800A4D50: jal         0x8010FAE4
    // 0x800A4D54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FAE4(rdram, ctx);
        goto after_1;
    // 0x800A4D54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A4D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4D5C: xori        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 ^ 0X2;
    // 0x800A4D60: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x800A4D64: jr          $ra
    // 0x800A4D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A4D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A4D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4D74: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A4D78: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A4D7C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800A4D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A4D84: swc1        $f12, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f12.u32l;
    // 0x800A4D88: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x800A4D8C: jal         0x800A3BA8
    // 0x800A4D90: swc1        $f14, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f14.u32l;
    func_800A3BA8(rdram, ctx);
        goto after_0;
    // 0x800A4D90: swc1        $f14, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f14.u32l;
    after_0:
    // 0x800A4D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4D9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4DAC: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A4DB0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A4DB4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800A4DB8: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    // 0x800A4DBC: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x800A4DC0: lbu         $v0, 0x6($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X6);
    // 0x800A4DC4: beq         $v0, $at, L_800A4DEC
    if (ctx->r2 == ctx->r1) {
        // 0x800A4DC8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800A4DEC;
    }
    // 0x800A4DC8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A4DCC: beq         $v0, $at, L_800A4DEC
    if (ctx->r2 == ctx->r1) {
        // 0x800A4DD0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800A4DEC;
    }
    // 0x800A4DD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A4DD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A4DD8: jal         0x800A3F14
    // 0x800A4DDC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800A3F14(rdram, ctx);
        goto after_0;
    // 0x800A4DDC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A4DE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A4DE4: jal         0x800A3B78
    // 0x800A4DE8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A3B78(rdram, ctx);
        goto after_1;
    // 0x800A4DE8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800A4DEC:
    // 0x800A4DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4DF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4E04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A4E08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A4E0C: jal         0x800A3F14
    // 0x800A4E10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A3F14(rdram, ctx);
        goto after_0;
    // 0x800A4E10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x800A4E14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A4E18: jal         0x800A3B78
    // 0x800A4E1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A3B78(rdram, ctx);
        goto after_1;
    // 0x800A4E1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A4E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4E28: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4E38: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A4E3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A4E40: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x800A4E44: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x800A4E48: lbu         $v0, 0x6($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X6);
    // 0x800A4E4C: beq         $v0, $at, L_800A4E64
    if (ctx->r2 == ctx->r1) {
        // 0x800A4E50: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800A4E64;
    }
    // 0x800A4E50: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A4E54: beql        $v0, $at, L_800A4E68
    if (ctx->r2 == ctx->r1) {
        // 0x800A4E58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A4E68;
    }
    goto skip_0;
    // 0x800A4E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A4E5C: jal         0x800A3F14
    // 0x800A4E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3F14(rdram, ctx);
        goto after_0;
    // 0x800A4E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
L_800A4E64:
    // 0x800A4E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A4E68:
    // 0x800A4E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4E6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4E7C: jal         0x800A3F14
    // 0x800A4E80: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800A3F14(rdram, ctx);
        goto after_0;
    // 0x800A4E80: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x800A4E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4E8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4E9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A4EA0: jal         0x800A3F14
    // 0x800A4EA4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800A3F14(rdram, ctx);
        goto after_0;
    // 0x800A4EA4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x800A4EA8: jal         0x800A4CA8
    // 0x800A4EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4CA8(rdram, ctx);
        goto after_1;
    // 0x800A4EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A4EB0: jal         0x80110BF0
    // 0x800A4EB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110BF0(rdram, ctx);
        goto after_2;
    // 0x800A4EB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A4EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4EC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4ED0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A4ED4: jal         0x800A3F14
    // 0x800A4ED8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3F14(rdram, ctx);
        goto after_0;
    // 0x800A4ED8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800A4EDC: jal         0x800A4CA8
    // 0x800A4EE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4CA8(rdram, ctx);
        goto after_1;
    // 0x800A4EE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A4EE4: jal         0x80110C2C
    // 0x800A4EE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110C2C(rdram, ctx);
        goto after_2;
    // 0x800A4EE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A4EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4EF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4EFC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A4F00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A4F04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A4F08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4F0C: beq         $a0, $zero, L_800A4FF0
    if (ctx->r4 == 0) {
        // 0x800A4F10: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_800A4FF0;
    }
    // 0x800A4F10: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800A4F14: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x800A4F18: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x800A4F1C: bnel        $t6, $zero, L_800A4FF4
    if (ctx->r14 != 0) {
        // 0x800A4F20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4FF4;
    }
    goto skip_0;
    // 0x800A4F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A4F24: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x800A4F28: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A4F2C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800A4F30: nop

    // 0x800A4F34: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A4F38: jal         0x800F2100
    // 0x800A4F3C: sub.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f8.fl;
    func_800F2100(rdram, ctx);
        goto after_0;
    // 0x800A4F3C: sub.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f8.fl;
    after_0:
    // 0x800A4F40: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800A4F44: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x800A4F48: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A4F4C: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x800A4F50: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800A4F54: nop

    // 0x800A4F58: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A4F5C: jal         0x800F2100
    // 0x800A4F60: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x800A4F60: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    after_1:
    // 0x800A4F64: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x800A4F68: lw          $t0, 0x38($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X38);
    // 0x800A4F6C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A4F70: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
    // 0x800A4F74: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800A4F78: nop

    // 0x800A4F7C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A4F80: jal         0x800F2100
    // 0x800A4F84: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x800A4F84: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_2:
    // 0x800A4F88: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x800A4F8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A4F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A4F94: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x800A4F98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A4F9C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_800A4FA0:
    // 0x800A4FA0: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x800A4FA4: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x800A4FA8: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800A4FAC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A4FB0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800A4FB4: nop

    // 0x800A4FB8: bc1fl       L_800A4FC8
    if (!c1cs) {
        // 0x800A4FBC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800A4FC8;
    }
    goto skip_1;
    // 0x800A4FBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x800A4FC0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800A4FC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800A4FC8:
    // 0x800A4FC8: bne         $v0, $a1, L_800A4FA0
    if (ctx->r2 != ctx->r5) {
        // 0x800A4FCC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800A4FA0;
    }
    // 0x800A4FCC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A4FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4FD4: jal         0x80090E30
    // 0x800A4FD8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_80090E30(rdram, ctx);
        goto after_3;
    // 0x800A4FD8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_3:
    // 0x800A4FDC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800A4FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4FE4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800A4FE8: jal         0x800A3D78
    // 0x800A4FEC: addiu       $a1, $a3, 0x1
    ctx->r5 = ADD32(ctx->r7, 0X1);
    func_800A3D78(rdram, ctx);
        goto after_4;
    // 0x800A4FEC: addiu       $a1, $a3, 0x1
    ctx->r5 = ADD32(ctx->r7, 0X1);
    after_4:
L_800A4FF0:
    // 0x800A4FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4FF4:
    // 0x800A4FF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A4FF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A4FFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A500C: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A5010: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x800A5014: bnel        $t7, $zero, L_800A5038
    if (ctx->r15 != 0) {
        // 0x800A5018: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A5038;
    }
    goto skip_0;
    // 0x800A5018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A501C: jal         0x800CA334
    // 0x800A5020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CA334(rdram, ctx);
        goto after_0;
    // 0x800A5020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A5024: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A5028: lw          $t8, 0x38($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X38);
    // 0x800A502C: jal         0x800A4E94
    // 0x800A5030: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    func_800A4E94(rdram, ctx);
        goto after_1;
    // 0x800A5030: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    after_1:
    // 0x800A5034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A5038:
    // 0x800A5038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A503C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A504C: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A5050: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x800A5054: beql        $t7, $zero, L_800A5084
    if (ctx->r15 == 0) {
        // 0x800A5058: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A5084;
    }
    goto skip_0;
    // 0x800A5058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A505C: jal         0x800A4EC8
    // 0x800A5060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A4EC8(rdram, ctx);
        goto after_0;
    // 0x800A5060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A5064: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800A5068: lw          $t9, 0x38($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X38);
    // 0x800A506C: jal         0x800CA364
    // 0x800A5070: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_800CA364(rdram, ctx);
        goto after_1;
    // 0x800A5070: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_1:
    // 0x800A5074: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800A5078: lw          $t1, 0x38($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X38);
    // 0x800A507C: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    // 0x800A5080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A5084:
    // 0x800A5084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5088: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5090: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A5094: jr          $ra
    // 0x800A5098: lw          $v0, 0x3C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3C);
    return;
    // 0x800A5098: lw          $v0, 0x3C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3C);
;}
RECOMP_FUNC void func_800A509C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A509C: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x800A50A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A50A4: jr          $ra
    // 0x800A50A8: sb          $t6, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r14;
    return;
    // 0x800A50A8: sb          $t6, 0x3B($t7)
    MEM_B(0X3B, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_800A50B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A50B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A50B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A50B8: jal         0x8008FFE8
    // 0x800A50BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A50BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A50C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A50C4: jal         0x8010F9C0
    // 0x800A50C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_8010F9C0(rdram, ctx);
        goto after_1;
    // 0x800A50C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A50CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A50D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A50D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A50DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A50DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A50E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A50E4: jal         0x8008FFE8
    // 0x800A50E8: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A50E8: nop

    after_0:
    // 0x800A50EC: jal         0x8010FAE4
    // 0x800A50F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FAE4(rdram, ctx);
        goto after_1;
    // 0x800A50F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A50F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A50F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A50FC: jr          $ra
    // 0x800A5100: nop

    return;
    // 0x800A5100: nop

;}
RECOMP_FUNC void func_800A5104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A510C: jal         0x800A92A8
    // 0x800A5110: nop

    func_800A92A8(rdram, ctx);
        goto after_0;
    // 0x800A5110: nop

    after_0:
    // 0x800A5114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A511C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A512C: jal         0x800A9318
    // 0x800A5130: nop

    func_800A9318(rdram, ctx);
        goto after_0;
    // 0x800A5130: nop

    after_0:
    // 0x800A5134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A513C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A514C: jal         0x8008FFE8
    // 0x800A5150: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A5150: nop

    after_0:
    // 0x800A5154: jal         0x8010FD88
    // 0x800A5158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FD88(rdram, ctx);
        goto after_1;
    // 0x800A5158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A515C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5164: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A516C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A516C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A5174: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A5178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A517C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A5180: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800A5184: jal         0x800F18FC
    // 0x800A5188: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    func_800F18FC(rdram, ctx);
        goto after_0;
    // 0x800A5188: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x800A518C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A5190: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800A5194: jal         0x800136E4
    // 0x800A5198: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x800A5198: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x800A519C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800A51A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A51A4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x800A51A8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x800A51AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A51B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A51B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A51C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A51C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A51C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A51C8: jal         0x800F54E4
    // 0x800A51CC: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A51CC: nop

    after_0:
    // 0x800A51D0: jal         0x800878B8
    // 0x800A51D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _plcamera_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x800A51D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A51D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A51DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A51E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A51E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A51E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A51EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A51F0: jal         0x800F54E4
    // 0x800A51F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A51F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A51F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A51FC: jal         0x800878C8
    // 0x800A5200: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _plcamera_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800A5200: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A5204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A520C: jr          $ra
    // 0x800A5210: nop

    return;
    // 0x800A5210: nop

;}
RECOMP_FUNC void func_800A5214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A521C: jal         0x800F54E4
    // 0x800A5220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A5220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A5224: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A5228: jal         0x800878D0
    // 0x800A522C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _plcamera_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800A522C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A5230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5238: jr          $ra
    // 0x800A523C: nop

    return;
    // 0x800A523C: nop

;}
RECOMP_FUNC void func_800A5240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5248: jal         0x800F54E4
    // 0x800A524C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A524C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A5250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A5254: jal         0x800878D8
    // 0x800A5258: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _plcamera_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x800A5258: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A525C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5264: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A526C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A526C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5274: jal         0x800F54E4
    // 0x800A5278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A5278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A527C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A5280: jal         0x800878E0
    // 0x800A5284: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _plcamera_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x800A5284: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A5288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A528C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5290: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A529C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A52A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A52A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A52A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800A52AC: jal         0x800F54E4
    // 0x800A52B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A52B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A52B4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A52B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A52BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800A52C0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800A52C4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800A52C8: jal         0x800878E8
    // 0x800A52CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    _plcamera_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800A52CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800A52D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A52D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A52D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A52E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A52E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A52E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A52E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A52EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A52F0: jal         0x800F54E4
    // 0x800A52F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800A52F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A52F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A52FC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A5300: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800A5304: jal         0x800878F0
    // 0x800A5308: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    _plcamera_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800A5308: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800A530C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5314: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5320: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A5324: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A5328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A532C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800A5330: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800A5334: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800A5338: jal         0x800EFA4C
    // 0x800A533C: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800A533C: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_0:
    // 0x800A5340: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800A5344: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800A5348: jal         0x800EF8BC
    // 0x800A534C: lui         $a2, 0x4288
    ctx->r6 = S32(0X4288 << 16);
    func_800EF8BC(rdram, ctx);
        goto after_1;
    // 0x800A534C: lui         $a2, 0x4288
    ctx->r6 = S32(0X4288 << 16);
    after_1:
    // 0x800A5350: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A5354: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A5358: lwc1        $f4, 0x55C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55C0);
    // 0x800A535C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A5360: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800A5364: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x800A5368: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800A536C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A5370: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800A5374: jal         0x800EFA4C
    // 0x800A5378: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x800A5378: nop

    after_2:
    // 0x800A537C: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A5380: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800A5384: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A5388: addiu       $v1, $v1, 0x70A0
    ctx->r3 = ADD32(ctx->r3, 0X70A0);
    // 0x800A538C: add.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800A5390: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A5394: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A5398: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A539C: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x800A53A0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A53A4: add.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x800A53A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A53AC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A53B0: sub.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x800A53B4: addiu       $a0, $a0, 0x70B0
    ctx->r4 = ADD32(ctx->r4, 0X70B0);
    // 0x800A53B8: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x800A53BC: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x800A53C0: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x800A53C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A53C8: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
    // 0x800A53CC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x800A53D0: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x800A53D4: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x800A53D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A53DC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A53E0: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800A53E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800A53E8: addiu       $a2, $a2, 0x70D0
    ctx->r6 = ADD32(ctx->r6, 0X70D0);
    // 0x800A53EC: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x800A53F0: addiu       $a1, $a1, 0x70C0
    ctx->r5 = ADD32(ctx->r5, 0X70C0);
    // 0x800A53F4: addiu       $v0, $v0, 0x70E0
    ctx->r2 = ADD32(ctx->r2, 0X70E0);
    // 0x800A53F8: add.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x800A53FC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800A5400: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x800A5404: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x800A5408: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x800A540C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A5410: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x800A5414: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x800A5418: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x800A541C: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x800A5420: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x800A5424: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x800A5428: jr          $ra
    // 0x800A542C: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    return;
    // 0x800A542C: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_800A5430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5430: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A5434: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800A5438: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800A543C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800A5440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A5444: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800A5448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A544C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800A5450: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x800A5454: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x800A5458: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x800A545C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800A5460: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x800A5464: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800A5468: jal         0x800EF4E4
    // 0x800A546C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_0;
    // 0x800A546C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x800A5470: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800A5474: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800A5478: jal         0x800EE780
    // 0x800A547C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800EE780(rdram, ctx);
        goto after_1;
    // 0x800A547C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x800A5480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A5484: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A5488: jr          $ra
    // 0x800A548C: nop

    return;
    // 0x800A548C: nop

;}
RECOMP_FUNC void func_800A5490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5498: jal         0x8008FFE8
    // 0x800A549C: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A549C: nop

    after_0:
    // 0x800A54A0: jal         0x8010FFD8
    // 0x800A54A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFD8(rdram, ctx);
        goto after_1;
    // 0x800A54A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A54A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A54AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A54B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A54C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A54C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A54C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A54C8: jal         0x8008FFE8
    // 0x800A54CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A54CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A54D0: jal         0x8011001C
    // 0x800A54D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8011001C(rdram, ctx);
        goto after_1;
    // 0x800A54D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A54D8: beq         $v0, $zero, L_800A54E8
    if (ctx->r2 == 0) {
        // 0x800A54DC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800A54E8;
    }
    // 0x800A54DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A54E0: jal         0x800891E8
    // 0x800A54E4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncfixposrot_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x800A54E4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
L_800A54E8:
    // 0x800A54E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A54EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A54F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A54F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A54F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A54FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5500: jal         0x8008FFE8
    // 0x800A5504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A5504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A5508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A550C: jal         0x80089218
    // 0x800A5510: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncfixposrot_entrypoint_8(rdram, ctx);
        goto after_1;
    // 0x800A5510: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A5514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A551C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A552C: jal         0x8008FFE8
    // 0x800A5530: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x800A5530: nop

    after_0:
    // 0x800A5534: jal         0x80089220
    // 0x800A5538: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncfixposrot_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x800A5538: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A553C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5544: jr          $ra
    // 0x800A5548: nop

    return;
    // 0x800A5548: nop

;}
RECOMP_FUNC void func_800A5550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A555C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A5560: lhu         $a0, 0x1A($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X1A);
    // 0x800A5564: srl         $t7, $a0, 5
    ctx->r15 = S32(U32(ctx->r4) >> 5);
    // 0x800A5568: jal         0x800A93E4
    // 0x800A556C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800A93E4(rdram, ctx);
        goto after_0;
    // 0x800A556C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x800A5570: jal         0x80110014
    // 0x800A5574: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110014(rdram, ctx);
        goto after_1;
    // 0x800A5574: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A5578: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A557C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A5580: jal         0x800893A8
    // 0x800A5584: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncbaspline_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x800A5584: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800A5588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A558C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5590: jr          $ra
    // 0x800A5594: nop

    return;
    // 0x800A5594: nop

;}
RECOMP_FUNC void func_800A5598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A559C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A55A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A55A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A55A8: lhu         $a0, 0x1A($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X1A);
    // 0x800A55AC: srl         $t7, $a0, 5
    ctx->r15 = S32(U32(ctx->r4) >> 5);
    // 0x800A55B0: jal         0x800A93E4
    // 0x800A55B4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800A93E4(rdram, ctx);
        goto after_0;
    // 0x800A55B4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x800A55B8: jal         0x80110014
    // 0x800A55BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110014(rdram, ctx);
        goto after_1;
    // 0x800A55BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A55C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A55C4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A55C8: jal         0x800893B0
    // 0x800A55CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncbaspline_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x800A55CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800A55D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A55D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A55D8: jr          $ra
    // 0x800A55DC: nop

    return;
    // 0x800A55DC: nop

;}
RECOMP_FUNC void func_800A55E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A55E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A55E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A55E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A55EC: addiu       $a0, $a0, -0x6AC0
    ctx->r4 = ADD32(ctx->r4, -0X6AC0);
    // 0x800A55F0: jal         0x80085560
    // 0x800A55F4: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    _cadbmgrDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800A55F4: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    after_0:
    // 0x800A55F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A55FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5600: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A560C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A5610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5614: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5618: jal         0x80085560
    // 0x800A561C: addiu       $a0, $a0, -0x6AC0
    ctx->r4 = ADD32(ctx->r4, -0X6AC0);
    _cadbmgrDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800A561C: addiu       $a0, $a0, -0x6AC0
    ctx->r4 = ADD32(ctx->r4, -0X6AC0);
    after_0:
    // 0x800A5620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5628: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5638: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A563C: jal         0x80085568
    // 0x800A5640: addiu       $a0, $a0, -0x6AC0
    ctx->r4 = ADD32(ctx->r4, -0X6AC0);
    _cadbmgrDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800A5640: addiu       $a0, $a0, -0x6AC0
    ctx->r4 = ADD32(ctx->r4, -0X6AC0);
    after_0:
    // 0x800A5644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A564C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5654: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A5658: addiu       $v1, $v1, -0x6AC0
    ctx->r3 = ADD32(ctx->r3, -0X6AC0);
    // 0x800A565C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800A5660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5668: beql        $a0, $zero, L_800A5698
    if (ctx->r4 == 0) {
        // 0x800A566C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A5698;
    }
    goto skip_0;
    // 0x800A566C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A5670: jal         0x8001BAFC
    // 0x800A5674: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800A5674: nop

    after_0:
    // 0x800A5678: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A567C: addiu       $v1, $v1, -0x6AC0
    ctx->r3 = ADD32(ctx->r3, -0X6AC0);
    // 0x800A5680: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800A5684: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800A5688: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    // 0x800A568C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800A5690: sw          $zero, 0x34($t8)
    MEM_W(0X34, ctx->r24) = 0;
    // 0x800A5694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A5698:
    // 0x800A5698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A569C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A56A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A56A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A56A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A56AC: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800A56B0: addiu       $s2, $s2, -0x6AC0
    ctx->r18 = ADD32(ctx->r18, -0X6AC0);
    // 0x800A56B4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800A56B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A56BC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800A56C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800A56C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A56C8: beq         $a1, $zero, L_800A5770
    if (ctx->r5 == 0) {
        // 0x800A56CC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800A5770;
    }
    // 0x800A56CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A56D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800A56D4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x800A56D8: addiu       $s4, $zero, 0x9
    ctx->r20 = ADD32(0, 0X9);
L_800A56DC:
    // 0x800A56DC: addu        $t6, $a1, $s1
    ctx->r14 = ADD32(ctx->r5, ctx->r17);
    // 0x800A56E0: lh          $a0, 0x1E($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X1E);
    // 0x800A56E4: beql        $a0, $zero, L_800A5714
    if (ctx->r4 == 0) {
        // 0x800A56E8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A5714;
    }
    goto skip_0;
    // 0x800A56E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800A56EC: jal         0x8001B754
    // 0x800A56F0: sll         $s3, $s0, 2
    ctx->r19 = S32(ctx->r16 << 2);
    func_8001B754(rdram, ctx);
        goto after_0;
    // 0x800A56F0: sll         $s3, $s0, 2
    ctx->r19 = S32(ctx->r16 << 2);
    after_0:
    // 0x800A56F4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800A56F8: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x800A56FC: sh          $zero, 0x1E($t8)
    MEM_H(0X1E, ctx->r24) = 0;
    // 0x800A5700: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x800A5704: addu        $t0, $t9, $s3
    ctx->r8 = ADD32(ctx->r25, ctx->r19);
    // 0x800A5708: sw          $zero, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = 0;
    // 0x800A570C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800A5710: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800A5714:
    // 0x800A5714: bne         $s0, $s4, L_800A56DC
    if (ctx->r16 != ctx->r20) {
        // 0x800A5718: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_800A56DC;
    }
    // 0x800A5718: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x800A571C: lw          $t1, 0x38($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X38);
    // 0x800A5720: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A5724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A5728: bltz        $t1, L_800A5764
    if (SIGNED(ctx->r9) < 0) {
        // 0x800A572C: addiu       $t6, $zero, -0x1
        ctx->r14 = ADD32(0, -0X1);
            goto L_800A5764;
    }
    // 0x800A572C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800A5730: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x800A5734: addu        $t2, $a1, $v0
    ctx->r10 = ADD32(ctx->r5, ctx->r2);
L_800A5738:
    // 0x800A5738: sb          $zero, 0x3C($t2)
    MEM_B(0X3C, ctx->r10) = 0;
    // 0x800A573C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x800A5740: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800A5744: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x800A5748: sb          $a0, 0x3D($t4)
    MEM_B(0X3D, ctx->r12) = ctx->r4;
    // 0x800A574C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800A5750: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800A5754: lw          $t5, 0x38($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X38);
    // 0x800A5758: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800A575C: beql        $at, $zero, L_800A5738
    if (ctx->r1 == 0) {
        // 0x800A5760: addu        $t2, $a1, $v0
        ctx->r10 = ADD32(ctx->r5, ctx->r2);
            goto L_800A5738;
    }
    goto skip_1;
    // 0x800A5760: addu        $t2, $a1, $v0
    ctx->r10 = ADD32(ctx->r5, ctx->r2);
    skip_1:
L_800A5764:
    // 0x800A5764: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x800A5768: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800A576C: sw          $zero, 0x34($t7)
    MEM_W(0X34, ctx->r15) = 0;
L_800A5770:
    // 0x800A5770: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5774: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A5778: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A577C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A5780: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800A5784: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800A5788: jr          $ra
    // 0x800A578C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A578C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A5790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5790: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5794: lw          $t6, -0x6AC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6AC0);
    // 0x800A5798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A579C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800A57A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A57A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A57A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A57AC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800A57B0: jal         0x8001B798
    // 0x800A57B4: lh          $a0, 0x1E($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X1E);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x800A57B4: lh          $a0, 0x1E($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X1E);
    after_0:
    // 0x800A57B8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800A57BC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800A57C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A57C4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A57C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A57CC: lw          $t3, -0x6AE4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6AE4);
    // 0x800A57D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A57D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A57D8: multu       $t0, $t3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A57DC: mflo        $t4
    ctx->r12 = lo;
    // 0x800A57E0: addu        $v1, $v0, $t4
    ctx->r3 = ADD32(ctx->r2, ctx->r12);
    // 0x800A57E4: jr          $ra
    // 0x800A57E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800A57E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800A57EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A57EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A57F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A57F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A57F8: jr          $ra
    // 0x800A57FC: lw          $v0, -0x6AE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6AE4);
    return;
    // 0x800A57FC: lw          $v0, -0x6AE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6AE4);
;}
RECOMP_FUNC void func_800A5800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5800: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A5804: addiu       $v1, $v1, -0x6AC0
    ctx->r3 = ADD32(ctx->r3, -0X6AC0);
    // 0x800A5808: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800A580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5814: sw          $a0, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r4;
    // 0x800A5818: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800A581C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800A5820: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800A5824: lbu         $a0, 0x3C($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3C);
    // 0x800A5828: jal         0x800A5790
    // 0x800A582C: lbu         $a1, 0x3D($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3D);
    func_800A5790(rdram, ctx);
        goto after_0;
    // 0x800A582C: lbu         $a1, 0x3D($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3D);
    after_0:
    // 0x800A5830: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A5834: addiu       $v1, $v1, -0x6AC0
    ctx->r3 = ADD32(ctx->r3, -0X6AC0);
    // 0x800A5838: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800A583C: sw          $v0, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->r2;
    // 0x800A5840: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800A5844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5848: lw          $v0, 0x34($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X34);
    // 0x800A584C: jr          $ra
    // 0x800A5850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A5850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A5854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5854: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5858: lw          $t6, -0x6AC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6AC0);
    // 0x800A585C: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x800A5860: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800A5864: jr          $ra
    // 0x800A5868: lbu         $v0, 0x3C($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X3C);
    return;
    // 0x800A5868: lbu         $v0, 0x3C($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X3C);
;}
RECOMP_FUNC void func_800A586C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A586C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5870: lw          $t6, -0x6AC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6AC0);
    // 0x800A5874: jr          $ra
    // 0x800A5878: lw          $v0, 0x34($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X34);
    return;
    // 0x800A5878: lw          $v0, 0x34($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X34);
;}
RECOMP_FUNC void func_800A587C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A587C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A5880: lw          $v1, -0x6AC0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6AC0);
    // 0x800A5884: lw          $t6, 0x30($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X30);
    // 0x800A5888: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800A588C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x800A5890: jr          $ra
    // 0x800A5894: lbu         $v0, 0x3C($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X3C);
    return;
    // 0x800A5894: lbu         $v0, 0x3C($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X3C);
;}
RECOMP_FUNC void func_800A5898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5898: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A589C: lw          $t6, -0x6AC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6AC0);
    // 0x800A58A0: jr          $ra
    // 0x800A58A4: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
    return;
    // 0x800A58A4: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
;}
RECOMP_FUNC void func_800A58A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A58A8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800A58AC: lw          $a3, -0x6AC0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6AC0);
    // 0x800A58B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A58B4: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800A58B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A58BC: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x800A58C0: lbu         $t8, 0x3C($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3C);
    // 0x800A58C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A58C8: beql        $a1, $t8, L_800A58E4
    if (ctx->r5 == ctx->r24) {
        // 0x800A58CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A58E4;
    }
    goto skip_0;
    // 0x800A58CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A58D0: beql        $a1, $zero, L_800A58E4
    if (ctx->r5 == 0) {
        // 0x800A58D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A58E4;
    }
    goto skip_1;
    // 0x800A58D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800A58D8: jal         0x80085570
    // 0x800A58DC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    _cadbmgrDll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800A58DC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800A58E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A58E4:
    // 0x800A58E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A58E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A58F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A58F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A58F4: lw          $t6, -0x6AC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6AC0);
    // 0x800A58F8: lw          $v0, 0x38($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X38);
    // 0x800A58FC: jr          $ra
    // 0x800A5900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    return;
    // 0x800A5900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
;}
RECOMP_FUNC void func_800A5904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A590C: jal         0x800A5854
    // 0x800A5910: nop

    func_800A5854(rdram, ctx);
        goto after_0;
    // 0x800A5910: nop

    after_0:
    // 0x800A5914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5918: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A591C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800A5920: jr          $ra
    // 0x800A5924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A5924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A5930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5938: jal         0x800EA05C
    // 0x800A593C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800A593C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A5940: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800A5944: lw          $t0, 0x70F0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X70F0);
    // 0x800A5948: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800A594C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A5950: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x800A5954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A595C: beq         $t6, $zero, L_800A5998
    if (ctx->r14 == 0) {
        // 0x800A5960: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_800A5998;
    }
    // 0x800A5960: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x800A5964: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
L_800A5968:
    // 0x800A5968: bnel        $v0, $a0, L_800A5988
    if (ctx->r2 != ctx->r4) {
        // 0x800A596C: lh          $a0, 0x16($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X16);
            goto L_800A5988;
    }
    goto skip_0;
    // 0x800A596C: lh          $a0, 0x16($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X16);
    skip_0:
    // 0x800A5970: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x800A5974: bnel        $a3, $t7, L_800A5988
    if (ctx->r7 != ctx->r15) {
        // 0x800A5978: lh          $a0, 0x16($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X16);
            goto L_800A5988;
    }
    goto skip_1;
    // 0x800A5978: lh          $a0, 0x16($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X16);
    skip_1:
    // 0x800A597C: b           L_800A59B0
    // 0x800A5980: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
        goto L_800A59B0;
    // 0x800A5980: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x800A5984: lh          $a0, 0x16($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X16);
L_800A5988:
    // 0x800A5988: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800A598C: addiu       $a1, $a1, 0x16
    ctx->r5 = ADD32(ctx->r5, 0X16);
    // 0x800A5990: bne         $a0, $zero, L_800A5968
    if (ctx->r4 != 0) {
        // 0x800A5994: addiu       $v1, $v1, 0x16
        ctx->r3 = ADD32(ctx->r3, 0X16);
            goto L_800A5968;
    }
    // 0x800A5994: addiu       $v1, $v1, 0x16
    ctx->r3 = ADD32(ctx->r3, 0X16);
L_800A5998:
    // 0x800A5998: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x800A599C: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x800A59A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A59A4: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x800A59A8: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800A59AC: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
L_800A59B0:
    // 0x800A59B0: jr          $ra
    // 0x800A59B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A59B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A59B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A59B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A59BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A59C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A59C4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A59C8: jal         0x800A5930
    // 0x800A59CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800A5930(rdram, ctx);
        goto after_0;
    // 0x800A59CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A59D0: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x800A59D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800A59D8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800A59DC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A59E0: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x800A59E4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800A59E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A59EC: lh          $t0, 0x8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8);
    // 0x800A59F0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800A59F4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800A59F8: lh          $t2, 0xA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XA);
    // 0x800A59FC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800A5A00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5A04: lh          $t4, 0xC($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XC);
    // 0x800A5A08: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x800A5A0C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800A5A10: lh          $t6, 0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE);
    // 0x800A5A14: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800A5A18: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A5A1C: lh          $t8, 0x10($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X10);
    // 0x800A5A20: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800A5A24: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800A5A28: lh          $t0, 0x12($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X12);
    // 0x800A5A2C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800A5A30: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A5A34: lh          $t2, 0x14($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X14);
    // 0x800A5A38: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800A5A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5A44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5A4C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A5A50: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A5A54: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5A58: addiu       $a1, $a1, 0x70F0
    ctx->r5 = ADD32(ctx->r5, 0X70F0);
    // 0x800A5A5C: lbu         $v0, 0x762C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X762C);
    // 0x800A5A60: addiu       $t6, $t6, -0x6440
    ctx->r14 = ADD32(ctx->r14, -0X6440);
    // 0x800A5A64: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800A5A68: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A5A6C: lw          $t7, -0x6428($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6428);
    // 0x800A5A70: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A5A74: addiu       $v1, $t8, -0x6428
    ctx->r3 = ADD32(ctx->r24, -0X6428);
    // 0x800A5A78: beq         $t7, $zero, L_800A5AA4
    if (ctx->r15 == 0) {
        // 0x800A5A7C: nop
    
            goto L_800A5AA4;
    }
    // 0x800A5A7C: nop

    // 0x800A5A80: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_800A5A84:
    // 0x800A5A84: bnel        $v0, $a0, L_800A5A98
    if (ctx->r2 != ctx->r4) {
        // 0x800A5A88: lw          $a0, 0x8($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X8);
            goto L_800A5A98;
    }
    goto skip_0;
    // 0x800A5A88: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    skip_0:
    // 0x800A5A8C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x800A5A90: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800A5A94: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
L_800A5A98:
    // 0x800A5A98: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A5A9C: bne         $a0, $zero, L_800A5A84
    if (ctx->r4 != 0) {
        // 0x800A5AA0: nop
    
            goto L_800A5A84;
    }
    // 0x800A5AA0: nop

L_800A5AA4:
    // 0x800A5AA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5AB0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5AB4: lw          $t6, -0x5E44($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5E44);
    // 0x800A5AB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A5ABC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5AC0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800A5AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5AC8: lbu         $a0, 0x762C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X762C);
    // 0x800A5ACC: addiu       $a2, $a2, -0x5E50
    ctx->r6 = ADD32(ctx->r6, -0X5E50);
    // 0x800A5AD0: beq         $t6, $zero, L_800A5B04
    if (ctx->r14 == 0) {
        // 0x800A5AD4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800A5B04;
    }
    // 0x800A5AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5AD8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A5ADC: addiu       $v0, $t7, -0x5E44
    ctx->r2 = ADD32(ctx->r15, -0X5E44);
    // 0x800A5AE0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
L_800A5AE4:
    // 0x800A5AE4: bnel        $a0, $v1, L_800A5AF4
    if (ctx->r4 != ctx->r3) {
        // 0x800A5AE8: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_800A5AF4;
    }
    goto skip_0;
    // 0x800A5AE8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x800A5AEC: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x800A5AF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_800A5AF4:
    // 0x800A5AF4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800A5AF8: bne         $v1, $zero, L_800A5AE4
    if (ctx->r3 != 0) {
        // 0x800A5AFC: nop
    
            goto L_800A5AE4;
    }
    // 0x800A5AFC: nop

    // 0x800A5B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800A5B04:
    // 0x800A5B04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A5B08: jal         0x800EA05C
    // 0x800A5B0C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800A5B0C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A5B10: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A5B14: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A5B18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A5B1C: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x800A5B20: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x800A5B24: beql        $t8, $zero, L_800A5B50
    if (ctx->r24 == 0) {
        // 0x800A5B28: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_800A5B50;
    }
    goto skip_1;
    // 0x800A5B28: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    skip_1:
    // 0x800A5B2C: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
L_800A5B30:
    // 0x800A5B30: beql        $v0, $a0, L_800A5B50
    if (ctx->r2 == ctx->r4) {
        // 0x800A5B34: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_800A5B50;
    }
    goto skip_2;
    // 0x800A5B34: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    skip_2:
    // 0x800A5B38: lh          $a0, 0xC($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XC);
    // 0x800A5B3C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A5B40: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x800A5B44: bne         $a0, $zero, L_800A5B30
    if (ctx->r4 != 0) {
        // 0x800A5B48: nop
    
            goto L_800A5B30;
    }
    // 0x800A5B48: nop

    // 0x800A5B4C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
L_800A5B50:
    // 0x800A5B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5B54: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x800A5B58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A5B5C: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x800A5B60: sw          $t0, 0x7100($at)
    MEM_W(0X7100, ctx->r1) = ctx->r8;
    // 0x800A5B64: jr          $ra
    // 0x800A5B68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A5B68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A5B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5B6C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5B70: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5B74: jr          $ra
    // 0x800A5B78: lb          $v0, 0x2($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X2);
    return;
    // 0x800A5B78: lb          $v0, 0x2($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X2);
;}
RECOMP_FUNC void func_800A5B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5B7C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5B80: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5B84: jr          $ra
    // 0x800A5B88: lb          $v0, 0x3($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X3);
    return;
    // 0x800A5B88: lb          $v0, 0x3($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X3);
;}
RECOMP_FUNC void func_800A5B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5B8C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5B90: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5B94: jr          $ra
    // 0x800A5B98: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x800A5B98: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_800A5B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5B9C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5BA0: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5BA4: jr          $ra
    // 0x800A5BA8: lbu         $v0, 0x8($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X8);
    return;
    // 0x800A5BA8: lbu         $v0, 0x8($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X8);
;}
RECOMP_FUNC void func_800A5BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5BAC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5BB0: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5BB4: jr          $ra
    // 0x800A5BB8: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
    return;
    // 0x800A5BB8: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
;}
RECOMP_FUNC void func_800A5BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5BBC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5BC0: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5BC4: jr          $ra
    // 0x800A5BC8: lbu         $v0, 0xA($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA);
    return;
    // 0x800A5BC8: lbu         $v0, 0xA($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA);
;}
RECOMP_FUNC void func_800A5BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5BCC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5BD0: lw          $t6, 0x7100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7100);
    // 0x800A5BD4: jr          $ra
    // 0x800A5BD8: lbu         $v0, 0xB($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XB);
    return;
    // 0x800A5BD8: lbu         $v0, 0xB($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XB);
;}
RECOMP_FUNC void func_800A5BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5BE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5BEC: jal         0x80085920
    // 0x800A5BF0: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    _chbaddieDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800A5BF0: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    after_0:
    // 0x800A5BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5BFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5C0C: jal         0x8001ACCC
    // 0x800A5C10: addiu       $a0, $zero, 0x2C0
    ctx->r4 = ADD32(0, 0X2C0);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800A5C10: addiu       $a0, $zero, 0x2C0
    ctx->r4 = ADD32(0, 0X2C0);
    after_0:
    // 0x800A5C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5C18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A5C1C: sw          $v0, 0x7110($at)
    MEM_W(0X7110, ctx->r1) = ctx->r2;
    // 0x800A5C20: jr          $ra
    // 0x800A5C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A5C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A5C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5C30: jal         0x80088030
    // 0x800A5C34: nop

    _gccollectDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800A5C34: nop

    after_0:
    // 0x800A5C38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5C3C: jal         0x80085928
    // 0x800A5C40: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    _chbaddieDll_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x800A5C40: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    after_1:
    // 0x800A5C44: jal         0x8008A518
    // 0x800A5C48: nop

    _subaddietaxi_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x800A5C48: nop

    after_2:
    // 0x800A5C4C: jal         0x800EA05C
    // 0x800A5C50: nop

    func_800EA05C(rdram, ctx);
        goto after_3;
    // 0x800A5C50: nop

    after_3:
    // 0x800A5C54: jal         0x80087850
    // 0x800A5C58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _cosectionstor_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x800A5C58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800A5C5C: jal         0x80108C14
    // 0x800A5C60: nop

    func_80108C14(rdram, ctx);
        goto after_5;
    // 0x800A5C60: nop

    after_5:
    // 0x800A5C64: jal         0x800FFB74
    // 0x800A5C68: nop

    func_800FFB74(rdram, ctx);
        goto after_6;
    // 0x800A5C68: nop

    after_6:
    // 0x800A5C6C: jal         0x8001E204
    // 0x800A5C70: nop

    func_8001E204(rdram, ctx);
        goto after_7;
    // 0x800A5C70: nop

    after_7:
    // 0x800A5C74: bnel        $v0, $zero, L_800A5C88
    if (ctx->r2 != 0) {
        // 0x800A5C78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A5C88;
    }
    goto skip_0;
    // 0x800A5C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A5C7C: jal         0x800BDCDC
    // 0x800A5C80: nop

    func_800BDCDC(rdram, ctx);
        goto after_8;
    // 0x800A5C80: nop

    after_8:
    // 0x800A5C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A5C88:
    // 0x800A5C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5C8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5C94: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5C98: lbu         $t6, 0x7115($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7115);
    // 0x800A5C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5CA4: beql        $t6, $zero, L_800A5CB8
    if (ctx->r14 == 0) {
        // 0x800A5CA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A5CB8;
    }
    goto skip_0;
    // 0x800A5CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A5CAC: jal         0x801002C0
    // 0x800A5CB0: nop

    func_801002C0(rdram, ctx);
        goto after_0;
    // 0x800A5CB0: nop

    after_0:
    // 0x800A5CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A5CB8:
    // 0x800A5CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5CBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5CCC: jal         0x8008A510
    // 0x800A5CD0: nop

    _subaddietaxi_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800A5CD0: nop

    after_0:
    // 0x800A5CD4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5CD8: jal         0x80085930
    // 0x800A5CDC: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    _chbaddieDll_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800A5CDC: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    after_1:
    // 0x800A5CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5CE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5CF0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A5CF4: jr          $ra
    // 0x800A5CF8: sb          $a0, 0x7115($at)
    MEM_B(0X7115, ctx->r1) = ctx->r4;
    return;
    // 0x800A5CF8: sb          $a0, 0x7115($at)
    MEM_B(0X7115, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800A5CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5D04: jal         0x800FF62C
    // 0x800A5D08: nop

    func_800FF62C(rdram, ctx);
        goto after_0;
    // 0x800A5D08: nop

    after_0:
    // 0x800A5D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5D14: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5D1C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A5D20: lbu         $t6, 0x7114($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7114);
    // 0x800A5D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5D2C: beq         $t6, $zero, L_800A5D48
    if (ctx->r14 == 0) {
        // 0x800A5D30: nop
    
            goto L_800A5D48;
    }
    // 0x800A5D30: nop

    // 0x800A5D34: jal         0x8010D1E8
    // 0x800A5D38: nop

    func_8010D1E8(rdram, ctx);
        goto after_0;
    // 0x800A5D38: nop

    after_0:
    // 0x800A5D3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5D40: jal         0x80085938
    // 0x800A5D44: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    _chbaddieDll_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800A5D44: addiu       $a0, $a0, 0x7110
    ctx->r4 = ADD32(ctx->r4, 0X7110);
    after_1:
L_800A5D48:
    // 0x800A5D48: jal         0x800FFB74
    // 0x800A5D4C: nop

    func_800FFB74(rdram, ctx);
        goto after_2;
    // 0x800A5D4C: nop

    after_2:
    // 0x800A5D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5D58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5D60: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A5D64: jr          $ra
    // 0x800A5D68: addiu       $v0, $v0, 0x7110
    ctx->r2 = ADD32(ctx->r2, 0X7110);
    return;
    // 0x800A5D68: addiu       $v0, $v0, 0x7110
    ctx->r2 = ADD32(ctx->r2, 0X7110);
;}
RECOMP_FUNC void func_800A5D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5D6C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A5D70: lw          $a0, 0x7110($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7110);
    // 0x800A5D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5D7C: beql        $a0, $zero, L_800A5D98
    if (ctx->r4 == 0) {
        // 0x800A5D80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A5D98;
    }
    goto skip_0;
    // 0x800A5D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A5D84: jal         0x8001BAFC
    // 0x800A5D88: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800A5D88: nop

    after_0:
    // 0x800A5D8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A5D90: sw          $v0, 0x7110($at)
    MEM_W(0X7110, ctx->r1) = ctx->r2;
    // 0x800A5D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A5D98:
    // 0x800A5D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5D9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5DB0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800A5DB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A5DB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A5DBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A5DC0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x800A5DC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A5DC8: jal         0x800EE7F8
    // 0x800A5DCC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A5DCC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x800A5DD0: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800A5DD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A5DD8: lwc1        $f6, 0x55D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55D0);
    // 0x800A5DDC: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800A5DE0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A5DE4: lui         $a3, 0x3EDC
    ctx->r7 = S32(0X3EDC << 16);
    // 0x800A5DE8: ori         $a3, $a3, 0x28F6
    ctx->r7 = ctx->r7 | 0X28F6;
    // 0x800A5DEC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x800A5DF0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x800A5DF4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800A5DF8: jal         0x800F10B4
    // 0x800A5DFC: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x800A5DFC: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    after_1:
    // 0x800A5E00: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800A5E04: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A5E08: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A5E0C: jal         0x800F554C
    // 0x800A5E10: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F554C(rdram, ctx);
        goto after_2;
    // 0x800A5E10: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x800A5E14: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A5E18: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x800A5E1C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A5E20: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800A5E24: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A5E28: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x800A5E2C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800A5E30: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x800A5E34: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A5E38: srl         $t7, $a0, 7
    ctx->r15 = S32(U32(ctx->r4) >> 7);
    // 0x800A5E3C: jal         0x800F5680
    // 0x800A5E40: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F5680(rdram, ctx);
        goto after_3;
    // 0x800A5E40: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x800A5E44: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800A5E48: addiu       $a1, $s0, 0x44
    ctx->r5 = ADD32(ctx->r16, 0X44);
    // 0x800A5E4C: jal         0x800F1988
    // 0x800A5E50: addiu       $a2, $s0, 0x48
    ctx->r6 = ADD32(ctx->r16, 0X48);
    func_800F1988(rdram, ctx);
        goto after_4;
    // 0x800A5E50: addiu       $a2, $s0, 0x48
    ctx->r6 = ADD32(ctx->r16, 0X48);
    after_4:
    // 0x800A5E54: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800A5E58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A5E5C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800A5E60: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x800A5E64: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800A5E68: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A5E6C: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x800A5E70: jal         0x800EF334
    // 0x800A5E74: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_800EF334(rdram, ctx);
        goto after_5;
    // 0x800A5E74: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800A5E78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5E7C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x800A5E80: jal         0x800EE780
    // 0x800A5E84: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800EE780(rdram, ctx);
        goto after_6;
    // 0x800A5E84: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x800A5E88: jal         0x800DF830
    // 0x800A5E8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800DF830(rdram, ctx);
        goto after_7;
    // 0x800A5E8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x800A5E90: jal         0x800D674C
    // 0x800A5E94: addiu       $a0, $zero, 0x637
    ctx->r4 = ADD32(0, 0X637);
    func_800D674C(rdram, ctx);
        goto after_8;
    // 0x800A5E94: addiu       $a0, $zero, 0x637
    ctx->r4 = ADD32(0, 0X637);
    after_8:
    // 0x800A5E98: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5E9C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800A5EA0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800A5EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A5EA8: jal         0x800DE448
    // 0x800A5EAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800DE448(rdram, ctx);
        goto after_9;
    // 0x800A5EAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x800A5EB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A5EB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A5EB8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800A5EBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A5EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5EC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800A5EC8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800A5ECC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800A5ED0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800A5ED4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800A5ED8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800A5EDC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800A5EE0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800A5EE4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800A5EE8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A5EEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A5EF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A5EF4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800A5EF8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800A5EFC: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800A5F00: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800A5F04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800A5F08: beq         $fp, $zero, L_800A61A4
    if (ctx->r30 == 0) {
        // 0x800A5F0C: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_800A61A4;
    }
    // 0x800A5F0C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800A5F10: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x800A5F14: addiu       $fp, $fp, 0xF
    ctx->r30 = ADD32(ctx->r30, 0XF);
    // 0x800A5F18: andi        $t7, $fp, 0xFFF0
    ctx->r15 = ctx->r30 & 0XFFF0;
    // 0x800A5F1C: beq         $a2, $zero, L_800A61A4
    if (ctx->r6 == 0) {
        // 0x800A5F20: or          $fp, $t7, $zero
        ctx->r30 = ctx->r15 | 0;
            goto L_800A61A4;
    }
    // 0x800A5F20: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x800A5F24: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x800A5F28: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x800A5F2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800A5F30: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A5F34: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x800A5F38: lui         $t6, 0x12
    ctx->r14 = S32(0X12 << 16);
    // 0x800A5F3C: addiu       $t6, $t6, -0x5D08
    ctx->r14 = ADD32(ctx->r14, -0X5D08);
    // 0x800A5F40: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A5F44: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800A5F48: bne         $fp, $zero, L_800A5F54
    if (ctx->r30 != 0) {
        // 0x800A5F4C: nop
    
            goto L_800A5F54;
    }
    // 0x800A5F4C: nop

    // 0x800A5F50: break       7
    do_break(2148163408);
L_800A5F54:
    // 0x800A5F54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A5F58: bne         $fp, $at, L_800A5F6C
    if (ctx->r30 != ctx->r1) {
        // 0x800A5F5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A5F6C;
    }
    // 0x800A5F5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A5F60: bne         $t8, $at, L_800A5F6C
    if (ctx->r24 != ctx->r1) {
        // 0x800A5F64: nop
    
            goto L_800A5F6C;
    }
    // 0x800A5F64: nop

    // 0x800A5F68: break       6
    do_break(2148163432);
L_800A5F6C:
    // 0x800A5F6C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800A5F70: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A5F74: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A5F78: lui         $t7, 0xF900
    ctx->r15 = S32(0XF900 << 16);
    // 0x800A5F7C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800A5F80: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800A5F84: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A5F88: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x800A5F8C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800A5F90: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x800A5F94: mflo        $t1
    ctx->r9 = lo;
    // 0x800A5F98: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800A5F9C: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x800A5FA0: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800A5FA4: mflo        $t8
    ctx->r24 = lo;
    // 0x800A5FA8: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x800A5FAC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A5FB0: lui         $t6, 0xFD48
    ctx->r14 = S32(0XFD48 << 16);
    // 0x800A5FB4: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x800A5FB8: ori         $t6, $t6, 0x12F
    ctx->r14 = ctx->r14 | 0X12F;
    // 0x800A5FBC: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x800A5FC0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x800A5FC4: addu        $s1, $s0, $a2
    ctx->r17 = ADD32(ctx->r16, ctx->r6);
    // 0x800A5FC8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A5FCC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x800A5FD0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800A5FD4: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x800A5FD8: jal         0x8002E330
    // 0x800A5FDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800A5FDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x800A5FE0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800A5FE4: addiu       $a1, $fp, 0x7
    ctx->r5 = ADD32(ctx->r30, 0X7);
    // 0x800A5FE8: sra         $t7, $a1, 3
    ctx->r15 = S32(SIGNED(ctx->r5) >> 3);
    // 0x800A5FEC: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x800A5FF0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x800A5FF4: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x800A5FF8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800A5FFC: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x800A6000: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x800A6004: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800A6008: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x800A600C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800A6010: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x800A6014: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A6018: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x800A601C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800A6020: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x800A6024: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800A6028: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800A602C: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800A6030: slt         $at, $s0, $s1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800A6034: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x800A6038: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x800A603C: beq         $at, $zero, L_800A6180
    if (ctx->r1 == 0) {
        // 0x800A6040: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800A6180;
    }
    // 0x800A6040: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A6044: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x800A6048: addu        $a0, $a3, $fp
    ctx->r4 = ADD32(ctx->r7, ctx->r30);
    // 0x800A604C: addiu       $a1, $a0, -0x1
    ctx->r5 = ADD32(ctx->r4, -0X1);
    // 0x800A6050: andi        $t9, $v0, 0xFFF
    ctx->r25 = ctx->r2 & 0XFFF;
    // 0x800A6054: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x800A6058: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800A605C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800A6060: or          $s1, $t6, $at
    ctx->r17 = ctx->r14 | ctx->r1;
    // 0x800A6064: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800A6068: sll         $s4, $t8, 12
    ctx->r20 = S32(ctx->r24 << 12);
    // 0x800A606C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800A6070: or          $s2, $s4, $at
    ctx->r18 = ctx->r20 | ctx->r1;
    // 0x800A6074: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800A6078: or          $s3, $t6, $at
    ctx->r19 = ctx->r14 | ctx->r1;
    // 0x800A607C: sll         $s5, $a0, 2
    ctx->r21 = S32(ctx->r4 << 2);
    // 0x800A6080: andi        $t6, $s5, 0xFFF
    ctx->r14 = ctx->r21 & 0XFFF;
    // 0x800A6084: sll         $s6, $a3, 2
    ctx->r22 = S32(ctx->r7 << 2);
    // 0x800A6088: andi        $t9, $s6, 0xFFF
    ctx->r25 = ctx->r22 & 0XFFF;
    // 0x800A608C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x800A6090: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800A6094: lui         $ra, 0x400
    ctx->r31 = S32(0X400 << 16);
    // 0x800A6098: ori         $ra, $ra, 0x400
    ctx->r31 = ctx->r31 | 0X400;
    // 0x800A609C: or          $s5, $t7, $at
    ctx->r21 = ctx->r15 | ctx->r1;
    // 0x800A60A0: sll         $s6, $t9, 12
    ctx->r22 = S32(ctx->r25 << 12);
    // 0x800A60A4: sll         $s7, $a3, 21
    ctx->r23 = S32(ctx->r7 << 21);
    // 0x800A60A8: lui         $t5, 0xF100
    ctx->r13 = S32(0XF100 << 16);
    // 0x800A60AC: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x800A60B0: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
L_800A60B4:
    // 0x800A60B4: subu        $v0, $t2, $s0
    ctx->r2 = SUB32(ctx->r10, ctx->r16);
    // 0x800A60B8: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800A60BC: beq         $at, $zero, L_800A60C8
    if (ctx->r1 == 0) {
        // 0x800A60C0: sll         $a1, $s0, 2
        ctx->r5 = S32(ctx->r16 << 2);
            goto L_800A60C8;
    }
    // 0x800A60C0: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x800A60C4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_800A60C8:
    // 0x800A60C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800A60CC: addu        $t0, $s0, $t1
    ctx->r8 = ADD32(ctx->r16, ctx->r9);
    // 0x800A60D0: addiu       $a2, $t0, -0x1
    ctx->r6 = ADD32(ctx->r8, -0X1);
    // 0x800A60D4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A60D8: andi        $t9, $a1, 0xFFF
    ctx->r25 = ctx->r5 & 0XFFF;
    // 0x800A60DC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800A60E0: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x800A60E4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800A60E8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800A60EC: or          $t6, $s1, $t9
    ctx->r14 = ctx->r17 | ctx->r25;
    // 0x800A60F0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800A60F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800A60F8: or          $t9, $s2, $t8
    ctx->r25 = ctx->r18 | ctx->r24;
    // 0x800A60FC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A6100: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800A6104: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800A6108: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800A610C: or          $t7, $s4, $t8
    ctx->r15 = ctx->r20 | ctx->r24;
    // 0x800A6110: or          $t6, $s3, $a1
    ctx->r14 = ctx->r19 | ctx->r5;
    // 0x800A6114: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800A6118: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800A611C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A6120: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800A6124: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x800A6128: or          $t6, $s5, $t9
    ctx->r14 = ctx->r21 | ctx->r25;
    // 0x800A612C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800A6130: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800A6134: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A6138: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A613C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800A6140: or          $t9, $s6, $t8
    ctx->r25 = ctx->r22 | ctx->r24;
    // 0x800A6144: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800A6148: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x800A614C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800A6150: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800A6154: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A6158: or          $t8, $s7, $t7
    ctx->r24 = ctx->r23 | ctx->r15;
    // 0x800A615C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A6160: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800A6164: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800A6168: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800A616C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800A6170: sw          $ra, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r31;
    // 0x800A6174: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800A6178: bne         $at, $zero, L_800A60B4
    if (ctx->r1 != 0) {
        // 0x800A617C: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800A60B4;
    }
    // 0x800A617C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_800A6180:
    // 0x800A6180: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800A6184: lui         $t6, 0x12
    ctx->r14 = S32(0X12 << 16);
    // 0x800A6188: addiu       $t6, $t6, -0x5CB0
    ctx->r14 = ADD32(ctx->r14, -0X5CB0);
    // 0x800A618C: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x800A6190: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A6194: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800A6198: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x800A619C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800A61A0: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
L_800A61A4:
    // 0x800A61A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800A61A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A61AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A61B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A61B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800A61B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800A61BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800A61C0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800A61C4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800A61C8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800A61CC: jr          $ra
    // 0x800A61D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800A61D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800A61D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A61D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A61D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A61DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A61E0: addiu       $t6, $t6, -0x5C80
    ctx->r14 = ADD32(ctx->r14, -0X5C80);
    // 0x800A61E4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800A61E8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800A61EC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800A61F0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x800A61F4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800A61F8: addiu       $t0, $t0, -0x5C70
    ctx->r8 = ADD32(ctx->r8, -0X5C70);
    // 0x800A61FC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800A6200: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800A6204: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800A6208: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x800A620C: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x800A6210: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    // 0x800A6214: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x800A6218: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x800A621C: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x800A6220: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x800A6224: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x800A6228: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x800A622C: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x800A6230: jal         0x800DF580
    // 0x800A6234: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    func_800DF580(rdram, ctx);
        goto after_0;
    // 0x800A6234: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    after_0:
    // 0x800A6238: jal         0x800DF830
    // 0x800A623C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800DF830(rdram, ctx);
        goto after_1;
    // 0x800A623C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x800A6240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A6244: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A6248: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A6250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6250: addiu       $sp, $sp, -0x250
    ctx->r29 = ADD32(ctx->r29, -0X250);
    // 0x800A6254: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A6258: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A625C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x800A6260: sw          $a0, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r4;
    // 0x800A6264: sw          $a1, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r5;
    // 0x800A6268: sw          $a2, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r6;
    // 0x800A626C: lhu         $a0, 0x76($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X76);
    // 0x800A6270: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800A6274: srl         $t7, $a0, 7
    ctx->r15 = S32(U32(ctx->r4) >> 7);
    // 0x800A6278: jal         0x800F53D0
    // 0x800A627C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x800A627C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x800A6280: lw          $t8, 0x250($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X250);
    // 0x800A6284: sw          $v0, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r2;
    // 0x800A6288: lhu         $a0, 0x76($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X76);
    // 0x800A628C: srl         $t9, $a0, 7
    ctx->r25 = S32(U32(ctx->r4) >> 7);
    // 0x800A6290: jal         0x800F5410
    // 0x800A6294: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800F5410(rdram, ctx);
        goto after_1;
    // 0x800A6294: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_1:
    // 0x800A6298: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A629C: jal         0x80084F40
    // 0x800A62A0: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    _bapreload_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800A62A0: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    after_2:
    // 0x800A62A4: jal         0x800D674C
    // 0x800A62A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D674C(rdram, ctx);
        goto after_3;
    // 0x800A62A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800A62AC: sw          $v0, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r2;
    // 0x800A62B0: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    // 0x800A62B4: jal         0x80092B04
    // 0x800A62B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092B04(rdram, ctx);
        goto after_4;
    // 0x800A62B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800A62BC: sw          $v0, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r2;
    // 0x800A62C0: jal         0x800F274C
    // 0x800A62C4: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    func_800F274C(rdram, ctx);
        goto after_5;
    // 0x800A62C4: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    after_5:
    // 0x800A62C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A62CC: jal         0x800EEAA4
    // 0x800A62D0: lw          $a1, 0x258($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X258);
    func_800EEAA4(rdram, ctx);
        goto after_6;
    // 0x800A62D0: lw          $a1, 0x258($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X258);
    after_6:
    // 0x800A62D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A62D8: lwc1        $f4, 0x55D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55D4);
    // 0x800A62DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A62E0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800A62E4: nop

    // 0x800A62E8: bc1tl       L_800A69E0
    if (c1cs) {
        // 0x800A62EC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_800A69E0;
    }
    goto skip_0;
    // 0x800A62EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x800A62F0: lwc1        $f12, 0x55D8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X55D8);
    // 0x800A62F4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800A62F8: nop

    // 0x800A62FC: bc1fl       L_800A6350
    if (!c1cs) {
        // 0x800A6300: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800A6350;
    }
    goto skip_1;
    // 0x800A6300: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x800A6304: jal         0x80013A7C
    // 0x800A6308: nop

    func_80013A7C(rdram, ctx);
        goto after_7;
    // 0x800A6308: nop

    after_7:
    // 0x800A630C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800A6310: addiu       $a0, $sp, 0x1AC
    ctx->r4 = ADD32(ctx->r29, 0X1AC);
    // 0x800A6314: lw          $a1, 0x258($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X258);
    // 0x800A6318: jal         0x800EE97C
    // 0x800A631C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EE97C(rdram, ctx);
        goto after_8;
    // 0x800A631C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x800A6320: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800A6324: addiu       $a0, $sp, 0x168
    ctx->r4 = ADD32(ctx->r29, 0X168);
    // 0x800A6328: jal         0x800F254C
    // 0x800A632C: addiu       $a1, $sp, 0x1AC
    ctx->r5 = ADD32(ctx->r29, 0X1AC);
    func_800F254C(rdram, ctx);
        goto after_9;
    // 0x800A632C: addiu       $a1, $sp, 0x1AC
    ctx->r5 = ADD32(ctx->r29, 0X1AC);
    after_9:
    // 0x800A6330: addiu       $a0, $sp, 0x168
    ctx->r4 = ADD32(ctx->r29, 0X168);
    // 0x800A6334: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A6338: jal         0x800F23D0
    // 0x800A633C: lw          $a2, 0x258($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X258);
    func_800F23D0(rdram, ctx);
        goto after_10;
    // 0x800A633C: lw          $a2, 0x258($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X258);
    after_10:
    // 0x800A6340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A6344: jal         0x800EEAA4
    // 0x800A6348: lw          $a1, 0x258($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X258);
    func_800EEAA4(rdram, ctx);
        goto after_11;
    // 0x800A6348: lw          $a1, 0x258($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X258);
    after_11:
    // 0x800A634C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_800A6350:
    // 0x800A6350: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800A6354: lw          $v0, 0x258($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X258);
    // 0x800A6358: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A635C: div.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x800A6360: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A6364: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800A6368: nop

    // 0x800A636C: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A6370: sub.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x800A6374: swc1        $f6, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->f6.u32l;
    // 0x800A6378: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A637C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A6380: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x800A6384: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800A6388: nop

    // 0x800A638C: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800A6390: swc1        $f10, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f10.u32l;
    // 0x800A6394: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A6398: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800A639C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A63A0: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x800A63A4: nop

    // 0x800A63A8: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A63AC: swc1        $f4, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f4.u32l;
    // 0x800A63B0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A63B4: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A63B8: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x800A63BC: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A63C0: nop

    // 0x800A63C4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800A63C8: swc1        $f6, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f6.u32l;
    // 0x800A63CC: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A63D0: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A63D4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A63D8: nop

    // 0x800A63DC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800A63E0: sub.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x800A63E4: swc1        $f8, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->f8.u32l;
    // 0x800A63E8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A63EC: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800A63F0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A63F4: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800A63F8: nop

    // 0x800A63FC: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800A6400: swc1        $f4, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->f4.u32l;
    // 0x800A6404: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A6408: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A640C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x800A6410: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800A6414: nop

    // 0x800A6418: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800A641C: swc1        $f6, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->f6.u32l;
    // 0x800A6420: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A6424: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A6428: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x800A642C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800A6430: nop

    // 0x800A6434: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800A6438: swc1        $f8, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->f8.u32l;
    // 0x800A643C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800A6440: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A6444: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800A6448: nop

    // 0x800A644C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800A6450: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x800A6454: jal         0x80019CD4
    // 0x800A6458: swc1        $f10, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f10.u32l;
    func_80019CD4(rdram, ctx);
        goto after_12;
    // 0x800A6458: swc1        $f10, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x800A645C: jal         0x80092BE8
    // 0x800A6460: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_80092BE8(rdram, ctx);
        goto after_13;
    // 0x800A6460: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_13:
    // 0x800A6464: jal         0x80018FE8
    // 0x800A6468: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80018FE8(rdram, ctx);
        goto after_14;
    // 0x800A6468: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_14:
    // 0x800A646C: jal         0x8009BFCC
    // 0x800A6470: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_8009BFCC(rdram, ctx);
        goto after_15;
    // 0x800A6470: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_15:
    // 0x800A6474: jal         0x80018F50
    // 0x800A6478: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80018F50(rdram, ctx);
        goto after_16;
    // 0x800A6478: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_16:
    // 0x800A647C: jal         0x8009C53C
    // 0x800A6480: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_8009C53C(rdram, ctx);
        goto after_17;
    // 0x800A6480: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_17:
    // 0x800A6484: jal         0x8001907C
    // 0x800A6488: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8001907C(rdram, ctx);
        goto after_18;
    // 0x800A6488: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_18:
    // 0x800A648C: addiu       $s0, $sp, 0x1D0
    ctx->r16 = ADD32(ctx->r29, 0X1D0);
    // 0x800A6490: jal         0x80018AD0
    // 0x800A6494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018AD0(rdram, ctx);
        goto after_19;
    // 0x800A6494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x800A6498: addiu       $a1, $sp, 0x210
    ctx->r5 = ADD32(ctx->r29, 0X210);
    // 0x800A649C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800A64A0: jal         0x800F27D4
    // 0x800A64A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F27D4(rdram, ctx);
        goto after_20;
    // 0x800A64A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x800A64A8: lw          $t5, 0x1C8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C8);
    // 0x800A64AC: lw          $t6, 0x1C4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C4);
    // 0x800A64B0: beq         $t5, $t6, L_800A6538
    if (ctx->r13 == ctx->r14) {
        // 0x800A64B4: nop
    
            goto L_800A6538;
    }
    // 0x800A64B4: nop

    // 0x800A64B8: lw          $t7, 0x1BC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1BC);
    // 0x800A64BC: beq         $t7, $zero, L_800A64DC
    if (ctx->r15 == 0) {
        // 0x800A64C0: nop
    
            goto L_800A64DC;
    }
    // 0x800A64C0: nop

    // 0x800A64C4: jal         0x8008CA74
    // 0x800A64C8: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_8008CA74(rdram, ctx);
        goto after_21;
    // 0x800A64C8: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_21:
    // 0x800A64CC: jal         0x800DF41C
    // 0x800A64D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_22;
    // 0x800A64D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_22:
    // 0x800A64D4: b           L_800A6548
    // 0x800A64D8: nop

        goto L_800A6548;
    // 0x800A64D8: nop

L_800A64DC:
    // 0x800A64DC: jal         0x800DF330
    // 0x800A64E0: nop

    func_800DF330(rdram, ctx);
        goto after_23;
    // 0x800A64E0: nop

    after_23:
    // 0x800A64E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A64E8: jal         0x800B27E0
    // 0x800A64EC: lw          $a0, 0x1C4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C4);
    func_800B27E0(rdram, ctx);
        goto after_24;
    // 0x800A64EC: lw          $a0, 0x1C4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C4);
    after_24:
    // 0x800A64F0: sw          $v0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r2;
    // 0x800A64F4: jal         0x800B27E0
    // 0x800A64F8: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    func_800B27E0(rdram, ctx);
        goto after_25;
    // 0x800A64F8: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    after_25:
    // 0x800A64FC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800A6500: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    // 0x800A6504: beq         $t8, $zero, L_800A6548
    if (ctx->r24 == 0) {
        // 0x800A6508: nop
    
            goto L_800A6548;
    }
    // 0x800A6508: nop

    // 0x800A650C: jal         0x80092E80
    // 0x800A6510: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    func_80092E80(rdram, ctx);
        goto after_26;
    // 0x800A6510: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    after_26:
    // 0x800A6514: lw          $a3, 0x15C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X15C);
    // 0x800A6518: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A651C: lw          $a1, 0x160($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X160);
    // 0x800A6520: jal         0x800AE708
    // 0x800A6524: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800AE708(rdram, ctx);
        goto after_27;
    // 0x800A6524: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_27:
    // 0x800A6528: jal         0x800DF72C
    // 0x800A652C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800DF72C(rdram, ctx);
        goto after_28;
    // 0x800A652C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_28:
    // 0x800A6530: b           L_800A6548
    // 0x800A6534: nop

        goto L_800A6548;
    // 0x800A6534: nop

L_800A6538:
    // 0x800A6538: jal         0x80092E80
    // 0x800A653C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_80092E80(rdram, ctx);
        goto after_29;
    // 0x800A653C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_29:
    // 0x800A6540: jal         0x800DF72C
    // 0x800A6544: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF72C(rdram, ctx);
        goto after_30;
    // 0x800A6544: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_30:
L_800A6548:
    // 0x800A6548: jal         0x800A06E8
    // 0x800A654C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_800A06E8(rdram, ctx);
        goto after_31;
    // 0x800A654C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_31:
    // 0x800A6550: jal         0x800DF540
    // 0x800A6554: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    func_800DF540(rdram, ctx);
        goto after_32;
    // 0x800A6554: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    after_32:
    // 0x800A6558: jal         0x800A61D4
    // 0x800A655C: nop

    func_800A61D4(rdram, ctx);
        goto after_33;
    // 0x800A655C: nop

    after_33:
    // 0x800A6560: jal         0x800A7180
    // 0x800A6564: nop

    func_800A7180(rdram, ctx);
        goto after_34;
    // 0x800A6564: nop

    after_34:
    // 0x800A6568: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800A656C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x800A6570: lui         $t7, 0xFF48
    ctx->r15 = S32(0XFF48 << 16);
    // 0x800A6574: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800A6578: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A657C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800A6580: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A6584: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800A6588: ori         $t7, $t7, 0x12F
    ctx->r15 = ctx->r15 | 0X12F;
    // 0x800A658C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A6590: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800A6594: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A6598: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800A659C: jal         0x8001575C
    // 0x800A65A0: sw          $v1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r3;
    func_8001575C(rdram, ctx);
        goto after_35;
    // 0x800A65A0: sw          $v1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r3;
    after_35:
    // 0x800A65A4: lw          $a3, 0x144($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X144);
    // 0x800A65A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A65AC: addu        $t8, $v0, $at
    ctx->r24 = ADD32(ctx->r2, ctx->r1);
    // 0x800A65B0: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x800A65B4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800A65B8: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x800A65BC: ori         $t5, $t5, 0x800
    ctx->r13 = ctx->r13 | 0X800;
    // 0x800A65C0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800A65C4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800A65C8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A65CC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800A65D0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800A65D4: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x800A65D8: ori         $t7, $t7, 0xA01
    ctx->r15 = ctx->r15 | 0XA01;
    // 0x800A65DC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800A65E0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800A65E4: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x800A65E8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800A65EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800A65F0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800A65F4: lui         $t6, 0xFFFE
    ctx->r14 = S32(0XFFFE << 16);
    // 0x800A65F8: ori         $t6, $t6, 0xFFFE
    ctx->r14 = ctx->r14 | 0XFFFE;
    // 0x800A65FC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800A6600: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800A6604: lui         $t5, 0xF700
    ctx->r13 = S32(0XF700 << 16);
    // 0x800A6608: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800A660C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800A6610: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800A6614: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x800A6618: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x800A661C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800A6620: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800A6624: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A6628: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800A662C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800A6630: lui         $t5, 0xF64B
    ctx->r13 = S32(0XF64B << 16);
    // 0x800A6634: ori         $t5, $t5, 0xC38C
    ctx->r13 = ctx->r13 | 0XC38C;
    // 0x800A6638: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800A663C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800A6640: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A6644: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800A6648: jal         0x80092BDC
    // 0x800A664C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_80092BDC(rdram, ctx);
        goto after_36;
    // 0x800A664C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_36:
    // 0x800A6650: lw          $t6, 0x1C8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C8);
    // 0x800A6654: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800A6658: lw          $a0, 0x254($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X254);
    // 0x800A665C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A6664: jal         0x800DE448
    // 0x800A6668: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800DE448(rdram, ctx);
        goto after_37;
    // 0x800A6668: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_37:
    // 0x800A666C: jal         0x80092738
    // 0x800A6670: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    func_80092738(rdram, ctx);
        goto after_38;
    // 0x800A6670: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_38:
    // 0x800A6674: beq         $v0, $zero, L_800A66C4
    if (ctx->r2 == 0) {
        // 0x800A6678: nop
    
            goto L_800A66C4;
    }
    // 0x800A6678: nop

    // 0x800A667C: jal         0x800844F8
    // 0x800A6680: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    _babackpack_entrypoint_2(rdram, ctx);
        goto after_39;
    // 0x800A6680: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_39:
    // 0x800A6684: jal         0x800DF540
    // 0x800A6688: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    func_800DF540(rdram, ctx);
        goto after_40;
    // 0x800A6688: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    after_40:
    // 0x800A668C: jal         0x800A61D4
    // 0x800A6690: nop

    func_800A61D4(rdram, ctx);
        goto after_41;
    // 0x800A6690: nop

    after_41:
    // 0x800A6694: jal         0x80084520
    // 0x800A6698: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    _babackpack_get_scale(rdram, ctx);
        goto after_42;
    // 0x800A6698: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    after_42:
    // 0x800A669C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    // 0x800A66A0: jal         0x800844F0
    // 0x800A66A4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    _babackpack_entrypoint_1(rdram, ctx);
        goto after_43;
    // 0x800A66A4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_43:
    // 0x800A66A8: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A66AC: lw          $a0, 0x254($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X254);
    // 0x800A66B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A66B4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x800A66B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A66BC: jal         0x800DE448
    // 0x800A66C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800DE448(rdram, ctx);
        goto after_44;
    // 0x800A66C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_44:
L_800A66C4:
    // 0x800A66C4: jal         0x800A7180
    // 0x800A66C8: nop

    func_800A7180(rdram, ctx);
        goto after_45;
    // 0x800A66C8: nop

    after_45:
    // 0x800A66CC: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x800A66D0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800A66D4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800A66D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A66DC: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800A66E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A66E4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A66E8: jal         0x800E7CF4
    // 0x800A66EC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    func_800E7CF4(rdram, ctx);
        goto after_46;
    // 0x800A66EC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    after_46:
    // 0x800A66F0: jal         0x800B2840
    // 0x800A66F4: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    func_800B2840(rdram, ctx);
        goto after_47;
    // 0x800A66F4: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    after_47:
    // 0x800A66F8: jal         0x800B2354
    // 0x800A66FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2354(rdram, ctx);
        goto after_48;
    // 0x800A66FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_48:
    // 0x800A6700: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    // 0x800A6704: jal         0x80092BDC
    // 0x800A6708: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_80092BDC(rdram, ctx);
        goto after_49;
    // 0x800A6708: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_49:
    // 0x800A670C: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A6710: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800A6714: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A6718: mul.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800A671C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A6720: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A6724: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x800A6728: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800A672C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x800A6730: addiu       $t0, $sp, 0xC8
    ctx->r8 = ADD32(ctx->r29, 0XC8);
L_800A6734:
    // 0x800A6734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A6738: or          $t3, $t4, $zero
    ctx->r11 = ctx->r12 | 0;
L_800A673C:
    // 0x800A673C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x800A6740: subu        $t9, $t9, $t3
    ctx->r25 = SUB32(ctx->r25, ctx->r11);
    // 0x800A6744: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A6748: addu        $v1, $t0, $t9
    ctx->r3 = ADD32(ctx->r8, ctx->r25);
    // 0x800A674C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A6750: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
L_800A6754:
    // 0x800A6754: beq         $a3, $zero, L_800A6764
    if (ctx->r7 == 0) {
        // 0x800A6758: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_800A6764;
    }
    // 0x800A6758: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A675C: b           L_800A6768
    // 0x800A6760: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_800A6768;
    // 0x800A6760: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800A6764:
    // 0x800A6764: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_800A6768:
    // 0x800A6768: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x800A676C: beq         $a2, $zero, L_800A677C
    if (ctx->r6 == 0) {
        // 0x800A6770: swc1        $f4, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
            goto L_800A677C;
    }
    // 0x800A6770: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x800A6774: b           L_800A6780
    // 0x800A6778: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_800A6780;
    // 0x800A6778: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_800A677C:
    // 0x800A677C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_800A6780:
    // 0x800A6780: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x800A6784: beq         $v0, $zero, L_800A6794
    if (ctx->r2 == 0) {
        // 0x800A6788: swc1        $f6, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
            goto L_800A6794;
    }
    // 0x800A6788: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x800A678C: b           L_800A6798
    // 0x800A6790: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_800A6798;
    // 0x800A6790: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800A6794:
    // 0x800A6794: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_800A6798:
    // 0x800A6798: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A679C: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x800A67A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A67A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A67A8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x800A67AC: mflo        $t5
    ctx->r13 = lo;
    // 0x800A67B0: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x800A67B4: bne         $v0, $t2, L_800A6754
    if (ctx->r2 != ctx->r10) {
        // 0x800A67B8: swc1        $f8, 0x8($t6)
        MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
            goto L_800A6754;
    }
    // 0x800A67B8: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x800A67BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800A67C0: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x800A67C4: bne         $at, $zero, L_800A673C
    if (ctx->r1 != 0) {
        // 0x800A67C8: addiu       $t3, $t3, 0x2
        ctx->r11 = ADD32(ctx->r11, 0X2);
            goto L_800A673C;
    }
    // 0x800A67C8: addiu       $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x800A67CC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800A67D0: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x800A67D4: bne         $at, $zero, L_800A6734
    if (ctx->r1 != 0) {
        // 0x800A67D8: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_800A6734;
    }
    // 0x800A67D8: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x800A67DC: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800A67E0: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
L_800A67E4:
    // 0x800A67E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A67E8: jal         0x800F23D0
    // 0x800A67EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800F23D0(rdram, ctx);
        goto after_50;
    // 0x800A67EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_50:
    // 0x800A67F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A67F4: jal         0x800EF04C
    // 0x800A67F8: lw          $a1, 0x254($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X254);
    func_800EF04C(rdram, ctx);
        goto after_51;
    // 0x800A67F8: lw          $a1, 0x254($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X254);
    after_51:
    // 0x800A67FC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800A6800: addiu       $t7, $sp, 0x128
    ctx->r15 = ADD32(ctx->r29, 0X128);
    // 0x800A6804: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x800A6808: bnel        $at, $zero, L_800A67E4
    if (ctx->r1 != 0) {
        // 0x800A680C: addiu       $a0, $sp, 0x210
        ctx->r4 = ADD32(ctx->r29, 0X210);
            goto L_800A67E4;
    }
    goto skip_2;
    // 0x800A680C: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    skip_2:
    // 0x800A6810: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800A6814: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
L_800A6818:
    // 0x800A6818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A681C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x800A6820: jal         0x800E4190
    // 0x800A6824: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    func_800E4190(rdram, ctx);
        goto after_52;
    // 0x800A6824: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_52:
    // 0x800A6828: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800A682C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800A6830: addiu       $t9, $sp, 0xC8
    ctx->r25 = ADD32(ctx->r29, 0XC8);
    // 0x800A6834: beq         $t8, $zero, L_800A69DC
    if (ctx->r24 == 0) {
        // 0x800A6838: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_800A69DC;
    }
    // 0x800A6838: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800A683C: sltu        $at, $a1, $t9
    ctx->r1 = ctx->r5 < ctx->r25 ? 1 : 0;
    // 0x800A6840: bne         $at, $zero, L_800A6818
    if (ctx->r1 != 0) {
        // 0x800A6844: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800A6818;
    }
    // 0x800A6844: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800A6848: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800A684C: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800A6850: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x800A6854: addiu       $v0, $sp, 0xC8
    ctx->r2 = ADD32(ctx->r29, 0XC8);
    // 0x800A6858: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x800A685C: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x800A6860: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
L_800A6864:
    // 0x800A6864: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x800A6868: nop

    // 0x800A686C: bc1fl       L_800A6880
    if (!c1cs) {
        // 0x800A6870: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_800A6880;
    }
    goto skip_3;
    // 0x800A6870: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x800A6874: b           L_800A6890
    // 0x800A6878: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_800A6890;
    // 0x800A6878: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x800A687C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_800A6880:
    // 0x800A6880: nop

    // 0x800A6884: bc1fl       L_800A6894
    if (!c1cs) {
        // 0x800A6888: lwc1        $f0, 0x4($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
            goto L_800A6894;
    }
    goto skip_4;
    // 0x800A6888: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    skip_4:
    // 0x800A688C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_800A6890:
    // 0x800A6890: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
L_800A6894:
    // 0x800A6894: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800A6898: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800A689C: nop

    // 0x800A68A0: bc1fl       L_800A68B4
    if (!c1cs) {
        // 0x800A68A4: c.lt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
            goto L_800A68B4;
    }
    goto skip_5;
    // 0x800A68A4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    skip_5:
    // 0x800A68A8: b           L_800A68C4
    // 0x800A68AC: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_800A68C4;
    // 0x800A68AC: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x800A68B0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
L_800A68B4:
    // 0x800A68B4: nop

    // 0x800A68B8: bc1f        L_800A68C4
    if (!c1cs) {
        // 0x800A68BC: nop
    
            goto L_800A68C4;
    }
    // 0x800A68BC: nop

    // 0x800A68C0: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_800A68C4:
    // 0x800A68C4: bnel        $a1, $v0, L_800A6864
    if (ctx->r5 != ctx->r2) {
        // 0x800A68C8: lwc1        $f0, 0x0($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
            goto L_800A6864;
    }
    goto skip_6;
    // 0x800A68C8: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    skip_6:
    // 0x800A68CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A68D0: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x800A68D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800A68D8: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x800A68DC: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x800A68E0: bc1fl       L_800A68F0
    if (!c1cs) {
        // 0x800A68E4: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_800A68F0;
    }
    goto skip_7;
    // 0x800A68E4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_7:
    // 0x800A68E8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x800A68EC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_800A68F0:
    // 0x800A68F0: nop

    // 0x800A68F4: bc1fl       L_800A6904
    if (!c1cs) {
        // 0x800A68F8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_800A6904;
    }
    goto skip_8;
    // 0x800A68F8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_8:
    // 0x800A68FC: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x800A6900: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_800A6904:
    // 0x800A6904: trunc.w.s   $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x800A6908: bc1fl       L_800A6918
    if (!c1cs) {
        // 0x800A690C: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_800A6918;
    }
    goto skip_9;
    // 0x800A690C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_9:
    // 0x800A6910: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800A6914: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_800A6918:
    // 0x800A6918: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800A691C: bc1fl       L_800A692C
    if (!c1cs) {
        // 0x800A6920: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_800A692C;
    }
    goto skip_10;
    // 0x800A6920: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_10:
    // 0x800A6924: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x800A6928: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_800A692C:
    // 0x800A692C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800A6930: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x800A6934: bc1fl       L_800A6944
    if (!c1cs) {
        // 0x800A6938: c.lt.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_800A6944;
    }
    goto skip_11;
    // 0x800A6938: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    skip_11:
    // 0x800A693C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x800A6940: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
L_800A6944:
    // 0x800A6944: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800A6948: bc1fl       L_800A6958
    if (!c1cs) {
        // 0x800A694C: c.lt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
            goto L_800A6958;
    }
    goto skip_12;
    // 0x800A694C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    skip_12:
    // 0x800A6950: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x800A6954: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
L_800A6958:
    // 0x800A6958: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800A695C: bc1fl       L_800A696C
    if (!c1cs) {
        // 0x800A6960: c.lt.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
            goto L_800A696C;
    }
    goto skip_13;
    // 0x800A6960: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    skip_13:
    // 0x800A6964: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x800A6968: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_800A696C:
    // 0x800A696C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800A6970: bc1fl       L_800A6980
    if (!c1cs) {
        // 0x800A6974: trunc.w.s   $f8, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
            goto L_800A6980;
    }
    goto skip_14;
    // 0x800A6974: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    skip_14:
    // 0x800A6978: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x800A697C: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
L_800A6980:
    // 0x800A6980: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x800A6984: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800A6988: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x800A698C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800A6990: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    // 0x800A6994: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x800A6998: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x800A699C: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x800A69A0: jal         0x8001575C
    // 0x800A69A4: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    func_8001575C(rdram, ctx);
        goto after_53;
    // 0x800A69A4: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    after_53:
    // 0x800A69A8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x800A69AC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x800A69B0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800A69B4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800A69B8: lw          $t5, 0x260($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X260);
    // 0x800A69BC: subu        $t7, $t6, $a2
    ctx->r15 = SUB32(ctx->r14, ctx->r6);
    // 0x800A69C0: subu        $t9, $t8, $a3
    ctx->r25 = SUB32(ctx->r24, ctx->r7);
    // 0x800A69C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A69C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800A69CC: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x800A69D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800A69D4: jal         0x800A5EC4
    // 0x800A69D8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_800A5EC4(rdram, ctx);
        goto after_54;
    // 0x800A69D8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_54:
L_800A69DC:
    // 0x800A69DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800A69E0:
    // 0x800A69E0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x800A69E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A69E8: jr          $ra
    // 0x800A69EC: addiu       $sp, $sp, 0x250
    ctx->r29 = ADD32(ctx->r29, 0X250);
    return;
    // 0x800A69EC: addiu       $sp, $sp, 0x250
    ctx->r29 = ADD32(ctx->r29, 0X250);
;}
RECOMP_FUNC void func_800A69F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A69F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800A69F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800A69F8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800A69FC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800A6A00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800A6A04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A6A08: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A6A0C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800A6A10: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x800A6A14: jal         0x800EE7F8
    // 0x800A6A18: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A6A18: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_0:
    // 0x800A6A1C: lwc1        $f0, 0x24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X24);
    // 0x800A6A20: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A6A24: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x800A6A28: jal         0x800F2100
    // 0x800A6A2C: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x800A6A2C: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    after_1:
    // 0x800A6A30: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A6A34: lwc1        $f6, 0x55DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55DC);
    // 0x800A6A38: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800A6A3C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800A6A40: nop

    // 0x800A6A44: bc1t        L_800A6A68
    if (c1cs) {
        // 0x800A6A48: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800A6A68;
    }
    // 0x800A6A48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A6A4C: lwc1        $f8, 0x55E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X55E0);
    // 0x800A6A50: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800A6A54: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800A6A58: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800A6A5C: nop

    // 0x800A6A60: bc1f        L_800A6AA8
    if (!c1cs) {
        // 0x800A6A64: nop
    
            goto L_800A6AA8;
    }
    // 0x800A6A64: nop

L_800A6A68:
    // 0x800A6A68: lhu         $a0, 0x76($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X76);
    // 0x800A6A6C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800A6A70: srl         $t7, $a0, 7
    ctx->r15 = S32(U32(ctx->r4) >> 7);
    // 0x800A6A74: jal         0x800F5680
    // 0x800A6A78: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F5680(rdram, ctx);
        goto after_2;
    // 0x800A6A78: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x800A6A7C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A6A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A6A84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A6A88: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x800A6A8C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800A6A90: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800A6A94: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800A6A98: jal         0x800A6250
    // 0x800A6A9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_800A6250(rdram, ctx);
        goto after_3;
    // 0x800A6A9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x800A6AA0: b           L_800A6B04
    // 0x800A6AA4: lbu         $t1, 0x7E($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X7E);
        goto L_800A6B04;
    // 0x800A6AA4: lbu         $t1, 0x7E($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X7E);
L_800A6AA8:
    // 0x800A6AA8: jal         0x800EE7F8
    // 0x800A6AAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x800A6AAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800A6AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A6AB4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800A6AB8: jal         0x800EF174
    // 0x800A6ABC: lui         $a2, 0xC4FA
    ctx->r6 = S32(0XC4FA << 16);
    func_800EF174(rdram, ctx);
        goto after_5;
    // 0x800A6ABC: lui         $a2, 0xC4FA
    ctx->r6 = S32(0XC4FA << 16);
    after_5:
    // 0x800A6AC0: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x800A6AC4: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x800A6AC8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800A6ACC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A6AD0: jal         0x800C6A7C
    // 0x800A6AD4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800C6A7C(rdram, ctx);
        goto after_6;
    // 0x800A6AD4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x800A6AD8: bne         $v0, $zero, L_800A6AE8
    if (ctx->r2 != 0) {
        // 0x800A6ADC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800A6AE8;
    }
    // 0x800A6ADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A6AE0: b           L_800A6B10
    // 0x800A6AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A6B10;
    // 0x800A6AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A6AE8:
    // 0x800A6AE8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800A6AEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A6AF0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800A6AF4: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800A6AF8: jal         0x800A6250
    // 0x800A6AFC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_800A6250(rdram, ctx);
        goto after_7;
    // 0x800A6AFC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_7:
    // 0x800A6B00: lbu         $t1, 0x7E($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X7E);
L_800A6B04:
    // 0x800A6B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A6B08: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x800A6B0C: sb          $t2, 0x7E($s1)
    MEM_B(0X7E, ctx->r17) = ctx->r10;
L_800A6B10:
    // 0x800A6B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A6B14: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6B18: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800A6B1C: jr          $ra
    // 0x800A6B20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800A6B20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800A6B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6B24: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x800A6B28: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800A6B2C: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x800A6B30: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x800A6B34: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x800A6B38: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x800A6B3C: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x800A6B40: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x800A6B44: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x800A6B48: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x800A6B4C: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x800A6B50: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x800A6B54: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x800A6B58: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800A6B5C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800A6B60: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800A6B64: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800A6B68: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800A6B6C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800A6B70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A6B74: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800A6B78: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800A6B7C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x800A6B80: nop

    // 0x800A6B84: bc1tl       L_800A6D6C
    if (c1cs) {
        // 0x800A6B88: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_800A6D6C;
    }
    goto skip_0;
    // 0x800A6B88: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x800A6B8C: lhu         $a0, 0x76($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X76);
    // 0x800A6B90: addiu       $s7, $sp, 0xBC
    ctx->r23 = ADD32(ctx->r29, 0XBC);
    // 0x800A6B94: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800A6B98: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A6B9C: jal         0x800F5BC4
    // 0x800A6BA0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F5BC4(rdram, ctx);
        goto after_0;
    // 0x800A6BA0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800A6BA4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800A6BA8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800A6BAC: jal         0x800EF04C
    // 0x800A6BB0: addiu       $a1, $s5, 0x4
    ctx->r5 = ADD32(ctx->r21, 0X4);
    func_800EF04C(rdram, ctx);
        goto after_1;
    // 0x800A6BB0: addiu       $a1, $s5, 0x4
    ctx->r5 = ADD32(ctx->r21, 0X4);
    after_1:
    // 0x800A6BB4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800A6BB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A6BBC: jal         0x800C8760
    // 0x800A6BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C8760(rdram, ctx);
        goto after_2;
    // 0x800A6BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800A6BC4: beq         $v0, $zero, L_800A6D20
    if (ctx->r2 == 0) {
        // 0x800A6BC8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800A6D20;
    }
    // 0x800A6BC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A6BCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A6BD0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800A6BD4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A6BD8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800A6BDC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800A6BE0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800A6BE4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800A6BE8: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
    // 0x800A6BEC: addiu       $s4, $sp, 0xA4
    ctx->r20 = ADD32(ctx->r29, 0XA4);
    // 0x800A6BF0: addiu       $s2, $sp, 0x98
    ctx->r18 = ADD32(ctx->r29, 0X98);
    // 0x800A6BF4: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_800A6BF8:
    // 0x800A6BF8: jal         0x800C89A8
    // 0x800A6BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C89A8(rdram, ctx);
        goto after_3;
    // 0x800A6BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A6C00: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x800A6C04: bne         $t7, $zero, L_800A6CFC
    if (ctx->r15 != 0) {
        // 0x800A6C08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A6CFC;
    }
    // 0x800A6C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A6C0C: jal         0x800C8800
    // 0x800A6C10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800C8800(rdram, ctx);
        goto after_4;
    // 0x800A6C10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x800A6C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A6C18: jal         0x800C8898
    // 0x800A6C1C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800C8898(rdram, ctx);
        goto after_5;
    // 0x800A6C1C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_5:
    // 0x800A6C20: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800A6C24: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A6C28: jal         0x800EFB24
    // 0x800A6C2C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x800A6C2C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x800A6C30: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x800A6C34: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x800A6C38: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x800A6C3C: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800A6C40: nop

    // 0x800A6C44: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x800A6C48: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800A6C4C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800A6C50: jal         0x8002DCA0
    // 0x800A6C54: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_7;
    // 0x800A6C54: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_7:
    // 0x800A6C58: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x800A6C5C: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800A6C60: bc1tl       L_800A6D00
    if (c1cs) {
        // 0x800A6C64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A6D00;
    }
    goto skip_1;
    // 0x800A6C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800A6C68: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x800A6C6C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800A6C70: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A6C74: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800A6C78: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x800A6C7C: nop

    // 0x800A6C80: bc1tl       L_800A6D00
    if (c1cs) {
        // 0x800A6C84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A6D00;
    }
    goto skip_2;
    // 0x800A6C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800A6C88: div.s       $f2, $f26, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f26.fl, ctx->f0.fl);
    // 0x800A6C8C: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x800A6C90: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x800A6C94: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x800A6C98: sub.s       $f12, $f0, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x800A6C9C: lwc1        $f20, 0x8C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800A6CA0: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800A6CA4: mul.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800A6CA8: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x800A6CAC: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x800A6CB0: nop

    // 0x800A6CB4: mul.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x800A6CB8: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x800A6CBC: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x800A6CC0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x800A6CC4: swc1        $f14, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f14.u32l;
    // 0x800A6CC8: bc1f        L_800A6CF0
    if (!c1cs) {
        // 0x800A6CCC: swc1        $f18, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
            goto L_800A6CF0;
    }
    // 0x800A6CCC: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x800A6CD0: sub.s       $f6, $f12, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x800A6CD4: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800A6CD8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A6CDC: sub.s       $f0, $f30, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f8.fl;
    // 0x800A6CE0: mul.s       $f10, $f28, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x800A6CE4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800A6CE8: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x800A6CEC: nop

L_800A6CF0:
    // 0x800A6CF0: jal         0x800A69F0
    // 0x800A6CF4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_800A69F0(rdram, ctx);
        goto after_8;
    // 0x800A6CF4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_8:
    // 0x800A6CF8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800A6CFC:
    // 0x800A6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A6D00:
    // 0x800A6D00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6D04: jal         0x800C878C
    // 0x800A6D08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800C878C(rdram, ctx);
        goto after_9;
    // 0x800A6D08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800A6D0C: beq         $v0, $zero, L_800A6D20
    if (ctx->r2 == 0) {
        // 0x800A6D10: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800A6D20;
    }
    // 0x800A6D10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A6D14: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x800A6D18: bnel        $at, $zero, L_800A6BF8
    if (ctx->r1 != 0) {
        // 0x800A6D1C: addiu       $s1, $zero, 0xFF
        ctx->r17 = ADD32(0, 0XFF);
            goto L_800A6BF8;
    }
    goto skip_3;
    // 0x800A6D1C: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    skip_3:
L_800A6D20:
    // 0x800A6D20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A6D24: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800A6D28: bne         $s3, $zero, L_800A6D68
    if (ctx->r19 != 0) {
        // 0x800A6D2C: addiu       $s0, $sp, 0x78
        ctx->r16 = ADD32(ctx->r29, 0X78);
            goto L_800A6D68;
    }
    // 0x800A6D2C: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x800A6D30: jal         0x800EFD24
    // 0x800A6D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFD24(rdram, ctx);
        goto after_10;
    // 0x800A6D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800A6D38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A6D3C: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x800A6D40: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x800A6D44: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800A6D48: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800A6D4C: jal         0x800EFA4C
    // 0x800A6D50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_11;
    // 0x800A6D50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x800A6D54: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800A6D58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A6D5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800A6D60: jal         0x800A69F0
    // 0x800A6D64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_800A69F0(rdram, ctx);
        goto after_12;
    // 0x800A6D64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_12:
L_800A6D68:
    // 0x800A6D68: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_800A6D6C:
    // 0x800A6D6C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800A6D70: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800A6D74: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800A6D78: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x800A6D7C: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x800A6D80: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x800A6D84: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x800A6D88: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x800A6D8C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x800A6D90: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x800A6D94: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x800A6D98: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x800A6D9C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x800A6DA0: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x800A6DA4: jr          $ra
    // 0x800A6DA8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x800A6DA8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_800A6DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6DAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A6DB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A6DB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A6DB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A6DBC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A6DC0: lhu         $a0, 0x76($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X76);
    // 0x800A6DC4: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A6DC8: jal         0x800F6438
    // 0x800A6DCC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F6438(rdram, ctx);
        goto after_0;
    // 0x800A6DCC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800A6DD0: beql        $v0, $zero, L_800A6EE4
    if (ctx->r2 == 0) {
        // 0x800A6DD4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_0;
    // 0x800A6DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A6DD8: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A6DDC: srl         $t7, $a0, 7
    ctx->r15 = S32(U32(ctx->r4) >> 7);
    // 0x800A6DE0: jal         0x800F6640
    // 0x800A6DE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F6640(rdram, ctx);
        goto after_1;
    // 0x800A6DE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x800A6DE8: beql        $v0, $zero, L_800A6EE4
    if (ctx->r2 == 0) {
        // 0x800A6DEC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_1;
    // 0x800A6DEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800A6DF0: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A6DF4: srl         $t8, $a0, 7
    ctx->r24 = S32(U32(ctx->r4) >> 7);
    // 0x800A6DF8: jal         0x800F6E80
    // 0x800A6DFC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_800F6E80(rdram, ctx);
        goto after_2;
    // 0x800A6DFC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x800A6E00: beql        $v0, $zero, L_800A6EE4
    if (ctx->r2 == 0) {
        // 0x800A6E04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_2;
    // 0x800A6E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800A6E08: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A6E0C: srl         $t9, $a0, 7
    ctx->r25 = S32(U32(ctx->r4) >> 7);
    // 0x800A6E10: jal         0x800F55FC
    // 0x800A6E14: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800F55FC(rdram, ctx);
        goto after_3;
    // 0x800A6E14: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x800A6E18: sll         $t0, $v0, 0
    ctx->r8 = S32(ctx->r2 << 0);
    // 0x800A6E1C: bltzl       $t0, L_800A6EE4
    if (SIGNED(ctx->r8) < 0) {
        // 0x800A6E20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_3;
    // 0x800A6E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800A6E24: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A6E28: srl         $t1, $a0, 7
    ctx->r9 = S32(U32(ctx->r4) >> 7);
    // 0x800A6E2C: jal         0x800F65D0
    // 0x800A6E30: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_800F65D0(rdram, ctx);
        goto after_4;
    // 0x800A6E30: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_4:
    // 0x800A6E34: bnel        $v0, $zero, L_800A6E94
    if (ctx->r2 != 0) {
        // 0x800A6E38: lhu         $a0, 0x76($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X76);
            goto L_800A6E94;
    }
    goto skip_4;
    // 0x800A6E38: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    skip_4:
    // 0x800A6E3C: lw          $t2, 0x74($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X74);
    // 0x800A6E40: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x800A6E44: bgezl       $t4, L_800A6EE4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800A6E48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_5;
    // 0x800A6E48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x800A6E4C: jal         0x800F8B88
    // 0x800A6E50: nop

    func_800F8B88(rdram, ctx);
        goto after_5;
    // 0x800A6E50: nop

    after_5:
    // 0x800A6E54: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800A6E58: bnel        $at, $zero, L_800A6E94
    if (ctx->r1 != 0) {
        // 0x800A6E5C: lhu         $a0, 0x76($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X76);
            goto L_800A6E94;
    }
    goto skip_6;
    // 0x800A6E5C: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    skip_6:
    // 0x800A6E60: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A6E64: srl         $t5, $a0, 7
    ctx->r13 = S32(U32(ctx->r4) >> 7);
    // 0x800A6E68: jal         0x800F5410
    // 0x800A6E6C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_800F5410(rdram, ctx);
        goto after_6;
    // 0x800A6E6C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_6:
    // 0x800A6E70: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A6E74: bnel        $v0, $at, L_800A6EE4
    if (ctx->r2 != ctx->r1) {
        // 0x800A6E78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_7;
    // 0x800A6E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x800A6E7C: jal         0x800878A0
    // 0x800A6E80: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x800A6E80: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_7:
    // 0x800A6E84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6E88: beql        $v0, $at, L_800A6EE4
    if (ctx->r2 == ctx->r1) {
        // 0x800A6E8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6EE4;
    }
    goto skip_8;
    // 0x800A6E8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x800A6E90: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
L_800A6E94:
    // 0x800A6E94: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x800A6E98: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A6E9C: jal         0x800F5A00
    // 0x800A6EA0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F5A00(rdram, ctx);
        goto after_8;
    // 0x800A6EA0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_8:
    // 0x800A6EA4: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A6EA8: srl         $t7, $a0, 7
    ctx->r15 = S32(U32(ctx->r4) >> 7);
    // 0x800A6EAC: jal         0x800F5628
    // 0x800A6EB0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F5628(rdram, ctx);
        goto after_9;
    // 0x800A6EB0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_9:
    // 0x800A6EB4: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x800A6EB8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x800A6EBC: sll         $t0, $t8, 11
    ctx->r8 = S32(ctx->r24 << 11);
    // 0x800A6EC0: bgez        $t0, L_800A6ED8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800A6EC4: nop
    
            goto L_800A6ED8;
    }
    // 0x800A6EC4: nop

    // 0x800A6EC8: jal         0x800A5DB0
    // 0x800A6ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A5DB0(rdram, ctx);
        goto after_10;
    // 0x800A6ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800A6ED0: b           L_800A6EE4
    // 0x800A6ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A6EE4;
    // 0x800A6ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A6ED8:
    // 0x800A6ED8: jal         0x800A6B24
    // 0x800A6EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A6B24(rdram, ctx);
        goto after_11;
    // 0x800A6EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800A6EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A6EE4:
    // 0x800A6EE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A6EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A6EEC: jr          $ra
    // 0x800A6EF0: nop

    return;
    // 0x800A6EF0: nop

;}
RECOMP_FUNC void func_800A6EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6EF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A6EF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A6EFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A6F00: jal         0x800EA05C
    // 0x800A6F04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800A6F04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A6F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A6F0C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800A6F10: jal         0x8010A800
    // 0x800A6F14: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8010A800(rdram, ctx);
        goto after_1;
    // 0x800A6F14: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x800A6F18: lbu         $t6, 0x74($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X74);
    // 0x800A6F1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A6F20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A6F24: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800A6F28: andi        $t7, $t6, 0xFFDF
    ctx->r15 = ctx->r14 & 0XFFDF;
    // 0x800A6F2C: sb          $t7, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r15;
    // 0x800A6F30: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A6F34: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    // 0x800A6F38: lh          $t8, -0x5D20($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5D20);
    // 0x800A6F3C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800A6F40: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800A6F44: beq         $a0, $t8, L_800A6F78
    if (ctx->r4 == ctx->r24) {
        // 0x800A6F48: addiu       $v0, $t9, -0x5D20
        ctx->r2 = ADD32(ctx->r25, -0X5D20);
            goto L_800A6F78;
    }
    // 0x800A6F48: addiu       $v0, $t9, -0x5D20
    ctx->r2 = ADD32(ctx->r25, -0X5D20);
    // 0x800A6F4C: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
L_800A6F50:
    // 0x800A6F50: bnel        $a2, $v1, L_800A6F6C
    if (ctx->r6 != ctx->r3) {
        // 0x800A6F54: lh          $v1, 0x2($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X2);
            goto L_800A6F6C;
    }
    goto skip_0;
    // 0x800A6F54: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    skip_0:
    // 0x800A6F58: lbu         $t1, 0x74($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X74);
    // 0x800A6F5C: ori         $t2, $t1, 0x20
    ctx->r10 = ctx->r9 | 0X20;
    // 0x800A6F60: b           L_800A6F78
    // 0x800A6F64: sb          $t2, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r10;
        goto L_800A6F78;
    // 0x800A6F64: sb          $t2, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r10;
    // 0x800A6F68: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_800A6F6C:
    // 0x800A6F6C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800A6F70: bne         $a0, $v1, L_800A6F50
    if (ctx->r4 != ctx->r3) {
        // 0x800A6F74: nop
    
            goto L_800A6F50;
    }
    // 0x800A6F74: nop

L_800A6F78:
    // 0x800A6F78: jal         0x800A9C98
    // 0x800A6F7C: nop

    func_800A9C98(rdram, ctx);
        goto after_2;
    // 0x800A6F7C: nop

    after_2:
    // 0x800A6F80: beq         $v0, $zero, L_800A6F9C
    if (ctx->r2 == 0) {
        // 0x800A6F84: nop
    
            goto L_800A6F9C;
    }
    // 0x800A6F84: nop

    // 0x800A6F88: jal         0x800A9CD0
    // 0x800A6F8C: nop

    func_800A9CD0(rdram, ctx);
        goto after_3;
    // 0x800A6F8C: nop

    after_3:
    // 0x800A6F90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A6F94: bnel        $v0, $at, L_800A6FD4
    if (ctx->r2 != ctx->r1) {
        // 0x800A6F98: lbu         $t4, 0x74($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X74);
            goto L_800A6FD4;
    }
    goto skip_1;
    // 0x800A6F98: lbu         $t4, 0x74($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X74);
    skip_1:
L_800A6F9C:
    // 0x800A6F9C: jal         0x800BCC84
    // 0x800A6FA0: nop

    func_800BCC84(rdram, ctx);
        goto after_4;
    // 0x800A6FA0: nop

    after_4:
    // 0x800A6FA4: bnel        $v0, $zero, L_800A6FD4
    if (ctx->r2 != 0) {
        // 0x800A6FA8: lbu         $t4, 0x74($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X74);
            goto L_800A6FD4;
    }
    goto skip_2;
    // 0x800A6FA8: lbu         $t4, 0x74($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X74);
    skip_2:
    // 0x800A6FAC: jal         0x800D3948
    // 0x800A6FB0: nop

    func_800D3948(rdram, ctx);
        goto after_5;
    // 0x800A6FB0: nop

    after_5:
    // 0x800A6FB4: bnel        $v0, $zero, L_800A6FD4
    if (ctx->r2 != 0) {
        // 0x800A6FB8: lbu         $t4, 0x74($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X74);
            goto L_800A6FD4;
    }
    goto skip_3;
    // 0x800A6FB8: lbu         $t4, 0x74($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X74);
    skip_3:
    // 0x800A6FBC: jal         0x800A946C
    // 0x800A6FC0: nop

    func_800A946C(rdram, ctx);
        goto after_6;
    // 0x800A6FC0: nop

    after_6:
    // 0x800A6FC4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800A6FC8: bnel        $at, $zero, L_800A6FE0
    if (ctx->r1 != 0) {
        // 0x800A6FCC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6FE0;
    }
    goto skip_4;
    // 0x800A6FCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800A6FD0: lbu         $t4, 0x74($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X74);
L_800A6FD4:
    // 0x800A6FD4: ori         $t5, $t4, 0x20
    ctx->r13 = ctx->r12 | 0X20;
    // 0x800A6FD8: sb          $t5, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r13;
    // 0x800A6FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A6FE0:
    // 0x800A6FE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A6FE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A6FE8: jr          $ra
    // 0x800A6FEC: nop

    return;
    // 0x800A6FEC: nop

;}
RECOMP_FUNC void func_800A6FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6FF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A6FF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A6FF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A6FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A7000: lhu         $a0, 0x76($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X76);
    // 0x800A7004: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x800A7008: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A700C: jal         0x800F5A00
    // 0x800A7010: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x800A7010: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800A7014: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A7018: srl         $t7, $a0, 7
    ctx->r15 = S32(U32(ctx->r4) >> 7);
    // 0x800A701C: jal         0x800F5628
    // 0x800A7020: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F5628(rdram, ctx);
        goto after_1;
    // 0x800A7020: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x800A7024: lw          $t8, 0x74($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X74);
    // 0x800A7028: lbu         $t3, 0x65($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X65);
    // 0x800A702C: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x800A7030: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A7034: srl         $t0, $t9, 31
    ctx->r8 = S32(U32(ctx->r25) >> 31);
    // 0x800A7038: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x800A703C: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x800A7040: andi        $t4, $t3, 0xFFEF
    ctx->r12 = ctx->r11 & 0XFFEF;
    // 0x800A7044: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x800A7048: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A704C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x800A7050: sb          $t5, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r13;
    // 0x800A7054: jal         0x800F8874
    // 0x800A7058: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F8874(rdram, ctx);
        goto after_2;
    // 0x800A7058: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x800A705C: lbu         $t0, 0x74($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X74);
    // 0x800A7060: sll         $t8, $v0, 6
    ctx->r24 = S32(ctx->r2 << 6);
    // 0x800A7064: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x800A7068: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x800A706C: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x800A7070: sb          $t3, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r11;
    // 0x800A7074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7078: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A707C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A7080: jr          $ra
    // 0x800A7084: nop

    return;
    // 0x800A7084: nop

;}
RECOMP_FUNC void func_800A7088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A708C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7090: lhu         $a0, 0x76($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X76);
    // 0x800A7094: srl         $t6, $a0, 7
    ctx->r14 = S32(U32(ctx->r4) >> 7);
    // 0x800A7098: jal         0x800F7364
    // 0x800A709C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F7364(rdram, ctx);
        goto after_0;
    // 0x800A709C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800A70A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A70A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A70A8: jr          $ra
    // 0x800A70AC: nop

    return;
    // 0x800A70AC: nop

;}
RECOMP_FUNC void func_800A70B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A70B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A70B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A70B8: jal         0x800FFA88
    // 0x800A70BC: nop

    func_800FFA88(rdram, ctx);
        goto after_0;
    // 0x800A70BC: nop

    after_0:
    // 0x800A70C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A70C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A70C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A70D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A70D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A70D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A70D8: jal         0x80106790
    // 0x800A70DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800A70DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A70E0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800A70E4: lhu         $t0, 0x76($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X76);
    // 0x800A70E8: sll         $t9, $t7, 7
    ctx->r25 = S32(ctx->r15 << 7);
    // 0x800A70EC: andi        $t1, $t0, 0x7F
    ctx->r9 = ctx->r8 & 0X7F;
    // 0x800A70F0: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x800A70F4: sh          $t2, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r10;
    // 0x800A70F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A70FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7100: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A710C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7110: jal         0x80106790
    // 0x800A7114: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800A7114: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A7118: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A711C: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
    // 0x800A7120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7128: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7138: jal         0x80106790
    // 0x800A713C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800A713C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A7140: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7144: lbu         $t9, 0x65($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X65);
    // 0x800A7148: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800A714C: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x800A7150: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800A7154: sb          $t1, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r9;
    // 0x800A7158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A715C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7160: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7168: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A716C: jr          $ra
    // 0x800A7170: addiu       $v0, $v0, -0x5C60
    ctx->r2 = ADD32(ctx->r2, -0X5C60);
    return;
    // 0x800A7170: addiu       $v0, $v0, -0x5C60
    ctx->r2 = ADD32(ctx->r2, -0X5C60);
;}
RECOMP_FUNC void func_800A7180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7180: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7184: jr          $ra
    // 0x800A7188: addiu       $v0, $v0, 0x7658
    ctx->r2 = ADD32(ctx->r2, 0X7658);
    return;
    // 0x800A7188: addiu       $v0, $v0, 0x7658
    ctx->r2 = ADD32(ctx->r2, 0X7658);
;}
RECOMP_FUNC void func_800A718C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A718C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800A7190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7198: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800A719C: jal         0x800E3BFC
    // 0x800A71A0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_800E3BFC(rdram, ctx);
        goto after_0;
    // 0x800A71A0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x800A71A4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800A71A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A71AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800A71B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A71B4: jal         0x800E3C58
    // 0x800A71B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800E3C58(rdram, ctx);
        goto after_1;
    // 0x800A71B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x800A71BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A71C0: jal         0x800E3900
    // 0x800A71C4: lwc1        $f12, 0x55F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X55F0);
    func_800E3900(rdram, ctx);
        goto after_2;
    // 0x800A71C4: lwc1        $f12, 0x55F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X55F0);
    after_2:
    // 0x800A71C8: jal         0x800E3CE8
    // 0x800A71CC: nop

    func_800E3CE8(rdram, ctx);
        goto after_3;
    // 0x800A71CC: nop

    after_3:
    // 0x800A71D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A71D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A71D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A71E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A71E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A71E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A71E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A71EC: jal         0x800D58CC
    // 0x800A71F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800D58CC(rdram, ctx);
        goto after_0;
    // 0x800A71F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800A71F4: jal         0x8001A570
    // 0x800A71F8: nop

    func_8001A570(rdram, ctx);
        goto after_1;
    // 0x800A71F8: nop

    after_1:
    // 0x800A71FC: jal         0x8001B840
    // 0x800A7200: nop

    func_8001B840(rdram, ctx);
        goto after_2;
    // 0x800A7200: nop

    after_2:
    // 0x800A7204: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A7208: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
L_800A720C:
    // 0x800A720C: jal         0x8001B518
    // 0x800A7210: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001B518(rdram, ctx);
        goto after_3;
    // 0x800A7210: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800A7214: jal         0x800DF874
    // 0x800A7218: nop

    func_800DF874(rdram, ctx);
        goto after_4;
    // 0x800A7218: nop

    after_4:
    // 0x800A721C: jal         0x80087840
    // 0x800A7220: nop

    _cosectionstor_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x800A7220: nop

    after_5:
    // 0x800A7224: jal         0x800C9484
    // 0x800A7228: nop

    func_800C9484(rdram, ctx);
        goto after_6;
    // 0x800A7228: nop

    after_6:
    // 0x800A722C: jal         0x800B5E3C
    // 0x800A7230: nop

    func_800B5E3C(rdram, ctx);
        goto after_7;
    // 0x800A7230: nop

    after_7:
    // 0x800A7234: jal         0x800D58AC
    // 0x800A7238: nop

    func_800D58AC(rdram, ctx);
        goto after_8;
    // 0x800A7238: nop

    after_8:
    // 0x800A723C: jal         0x800E4C7C
    // 0x800A7240: nop

    func_800E4C7C(rdram, ctx);
        goto after_9;
    // 0x800A7240: nop

    after_9:
    // 0x800A7244: jal         0x800CA174
    // 0x800A7248: nop

    func_800CA174(rdram, ctx);
        goto after_10;
    // 0x800A7248: nop

    after_10:
    // 0x800A724C: jal         0x800FCD5C
    // 0x800A7250: nop

    func_800FCD5C(rdram, ctx);
        goto after_11;
    // 0x800A7250: nop

    after_11:
    // 0x800A7254: jal         0x800A9D00
    // 0x800A7258: nop

    func_800A9D00(rdram, ctx);
        goto after_12;
    // 0x800A7258: nop

    after_12:
    // 0x800A725C: jal         0x800C9484
    // 0x800A7260: nop

    func_800C9484(rdram, ctx);
        goto after_13;
    // 0x800A7260: nop

    after_13:
    // 0x800A7264: jal         0x800B4380
    // 0x800A7268: nop

    func_800B4380(rdram, ctx);
        goto after_14;
    // 0x800A7268: nop

    after_14:
    // 0x800A726C: jal         0x8008BA5C
    // 0x800A7270: nop

    func_8008BA5C(rdram, ctx);
        goto after_15;
    // 0x800A7270: nop

    after_15:
    // 0x800A7274: jal         0x800DA1E0
    // 0x800A7278: nop

    func_800DA1E0(rdram, ctx);
        goto after_16;
    // 0x800A7278: nop

    after_16:
    // 0x800A727C: jal         0x800D15CC
    // 0x800A7280: nop

    func_800D15CC(rdram, ctx);
        goto after_17;
    // 0x800A7280: nop

    after_17:
    // 0x800A7284: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800A7288: bne         $s0, $s1, L_800A720C
    if (ctx->r16 != ctx->r17) {
        // 0x800A728C: nop
    
            goto L_800A720C;
    }
    // 0x800A728C: nop

    // 0x800A7290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7294: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A7298: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A729C: jr          $ra
    // 0x800A72A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A72A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A72A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A72A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A72A8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A72AC: lbu         $t6, 0x762C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X762C);
    // 0x800A72B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A72B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A72B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A72BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800A72C0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800A72C4: jal         0x80088268
    // 0x800A72C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800A72C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x800A72CC: jal         0x800E96E0
    // 0x800A72D0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800E96E0(rdram, ctx);
        goto after_1;
    // 0x800A72D0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x800A72D4: jal         0x80088250
    // 0x800A72D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    _gcsectionDll_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800A72D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800A72DC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A72E0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800A72E4: bne         $t7, $zero, L_800A7300
    if (ctx->r15 != 0) {
        // 0x800A72E8: nop
    
            goto L_800A7300;
    }
    // 0x800A72E8: nop

    // 0x800A72EC: bne         $t8, $zero, L_800A7300
    if (ctx->r24 != 0) {
        // 0x800A72F0: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_800A7300;
    }
    // 0x800A72F0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800A72F4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A72F8: beql        $t9, $t0, L_800A7334
    if (ctx->r25 == ctx->r8) {
        // 0x800A72FC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800A7334;
    }
    goto skip_0;
    // 0x800A72FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
L_800A7300:
    // 0x800A7300: jal         0x80088228
    // 0x800A7304: nop

    _gclevel_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x800A7304: nop

    after_3:
    // 0x800A7308: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A730C: beql        $t1, $zero, L_800A7328
    if (ctx->r9 == 0) {
        // 0x800A7310: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800A7328;
    }
    goto skip_1;
    // 0x800A7310: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x800A7314: jal         0x80087A48
    // 0x800A7318: nop

    _gcgame_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x800A7318: nop

    after_4:
    // 0x800A731C: jal         0x80087A40
    // 0x800A7320: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    _gcgame_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x800A7320: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x800A7324: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800A7328:
    // 0x800A7328: jal         0x80088220
    // 0x800A732C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _gclevel_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x800A732C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x800A7330: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800A7334:
    // 0x800A7334: jal         0x80088248
    // 0x800A7338: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _gcsectionDll_entrypoint_0(rdram, ctx);
        goto after_7;
    // 0x800A7338: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x800A733C: jal         0x801101C0
    // 0x800A7340: nop

    func_801101C0(rdram, ctx);
        goto after_8;
    // 0x800A7340: nop

    after_8:
    // 0x800A7344: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A7348: jal         0x800A8D70
    // 0x800A734C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A8D70(rdram, ctx);
        goto after_9;
    // 0x800A734C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x800A7350: jal         0x80081724
    // 0x800A7354: nop

    func_80081724(rdram, ctx);
        goto after_10;
    // 0x800A7354: nop

    after_10:
    // 0x800A7358: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A735C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A7360: jal         0x800EA0CC
    // 0x800A7364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800EA0CC(rdram, ctx);
        goto after_11;
    // 0x800A7364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x800A7368: jal         0x800A718C
    // 0x800A736C: nop

    func_800A718C(rdram, ctx);
        goto after_12;
    // 0x800A736C: nop

    after_12:
    // 0x800A7370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A7378: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7388: jal         0x800EA0A8
    // 0x800A738C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EA0A8(rdram, ctx);
        goto after_0;
    // 0x800A738C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A7390: jal         0x800A8F68
    // 0x800A7394: nop

    func_800A8F68(rdram, ctx);
        goto after_1;
    // 0x800A7394: nop

    after_1:
    // 0x800A7398: jal         0x800C2AB8
    // 0x800A739C: nop

    func_800C2AB8(rdram, ctx);
        goto after_2;
    // 0x800A739C: nop

    after_2:
    // 0x800A73A0: jal         0x800FB968
    // 0x800A73A4: nop

    func_800FB968(rdram, ctx);
        goto after_3;
    // 0x800A73A4: nop

    after_3:
    // 0x800A73A8: jal         0x8001A2B0
    // 0x800A73AC: nop

    func_8001A2B0(rdram, ctx);
        goto after_4;
    // 0x800A73AC: nop

    after_4:
    // 0x800A73B0: jal         0x800D6C64
    // 0x800A73B4: nop

    func_800D6C64(rdram, ctx);
        goto after_5;
    // 0x800A73B4: nop

    after_5:
    // 0x800A73B8: jal         0x800D58CC
    // 0x800A73BC: nop

    func_800D58CC(rdram, ctx);
        goto after_6;
    // 0x800A73BC: nop

    after_6:
    // 0x800A73C0: jal         0x8008B768
    // 0x800A73C4: nop

    func_8008B768(rdram, ctx);
        goto after_7;
    // 0x800A73C4: nop

    after_7:
    // 0x800A73C8: jal         0x80081724
    // 0x800A73CC: nop

    func_80081724(rdram, ctx);
        goto after_8;
    // 0x800A73CC: nop

    after_8:
    // 0x800A73D0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A73D4: beql        $t6, $zero, L_800A73E8
    if (ctx->r14 == 0) {
        // 0x800A73D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A73E8;
    }
    goto skip_0;
    // 0x800A73D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A73DC: jal         0x800A71E0
    // 0x800A73E0: nop

    func_800A71E0(rdram, ctx);
        goto after_9;
    // 0x800A73E0: nop

    after_9:
    // 0x800A73E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A73E8:
    // 0x800A73E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A73EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A73F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_rt64_begin_frame(rdram, ctx);
    // 0x800A73F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A73F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A73FC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A7400: addiu       $s1, $s1, 0x7658
    ctx->r17 = ADD32(ctx->r17, 0X7658);
    // 0x800A7404: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x800A7408: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x800A740C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A7410: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A7414: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800A7418: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A741C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800A7420: jal         0x800A8670
    // 0x800A7424: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_800A8670(rdram, ctx);
        goto after_0;
    // 0x800A7424: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x800A7428: jal         0x800A9378
    // 0x800A742C: nop

    func_800A9378(rdram, ctx);
        goto after_1;
    // 0x800A742C: nop

    after_1:
    // 0x800A7430: jal         0x800F5184
    // 0x800A7434: nop

    func_800F5184(rdram, ctx);
        goto after_2;
    // 0x800A7434: nop

    after_2:
    // 0x800A7438: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A743C: jal         0x800A8BA8
    // 0x800A7440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800A8BA8(rdram, ctx);
        goto after_3;
    // 0x800A7440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800A7444: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A7448: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800A744C: jal         0x800A8BD4
    // 0x800A7450: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800A8BD4(rdram, ctx);
        goto after_4;
    // 0x800A7450: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x800A7454: beql        $v0, $zero, L_800A748C
    if (ctx->r2 == 0) {
        // 0x800A7458: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800A748C;
    }
    goto skip_0;
    // 0x800A7458: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_800A745C:
    // 0x800A745C: jal         0x800A89F8
    // 0x800A7460: nop

    func_800A89F8(rdram, ctx);
        goto after_5;
    // 0x800A7460: nop

    after_5:
    // 0x800A7464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A7468: jal         0x800E9F20
    // 0x800A746C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800E9F20(rdram, ctx);
        goto after_6;
    // 0x800A746C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800A7470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A7474: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800A7478: jal         0x800A8BD4
    // 0x800A747C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800A8BD4(rdram, ctx);
        goto after_7;
    // 0x800A747C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x800A7480: bne         $v0, $zero, L_800A745C
    if (ctx->r2 != 0) {
        // 0x800A7484: nop
    
            goto L_800A745C;
    }
    // 0x800A7484: nop

    // 0x800A7488: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800A748C:
    // 0x800A748C: jal         0x800A8CCC
    // 0x800A7490: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800A8CCC(rdram, ctx);
        goto after_8;
    // 0x800A7490: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800A7494: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A7498: lh          $t8, 0x7632($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7632);
    // 0x800A749C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A74A0: bne         $t8, $at, L_800A74B0
    if (ctx->r24 != ctx->r1) {
        // 0x800A74A4: nop
    
            goto L_800A74B0;
    }
    // 0x800A74A4: nop

    // 0x800A74A8: jal         0x800A9AA4
    // 0x800A74AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A9AA4(rdram, ctx);
        goto after_9;
    // 0x800A74AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
L_800A74B0:
    // 0x800A74B0: jal         0x800EA358
    // 0x800A74B4: nop

    func_800EA358(rdram, ctx);
        goto after_10;
    // 0x800A74B4: nop

    after_10:
    // 0x800A74B8: beq         $v0, $zero, L_800A74C8
    if (ctx->r2 == 0) {
        // 0x800A74BC: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_800A74C8;
    }
    // 0x800A74BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A74C0: jal         0x800EB51C
    // 0x800A74C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EB51C(rdram, ctx);
        goto after_11;
    // 0x800A74C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
L_800A74C8:
    // 0x800A74C8: jal         0x800C0984
    // 0x800A74CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800C0984(rdram, ctx);
        goto after_12;
    // 0x800A74CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x800A74D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A74D4: jal         0x800C9358
    // 0x800A74D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800C9358(rdram, ctx);
        goto after_13;
    // 0x800A74D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800A74DC: jal         0x800C0130
    // 0x800A74E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800C0130(rdram, ctx);
        goto after_14;
    // 0x800A74E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x800A74E4: jal         0x800EA358
    // 0x800A74E8: nop

    func_800EA358(rdram, ctx);
        goto after_15;
    // 0x800A74E8: nop

    after_15:
    // 0x800A74EC: beq         $v0, $zero, L_800A74FC
    if (ctx->r2 == 0) {
        // 0x800A74F0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_800A74FC;
    }
    // 0x800A74F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A74F4: jal         0x800EB51C
    // 0x800A74F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EB51C(rdram, ctx);
        goto after_16;
    // 0x800A74F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
L_800A74FC:
    // 0x800A74FC: jal         0x800FA508
    // 0x800A7500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800FA508(rdram, ctx);
        goto after_17;
    // 0x800A7500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x800A7504: jal         0x800B7448
    // 0x800A7508: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800B7448(rdram, ctx);
        goto after_18;
    // 0x800A7508: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x800A750C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A7510: jal         0x800C940C
    // 0x800A7514: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800C940C(rdram, ctx);
        goto after_19;
    // 0x800A7514: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x800A7518: jal         0x800E7EF4
    // 0x800A751C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E7EF4(rdram, ctx);
        goto after_20;
    // 0x800A751C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x800A7520: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A7524: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x800A7528: subu        $a1, $t9, $a0
    ctx->r5 = SUB32(ctx->r25, ctx->r4);
    // 0x800A752C: sra         $t0, $a1, 6
    ctx->r8 = S32(SIGNED(ctx->r5) >> 6);
    // 0x800A7530: jal         0x8002E660
    // 0x800A7534: sll         $a1, $t0, 6
    ctx->r5 = S32(ctx->r8 << 6);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_21;
    // 0x800A7534: sll         $a1, $t0, 6
    ctx->r5 = S32(ctx->r8 << 6);
    after_21:
    // 0x800A7538: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A753C: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x800A7540: subu        $a1, $t2, $a0
    ctx->r5 = SUB32(ctx->r10, ctx->r4);
    // 0x800A7544: sra         $t3, $a1, 4
    ctx->r11 = S32(SIGNED(ctx->r5) >> 4);
    // 0x800A7548: jal         0x8002E660
    // 0x800A754C: sll         $a1, $t3, 4
    ctx->r5 = S32(ctx->r11 << 4);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_22;
    // 0x800A754C: sll         $a1, $t3, 4
    ctx->r5 = S32(ctx->r11 << 4);
    after_22:
    // 0x800A7550: jal         0x800F51A8
    // 0x800A7554: nop

    func_800F51A8(rdram, ctx);
        goto after_23;
    // 0x800A7554: nop

    after_23:
    // 0x800A7558: jal         0x800D36A8
    // 0x800A755C: nop

    func_800D36A8(rdram, ctx);
        goto after_24;
    // 0x800A755C: nop

    after_24:
    // 0x800A7560: jal         0x800FFC90
    // 0x800A7564: nop

    func_800FFC90(rdram, ctx);
        goto after_25;
    // 0x800A7564: nop

    after_25:
    // 0x800A7568: jal         0x800A89BC
    // 0x800A756C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A89BC(rdram, ctx);
        goto after_26;
    // 0x800A756C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x800A7570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7574: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A7578: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A757C: jr          $ra
    // 0x800A7580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A7580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A7584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7584: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7588: addiu       $v0, $v0, 0x7630
    ctx->r2 = ADD32(ctx->r2, 0X7630);
    // 0x800A758C: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x800A7590: sb          $t6, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r14;
    // 0x800A7594: jr          $ra
    // 0x800A7598: sb          $a1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r5;
    return;
    // 0x800A7598: sb          $a1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800A759C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A759C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A75A0: lh          $v0, 0x7632($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7632);
    // 0x800A75A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A75A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A75AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A75B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A75B4: bne         $v0, $at, L_800A75C4
    if (ctx->r2 != ctx->r1) {
        // 0x800A75B8: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_800A75C4;
    }
    // 0x800A75B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800A75BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A75C0: bne         $a0, $at, L_800A75D8
    if (ctx->r4 != ctx->r1) {
        // 0x800A75C4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A75D8;
    }
L_800A75C4:
    // 0x800A75C4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A75C8: bne         $v0, $at, L_800A75EC
    if (ctx->r2 != ctx->r1) {
        // 0x800A75CC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A75EC;
    }
    // 0x800A75CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A75D0: beql        $a0, $at, L_800A75F0
    if (ctx->r4 == ctx->r1) {
        // 0x800A75D4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A75F0;
    }
    goto skip_0;
    // 0x800A75D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_0:
L_800A75D8:
    // 0x800A75D8: jal         0x800C9B84
    // 0x800A75DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800C9B84(rdram, ctx);
        goto after_0;
    // 0x800A75DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A75E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A75E4: lh          $v0, 0x7632($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7632);
    // 0x800A75E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800A75EC:
    // 0x800A75EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_800A75F0:
    // 0x800A75F0: bne         $v0, $at, L_800A7614
    if (ctx->r2 != ctx->r1) {
        // 0x800A75F4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A7614;
    }
    // 0x800A75F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A75F8: beql        $a0, $at, L_800A7618
    if (ctx->r4 == ctx->r1) {
        // 0x800A75FC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800A7618;
    }
    goto skip_1;
    // 0x800A75FC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_1:
    // 0x800A7600: jal         0x800C0920
    // 0x800A7604: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800C0920(rdram, ctx);
        goto after_1;
    // 0x800A7604: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x800A7608: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A760C: lh          $v0, 0x7632($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7632);
    // 0x800A7610: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800A7614:
    // 0x800A7614: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_800A7618:
    // 0x800A7618: bne         $v0, $at, L_800A762C
    if (ctx->r2 != ctx->r1) {
        // 0x800A761C: nop
    
            goto L_800A762C;
    }
    // 0x800A761C: nop

    // 0x800A7620: jal         0x800A9AF8
    // 0x800A7624: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800A9AF8(rdram, ctx);
        goto after_2;
    // 0x800A7624: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x800A7628: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800A762C:
    // 0x800A762C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7630: sh          $a0, 0x7632($at)
    MEM_H(0X7632, ctx->r1) = ctx->r4;
    // 0x800A7634: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7638: lh          $v0, 0x7632($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7632);
    // 0x800A763C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A7640: beq         $v0, $at, L_800A7668
    if (ctx->r2 == ctx->r1) {
        // 0x800A7644: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A7668;
    }
    // 0x800A7644: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A7648: beq         $v0, $at, L_800A7680
    if (ctx->r2 == ctx->r1) {
        // 0x800A764C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A7680;
    }
    // 0x800A764C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A7650: beq         $v0, $at, L_800A76CC
    if (ctx->r2 == ctx->r1) {
        // 0x800A7654: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800A76CC;
    }
    // 0x800A7654: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A7658: beq         $v0, $at, L_800A7678
    if (ctx->r2 == ctx->r1) {
        // 0x800A765C: nop
    
            goto L_800A7678;
    }
    // 0x800A765C: nop

    // 0x800A7660: b           L_800A76E8
    // 0x800A7664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A76E8;
    // 0x800A7664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A7668:
    // 0x800A7668: jal         0x800EA148
    // 0x800A766C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800EA148(rdram, ctx);
        goto after_3;
    // 0x800A766C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x800A7670: b           L_800A76E8
    // 0x800A7674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A76E8;
    // 0x800A7674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A7678:
    // 0x800A7678: jal         0x800A9998
    // 0x800A767C: nop

    func_800A9998(rdram, ctx);
        goto after_4;
    // 0x800A767C: nop

    after_4:
L_800A7680:
    // 0x800A7680: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7684: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A7688: beql        $t6, $at, L_800A769C
    if (ctx->r14 == ctx->r1) {
        // 0x800A768C: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_800A769C;
    }
    goto skip_2;
    // 0x800A768C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x800A7690: jal         0x800EA148
    // 0x800A7694: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800EA148(rdram, ctx);
        goto after_5;
    // 0x800A7694: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x800A7698: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_800A769C:
    // 0x800A769C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A76A0: beql        $t7, $zero, L_800A76C0
    if (ctx->r15 == 0) {
        // 0x800A76A4: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_800A76C0;
    }
    goto skip_3;
    // 0x800A76A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_3:
    // 0x800A76A8: lbu         $t8, 0x7647($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7647);
    // 0x800A76AC: bnel        $t8, $zero, L_800A76C0
    if (ctx->r24 != 0) {
        // 0x800A76B0: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_800A76C0;
    }
    goto skip_4;
    // 0x800A76B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_4:
    // 0x800A76B4: jal         0x800C9598
    // 0x800A76B8: nop

    func_800C9598(rdram, ctx);
        goto after_6;
    // 0x800A76B8: nop

    after_6:
    // 0x800A76BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_800A76C0:
    // 0x800A76C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A76C4: b           L_800A76E4
    // 0x800A76C8: swc1        $f4, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = ctx->f4.u32l;
        goto L_800A76E4;
    // 0x800A76C8: swc1        $f4, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = ctx->f4.u32l;
L_800A76CC:
    // 0x800A76CC: jal         0x800EA334
    // 0x800A76D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800EA334(rdram, ctx);
        goto after_7;
    // 0x800A76D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x800A76D4: jal         0x8001608C
    // 0x800A76D8: nop

    func_8001608C(rdram, ctx);
        goto after_8;
    // 0x800A76D8: nop

    after_8:
    // 0x800A76DC: jal         0x800C08F8
    // 0x800A76E0: nop

    func_800C08F8(rdram, ctx);
        goto after_9;
    // 0x800A76E0: nop

    after_9:
L_800A76E4:
    // 0x800A76E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A76E8:
    // 0x800A76E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A76EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A76F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A76F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A76F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A76FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A7700: jal         0x800FB968
    // 0x800A7704: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_800FB968(rdram, ctx);
        goto after_0;
    // 0x800A7704: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A7708: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A770C: addiu       $s0, $s0, 0x7630
    ctx->r16 = ADD32(ctx->r16, 0X7630);
    // 0x800A7710: jal         0x800885D0
    // 0x800A7714: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    _glintrosyncDll_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x800A7714: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    after_1:
    // 0x800A7718: jal         0x8001A2B0
    // 0x800A771C: nop

    func_8001A2B0(rdram, ctx);
        goto after_2;
    // 0x800A771C: nop

    after_2:
    // 0x800A7720: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x800A7724: lbu         $t7, 0x15($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15);
    // 0x800A7728: lbu         $t8, 0x14($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X14);
    // 0x800A772C: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x800A7730: lbu         $t0, 0x13($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13);
    // 0x800A7734: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x800A7738: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    // 0x800A773C: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x800A7740: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x800A7744: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x800A7748: sb          $zero, 0x13($s0)
    MEM_B(0X13, ctx->r16) = 0;
    // 0x800A774C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800A7750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7754: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800A7758: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x800A775C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800A7760: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800A7764: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x800A7768: jal         0x800A759C
    // 0x800A776C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_800A759C(rdram, ctx);
        goto after_3;
    // 0x800A776C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_3:
    // 0x800A7770: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800A7774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A7778: jal         0x800A5CF0
    // 0x800A777C: sb          $t2, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r10;
    func_800A5CF0(rdram, ctx);
        goto after_4;
    // 0x800A777C: sb          $t2, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r10;
    after_4:
    // 0x800A7780: addiu       $a0, $zero, 0x647
    ctx->r4 = ADD32(0, 0X647);
    // 0x800A7784: jal         0x800DA9E4
    // 0x800A7788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800DA9E4(rdram, ctx);
        goto after_5;
    // 0x800A7788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A778C: beq         $v0, $zero, L_800A77AC
    if (ctx->r2 == 0) {
        // 0x800A7790: nop
    
            goto L_800A77AC;
    }
    // 0x800A7790: nop

    // 0x800A7794: jal         0x80088268
    // 0x800A7798: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x800A7798: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    after_6:
    // 0x800A779C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800A77A0: lbu         $t3, 0x762C($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X762C);
    // 0x800A77A4: bne         $v0, $t3, L_800A77CC
    if (ctx->r2 != ctx->r11) {
        // 0x800A77A8: nop
    
            goto L_800A77CC;
    }
    // 0x800A77A8: nop

L_800A77AC:
    // 0x800A77AC: jal         0x800DA298
    // 0x800A77B0: addiu       $a0, $zero, 0x650
    ctx->r4 = ADD32(0, 0X650);
    func_800DA298(rdram, ctx);
        goto after_7;
    // 0x800A77B0: addiu       $a0, $zero, 0x650
    ctx->r4 = ADD32(0, 0X650);
    after_7:
    // 0x800A77B4: bne         $v0, $zero, L_800A77CC
    if (ctx->r2 != 0) {
        // 0x800A77B8: nop
    
            goto L_800A77CC;
    }
    // 0x800A77B8: nop

    // 0x800A77BC: jal         0x800EA05C
    // 0x800A77C0: nop

    func_800EA05C(rdram, ctx);
        goto after_8;
    // 0x800A77C0: nop

    after_8:
    // 0x800A77C4: jal         0x80087848
    // 0x800A77C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _cosectionstor_entrypoint_3(rdram, ctx);
        goto after_9;
    // 0x800A77C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
L_800A77CC:
    // 0x800A77CC: jal         0x800A7380
    // 0x800A77D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7380(rdram, ctx);
        goto after_10;
    // 0x800A77D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x800A77D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800A77D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A77DC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800A77E0: jal         0x800A72A4
    // 0x800A77E4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_800A72A4(rdram, ctx);
        goto after_11;
    // 0x800A77E4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_11:
    // 0x800A77E8: jal         0x800A5CF0
    // 0x800A77EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A5CF0(rdram, ctx);
        goto after_12;
    // 0x800A77EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x800A77F0: jal         0x800A5C94
    // 0x800A77F4: nop

    func_800A5C94(rdram, ctx);
        goto after_13;
    // 0x800A77F4: nop

    after_13:
    // 0x800A77F8: jal         0x80081724
    // 0x800A77FC: nop

    func_80081724(rdram, ctx);
        goto after_14;
    // 0x800A77FC: nop

    after_14:
    // 0x800A7800: jal         0x800885D8
    // 0x800A7804: nop

    _glintrosyncDll_entrypoint_1(rdram, ctx);
        goto after_15;
    // 0x800A7804: nop

    after_15:
    // 0x800A7808: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800A780C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800A7810: sb          $t5, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r13;
    // 0x800A7814: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800A7818: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A781C: jal         0x800A759C
    // 0x800A7820: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    func_800A759C(rdram, ctx);
        goto after_16;
    // 0x800A7820: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    after_16:
    // 0x800A7824: jal         0x80015768
    // 0x800A7828: nop

    func_80015768(rdram, ctx);
        goto after_17;
    // 0x800A7828: nop

    after_17:
    // 0x800A782C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7830: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A7834: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A7838: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A7844: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A7848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A784C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A7850: jal         0x8001A4B8
    // 0x800A7854: addiu       $a0, $a0, 0x7658
    ctx->r4 = ADD32(ctx->r4, 0X7658);
    func_8001A4B8(rdram, ctx);
        goto after_0;
    // 0x800A7854: addiu       $a0, $a0, 0x7658
    ctx->r4 = ADD32(ctx->r4, 0X7658);
    after_0:
    // 0x800A7858: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A785C: lh          $t6, 0x7634($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7634);
    // 0x800A7860: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A7864: beq         $t6, $zero, L_800A7874
    if (ctx->r14 == 0) {
        // 0x800A7868: nop
    
            goto L_800A7874;
    }
    // 0x800A7868: nop

    // 0x800A786C: jal         0x8001A4B8
    // 0x800A7870: addiu       $a0, $a0, 0x7658
    ctx->r4 = ADD32(ctx->r4, 0X7658);
    func_8001A4B8(rdram, ctx);
        goto after_1;
    // 0x800A7870: addiu       $a0, $a0, 0x7658
    ctx->r4 = ADD32(ctx->r4, 0X7658);
    after_1:
L_800A7874:
    // 0x800A7874: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A7878: lw          $t7, 0x7658($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7658);
    // 0x800A787C: jal         0x80014F58
    // 0x800A7880: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80014F58(rdram, ctx);
        goto after_2;
    // 0x800A7880: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_2:
    // 0x800A7884: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A7888: jal         0x800A73F4
    // 0x800A788C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800A73F4(rdram, ctx);
        goto after_3;
    // 0x800A788C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x800A7890: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A7894: lh          $t8, 0x7634($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7634);
    // 0x800A7898: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800A789C: bne         $t8, $zero, L_800A78F0
    if (ctx->r24 != 0) {
        // 0x800A78A0: nop
    
            goto L_800A78F0;
    }
    // 0x800A78A0: nop

    // 0x800A78A4: lw          $t9, 0x7658($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7658);
    // 0x800A78A8: jal         0x80015410
    // 0x800A78AC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_80015410(rdram, ctx);
        goto after_4;
    // 0x800A78AC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_4:
    // 0x800A78B0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800A78B4: lw          $t0, 0x7650($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7650);
    // 0x800A78B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A78BC: bne         $t0, $zero, L_800A78DC
    if (ctx->r8 != 0) {
        // 0x800A78C0: nop
    
            goto L_800A78DC;
    }
    // 0x800A78C0: nop

    // 0x800A78C4: jal         0x8001BD50
    // 0x800A78C8: lwc1        $f12, 0x55F4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X55F4);
    func_8001BD50(rdram, ctx);
        goto after_5;
    // 0x800A78C8: lwc1        $f12, 0x55F4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X55F4);
    after_5:
    // 0x800A78CC: beq         $v0, $zero, L_800A78DC
    if (ctx->r2 == 0) {
        // 0x800A78D0: nop
    
            goto L_800A78DC;
    }
    // 0x800A78D0: nop

    // 0x800A78D4: jal         0x800A7FD4
    // 0x800A78D8: nop

    func_800A7FD4(rdram, ctx);
        goto after_6;
    // 0x800A78D8: nop

    after_6:
L_800A78DC:
    // 0x800A78DC: jal         0x800E82EC
    // 0x800A78E0: nop

    func_800E82EC(rdram, ctx);
        goto after_7;
    // 0x800A78E0: nop

    after_7:
    // 0x800A78E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800A78E8: jal         0x8001A270
    // 0x800A78EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_8001A270(rdram, ctx);
        goto after_8;
    // 0x800A78EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_8:
L_800A78F0:
    // 0x800A78F0: jal         0x80015878
    // 0x800A78F4: nop

    func_80015878(rdram, ctx);
        goto after_9;
    // 0x800A78F4: nop

    after_9:
    // 0x800A78F8: jal         0x800E4628
    // 0x800A78FC: nop

    func_800E4628(rdram, ctx);
        goto after_10;
    // 0x800A78FC: nop

    after_10:
    // 0x800A7900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7904: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7908: sh          $zero, 0x7634($at)
    MEM_H(0X7634, ctx->r1) = 0;
    // 0x800A790C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7910: sw          $zero, 0x7650($at)
    MEM_W(0X7650, ctx->r1) = 0;
    // 0x800A7914: jr          $ra
    // 0x800A7918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A7918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A791C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A791C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7924: jal         0x800A79D4
    // 0x800A7928: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800A79D4(rdram, ctx);
        goto after_0;
    // 0x800A7928: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A792C: jal         0x800A7A90
    // 0x800A7930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A7A90(rdram, ctx);
        goto after_1;
    // 0x800A7930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800A7934: jal         0x800A7B18
    // 0x800A7938: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7B18(rdram, ctx);
        goto after_2;
    // 0x800A7938: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800A793C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7944: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A794C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A794C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7954: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A7958: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A795C: jal         0x800FE8EC
    // 0x800A7960: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800FE8EC(rdram, ctx);
        goto after_0;
    // 0x800A7960: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A7964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A7968: jal         0x800A7A18
    // 0x800A796C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A7A18(rdram, ctx);
        goto after_1;
    // 0x800A796C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A7970: jal         0x800A7A90
    // 0x800A7974: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A7A90(rdram, ctx);
        goto after_2;
    // 0x800A7974: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800A7978: jal         0x800A7B18
    // 0x800A797C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7B18(rdram, ctx);
        goto after_3;
    // 0x800A797C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800A7980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7988: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A799C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A79A0: jal         0x800FE8EC
    // 0x800A79A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800FE8EC(rdram, ctx);
        goto after_0;
    // 0x800A79A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A79A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A79AC: jal         0x800A7A6C
    // 0x800A79B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A7A6C(rdram, ctx);
        goto after_1;
    // 0x800A79B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A79B4: jal         0x800A7A90
    // 0x800A79B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A7A90(rdram, ctx);
        goto after_2;
    // 0x800A79B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800A79BC: jal         0x800A7B18
    // 0x800A79C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7B18(rdram, ctx);
        goto after_3;
    // 0x800A79C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800A79C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A79C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A79CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A79D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A79D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A79D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A79DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A79E0: jal         0x800FE4E4
    // 0x800A79E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800FE4E4(rdram, ctx);
        goto after_0;
    // 0x800A79E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A79E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A79EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A79F0: addiu       $v0, $v0, 0x7630
    ctx->r2 = ADD32(ctx->r2, 0X7630);
    // 0x800A79F4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800A79F8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A79FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A7A00: sb          $t6, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r14;
    // 0x800A7A04: sb          $zero, 0x15($v0)
    MEM_B(0X15, ctx->r2) = 0;
    // 0x800A7A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7A0C: sh          $t7, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r15;
    // 0x800A7A10: jr          $ra
    // 0x800A7A14: sb          $t8, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r24;
    return;
    // 0x800A7A14: sb          $t8, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_800A7A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7A20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A7A24: jal         0x800FE8EC
    // 0x800A7A28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800FE8EC(rdram, ctx);
        goto after_0;
    // 0x800A7A28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A7A2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7A34: addiu       $v0, $v0, 0x7630
    ctx->r2 = ADD32(ctx->r2, 0X7630);
    // 0x800A7A38: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800A7A3C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7A40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A7A44: sb          $zero, 0x16($v0)
    MEM_B(0X16, ctx->r2) = 0;
    // 0x800A7A48: sb          $t6, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r14;
    // 0x800A7A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7A50: sh          $t7, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r15;
    // 0x800A7A54: jr          $ra
    // 0x800A7A58: sb          $t8, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r24;
    return;
    // 0x800A7A58: sb          $t8, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_800A7A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7A5C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A7A60: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7A64: jr          $ra
    // 0x800A7A68: sb          $t6, 0x7648($at)
    MEM_B(0X7648, ctx->r1) = ctx->r14;
    return;
    // 0x800A7A68: sb          $t6, 0x7648($at)
    MEM_B(0X7648, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A7A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7A6C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7A70: addiu       $v0, $v0, 0x7630
    ctx->r2 = ADD32(ctx->r2, 0X7630);
    // 0x800A7A74: lbu         $t6, 0x18($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X18);
    // 0x800A7A78: sb          $zero, 0x16($v0)
    MEM_B(0X16, ctx->r2) = 0;
    // 0x800A7A7C: sh          $a0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r4;
    // 0x800A7A80: sb          $a1, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r5;
    // 0x800A7A84: sb          $zero, 0x18($v0)
    MEM_B(0X18, ctx->r2) = 0;
    // 0x800A7A88: jr          $ra
    // 0x800A7A8C: sb          $t6, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r14;
    return;
    // 0x800A7A8C: sb          $t6, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_800A7A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7A90: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7A94: addiu       $v0, $v0, 0x7630
    ctx->r2 = ADD32(ctx->r2, 0X7630);
    // 0x800A7A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7AA0: sb          $a0, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r4;
    // 0x800A7AA4: beq         $a0, $zero, L_800A7AC4
    if (ctx->r4 == 0) {
        // 0x800A7AA8: sb          $zero, 0x17($v0)
        MEM_B(0X17, ctx->r2) = 0;
            goto L_800A7AC4;
    }
    // 0x800A7AA8: sb          $zero, 0x17($v0)
    MEM_B(0X17, ctx->r2) = 0;
    // 0x800A7AAC: jal         0x800C9510
    // 0x800A7AB0: nop

    func_800C9510(rdram, ctx);
        goto after_0;
    // 0x800A7AB0: nop

    after_0:
    // 0x800A7AB4: bnel        $v0, $zero, L_800A7AC8
    if (ctx->r2 != 0) {
        // 0x800A7AB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A7AC8;
    }
    goto skip_0;
    // 0x800A7AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A7ABC: jal         0x800C9610
    // 0x800A7AC0: nop

    func_800C9610(rdram, ctx);
        goto after_1;
    // 0x800A7AC0: nop

    after_1:
L_800A7AC4:
    // 0x800A7AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A7AC8:
    // 0x800A7AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7ACC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7AD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A7AD8: addiu       $v0, $v0, 0x7630
    ctx->r2 = ADD32(ctx->r2, 0X7630);
    // 0x800A7ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7AE4: sb          $a0, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r4;
    // 0x800A7AE8: beq         $a0, $zero, L_800A7B08
    if (ctx->r4 == 0) {
        // 0x800A7AEC: sb          $a1, 0x17($v0)
        MEM_B(0X17, ctx->r2) = ctx->r5;
            goto L_800A7B08;
    }
    // 0x800A7AEC: sb          $a1, 0x17($v0)
    MEM_B(0X17, ctx->r2) = ctx->r5;
    // 0x800A7AF0: jal         0x800C9510
    // 0x800A7AF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800C9510(rdram, ctx);
        goto after_0;
    // 0x800A7AF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A7AF8: bne         $v0, $zero, L_800A7B08
    if (ctx->r2 != 0) {
        // 0x800A7AFC: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_800A7B08;
    }
    // 0x800A7AFC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7B00: jal         0x800C964C
    // 0x800A7B04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800C964C(rdram, ctx);
        goto after_1;
    // 0x800A7B04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
L_800A7B08:
    // 0x800A7B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7B10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7B18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7B1C: jr          $ra
    // 0x800A7B20: sb          $a0, 0x7642($at)
    MEM_B(0X7642, ctx->r1) = ctx->r4;
    return;
    // 0x800A7B20: sb          $a0, 0x7642($at)
    MEM_B(0X7642, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800A7B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7B28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7B2C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800A7B30: jal         0x800A759C
    // 0x800A7B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A759C(rdram, ctx);
        goto after_0;
    // 0x800A7B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800A7B38: jal         0x80013430
    // 0x800A7B3C: nop

    func_80013430(rdram, ctx);
        goto after_1;
    // 0x800A7B3C: nop

    after_1:
    // 0x800A7B40: jal         0x800B5DF4
    // 0x800A7B44: nop

    func_800B5DF4(rdram, ctx);
        goto after_2;
    // 0x800A7B44: nop

    after_2:
    // 0x800A7B48: jal         0x800CA060
    // 0x800A7B4C: nop

    func_800CA060(rdram, ctx);
        goto after_3;
    // 0x800A7B4C: nop

    after_3:
    // 0x800A7B50: jal         0x800DF35C
    // 0x800A7B54: nop

    func_800DF35C(rdram, ctx);
        goto after_4;
    // 0x800A7B54: nop

    after_4:
    // 0x800A7B58: jal         0x800A7380
    // 0x800A7B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A7380(rdram, ctx);
        goto after_5;
    // 0x800A7B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x800A7B60: jal         0x80088250
    // 0x800A7B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _gcsectionDll_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x800A7B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x800A7B68: jal         0x80088228
    // 0x800A7B6C: nop

    _gclevel_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x800A7B6C: nop

    after_7:
    // 0x800A7B70: jal         0x80087A48
    // 0x800A7B74: nop

    _gcgame_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x800A7B74: nop

    after_8:
    // 0x800A7B78: jal         0x8008B64C
    // 0x800A7B7C: nop

    func_8008B64C(rdram, ctx);
        goto after_9;
    // 0x800A7B7C: nop

    after_9:
    // 0x800A7B80: jal         0x800FB908
    // 0x800A7B84: nop

    func_800FB908(rdram, ctx);
        goto after_10;
    // 0x800A7B84: nop

    after_10:
    // 0x800A7B88: jal         0x800C2A90
    // 0x800A7B8C: nop

    func_800C2A90(rdram, ctx);
        goto after_11;
    // 0x800A7B8C: nop

    after_11:
    // 0x800A7B90: jal         0x800A8710
    // 0x800A7B94: nop

    func_800A8710(rdram, ctx);
        goto after_12;
    // 0x800A7B94: nop

    after_12:
    // 0x800A7B98: jal         0x800E4290
    // 0x800A7B9C: nop

    func_800E4290(rdram, ctx);
        goto after_13;
    // 0x800A7B9C: nop

    after_13:
    // 0x800A7BA0: jal         0x800887B8
    // 0x800A7BA4: nop

    _glcutDll_entrypoint_2(rdram, ctx);
        goto after_14;
    // 0x800A7BA4: nop

    after_14:
    // 0x800A7BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7BB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A7BBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A7BC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A7BC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A7BC8: jal         0x800A5CF0
    // 0x800A7BCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A5CF0(rdram, ctx);
        goto after_0;
    // 0x800A7BCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800A7BD0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A7BD4: addiu       $s0, $s0, 0x7630
    ctx->r16 = ADD32(ctx->r16, 0X7630);
    // 0x800A7BD8: andi        $t0, $zero, 0xFF
    ctx->r8 = 0 & 0XFF;
    // 0x800A7BDC: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    // 0x800A7BE0: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
    // 0x800A7BE4: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    // 0x800A7BE8: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x800A7BEC: sb          $zero, 0x17($s0)
    MEM_B(0X17, ctx->r16) = 0;
    // 0x800A7BF0: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x800A7BF4: sb          $zero, 0x13($s0)
    MEM_B(0X13, ctx->r16) = 0;
    // 0x800A7BF8: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x800A7BFC: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x800A7C00: jal         0x800A8240
    // 0x800A7C04: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    func_800A8240(rdram, ctx);
        goto after_1;
    // 0x800A7C04: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    after_1:
    // 0x800A7C08: jal         0x800DA238
    // 0x800A7C0C: nop

    func_800DA238(rdram, ctx);
        goto after_2;
    // 0x800A7C0C: nop

    after_2:
    // 0x800A7C10: jal         0x800DA268
    // 0x800A7C14: nop

    func_800DA268(rdram, ctx);
        goto after_3;
    // 0x800A7C14: nop

    after_3:
    // 0x800A7C18: jal         0x800885A8
    // 0x800A7C1C: nop

    _glglobaldata_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x800A7C1C: nop

    after_4:
    // 0x800A7C20: jal         0x800886C8
    // 0x800A7C24: nop

    _glglobalsettings_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x800A7C24: nop

    after_5:
    // 0x800A7C28: jal         0x80088570
    // 0x800A7C2C: nop

    _glgamedata_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x800A7C2C: nop

    after_6:
    // 0x800A7C30: jal         0x800D3970
    // 0x800A7C34: nop

    func_800D3970(rdram, ctx);
        goto after_7;
    // 0x800A7C34: nop

    after_7:
    // 0x800A7C38: jal         0x800E4278
    // 0x800A7C3C: nop

    func_800E4278(rdram, ctx);
        goto after_8;
    // 0x800A7C3C: nop

    after_8:
    // 0x800A7C40: jal         0x800A861C
    // 0x800A7C44: nop

    func_800A861C(rdram, ctx);
        goto after_9;
    // 0x800A7C44: nop

    after_9:
    // 0x800A7C48: jal         0x800C2A08
    // 0x800A7C4C: nop

    func_800C2A08(rdram, ctx);
        goto after_10;
    // 0x800A7C4C: nop

    after_10:
    // 0x800A7C50: jal         0x800FB808
    // 0x800A7C54: nop

    func_800FB808(rdram, ctx);
        goto after_11;
    // 0x800A7C54: nop

    after_11:
    // 0x800A7C58: jal         0x800887C0
    // 0x800A7C5C: nop

    _glcutDll_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x800A7C5C: nop

    after_12:
    // 0x800A7C60: jal         0x800CA098
    // 0x800A7C64: nop

    func_800CA098(rdram, ctx);
        goto after_13;
    // 0x800A7C64: nop

    after_13:
    // 0x800A7C68: jal         0x800D34A0
    // 0x800A7C6C: nop

    func_800D34A0(rdram, ctx);
        goto after_14;
    // 0x800A7C6C: nop

    after_14:
    // 0x800A7C70: jal         0x800B5DD4
    // 0x800A7C74: nop

    func_800B5DD4(rdram, ctx);
        goto after_15;
    // 0x800A7C74: nop

    after_15:
    // 0x800A7C78: jal         0x800133A0
    // 0x800A7C7C: nop

    func_800133A0(rdram, ctx);
        goto after_16;
    // 0x800A7C7C: nop

    after_16:
    // 0x800A7C80: jal         0x800DF38C
    // 0x800A7C84: nop

    func_800DF38C(rdram, ctx);
        goto after_17;
    // 0x800A7C84: nop

    after_17:
    // 0x800A7C88: jal         0x8008B610
    // 0x800A7C8C: nop

    func_8008B610(rdram, ctx);
        goto after_18;
    // 0x800A7C8C: nop

    after_18:
    // 0x800A7C90: jal         0x800DC310
    // 0x800A7C94: nop

    func_800DC310(rdram, ctx);
        goto after_19;
    // 0x800A7C94: nop

    after_19:
    // 0x800A7C98: jal         0x8001A290
    // 0x800A7C9C: nop

    func_8001A290(rdram, ctx);
        goto after_20;
    // 0x800A7C9C: nop

    after_20:
    // 0x800A7CA0: jal         0x800D8F84
    // 0x800A7CA4: nop

    func_800D8F84(rdram, ctx);
        goto after_21;
    // 0x800A7CA4: nop

    after_21:
    // 0x800A7CA8: jal         0x80088C78
    // 0x800A7CAC: nop

    _gsattract_entrypoint_4(rdram, ctx);
        goto after_22;
    // 0x800A7CAC: nop

    after_22:
    // 0x800A7CB0: jal         0x800EBB5C
    // 0x800A7CB4: nop

    func_800EBB5C(rdram, ctx);
        goto after_23;
    // 0x800A7CB4: nop

    after_23:
    // 0x800A7CB8: jal         0x80087A40
    // 0x800A7CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _gcgame_entrypoint_0(rdram, ctx);
        goto after_24;
    // 0x800A7CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x800A7CC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7CC4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800A7CC8: sh          $t1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r9;
    // 0x800A7CCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A7CD0: jal         0x800D8FA0
    // 0x800A7CD4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_800D8FA0(rdram, ctx);
        goto after_25;
    // 0x800A7CD4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_25:
    // 0x800A7CD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A7CDC: jal         0x80088220
    // 0x800A7CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gclevel_entrypoint_0(rdram, ctx);
        goto after_26;
    // 0x800A7CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x800A7CE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A7CE8: jal         0x80088248
    // 0x800A7CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gcsectionDll_entrypoint_0(rdram, ctx);
        goto after_27;
    // 0x800A7CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x800A7CF0: jal         0x800A71E0
    // 0x800A7CF4: nop

    func_800A71E0(rdram, ctx);
        goto after_28;
    // 0x800A7CF4: nop

    after_28:
    // 0x800A7CF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A7CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A7D04: jal         0x800A72A4
    // 0x800A7D08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800A72A4(rdram, ctx);
        goto after_29;
    // 0x800A7D08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x800A7D0C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x800A7D10: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A7D14: jal         0x800A759C
    // 0x800A7D18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A759C(rdram, ctx);
        goto after_30;
    // 0x800A7D18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x800A7D1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7D20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A7D24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A7D28: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7D30: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7D34: lwc1        $f6, 0x7638($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7638);
    // 0x800A7D38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7D44: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800A7D48: nop

    // 0x800A7D4C: bc1f        L_800A7D64
    if (!c1cs) {
        // 0x800A7D50: nop
    
            goto L_800A7D64;
    }
    // 0x800A7D50: nop

    // 0x800A7D54: jal         0x800D8FA0
    // 0x800A7D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D8FA0(rdram, ctx);
        goto after_0;
    // 0x800A7D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800A7D5C: b           L_800A7D78
    // 0x800A7D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A7D78;
    // 0x800A7D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A7D64:
    // 0x800A7D64: jal         0x80014F4C
    // 0x800A7D68: nop

    func_80014F4C(rdram, ctx);
        goto after_1;
    // 0x800A7D68: nop

    after_1:
    // 0x800A7D6C: jal         0x800D8FA0
    // 0x800A7D70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D8FA0(rdram, ctx);
        goto after_2;
    // 0x800A7D70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A7D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A7D78:
    // 0x800A7D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7D7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7D84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A7D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7D8C: jal         0x800D8FF8
    // 0x800A7D90: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800A7D90: nop

    after_0:
    // 0x800A7D94: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A7D98: addiu       $v1, $v1, 0x7630
    ctx->r3 = ADD32(ctx->r3, 0X7630);
    // 0x800A7D9C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800A7DA0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800A7DA4: jal         0x800C9510
    // 0x800A7DA8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    func_800C9510(rdram, ctx);
        goto after_1;
    // 0x800A7DA8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    after_1:
    // 0x800A7DAC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A7DB0: bne         $v0, $zero, L_800A7E28
    if (ctx->r2 != 0) {
        // 0x800A7DB4: addiu       $v1, $v1, 0x7630
        ctx->r3 = ADD32(ctx->r3, 0X7630);
            goto L_800A7E28;
    }
    // 0x800A7DB4: addiu       $v1, $v1, 0x7630
    ctx->r3 = ADD32(ctx->r3, 0X7630);
    // 0x800A7DB8: lbu         $v0, 0x12($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X12);
    // 0x800A7DBC: sb          $zero, 0x12($v1)
    MEM_B(0X12, ctx->r3) = 0;
    // 0x800A7DC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A7DC4: beql        $v0, $zero, L_800A7E2C
    if (ctx->r2 == 0) {
        // 0x800A7DC8: lbu         $v0, 0x1A($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0X1A);
            goto L_800A7E2C;
    }
    goto skip_0;
    // 0x800A7DC8: lbu         $v0, 0x1A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1A);
    skip_0:
    // 0x800A7DCC: beq         $v0, $at, L_800A7DEC
    if (ctx->r2 == ctx->r1) {
        // 0x800A7DD0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800A7DEC;
    }
    // 0x800A7DD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A7DD4: beq         $v0, $at, L_800A7DFC
    if (ctx->r2 == ctx->r1) {
        // 0x800A7DD8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A7DFC;
    }
    // 0x800A7DD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A7DDC: beql        $v0, $at, L_800A7E10
    if (ctx->r2 == ctx->r1) {
        // 0x800A7DE0: lh          $a0, 0x10($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X10);
            goto L_800A7E10;
    }
    goto skip_1;
    // 0x800A7DE0: lh          $a0, 0x10($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X10);
    skip_1:
    // 0x800A7DE4: b           L_800A7E2C
    // 0x800A7DE8: lbu         $v0, 0x1A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1A);
        goto L_800A7E2C;
    // 0x800A7DE8: lbu         $v0, 0x1A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1A);
L_800A7DEC:
    // 0x800A7DEC: jal         0x800A76F4
    // 0x800A7DF0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800A76F4(rdram, ctx);
        goto after_2;
    // 0x800A7DF0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x800A7DF4: b           L_800A7FA4
    // 0x800A7DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A7FA4;
    // 0x800A7DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A7DFC:
    // 0x800A7DFC: jal         0x800A76F4
    // 0x800A7E00: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    func_800A76F4(rdram, ctx);
        goto after_3;
    // 0x800A7E00: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    after_3:
    // 0x800A7E04: b           L_800A7FA4
    // 0x800A7E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A7FA4;
    // 0x800A7E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A7E0C: lh          $a0, 0x10($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X10);
L_800A7E10:
    // 0x800A7E10: jal         0x800A9924
    // 0x800A7E14: lbu         $a1, 0x13($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X13);
    func_800A9924(rdram, ctx);
        goto after_4;
    // 0x800A7E14: lbu         $a1, 0x13($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X13);
    after_4:
    // 0x800A7E18: jal         0x800A76F4
    // 0x800A7E1C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800A76F4(rdram, ctx);
        goto after_5;
    // 0x800A7E1C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x800A7E20: b           L_800A7FA4
    // 0x800A7E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A7FA4;
    // 0x800A7E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A7E28:
    // 0x800A7E28: lbu         $v0, 0x1A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1A);
L_800A7E2C:
    // 0x800A7E2C: beq         $v0, $zero, L_800A7E48
    if (ctx->r2 == 0) {
        // 0x800A7E30: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_800A7E48;
    }
    // 0x800A7E30: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x800A7E34: jal         0x800A759C
    // 0x800A7E38: lbu         $a1, 0x1B($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1B);
    func_800A759C(rdram, ctx);
        goto after_6;
    // 0x800A7E38: lbu         $a1, 0x1B($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1B);
    after_6:
    // 0x800A7E3C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A7E40: addiu       $v1, $v1, 0x7630
    ctx->r3 = ADD32(ctx->r3, 0X7630);
    // 0x800A7E44: sb          $zero, 0x1A($v1)
    MEM_B(0X1A, ctx->r3) = 0;
L_800A7E48:
    // 0x800A7E48: jal         0x800EA170
    // 0x800A7E4C: nop

    func_800EA170(rdram, ctx);
        goto after_7;
    // 0x800A7E4C: nop

    after_7:
    // 0x800A7E50: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A7E54: lw          $t6, -0x5C0C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C0C);
    // 0x800A7E58: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800A7E5C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A7E60: beq         $t6, $zero, L_800A7E7C
    if (ctx->r14 == 0) {
        // 0x800A7E64: nop
    
            goto L_800A7E7C;
    }
    // 0x800A7E64: nop

    // 0x800A7E68: lw          $t7, -0x5C10($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5C10);
    // 0x800A7E6C: bne         $t7, $zero, L_800A7E7C
    if (ctx->r15 != 0) {
        // 0x800A7E70: nop
    
            goto L_800A7E7C;
    }
    // 0x800A7E70: nop

    // 0x800A7E74: jal         0x800A8278
    // 0x800A7E78: nop

    func_800A8278(rdram, ctx);
        goto after_8;
    // 0x800A7E78: nop

    after_8:
L_800A7E7C:
    // 0x800A7E7C: jal         0x800C7900
    // 0x800A7E80: nop

    func_800C7900(rdram, ctx);
        goto after_9;
    // 0x800A7E80: nop

    after_9:
    // 0x800A7E84: jal         0x800C427C
    // 0x800A7E88: nop

    func_800C427C(rdram, ctx);
        goto after_10;
    // 0x800A7E88: nop

    after_10:
    // 0x800A7E8C: jal         0x800FB968
    // 0x800A7E90: nop

    func_800FB968(rdram, ctx);
        goto after_11;
    // 0x800A7E90: nop

    after_11:
    // 0x800A7E94: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A7E98: addiu       $v1, $v1, 0x7630
    ctx->r3 = ADD32(ctx->r3, 0X7630);
    // 0x800A7E9C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x800A7EA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A7EA4: beq         $v0, $at, L_800A7ECC
    if (ctx->r2 == ctx->r1) {
        // 0x800A7EA8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A7ECC;
    }
    // 0x800A7EA8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A7EAC: beq         $v0, $at, L_800A7F44
    if (ctx->r2 == ctx->r1) {
        // 0x800A7EB0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800A7F44;
    }
    // 0x800A7EB0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A7EB4: bne         $v0, $at, L_800A7F80
    if (ctx->r2 != ctx->r1) {
        // 0x800A7EB8: nop
    
            goto L_800A7F80;
    }
    // 0x800A7EB8: nop

    // 0x800A7EBC: jal         0x800A9A14
    // 0x800A7EC0: nop

    func_800A9A14(rdram, ctx);
        goto after_12;
    // 0x800A7EC0: nop

    after_12:
    // 0x800A7EC4: b           L_800A7F80
    // 0x800A7EC8: nop

        goto L_800A7F80;
    // 0x800A7EC8: nop

L_800A7ECC:
    // 0x800A7ECC: jal         0x800D8FF8
    // 0x800A7ED0: nop

    func_800D8FF8(rdram, ctx);
        goto after_13;
    // 0x800A7ED0: nop

    after_13:
    // 0x800A7ED4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A7ED8: addiu       $v1, $v1, 0x7630
    ctx->r3 = ADD32(ctx->r3, 0X7630);
    // 0x800A7EDC: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x800A7EE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7EE4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800A7EE8: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x800A7EEC: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x800A7EF0: lwc1        $f16, 0x55F8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X55F8);
    // 0x800A7EF4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800A7EF8: nop

    // 0x800A7EFC: bc1fl       L_800A7F28
    if (!c1cs) {
        // 0x800A7F00: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_800A7F28;
    }
    goto skip_2;
    // 0x800A7F00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800A7F04: jal         0x800C0A34
    // 0x800A7F08: nop

    func_800C0A34(rdram, ctx);
        goto after_14;
    // 0x800A7F08: nop

    after_14:
    // 0x800A7F0C: beq         $v0, $zero, L_800A7F24
    if (ctx->r2 == 0) {
        // 0x800A7F10: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_800A7F24;
    }
    // 0x800A7F10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A7F14: jal         0x800A759C
    // 0x800A7F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A759C(rdram, ctx);
        goto after_15;
    // 0x800A7F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x800A7F1C: b           L_800A7F80
    // 0x800A7F20: nop

        goto L_800A7F80;
    // 0x800A7F20: nop

L_800A7F24:
    // 0x800A7F24: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
L_800A7F28:
    // 0x800A7F28: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A7F2C: bne         $t8, $zero, L_800A7F80
    if (ctx->r24 != 0) {
        // 0x800A7F30: nop
    
            goto L_800A7F80;
    }
    // 0x800A7F30: nop

    // 0x800A7F34: jal         0x800A759C
    // 0x800A7F38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A759C(rdram, ctx);
        goto after_16;
    // 0x800A7F38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x800A7F3C: b           L_800A7F80
    // 0x800A7F40: nop

        goto L_800A7F80;
    // 0x800A7F40: nop

L_800A7F44:
    // 0x800A7F44: jal         0x800C0948
    // 0x800A7F48: nop

    func_800C0948(rdram, ctx);
        goto after_17;
    // 0x800A7F48: nop

    after_17:
    // 0x800A7F4C: beq         $v0, $zero, L_800A7F80
    if (ctx->r2 == 0) {
        // 0x800A7F50: nop
    
            goto L_800A7F80;
    }
    // 0x800A7F50: nop

    // 0x800A7F54: jal         0x800EA334
    // 0x800A7F58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800EA334(rdram, ctx);
        goto after_18;
    // 0x800A7F58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x800A7F5C: jal         0x800EA34C
    // 0x800A7F60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800EA34C(rdram, ctx);
        goto after_19;
    // 0x800A7F60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x800A7F64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A7F68: jal         0x800A759C
    // 0x800A7F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A759C(rdram, ctx);
        goto after_20;
    // 0x800A7F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x800A7F70: jal         0x800FFC14
    // 0x800A7F74: nop

    func_800FFC14(rdram, ctx);
        goto after_21;
    // 0x800A7F74: nop

    after_21:
    // 0x800A7F78: jal         0x800F8850
    // 0x800A7F7C: nop

    func_800F8850(rdram, ctx);
        goto after_22;
    // 0x800A7F7C: nop

    after_22:
L_800A7F80:
    // 0x800A7F80: jal         0x800A819C
    // 0x800A7F84: nop

    func_800A819C(rdram, ctx);
        goto after_23;
    // 0x800A7F84: nop

    after_23:
    // 0x800A7F88: beq         $v0, $zero, L_800A7F98
    if (ctx->r2 == 0) {
        // 0x800A7F8C: nop
    
            goto L_800A7F98;
    }
    // 0x800A7F8C: nop

    // 0x800A7F90: jal         0x800CA0A8
    // 0x800A7F94: nop

    func_800CA0A8(rdram, ctx);
        goto after_24;
    // 0x800A7F94: nop

    after_24:
L_800A7F98:
    // 0x800A7F98: jal         0x800C92A8
    // 0x800A7F9C: nop

    func_800C92A8(rdram, ctx);
        goto after_25;
    // 0x800A7F9C: nop

    after_25:
    // 0x800A7FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A7FA4:
    // 0x800A7FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7FA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A7FAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A7FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7FBC: jal         0x800A7584
    // 0x800A7FC0: nop

    func_800A7584(rdram, ctx);
        goto after_0;
    // 0x800A7FC0: nop

    after_0:
    // 0x800A7FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7FCC: jr          $ra
    // 0x800A7FD0: nop

    return;
    // 0x800A7FD0: nop

;}
RECOMP_FUNC void func_800A7FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7FDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A7FE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A7FE4: jal         0x8001B84C
    // 0x800A7FE8: sw          $t6, 0x7650($at)
    MEM_W(0X7650, ctx->r1) = ctx->r14;
    func_8001B84C(rdram, ctx);
        goto after_0;
    // 0x800A7FE8: sw          $t6, 0x7650($at)
    MEM_W(0X7650, ctx->r1) = ctx->r14;
    after_0:
    // 0x800A7FEC: jal         0x8001B840
    // 0x800A7FF0: nop

    func_8001B840(rdram, ctx);
        goto after_1;
    // 0x800A7FF0: nop

    after_1:
    // 0x800A7FF4: jal         0x80081BEC
    // 0x800A7FF8: nop

    func_80081BEC(rdram, ctx);
        goto after_2;
    // 0x800A7FF8: nop

    after_2:
    // 0x800A7FFC: jal         0x8001B518
    // 0x800A8000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B518(rdram, ctx);
        goto after_3;
    // 0x800A8000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800A8004: jal         0x801015C8
    // 0x800A8008: nop

    func_801015C8(rdram, ctx);
        goto after_4;
    // 0x800A8008: nop

    after_4:
    // 0x800A800C: jal         0x80017840
    // 0x800A8010: nop

    func_80017840(rdram, ctx);
        goto after_5;
    // 0x800A8010: nop

    after_5:
    // 0x800A8014: jal         0x800D8674
    // 0x800A8018: nop

    func_800D8674(rdram, ctx);
        goto after_6;
    // 0x800A8018: nop

    after_6:
    // 0x800A801C: jal         0x8008BA5C
    // 0x800A8020: nop

    func_8008BA5C(rdram, ctx);
        goto after_7;
    // 0x800A8020: nop

    after_7:
    // 0x800A8024: jal         0x800B5A6C
    // 0x800A8028: nop

    func_800B5A6C(rdram, ctx);
        goto after_8;
    // 0x800A8028: nop

    after_8:
    // 0x800A802C: jal         0x800A5654
    // 0x800A8030: nop

    func_800A5654(rdram, ctx);
        goto after_9;
    // 0x800A8030: nop

    after_9:
    // 0x800A8034: jal         0x800DF874
    // 0x800A8038: nop

    func_800DF874(rdram, ctx);
        goto after_10;
    // 0x800A8038: nop

    after_10:
    // 0x800A803C: jal         0x800A95C4
    // 0x800A8040: nop

    func_800A95C4(rdram, ctx);
        goto after_11;
    // 0x800A8040: nop

    after_11:
    // 0x800A8044: jal         0x800F86D8
    // 0x800A8048: nop

    func_800F86D8(rdram, ctx);
        goto after_12;
    // 0x800A8048: nop

    after_12:
    // 0x800A804C: jal         0x800F91EC
    // 0x800A8050: nop

    func_800F91EC(rdram, ctx);
        goto after_13;
    // 0x800A8050: nop

    after_13:
    // 0x800A8054: jal         0x800B562C
    // 0x800A8058: nop

    func_800B562C(rdram, ctx);
        goto after_14;
    // 0x800A8058: nop

    after_14:
    // 0x800A805C: jal         0x800BF58C
    // 0x800A8060: nop

    func_800BF58C(rdram, ctx);
        goto after_15;
    // 0x800A8060: nop

    after_15:
    // 0x800A8064: jal         0x800BD600
    // 0x800A8068: nop

    func_800BD600(rdram, ctx);
        goto after_16;
    // 0x800A8068: nop

    after_16:
    // 0x800A806C: jal         0x800CCFEC
    // 0x800A8070: nop

    func_800CCFEC(rdram, ctx);
        goto after_17;
    // 0x800A8070: nop

    after_17:
    // 0x800A8074: jal         0x800A5D6C
    // 0x800A8078: nop

    func_800A5D6C(rdram, ctx);
        goto after_18;
    // 0x800A8078: nop

    after_18:
    // 0x800A807C: jal         0x800B5E3C
    // 0x800A8080: nop

    func_800B5E3C(rdram, ctx);
        goto after_19;
    // 0x800A8080: nop

    after_19:
    // 0x800A8084: jal         0x800DA1E0
    // 0x800A8088: nop

    func_800DA1E0(rdram, ctx);
        goto after_20;
    // 0x800A8088: nop

    after_20:
    // 0x800A808C: jal         0x800D15CC
    // 0x800A8090: nop

    func_800D15CC(rdram, ctx);
        goto after_21;
    // 0x800A8090: nop

    after_21:
    // 0x800A8094: jal         0x8010E030
    // 0x800A8098: nop

    func_8010E030(rdram, ctx);
        goto after_22;
    // 0x800A8098: nop

    after_22:
    // 0x800A809C: jal         0x800C075C
    // 0x800A80A0: nop

    func_800C075C(rdram, ctx);
        goto after_23;
    // 0x800A80A0: nop

    after_23:
    // 0x800A80A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A80A8: lh          $t7, 0x7632($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7632);
    // 0x800A80AC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A80B0: bne         $t7, $at, L_800A80C0
    if (ctx->r15 != ctx->r1) {
        // 0x800A80B4: nop
    
            goto L_800A80C0;
    }
    // 0x800A80B4: nop

    // 0x800A80B8: jal         0x800C08C0
    // 0x800A80BC: nop

    func_800C08C0(rdram, ctx);
        goto after_24;
    // 0x800A80BC: nop

    after_24:
L_800A80C0:
    // 0x800A80C0: jal         0x801005B8
    // 0x800A80C4: nop

    func_801005B8(rdram, ctx);
        goto after_25;
    // 0x800A80C4: nop

    after_25:
    // 0x800A80C8: jal         0x800D6D68
    // 0x800A80CC: nop

    func_800D6D68(rdram, ctx);
        goto after_26;
    // 0x800A80CC: nop

    after_26:
    // 0x800A80D0: jal         0x80100E54
    // 0x800A80D4: nop

    func_80100E54(rdram, ctx);
        goto after_27;
    // 0x800A80D4: nop

    after_27:
    // 0x800A80D8: jal         0x800BFFF4
    // 0x800A80DC: nop

    func_800BFFF4(rdram, ctx);
        goto after_28;
    // 0x800A80DC: nop

    after_28:
    // 0x800A80E0: jal         0x800C9074
    // 0x800A80E4: nop

    func_800C9074(rdram, ctx);
        goto after_29;
    // 0x800A80E4: nop

    after_29:
    // 0x800A80E8: jal         0x800DBB64
    // 0x800A80EC: nop

    func_800DBB64(rdram, ctx);
        goto after_30;
    // 0x800A80EC: nop

    after_30:
    // 0x800A80F0: jal         0x800E8B3C
    // 0x800A80F4: nop

    func_800E8B3C(rdram, ctx);
        goto after_31;
    // 0x800A80F4: nop

    after_31:
    // 0x800A80F8: jal         0x800A86D8
    // 0x800A80FC: nop

    func_800A86D8(rdram, ctx);
        goto after_32;
    // 0x800A80FC: nop

    after_32:
    // 0x800A8100: jal         0x800EE670
    // 0x800A8104: nop

    func_800EE670(rdram, ctx);
        goto after_33;
    // 0x800A8104: nop

    after_33:
    // 0x800A8108: jal         0x800ABA20
    // 0x800A810C: nop

    func_800ABA20(rdram, ctx);
        goto after_34;
    // 0x800A810C: nop

    after_34:
    // 0x800A8110: jal         0x800FA608
    // 0x800A8114: nop

    func_800FA608(rdram, ctx);
        goto after_35;
    // 0x800A8114: nop

    after_35:
    // 0x800A8118: jal         0x800E8A20
    // 0x800A811C: nop

    func_800E8A20(rdram, ctx);
        goto after_36;
    // 0x800A811C: nop

    after_36:
    // 0x800A8120: jal         0x800A9D00
    // 0x800A8124: nop

    func_800A9D00(rdram, ctx);
        goto after_37;
    // 0x800A8124: nop

    after_37:
    // 0x800A8128: jal         0x800C9484
    // 0x800A812C: nop

    func_800C9484(rdram, ctx);
        goto after_38;
    // 0x800A812C: nop

    after_38:
    // 0x800A8130: jal         0x800B4380
    // 0x800A8134: nop

    func_800B4380(rdram, ctx);
        goto after_39;
    // 0x800A8134: nop

    after_39:
    // 0x800A8138: jal         0x800EB7A8
    // 0x800A813C: nop

    func_800EB7A8(rdram, ctx);
        goto after_40;
    // 0x800A813C: nop

    after_40:
    // 0x800A8140: jal         0x800D88C0
    // 0x800A8144: nop

    func_800D88C0(rdram, ctx);
        goto after_41;
    // 0x800A8144: nop

    after_41:
    // 0x800A8148: jal         0x800FFE08
    // 0x800A814C: nop

    func_800FFE08(rdram, ctx);
        goto after_42;
    // 0x800A814C: nop

    after_42:
    // 0x800A8150: jal         0x8001B858
    // 0x800A8154: nop

    func_8001B858(rdram, ctx);
        goto after_43;
    // 0x800A8154: nop

    after_43:
    // 0x800A8158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A815C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8160: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8168: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A816C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8170: jr          $ra
    // 0x800A8174: sh          $t6, 0x7634($at)
    MEM_H(0X7634, ctx->r1) = ctx->r14;
    return;
    // 0x800A8174: sh          $t6, 0x7634($at)
    MEM_H(0X7634, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A8178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8178: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A817C: jr          $ra
    // 0x800A8180: lh          $v0, 0x7634($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7634);
    return;
    // 0x800A8180: lh          $v0, 0x7634($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7634);
;}
RECOMP_FUNC void func_800A8184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8184: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8188: jr          $ra
    // 0x800A818C: lh          $v0, 0x7632($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7632);
    return;
    // 0x800A818C: lh          $v0, 0x7632($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7632);
;}
RECOMP_FUNC void func_800A8190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8190: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8194: jr          $ra
    // 0x800A8198: lbu         $v0, 0x764C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X764C);
    return;
    // 0x800A8198: lbu         $v0, 0x764C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X764C);
;}
RECOMP_FUNC void func_800A819C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A819C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A81A0: lh          $v1, 0x7632($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7632);
    // 0x800A81A4: xori        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 ^ 0X3;
    // 0x800A81A8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A81AC: bne         $v0, $zero, L_800A81BC
    if (ctx->r2 != 0) {
        // 0x800A81B0: nop
    
            goto L_800A81BC;
    }
    // 0x800A81B0: nop

    // 0x800A81B4: xori        $v0, $v1, 0x5
    ctx->r2 = ctx->r3 ^ 0X5;
    // 0x800A81B8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_800A81BC:
    // 0x800A81BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A81C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A81C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A81C8: lh          $a0, 0x7640($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7640);
    // 0x800A81CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A81D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A81D4: bne         $a0, $zero, L_800A81E4
    if (ctx->r4 != 0) {
        // 0x800A81D8: nop
    
            goto L_800A81E4;
    }
    // 0x800A81D8: nop

    // 0x800A81DC: b           L_800A8220
    // 0x800A81E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A8220;
    // 0x800A81E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A81E4:
    // 0x800A81E4: jal         0x80088268
    // 0x800A81E8: nop

    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800A81E8: nop

    after_0:
    // 0x800A81EC: jal         0x800EA05C
    // 0x800A81F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x800A81F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800A81F4: jal         0x80088268
    // 0x800A81F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x800A81F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A81FC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8200: xor         $v0, $v0, $t6
    ctx->r2 = ctx->r2 ^ ctx->r14;
    // 0x800A8204: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A8208: beql        $v0, $zero, L_800A8224
    if (ctx->r2 == 0) {
        // 0x800A820C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A8224;
    }
    goto skip_0;
    // 0x800A820C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A8210: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8214: lh          $v0, 0x7636($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7636);
    // 0x800A8218: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A821C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_800A8220:
    // 0x800A8220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A8224:
    // 0x800A8224: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A8228: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8230: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A8234: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8238: jr          $ra
    // 0x800A823C: sh          $t6, 0x7636($at)
    MEM_H(0X7636, ctx->r1) = ctx->r14;
    return;
    // 0x800A823C: sh          $t6, 0x7636($at)
    MEM_H(0X7636, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A8240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8240: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8244: jr          $ra
    // 0x800A8248: sh          $zero, 0x7636($at)
    MEM_H(0X7636, ctx->r1) = 0;
    return;
    // 0x800A8248: sh          $zero, 0x7636($at)
    MEM_H(0X7636, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800A824C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A824C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8250: jr          $ra
    // 0x800A8254: lh          $v0, 0x7636($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7636);
    return;
    // 0x800A8254: lh          $v0, 0x7636($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7636);
;}
RECOMP_FUNC void func_800A8258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8258: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A825C: jr          $ra
    // 0x800A8260: lwc1        $f0, 0x7638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7638);
    return;
    // 0x800A8260: lwc1        $f0, 0x7638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7638);
;}
RECOMP_FUNC void func_800A8264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8264: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8268: lbu         $v0, 0x7642($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7642);
    // 0x800A826C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A8270: jr          $ra
    // 0x800A8274: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800A8274: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_800A8278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8278: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A827C: addiu       $v0, $v0, -0x5C0C
    ctx->r2 = ADD32(ctx->r2, -0X5C0C);
    // 0x800A8280: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800A8284: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800A8288: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A828C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x800A8290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8294: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800A8298: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A829C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A82A0: jal         0x80015E80
    // 0x800A82A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80015E80(rdram, ctx);
        goto after_0;
    // 0x800A82A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800A82A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A82AC: jal         0x80015F28
    // 0x800A82B0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80015F28(rdram, ctx);
        goto after_1;
    // 0x800A82B0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x800A82B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A82B8: jal         0x80015FFC
    // 0x800A82BC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80015FFC(rdram, ctx);
        goto after_2;
    // 0x800A82BC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x800A82C0: jal         0x80015F84
    // 0x800A82C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80015F84(rdram, ctx);
        goto after_3;
    // 0x800A82C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800A82C8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800A82CC: addiu       $a2, $a2, -0x5BE8
    ctx->r6 = ADD32(ctx->r6, -0X5BE8);
    // 0x800A82D0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x800A82D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A82D8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x800A82DC: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800A82E0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x800A82E4: lw          $a0, -0x5C08($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C08);
    // 0x800A82E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A82EC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A82F0: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800A82F4: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x800A82F8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800A82FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A8300: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A8304: bne         $a1, $t1, L_800A8310
    if (ctx->r5 != ctx->r9) {
        // 0x800A8308: addiu       $t2, $v1, 0x1
        ctx->r10 = ADD32(ctx->r3, 0X1);
            goto L_800A8310;
    }
    // 0x800A8308: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x800A830C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_800A8310:
    // 0x800A8310: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
L_800A8314:
    // 0x800A8314: beq         $v0, $a0, L_800A8340
    if (ctx->r2 == ctx->r4) {
        // 0x800A8318: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_800A8340;
    }
    // 0x800A8318: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x800A831C: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x800A8320: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x800A8324: bne         $a1, $t5, L_800A8340
    if (ctx->r5 != ctx->r13) {
        // 0x800A8328: sll         $t7, $zero, 2
        ctx->r15 = S32(0 << 2);
            goto L_800A8340;
    }
    // 0x800A8328: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x800A832C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8330: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800A8334: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800A8338: b           L_800A8360
    // 0x800A833C: lw          $v0, -0x5C08($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5C08);
        goto L_800A8360;
    // 0x800A833C: lw          $v0, -0x5C08($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5C08);
L_800A8340:
    // 0x800A8340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A8344: bne         $v0, $v1, L_800A8314
    if (ctx->r2 != ctx->r3) {
        // 0x800A8348: nop
    
            goto L_800A8314;
    }
    // 0x800A8348: nop

    // 0x800A834C: lw          $t8, -0x5BE8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5BE8);
    // 0x800A8350: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8354: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A8358: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800A835C: lw          $v0, -0x5C08($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5C08);
L_800A8360:
    // 0x800A8360: bne         $v0, $at, L_800A836C
    if (ctx->r2 != ctx->r1) {
        // 0x800A8364: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800A836C;
    }
    // 0x800A8364: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8368: sw          $a1, -0x5C10($at)
    MEM_W(-0X5C10, ctx->r1) = ctx->r5;
L_800A836C:
    // 0x800A836C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8370: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A8374: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800A8378: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8380: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8384: addiu       $v0, $v0, 0x7670
    ctx->r2 = ADD32(ctx->r2, 0X7670);
    // 0x800A8388: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x800A838C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A8390: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x800A8394: bne         $t6, $zero, L_800A83A4
    if (ctx->r14 != 0) {
        // 0x800A8398: nop
    
            goto L_800A83A4;
    }
    // 0x800A8398: nop

    // 0x800A839C: b           L_800A83A4
    // 0x800A83A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800A83A4;
    // 0x800A83A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800A83A4:
    // 0x800A83A4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A83A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A83AC: beq         $a0, $at, L_800A83CC
    if (ctx->r4 == ctx->r1) {
        // 0x800A83B0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A83CC;
    }
    // 0x800A83B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A83B4: beq         $a0, $at, L_800A83D4
    if (ctx->r4 == ctx->r1) {
        // 0x800A83B8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A83D4;
    }
    // 0x800A83B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A83BC: beq         $a0, $at, L_800A8414
    if (ctx->r4 == ctx->r1) {
        // 0x800A83C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800A8414;
    }
    // 0x800A83C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A83C4: b           L_800A841C
    // 0x800A83C8: nop

    func_800A841C(rdram, ctx);
    return;
    // 0x800A83C8: nop

L_800A83CC:
    // 0x800A83CC: jr          $ra
    // 0x800A83D0: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    return;
    // 0x800A83D0: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
L_800A83D4:
    // 0x800A83D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A83D8: bne         $v1, $at, L_800A83F8
    if (ctx->r3 != ctx->r1) {
        // 0x800A83DC: nop
    
            goto L_800A83F8;
    }
    // 0x800A83DC: nop

    // 0x800A83E0: beq         $a1, $zero, L_800A83F0
    if (ctx->r5 == 0) {
        // 0x800A83E4: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_800A83F0;
    }
    // 0x800A83E4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800A83E8: jr          $ra
    // 0x800A83EC: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    return;
    // 0x800A83EC: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
L_800A83F0:
    // 0x800A83F0: jr          $ra
    // 0x800A83F4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800A83F4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800A83F8:
    // 0x800A83F8: beq         $a1, $zero, L_800A840C
    if (ctx->r5 == 0) {
        // 0x800A83FC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_800A840C;
    }
    // 0x800A83FC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800A8400: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x800A8404: jr          $ra
    // 0x800A8408: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    return;
    // 0x800A8408: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
L_800A840C:
    // 0x800A840C: jr          $ra
    // 0x800A8410: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800A8410: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800A8414:
    // 0x800A8414: jr          $ra
    // 0x800A8418: addiu       $v0, $a1, 0x3
    ctx->r2 = ADD32(ctx->r5, 0X3);
    return;
    // 0x800A8418: addiu       $v0, $a1, 0x3
    ctx->r2 = ADD32(ctx->r5, 0X3);
;}
RECOMP_FUNC void func_800A841C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A841C: jr          $ra
    // 0x800A8420: nop

    return;
    // 0x800A8420: nop

;}
RECOMP_FUNC void func_800A8424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8424: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A8428: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800A842C: addiu       $t7, $t7, -0x5BE0
    ctx->r15 = ADD32(ctx->r15, -0X5BE0);
    // 0x800A8430: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800A8434: addiu       $t0, $t0, 0x7670
    ctx->r8 = ADD32(ctx->r8, 0X7670);
    // 0x800A8438: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800A843C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800A8440: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x800A8444: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A8448: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A844C: mflo        $t2
    ctx->r10 = lo;
    // 0x800A8450: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800A8454: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x800A8458: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x800A845C: bnel        $t1, $t3, L_800A846C
    if (ctx->r9 != ctx->r11) {
        // 0x800A8460: lh          $t6, 0x2($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X2);
            goto L_800A846C;
    }
    goto skip_0;
    // 0x800A8460: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    skip_0:
    // 0x800A8464: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800A8468: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
L_800A846C:
    // 0x800A846C: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x800A8470: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A8474: mflo        $t8
    ctx->r24 = lo;
    // 0x800A8478: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800A847C: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x800A8480: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x800A8484: beql        $t9, $zero, L_800A8494
    if (ctx->r25 == 0) {
        // 0x800A8488: lh          $t4, 0x4($v0)
        ctx->r12 = MEM_H(ctx->r2, 0X4);
            goto L_800A8494;
    }
    goto skip_1;
    // 0x800A8488: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    skip_1:
    // 0x800A848C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x800A8490: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
L_800A8494:
    // 0x800A8494: lw          $t5, 0xC($t0)
    ctx->r13 = MEM_W(ctx->r8, 0XC);
    // 0x800A8498: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A849C: mflo        $t6
    ctx->r14 = lo;
    // 0x800A84A0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800A84A4: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x800A84A8: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x800A84AC: bnel        $t1, $t7, L_800A84BC
    if (ctx->r9 != ctx->r15) {
        // 0x800A84B0: lh          $t2, 0x6($v0)
        ctx->r10 = MEM_H(ctx->r2, 0X6);
            goto L_800A84BC;
    }
    goto skip_2;
    // 0x800A84B0: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    skip_2:
    // 0x800A84B4: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x800A84B8: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
L_800A84BC:
    // 0x800A84BC: lw          $t3, 0x10($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X10);
    // 0x800A84C0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x800A84C4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A84C8: mflo        $t4
    ctx->r12 = lo;
    // 0x800A84CC: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800A84D0: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x800A84D4: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800A84D8: bne         $t1, $t5, L_800A84E4
    if (ctx->r9 != ctx->r13) {
        // 0x800A84DC: nop
    
            goto L_800A84E4;
    }
    // 0x800A84DC: nop

    // 0x800A84E0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_800A84E4:
    // 0x800A84E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A84EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A84EC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800A84F0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800A84F4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A84F8: addiu       $t8, $t8, 0x7688
    ctx->r24 = ADD32(ctx->r24, 0X7688);
    // 0x800A84FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8500: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8504: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x800A8508: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A850C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8510: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800A8514: beq         $a2, $zero, L_800A852C
    if (ctx->r6 == 0) {
        // 0x800A8518: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_800A852C;
    }
    // 0x800A8518: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800A851C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800A8520: jal         0x800158E4
    // 0x800A8524: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800158E4(rdram, ctx);
        goto after_0;
    // 0x800A8524: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x800A8528: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_800A852C:
    // 0x800A852C: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x800A8530: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A8534: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800A8538: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800A853C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x800A8540: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x800A8544: jal         0x800A8424
    // 0x800A8548: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800A8424(rdram, ctx);
        goto after_1;
    // 0x800A8548: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x800A854C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A8550: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800A8554: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8558: jal         0x8001592C
    // 0x800A855C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    func_8001592C(rdram, ctx);
        goto after_2;
    // 0x800A855C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800A8560: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800A8564: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800A8568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A856C: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x800A8570: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800A8574: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x800A8578: beql        $a1, $zero, L_800A858C
    if (ctx->r5 == 0) {
        // 0x800A857C: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_800A858C;
    }
    goto skip_0;
    // 0x800A857C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x800A8580: jal         0x80015CE8
    // 0x800A8584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80015CE8(rdram, ctx);
        goto after_3;
    // 0x800A8584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800A8588: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_800A858C:
    // 0x800A858C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x800A8590: jal         0x800C54CC
    // 0x800A8594: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800C54CC(rdram, ctx);
        goto after_4;
    // 0x800A8594: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x800A8598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A859C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A85A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A85A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A85A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A85AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A85B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A85B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A85B8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A85BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A85C0: addiu       $s1, $s1, 0x7688
    ctx->r17 = ADD32(ctx->r17, 0X7688);
    // 0x800A85C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A85C8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_800A85CC:
    // 0x800A85CC: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800A85D0: beql        $t6, $zero, L_800A85F0
    if (ctx->r14 == 0) {
        // 0x800A85D4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A85F0;
    }
    goto skip_0;
    // 0x800A85D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800A85D8: jal         0x800A8380
    // 0x800A85DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A8380(rdram, ctx);
        goto after_0;
    // 0x800A85DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800A85E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A85E4: jal         0x800A84EC
    // 0x800A85E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A84EC(rdram, ctx);
        goto after_1;
    // 0x800A85E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800A85EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800A85F0:
    // 0x800A85F0: bne         $s0, $s2, L_800A85CC
    if (ctx->r16 != ctx->r18) {
        // 0x800A85F4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800A85CC;
    }
    // 0x800A85F4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800A85F8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A85FC: jal         0x800A84EC
    // 0x800A8600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A84EC(rdram, ctx);
        goto after_2;
    // 0x800A8600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800A8604: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A8608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A860C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8610: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A8614: jr          $ra
    // 0x800A8618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A8618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A861C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A861C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8624: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8628: jal         0x800CA334
    // 0x800A862C: sw          $zero, 0x7678($at)
    MEM_W(0X7678, ctx->r1) = 0;
    func_800CA334(rdram, ctx);
        goto after_0;
    // 0x800A862C: sw          $zero, 0x7678($at)
    MEM_W(0X7678, ctx->r1) = 0;
    after_0:
    // 0x800A8630: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8634: addiu       $v1, $v1, 0x7688
    ctx->r3 = ADD32(ctx->r3, 0X7688);
    // 0x800A8638: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x800A863C: jal         0x800E42B4
    // 0x800A8640: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800E42B4(rdram, ctx);
        goto after_1;
    // 0x800A8640: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A8644: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A8648: jal         0x800A84EC
    // 0x800A864C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A84EC(rdram, ctx);
        goto after_2;
    // 0x800A864C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800A8650: jal         0x800C5464
    // 0x800A8654: nop

    func_800C5464(rdram, ctx);
        goto after_3;
    // 0x800A8654: nop

    after_3:
    // 0x800A8658: jal         0x800A89BC
    // 0x800A865C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800A89BC(rdram, ctx);
        goto after_4;
    // 0x800A865C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x800A8660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8668: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8670: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A8674: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A8678: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A867C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A8680: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8684: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A8688: addiu       $s1, $s1, 0x7688
    ctx->r17 = ADD32(ctx->r17, 0X7688);
    // 0x800A868C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A8690: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_800A8694:
    // 0x800A8694: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800A8698: beql        $t6, $zero, L_800A86B8
    if (ctx->r14 == 0) {
        // 0x800A869C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A86B8;
    }
    goto skip_0;
    // 0x800A869C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800A86A0: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x800A86A4: beql        $t7, $zero, L_800A86B8
    if (ctx->r15 == 0) {
        // 0x800A86A8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A86B8;
    }
    goto skip_1;
    // 0x800A86A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800A86AC: jal         0x800C54F0
    // 0x800A86B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C54F0(rdram, ctx);
        goto after_0;
    // 0x800A86B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800A86B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800A86B8:
    // 0x800A86B8: bne         $s0, $s2, L_800A8694
    if (ctx->r16 != ctx->r18) {
        // 0x800A86BC: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800A8694;
    }
    // 0x800A86BC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800A86C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A86C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A86C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A86CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A86D0: jr          $ra
    // 0x800A86D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A86D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A86D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A86D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A86DC: lw          $a0, 0x76BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X76BC);
    // 0x800A86E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A86E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A86E8: beql        $a0, $zero, L_800A8704
    if (ctx->r4 == 0) {
        // 0x800A86EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A8704;
    }
    goto skip_0;
    // 0x800A86EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A86F0: jal         0x800CA384
    // 0x800A86F4: nop

    func_800CA384(rdram, ctx);
        goto after_0;
    // 0x800A86F4: nop

    after_0:
    // 0x800A86F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A86FC: sw          $v0, 0x76BC($at)
    MEM_W(0X76BC, ctx->r1) = ctx->r2;
    // 0x800A8700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A8704:
    // 0x800A8704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8708: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A8714: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A8718: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A871C: addiu       $s1, $s1, 0x7688
    ctx->r17 = ADD32(ctx->r17, 0X7688);
    // 0x800A8720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8724: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A8728: jal         0x800CA364
    // 0x800A872C: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    func_800CA364(rdram, ctx);
        goto after_0;
    // 0x800A872C: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    after_0:
    // 0x800A8730: sw          $zero, 0x34($s1)
    MEM_W(0X34, ctx->r17) = 0;
    // 0x800A8734: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8738: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A873C: addiu       $s0, $s0, 0x7688
    ctx->r16 = ADD32(ctx->r16, 0X7688);
    // 0x800A8740: addiu       $s1, $s1, 0x76C4
    ctx->r17 = ADD32(ctx->r17, 0X76C4);
    // 0x800A8744: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800A8748:
    // 0x800A8748: beql        $a0, $zero, L_800A8760
    if (ctx->r4 == 0) {
        // 0x800A874C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800A8760;
    }
    goto skip_0;
    // 0x800A874C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x800A8750: jal         0x800158E4
    // 0x800A8754: nop

    func_800158E4(rdram, ctx);
        goto after_1;
    // 0x800A8754: nop

    after_1:
    // 0x800A8758: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800A875C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_800A8760:
    // 0x800A8760: bnel        $s0, $s1, L_800A8748
    if (ctx->r16 != ctx->r17) {
        // 0x800A8764: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800A8748;
    }
    goto skip_1;
    // 0x800A8764: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800A8768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A876C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A8770: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A8774: jr          $ra
    // 0x800A8778: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A8778: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A877C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A877C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A8780: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A8784: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8788: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A878C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8790: lw          $t7, 0x7688($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7688);
    // 0x800A8794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A879C: beq         $t7, $zero, L_800A87AC
    if (ctx->r15 == 0) {
        // 0x800A87A0: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_800A87AC;
    }
    // 0x800A87A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A87A4: b           L_800A87EC
    // 0x800A87A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A87EC;
    // 0x800A87A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A87AC:
    // 0x800A87AC: addiu       $v0, $v0, 0x7670
    ctx->r2 = ADD32(ctx->r2, 0X7670);
    // 0x800A87B0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800A87B4: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x800A87B8: slt         $at, $a0, $t8
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800A87BC: bne         $at, $zero, L_800A87D4
    if (ctx->r1 != 0) {
        // 0x800A87C0: nop
    
            goto L_800A87D4;
    }
    // 0x800A87C0: nop

    // 0x800A87C4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A87C8: jal         0x800A85A8
    // 0x800A87CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A85A8(rdram, ctx);
        goto after_0;
    // 0x800A87CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A87D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_800A87D4:
    // 0x800A87D4: jal         0x800A8380
    // 0x800A87D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A8380(rdram, ctx);
        goto after_1;
    // 0x800A87D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800A87DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A87E0: jal         0x800A84EC
    // 0x800A87E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A84EC(rdram, ctx);
        goto after_2;
    // 0x800A87E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x800A87E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A87EC:
    // 0x800A87EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A87F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A87F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A87FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A87FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A8800: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A8804: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A8808: addiu       $t7, $t7, 0x7688
    ctx->r15 = ADD32(ctx->r15, 0X7688);
    // 0x800A880C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8810: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x800A8814: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800A8818: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A881C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8820: bne         $a1, $zero, L_800A8830
    if (ctx->r5 != 0) {
        // 0x800A8824: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800A8830;
    }
    // 0x800A8824: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A8828: b           L_800A88B4
    // 0x800A882C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A88B4;
    // 0x800A882C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A8830:
    // 0x800A8830: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A8834: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x800A8838: jal         0x800158E4
    // 0x800A883C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800158E4(rdram, ctx);
        goto after_0;
    // 0x800A883C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A8840: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8844: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800A8848: addiu       $v1, $v1, 0x7670
    ctx->r3 = ADD32(ctx->r3, 0X7670);
    // 0x800A884C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A8850: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800A8854: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x800A8858: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800A885C: bne         $t8, $v0, L_800A88A0
    if (ctx->r24 != ctx->r2) {
        // 0x800A8860: sw          $zero, 0x4($a2)
        MEM_W(0X4, ctx->r6) = 0;
            goto L_800A88A0;
    }
    // 0x800A8860: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800A8864: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800A8868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A886C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A8870: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_800A8874:
    // 0x800A8874: beq         $a1, $zero, L_800A8888
    if (ctx->r5 == 0) {
        // 0x800A8878: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800A8888;
    }
    // 0x800A8878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A887C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800A8880: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A8884: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_800A8888:
    // 0x800A8888: bne         $v0, $a0, L_800A8874
    if (ctx->r2 != ctx->r4) {
        // 0x800A888C: nop
    
            goto L_800A8874;
    }
    // 0x800A888C: nop

    // 0x800A8890: jal         0x800A85A8
    // 0x800A8894: nop

    func_800A85A8(rdram, ctx);
        goto after_1;
    // 0x800A8894: nop

    after_1:
    // 0x800A8898: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A889C: lw          $v0, 0x7670($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7670);
L_800A88A0:
    // 0x800A88A0: bne         $v0, $zero, L_800A88B0
    if (ctx->r2 != 0) {
        // 0x800A88A4: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_800A88B0;
    }
    // 0x800A88A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A88A8: jal         0x800E42B4
    // 0x800A88AC: lw          $a0, 0x76BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X76BC);
    func_800E42B4(rdram, ctx);
        goto after_2;
    // 0x800A88AC: lw          $a0, 0x76BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X76BC);
    after_2:
L_800A88B0:
    // 0x800A88B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A88B4:
    // 0x800A88B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A88B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A88BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A88C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A88C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A88C8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A88CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A88D0: addiu       $t7, $t7, 0x7688
    ctx->r15 = ADD32(ctx->r15, 0X7688);
    // 0x800A88D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A88D8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800A88DC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x800A88E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A88E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A88E8: bne         $a2, $zero, L_800A88F8
    if (ctx->r6 != 0) {
        // 0x800A88EC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800A88F8;
    }
    // 0x800A88EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A88F0: b           L_800A8938
    // 0x800A88F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A8938;
    // 0x800A88F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A88F8:
    // 0x800A88F8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800A88FC: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x800A8900: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800A8904: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800A8908: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x800A890C: jal         0x80015CE8
    // 0x800A8910: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_80015CE8(rdram, ctx);
        goto after_0;
    // 0x800A8910: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x800A8914: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800A8918: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800A891C: lw          $t9, 0x7674($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7674);
    // 0x800A8920: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800A8924: bnel        $a3, $t9, L_800A8938
    if (ctx->r7 != ctx->r25) {
        // 0x800A8928: lw          $v0, 0x1C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X1C);
            goto L_800A8938;
    }
    goto skip_0;
    // 0x800A8928: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A892C: jal         0x800E42B4
    // 0x800A8930: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_800E42B4(rdram, ctx);
        goto after_1;
    // 0x800A8930: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x800A8934: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800A8938:
    // 0x800A8938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A893C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A8940: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8948: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A894C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A8950: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A8954: addiu       $t7, $t7, 0x7688
    ctx->r15 = ADD32(ctx->r15, 0X7688);
    // 0x800A8958: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A895C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800A8960: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800A8964: bnel        $t8, $zero, L_800A8978
    if (ctx->r24 != 0) {
            // 0x800A8968: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    static_3_800A8978(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A8968: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x800A896C: jr          $ra
    // 0x800A8970: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800A8970: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800A8974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8974: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800A8978: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A897C: jr          $ra
    // 0x800A8980: nop

    return;
    // 0x800A8980: nop

;}
RECOMP_FUNC void func_800A8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8984: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A8988: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A898C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8990: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8994: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A8998: jr          $ra
    // 0x800A899C: lw          $v0, 0x768C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X768C);
    return;
    // 0x800A899C: lw          $v0, 0x768C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X768C);
;}
RECOMP_FUNC void func_800A89A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A89A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A89A4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A89A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A89AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A89B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A89B4: jr          $ra
    // 0x800A89B8: lw          $v0, 0x7688($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7688);
    return;
    // 0x800A89B8: lw          $v0, 0x7688($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7688);
;}
RECOMP_FUNC void func_800A89BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A89BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A89C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A89C4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A89C8: sw          $a0, 0x7674($at)
    MEM_W(0X7674, ctx->r1) = ctx->r4;
    // 0x800A89CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A89D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A89D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A89D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A89DC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800A89E0: jal         0x800E42B4
    // 0x800A89E4: lw          $a0, 0x768C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X768C);
    func_800E42B4(rdram, ctx);
        goto after_0;
    // 0x800A89E4: lw          $a0, 0x768C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X768C);
    after_0:
    // 0x800A89E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A89EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A89F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A89F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A89F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A89FC: jr          $ra
    // 0x800A8A00: lw          $v0, 0x7674($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7674);
    return;
    // 0x800A8A00: lw          $v0, 0x7674($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7674);
;}
RECOMP_FUNC void func_800A8A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8A04: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800A8A08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A8A0C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800A8A10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A8A14: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800A8A18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A8A1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8A24: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800A8A28: lw          $a0, 0x7688($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7688);
    // 0x800A8A2C: jal         0x80015CC0
    // 0x800A8A30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80015CC0(rdram, ctx);
        goto after_0;
    // 0x800A8A30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x800A8A34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8A38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A8A3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8A44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A8A48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8A4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A8A50: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800A8A54: jal         0x800A8380
    // 0x800A8A58: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800A8380(rdram, ctx);
        goto after_0;
    // 0x800A8A58: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A8A5C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800A8A60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A8A64: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A8A68: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800A8A6C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8A70: jal         0x800A8424
    // 0x800A8A74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800A8424(rdram, ctx);
        goto after_1;
    // 0x800A8A74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x800A8A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A8A80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8A88: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A8A8C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A8A90: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A8A94: addiu       $t7, $t7, 0x7688
    ctx->r15 = ADD32(ctx->r15, 0X7688);
    // 0x800A8A98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8A9C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800A8AA0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x800A8AA4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A8AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8AB0: beq         $a2, $zero, L_800A8AC4
    if (ctx->r6 == 0) {
        // 0x800A8AB4: swc1        $f12, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
            goto L_800A8AC4;
    }
    // 0x800A8AB4: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x800A8AB8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800A8ABC: jal         0x800CA558
    // 0x800A8AC0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800CA558(rdram, ctx);
        goto after_0;
    // 0x800A8AC0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
L_800A8AC4:
    // 0x800A8AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8ACC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8AD4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A8AD8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A8ADC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8AE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8AE4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A8AE8: jr          $ra
    // 0x800A8AEC: lwc1        $f0, 0x7690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7690);
    return;
    // 0x800A8AEC: lwc1        $f0, 0x7690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7690);
;}
RECOMP_FUNC void func_800A8AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8AF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A8AF4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800A8AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8AFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8B00: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A8B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8B08: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800A8B0C: jal         0x80015D14
    // 0x800A8B10: lw          $a0, 0x7688($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7688);
    func_80015D14(rdram, ctx);
        goto after_0;
    // 0x800A8B10: lw          $a0, 0x7688($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7688);
    after_0:
    // 0x800A8B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8B1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8B24: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A8B28: lw          $t6, 0x7674($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7674);
    // 0x800A8B2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A8B30: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800A8B34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A8B38: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A8B3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A8B44: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800A8B48: lw          $a0, 0x7688($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7688);
    // 0x800A8B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8B50: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800A8B54: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x800A8B58: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A8B5C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800A8B60: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x800A8B64: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x800A8B68: jal         0x80015CC0
    // 0x800A8B6C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80015CC0(rdram, ctx);
        goto after_0;
    // 0x800A8B6C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A8B70: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A8B74: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800A8B78: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8B7C: jal         0x800E7FB0
    // 0x800A8B80: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    func_800E7FB0(rdram, ctx);
        goto after_1;
    // 0x800A8B80: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800A8B84: jal         0x800E7EC0
    // 0x800A8B88: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800E7EC0(rdram, ctx);
        goto after_2;
    // 0x800A8B88: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x800A8B8C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A8B90: jal         0x800157EC
    // 0x800A8B94: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800157EC(rdram, ctx);
        goto after_3;
    // 0x800A8B94: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x800A8B98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8B9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A8BA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8BAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8BB0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800A8BB4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A8BB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A8BBC: jal         0x800E7E70
    // 0x800A8BC0: sw          $t6, 0x7674($at)
    MEM_W(0X7674, ctx->r1) = ctx->r14;
    func_800E7E70(rdram, ctx);
        goto after_0;
    // 0x800A8BC0: sw          $t6, 0x7674($at)
    MEM_W(0X7674, ctx->r1) = ctx->r14;
    after_0:
    // 0x800A8BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8BCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8BDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A8BE0: bltz        $a1, L_800A8BF8
    if (SIGNED(ctx->r5) < 0) {
        // 0x800A8BE4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800A8BF8;
    }
    // 0x800A8BE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A8BE8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8BEC: addiu       $v0, $v0, 0x7670
    ctx->r2 = ADD32(ctx->r2, 0X7670);
    // 0x800A8BF0: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x800A8BF4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_800A8BF8:
    // 0x800A8BF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8BFC: addiu       $v0, $v0, 0x7670
    ctx->r2 = ADD32(ctx->r2, 0X7670);
    // 0x800A8C00: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800A8C04: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800A8C08: bltzl       $a0, L_800A8C48
    if (SIGNED(ctx->r4) < 0) {
        // 0x800A8C0C: addiu       $t0, $a0, 0x1
        ctx->r8 = ADD32(ctx->r4, 0X1);
            goto L_800A8C48;
    }
    goto skip_0;
    // 0x800A8C0C: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x800A8C10: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A8C14: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8C18: addiu       $v1, $v1, 0x7688
    ctx->r3 = ADD32(ctx->r3, 0X7688);
    // 0x800A8C1C: mflo        $t7
    ctx->r15 = lo;
    // 0x800A8C20: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x800A8C24: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800A8C28: beql        $t9, $zero, L_800A8C48
    if (ctx->r25 == 0) {
        // 0x800A8C2C: addiu       $t0, $a0, 0x1
        ctx->r8 = ADD32(ctx->r4, 0X1);
            goto L_800A8C48;
    }
    goto skip_1;
    // 0x800A8C2C: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x800A8C30: jal         0x800C5668
    // 0x800A8C34: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800C5668(rdram, ctx);
        goto after_0;
    // 0x800A8C34: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x800A8C38: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8C3C: addiu       $v0, $v0, 0x7670
    ctx->r2 = ADD32(ctx->r2, 0X7670);
    // 0x800A8C40: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800A8C44: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
L_800A8C48:
    // 0x800A8C48: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8C4C: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x800A8C50: addiu       $v1, $v1, 0x7688
    ctx->r3 = ADD32(ctx->r3, 0X7688);
    // 0x800A8C54: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800A8C58: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800A8C5C: beq         $at, $zero, L_800A8C90
    if (ctx->r1 == 0) {
        // 0x800A8C60: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_800A8C90;
    }
    // 0x800A8C60: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_800A8C64:
    // 0x800A8C64: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A8C68: addiu       $t4, $a0, 0x1
    ctx->r12 = ADD32(ctx->r4, 0X1);
    // 0x800A8C6C: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x800A8C70: mflo        $t1
    ctx->r9 = lo;
    // 0x800A8C74: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x800A8C78: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800A8C7C: bnel        $t3, $zero, L_800A8C94
    if (ctx->r11 != 0) {
        // 0x800A8C80: slti        $at, $a0, 0x4
        ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
            goto L_800A8C94;
    }
    goto skip_2;
    // 0x800A8C80: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    skip_2:
    // 0x800A8C84: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800A8C88: bne         $at, $zero, L_800A8C64
    if (ctx->r1 != 0) {
        // 0x800A8C8C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_800A8C64;
    }
    // 0x800A8C8C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_800A8C90:
    // 0x800A8C90: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
L_800A8C94:
    // 0x800A8C94: bne         $at, $zero, L_800A8CA4
    if (ctx->r1 != 0) {
        // 0x800A8C98: nop
    
            goto L_800A8CA4;
    }
    // 0x800A8C98: nop

    // 0x800A8C9C: b           L_800A8CBC
    // 0x800A8CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A8CBC;
    // 0x800A8CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A8CA4:
    // 0x800A8CA4: jal         0x800A89BC
    // 0x800A8CA8: nop

    func_800A89BC(rdram, ctx);
        goto after_1;
    // 0x800A8CA8: nop

    after_1:
    // 0x800A8CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A8CB0: jal         0x800A8B24
    // 0x800A8CB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800A8B24(rdram, ctx);
        goto after_2;
    // 0x800A8CB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800A8CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A8CBC:
    // 0x800A8CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8CC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8CD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A8CD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A8CDC: jal         0x800A89BC
    // 0x800A8CE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800A89BC(rdram, ctx);
        goto after_0;
    // 0x800A8CE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800A8CE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A8CE8: jal         0x800A8B24
    // 0x800A8CEC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A8B24(rdram, ctx);
        goto after_1;
    // 0x800A8CEC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A8CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8CF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8D00: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8D04: addiu       $v0, $v0, 0x7670
    ctx->r2 = ADD32(ctx->r2, 0X7670);
    // 0x800A8D08: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x800A8D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8D14: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800A8D18: bne         $a0, $t7, L_800A8D30
    if (ctx->r4 != ctx->r15) {
        // 0x800A8D1C: nop
    
            goto L_800A8D30;
    }
    // 0x800A8D1C: nop

    // 0x800A8D20: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x800A8D24: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800A8D28: beql        $a1, $t9, L_800A8D60
    if (ctx->r5 == ctx->r25) {
        // 0x800A8D2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A8D60;
    }
    goto skip_0;
    // 0x800A8D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_800A8D30:
    // 0x800A8D30: bgez        $a0, L_800A8D40
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800A8D34: sra         $t0, $a0, 1
        ctx->r8 = S32(SIGNED(ctx->r4) >> 1);
            goto L_800A8D40;
    }
    // 0x800A8D34: sra         $t0, $a0, 1
    ctx->r8 = S32(SIGNED(ctx->r4) >> 1);
    // 0x800A8D38: addiu       $at, $a0, 0x1
    ctx->r1 = ADD32(ctx->r4, 0X1);
    // 0x800A8D3C: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_800A8D40:
    // 0x800A8D40: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x800A8D44: bgez        $a1, L_800A8D54
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A8D48: sra         $t1, $a1, 1
        ctx->r9 = S32(SIGNED(ctx->r5) >> 1);
            goto L_800A8D54;
    }
    // 0x800A8D48: sra         $t1, $a1, 1
    ctx->r9 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800A8D4C: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x800A8D50: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_800A8D54:
    // 0x800A8D54: jal         0x800A85A8
    // 0x800A8D58: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    func_800A85A8(rdram, ctx);
        goto after_0;
    // 0x800A8D58: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    after_0:
    // 0x800A8D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A8D60:
    // 0x800A8D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8D64: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A8D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8D70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A8D74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8D78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A8D7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A8D80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A8D84: jal         0x80088318
    // 0x800A8D88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    _gcstatusDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800A8D88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A8D8C: jal         0x80088258
    // 0x800A8D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcsectionDll_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800A8D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A8D94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A8D98: jal         0x80088260
    // 0x800A8D9C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    _gcsectionDll_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x800A8D9C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
    // 0x800A8DA0: beq         $v0, $zero, L_800A8DC0
    if (ctx->r2 == 0) {
        // 0x800A8DA4: lui         $s1, 0x8012
        ctx->r17 = S32(0X8012 << 16);
            goto L_800A8DC0;
    }
    // 0x800A8DA4: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8DA8: jal         0x80088368
    // 0x800A8DAC: nop

    _gcstatusDll_entrypoint_11(rdram, ctx);
        goto after_3;
    // 0x800A8DAC: nop

    after_3:
    // 0x800A8DB0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8DB4: addiu       $s1, $s1, 0x76D0
    ctx->r17 = ADD32(ctx->r17, 0X76D0);
    // 0x800A8DB8: b           L_800A8DCC
    // 0x800A8DBC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_800A8DCC;
    // 0x800A8DBC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_800A8DC0:
    // 0x800A8DC0: addiu       $s1, $s1, 0x76D0
    ctx->r17 = ADD32(ctx->r17, 0X76D0);
    // 0x800A8DC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A8DC8: sh          $t6, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r14;
L_800A8DCC:
    // 0x800A8DCC: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x800A8DD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A8DD4: blez        $t7, L_800A8DF8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800A8DD8: nop
    
            goto L_800A8DF8;
    }
    // 0x800A8DD8: nop

L_800A8DDC:
    // 0x800A8DDC: jal         0x800A877C
    // 0x800A8DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A877C(rdram, ctx);
        goto after_4;
    // 0x800A8DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A8DE4: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
    // 0x800A8DE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800A8DEC: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800A8DF0: bne         $at, $zero, L_800A8DDC
    if (ctx->r1 != 0) {
        // 0x800A8DF4: nop
    
            goto L_800A8DDC;
    }
    // 0x800A8DF4: nop

L_800A8DF8:
    // 0x800A8DF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8DFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A8E00: addiu       $a0, $a0, 0x76E0
    ctx->r4 = ADD32(ctx->r4, 0X76E0);
    // 0x800A8E04: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
    // 0x800A8E08: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_800A8E0C:
    // 0x800A8E0C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800A8E10: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800A8E14: bne         $at, $zero, L_800A8E0C
    if (ctx->r1 != 0) {
        // 0x800A8E18: sh          $v1, 0x6($v0)
        MEM_H(0X6, ctx->r2) = ctx->r3;
            goto L_800A8E0C;
    }
    // 0x800A8E18: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x800A8E1C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8E20: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8E24: addiu       $v1, $v1, 0x76D4
    ctx->r3 = ADD32(ctx->r3, 0X76D4);
    // 0x800A8E28: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
L_800A8E2C:
    // 0x800A8E2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A8E30: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800A8E34: bne         $at, $zero, L_800A8E2C
    if (ctx->r1 != 0) {
        // 0x800A8E38: sb          $zero, 0x3($v0)
        MEM_B(0X3, ctx->r2) = 0;
            goto L_800A8E2C;
    }
    // 0x800A8E38: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x800A8E3C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8E40: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8E44: addiu       $v1, $v1, 0x76F0
    ctx->r3 = ADD32(ctx->r3, 0X76F0);
    // 0x800A8E48: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
L_800A8E4C:
    // 0x800A8E4C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A8E50: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800A8E54: bne         $at, $zero, L_800A8E4C
    if (ctx->r1 != 0) {
        // 0x800A8E58: sw          $zero, 0x34($v0)
        MEM_W(0X34, ctx->r2) = 0;
            goto L_800A8E4C;
    }
    // 0x800A8E58: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x800A8E5C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A8E60: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A8E64: addiu       $v1, $v1, 0x76F0
    ctx->r3 = ADD32(ctx->r3, 0X76F0);
    // 0x800A8E68: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
L_800A8E6C:
    // 0x800A8E6C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800A8E70: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x800A8E74: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x800A8E78: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800A8E7C: bne         $v0, $v1, L_800A8E6C
    if (ctx->r2 != ctx->r3) {
        // 0x800A8E80: sw          $zero, 0x8($v0)
        MEM_W(0X8, ctx->r2) = 0;
            goto L_800A8E6C;
    }
    // 0x800A8E80: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x800A8E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8E88: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x800A8E8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A8E90: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A8E94: jr          $ra
    // 0x800A8E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A8E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A8E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A8EA0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A8EA4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A8EA8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A8EAC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8EB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8EB4: addiu       $s1, $s1, 0x76F0
    ctx->r17 = ADD32(ctx->r17, 0X76F0);
    // 0x800A8EB8: addiu       $s0, $s0, 0x76D0
    ctx->r16 = ADD32(ctx->r16, 0X76D0);
    // 0x800A8EBC: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_800A8EC0:
    // 0x800A8EC0: beql        $a0, $zero, L_800A8ED4
    if (ctx->r4 == 0) {
        // 0x800A8EC4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A8ED4;
    }
    goto skip_0;
    // 0x800A8EC4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800A8EC8: jal         0x8010FC38
    // 0x800A8ECC: nop

    func_8010FC38(rdram, ctx);
        goto after_0;
    // 0x800A8ECC: nop

    after_0:
    // 0x800A8ED0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800A8ED4:
    // 0x800A8ED4: bnel        $s0, $s1, L_800A8EC0
    if (ctx->r16 != ctx->r17) {
        // 0x800A8ED8: lw          $a0, 0x58($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X58);
            goto L_800A8EC0;
    }
    goto skip_1;
    // 0x800A8ED8: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    skip_1:
    // 0x800A8EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8EE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A8EE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A8EE8: jr          $ra
    // 0x800A8EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A8EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A8EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A8EF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A8EF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A8EFC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A8F00: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A8F04: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A8F08: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8F0C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800A8F10: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800A8F14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A8F18: addiu       $s1, $s1, 0x76F0
    ctx->r17 = ADD32(ctx->r17, 0X76F0);
    // 0x800A8F1C: addiu       $s0, $s0, 0x76D0
    ctx->r16 = ADD32(ctx->r16, 0X76D0);
    // 0x800A8F20: lw          $a1, 0x58($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X58);
L_800A8F24:
    // 0x800A8F24: beql        $a1, $zero, L_800A8F44
    if (ctx->r5 == 0) {
        // 0x800A8F28: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A8F44;
    }
    goto skip_0;
    // 0x800A8F28: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800A8F2C: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x800A8F30: bnel        $s2, $t6, L_800A8F44
    if (ctx->r18 != ctx->r14) {
        // 0x800A8F34: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A8F44;
    }
    goto skip_1;
    // 0x800A8F34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x800A8F38: jal         0x8010FAEC
    // 0x800A8F3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8010FAEC(rdram, ctx);
        goto after_0;
    // 0x800A8F3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x800A8F40: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800A8F44:
    // 0x800A8F44: bnel        $s0, $s1, L_800A8F24
    if (ctx->r16 != ctx->r17) {
        // 0x800A8F48: lw          $a1, 0x58($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X58);
            goto L_800A8F24;
    }
    goto skip_2;
    // 0x800A8F48: lw          $a1, 0x58($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X58);
    skip_2:
    // 0x800A8F4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A8F50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A8F54: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A8F58: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8F5C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A8F60: jr          $ra
    // 0x800A8F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A8F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A8F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8F68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A8F6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A8F70: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A8F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8F78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A8F7C: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_800A8F80:
    // 0x800A8F80: jal         0x800A91F4
    // 0x800A8F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A91F4(rdram, ctx);
        goto after_0;
    // 0x800A8F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800A8F88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800A8F8C: bne         $s0, $s1, L_800A8F80
    if (ctx->r16 != ctx->r17) {
        // 0x800A8F90: nop
    
            goto L_800A8F80;
    }
    // 0x800A8F90: nop

    // 0x800A8F94: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A8F98: addiu       $s1, $s1, 0x76D0
    ctx->r17 = ADD32(ctx->r17, 0X76D0);
    // 0x800A8F9C: lh          $s0, 0x2($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X2);
    // 0x800A8FA0: beql        $s0, $zero, L_800A8FCC
    if (ctx->r16 == 0) {
        // 0x800A8FA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A8FCC;
    }
    goto skip_0;
    // 0x800A8FA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_800A8FA8:
    // 0x800A8FA8: jal         0x800A87FC
    // 0x800A8FAC: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    func_800A87FC(rdram, ctx);
        goto after_1;
    // 0x800A8FAC: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    after_1:
    // 0x800A8FB0: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
    // 0x800A8FB4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800A8FB8: sh          $t7, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r15;
    // 0x800A8FBC: lh          $s0, 0x2($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X2);
    // 0x800A8FC0: bne         $s0, $zero, L_800A8FA8
    if (ctx->r16 != 0) {
        // 0x800A8FC4: nop
    
            goto L_800A8FA8;
    }
    // 0x800A8FC4: nop

    // 0x800A8FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A8FCC:
    // 0x800A8FCC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A8FD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A8FD4: jr          $ra
    // 0x800A8FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A8FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A8FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8FE4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A8FE8: jal         0x800A877C
    // 0x800A8FEC: lh          $a0, 0x76D2($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X76D2);
    func_800A877C(rdram, ctx);
        goto after_0;
    // 0x800A8FEC: lh          $a0, 0x76D2($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X76D2);
    after_0:
    // 0x800A8FF0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A8FF4: addiu       $a1, $a1, 0x76D0
    ctx->r5 = ADD32(ctx->r5, 0X76D0);
    // 0x800A8FF8: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x800A8FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9004: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800A9008: jr          $ra
    // 0x800A900C: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
    return;
    // 0x800A900C: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_800A9010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9010: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A9014: lbu         $t6, 0x76D4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76D4);
    // 0x800A9018: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A901C: bne         $t6, $zero, L_800A902C
    if (ctx->r14 != 0) {
            // 0x800A9020: nop

    func_800A902C(rdram, ctx);
    return;
    }
    // 0x800A9020: nop

    // 0x800A9024: jr          $ra
    // 0x800A9028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800A9028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800A902C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A902C: lbu         $t7, 0x76D5($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76D5);
    // 0x800A9030: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A9034: bne         $t7, $zero, L_800A9044
    if (ctx->r15 != 0) {
            // 0x800A9038: nop

    func_800A9044(rdram, ctx);
    return;
    }
    // 0x800A9038: nop

    // 0x800A903C: jr          $ra
    // 0x800A9040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800A9040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800A9044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9044: lbu         $t8, 0x76D6($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76D6);
    // 0x800A9048: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800A904C: bne         $t8, $zero, L_800A905C
    if (ctx->r24 != 0) {
            // 0x800A9050: nop

    func_800A905C(rdram, ctx);
    return;
    }
    // 0x800A9050: nop

    // 0x800A9054: jr          $ra
    // 0x800A9058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800A9058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800A905C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A905C: lbu         $t9, 0x76D7($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76D7);
    // 0x800A9060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A9064: bne         $t9, $zero, L_800A9074
    if (ctx->r25 != 0) {
            // 0x800A9068: nop

    func_800A9074(rdram, ctx);
    return;
    }
    // 0x800A9068: nop

    // 0x800A906C: jr          $ra
    // 0x800A9070: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800A9070: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_800A9074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9074: jr          $ra
    // 0x800A9078: nop

    return;
    // 0x800A9078: nop

;}
RECOMP_FUNC void func_800A907C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A907C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A9084: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800A9088: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800A908C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9090: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A9094: bne         $a1, $t0, L_800A90AC
    if (ctx->r5 != ctx->r8) {
        // 0x800A9098: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_800A90AC;
    }
    // 0x800A9098: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800A909C: jal         0x800A9010
    // 0x800A90A0: nop

    func_800A9010(rdram, ctx);
        goto after_0;
    // 0x800A90A0: nop

    after_0:
    // 0x800A90A4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800A90A8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_800A90AC:
    // 0x800A90AC: bne         $a3, $t0, L_800A90BC
    if (ctx->r7 != ctx->r8) {
        // 0x800A90B0: lw          $t6, 0x28($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X28);
            goto L_800A90BC;
    }
    // 0x800A90B0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800A90B4: b           L_800A9194
    // 0x800A90B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800A9194;
    // 0x800A90B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800A90BC:
    // 0x800A90BC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A90C0: addiu       $a0, $a0, 0x76D0
    ctx->r4 = ADD32(ctx->r4, 0X76D0);
    // 0x800A90C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A90C8: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x800A90CC: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x800A90D0: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x800A90D4: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x800A90D8: beq         $t8, $zero, L_800A90E8
    if (ctx->r24 == 0) {
        // 0x800A90DC: nop
    
            goto L_800A90E8;
    }
    // 0x800A90DC: nop

    // 0x800A90E0: b           L_800A9194
    // 0x800A90E4: lh          $v0, 0x8($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X8);
        goto L_800A9194;
    // 0x800A90E4: lh          $v0, 0x8($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X8);
L_800A90E8:
    // 0x800A90E8: bnel        $s0, $t0, L_800A90F8
    if (ctx->r16 != ctx->r8) {
        // 0x800A90EC: lh          $v0, 0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X2);
            goto L_800A90F8;
    }
    goto skip_0;
    // 0x800A90EC: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    skip_0:
    // 0x800A90F0: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800A90F4: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
L_800A90F8:
    // 0x800A90F8: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A90FC: bnel        $at, $zero, L_800A910C
    if (ctx->r1 != 0) {
        // 0x800A9100: lh          $t2, 0x0($a0)
        ctx->r10 = MEM_H(ctx->r4, 0X0);
            goto L_800A910C;
    }
    goto skip_1;
    // 0x800A9100: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    skip_1:
    // 0x800A9104: addiu       $s0, $v0, -0x1
    ctx->r16 = ADD32(ctx->r2, -0X1);
    // 0x800A9108: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
L_800A910C:
    // 0x800A910C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800A9110: addu        $a2, $a0, $a3
    ctx->r6 = ADD32(ctx->r4, ctx->r7);
    // 0x800A9114: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800A9118: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800A911C: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x800A9120: addu        $t7, $a0, $t5
    ctx->r15 = ADD32(ctx->r4, ctx->r13);
    // 0x800A9124: sh          $a3, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r7;
    // 0x800A9128: lbu         $t8, 0x4($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X4);
    // 0x800A912C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800A9130: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A9134: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800A9138: sb          $t6, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r14;
    // 0x800A913C: jal         0x800CA334
    // 0x800A9140: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800CA334(rdram, ctx);
        goto after_1;
    // 0x800A9140: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x800A9144: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800A9148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A914C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800A9150: jal         0x8010FB34
    // 0x800A9154: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    func_8010FB34(rdram, ctx);
        goto after_2;
    // 0x800A9154: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    after_2:
    // 0x800A9158: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800A915C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800A9160: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9164: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x800A9168: sw          $s0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r16;
    // 0x800A916C: lbu         $t9, 0x4($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X4);
    // 0x800A9170: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A9178: bnel        $t9, $at, L_800A9194
    if (ctx->r25 != ctx->r1) {
        // 0x800A917C: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_800A9194;
    }
    goto skip_2;
    // 0x800A917C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    skip_2:
    // 0x800A9180: lw          $a1, 0x38($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X38);
    // 0x800A9184: jal         0x800A88C4
    // 0x800A9188: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800A88C4(rdram, ctx);
        goto after_3;
    // 0x800A9188: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_3:
    // 0x800A918C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9190: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_800A9194:
    // 0x800A9194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A919C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A91A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A91A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A91A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A91AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A91B0: bltz        $a0, L_800A91E4
    if (SIGNED(ctx->r4) < 0) {
        // 0x800A91B4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800A91E4;
    }
    // 0x800A91B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A91B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A91BC: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
    // 0x800A91C0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800A91C4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800A91C8: lh          $a0, 0x8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X8);
    // 0x800A91CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A91D0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x800A91D4: beq         $a0, $at, L_800A91E4
    if (ctx->r4 == ctx->r1) {
        // 0x800A91D8: addu        $t9, $v0, $t8
        ctx->r25 = ADD32(ctx->r2, ctx->r24);
            goto L_800A91E4;
    }
    // 0x800A91D8: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800A91DC: jal         0x800A88C4
    // 0x800A91E0: lw          $a1, 0x38($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X38);
    func_800A88C4(rdram, ctx);
        goto after_0;
    // 0x800A91E0: lw          $a1, 0x38($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X38);
    after_0:
L_800A91E4:
    // 0x800A91E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A91E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A91EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A91F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A91F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A91F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A91FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A9200: bltz        $a0, L_800A9294
    if (SIGNED(ctx->r4) < 0) {
        // 0x800A9204: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800A9294;
    }
    // 0x800A9204: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A9208: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A920C: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
    // 0x800A9210: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800A9214: addu        $s0, $v0, $t6
    ctx->r16 = ADD32(ctx->r2, ctx->r14);
    // 0x800A9218: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x800A921C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A9220: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800A9224: beq         $t7, $at, L_800A9294
    if (ctx->r15 == ctx->r1) {
        // 0x800A9228: addu        $s1, $v0, $t8
        ctx->r17 = ADD32(ctx->r2, ctx->r24);
            goto L_800A9294;
    }
    // 0x800A9228: addu        $s1, $v0, $t8
    ctx->r17 = ADD32(ctx->r2, ctx->r24);
    // 0x800A922C: jal         0x8010FBD4
    // 0x800A9230: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    func_8010FBD4(rdram, ctx);
        goto after_0;
    // 0x800A9230: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    after_0:
    // 0x800A9234: sw          $zero, 0x58($s1)
    MEM_W(0X58, ctx->r17) = 0;
    // 0x800A9238: jal         0x800A8984
    // 0x800A923C: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    func_800A8984(rdram, ctx);
        goto after_1;
    // 0x800A923C: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    after_1:
    // 0x800A9240: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x800A9244: bne         $v0, $a0, L_800A9258
    if (ctx->r2 != ctx->r4) {
        // 0x800A9248: nop
    
            goto L_800A9258;
    }
    // 0x800A9248: nop

    // 0x800A924C: jal         0x800A8948
    // 0x800A9250: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    func_800A8948(rdram, ctx);
        goto after_2;
    // 0x800A9250: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    after_2:
    // 0x800A9254: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
L_800A9258:
    // 0x800A9258: jal         0x800CA364
    // 0x800A925C: nop

    func_800CA364(rdram, ctx);
        goto after_3;
    // 0x800A925C: nop

    after_3:
    // 0x800A9260: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x800A9264: lh          $t9, 0x8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X8);
    // 0x800A9268: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A926C: addiu       $v1, $v1, 0x76D0
    ctx->r3 = ADD32(ctx->r3, 0X76D0);
    // 0x800A9270: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x800A9274: lbu         $t0, 0x4($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4);
    // 0x800A9278: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800A927C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800A9280: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x800A9284: sh          $t2, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r10;
    // 0x800A9288: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x800A928C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800A9290: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
L_800A9294:
    // 0x800A9294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9298: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A929C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A92A0: jr          $ra
    // 0x800A92A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A92A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A92A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A92A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A92AC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A92B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A92B4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A92B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A92BC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A92C0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x800A92C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800A92C8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800A92CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A92D0: addiu       $s3, $s3, 0x76F0
    ctx->r19 = ADD32(ctx->r19, 0X76F0);
    // 0x800A92D4: addiu       $s0, $s0, 0x76D0
    ctx->r16 = ADD32(ctx->r16, 0X76D0);
    // 0x800A92D8: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_800A92DC:
    // 0x800A92DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800A92E0: beql        $a0, $zero, L_800A92F4
    if (ctx->r4 == 0) {
        // 0x800A92E4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A92F4;
    }
    goto skip_0;
    // 0x800A92E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800A92E8: jal         0x8010FE00
    // 0x800A92EC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8010FE00(rdram, ctx);
        goto after_0;
    // 0x800A92EC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x800A92F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800A92F4:
    // 0x800A92F4: bnel        $s0, $s3, L_800A92DC
    if (ctx->r16 != ctx->r19) {
        // 0x800A92F8: lw          $a0, 0x58($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X58);
            goto L_800A92DC;
    }
    goto skip_1;
    // 0x800A92F8: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    skip_1:
    // 0x800A92FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9300: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A9304: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A9308: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A930C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A9310: jr          $ra
    // 0x800A9314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A9314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A9318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9318: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A931C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A9320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A9324: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A9328: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A932C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800A9330: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800A9334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A9338: addiu       $s2, $s2, 0x76F0
    ctx->r18 = ADD32(ctx->r18, 0X76F0);
    // 0x800A933C: addiu       $s0, $s0, 0x76D0
    ctx->r16 = ADD32(ctx->r16, 0X76D0);
    // 0x800A9340: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_800A9344:
    // 0x800A9344: beql        $a0, $zero, L_800A9358
    if (ctx->r4 == 0) {
        // 0x800A9348: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A9358;
    }
    goto skip_0;
    // 0x800A9348: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800A934C: jal         0x8010FE34
    // 0x800A9350: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8010FE34(rdram, ctx);
        goto after_0;
    // 0x800A9350: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800A9354: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800A9358:
    // 0x800A9358: bnel        $s0, $s2, L_800A9344
    if (ctx->r16 != ctx->r18) {
        // 0x800A935C: lw          $a0, 0x58($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X58);
            goto L_800A9344;
    }
    goto skip_1;
    // 0x800A935C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    skip_1:
    // 0x800A9360: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9364: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A9368: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A936C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A9370: jr          $ra
    // 0x800A9374: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A9374: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A9378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9378: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A937C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A9380: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A9384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A9388: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A938C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A9390: addiu       $s1, $s1, 0x76D0
    ctx->r17 = ADD32(ctx->r17, 0X76D0);
    // 0x800A9394: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A9398: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_800A939C:
    // 0x800A939C: lw          $t6, 0x58($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X58);
    // 0x800A93A0: beql        $t6, $zero, L_800A93C4
    if (ctx->r14 == 0) {
        // 0x800A93A4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A93C4;
    }
    goto skip_0;
    // 0x800A93A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800A93A8: jal         0x800A9420
    // 0x800A93AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A9420(rdram, ctx);
        goto after_0;
    // 0x800A93AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800A93B0: beql        $v0, $zero, L_800A93C4
    if (ctx->r2 == 0) {
        // 0x800A93B4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A93C4;
    }
    goto skip_1;
    // 0x800A93B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800A93B8: jal         0x80110164
    // 0x800A93BC: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    func_80110164(rdram, ctx);
        goto after_1;
    // 0x800A93BC: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    after_1:
    // 0x800A93C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800A93C4:
    // 0x800A93C4: bne         $s0, $s2, L_800A939C
    if (ctx->r16 != ctx->r18) {
        // 0x800A93C8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800A939C;
    }
    // 0x800A93C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800A93CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A93D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A93D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A93D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A93DC: jr          $ra
    // 0x800A93E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A93E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A93E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A93E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A93E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A93EC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A93F0: jr          $ra
    // 0x800A93F4: lw          $v0, 0x7728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7728);
    return;
    // 0x800A93F4: lw          $v0, 0x7728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7728);
;}
RECOMP_FUNC void func_800A93F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A93F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A93FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9400: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A9404: jr          $ra
    // 0x800A9408: lw          $v0, 0x7708($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7708);
    return;
    // 0x800A9408: lw          $v0, 0x7708($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7708);
;}
RECOMP_FUNC void func_800A940C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A940C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A9410: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9414: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A9418: jr          $ra
    // 0x800A941C: lw          $v0, 0x76E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76E8);
    return;
    // 0x800A941C: lw          $v0, 0x76E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76E8);
;}
RECOMP_FUNC void func_800A9420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9420: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A9424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A9428: addiu       $t7, $t7, 0x76D0
    ctx->r15 = ADD32(ctx->r15, 0X76D0);
    // 0x800A942C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800A9430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9434: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800A9438: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x800A943C: jal         0x800A8984
    // 0x800A9440: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800A8984(rdram, ctx);
        goto after_0;
    // 0x800A9440: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800A9444: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A944C: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x800A9450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A9454: xor         $v0, $v0, $t8
    ctx->r2 = ctx->r2 ^ ctx->r24;
    // 0x800A9458: jr          $ra
    // 0x800A945C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x800A945C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800A9460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9460: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9464: jr          $ra
    // 0x800A9468: lh          $v0, 0x76D0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X76D0);
    return;
    // 0x800A9468: lh          $v0, 0x76D0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X76D0);
;}
RECOMP_FUNC void func_800A946C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A946C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9470: jr          $ra
    // 0x800A9474: lh          $v0, 0x76D2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X76D2);
    return;
    // 0x800A9474: lh          $v0, 0x76D2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X76D2);
;}
RECOMP_FUNC void func_800A9478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9478: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A947C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800A9480: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800A9484: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A9488: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A948C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A9490: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x800A9494: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800A9498: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A949C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x800A94A0: addiu       $s3, $s3, 0x76D0
    ctx->r19 = ADD32(ctx->r19, 0X76D0);
    // 0x800A94A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A94A8: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
L_800A94AC:
    // 0x800A94AC: jal         0x800F6438
    // 0x800A94B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_0;
    // 0x800A94B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800A94B4: beq         $v0, $zero, L_800A94E4
    if (ctx->r2 == 0) {
        // 0x800A94B8: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_800A94E4;
    }
    // 0x800A94B8: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x800A94BC: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x800A94C0: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x800A94C4: bnel        $s2, $t8, L_800A94E8
    if (ctx->r18 != ctx->r24) {
        // 0x800A94C8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A94E8;
    }
    goto skip_0;
    // 0x800A94C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800A94CC: jal         0x800A9420
    // 0x800A94D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A9420(rdram, ctx);
        goto after_1;
    // 0x800A94D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A94D4: beq         $v0, $zero, L_800A94E4
    if (ctx->r2 == 0) {
        // 0x800A94D8: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_800A94E4;
    }
    // 0x800A94D8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800A94DC: b           L_800A94F4
    // 0x800A94E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_800A94F4;
    // 0x800A94E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_800A94E4:
    // 0x800A94E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800A94E8:
    // 0x800A94E8: bne         $s0, $s4, L_800A94AC
    if (ctx->r16 != ctx->r20) {
        // 0x800A94EC: nop
    
            goto L_800A94AC;
    }
    // 0x800A94EC: nop

    // 0x800A94F0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800A94F4:
    // 0x800A94F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A94F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A94FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9500: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A9504: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800A9508: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800A950C: jr          $ra
    // 0x800A9510: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A9510: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A9514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9514: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800A9518: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800A951C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A9520: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800A9524: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800A9528: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800A952C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800A9530: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A9534: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A9538: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x800A953C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800A9540: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800A9544: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A9548: lwc1        $f20, 0x5600($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5600);
    // 0x800A954C: addiu       $s4, $s4, 0x76F0
    ctx->r20 = ADD32(ctx->r20, 0X76F0);
    // 0x800A9550: addiu       $s0, $s0, 0x76D0
    ctx->r16 = ADD32(ctx->r16, 0X76D0);
    // 0x800A9554: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x800A9558: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
L_800A955C:
    // 0x800A955C: beql        $a0, $zero, L_800A9598
    if (ctx->r4 == 0) {
        // 0x800A9560: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A9598;
    }
    goto skip_0;
    // 0x800A9560: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800A9564: jal         0x800CA7E4
    // 0x800A9568: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800CA7E4(rdram, ctx);
        goto after_0;
    // 0x800A9568: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800A956C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A9570: jal         0x800EEB40
    // 0x800A9574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EEB40(rdram, ctx);
        goto after_1;
    // 0x800A9574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800A9578: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x800A957C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800A9580: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800A9584: bc1fl       L_800A9598
    if (!c1cs) {
        // 0x800A9588: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A9598;
    }
    goto skip_1;
    // 0x800A9588: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x800A958C: jal         0x800EE7F8
    // 0x800A9590: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800A9590: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x800A9594: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800A9598:
    // 0x800A9598: bnel        $s0, $s4, L_800A955C
    if (ctx->r16 != ctx->r20) {
        // 0x800A959C: lw          $a0, 0x38($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X38);
            goto L_800A955C;
    }
    goto skip_2;
    // 0x800A959C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    skip_2:
    // 0x800A95A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A95A4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800A95A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A95AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800A95B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800A95B4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800A95B8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800A95BC: jr          $ra
    // 0x800A95C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800A95C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800A95C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A95C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A95C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A95CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A95D0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A95D4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800A95D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A95DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A95E0: addiu       $s2, $s2, 0x76F0
    ctx->r18 = ADD32(ctx->r18, 0X76F0);
    // 0x800A95E4: addiu       $s0, $s0, 0x76D0
    ctx->r16 = ADD32(ctx->r16, 0X76D0);
    // 0x800A95E8: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A95EC:
    // 0x800A95EC: beq         $v0, $zero, L_800A9620
    if (ctx->r2 == 0) {
        // 0x800A95F0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800A9620;
    }
    // 0x800A95F0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800A95F4: jal         0x800CA384
    // 0x800A95F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CA384(rdram, ctx);
        goto after_0;
    // 0x800A95F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_0:
    // 0x800A95FC: beq         $v0, $s1, L_800A9620
    if (ctx->r2 == ctx->r17) {
        // 0x800A9600: sw          $v0, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r2;
            goto L_800A9620;
    }
    // 0x800A9600: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x800A9604: jal         0x800A8984
    // 0x800A9608: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    func_800A8984(rdram, ctx);
        goto after_1;
    // 0x800A9608: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x800A960C: bnel        $v0, $s1, L_800A9624
    if (ctx->r2 != ctx->r17) {
        // 0x800A9610: lw          $a0, 0x58($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X58);
            goto L_800A9624;
    }
    goto skip_0;
    // 0x800A9610: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    skip_0:
    // 0x800A9614: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800A9618: jal         0x800A88C4
    // 0x800A961C: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    func_800A88C4(rdram, ctx);
        goto after_2;
    // 0x800A961C: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    after_2:
L_800A9620:
    // 0x800A9620: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_800A9624:
    // 0x800A9624: beql        $a0, $zero, L_800A963C
    if (ctx->r4 == 0) {
        // 0x800A9628: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800A963C;
    }
    goto skip_1;
    // 0x800A9628: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x800A962C: jal         0x80110068
    // 0x800A9630: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    func_80110068(rdram, ctx);
        goto after_3;
    // 0x800A9630: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    after_3:
    // 0x800A9634: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x800A9638: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800A963C:
    // 0x800A963C: bnel        $s0, $s2, L_800A95EC
    if (ctx->r16 != ctx->r18) {
        // 0x800A9640: lw          $v0, 0x38($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X38);
            goto L_800A95EC;
    }
    goto skip_2;
    // 0x800A9640: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    skip_2:
    // 0x800A9644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9648: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A964C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9650: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A9654: jr          $ra
    // 0x800A9658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A9658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A965C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A965C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A9660: lh          $t6, 0x76D2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76D2);
    // 0x800A9664: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800A9668: jr          $ra
    // 0x800A966C: subu        $v0, $t7, $t6
    ctx->r2 = SUB32(ctx->r15, ctx->r14);
    return;
    // 0x800A966C: subu        $v0, $t7, $t6
    ctx->r2 = SUB32(ctx->r15, ctx->r14);
;}
RECOMP_FUNC void func_800A9670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9670: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A9674: lbu         $t6, 0x76D4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76D4);
    // 0x800A9678: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A967C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A9680: bne         $t6, $zero, L_800A9690
    if (ctx->r14 != 0) {
        // 0x800A9684: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_800A9690;
    }
    // 0x800A9684: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800A9688: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x800A968C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800A9690:
    // 0x800A9690: lbu         $t7, 0x76D5($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76D5);
    // 0x800A9694: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800A9698: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A969C: bne         $t7, $zero, L_800A96B0
    if (ctx->r15 != 0) {
        // 0x800A96A0: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_800A96B0;
    }
    // 0x800A96A0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800A96A4: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x800A96A8: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x800A96AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800A96B0:
    // 0x800A96B0: lbu         $t1, 0x76D6($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76D6);
    // 0x800A96B4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x800A96B8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x800A96BC: bne         $t1, $zero, L_800A96CC
    if (ctx->r9 != 0) {
        // 0x800A96C0: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_800A96CC;
    }
    // 0x800A96C0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800A96C4: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x800A96C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800A96CC:
    // 0x800A96CC: lbu         $t5, 0x76D7($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76D7);
    // 0x800A96D0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800A96D4: addu        $t9, $a0, $t7
    ctx->r25 = ADD32(ctx->r4, ctx->r15);
    // 0x800A96D8: bne         $t5, $zero, L_800A96E8
    if (ctx->r13 != 0) {
        // 0x800A96DC: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_800A96E8;
    }
    // 0x800A96DC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800A96E0: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x800A96E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800A96E8:
    // 0x800A96E8: jr          $ra
    // 0x800A96EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800A96EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800A96F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A96F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A96F4: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
    // 0x800A96F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A96FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800A9700: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x800A9704: bnel        $a0, $t6, L_800A9718
    if (ctx->r4 != ctx->r14) {
            // 0x800A9708: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    static_3_800A9718(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9708: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    skip_0:
    // 0x800A970C: jr          $ra
    // 0x800A9710: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800A9710: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800A9714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9714: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    // 0x800A9718: bnel        $a0, $t7, L_800A972C
    if (ctx->r4 != ctx->r15) {
            // 0x800A971C: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    static_3_800A972C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A971C: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    skip_0:
    // 0x800A9720: jr          $ra
    // 0x800A9724: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x800A9724: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
;}
RECOMP_FUNC void func_800A9728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9728: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x800A972C: bnel        $a0, $t8, L_800A9740
    if (ctx->r4 != ctx->r24) {
            // 0x800A9730: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    static_3_800A9740(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9730: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    skip_0:
    // 0x800A9734: jr          $ra
    // 0x800A9738: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x800A9738: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
;}
RECOMP_FUNC void func_800A973C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A973C: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    // 0x800A9740: bnel        $a0, $t9, L_800A9754
    if (ctx->r4 != ctx->r25) {
            // 0x800A9744: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800A9754(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9744: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800A9748: jr          $ra
    // 0x800A974C: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x800A974C: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
;}
RECOMP_FUNC void func_800A9750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800A9700:
    // 0x800A9750: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A9754: bne         $v1, $a1, L_800A9700
    if (ctx->r3 != ctx->r5) {
            // 0x800A9758: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    static_3_800A9700(rdram, ctx);
    return;
    }
    // 0x800A9758: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800A975C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A9760: jr          $ra
    // 0x800A9764: nop

    return;
    // 0x800A9764: nop

;}
RECOMP_FUNC void func_800A9768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9768: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A976C: addiu       $v0, $v0, 0x76D0
    ctx->r2 = ADD32(ctx->r2, 0X76D0);
    // 0x800A9770: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A9774: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800A9778: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x800A977C: bne         $a0, $t6, L_800A9794
    if (ctx->r4 != ctx->r14) {
            // 0x800A9780: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    func_800A9794(rdram, ctx);
    return;
    }
    // 0x800A9780: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800A9784: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9788: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800A978C: jr          $ra
    // 0x800A9790: lw          $v0, 0x76E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76E8);
    return;
    // 0x800A9790: lw          $v0, 0x76E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76E8);
;}
RECOMP_FUNC void func_800A9794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9794: lh          $t8, 0xA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA);
    // 0x800A9798: bne         $a0, $t8, L_800A97B0
    if (ctx->r4 != ctx->r24) {
            // 0x800A979C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    func_800A97B0(rdram, ctx);
    return;
    }
    // 0x800A979C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800A97A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A97A4: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800A97A8: jr          $ra
    // 0x800A97AC: lw          $v0, 0x76EC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76EC);
    return;
    // 0x800A97AC: lw          $v0, 0x76EC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76EC);
;}
RECOMP_FUNC void func_800A97B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A97B0: lh          $t0, 0xC($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XC);
    // 0x800A97B4: bne         $a0, $t0, L_800A97CC
    if (ctx->r4 != ctx->r8) {
            // 0x800A97B8: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    func_800A97CC(rdram, ctx);
    return;
    }
    // 0x800A97B8: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x800A97BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A97C0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800A97C4: jr          $ra
    // 0x800A97C8: lw          $v0, 0x76F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76F0);
    return;
    // 0x800A97C8: lw          $v0, 0x76F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76F0);
;}
RECOMP_FUNC void func_800A97CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A97CC: lh          $t2, 0xE($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XE);
    // 0x800A97D0: bne         $a0, $t2, L_800A97E8
    if (ctx->r4 != ctx->r10) {
            // 0x800A97D4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    func_800A97E8(rdram, ctx);
    return;
    }
    // 0x800A97D4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x800A97D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A97DC: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x800A97E0: jr          $ra
    // 0x800A97E4: lw          $v0, 0x76F4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76F4);
    return;
    // 0x800A97E4: lw          $v0, 0x76F4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76F4);
;}
RECOMP_FUNC void func_800A97E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800A9778:
    // 0x800A97E8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A97EC: bne         $v1, $a1, L_800A9778
    if (ctx->r3 != ctx->r5) {
            // 0x800A97F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    static_3_800A9778(rdram, ctx);
    return;
    }
    // 0x800A97F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800A97F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A97F8: jr          $ra
    // 0x800A97FC: nop

    return;
    // 0x800A97FC: nop

;}
RECOMP_FUNC void func_800A9800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A980C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9810: jal         0x800A9828
    // 0x800A9814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A9828(rdram, ctx);
        goto after_0;
    // 0x800A9814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800A9818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A981C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9820: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A982C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A9830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9834: beq         $a1, $zero, L_800A9848
    if (ctx->r5 == 0) {
        // 0x800A9838: sw          $a0, 0x7754($at)
        MEM_W(0X7754, ctx->r1) = ctx->r4;
            goto L_800A9848;
    }
    // 0x800A9838: sw          $a0, 0x7754($at)
    MEM_W(0X7754, ctx->r1) = ctx->r4;
    // 0x800A983C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A9840: b           L_800A9854
    // 0x800A9844: sh          $a1, 0x7750($at)
    MEM_H(0X7750, ctx->r1) = ctx->r5;
        goto L_800A9854;
    // 0x800A9844: sh          $a1, 0x7750($at)
    MEM_H(0X7750, ctx->r1) = ctx->r5;
L_800A9848:
    // 0x800A9848: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x800A984C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A9850: sh          $t6, 0x7750($at)
    MEM_H(0X7750, ctx->r1) = ctx->r14;
L_800A9854:
    // 0x800A9854: beq         $a2, $zero, L_800A9868
    if (ctx->r6 == 0) {
        // 0x800A9858: addiu       $t7, $zero, 0xE4
        ctx->r15 = ADD32(0, 0XE4);
            goto L_800A9868;
    }
    // 0x800A9858: addiu       $t7, $zero, 0xE4
    ctx->r15 = ADD32(0, 0XE4);
    // 0x800A985C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A9860: b           L_800A9870
    // 0x800A9864: sh          $a2, 0x7752($at)
    MEM_H(0X7752, ctx->r1) = ctx->r6;
        goto L_800A9870;
    // 0x800A9864: sh          $a2, 0x7752($at)
    MEM_H(0X7752, ctx->r1) = ctx->r6;
L_800A9868:
    // 0x800A9868: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A986C: sh          $t7, 0x7752($at)
    MEM_H(0X7752, ctx->r1) = ctx->r15;
L_800A9870:
    // 0x800A9870: jal         0x800E7F60
    // 0x800A9874: nop

    func_800E7F60(rdram, ctx);
        goto after_0;
    // 0x800A9874: nop

    after_0:
    // 0x800A9878: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A987C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A9880: lh          $a1, 0x7752($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X7752);
    // 0x800A9884: jal         0x800A8D00
    // 0x800A9888: lh          $a0, 0x7750($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7750);
    func_800A8D00(rdram, ctx);
        goto after_1;
    // 0x800A9888: lh          $a0, 0x7750($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7750);
    after_1:
    // 0x800A988C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9894: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A989C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A989C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A98A0: lw          $v0, 0x7754($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7754);
    // 0x800A98A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A98A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A98AC: beq         $v0, $zero, L_800A98BC
    if (ctx->r2 == 0) {
        // 0x800A98B0: nop
    
            goto L_800A98BC;
    }
    // 0x800A98B0: nop

    // 0x800A98B4: b           L_800A98C8
    // 0x800A98B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800A98C8;
    // 0x800A98B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800A98BC:
    // 0x800A98BC: jal         0x80014F00
    // 0x800A98C0: nop

    func_80014F00(rdram, ctx);
        goto after_0;
    // 0x800A98C0: nop

    after_0:
    // 0x800A98C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800A98C8:
    // 0x800A98C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A98CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A98D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800A98D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A98E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A98E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A98E4: lbu         $v0, 0x7760($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7760);
    // 0x800A98E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A98EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A98F0: beq         $v0, $at, L_800A990C
    if (ctx->r2 == ctx->r1) {
        // 0x800A98F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A990C;
    }
    // 0x800A98F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A98F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A98FC: bnel        $v0, $at, L_800A9910
    if (ctx->r2 != ctx->r1) {
        // 0x800A9900: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A9910;
    }
    goto skip_0;
    // 0x800A9900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A9904: jal         0x80088C70
    // 0x800A9908: nop

    _gsattract_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800A9908: nop

    after_0:
L_800A990C:
    // 0x800A990C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9910:
    // 0x800A9910: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A9914: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A9918: sb          $t6, 0x7763($at)
    MEM_B(0X7763, ctx->r1) = ctx->r14;
    // 0x800A991C: jr          $ra
    // 0x800A9920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A9920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A9924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9924: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9928: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x800A992C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x800A9930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A993C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A9940: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800A9944: jal         0x800D3D28
    // 0x800A9948: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    func_800D3D28(rdram, ctx);
        goto after_0;
    // 0x800A9948: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    after_0:
    // 0x800A994C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9950: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x800A9954: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800A9958: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A995C: beq         $v1, $at, L_800A996C
    if (ctx->r3 == ctx->r1) {
        // 0x800A9960: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800A996C;
    }
    // 0x800A9960: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9964: bne         $v1, $at, L_800A9978
    if (ctx->r3 != ctx->r1) {
        // 0x800A9968: nop
    
            goto L_800A9978;
    }
    // 0x800A9968: nop

L_800A996C:
    // 0x800A996C: lh          $a0, 0x6($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X6);
    // 0x800A9970: jal         0x800886B0
    // 0x800A9974: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    _glrecord_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800A9974: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    after_1:
L_800A9978:
    // 0x800A9978: jal         0x800A9D08
    // 0x800A997C: nop

    func_800A9D08(rdram, ctx);
        goto after_2;
    // 0x800A997C: nop

    after_2:
    // 0x800A9980: jal         0x8001608C
    // 0x800A9984: nop

    func_8001608C(rdram, ctx);
        goto after_3;
    // 0x800A9984: nop

    after_3:
    // 0x800A9988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A998C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9990: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9998: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A999C: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A99A0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800A99A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A99A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A99AC: beq         $v0, $at, L_800A99C8
    if (ctx->r2 == ctx->r1) {
        // 0x800A99B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A99C8;
    }
    // 0x800A99B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A99B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A99B8: beq         $v0, $at, L_800A99DC
    if (ctx->r2 == ctx->r1) {
        // 0x800A99BC: nop
    
            goto L_800A99DC;
    }
    // 0x800A99BC: nop

    // 0x800A99C0: b           L_800A99F0
    // 0x800A99C4: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
        goto L_800A99F0;
    // 0x800A99C4: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
L_800A99C8:
    // 0x800A99C8: jal         0x800E80A0
    // 0x800A99CC: nop

    func_800E80A0(rdram, ctx);
        goto after_0;
    // 0x800A99CC: nop

    after_0:
    // 0x800A99D0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A99D4: b           L_800A99EC
    // 0x800A99D8: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
        goto L_800A99EC;
    // 0x800A99D8: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
L_800A99DC:
    // 0x800A99DC: jal         0x80088C58
    // 0x800A99E0: nop

    _gsattract_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x800A99E0: nop

    after_1:
    // 0x800A99E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A99E8: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
L_800A99EC:
    // 0x800A99EC: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
L_800A99F0:
    // 0x800A99F0: beq         $t6, $zero, L_800A99FC
    if (ctx->r14 == 0) {
        // 0x800A99F4: nop
    
            goto L_800A99FC;
    }
    // 0x800A99F4: nop

    // 0x800A99F8: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_800A99FC:
    // 0x800A99FC: jal         0x800A1618
    // 0x800A9A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A1618(rdram, ctx);
        goto after_2;
    // 0x800A9A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800A9A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9A0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9A1C: jal         0x8001211C
    // 0x800A9A20: nop

    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x800A9A20: nop

    after_0:
    // 0x800A9A24: jal         0x80087AC0
    // 0x800A9A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    _gcgoto_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x800A9A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800A9A2C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9A30: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A9A34: lbu         $t6, 0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2);
    // 0x800A9A38: beql        $t6, $zero, L_800A9A60
    if (ctx->r14 == 0) {
        // 0x800A9A3C: lbu         $v0, 0x0($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0X0);
            goto L_800A9A60;
    }
    goto skip_0;
    // 0x800A9A3C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    skip_0:
    // 0x800A9A40: lbu         $t7, 0x3($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3);
    // 0x800A9A44: bnel        $t7, $zero, L_800A9A60
    if (ctx->r15 != 0) {
        // 0x800A9A48: lbu         $v0, 0x0($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0X0);
            goto L_800A9A60;
    }
    goto skip_1;
    // 0x800A9A48: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    skip_1:
    // 0x800A9A4C: jal         0x800A98E0
    // 0x800A9A50: nop

    func_800A98E0(rdram, ctx);
        goto after_2;
    // 0x800A9A50: nop

    after_2:
    // 0x800A9A54: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9A58: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A9A5C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
L_800A9A60:
    // 0x800A9A60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9A64: beq         $v0, $at, L_800A9A7C
    if (ctx->r2 == ctx->r1) {
        // 0x800A9A68: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800A9A7C;
    }
    // 0x800A9A68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9A6C: beq         $v0, $at, L_800A9A8C
    if (ctx->r2 == ctx->r1) {
        // 0x800A9A70: nop
    
            goto L_800A9A8C;
    }
    // 0x800A9A70: nop

    // 0x800A9A74: b           L_800A9A98
    // 0x800A9A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A9A98;
    // 0x800A9A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9A7C:
    // 0x800A9A7C: jal         0x800E8144
    // 0x800A9A80: nop

    func_800E8144(rdram, ctx);
        goto after_3;
    // 0x800A9A80: nop

    after_3:
    // 0x800A9A84: b           L_800A9A98
    // 0x800A9A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A9A98;
    // 0x800A9A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9A8C:
    // 0x800A9A8C: jal         0x80088C60
    // 0x800A9A90: nop

    _gsattract_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x800A9A90: nop

    after_4:
    // 0x800A9A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9A98:
    // 0x800A9A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9A9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9AA4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9AA8: lbu         $v0, 0x7760($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7760);
    // 0x800A9AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9AB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9AB4: beq         $v0, $at, L_800A9AD0
    if (ctx->r2 == ctx->r1) {
        // 0x800A9AB8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A9AD0;
    }
    // 0x800A9AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9ABC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9AC0: beq         $v0, $at, L_800A9AE0
    if (ctx->r2 == ctx->r1) {
        // 0x800A9AC4: nop
    
            goto L_800A9AE0;
    }
    // 0x800A9AC4: nop

    // 0x800A9AC8: b           L_800A9AEC
    // 0x800A9ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A9AEC;
    // 0x800A9ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9AD0:
    // 0x800A9AD0: jal         0x800E817C
    // 0x800A9AD4: nop

    func_800E817C(rdram, ctx);
        goto after_0;
    // 0x800A9AD4: nop

    after_0:
    // 0x800A9AD8: b           L_800A9AEC
    // 0x800A9ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A9AEC;
    // 0x800A9ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9AE0:
    // 0x800A9AE0: jal         0x80088C68
    // 0x800A9AE4: nop

    _gsattract_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800A9AE4: nop

    after_1:
    // 0x800A9AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9AEC:
    // 0x800A9AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9AF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9AF8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9AFC: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A9B00: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800A9B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9B08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9B0C: beq         $v0, $at, L_800A9B28
    if (ctx->r2 == ctx->r1) {
        // 0x800A9B10: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A9B28;
    }
    // 0x800A9B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9B14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9B18: beql        $v0, $at, L_800A9B3C
    if (ctx->r2 == ctx->r1) {
        // 0x800A9B1C: lbu         $t6, 0x4($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X4);
            goto L_800A9B3C;
    }
    goto skip_0;
    // 0x800A9B1C: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
    skip_0:
    // 0x800A9B20: b           L_800A9B3C
    // 0x800A9B24: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
        goto L_800A9B3C;
    // 0x800A9B24: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
L_800A9B28:
    // 0x800A9B28: jal         0x800E8104
    // 0x800A9B2C: nop

    func_800E8104(rdram, ctx);
        goto after_0;
    // 0x800A9B2C: nop

    after_0:
    // 0x800A9B30: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9B34: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A9B38: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
L_800A9B3C:
    // 0x800A9B3C: bnel        $t6, $zero, L_800A9B68
    if (ctx->r14 != 0) {
        // 0x800A9B40: sb          $zero, 0x3($v1)
        MEM_B(0X3, ctx->r3) = 0;
            goto L_800A9B68;
    }
    goto skip_1;
    // 0x800A9B40: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    skip_1:
    // 0x800A9B44: jal         0x800D3D58
    // 0x800A9B48: nop

    func_800D3D58(rdram, ctx);
        goto after_1;
    // 0x800A9B48: nop

    after_1:
    // 0x800A9B4C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9B50: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A9B54: jal         0x800886B8
    // 0x800A9B58: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    _glrecord_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x800A9B58: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    after_2:
    // 0x800A9B5C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9B60: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x800A9B64: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
L_800A9B68:
    // 0x800A9B68: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x800A9B6C: jal         0x800A1618
    // 0x800A9B70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A1618(rdram, ctx);
        goto after_3;
    // 0x800A9B70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800A9B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9B7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9B84: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9B8C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9B90: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x800A9B94: sh          $a0, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r4;
    // 0x800A9B98: jr          $ra
    // 0x800A9B9C: sh          $a1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r5;
    return;
    // 0x800A9B9C: sh          $a1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800A9BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9BA0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9BA4: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x800A9BA8: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800A9BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9BB4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800A9BB8: beq         $t6, $zero, L_800A9BC8
    if (ctx->r14 == 0) {
        // 0x800A9BBC: sb          $a0, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r4;
            goto L_800A9BC8;
    }
    // 0x800A9BBC: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x800A9BC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A9BC4: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
L_800A9BC8:
    // 0x800A9BC8: sh          $a3, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r7;
    // 0x800A9BCC: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
    // 0x800A9BD0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800A9BD4: jal         0x800A79D4
    // 0x800A9BD8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800A79D4(rdram, ctx);
        goto after_0;
    // 0x800A9BD8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800A9BDC: jal         0x800A7A90
    // 0x800A9BE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7A90(rdram, ctx);
        goto after_1;
    // 0x800A9BE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800A9BE4: jal         0x800A7B18
    // 0x800A9BE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800A7B18(rdram, ctx);
        goto after_2;
    // 0x800A9BE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x800A9BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9BF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9BFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A9C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9C04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A9C08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A9C0C: jal         0x800A9B84
    // 0x800A9C10: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800A9B84(rdram, ctx);
        goto after_0;
    // 0x800A9C10: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A9C14: jal         0x800EA05C
    // 0x800A9C18: nop

    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x800A9C18: nop

    after_1:
    // 0x800A9C1C: jal         0x800EA090
    // 0x800A9C20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800EA090(rdram, ctx);
        goto after_2;
    // 0x800A9C20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x800A9C24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A9C28: jal         0x800A9B8C
    // 0x800A9C2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A9B8C(rdram, ctx);
        goto after_3;
    // 0x800A9C2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x800A9C30: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A9C34: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A9C38: jal         0x800A9BA0
    // 0x800A9C3C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800A9BA0(rdram, ctx);
        goto after_4;
    // 0x800A9C3C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x800A9C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A9C48: jr          $ra
    // 0x800A9C4C: nop

    return;
    // 0x800A9C4C: nop

;}
RECOMP_FUNC void func_800A9C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9C58: jal         0x800A8264
    // 0x800A9C5C: nop

    func_800A8264(rdram, ctx);
        goto after_0;
    // 0x800A9C5C: nop

    after_0:
    // 0x800A9C60: bne         $v0, $zero, L_800A9C88
    if (ctx->r2 != 0) {
        // 0x800A9C64: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_800A9C88;
    }
    // 0x800A9C64: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9C68: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x800A9C6C: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x800A9C70: jal         0x800A79D4
    // 0x800A9C74: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    func_800A79D4(rdram, ctx);
        goto after_1;
    // 0x800A9C74: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    after_1:
    // 0x800A9C78: jal         0x800A7A90
    // 0x800A9C7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7A90(rdram, ctx);
        goto after_2;
    // 0x800A9C7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800A9C80: jal         0x800A7B18
    // 0x800A9C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A7B18(rdram, ctx);
        goto after_3;
    // 0x800A9C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_800A9C88:
    // 0x800A9C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9C90: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9C98: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9C9C: lbu         $v0, 0x7760($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7760);
    // 0x800A9CA0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A9CA4: jr          $ra
    // 0x800A9CA8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800A9CA8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_800A9CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9CAC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A9CB0: lbu         $t6, 0x7760($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7760);
    // 0x800A9CB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A9CB8: beq         $t6, $zero, L_800A9CC8
    if (ctx->r14 == 0) {
            // 0x800A9CBC: nop

    func_800A9CC8(rdram, ctx);
    return;
    }
    // 0x800A9CBC: nop

    // 0x800A9CC0: jr          $ra
    // 0x800A9CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800A9CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800A9CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9CC8: jr          $ra
    // 0x800A9CCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800A9CCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800A9CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9CD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9CD4: jr          $ra
    // 0x800A9CD8: lbu         $v0, 0x7760($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7760);
    return;
    // 0x800A9CD8: lbu         $v0, 0x7760($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7760);
;}
RECOMP_FUNC void func_800A9CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9CDC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9CE0: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x800A9CE4: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x800A9CE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A9CEC: bne         $t6, $zero, L_800A9CF8
    if (ctx->r14 != 0) {
        // 0x800A9CF0: nop
    
            goto L_800A9CF8;
    }
    // 0x800A9CF0: nop

    // 0x800A9CF4: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
L_800A9CF8:
    // 0x800A9CF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A9D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9D10: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A9D14: jal         0x800D39A8
    // 0x800A9D18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800D39A8(rdram, ctx);
        goto after_0;
    // 0x800A9D18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800A9D1C: jal         0x800D39DC
    // 0x800A9D20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D39DC(rdram, ctx);
        goto after_1;
    // 0x800A9D20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800A9D24: jal         0x800D3A88
    // 0x800A9D28: nop

    func_800D3A88(rdram, ctx);
        goto after_2;
    // 0x800A9D28: nop

    after_2:
    // 0x800A9D2C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A9D30: addiu       $s0, $s0, -0x5B90
    ctx->r16 = ADD32(ctx->r16, -0X5B90);
    // 0x800A9D34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800A9D38:
    // 0x800A9D38: jal         0x800D3AF0
    // 0x800A9D3C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800D3AF0(rdram, ctx);
        goto after_3;
    // 0x800A9D3C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_3:
    // 0x800A9D40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800A9D44: sltiu       $at, $s1, 0x7
    ctx->r1 = ctx->r17 < 0X7 ? 1 : 0;
    // 0x800A9D48: bne         $at, $zero, L_800A9D38
    if (ctx->r1 != 0) {
        // 0x800A9D4C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A9D38;
    }
    // 0x800A9D4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800A9D50: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A9D54: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800A9D58: addiu       $s1, $s1, -0x5B84
    ctx->r17 = ADD32(ctx->r17, -0X5B84);
    // 0x800A9D5C: addiu       $s0, $s0, -0x5B88
    ctx->r16 = ADD32(ctx->r16, -0X5B88);
L_800A9D60:
    // 0x800A9D60: jal         0x800D3A20
    // 0x800A9D64: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800D3A20(rdram, ctx);
        goto after_4;
    // 0x800A9D64: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_4:
    // 0x800A9D68: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800A9D6C: bne         $s0, $s1, L_800A9D60
    if (ctx->r16 != ctx->r17) {
        // 0x800A9D70: nop
    
            goto L_800A9D60;
    }
    // 0x800A9D70: nop

    // 0x800A9D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9D78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A9D7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A9D80: jr          $ra
    // 0x800A9D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A9D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A9D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9D98: jal         0x8001AC9C
    // 0x800A9D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8001AC9C(rdram, ctx);
        goto after_0;
    // 0x800A9D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A9DA0: bne         $v0, $zero, L_800A9DB0
    if (ctx->r2 != 0) {
        // 0x800A9DA4: nop
    
            goto L_800A9DB0;
    }
    // 0x800A9DA4: nop

    // 0x800A9DA8: jal         0x8008160C
    // 0x800A9DAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8008160C(rdram, ctx);
        goto after_1;
    // 0x800A9DAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
L_800A9DB0:
    // 0x800A9DB0: jal         0x8001AC9C
    // 0x800A9DB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_2;
    // 0x800A9DB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800A9DB8: bne         $v0, $zero, L_800A9DD0
    if (ctx->r2 != 0) {
        // 0x800A9DBC: nop
    
            goto L_800A9DD0;
    }
    // 0x800A9DBC: nop

    // 0x800A9DC0: jal         0x800BFCC4
    // 0x800A9DC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800BFCC4(rdram, ctx);
        goto after_3;
    // 0x800A9DC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x800A9DC8: jal         0x800D6E54
    // 0x800A9DCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800D6E54(rdram, ctx);
        goto after_4;
    // 0x800A9DCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
L_800A9DD0:
    // 0x800A9DD0: jal         0x8001AC9C
    // 0x800A9DD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_5;
    // 0x800A9DD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x800A9DD8: bne         $v0, $zero, L_800A9DE8
    if (ctx->r2 != 0) {
        // 0x800A9DDC: nop
    
            goto L_800A9DE8;
    }
    // 0x800A9DDC: nop

    // 0x800A9DE0: jal         0x8008B6E0
    // 0x800A9DE4: nop

    func_8008B6E0(rdram, ctx);
        goto after_6;
    // 0x800A9DE4: nop

    after_6:
L_800A9DE8:
    // 0x800A9DE8: jal         0x8001AC9C
    // 0x800A9DEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_7;
    // 0x800A9DEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_7:
    // 0x800A9DF0: bne         $v0, $zero, L_800A9E00
    if (ctx->r2 != 0) {
        // 0x800A9DF4: nop
    
            goto L_800A9E00;
    }
    // 0x800A9DF4: nop

    // 0x800A9DF8: jal         0x800FFD10
    // 0x800A9DFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800FFD10(rdram, ctx);
        goto after_8;
    // 0x800A9DFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
L_800A9E00:
    // 0x800A9E00: jal         0x8001AC9C
    // 0x800A9E04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_9;
    // 0x800A9E04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_9:
    // 0x800A9E08: bne         $v0, $zero, L_800A9E18
    if (ctx->r2 != 0) {
        // 0x800A9E0C: nop
    
            goto L_800A9E18;
    }
    // 0x800A9E0C: nop

    // 0x800A9E10: jal         0x80100670
    // 0x800A9E14: nop

    func_80100670(rdram, ctx);
        goto after_10;
    // 0x800A9E14: nop

    after_10:
L_800A9E18:
    // 0x800A9E18: jal         0x8001AC9C
    // 0x800A9E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_11;
    // 0x800A9E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_11:
    // 0x800A9E20: beq         $v0, $zero, L_800A9E30
    if (ctx->r2 == 0) {
        // 0x800A9E24: nop
    
            goto L_800A9E30;
    }
    // 0x800A9E24: nop

    // 0x800A9E28: b           L_800A9EAC
    // 0x800A9E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A9EAC;
    // 0x800A9E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A9E30:
    // 0x800A9E30: jal         0x800D58CC
    // 0x800A9E34: nop

    func_800D58CC(rdram, ctx);
        goto after_12;
    // 0x800A9E34: nop

    after_12:
    // 0x800A9E38: jal         0x800A8168
    // 0x800A9E3C: nop

    func_800A8168(rdram, ctx);
        goto after_13;
    // 0x800A9E3C: nop

    after_13:
    // 0x800A9E40: jal         0x8001AC9C
    // 0x800A9E44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_14;
    // 0x800A9E44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_14:
    // 0x800A9E48: bne         $v0, $zero, L_800A9E60
    if (ctx->r2 != 0) {
        // 0x800A9E4C: nop
    
            goto L_800A9E60;
    }
    // 0x800A9E4C: nop

    // 0x800A9E50: jal         0x800BFCC4
    // 0x800A9E54: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800BFCC4(rdram, ctx);
        goto after_15;
    // 0x800A9E54: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_15:
    // 0x800A9E58: jal         0x800D6E54
    // 0x800A9E5C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800D6E54(rdram, ctx);
        goto after_16;
    // 0x800A9E5C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_16:
L_800A9E60:
    // 0x800A9E60: jal         0x8001AC9C
    // 0x800A9E64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_17;
    // 0x800A9E64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_17:
    // 0x800A9E68: bne         $v0, $zero, L_800A9E78
    if (ctx->r2 != 0) {
        // 0x800A9E6C: nop
    
            goto L_800A9E78;
    }
    // 0x800A9E6C: nop

    // 0x800A9E70: jal         0x800FFD10
    // 0x800A9E74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800FFD10(rdram, ctx);
        goto after_18;
    // 0x800A9E74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
L_800A9E78:
    // 0x800A9E78: jal         0x8001AC9C
    // 0x800A9E7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_19;
    // 0x800A9E7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_19:
    // 0x800A9E80: bne         $v0, $zero, L_800A9E90
    if (ctx->r2 != 0) {
        // 0x800A9E84: nop
    
            goto L_800A9E90;
    }
    // 0x800A9E84: nop

    // 0x800A9E88: jal         0x800B59E0
    // 0x800A9E8C: nop

    func_800B59E0(rdram, ctx);
        goto after_20;
    // 0x800A9E8C: nop

    after_20:
L_800A9E90:
    // 0x800A9E90: jal         0x8001AC9C
    // 0x800A9E94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001AC9C(rdram, ctx);
        goto after_21;
    // 0x800A9E94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_21:
    // 0x800A9E98: beql        $v0, $zero, L_800A9EAC
    if (ctx->r2 == 0) {
        // 0x800A9E9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800A9EAC;
    }
    goto skip_0;
    // 0x800A9E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800A9EA0: b           L_800A9EAC
    // 0x800A9EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A9EAC;
    // 0x800A9EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A9EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A9EAC:
    // 0x800A9EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9EB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9EC0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A9EC4: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x800A9EC8: addiu       $a1, $a1, 0x7770
    ctx->r5 = ADD32(ctx->r5, 0X7770);
    // 0x800A9ECC: ori         $t6, $t6, 0xE800
    ctx->r14 = ctx->r14 | 0XE800;
    // 0x800A9ED0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A9ED4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9ED8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800A9EDC: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x800A9EE0: addiu       $v1, $v1, -0x5B80
    ctx->r3 = ADD32(ctx->r3, -0X5B80);
    // 0x800A9EE4: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x800A9EE8: bnel        $a0, $t7, L_800A9F04
    if (ctx->r4 != ctx->r15) {
            // 0x800A9EEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800A9F04(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9EEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800A9EF0: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x800A9EF4: sll         $t9, $t8, 10
    ctx->r25 = S32(ctx->r24 << 10);
    // 0x800A9EF8: jr          $ra
    // 0x800A9EFC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    return;
    // 0x800A9EFC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_800A9F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800A9EE8:
    // 0x800A9F00: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A9F04: bnel        $v1, $v0, L_800A9EE8
    if (ctx->r3 != ctx->r2) {
            // 0x800A9F08: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    static_3_800A9EE8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9F08: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x800A9F0C: jr          $ra
    // 0x800A9F10: nop

    return;
    // 0x800A9F10: nop

;}
RECOMP_FUNC void func_800A9F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9F18: bne         $a0, $at, L_800A9F28
    if (ctx->r4 != ctx->r1) {
            // 0x800A9F1C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    func_800A9F28(rdram, ctx);
    return;
    }
    // 0x800A9F1C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x800A9F20: jr          $ra
    // 0x800A9F24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800A9F24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_800A9F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F28: jr          $ra
    // 0x800A9F2C: nop

    return;
    // 0x800A9F2C: nop

;}
RECOMP_FUNC void func_800A9F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A9F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9F38: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800A9F3C: jal         0x8001BDAC
    // 0x800A9F40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BDAC(rdram, ctx);
        goto after_0;
    // 0x800A9F40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800A9F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9F48: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A9F4C: lw          $t6, 0x7770($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7770);
    // 0x800A9F50: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A9F58: jr          $ra
    // 0x800A9F5C: slt         $v0, $t6, $t7
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    return;
    // 0x800A9F5C: slt         $v0, $t6, $t7
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
;}
RECOMP_FUNC void func_800A9F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9F68: jal         0x800DA3B8
    // 0x800A9F6C: addiu       $a0, $a0, 0xD1B
    ctx->r4 = ADD32(ctx->r4, 0XD1B);
    func_800DA3B8(rdram, ctx);
        goto after_0;
    // 0x800A9F6C: addiu       $a0, $a0, 0xD1B
    ctx->r4 = ADD32(ctx->r4, 0XD1B);
    after_0:
    // 0x800A9F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9F78: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9F88: jal         0x800DA298
    // 0x800A9F8C: addiu       $a0, $a0, 0xD1B
    ctx->r4 = ADD32(ctx->r4, 0XD1B);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800A9F8C: addiu       $a0, $a0, 0xD1B
    ctx->r4 = ADD32(ctx->r4, 0XD1B);
    after_0:
    // 0x800A9F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9F98: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A9FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9FA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9FA4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A9FA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A9FAC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A9FB0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A9FB4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800A9FB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A9FBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A9FC0: addiu       $s1, $zero, 0x40
    ctx->r17 = ADD32(0, 0X40);
    // 0x800A9FC4: addiu       $s3, $zero, 0x4E
    ctx->r19 = ADD32(0, 0X4E);
L_800A9FC8:
    // 0x800A9FC8: jal         0x800A9F80
    // 0x800A9FCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A9F80(rdram, ctx);
        goto after_0;
    // 0x800A9FCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800A9FD0: beq         $v0, $zero, L_800A9FE0
    if (ctx->r2 == 0) {
        // 0x800A9FD4: xor         $v0, $s0, $s2
        ctx->r2 = ctx->r16 ^ ctx->r18;
            goto L_800A9FE0;
    }
    // 0x800A9FD4: xor         $v0, $s0, $s2
    ctx->r2 = ctx->r16 ^ ctx->r18;
    // 0x800A9FD8: beq         $v0, $zero, L_800A9FEC
    if (ctx->r2 == 0) {
        // 0x800A9FDC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800A9FEC;
    }
    // 0x800A9FDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800A9FE0:
    // 0x800A9FE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800A9FE4: bne         $s1, $s3, L_800A9FC8
    if (ctx->r17 != ctx->r19) {
        // 0x800A9FE8: nop
    
            goto L_800A9FC8;
    }
    // 0x800A9FE8: nop

L_800A9FEC:
    // 0x800A9FEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9FF0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800A9FF4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A9FF8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A9FFC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA000: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800AA004: jr          $ra
    // 0x800AA008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AA008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AA00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA00C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA010: addiu       $v0, $v0, 0x7780
    ctx->r2 = ADD32(ctx->r2, 0X7780);
    // 0x800AA014: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800AA018: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x800AA01C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x800AA020: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x800AA024: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA028: sh          $zero, 0x7786($at)
    MEM_H(0X7786, ctx->r1) = 0;
    // 0x800AA02C: sh          $zero, 0x7784($at)
    MEM_H(0X7784, ctx->r1) = 0;
    // 0x800AA030: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA034: sh          $zero, 0x7788($at)
    MEM_H(0X7788, ctx->r1) = 0;
    // 0x800AA038: sh          $zero, 0x778A($at)
    MEM_H(0X778A, ctx->r1) = 0;
    // 0x800AA03C: sh          $zero, 0x778C($at)
    MEM_H(0X778C, ctx->r1) = 0;
    // 0x800AA040: sh          $zero, 0x778E($at)
    MEM_H(0X778E, ctx->r1) = 0;
    // 0x800AA044: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA048: sh          $zero, 0x7790($at)
    MEM_H(0X7790, ctx->r1) = 0;
    // 0x800AA04C: jr          $ra
    // 0x800AA050: sh          $zero, 0x7792($at)
    MEM_H(0X7792, ctx->r1) = 0;
    return;
    // 0x800AA050: sh          $zero, 0x7792($at)
    MEM_H(0X7792, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800AA054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA05C: jal         0x800A9F60
    // 0x800AA060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A9F60(rdram, ctx);
        goto after_0;
    // 0x800AA060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800AA064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA06C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AA074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AA078: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800AA07C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800AA080: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AA084: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
    // 0x800AA088: addiu       $s1, $zero, 0x4E
    ctx->r17 = ADD32(0, 0X4E);
    // 0x800AA08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800AA090:
    // 0x800AA090: jal         0x800A9F60
    // 0x800AA094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A9F60(rdram, ctx);
        goto after_0;
    // 0x800AA094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800AA098: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800AA09C: bnel        $s0, $s1, L_800AA090
    if (ctx->r16 != ctx->r17) {
        // 0x800AA0A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800AA090;
    }
    goto skip_0;
    // 0x800AA0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800AA0A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA0A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800AA0AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800AA0B0: jr          $ra
    // 0x800AA0B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800AA0B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800AA0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA0B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA0BC: jr          $ra
    // 0x800AA0C0: lbu         $v0, 0x7783($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7783);
    return;
    // 0x800AA0C0: lbu         $v0, 0x7783($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7783);
;}
RECOMP_FUNC void func_800AA0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA0C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA0C8: jr          $ra
    // 0x800AA0CC: lh          $v0, 0x7780($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7780);
    return;
    // 0x800AA0CC: lh          $v0, 0x7780($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7780);
;}
RECOMP_FUNC void func_800AA0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA0D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AA0D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800AA0D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800AA0DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AA0E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AA0E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800AA0E8: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
    // 0x800AA0EC: addiu       $s2, $zero, 0x4E
    ctx->r18 = ADD32(0, 0X4E);
L_800AA0F0:
    // 0x800AA0F0: jal         0x800A9F80
    // 0x800AA0F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A9F80(rdram, ctx);
        goto after_0;
    // 0x800AA0F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800AA0F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800AA0FC: bne         $s0, $s2, L_800AA0F0
    if (ctx->r16 != ctx->r18) {
        // 0x800AA100: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_800AA0F0;
    }
    // 0x800AA100: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x800AA104: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AA108: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800AA10C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AA114: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800AA118: jr          $ra
    // 0x800AA11C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AA11C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AA120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA120: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800AA124: lh          $a0, 0x7780($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7780);
    // 0x800AA128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA130: jal         0x800A9FA0
    // 0x800AA134: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_800A9FA0(rdram, ctx);
        goto after_0;
    // 0x800AA134: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_0:
    // 0x800AA138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA140: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AA148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA150: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800AA154: jal         0x800A9FA0
    // 0x800AA158: lh          $a0, 0x7780($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7780);
    func_800A9FA0(rdram, ctx);
        goto after_0;
    // 0x800AA158: lh          $a0, 0x7780($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7780);
    after_0:
    // 0x800AA15C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA164: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AA16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA16C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800AA170: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA174: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800AA178: jr          $ra
    // 0x800AA17C: lh          $v0, 0x7784($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7784);
    return;
    // 0x800AA17C: lh          $v0, 0x7784($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7784);
;}
RECOMP_FUNC void func_800AA180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA180: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800AA184: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA188: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800AA18C: jr          $ra
    // 0x800AA190: lh          $v0, 0x778C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X778C);
    return;
    // 0x800AA190: lh          $v0, 0x778C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X778C);
;}
RECOMP_FUNC void func_800AA194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA194: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA198: jr          $ra
    // 0x800AA19C: lbu         $v0, 0x7782($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7782);
    return;
    // 0x800AA19C: lbu         $v0, 0x7782($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7782);
;}
RECOMP_FUNC void func_800AA1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA1A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AA1A4: addiu       $v0, $v0, 0x7780
    ctx->r2 = ADD32(ctx->r2, 0X7780);
    // 0x800AA1A8: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x800AA1AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800AA1B0: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
    // 0x800AA1B4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800AA1B8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x800AA1BC: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x800AA1C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA1C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA1C8: sh          $zero, 0x778E($at)
    MEM_H(0X778E, ctx->r1) = 0;
    // 0x800AA1CC: sh          $zero, 0x778C($at)
    MEM_H(0X778C, ctx->r1) = 0;
    // 0x800AA1D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA1D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA1D8: sh          $zero, 0x7790($at)
    MEM_H(0X7790, ctx->r1) = 0;
    // 0x800AA1DC: jal         0x800AA148
    // 0x800AA1E0: sh          $zero, 0x7792($at)
    MEM_H(0X7792, ctx->r1) = 0;
    func_800AA148(rdram, ctx);
        goto after_0;
    // 0x800AA1E0: sh          $zero, 0x7792($at)
    MEM_H(0X7792, ctx->r1) = 0;
    after_0:
    // 0x800AA1E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800AA1E8: jal         0x80088168
    // 0x800AA1EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _gcfrontend_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800AA1EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800AA1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA1F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA1F8: jr          $ra
    // 0x800AA1FC: nop

    return;
    // 0x800AA1FC: nop

;}
RECOMP_FUNC void func_800AA200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA200: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA204: jr          $ra
    // 0x800AA208: sb          $a0, 0x7782($at)
    MEM_B(0X7782, ctx->r1) = ctx->r4;
    return;
    // 0x800AA208: sb          $a0, 0x7782($at)
    MEM_B(0X7782, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800AA20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA20C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800AA210: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AA214: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AA218: jr          $ra
    // 0x800AA21C: sh          $a1, 0x778C($at)
    MEM_H(0X778C, ctx->r1) = ctx->r5;
    return;
    // 0x800AA21C: sh          $a1, 0x778C($at)
    MEM_H(0X778C, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_800AA220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA220: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800AA224: addiu       $t7, $t7, 0x7780
    ctx->r15 = ADD32(ctx->r15, 0X7780);
    // 0x800AA228: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800AA22C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800AA230: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x800AA234: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x800AA238: jr          $ra
    // 0x800AA23C: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    return;
    // 0x800AA23C: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800AA240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA240: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AA244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA248: jal         0x800AA0C4
    // 0x800AA24C: nop

    func_800AA0C4(rdram, ctx);
        goto after_0;
    // 0x800AA24C: nop

    after_0:
    // 0x800AA250: jal         0x800AA0D0
    // 0x800AA254: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800AA0D0(rdram, ctx);
        goto after_1;
    // 0x800AA254: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800AA258: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA260: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x800AA264: slt         $v0, $t6, $t7
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800AA268: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x800AA26C: jr          $ra
    // 0x800AA270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800AA270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800AA274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA27C: jal         0x800A9F80
    // 0x800AA280: nop

    func_800A9F80(rdram, ctx);
        goto after_0;
    // 0x800AA280: nop

    after_0:
    // 0x800AA284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA28C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AA2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA2A0: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x800AA2A4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x800AA2A8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800AA2AC: bne         $t6, $zero, L_800AA2C4
    if (ctx->r14 != 0) {
            // 0x800AA2B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    func_800AA2C4(rdram, ctx);
    return;
    }
    // 0x800AA2B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800AA2B4: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x800AA2B8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800AA2BC: jr          $ra
    // 0x800AA2C0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    return;
    // 0x800AA2C0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
;}
RECOMP_FUNC void func_800AA2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA2C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800AA2C8: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x800AA2CC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_800AA2D0:
    // 0x800AA2D0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800AA2D4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AA2D8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x800AA2DC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x800AA2E0: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x800AA2E4: bc1fl       L_800AA334
    if (!c1cs) {
        // 0x800AA2E8: trunc.w.s   $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_800AA334;
    }
    goto skip_0;
    // 0x800AA2E8: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_0:
    // 0x800AA2EC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800AA2F0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800AA2F4: nop

    // 0x800AA2F8: div         $zero, $t8, $v0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r2)));
    // 0x800AA2FC: mflo        $t9
    ctx->r25 = lo;
    // 0x800AA300: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x800AA304: bne         $v0, $zero, L_800AA310
    if (ctx->r2 != 0) {
        // 0x800AA308: nop
    
            goto L_800AA310;
    }
    // 0x800AA308: nop

    // 0x800AA30C: break       7
    do_break(2148180748);
L_800AA310:
    // 0x800AA310: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA314: bne         $v0, $at, L_800AA328
    if (ctx->r2 != ctx->r1) {
        // 0x800AA318: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA328;
    }
    // 0x800AA318: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA31C: bne         $t8, $at, L_800AA328
    if (ctx->r24 != ctx->r1) {
        // 0x800AA320: nop
    
            goto L_800AA328;
    }
    // 0x800AA320: nop

    // 0x800AA324: break       6
    do_break(2148180772);
L_800AA328:
    // 0x800AA328: b           L_800AA374
    // 0x800AA32C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
        goto L_800AA374;
    // 0x800AA32C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800AA330: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
L_800AA334:
    // 0x800AA334: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800AA338: nop

    // 0x800AA33C: div         $zero, $t3, $v0
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r2)));
    // 0x800AA340: mflo        $t4
    ctx->r12 = lo;
    // 0x800AA344: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800AA348: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x800AA34C: bne         $v0, $zero, L_800AA358
    if (ctx->r2 != 0) {
        // 0x800AA350: nop
    
            goto L_800AA358;
    }
    // 0x800AA350: nop

    // 0x800AA354: break       7
    do_break(2148180820);
L_800AA358:
    // 0x800AA358: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA35C: bne         $v0, $at, L_800AA370
    if (ctx->r2 != ctx->r1) {
        // 0x800AA360: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA370;
    }
    // 0x800AA360: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA364: bne         $t3, $at, L_800AA370
    if (ctx->r11 != ctx->r1) {
        // 0x800AA368: nop
    
            goto L_800AA370;
    }
    // 0x800AA368: nop

    // 0x800AA36C: break       6
    do_break(2148180844);
L_800AA370:
    // 0x800AA370: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
L_800AA374:
    // 0x800AA374: lh          $a1, 0x0($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X0);
    // 0x800AA378: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA37C: beql        $at, $zero, L_800AA390
    if (ctx->r1 == 0) {
        // 0x800AA380: lh          $a1, 0x6($t1)
        ctx->r5 = MEM_H(ctx->r9, 0X6);
            goto L_800AA390;
    }
    goto skip_1;
    // 0x800AA380: lh          $a1, 0x6($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X6);
    skip_1:
    // 0x800AA384: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x800AA388: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800AA38C: lh          $a1, 0x6($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X6);
L_800AA390:
    // 0x800AA390: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x800AA394: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800AA398: beq         $at, $zero, L_800AA3A4
    if (ctx->r1 == 0) {
        // 0x800AA39C: nop
    
            goto L_800AA3A4;
    }
    // 0x800AA39C: nop

    // 0x800AA3A0: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
L_800AA3A4:
    // 0x800AA3A4: bne         $t0, $a2, L_800AA2D0
    if (ctx->r8 != ctx->r6) {
        // 0x800AA3A8: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_800AA2D0;
    }
    // 0x800AA3A8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800AA3AC: jr          $ra
    // 0x800AA3B0: nop

    return;
    // 0x800AA3B0: nop

;}
RECOMP_FUNC void func_800AA3B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA3B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AA3B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800AA3BC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800AA3C0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800AA3C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800AA3C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800AA3CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800AA3D0: beq         $a0, $zero, L_800AA4B0
    if (ctx->r4 == 0) {
        // 0x800AA3D4: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800AA4B0;
    }
    // 0x800AA3D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800AA3D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800AA3DC: addiu       $s0, $t6, 0x7938
    ctx->r16 = ADD32(ctx->r14, 0X7938);
    // 0x800AA3E0: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x800AA3E4: addiu       $s4, $s4, 0x7968
    ctx->r20 = ADD32(ctx->r20, 0X7968);
    // 0x800AA3E8: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
    // 0x800AA3EC: addiu       $s5, $a1, 0x18
    ctx->r21 = ADD32(ctx->r5, 0X18);
    // 0x800AA3F0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
L_800AA3F4:
    // 0x800AA3F4: lhu         $t7, 0x0($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X0);
    // 0x800AA3F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800AA3FC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800AA400: addu        $s1, $t8, $s5
    ctx->r17 = ADD32(ctx->r24, ctx->r21);
    // 0x800AA404: jal         0x800EE88C
    // 0x800AA408: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EE88C(rdram, ctx);
        goto after_0;
    // 0x800AA408: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800AA40C: lbu         $t9, 0xC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XC);
    // 0x800AA410: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800AA414: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x800AA418: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800AA41C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800AA420: bgez        $t9, L_800AA438
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800AA424: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800AA438;
    }
    // 0x800AA424: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AA428: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800AA42C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AA430: nop

    // 0x800AA434: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800AA438:
    // 0x800AA438: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x800AA43C: lbu         $t0, 0xD($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD);
    // 0x800AA440: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800AA444: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800AA448: bgez        $t0, L_800AA45C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800AA44C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800AA45C;
    }
    // 0x800AA44C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800AA450: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800AA454: nop

    // 0x800AA458: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_800AA45C:
    // 0x800AA45C: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    // 0x800AA460: lbu         $t1, 0xE($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XE);
    // 0x800AA464: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800AA468: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800AA46C: bgez        $t1, L_800AA480
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800AA470: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800AA480;
    }
    // 0x800AA470: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AA474: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AA478: nop

    // 0x800AA47C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_800AA480:
    // 0x800AA480: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x800AA484: lbu         $t2, 0xF($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XF);
    // 0x800AA488: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800AA48C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800AA490: bgez        $t2, L_800AA4A4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800AA494: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800AA4A4;
    }
    // 0x800AA494: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800AA498: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AA49C: nop

    // 0x800AA4A0: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_800AA4A4:
    // 0x800AA4A4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800AA4A8: bne         $s0, $s4, L_800AA3F4
    if (ctx->r16 != ctx->r20) {
        // 0x800AA4AC: swc1        $f18, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
            goto L_800AA3F4;
    }
    // 0x800AA4AC: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_800AA4B0:
    // 0x800AA4B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800AA4B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800AA4B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800AA4BC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA4C0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800AA4C4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800AA4C8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800AA4CC: jr          $ra
    // 0x800AA4D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AA4D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800AA4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA4D4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800AA4D8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800AA4DC: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x800AA4E0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800AA4E4: addiu       $t1, $t1, 0x77A0
    ctx->r9 = ADD32(ctx->r9, 0X77A0);
    // 0x800AA4E8: bnel        $t6, $zero, L_800AA51C
    if (ctx->r14 != 0) {
        // 0x800AA4EC: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_800AA51C;
    }
    goto skip_0;
    // 0x800AA4EC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x800AA4F0: sw          $t1, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r9;
    // 0x800AA4F4: addiu       $t7, $a0, 0x18
    ctx->r15 = ADD32(ctx->r4, 0X18);
    // 0x800AA4F8: addiu       $t5, $t1, 0x4
    ctx->r13 = ADD32(ctx->r9, 0X4);
    // 0x800AA4FC: sw          $t5, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r13;
    // 0x800AA500: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x800AA504: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x800AA508: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800AA50C: lw          $t6, 0x190($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X190);
    // 0x800AA510: b           L_800AA7F4
    // 0x800AA514: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_800AA7F4;
    // 0x800AA514: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800AA518: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_800AA51C:
    // 0x800AA51C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800AA520: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800AA524: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800AA528: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x800AA52C: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x800AA530: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
L_800AA534:
    // 0x800AA534: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800AA538: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AA53C: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x800AA540: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x800AA544: nop

    // 0x800AA548: bc1fl       L_800AA598
    if (!c1cs) {
        // 0x800AA54C: trunc.w.s   $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_800AA598;
    }
    goto skip_1;
    // 0x800AA54C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
    // 0x800AA550: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800AA554: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800AA558: nop

    // 0x800AA55C: div         $zero, $t9, $v0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r2)));
    // 0x800AA560: mflo        $t5
    ctx->r13 = lo;
    // 0x800AA564: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x800AA568: bne         $v0, $zero, L_800AA574
    if (ctx->r2 != 0) {
        // 0x800AA56C: nop
    
            goto L_800AA574;
    }
    // 0x800AA56C: nop

    // 0x800AA570: break       7
    do_break(2148181360);
L_800AA574:
    // 0x800AA574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA578: bne         $v0, $at, L_800AA58C
    if (ctx->r2 != ctx->r1) {
        // 0x800AA57C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA58C;
    }
    // 0x800AA57C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA580: bne         $t9, $at, L_800AA58C
    if (ctx->r25 != ctx->r1) {
        // 0x800AA584: nop
    
            goto L_800AA58C;
    }
    // 0x800AA584: nop

    // 0x800AA588: break       6
    do_break(2148181384);
L_800AA58C:
    // 0x800AA58C: b           L_800AA5D8
    // 0x800AA590: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
        goto L_800AA5D8;
    // 0x800AA590: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800AA594: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
L_800AA598:
    // 0x800AA598: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800AA59C: nop

    // 0x800AA5A0: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x800AA5A4: mflo        $t8
    ctx->r24 = lo;
    // 0x800AA5A8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800AA5AC: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800AA5B0: bne         $v0, $zero, L_800AA5BC
    if (ctx->r2 != 0) {
        // 0x800AA5B4: nop
    
            goto L_800AA5BC;
    }
    // 0x800AA5B4: nop

    // 0x800AA5B8: break       7
    do_break(2148181432);
L_800AA5BC:
    // 0x800AA5BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA5C0: bne         $v0, $at, L_800AA5D4
    if (ctx->r2 != ctx->r1) {
        // 0x800AA5C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA5D4;
    }
    // 0x800AA5C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA5C8: bne         $t7, $at, L_800AA5D4
    if (ctx->r15 != ctx->r1) {
        // 0x800AA5CC: nop
    
            goto L_800AA5D4;
    }
    // 0x800AA5CC: nop

    // 0x800AA5D0: break       6
    do_break(2148181456);
L_800AA5D4:
    // 0x800AA5D4: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
L_800AA5D8:
    // 0x800AA5D8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x800AA5DC: nop

    // 0x800AA5E0: bc1fl       L_800AA634
    if (!c1cs) {
        // 0x800AA5E4: trunc.w.s   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_800AA634;
    }
    goto skip_2;
    // 0x800AA5E4: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_2:
    // 0x800AA5E8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800AA5EC: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    // 0x800AA5F0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800AA5F4: nop

    // 0x800AA5F8: div         $zero, $t6, $t7
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r15)));
    // 0x800AA5FC: mflo        $t8
    ctx->r24 = lo;
    // 0x800AA600: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x800AA604: bne         $t7, $zero, L_800AA610
    if (ctx->r15 != 0) {
        // 0x800AA608: nop
    
            goto L_800AA610;
    }
    // 0x800AA608: nop

    // 0x800AA60C: break       7
    do_break(2148181516);
L_800AA610:
    // 0x800AA610: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA614: bne         $t7, $at, L_800AA628
    if (ctx->r15 != ctx->r1) {
        // 0x800AA618: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA628;
    }
    // 0x800AA618: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA61C: bne         $t6, $at, L_800AA628
    if (ctx->r14 != ctx->r1) {
        // 0x800AA620: nop
    
            goto L_800AA628;
    }
    // 0x800AA620: nop

    // 0x800AA624: break       6
    do_break(2148181540);
L_800AA628:
    // 0x800AA628: b           L_800AA678
    // 0x800AA62C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
        goto L_800AA678;
    // 0x800AA62C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800AA630: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_800AA634:
    // 0x800AA634: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x800AA638: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x800AA63C: nop

    // 0x800AA640: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x800AA644: mflo        $t7
    ctx->r15 = lo;
    // 0x800AA648: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800AA64C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x800AA650: bne         $t6, $zero, L_800AA65C
    if (ctx->r14 != 0) {
        // 0x800AA654: nop
    
            goto L_800AA65C;
    }
    // 0x800AA654: nop

    // 0x800AA658: break       7
    do_break(2148181592);
L_800AA65C:
    // 0x800AA65C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA660: bne         $t6, $at, L_800AA674
    if (ctx->r14 != ctx->r1) {
        // 0x800AA664: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA674;
    }
    // 0x800AA664: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA668: bne         $t5, $at, L_800AA674
    if (ctx->r13 != ctx->r1) {
        // 0x800AA66C: nop
    
            goto L_800AA674;
    }
    // 0x800AA66C: nop

    // 0x800AA670: break       6
    do_break(2148181616);
L_800AA674:
    // 0x800AA674: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
L_800AA678:
    // 0x800AA678: lh          $a1, 0x0($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X0);
    // 0x800AA67C: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA680: beql        $at, $zero, L_800AA694
    if (ctx->r1 == 0) {
        // 0x800AA684: lh          $a1, 0x6($t2)
        ctx->r5 = MEM_H(ctx->r10, 0X6);
            goto L_800AA694;
    }
    goto skip_3;
    // 0x800AA684: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
    skip_3:
    // 0x800AA688: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x800AA68C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800AA690: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
L_800AA694:
    // 0x800AA694: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800AA698: beql        $at, $zero, L_800AA6AC
    if (ctx->r1 == 0) {
        // 0x800AA69C: lw          $t3, 0x0($t1)
        ctx->r11 = MEM_W(ctx->r9, 0X0);
            goto L_800AA6AC;
    }
    goto skip_4;
    // 0x800AA69C: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    skip_4:
    // 0x800AA6A0: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x800AA6A4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800AA6A8: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
L_800AA6AC:
    // 0x800AA6AC: lh          $a1, 0x0($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X0);
    // 0x800AA6B0: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA6B4: beql        $at, $zero, L_800AA6C8
    if (ctx->r1 == 0) {
        // 0x800AA6B8: lh          $a1, 0x6($t2)
        ctx->r5 = MEM_H(ctx->r10, 0X6);
            goto L_800AA6C8;
    }
    goto skip_5;
    // 0x800AA6B8: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
    skip_5:
    // 0x800AA6BC: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x800AA6C0: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x800AA6C4: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
L_800AA6C8:
    // 0x800AA6C8: slt         $at, $a1, $t3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800AA6CC: beql        $at, $zero, L_800AA6E0
    if (ctx->r1 == 0) {
        // 0x800AA6D0: lh          $t9, 0x0($t2)
        ctx->r25 = MEM_H(ctx->r10, 0X0);
            goto L_800AA6E0;
    }
    goto skip_6;
    // 0x800AA6D0: lh          $t9, 0x0($t2)
    ctx->r25 = MEM_H(ctx->r10, 0X0);
    skip_6:
    // 0x800AA6D4: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x800AA6D8: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x800AA6DC: lh          $t9, 0x0($t2)
    ctx->r25 = MEM_H(ctx->r10, 0X0);
L_800AA6E0:
    // 0x800AA6E0: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800AA6E4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800AA6E8: subu        $t5, $v0, $t9
    ctx->r13 = SUB32(ctx->r2, ctx->r25);
    // 0x800AA6EC: sw          $t5, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r13;
    // 0x800AA6F0: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    // 0x800AA6F4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800AA6F8: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x800AA6FC: subu        $t7, $t3, $t6
    ctx->r15 = SUB32(ctx->r11, ctx->r14);
    // 0x800AA700: bne         $t1, $t4, L_800AA534
    if (ctx->r9 != ctx->r12) {
        // 0x800AA704: sw          $t7, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r15;
            goto L_800AA534;
    }
    // 0x800AA704: sw          $t7, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r15;
    // 0x800AA708: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800AA70C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800AA710: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800AA714: addiu       $t1, $t1, 0x77A0
    ctx->r9 = ADD32(ctx->r9, 0X77A0);
    // 0x800AA718: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AA71C: bne         $at, $zero, L_800AA7E4
    if (ctx->r1 != 0) {
        // 0x800AA720: sw          $t1, 0x190($t1)
        MEM_W(0X190, ctx->r9) = ctx->r9;
            goto L_800AA7E4;
    }
    // 0x800AA720: sw          $t1, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r9;
    // 0x800AA724: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800AA728: addiu       $t2, $t2, 0x7930
    ctx->r10 = ADD32(ctx->r10, 0X7930);
    // 0x800AA72C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800AA730: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
L_800AA734:
    // 0x800AA734: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800AA738: slt         $at, $t9, $a1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA73C: bnel        $at, $zero, L_800AA7D4
    if (ctx->r1 != 0) {
        // 0x800AA740: lw          $t9, 0x40($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X40);
            goto L_800AA7D4;
    }
    goto skip_7;
    // 0x800AA740: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    skip_7:
    // 0x800AA744: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
L_800AA748:
    // 0x800AA748: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800AA74C: bnel        $at, $zero, L_800AA7C0
    if (ctx->r1 != 0) {
        // 0x800AA750: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_800AA7C0;
    }
    goto skip_8;
    // 0x800AA750: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    skip_8:
    // 0x800AA754: lw          $v0, 0x190($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X190);
L_800AA758:
    // 0x800AA758: sltu        $at, $v0, $t2
    ctx->r1 = ctx->r2 < ctx->r10 ? 1 : 0;
    // 0x800AA75C: beql        $at, $zero, L_800AA7B0
    if (ctx->r1 == 0) {
        // 0x800AA760: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_800AA7B0;
    }
    goto skip_9;
    // 0x800AA760: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_9:
    // 0x800AA764: lhu         $t5, 0xE($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0XE);
    // 0x800AA768: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800AA76C: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800AA770: mflo        $t6
    ctx->r14 = lo;
    // 0x800AA774: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA778: lhu         $t6, 0xC($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC);
    // 0x800AA77C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800AA780: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x800AA784: multu       $a1, $t6
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800AA788: mflo        $t7
    ctx->r15 = lo;
    // 0x800AA78C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800AA790: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x800AA794: addiu       $t6, $t9, 0x18
    ctx->r14 = ADD32(ctx->r25, 0X18);
    // 0x800AA798: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800AA79C: lw          $t7, 0x190($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X190);
    // 0x800AA7A0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800AA7A4: addiu       $t5, $t7, 0x4
    ctx->r13 = ADD32(ctx->r15, 0X4);
    // 0x800AA7A8: sw          $t5, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r13;
    // 0x800AA7AC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800AA7B0:
    // 0x800AA7B0: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800AA7B4: beql        $at, $zero, L_800AA758
    if (ctx->r1 == 0) {
        // 0x800AA7B8: lw          $v0, 0x190($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X190);
            goto L_800AA758;
    }
    goto skip_10;
    // 0x800AA7B8: lw          $v0, 0x190($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X190);
    skip_10:
    // 0x800AA7BC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_800AA7C0:
    // 0x800AA7C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800AA7C4: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA7C8: beql        $at, $zero, L_800AA748
    if (ctx->r1 == 0) {
        // 0x800AA7CC: lw          $a2, 0x44($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X44);
            goto L_800AA748;
    }
    goto skip_11;
    // 0x800AA7CC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    skip_11:
    // 0x800AA7D0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
L_800AA7D4:
    // 0x800AA7D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800AA7D8: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AA7DC: beql        $at, $zero, L_800AA734
    if (ctx->r1 == 0) {
        // 0x800AA7E0: lw          $a1, 0x48($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X48);
            goto L_800AA734;
    }
    goto skip_12;
    // 0x800AA7E0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    skip_12:
L_800AA7E4:
    // 0x800AA7E4: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x800AA7E8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800AA7EC: lw          $t6, 0x190($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X190);
    // 0x800AA7F0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_800AA7F4:
    // 0x800AA7F4: jr          $ra
    // 0x800AA7F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800AA7F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800AA7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA7FC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800AA800: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800AA804: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x800AA808: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800AA80C: addiu       $t1, $t1, 0x77A0
    ctx->r9 = ADD32(ctx->r9, 0X77A0);
    // 0x800AA810: bnel        $t6, $zero, L_800AA844
    if (ctx->r14 != 0) {
        // 0x800AA814: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_800AA844;
    }
    goto skip_0;
    // 0x800AA814: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    skip_0:
    // 0x800AA818: sw          $t1, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r9;
    // 0x800AA81C: addiu       $t7, $a0, 0x18
    ctx->r15 = ADD32(ctx->r4, 0X18);
    // 0x800AA820: addiu       $t5, $t1, 0x4
    ctx->r13 = ADD32(ctx->r9, 0X4);
    // 0x800AA824: sw          $t5, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r13;
    // 0x800AA828: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x800AA82C: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x800AA830: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800AA834: lw          $t6, 0x190($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X190);
    // 0x800AA838: b           L_800AAAD8
    // 0x800AA83C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_800AAAD8;
    // 0x800AA83C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800AA840: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_800AA844:
    // 0x800AA844: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800AA848: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800AA84C: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x800AA850: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x800AA854: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
L_800AA858:
    // 0x800AA858: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x800AA85C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AA860: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x800AA864: bltz        $a1, L_800AA8A4
    if (SIGNED(ctx->r5) < 0) {
        // 0x800AA868: nop
    
            goto L_800AA8A4;
    }
    // 0x800AA868: nop

    // 0x800AA86C: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x800AA870: mflo        $t8
    ctx->r24 = lo;
    // 0x800AA874: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800AA878: bne         $v0, $zero, L_800AA884
    if (ctx->r2 != 0) {
        // 0x800AA87C: nop
    
            goto L_800AA884;
    }
    // 0x800AA87C: nop

    // 0x800AA880: break       7
    do_break(2148182144);
L_800AA884:
    // 0x800AA884: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA888: bne         $v0, $at, L_800AA89C
    if (ctx->r2 != ctx->r1) {
        // 0x800AA88C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA89C;
    }
    // 0x800AA88C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA890: bne         $a1, $at, L_800AA89C
    if (ctx->r5 != ctx->r1) {
        // 0x800AA894: nop
    
            goto L_800AA89C;
    }
    // 0x800AA894: nop

    // 0x800AA898: break       6
    do_break(2148182168);
L_800AA89C:
    // 0x800AA89C: b           L_800AA8DC
    // 0x800AA8A0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
        goto L_800AA8DC;
    // 0x800AA8A0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
L_800AA8A4:
    // 0x800AA8A4: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x800AA8A8: mflo        $t9
    ctx->r25 = lo;
    // 0x800AA8AC: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x800AA8B0: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x800AA8B4: bne         $v0, $zero, L_800AA8C0
    if (ctx->r2 != 0) {
        // 0x800AA8B8: nop
    
            goto L_800AA8C0;
    }
    // 0x800AA8B8: nop

    // 0x800AA8BC: break       7
    do_break(2148182204);
L_800AA8C0:
    // 0x800AA8C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA8C4: bne         $v0, $at, L_800AA8D8
    if (ctx->r2 != ctx->r1) {
        // 0x800AA8C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA8D8;
    }
    // 0x800AA8C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA8CC: bne         $a1, $at, L_800AA8D8
    if (ctx->r5 != ctx->r1) {
        // 0x800AA8D0: nop
    
            goto L_800AA8D8;
    }
    // 0x800AA8D0: nop

    // 0x800AA8D4: break       6
    do_break(2148182228);
L_800AA8D8:
    // 0x800AA8D8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
L_800AA8DC:
    // 0x800AA8DC: bltzl       $v0, L_800AA924
    if (SIGNED(ctx->r2) < 0) {
        // 0x800AA8E0: lh          $t8, 0x12($a0)
        ctx->r24 = MEM_H(ctx->r4, 0X12);
            goto L_800AA924;
    }
    goto skip_1;
    // 0x800AA8E0: lh          $t8, 0x12($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X12);
    skip_1:
    // 0x800AA8E4: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x800AA8E8: div         $zero, $v0, $t6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r14)));
    // 0x800AA8EC: mflo        $t7
    ctx->r15 = lo;
    // 0x800AA8F0: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x800AA8F4: bne         $t6, $zero, L_800AA900
    if (ctx->r14 != 0) {
        // 0x800AA8F8: nop
    
            goto L_800AA900;
    }
    // 0x800AA8F8: nop

    // 0x800AA8FC: break       7
    do_break(2148182268);
L_800AA900:
    // 0x800AA900: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA904: bne         $t6, $at, L_800AA918
    if (ctx->r14 != ctx->r1) {
        // 0x800AA908: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA918;
    }
    // 0x800AA908: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA90C: bne         $v0, $at, L_800AA918
    if (ctx->r2 != ctx->r1) {
        // 0x800AA910: nop
    
            goto L_800AA918;
    }
    // 0x800AA910: nop

    // 0x800AA914: break       6
    do_break(2148182292);
L_800AA918:
    // 0x800AA918: b           L_800AA95C
    // 0x800AA91C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
        goto L_800AA95C;
    // 0x800AA91C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800AA920: lh          $t8, 0x12($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X12);
L_800AA924:
    // 0x800AA924: div         $zero, $v0, $t8
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r24)));
    // 0x800AA928: mflo        $t9
    ctx->r25 = lo;
    // 0x800AA92C: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x800AA930: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x800AA934: bne         $t8, $zero, L_800AA940
    if (ctx->r24 != 0) {
        // 0x800AA938: nop
    
            goto L_800AA940;
    }
    // 0x800AA938: nop

    // 0x800AA93C: break       7
    do_break(2148182332);
L_800AA940:
    // 0x800AA940: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA944: bne         $t8, $at, L_800AA958
    if (ctx->r24 != ctx->r1) {
        // 0x800AA948: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AA958;
    }
    // 0x800AA948: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AA94C: bne         $v0, $at, L_800AA958
    if (ctx->r2 != ctx->r1) {
        // 0x800AA950: nop
    
            goto L_800AA958;
    }
    // 0x800AA950: nop

    // 0x800AA954: break       6
    do_break(2148182356);
L_800AA958:
    // 0x800AA958: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
L_800AA95C:
    // 0x800AA95C: lh          $a1, 0x0($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X0);
    // 0x800AA960: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA964: beql        $at, $zero, L_800AA978
    if (ctx->r1 == 0) {
        // 0x800AA968: lh          $a1, 0x6($t2)
        ctx->r5 = MEM_H(ctx->r10, 0X6);
            goto L_800AA978;
    }
    goto skip_2;
    // 0x800AA968: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
    skip_2:
    // 0x800AA96C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x800AA970: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800AA974: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
L_800AA978:
    // 0x800AA978: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800AA97C: beql        $at, $zero, L_800AA990
    if (ctx->r1 == 0) {
        // 0x800AA980: lw          $t3, 0x0($t1)
        ctx->r11 = MEM_W(ctx->r9, 0X0);
            goto L_800AA990;
    }
    goto skip_3;
    // 0x800AA980: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    skip_3:
    // 0x800AA984: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x800AA988: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800AA98C: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
L_800AA990:
    // 0x800AA990: lh          $a1, 0x0($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X0);
    // 0x800AA994: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AA998: beql        $at, $zero, L_800AA9AC
    if (ctx->r1 == 0) {
        // 0x800AA99C: lh          $a1, 0x6($t2)
        ctx->r5 = MEM_H(ctx->r10, 0X6);
            goto L_800AA9AC;
    }
    goto skip_4;
    // 0x800AA99C: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
    skip_4:
    // 0x800AA9A0: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x800AA9A4: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x800AA9A8: lh          $a1, 0x6($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X6);
L_800AA9AC:
    // 0x800AA9AC: slt         $at, $a1, $t3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800AA9B0: beql        $at, $zero, L_800AA9C4
    if (ctx->r1 == 0) {
        // 0x800AA9B4: lh          $t6, 0x0($t2)
        ctx->r14 = MEM_H(ctx->r10, 0X0);
            goto L_800AA9C4;
    }
    goto skip_5;
    // 0x800AA9B4: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    skip_5:
    // 0x800AA9B8: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x800AA9BC: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x800AA9C0: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
L_800AA9C4:
    // 0x800AA9C4: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800AA9C8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800AA9CC: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x800AA9D0: sw          $t7, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r15;
    // 0x800AA9D4: lh          $t8, 0x0($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X0);
    // 0x800AA9D8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800AA9DC: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x800AA9E0: subu        $t9, $t3, $t8
    ctx->r25 = SUB32(ctx->r11, ctx->r24);
    // 0x800AA9E4: bne         $t1, $t4, L_800AA858
    if (ctx->r9 != ctx->r12) {
        // 0x800AA9E8: sw          $t9, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r25;
            goto L_800AA858;
    }
    // 0x800AA9E8: sw          $t9, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r25;
    // 0x800AA9EC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800AA9F0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800AA9F4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800AA9F8: addiu       $t1, $t1, 0x77A0
    ctx->r9 = ADD32(ctx->r9, 0X77A0);
    // 0x800AA9FC: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AAA00: bne         $at, $zero, L_800AAAC8
    if (ctx->r1 != 0) {
        // 0x800AAA04: sw          $t1, 0x190($t1)
        MEM_W(0X190, ctx->r9) = ctx->r9;
            goto L_800AAAC8;
    }
    // 0x800AAA04: sw          $t1, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r9;
    // 0x800AAA08: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800AAA0C: addiu       $t2, $t2, 0x7930
    ctx->r10 = ADD32(ctx->r10, 0X7930);
    // 0x800AAA10: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800AAA14: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
L_800AAA18:
    // 0x800AAA18: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800AAA1C: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AAA20: bnel        $at, $zero, L_800AAAB8
    if (ctx->r1 != 0) {
        // 0x800AAA24: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_800AAAB8;
    }
    goto skip_6;
    // 0x800AAA24: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    skip_6:
    // 0x800AAA28: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
L_800AAA2C:
    // 0x800AAA2C: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800AAA30: bnel        $at, $zero, L_800AAAA4
    if (ctx->r1 != 0) {
        // 0x800AAA34: lw          $t5, 0x3C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X3C);
            goto L_800AAAA4;
    }
    goto skip_7;
    // 0x800AAA34: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    skip_7:
    // 0x800AAA38: lw          $v0, 0x190($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X190);
L_800AAA3C:
    // 0x800AAA3C: sltu        $at, $v0, $t2
    ctx->r1 = ctx->r2 < ctx->r10 ? 1 : 0;
    // 0x800AAA40: beql        $at, $zero, L_800AAA94
    if (ctx->r1 == 0) {
        // 0x800AAA44: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_800AAA94;
    }
    goto skip_8;
    // 0x800AAA44: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_8:
    // 0x800AAA48: lhu         $t7, 0xE($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XE);
    // 0x800AAA4C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x800AAA50: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800AAA54: mflo        $t8
    ctx->r24 = lo;
    // 0x800AAA58: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AAA5C: lhu         $t8, 0xC($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XC);
    // 0x800AAA60: addu        $t5, $t9, $a0
    ctx->r13 = ADD32(ctx->r25, ctx->r4);
    // 0x800AAA64: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800AAA68: multu       $a1, $t8
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800AAA6C: mflo        $t9
    ctx->r25 = lo;
    // 0x800AAA70: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x800AAA74: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x800AAA78: addiu       $t8, $t6, 0x18
    ctx->r24 = ADD32(ctx->r14, 0X18);
    // 0x800AAA7C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800AAA80: lw          $t9, 0x190($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X190);
    // 0x800AAA84: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800AAA88: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x800AAA8C: sw          $t7, 0x190($t1)
    MEM_W(0X190, ctx->r9) = ctx->r15;
    // 0x800AAA90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800AAA94:
    // 0x800AAA94: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800AAA98: beql        $at, $zero, L_800AAA3C
    if (ctx->r1 == 0) {
        // 0x800AAA9C: lw          $v0, 0x190($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X190);
            goto L_800AAA3C;
    }
    goto skip_9;
    // 0x800AAA9C: lw          $v0, 0x190($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X190);
    skip_9:
    // 0x800AAAA0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
L_800AAAA4:
    // 0x800AAAA4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800AAAA8: slt         $at, $t5, $a1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800AAAAC: beql        $at, $zero, L_800AAA2C
    if (ctx->r1 == 0) {
        // 0x800AAAB0: lw          $a2, 0x44($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X44);
            goto L_800AAA2C;
    }
    goto skip_10;
    // 0x800AAAB0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    skip_10:
    // 0x800AAAB4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_800AAAB8:
    // 0x800AAAB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800AAABC: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AAAC0: beql        $at, $zero, L_800AAA18
    if (ctx->r1 == 0) {
        // 0x800AAAC4: lw          $a1, 0x48($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X48);
            goto L_800AAA18;
    }
    goto skip_11;
    // 0x800AAAC4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    skip_11:
L_800AAAC8:
    // 0x800AAAC8: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x800AAACC: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x800AAAD0: lw          $t8, 0x190($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X190);
    // 0x800AAAD4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_800AAAD8:
    // 0x800AAAD8: jr          $ra
    // 0x800AAADC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800AAADC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800AAAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAAE0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800AAAE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800AAAE8: addiu       $v0, $v0, 0x7968
    ctx->r2 = ADD32(ctx->r2, 0X7968);
    // 0x800AAAEC: addiu       $a1, $a1, 0x7938
    ctx->r5 = ADD32(ctx->r5, 0X7938);
    // 0x800AAAF0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_800AAAF4:
    // 0x800AAAF4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800AAAF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800AAAFC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800AAB00: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x800AAB04: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800AAB08: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800AAB0C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800AAB10: nop

    // 0x800AAB14: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800AAB18: beql        $t7, $zero, L_800AAB68
    if (ctx->r15 == 0) {
        // 0x800AAB1C: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_800AAB68;
    }
    goto skip_0;
    // 0x800AAB1C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x800AAB20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AAB24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800AAB28: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800AAB2C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800AAB30: nop

    // 0x800AAB34: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800AAB38: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800AAB3C: nop

    // 0x800AAB40: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800AAB44: bne         $t7, $zero, L_800AAB5C
    if (ctx->r15 != 0) {
        // 0x800AAB48: nop
    
            goto L_800AAB5C;
    }
    // 0x800AAB48: nop

    // 0x800AAB4C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800AAB50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AAB54: b           L_800AAB74
    // 0x800AAB58: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_800AAB74;
    // 0x800AAB58: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_800AAB5C:
    // 0x800AAB5C: b           L_800AAB74
    // 0x800AAB60: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_800AAB74;
    // 0x800AAB60: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800AAB64: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_800AAB68:
    // 0x800AAB68: nop

    // 0x800AAB6C: bltz        $t7, L_800AAB5C
    if (SIGNED(ctx->r15) < 0) {
        // 0x800AAB70: nop
    
            goto L_800AAB5C;
    }
    // 0x800AAB70: nop

L_800AAB74:
    // 0x800AAB74: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800AAB78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800AAB7C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x800AAB80: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x800AAB84: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800AAB88: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800AAB8C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800AAB90: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800AAB94: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800AAB98: nop

    // 0x800AAB9C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800AABA0: beql        $t9, $zero, L_800AABF0
    if (ctx->r25 == 0) {
        // 0x800AABA4: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_800AABF0;
    }
    goto skip_1;
    // 0x800AABA4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x800AABA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800AABAC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800AABB0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800AABB4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800AABB8: nop

    // 0x800AABBC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800AABC0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800AABC4: nop

    // 0x800AABC8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800AABCC: bne         $t9, $zero, L_800AABE4
    if (ctx->r25 != 0) {
        // 0x800AABD0: nop
    
            goto L_800AABE4;
    }
    // 0x800AABD0: nop

    // 0x800AABD4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800AABD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AABDC: b           L_800AABFC
    // 0x800AABE0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_800AABFC;
    // 0x800AABE0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_800AABE4:
    // 0x800AABE4: b           L_800AABFC
    // 0x800AABE8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_800AABFC;
    // 0x800AABE8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800AABEC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_800AABF0:
    // 0x800AABF0: nop

    // 0x800AABF4: bltz        $t9, L_800AABE4
    if (SIGNED(ctx->r25) < 0) {
        // 0x800AABF8: nop
    
            goto L_800AABE4;
    }
    // 0x800AABF8: nop

L_800AABFC:
    // 0x800AABFC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800AAC00: sb          $t9, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r25;
    // 0x800AAC04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800AAC08: lwc1        $f16, 0x2C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x800AAC0C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800AAC10: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800AAC14: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800AAC18: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800AAC1C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800AAC20: nop

    // 0x800AAC24: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x800AAC28: beql        $t1, $zero, L_800AAC78
    if (ctx->r9 == 0) {
        // 0x800AAC2C: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_800AAC78;
    }
    goto skip_2;
    // 0x800AAC2C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x800AAC30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800AAC34: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800AAC38: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800AAC3C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800AAC40: nop

    // 0x800AAC44: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800AAC48: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800AAC4C: nop

    // 0x800AAC50: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x800AAC54: bne         $t1, $zero, L_800AAC6C
    if (ctx->r9 != 0) {
        // 0x800AAC58: nop
    
            goto L_800AAC6C;
    }
    // 0x800AAC58: nop

    // 0x800AAC5C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800AAC60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AAC64: b           L_800AAC84
    // 0x800AAC68: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_800AAC84;
    // 0x800AAC68: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_800AAC6C:
    // 0x800AAC6C: b           L_800AAC84
    // 0x800AAC70: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_800AAC84;
    // 0x800AAC70: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800AAC74: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_800AAC78:
    // 0x800AAC78: nop

    // 0x800AAC7C: bltz        $t1, L_800AAC6C
    if (SIGNED(ctx->r9) < 0) {
        // 0x800AAC80: nop
    
            goto L_800AAC6C;
    }
    // 0x800AAC80: nop

L_800AAC84:
    // 0x800AAC84: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800AAC88: sb          $t1, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r9;
    // 0x800AAC8C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800AAC90: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x800AAC94: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800AAC98: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800AAC9C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800AACA0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800AACA4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800AACA8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800AACAC: nop

    // 0x800AACB0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x800AACB4: beql        $t3, $zero, L_800AAD04
    if (ctx->r11 == 0) {
        // 0x800AACB8: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_800AAD04;
    }
    goto skip_3;
    // 0x800AACB8: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x800AACBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AACC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800AACC4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800AACC8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800AACCC: nop

    // 0x800AACD0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800AACD4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800AACD8: nop

    // 0x800AACDC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x800AACE0: bne         $t3, $zero, L_800AACF8
    if (ctx->r11 != 0) {
        // 0x800AACE4: nop
    
            goto L_800AACF8;
    }
    // 0x800AACE4: nop

    // 0x800AACE8: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800AACEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AACF0: b           L_800AAD10
    // 0x800AACF4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_800AAD10;
    // 0x800AACF4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_800AACF8:
    // 0x800AACF8: b           L_800AAD10
    // 0x800AACFC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_800AAD10;
    // 0x800AACFC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800AAD00: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_800AAD04:
    // 0x800AAD04: nop

    // 0x800AAD08: bltz        $t3, L_800AACF8
    if (SIGNED(ctx->r11) < 0) {
        // 0x800AAD0C: nop
    
            goto L_800AACF8;
    }
    // 0x800AAD0C: nop

L_800AAD10:
    // 0x800AAD10: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800AAD14: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AAD18: bne         $a1, $v0, L_800AAAF4
    if (ctx->r5 != ctx->r2) {
        // 0x800AAD1C: sb          $t3, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r11;
            goto L_800AAAF4;
    }
    // 0x800AAD1C: sb          $t3, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r11;
    // 0x800AAD20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AAD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAD28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AAD2C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800AAD30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AAD34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800AAD38: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800AAD3C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800AAD40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AAD44: addiu       $s2, $s2, 0x795C
    ctx->r18 = ADD32(ctx->r18, 0X795C);
    // 0x800AAD48: addiu       $s0, $s0, 0x7938
    ctx->r16 = ADD32(ctx->r16, 0X7938);
    // 0x800AAD4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_800AAD50:
    // 0x800AAD50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800AAD54: jal         0x800EE7F8
    // 0x800AAD58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800AAD58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800AAD5C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800AAD60: bne         $s0, $s2, L_800AAD50
    if (ctx->r16 != ctx->r18) {
        // 0x800AAD64: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800AAD50;
    }
    // 0x800AAD64: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800AAD68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AAD6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AAD70: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800AAD74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800AAD78: jr          $ra
    // 0x800AAD7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AAD7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AAD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAD80: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x800AAD84: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x800AAD88: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800AAD8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AAD90: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AAD94: addu        $v0, $t7, $a0
    ctx->r2 = ADD32(ctx->r15, ctx->r4);
    // 0x800AAD98: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800AAD9C: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x800AADA0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AADA4: addu        $a1, $t9, $a2
    ctx->r5 = ADD32(ctx->r25, ctx->r6);
    // 0x800AADA8: sltu        $at, $a2, $a1
    ctx->r1 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x800AADAC: beq         $at, $zero, L_800AADDC
    if (ctx->r1 == 0) {
        // 0x800AADB0: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_800AADDC;
    }
    // 0x800AADB0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x800AADB4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x800AADB8: lw          $t0, 0x8($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X8);
L_800AADBC:
    // 0x800AADBC: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x800AADC0: sltu        $at, $a2, $a1
    ctx->r1 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x800AADC4: and         $t1, $t0, $v0
    ctx->r9 = ctx->r8 & ctx->r2;
    // 0x800AADC8: beq         $t1, $zero, L_800AADD4
    if (ctx->r9 == 0) {
        // 0x800AADCC: nop
    
            goto L_800AADD4;
    }
    // 0x800AADCC: nop

    // 0x800AADD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800AADD4:
    // 0x800AADD4: bnel        $at, $zero, L_800AADBC
    if (ctx->r1 != 0) {
        // 0x800AADD8: lw          $t0, 0x8($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X8);
            goto L_800AADBC;
    }
    goto skip_0;
    // 0x800AADD8: lw          $t0, 0x8($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X8);
    skip_0:
L_800AADDC:
    // 0x800AADDC: jr          $ra
    // 0x800AADE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800AADE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800AADE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AADE4: jr          $ra
    // 0x800AADE8: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    return;
    // 0x800AADE8: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
;}
RECOMP_FUNC void func_800AADEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AADEC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800AADF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AADF4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800AADF8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800AADFC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x800AAE00: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800AAE04: jal         0x800EFB24
    // 0x800AAE08: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800AAE08: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x800AAE0C: jal         0x800EEFD4
    // 0x800AAE10: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EEFD4(rdram, ctx);
        goto after_1;
    // 0x800AAE10: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x800AAE14: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AAE18: lwc1        $f4, 0x5610($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5610);
    // 0x800AAE1C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800AAE20: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800AAE24: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800AAE28: nop

    // 0x800AAE2C: bc1f        L_800AAE60
    if (!c1cs) {
        // 0x800AAE30: nop
    
            goto L_800AAE60;
    }
    // 0x800AAE30: nop

    // 0x800AAE34: jal         0x800EEB40
    // 0x800AAE38: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800EEB40(rdram, ctx);
        goto after_2;
    // 0x800AAE38: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800AAE3C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800AAE40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800AAE44: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800AAE48: nop

    // 0x800AAE4C: bc1fl       L_800AAEE8
    if (!c1cs) {
        // 0x800AAE50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800AAEE8;
    }
    goto skip_0;
    // 0x800AAE50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800AAE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800AAE58: b           L_800AAEE8
    // 0x800AAE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AAEE8;
    // 0x800AAE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AAE60:
    // 0x800AAE60: jal         0x8002DCA0
    // 0x800AAE64: nop

    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x800AAE64: nop

    after_3:
    // 0x800AAE68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800AAE6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AAE70: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800AAE74: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800AAE78: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800AAE7C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800AAE80: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800AAE84: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800AAE88: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800AAE8C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800AAE90: nop

    // 0x800AAE94: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x800AAE98: nop

    // 0x800AAE9C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800AAEA0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x800AAEA4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x800AAEA8: jal         0x800EFB24
    // 0x800AAEAC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_800EFB24(rdram, ctx);
        goto after_4;
    // 0x800AAEAC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800AAEB0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800AAEB4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800AAEB8: jal         0x800EE97C
    // 0x800AAEBC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800EE97C(rdram, ctx);
        goto after_5;
    // 0x800AAEBC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x800AAEC0: jal         0x800EEFD4
    // 0x800AAEC4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800EEFD4(rdram, ctx);
        goto after_6;
    // 0x800AAEC4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x800AAEC8: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800AAECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800AAED0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800AAED4: nop

    // 0x800AAED8: bc1fl       L_800AAEE8
    if (!c1cs) {
        // 0x800AAEDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800AAEE8;
    }
    goto skip_1;
    // 0x800AAEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800AAEE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800AAEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AAEE8:
    // 0x800AAEE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800AAEEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AAEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAEF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800AAEF8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800AAEFC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800AAF00: mul.s       $f20, $f12, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800AAF04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AAF08: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800AAF0C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x800AAF10: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800AAF14: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800AAF18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AAF1C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800AAF20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800AAF24: jal         0x800AADEC
    // 0x800AAF28: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_800AADEC(rdram, ctx);
        goto after_0;
    // 0x800AAF28: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x800AAF2C: bne         $v0, $zero, L_800AAF3C
    if (ctx->r2 != 0) {
        // 0x800AAF30: lw          $v1, 0x54($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X54);
            goto L_800AAF3C;
    }
    // 0x800AAF30: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x800AAF34: b           L_800AAFD8
    // 0x800AAF38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800AAFD8;
    // 0x800AAF38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800AAF3C:
    // 0x800AAF3C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800AAF40: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800AAF44: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800AAF48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800AAF4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800AAF50: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800AAF54: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800AAF58: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800AAF5C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800AAF60: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800AAF64: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800AAF68: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800AAF6C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800AAF70: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800AAF74: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800AAF78: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800AAF7C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800AAF80: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800AAF84: jal         0x800EFA4C
    // 0x800AAF88: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800AAF88: nop

    after_1:
    // 0x800AAF8C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800AAF90: jal         0x800EEB40
    // 0x800AAF94: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_800EEB40(rdram, ctx);
        goto after_2;
    // 0x800AAF94: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_2:
    // 0x800AAF98: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800AAF9C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800AAFA0: jal         0x800EEB40
    // 0x800AAFA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EEB40(rdram, ctx);
        goto after_3;
    // 0x800AAFA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800AAFA8: add.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x800AAFAC: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800AAFB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800AAFB4: add.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x800AAFB8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800AAFBC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800AAFC0: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x800AAFC4: nop

    // 0x800AAFC8: bc1f        L_800AAFD8
    if (!c1cs) {
        // 0x800AAFCC: nop
    
            goto L_800AAFD8;
    }
    // 0x800AAFCC: nop

    // 0x800AAFD0: b           L_800AAFD8
    // 0x800AAFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800AAFD8;
    // 0x800AAFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800AAFD8:
    // 0x800AAFD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AAFDC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800AAFE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AAFE4: jr          $ra
    // 0x800AAFE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800AAFE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800AAFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAFEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AAFF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800AAFF4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800AAFF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AAFFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800AB000: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x800AB004: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x800AB008: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800AB00C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_800AB010:
    // 0x800AB010: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800AB014: lwc1        $f2, 0x0($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800AB018: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800AB01C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800AB020: nop

    // 0x800AB024: bc1fl       L_800AB054
    if (!c1cs) {
        // 0x800AB028: trunc.w.s   $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
            goto L_800AB054;
    }
    goto skip_0;
    // 0x800AB028: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    skip_0:
    // 0x800AB02C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800AB030: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x800AB034: nop

    // 0x800AB038: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800AB03C: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800AB040: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800AB044: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800AB048: b           L_800AB074
    // 0x800AB04C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_800AB074;
    // 0x800AB04C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800AB050: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
L_800AB054:
    // 0x800AB054: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800AB058: nop

    // 0x800AB05C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800AB060: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800AB064: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800AB068: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800AB06C: nop

    // 0x800AB070: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800AB074:
    // 0x800AB074: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800AB078: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800AB07C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800AB080: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800AB084: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800AB088: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800AB08C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AB090: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AB094: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800AB098: bne         $t2, $a0, L_800AB010
    if (ctx->r10 != ctx->r4) {
        // 0x800AB09C: sw          $t3, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r11;
            goto L_800AB010;
    }
    // 0x800AB09C: sw          $t3, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r11;
    // 0x800AB0A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800AB0A4: jal         0x800EFB24
    // 0x800AB0A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800AB0A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x800AB0AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AB0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AB0B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AB0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB0BC: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x800AB0C0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x800AB0C4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x800AB0C8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x800AB0CC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x800AB0D0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x800AB0D4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x800AB0D8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x800AB0DC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x800AB0E0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x800AB0E4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x800AB0E8: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x800AB0EC: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x800AB0F0: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x800AB0F4: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x800AB0F8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800AB0FC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800AB100: sw          $a0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r4;
    // 0x800AB104: sw          $a1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r5;
    // 0x800AB108: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x800AB10C: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x800AB110: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x800AB114: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x800AB118: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800AB11C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800AB120: bgez        $t7, L_800AB138
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800AB124: cvt.s.w     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800AB138;
    }
    // 0x800AB124: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB128: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800AB12C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AB130: nop

    // 0x800AB134: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
L_800AB138:
    // 0x800AB138: addiu       $t8, $sp, 0x168
    ctx->r24 = ADD32(ctx->r29, 0X168);
    // 0x800AB13C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AB140: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800AB144: addiu       $a2, $sp, 0x180
    ctx->r6 = ADD32(ctx->r29, 0X180);
    // 0x800AB148: jal         0x800AAFEC
    // 0x800AB14C: addiu       $a3, $sp, 0x174
    ctx->r7 = ADD32(ctx->r29, 0X174);
    func_800AAFEC(rdram, ctx);
        goto after_0;
    // 0x800AB14C: addiu       $a3, $sp, 0x174
    ctx->r7 = ADD32(ctx->r29, 0X174);
    after_0:
    // 0x800AB150: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x800AB154: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800AB158: addiu       $a0, $sp, 0x174
    ctx->r4 = ADD32(ctx->r29, 0X174);
    // 0x800AB15C: addiu       $s0, $sp, 0x180
    ctx->r16 = ADD32(ctx->r29, 0X180);
    // 0x800AB160: addiu       $a1, $sp, 0x18C
    ctx->r5 = ADD32(ctx->r29, 0X18C);
L_800AB164:
    // 0x800AB164: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800AB168: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x800AB16C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AB170: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800AB174: nop

    // 0x800AB178: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB17C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x800AB180: nop

    // 0x800AB184: bc1t        L_800AB1B0
    if (c1cs) {
        // 0x800AB188: nop
    
            goto L_800AB1B0;
    }
    // 0x800AB188: nop

    // 0x800AB18C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800AB190: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AB194: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800AB198: nop

    // 0x800AB19C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB1A0: c.le.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl <= ctx->f6.fl;
    // 0x800AB1A4: nop

    // 0x800AB1A8: bc1f        L_800AB1B8
    if (!c1cs) {
        // 0x800AB1AC: nop
    
            goto L_800AB1B8;
    }
    // 0x800AB1AC: nop

L_800AB1B0:
    // 0x800AB1B0: b           L_800AB820
    // 0x800AB1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800AB820;
    // 0x800AB1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800AB1B8:
    // 0x800AB1B8: bne         $v0, $a1, L_800AB164
    if (ctx->r2 != ctx->r5) {
        // 0x800AB1BC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_800AB164;
    }
    // 0x800AB1BC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800AB1C0: addiu       $t2, $sp, 0x190
    ctx->r10 = ADD32(ctx->r29, 0X190);
    // 0x800AB1C4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800AB1C8: lw          $a0, 0x1A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A0);
    // 0x800AB1CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800AB1D0: addiu       $a2, $sp, 0x174
    ctx->r6 = ADD32(ctx->r29, 0X174);
    // 0x800AB1D4: jal         0x800AA7FC
    // 0x800AB1D8: addiu       $a3, $sp, 0x198
    ctx->r7 = ADD32(ctx->r29, 0X198);
    func_800AA7FC(rdram, ctx);
        goto after_1;
    // 0x800AB1D8: addiu       $a3, $sp, 0x198
    ctx->r7 = ADD32(ctx->r29, 0X198);
    after_1:
    // 0x800AB1DC: lw          $v0, 0x198($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X198);
    // 0x800AB1E0: lw          $t3, 0x190($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X190);
    // 0x800AB1E4: addiu       $s7, $sp, 0x114
    ctx->r23 = ADD32(ctx->r29, 0X114);
    // 0x800AB1E8: addiu       $s6, $sp, 0x13C
    ctx->r22 = ADD32(ctx->r29, 0X13C);
    // 0x800AB1EC: sltu        $at, $v0, $t3
    ctx->r1 = ctx->r2 < ctx->r11 ? 1 : 0;
    // 0x800AB1F0: beq         $at, $zero, L_800AB7FC
    if (ctx->r1 == 0) {
        // 0x800AB1F4: sw          $v0, 0x194($sp)
        MEM_W(0X194, ctx->r29) = ctx->r2;
            goto L_800AB7FC;
    }
    // 0x800AB1F4: sw          $v0, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r2;
    // 0x800AB1F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AB1FC: lwc1        $f30, 0x5614($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X5614);
    // 0x800AB200: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800AB204: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800AB208: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AB20C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x800AB210: lwc1        $f24, 0x5618($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5618);
    // 0x800AB214: addiu       $s5, $sp, 0x148
    ctx->r21 = ADD32(ctx->r29, 0X148);
    // 0x800AB218: addiu       $s3, $sp, 0xA8
    ctx->r19 = ADD32(ctx->r29, 0XA8);
    // 0x800AB21C: addiu       $s2, $sp, 0xD4
    ctx->r18 = ADD32(ctx->r29, 0XD4);
L_800AB220:
    // 0x800AB220: lw          $t4, 0x194($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X194);
    // 0x800AB224: lw          $t7, 0x1A0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A0);
    // 0x800AB228: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x800AB22C: lhu         $t9, 0x10($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X10);
    // 0x800AB230: lhu         $t5, 0x0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X0);
    // 0x800AB234: lhu         $t2, 0x2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2);
    // 0x800AB238: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800AB23C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800AB240: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800AB244: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AB248: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800AB24C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AB250: addu        $v0, $t8, $t1
    ctx->r2 = ADD32(ctx->r24, ctx->r9);
    // 0x800AB254: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800AB258: addiu       $s1, $v0, 0x18
    ctx->r17 = ADD32(ctx->r2, 0X18);
    // 0x800AB25C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AB260: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800AB264: sltu        $at, $s1, $t4
    ctx->r1 = ctx->r17 < ctx->r12 ? 1 : 0;
    // 0x800AB268: beq         $at, $zero, L_800AB7E4
    if (ctx->r1 == 0) {
        // 0x800AB26C: sw          $t4, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->r12;
            goto L_800AB7E4;
    }
    // 0x800AB26C: sw          $t4, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r12;
    // 0x800AB270: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
L_800AB274:
    // 0x800AB274: lw          $t6, 0x1B4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B4);
    // 0x800AB278: lw          $v0, 0x1A4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A4);
    // 0x800AB27C: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x800AB280: bne         $t7, $zero, L_800AB7D0
    if (ctx->r15 != 0) {
        // 0x800AB284: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_800AB7D0;
    }
    // 0x800AB284: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800AB288: lhu         $t9, 0x0($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X0);
    // 0x800AB28C: lhu         $t1, 0x2($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X2);
    // 0x800AB290: lhu         $t3, 0x4($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X4);
    // 0x800AB294: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x800AB298: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    // 0x800AB29C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x800AB2A0: lw          $t5, 0x180($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X180);
    // 0x800AB2A4: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x800AB2A8: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x800AB2AC: addu        $a1, $t2, $v0
    ctx->r5 = ADD32(ctx->r10, ctx->r2);
    // 0x800AB2B0: addu        $a2, $t4, $v0
    ctx->r6 = ADD32(ctx->r12, ctx->r2);
    // 0x800AB2B4: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800AB2B8: lh          $a3, 0x0($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X0);
    // 0x800AB2BC: beq         $at, $zero, L_800AB2D8
    if (ctx->r1 == 0) {
        // 0x800AB2C0: lh          $t0, 0x0($a2)
        ctx->r8 = MEM_H(ctx->r6, 0X0);
            goto L_800AB2D8;
    }
    // 0x800AB2C0: lh          $t0, 0x0($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X0);
    // 0x800AB2C4: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800AB2C8: beq         $at, $zero, L_800AB2D8
    if (ctx->r1 == 0) {
        // 0x800AB2CC: slt         $at, $t0, $t5
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_800AB2D8;
    }
    // 0x800AB2CC: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800AB2D0: bnel        $at, $zero, L_800AB7D4
    if (ctx->r1 != 0) {
        // 0x800AB2D4: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_0;
    // 0x800AB2D4: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_0:
L_800AB2D8:
    // 0x800AB2D8: lw          $t6, 0x174($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X174);
    // 0x800AB2DC: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AB2E0: beq         $at, $zero, L_800AB2F8
    if (ctx->r1 == 0) {
        // 0x800AB2E4: slt         $at, $t6, $a3
        ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_800AB2F8;
    }
    // 0x800AB2E4: slt         $at, $t6, $a3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800AB2E8: beq         $at, $zero, L_800AB2F8
    if (ctx->r1 == 0) {
        // 0x800AB2EC: slt         $at, $t6, $t0
        ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_800AB2F8;
    }
    // 0x800AB2EC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800AB2F0: bnel        $at, $zero, L_800AB7D4
    if (ctx->r1 != 0) {
        // 0x800AB2F4: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_1;
    // 0x800AB2F4: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_1:
L_800AB2F8:
    // 0x800AB2F8: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x800AB2FC: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x800AB300: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
    // 0x800AB304: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB308: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800AB30C: lw          $t9, 0x178($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X178);
    // 0x800AB310: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB314: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x800AB318: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB31C: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x800AB320: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x800AB324: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x800AB328: lh          $a3, 0x2($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X2);
    // 0x800AB32C: lh          $t0, 0x2($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X2);
    // 0x800AB330: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800AB334: beq         $at, $zero, L_800AB348
    if (ctx->r1 == 0) {
        // 0x800AB338: slt         $at, $a3, $t7
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r15) ? 1 : 0;
            goto L_800AB348;
    }
    // 0x800AB338: slt         $at, $a3, $t7
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800AB33C: beq         $at, $zero, L_800AB348
    if (ctx->r1 == 0) {
        // 0x800AB340: slt         $at, $t0, $t7
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r15) ? 1 : 0;
            goto L_800AB348;
    }
    // 0x800AB340: slt         $at, $t0, $t7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800AB344: bne         $at, $zero, L_800AB7D0
    if (ctx->r1 != 0) {
        // 0x800AB348: slt         $at, $t9, $v1
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800AB7D0;
    }
L_800AB348:
    // 0x800AB348: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AB34C: beq         $at, $zero, L_800AB364
    if (ctx->r1 == 0) {
        // 0x800AB350: slt         $at, $t9, $a3
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_800AB364;
    }
    // 0x800AB350: slt         $at, $t9, $a3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800AB354: beq         $at, $zero, L_800AB364
    if (ctx->r1 == 0) {
        // 0x800AB358: slt         $at, $t9, $t0
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_800AB364;
    }
    // 0x800AB358: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800AB35C: bnel        $at, $zero, L_800AB7D4
    if (ctx->r1 != 0) {
        // 0x800AB360: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_2;
    // 0x800AB360: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_2:
L_800AB364:
    // 0x800AB364: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800AB368: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x800AB36C: lw          $t8, 0x188($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X188);
    // 0x800AB370: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB374: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800AB378: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x800AB37C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB380: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x800AB384: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB388: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x800AB38C: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x800AB390: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800AB394: lh          $a3, 0x4($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X4);
    // 0x800AB398: lh          $t0, 0x4($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X4);
    // 0x800AB39C: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800AB3A0: beq         $at, $zero, L_800AB3B4
    if (ctx->r1 == 0) {
        // 0x800AB3A4: slt         $at, $a3, $t8
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r24) ? 1 : 0;
            goto L_800AB3B4;
    }
    // 0x800AB3A4: slt         $at, $a3, $t8
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800AB3A8: beq         $at, $zero, L_800AB3B4
    if (ctx->r1 == 0) {
        // 0x800AB3AC: slt         $at, $t0, $t8
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
            goto L_800AB3B4;
    }
    // 0x800AB3AC: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800AB3B0: bne         $at, $zero, L_800AB7D0
    if (ctx->r1 != 0) {
        // 0x800AB3B4: slt         $at, $t1, $v1
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800AB7D0;
    }
L_800AB3B4:
    // 0x800AB3B4: slt         $at, $t1, $v1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AB3B8: beq         $at, $zero, L_800AB3D0
    if (ctx->r1 == 0) {
        // 0x800AB3BC: slt         $at, $t1, $a3
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_800AB3D0;
    }
    // 0x800AB3BC: slt         $at, $t1, $a3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800AB3C0: beq         $at, $zero, L_800AB3D0
    if (ctx->r1 == 0) {
        // 0x800AB3C4: slt         $at, $t1, $t0
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_800AB3D0;
    }
    // 0x800AB3C4: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800AB3C8: bnel        $at, $zero, L_800AB7D4
    if (ctx->r1 != 0) {
        // 0x800AB3CC: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_3;
    // 0x800AB3CC: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_3:
L_800AB3D0:
    // 0x800AB3D0: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x800AB3D4: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x800AB3D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800AB3DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB3E0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800AB3E4: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x800AB3E8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800AB3EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB3F0: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x800AB3F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB3F8: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x800AB3FC: jal         0x800EFB24
    // 0x800AB400: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x800AB400: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x800AB404: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800AB408: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x800AB40C: jal         0x800EFB24
    // 0x800AB410: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x800AB410: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
    // 0x800AB414: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800AB418: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800AB41C: jal         0x800EE97C
    // 0x800AB420: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_800EE97C(rdram, ctx);
        goto after_4;
    // 0x800AB420: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_4:
    // 0x800AB424: jal         0x800F2100
    // 0x800AB428: lwc1        $f12, 0xD4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD4);
    func_800F2100(rdram, ctx);
        goto after_5;
    // 0x800AB428: lwc1        $f12, 0xD4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD4);
    after_5:
    // 0x800AB42C: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x800AB430: nop

    // 0x800AB434: bc1tl       L_800AB470
    if (c1cs) {
        // 0x800AB438: lwc1        $f4, 0xD4($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_800AB470;
    }
    goto skip_4;
    // 0x800AB438: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    skip_4:
    // 0x800AB43C: jal         0x800F2100
    // 0x800AB440: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    func_800F2100(rdram, ctx);
        goto after_6;
    // 0x800AB440: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    after_6:
    // 0x800AB444: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x800AB448: nop

    // 0x800AB44C: bc1tl       L_800AB470
    if (c1cs) {
        // 0x800AB450: lwc1        $f4, 0xD4($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_800AB470;
    }
    goto skip_5;
    // 0x800AB450: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    skip_5:
    // 0x800AB454: jal         0x800F2100
    // 0x800AB458: lwc1        $f12, 0xDC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XDC);
    func_800F2100(rdram, ctx);
        goto after_7;
    // 0x800AB458: lwc1        $f12, 0xDC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XDC);
    after_7:
    // 0x800AB45C: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x800AB460: nop

    // 0x800AB464: bc1fl       L_800AB494
    if (!c1cs) {
        // 0x800AB468: addiu       $a0, $sp, 0x130
        ctx->r4 = ADD32(ctx->r29, 0X130);
            goto L_800AB494;
    }
    goto skip_6;
    // 0x800AB468: addiu       $a0, $sp, 0x130
    ctx->r4 = ADD32(ctx->r29, 0X130);
    skip_6:
    // 0x800AB46C: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
L_800AB470:
    // 0x800AB470: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x800AB474: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800AB478: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x800AB47C: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x800AB480: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    // 0x800AB484: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800AB488: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x800AB48C: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x800AB490: addiu       $a0, $sp, 0x130
    ctx->r4 = ADD32(ctx->r29, 0X130);
L_800AB494:
    // 0x800AB494: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800AB498: jal         0x800EFB24
    // 0x800AB49C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x800AB49C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_8:
    // 0x800AB4A0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x800AB4A4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800AB4A8: jal         0x800EFB24
    // 0x800AB4AC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800EFB24(rdram, ctx);
        goto after_9;
    // 0x800AB4AC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_9:
    // 0x800AB4B0: addiu       $a0, $sp, 0x130
    ctx->r4 = ADD32(ctx->r29, 0X130);
    // 0x800AB4B4: jal         0x800EEAA4
    // 0x800AB4B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_10;
    // 0x800AB4B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
    // 0x800AB4BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800AB4C0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x800AB4C4: jal         0x800EEAA4
    // 0x800AB4C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_11;
    // 0x800AB4C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_11:
    // 0x800AB4CC: c.le.s      $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f26.fl <= ctx->f20.fl;
    // 0x800AB4D0: nop

    // 0x800AB4D4: bc1fl       L_800AB4F0
    if (!c1cs) {
        // 0x800AB4D8: c.le.s      $f20, $f26
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f20.fl <= ctx->f26.fl;
            goto L_800AB4F0;
    }
    goto skip_7;
    // 0x800AB4D8: c.le.s      $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f20.fl <= ctx->f26.fl;
    skip_7:
    // 0x800AB4DC: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x800AB4E0: nop

    // 0x800AB4E4: bc1tl       L_800AB7D4
    if (c1cs) {
        // 0x800AB4E8: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_8;
    // 0x800AB4E8: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_8:
    // 0x800AB4EC: c.le.s      $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f20.fl <= ctx->f26.fl;
L_800AB4F0:
    // 0x800AB4F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800AB4F4: bc1fl       L_800AB510
    if (!c1cs) {
        // 0x800AB4F8: lw          $t2, 0x8($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X8);
            goto L_800AB510;
    }
    goto skip_9;
    // 0x800AB4F8: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    skip_9:
    // 0x800AB4FC: c.le.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl <= ctx->f26.fl;
    // 0x800AB500: nop

    // 0x800AB504: bc1tl       L_800AB7D4
    if (c1cs) {
        // 0x800AB508: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_10;
    // 0x800AB508: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_10:
    // 0x800AB50C: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
L_800AB510:
    // 0x800AB510: sll         $t3, $t2, 15
    ctx->r11 = S32(ctx->r10 << 15);
    // 0x800AB514: bgez        $t3, L_800AB550
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800AB518: nop
    
            goto L_800AB550;
    }
    // 0x800AB518: nop

    // 0x800AB51C: c.lt.s      $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f20.fl < ctx->f26.fl;
    // 0x800AB520: nop

    // 0x800AB524: bc1f        L_800AB550
    if (!c1cs) {
        // 0x800AB528: nop
    
            goto L_800AB550;
    }
    // 0x800AB528: nop

    // 0x800AB52C: lwc1        $f22, 0xD4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x800AB530: lwc1        $f20, 0xD8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x800AB534: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x800AB538: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x800AB53C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x800AB540: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x800AB544: swc1        $f22, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f22.u32l;
    // 0x800AB548: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x800AB54C: swc1        $f18, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f18.u32l;
L_800AB550:
    // 0x800AB550: jal         0x800EEAA4
    // 0x800AB554: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_12;
    // 0x800AB554: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_12:
    // 0x800AB558: neg.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = -ctx->f0.fl;
    // 0x800AB55C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800AB560: jal         0x800EEAA4
    // 0x800AB564: addiu       $a1, $sp, 0x168
    ctx->r5 = ADD32(ctx->r29, 0X168);
    func_800EEAA4(rdram, ctx);
        goto after_13;
    // 0x800AB564: addiu       $a1, $sp, 0x168
    ctx->r5 = ADD32(ctx->r29, 0X168);
    after_13:
    // 0x800AB568: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x800AB56C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800AB570: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800AB574: bc1tl       L_800AB7D4
    if (c1cs) {
        // 0x800AB578: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_11;
    // 0x800AB578: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_11:
    // 0x800AB57C: jal         0x800EEAA4
    // 0x800AB580: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_14;
    // 0x800AB580: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_14:
    // 0x800AB584: add.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x800AB588: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800AB58C: div.s       $f20, $f6, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800AB590: c.le.s      $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f20.fl <= ctx->f26.fl;
    // 0x800AB594: nop

    // 0x800AB598: bc1tl       L_800AB7D4
    if (c1cs) {
        // 0x800AB59C: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_12;
    // 0x800AB59C: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_12:
    // 0x800AB5A0: c.le.s      $f28, $f20
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f28.fl <= ctx->f20.fl;
    // 0x800AB5A4: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    // 0x800AB5A8: bc1tl       L_800AB7D4
    if (c1cs) {
        // 0x800AB5AC: lw          $t1, 0x154($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X154);
            goto L_800AB7D4;
    }
    goto skip_13;
    // 0x800AB5AC: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    skip_13:
    // 0x800AB5B0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800AB5B4: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x800AB5B8: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x800AB5BC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800AB5C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800AB5C4: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800AB5C8: lwc1        $f4, 0x4($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X4);
    // 0x800AB5CC: lwc1        $f8, 0x170($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X170);
    // 0x800AB5D0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800AB5D4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800AB5D8: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800AB5DC: lwc1        $f4, 0x8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X8);
    // 0x800AB5E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800AB5E4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800AB5E8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800AB5EC: jal         0x800EFA4C
    // 0x800AB5F0: nop

    func_800EFA4C(rdram, ctx);
        goto after_15;
    // 0x800AB5F0: nop

    after_15:
    // 0x800AB5F4: jal         0x800F2100
    // 0x800AB5F8: lwc1        $f12, 0xD4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD4);
    func_800F2100(rdram, ctx);
        goto after_16;
    // 0x800AB5F8: lwc1        $f12, 0xD4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD4);
    after_16:
    // 0x800AB5FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800AB600: jal         0x800F2100
    // 0x800AB604: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    func_800F2100(rdram, ctx);
        goto after_17;
    // 0x800AB604: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    after_17:
    // 0x800AB608: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x800AB60C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800AB610: bc1f        L_800AB620
    if (!c1cs) {
        // 0x800AB614: nop
    
            goto L_800AB620;
    }
    // 0x800AB614: nop

    // 0x800AB618: b           L_800AB620
    // 0x800AB61C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_800AB620;
    // 0x800AB61C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800AB620:
    // 0x800AB620: jal         0x800F2100
    // 0x800AB624: lwc1        $f12, 0xDC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XDC);
    func_800F2100(rdram, ctx);
        goto after_18;
    // 0x800AB624: lwc1        $f12, 0xDC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XDC);
    after_18:
    // 0x800AB628: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x800AB62C: addu        $t5, $s2, $t4
    ctx->r13 = ADD32(ctx->r18, ctx->r12);
    // 0x800AB630: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800AB634: jal         0x800F2100
    // 0x800AB638: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_19;
    // 0x800AB638: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_19:
    // 0x800AB63C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x800AB640: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800AB644: bc1fl       L_800AB654
    if (!c1cs) {
        // 0x800AB648: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_800AB654;
    }
    goto skip_14;
    // 0x800AB648: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    skip_14:
    // 0x800AB64C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x800AB650: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_800AB654:
    // 0x800AB654: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800AB658: mfhi        $t6
    ctx->r14 = hi;
    // 0x800AB65C: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x800AB660: addu        $t9, $s7, $v0
    ctx->r25 = ADD32(ctx->r23, ctx->r2);
    // 0x800AB664: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x800AB668: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800AB66C: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800AB670: addu        $t1, $s5, $v0
    ctx->r9 = ADD32(ctx->r21, ctx->r2);
    // 0x800AB674: addu        $t2, $s6, $v0
    ctx->r10 = ADD32(ctx->r22, ctx->r2);
    // 0x800AB678: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800AB67C: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x800AB680: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x800AB684: addiu       $a0, $sp, 0x108
    ctx->r4 = ADD32(ctx->r29, 0X108);
    // 0x800AB688: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800AB68C: jal         0x800EFA4C
    // 0x800AB690: nop

    func_800EFA4C(rdram, ctx);
        goto after_20;
    // 0x800AB690: nop

    after_20:
    // 0x800AB694: addiu       $v0, $s0, 0x2
    ctx->r2 = ADD32(ctx->r16, 0X2);
    // 0x800AB698: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800AB69C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800AB6A0: mfhi        $t3
    ctx->r11 = hi;
    // 0x800AB6A4: sll         $v0, $t3, 2
    ctx->r2 = S32(ctx->r11 << 2);
    // 0x800AB6A8: addu        $t5, $s7, $v0
    ctx->r13 = ADD32(ctx->r23, ctx->r2);
    // 0x800AB6AC: addu        $t6, $s3, $v0
    ctx->r14 = ADD32(ctx->r19, ctx->r2);
    // 0x800AB6B0: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800AB6B4: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800AB6B8: addu        $t7, $s5, $v0
    ctx->r15 = ADD32(ctx->r21, ctx->r2);
    // 0x800AB6BC: addu        $t9, $s6, $v0
    ctx->r25 = ADD32(ctx->r22, ctx->r2);
    // 0x800AB6C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800AB6C4: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x800AB6C8: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x800AB6CC: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x800AB6D0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800AB6D4: jal         0x800EFA4C
    // 0x800AB6D8: nop

    func_800EFA4C(rdram, ctx);
        goto after_21;
    // 0x800AB6D8: nop

    after_21:
    // 0x800AB6DC: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x800AB6E0: lwc1        $f18, 0x10C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x800AB6E4: lwc1        $f16, 0x110($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800AB6E8: lwc1        $f20, 0x100($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X100);
    // 0x800AB6EC: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800AB6F0: lwc1        $f22, 0x108($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800AB6F4: lwc1        $f24, 0xFC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x800AB6F8: mul.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x800AB6FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AB700: mul.s       $f10, $f22, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x800AB704: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800AB708: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x800AB70C: div.s       $f14, $f28, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f28.fl, ctx->f8.fl);
    // 0x800AB710: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800AB714: mul.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800AB718: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    // 0x800AB71C: nop

    // 0x800AB720: bc1t        L_800AB738
    if (c1cs) {
        // 0x800AB724: nop
    
            goto L_800AB738;
    }
    // 0x800AB724: nop

    // 0x800AB728: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
    // 0x800AB72C: nop

    // 0x800AB730: bc1f        L_800AB740
    if (!c1cs) {
        // 0x800AB734: nop
    
            goto L_800AB740;
    }
    // 0x800AB734: nop

L_800AB738:
    // 0x800AB738: b           L_800AB7D0
    // 0x800AB73C: lwc1        $f24, 0x561C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X561C);
        goto L_800AB7D0;
    // 0x800AB73C: lwc1        $f24, 0x561C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X561C);
L_800AB740:
    // 0x800AB740: mul.s       $f8, $f18, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800AB744: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AB748: mul.s       $f10, $f22, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x800AB74C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800AB750: mul.s       $f12, $f4, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x800AB754: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
    // 0x800AB758: nop

    // 0x800AB75C: bc1t        L_800AB790
    if (c1cs) {
        // 0x800AB760: nop
    
            goto L_800AB790;
    }
    // 0x800AB760: nop

    // 0x800AB764: c.lt.s      $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f28.fl < ctx->f12.fl;
    // 0x800AB768: nop

    // 0x800AB76C: bc1t        L_800AB790
    if (c1cs) {
        // 0x800AB770: nop
    
            goto L_800AB790;
    }
    // 0x800AB770: nop

    // 0x800AB774: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800AB778: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800AB77C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800AB780: c.lt.s      $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f28.fl < ctx->f6.fl;
    // 0x800AB784: nop

    // 0x800AB788: bc1f        L_800AB798
    if (!c1cs) {
        // 0x800AB78C: nop
    
            goto L_800AB798;
    }
    // 0x800AB78C: nop

L_800AB790:
    // 0x800AB790: b           L_800AB7D0
    // 0x800AB794: lwc1        $f24, 0x5620($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5620);
        goto L_800AB7D0;
    // 0x800AB794: lwc1        $f24, 0x5620($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5620);
L_800AB798:
    // 0x800AB798: jal         0x800EE7F8
    // 0x800AB79C: sw          $s1, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r17;
    func_800EE7F8(rdram, ctx);
        goto after_22;
    // 0x800AB79C: sw          $s1, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r17;
    after_22:
    // 0x800AB7A0: lw          $a0, 0x1B0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B0);
    // 0x800AB7A4: jal         0x800EE7F8
    // 0x800AB7A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_23;
    // 0x800AB7A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_23:
    // 0x800AB7AC: addiu       $t8, $sp, 0x168
    ctx->r24 = ADD32(ctx->r29, 0X168);
    // 0x800AB7B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AB7B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800AB7B8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800AB7BC: addiu       $a2, $sp, 0x180
    ctx->r6 = ADD32(ctx->r29, 0X180);
    // 0x800AB7C0: jal         0x800AAFEC
    // 0x800AB7C4: addiu       $a3, $sp, 0x174
    ctx->r7 = ADD32(ctx->r29, 0X174);
    func_800AAFEC(rdram, ctx);
        goto after_24;
    // 0x800AB7C4: addiu       $a3, $sp, 0x174
    ctx->r7 = ADD32(ctx->r29, 0X174);
    after_24:
    // 0x800AB7C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800AB7CC: lwc1        $f24, 0x5624($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5624);
L_800AB7D0:
    // 0x800AB7D0: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
L_800AB7D4:
    // 0x800AB7D4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800AB7D8: sltu        $at, $s1, $t1
    ctx->r1 = ctx->r17 < ctx->r9 ? 1 : 0;
    // 0x800AB7DC: bnel        $at, $zero, L_800AB274
    if (ctx->r1 != 0) {
        // 0x800AB7E0: lw          $t5, 0x8($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X8);
            goto L_800AB274;
    }
    goto skip_15;
    // 0x800AB7E0: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    skip_15:
L_800AB7E4:
    // 0x800AB7E4: lw          $t2, 0x194($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X194);
    // 0x800AB7E8: lw          $t4, 0x190($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X190);
    // 0x800AB7EC: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x800AB7F0: sltu        $at, $t3, $t4
    ctx->r1 = ctx->r11 < ctx->r12 ? 1 : 0;
    // 0x800AB7F4: bne         $at, $zero, L_800AB220
    if (ctx->r1 != 0) {
        // 0x800AB7F8: sw          $t3, 0x194($sp)
        MEM_W(0X194, ctx->r29) = ctx->r11;
            goto L_800AB220;
    }
    // 0x800AB7F8: sw          $t3, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r11;
L_800AB7FC:
    // 0x800AB7FC: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x800AB800: beql        $t5, $zero, L_800AB814
    if (ctx->r13 == 0) {
        // 0x800AB804: lw          $a0, 0x160($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X160);
            goto L_800AB814;
    }
    goto skip_16;
    // 0x800AB804: lw          $a0, 0x160($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X160);
    skip_16:
    // 0x800AB808: jal         0x800EF2A0
    // 0x800AB80C: lw          $a0, 0x1B0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B0);
    func_800EF2A0(rdram, ctx);
        goto after_25;
    // 0x800AB80C: lw          $a0, 0x1B0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B0);
    after_25:
    // 0x800AB810: lw          $a0, 0x160($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X160);
L_800AB814:
    // 0x800AB814: jal         0x800AA3B4
    // 0x800AB818: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    func_800AA3B4(rdram, ctx);
        goto after_26;
    // 0x800AB818: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    after_26:
    // 0x800AB81C: lw          $v0, 0x160($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X160);
L_800AB820:
    // 0x800AB820: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x800AB824: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800AB828: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x800AB82C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x800AB830: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x800AB834: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x800AB838: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x800AB83C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800AB840: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x800AB844: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x800AB848: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x800AB84C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x800AB850: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x800AB854: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x800AB858: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x800AB85C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x800AB860: jr          $ra
    // 0x800AB864: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    return;
    // 0x800AB864: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void func_800AB868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB868: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800AB86C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AB870: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800AB874: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800AB878: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800AB87C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800AB880: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800AB884: jal         0x80019CD4
    // 0x800AB888: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_80019CD4(rdram, ctx);
        goto after_0;
    // 0x800AB888: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800AB88C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800AB890: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800AB894: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x800AB898: jal         0x8001980C
    // 0x800AB89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8001980C(rdram, ctx);
        goto after_1;
    // 0x800AB89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800AB8A0: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800AB8A4: jal         0x800193C4
    // 0x800AB8A8: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    func_800193C4(rdram, ctx);
        goto after_2;
    // 0x800AB8A8: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_2:
    // 0x800AB8AC: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x800AB8B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800AB8B4: jal         0x800193C4
    // 0x800AB8B8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_800193C4(rdram, ctx);
        goto after_3;
    // 0x800AB8B8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_3:
    // 0x800AB8BC: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x800AB8C0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x800AB8C4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800AB8C8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800AB8CC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800AB8D0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800AB8D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800AB8D8: jal         0x800AB0BC
    // 0x800AB8DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800AB0BC(rdram, ctx);
        goto after_4;
    // 0x800AB8DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
    // 0x800AB8E0: bne         $v0, $zero, L_800AB8F0
    if (ctx->r2 != 0) {
        // 0x800AB8E4: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_800AB8F0;
    }
    // 0x800AB8E4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800AB8E8: b           L_800AB96C
    // 0x800AB8EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800AB96C;
    // 0x800AB8EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800AB8F0:
    // 0x800AB8F0: jal         0x80019CD4
    // 0x800AB8F4: nop

    func_80019CD4(rdram, ctx);
        goto after_5;
    // 0x800AB8F4: nop

    after_5:
    // 0x800AB8F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800AB8FC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800AB900: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x800AB904: jal         0x80019750
    // 0x800AB908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019750(rdram, ctx);
        goto after_6;
    // 0x800AB908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x800AB90C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x800AB910: jal         0x800193C4
    // 0x800AB914: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800193C4(rdram, ctx);
        goto after_7;
    // 0x800AB914: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x800AB918: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800AB91C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800AB920: addiu       $s1, $s1, 0x795C
    ctx->r17 = ADD32(ctx->r17, 0X795C);
    // 0x800AB924: addiu       $s0, $s0, 0x7938
    ctx->r16 = ADD32(ctx->r16, 0X7938);
    // 0x800AB928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800AB92C:
    // 0x800AB92C: jal         0x80019224
    // 0x800AB930: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019224(rdram, ctx);
        goto after_8;
    // 0x800AB930: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800AB934: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800AB938: bnel        $s0, $s1, L_800AB92C
    if (ctx->r16 != ctx->r17) {
        // 0x800AB93C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800AB92C;
    }
    goto skip_0;
    // 0x800AB93C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800AB940: jal         0x80019CD4
    // 0x800AB944: nop

    func_80019CD4(rdram, ctx);
        goto after_9;
    // 0x800AB944: nop

    after_9:
    // 0x800AB948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800AB94C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800AB950: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800AB954: jal         0x80019750
    // 0x800AB958: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019750(rdram, ctx);
        goto after_10;
    // 0x800AB958: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x800AB95C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800AB960: jal         0x80019224
    // 0x800AB964: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80019224(rdram, ctx);
        goto after_11;
    // 0x800AB964: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_11:
    // 0x800AB968: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_800AB96C:
    // 0x800AB96C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AB970: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB974: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800AB978: jr          $ra
    // 0x800AB97C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800AB97C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800AB980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AB984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AB988: jal         0x8001ACCC
    // 0x800AB98C: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800AB98C: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    after_0:
    // 0x800AB990: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800AB994: addiu       $v1, $v1, 0x798C
    ctx->r3 = ADD32(ctx->r3, 0X798C);
    // 0x800AB998: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800AB99C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800AB9A0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800AB9A4: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x800AB9A8: lui         $t0, 0x4000
    ctx->r8 = S32(0X4000 << 16);
    // 0x800AB9AC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x800AB9B0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800AB9B4: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x800AB9B8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800AB9BC: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
    // 0x800AB9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AB9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AB9C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800AB9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB9D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AB9D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800AB9D8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800AB9DC: lw          $s0, 0x798C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X798C);
    // 0x800AB9E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB9E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800AB9E8: beql        $s0, $zero, L_800ABA08
    if (ctx->r16 == 0) {
        // 0x800AB9EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800ABA08;
    }
    goto skip_0;
    // 0x800AB9EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_800AB9F0:
    // 0x800AB9F0: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x800AB9F4: jal         0x8001B084
    // 0x800AB9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800AB9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800AB9FC: bne         $s1, $zero, L_800AB9F0
    if (ctx->r17 != 0) {
        // 0x800ABA00: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800AB9F0;
    }
    // 0x800ABA00: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800ABA04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800ABA08:
    // 0x800ABA08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800ABA0C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800ABA10: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800ABA14: sw          $zero, 0x798C($at)
    MEM_W(0X798C, ctx->r1) = 0;
    // 0x800ABA18: jr          $ra
    // 0x800ABA1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800ABA1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800ABA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABA20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800ABA24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800ABA28: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800ABA2C: lw          $s0, 0x798C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X798C);
    // 0x800ABA30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ABA34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800ABA38: beq         $s0, $zero, L_800ABA88
    if (ctx->r16 == 0) {
        // 0x800ABA3C: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_800ABA88;
    }
    // 0x800ABA3C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_800ABA40:
    // 0x800ABA40: jal         0x8001BAFC
    // 0x800ABA44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    defrag(rdram, ctx);
        goto after_0;
    // 0x800ABA44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800ABA48: beql        $v0, $s1, L_800ABA80
    if (ctx->r2 == ctx->r17) {
        // 0x800ABA4C: lw          $s0, 0x4($v0)
        ctx->r16 = MEM_W(ctx->r2, 0X4);
            goto L_800ABA80;
    }
    goto skip_0;
    // 0x800ABA4C: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x800ABA50: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800ABA54: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800ABA58: beq         $v1, $zero, L_800ABA68
    if (ctx->r3 == 0) {
        // 0x800ABA5C: nop
    
            goto L_800ABA68;
    }
    // 0x800ABA5C: nop

    // 0x800ABA60: b           L_800ABA6C
    // 0x800ABA64: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_800ABA6C;
    // 0x800ABA64: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800ABA68:
    // 0x800ABA68: sw          $v0, 0x798C($at)
    MEM_W(0X798C, ctx->r1) = ctx->r2;
L_800ABA6C:
    // 0x800ABA6C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x800ABA70: beql        $v1, $zero, L_800ABA80
    if (ctx->r3 == 0) {
        // 0x800ABA74: lw          $s0, 0x4($v0)
        ctx->r16 = MEM_W(ctx->r2, 0X4);
            goto L_800ABA80;
    }
    goto skip_1;
    // 0x800ABA74: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x800ABA78: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800ABA7C: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
L_800ABA80:
    // 0x800ABA80: bnel        $s0, $zero, L_800ABA40
    if (ctx->r16 != 0) {
        // 0x800ABA84: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_800ABA40;
    }
    goto skip_2;
    // 0x800ABA84: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    skip_2:
L_800ABA88:
    // 0x800ABA88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ABA8C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800ABA90: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800ABA94: jr          $ra
    // 0x800ABA98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800ABA98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
