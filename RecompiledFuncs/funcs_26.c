#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800B7F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B7F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B7F1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B7F20: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800B7F24: addiu       $t8, $t8, -0x59D0
    ctx->r24 = ADD32(ctx->r24, -0X59D0);
    // 0x800B7F28: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800B7F2C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B7F30: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800B7F34: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800B7F38: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800B7F3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B7F40: lui         $t1, 0xE300
    ctx->r9 = S32(0XE300 << 16);
    // 0x800B7F44: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800B7F48: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800B7F4C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800B7F50: ori         $t1, $t1, 0x1201
    ctx->r9 = ctx->r9 | 0X1201;
    // 0x800B7F54: addiu       $t0, $t0, -0x7D40
    ctx->r8 = ADD32(ctx->r8, -0X7D40);
    // 0x800B7F58: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800B7F5C: lbu         $t2, 0x6($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X6);
    // 0x800B7F60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B7F64: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x800B7F68: bne         $t2, $at, L_800B7F78
    if (ctx->r10 != ctx->r1) {
        // 0x800B7F6C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800B7F78;
    }
    // 0x800B7F6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800B7F70: b           L_800B7F7C
    // 0x800B7F74: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
        goto L_800B7F7C;
    // 0x800B7F74: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_800B7F78:
    // 0x800B7F78: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
L_800B7F7C:
    // 0x800B7F7C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B7F80: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x800B7F84: lui         $t9, 0xFF2F
    ctx->r25 = S32(0XFF2F << 16);
    // 0x800B7F88: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800B7F8C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B7F90: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800B7F94: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x800B7F98: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x800B7F9C: lbu         $t5, 0x2($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X2);
    // 0x800B7FA0: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x800B7FA4: lbu         $t1, 0x3($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X3);
    // 0x800B7FA8: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x800B7FAC: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x800B7FB0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800B7FB4: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x800B7FB8: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x800B7FBC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800B7FC0: lbu         $t2, 0x9($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X9);
    // 0x800B7FC4: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x800B7FC8: ori         $t5, $t5, 0xA01
    ctx->r13 = ctx->r13 | 0XA01;
    // 0x800B7FCC: beq         $t2, $zero, L_800B8054
    if (ctx->r10 == 0) {
        // 0x800B7FD0: lui         $t6, 0xFC11
        ctx->r14 = S32(0XFC11 << 16);
            goto L_800B8054;
    }
    // 0x800B7FD0: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x800B7FD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B7FD8: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x800B7FDC: ori         $t5, $t5, 0xA01
    ctx->r13 = ctx->r13 | 0XA01;
    // 0x800B7FE0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800B7FE4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B7FE8: lui         $t3, 0x10
    ctx->r11 = S32(0X10 << 16);
    // 0x800B7FEC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x800B7FF0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800B7FF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B7FF8: lui         $t9, 0xFC11
    ctx->r25 = S32(0XFC11 << 16);
    // 0x800B7FFC: lui         $t7, 0xFF0F
    ctx->r15 = S32(0XFF0F << 16);
    // 0x800B8000: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800B8004: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B8008: ori         $t7, $t7, 0xF3FF
    ctx->r15 = ctx->r15 | 0XF3FF;
    // 0x800B800C: ori         $t9, $t9, 0x7E03
    ctx->r25 = ctx->r25 | 0X7E03;
    // 0x800B8010: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800B8014: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800B8018: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B801C: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x800B8020: lui         $t2, 0xC18
    ctx->r10 = S32(0XC18 << 16);
    // 0x800B8024: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x800B8028: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800B802C: ori         $t2, $t2, 0x4A40
    ctx->r10 = ctx->r10 | 0X4A40;
    // 0x800B8030: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x800B8034: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800B8038: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800B803C: lbu         $a1, 0x9($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X9);
    // 0x800B8040: jal         0x800B7EA0
    // 0x800B8044: addiu       $a1, $a1, 0xC24
    ctx->r5 = ADD32(ctx->r5, 0XC24);
    func_800B7EA0(rdram, ctx);
        goto after_0;
    // 0x800B8044: addiu       $a1, $a1, 0xC24
    ctx->r5 = ADD32(ctx->r5, 0XC24);
    after_0:
    // 0x800B8048: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800B804C: b           L_800B80A8
    // 0x800B8050: addiu       $t0, $t0, -0x7D40
    ctx->r8 = ADD32(ctx->r8, -0X7D40);
        goto L_800B80A8;
    // 0x800B8050: addiu       $t0, $t0, -0x7D40
    ctx->r8 = ADD32(ctx->r8, -0X7D40);
L_800B8054:
    // 0x800B8054: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B8058: ori         $t6, $t6, 0x9623
    ctx->r14 = ctx->r14 | 0X9623;
    // 0x800B805C: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x800B8060: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800B8064: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B8068: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B806C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800B8070: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B8074: lui         $t1, 0xE200
    ctx->r9 = S32(0XE200 << 16);
    // 0x800B8078: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x800B807C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800B8080: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800B8084: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800B8088: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800B808C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B8090: ori         $t8, $t8, 0x4A40
    ctx->r24 = ctx->r24 | 0X4A40;
    // 0x800B8094: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x800B8098: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800B809C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800B80A0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800B80A4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_800B80A8:
    // 0x800B80A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B80AC: sb          $t2, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r10;
    // 0x800B80B0: jal         0x800D3724
    // 0x800B80B4: lbu         $a0, 0x6($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X6);
    func_800D3724(rdram, ctx);
        goto after_1;
    // 0x800B80B4: lbu         $a0, 0x6($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X6);
    after_1:
    // 0x800B80B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B80BC: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800B80C0: addiu       $t0, $t0, -0x7D40
    ctx->r8 = ADD32(ctx->r8, -0X7D40);
    // 0x800B80C4: sb          $v0, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r2;
    // 0x800B80C8: jr          $ra
    // 0x800B80CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800B80CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800B80D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B80D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800B80D4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800B80D8: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x800B80DC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800B80E0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B80E4: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    // 0x800B80E8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800B80EC: lbu         $t2, 0x1($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X1);
    // 0x800B80F0: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x800B80F4: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x800B80F8: lbu         $t1, 0x3($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X3);
    // 0x800B80FC: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x800B8100: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x800B8104: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x800B8108: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800B810C: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800B8110: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x800B8114: jr          $ra
    // 0x800B8118: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    return;
    // 0x800B8118: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_800B811C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B811C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800B8120: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800B8124: addiu       $t8, $t8, -0x5998
    ctx->r24 = ADD32(ctx->r24, -0X5998);
    // 0x800B8128: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800B812C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B8130: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800B8134: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8138: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800B813C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800B8140: jr          $ra
    // 0x800B8144: sb          $zero, -0x7D3B($at)
    MEM_B(-0X7D3B, ctx->r1) = 0;
    return;
    // 0x800B8144: sb          $zero, -0x7D3B($at)
    MEM_B(-0X7D3B, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800B8148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B814C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800B8150: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800B8154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8158: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800B815C: lbu         $a0, -0x7D3A($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7D3A);
    // 0x800B8160: jal         0x800D35D0
    // 0x800B8164: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    func_800D35D0(rdram, ctx);
        goto after_0;
    // 0x800B8164: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    after_0:
    // 0x800B8168: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B816C: bne         $v0, $at, L_800B817C
    if (ctx->r2 != ctx->r1) {
        // 0x800B8170: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_800B817C;
    }
    // 0x800B8170: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800B8174: b           L_800B81BC
    // 0x800B8178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800B81BC;
    // 0x800B8178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800B817C:
    // 0x800B817C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800B8180: jal         0x800D3524
    // 0x800B8184: lbu         $a0, -0x7D3A($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7D3A);
    func_800D3524(rdram, ctx);
        goto after_1;
    // 0x800B8184: lbu         $a0, -0x7D3A($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7D3A);
    after_1:
    // 0x800B8188: bne         $v0, $zero, L_800B8198
    if (ctx->r2 != 0) {
        // 0x800B818C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800B8198;
    }
    // 0x800B818C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800B8190: b           L_800B81BC
    // 0x800B8194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800B81BC;
    // 0x800B8194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800B8198:
    // 0x800B8198: jal         0x800B0D58
    // 0x800B819C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800B0D58(rdram, ctx);
        goto after_2;
    // 0x800B819C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x800B81A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800B81A4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B81A8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800B81AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B81B0: sw          $v0, -0x7D30($at)
    MEM_W(-0X7D30, ctx->r1) = ctx->r2;
    // 0x800B81B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800B81B8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_800B81BC:
    // 0x800B81BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B81C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B81C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B81CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B81CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B81D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B81D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800B81D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800B81DC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800B81E0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800B81E4: jal         0x800B8148
    // 0x800B81E8: addiu       $a0, $sp, 0x47
    ctx->r4 = ADD32(ctx->r29, 0X47);
    func_800B8148(rdram, ctx);
        goto after_0;
    // 0x800B81E8: addiu       $a0, $sp, 0x47
    ctx->r4 = ADD32(ctx->r29, 0X47);
    after_0:
    // 0x800B81EC: bne         $v0, $zero, L_800B81FC
    if (ctx->r2 != 0) {
        // 0x800B81F0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800B81FC;
    }
    // 0x800B81F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800B81F4: b           L_800B8C40
    // 0x800B81F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800B8C40;
    // 0x800B81F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800B81FC:
    // 0x800B81FC: lbu         $a1, 0x47($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X47);
    // 0x800B8200: jal         0x800B0D6C
    // 0x800B8204: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_800B0D6C(rdram, ctx);
        goto after_1;
    // 0x800B8204: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x800B8208: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B820C: jal         0x800B0D60
    // 0x800B8210: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_800B0D60(rdram, ctx);
        goto after_2;
    // 0x800B8210: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x800B8214: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800B8218: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800B821C: addiu       $t2, $t2, -0x7D40
    ctx->r10 = ADD32(ctx->r10, -0X7D40);
    // 0x800B8220: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x800B8224: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800B8228: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x800B822C: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x800B8230: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x800B8234: bne         $a0, $at, L_800B8380
    if (ctx->r4 != ctx->r1) {
        // 0x800B8238: addu        $t0, $v0, $t6
        ctx->r8 = ADD32(ctx->r2, ctx->r14);
            goto L_800B8380;
    }
    // 0x800B8238: addu        $t0, $v0, $t6
    ctx->r8 = ADD32(ctx->r2, ctx->r14);
    // 0x800B823C: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x800B8240: lui         $at, 0xFD18
    ctx->r1 = S32(0XFD18 << 16);
    // 0x800B8244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B8248: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800B824C: andi        $t3, $t9, 0xFFF
    ctx->r11 = ctx->r25 & 0XFFF;
    // 0x800B8250: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x800B8254: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B8258: addu        $t5, $t0, $at
    ctx->r13 = ADD32(ctx->r8, ctx->r1);
    // 0x800B825C: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800B8260: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800B8264: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8268: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B826C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B8270: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800B8274: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x800B8278: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x800B827C: andi        $t3, $t9, 0x1FF
    ctx->r11 = ctx->r25 & 0X1FF;
    // 0x800B8280: lui         $t1, 0xF518
    ctx->r9 = S32(0XF518 << 16);
    // 0x800B8284: sll         $t4, $t3, 9
    ctx->r12 = S32(ctx->r11 << 9);
    // 0x800B8288: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x800B828C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8290: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x800B8294: or          $t5, $t4, $t1
    ctx->r13 = ctx->r12 | ctx->r9;
    // 0x800B8298: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B829C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800B82A0: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x800B82A4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B82A8: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x800B82AC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800B82B0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800B82B4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800B82B8: lui         $t8, 0xF400
    ctx->r24 = S32(0XF400 << 16);
    // 0x800B82BC: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x800B82C0: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x800B82C4: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B82C8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800B82CC: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x800B82D0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B82D4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800B82D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B82DC: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x800B82E0: andi        $t3, $t9, 0xFFF
    ctx->r11 = ctx->r25 & 0XFFF;
    // 0x800B82E4: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x800B82E8: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x800B82EC: or          $t5, $t6, $t4
    ctx->r13 = ctx->r14 | ctx->r12;
    // 0x800B82F0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B82F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B82F8: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x800B82FC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x800B8300: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800B8304: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B8308: lbu         $t8, 0x2($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2);
    // 0x800B830C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8310: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B8314: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800B8318: addiu       $t3, $t9, 0x7
    ctx->r11 = ADD32(ctx->r25, 0X7);
    // 0x800B831C: sra         $t6, $t3, 3
    ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
    // 0x800B8320: andi        $t4, $t6, 0x1FF
    ctx->r12 = ctx->r14 & 0X1FF;
    // 0x800B8324: sll         $t5, $t4, 9
    ctx->r13 = S32(ctx->r12 << 9);
    // 0x800B8328: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x800B832C: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800B8330: or          $t7, $t5, $t1
    ctx->r15 = ctx->r13 | ctx->r9;
    // 0x800B8334: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8338: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800B833C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800B8340: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B8344: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x800B8348: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800B834C: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8350: lbu         $t3, 0x3($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X3);
    // 0x800B8354: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8358: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800B835C: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x800B8360: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800B8364: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B8368: andi        $t3, $t9, 0xFFF
    ctx->r11 = ctx->r25 & 0XFFF;
    // 0x800B836C: sll         $t6, $t3, 12
    ctx->r14 = S32(ctx->r11 << 12);
    // 0x800B8370: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x800B8374: or          $t4, $t5, $t6
    ctx->r12 = ctx->r13 | ctx->r14;
    // 0x800B8378: b           L_800B88B0
    // 0x800B837C: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
        goto L_800B88B0;
    // 0x800B837C: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
L_800B8380:
    // 0x800B8380: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x800B8384: bne         $a0, $at, L_800B84CC
    if (ctx->r4 != ctx->r1) {
        // 0x800B8388: lui         $t1, 0xF570
        ctx->r9 = S32(0XF570 << 16);
            goto L_800B84CC;
    }
    // 0x800B8388: lui         $t1, 0xF570
    ctx->r9 = S32(0XF570 << 16);
    // 0x800B838C: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x800B8390: lui         $at, 0xFD70
    ctx->r1 = S32(0XFD70 << 16);
    // 0x800B8394: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B8398: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800B839C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800B83A0: or          $t3, $t9, $at
    ctx->r11 = ctx->r25 | ctx->r1;
    // 0x800B83A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B83A8: addu        $t5, $t0, $at
    ctx->r13 = ADD32(ctx->r8, ctx->r1);
    // 0x800B83AC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800B83B0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800B83B4: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x800B83B8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B83BC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B83C0: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x800B83C4: addiu       $t7, $t4, 0x7
    ctx->r15 = ADD32(ctx->r12, 0X7);
    // 0x800B83C8: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x800B83CC: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x800B83D0: sll         $t3, $t9, 9
    ctx->r11 = S32(ctx->r25 << 9);
    // 0x800B83D4: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x800B83D8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B83DC: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x800B83E0: or          $t5, $t3, $t1
    ctx->r13 = ctx->r11 | ctx->r9;
    // 0x800B83E4: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B83E8: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800B83EC: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x800B83F0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B83F4: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x800B83F8: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x800B83FC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800B8400: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800B8404: lui         $t7, 0xF400
    ctx->r15 = S32(0XF400 << 16);
    // 0x800B8408: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x800B840C: lbu         $t8, 0x3($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X3);
    // 0x800B8410: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8414: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800B8418: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800B841C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x800B8420: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B8424: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B8428: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x800B842C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800B8430: sll         $t3, $t9, 12
    ctx->r11 = S32(ctx->r25 << 12);
    // 0x800B8434: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x800B8438: or          $t5, $t6, $t3
    ctx->r13 = ctx->r14 | ctx->r11;
    // 0x800B843C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8440: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B8444: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x800B8448: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x800B844C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800B8450: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B8454: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8458: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B845C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B8460: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800B8464: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x800B8468: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800B846C: andi        $t3, $t6, 0x1FF
    ctx->r11 = ctx->r14 & 0X1FF;
    // 0x800B8470: sll         $t5, $t3, 9
    ctx->r13 = S32(ctx->r11 << 9);
    // 0x800B8474: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x800B8478: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x800B847C: or          $t4, $t5, $t1
    ctx->r12 = ctx->r13 | ctx->r9;
    // 0x800B8480: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8484: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B8488: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800B848C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B8490: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x800B8494: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800B8498: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x800B849C: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x800B84A0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B84A4: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B84A8: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800B84AC: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x800B84B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B84B4: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800B84B8: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x800B84BC: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x800B84C0: or          $t3, $t5, $t6
    ctx->r11 = ctx->r13 | ctx->r14;
    // 0x800B84C4: b           L_800B88B0
    // 0x800B84C8: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
        goto L_800B88B0;
    // 0x800B84C8: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
L_800B84CC:
    // 0x800B84CC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x800B84D0: bne         $a0, $at, L_800B8610
    if (ctx->r4 != ctx->r1) {
        // 0x800B84D4: lui         $t1, 0xF568
        ctx->r9 = S32(0XF568 << 16);
            goto L_800B8610;
    }
    // 0x800B84D4: lui         $t1, 0xF568
    ctx->r9 = S32(0XF568 << 16);
    // 0x800B84D8: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x800B84DC: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x800B84E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B84E4: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B84E8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800B84EC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x800B84F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B84F4: addu        $t5, $t0, $at
    ctx->r13 = ADD32(ctx->r8, ctx->r1);
    // 0x800B84F8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800B84FC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800B8500: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8504: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8508: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B850C: addiu       $t3, $t6, 0x7
    ctx->r11 = ADD32(ctx->r14, 0X7);
    // 0x800B8510: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x800B8514: andi        $t7, $t4, 0x1FF
    ctx->r15 = ctx->r12 & 0X1FF;
    // 0x800B8518: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x800B851C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8520: lui         $t5, 0x708
    ctx->r13 = S32(0X708 << 16);
    // 0x800B8524: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x800B8528: or          $t9, $t8, $t1
    ctx->r25 = ctx->r24 | ctx->r9;
    // 0x800B852C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B8530: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800B8534: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x800B8538: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B853C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x800B8540: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x800B8544: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800B8548: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800B854C: lui         $t3, 0xF400
    ctx->r11 = S32(0XF400 << 16);
    // 0x800B8550: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x800B8554: lbu         $t4, 0x3($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X3);
    // 0x800B8558: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x800B855C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800B8560: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B8564: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B8568: addiu       $t3, $t6, -0x1
    ctx->r11 = ADD32(ctx->r14, -0X1);
    // 0x800B856C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B8570: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800B8574: andi        $t7, $t4, 0xFFF
    ctx->r15 = ctx->r12 & 0XFFF;
    // 0x800B8578: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800B857C: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x800B8580: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x800B8584: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8588: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B858C: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x800B8590: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800B8594: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800B8598: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B859C: lbu         $t3, 0x2($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X2);
    // 0x800B85A0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B85A4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B85A8: addiu       $t4, $t3, 0x7
    ctx->r12 = ADD32(ctx->r11, 0X7);
    // 0x800B85AC: sra         $t7, $t4, 3
    ctx->r15 = S32(SIGNED(ctx->r12) >> 3);
    // 0x800B85B0: andi        $t5, $t7, 0x1FF
    ctx->r13 = ctx->r15 & 0X1FF;
    // 0x800B85B4: sll         $t8, $t5, 9
    ctx->r24 = S32(ctx->r13 << 9);
    // 0x800B85B8: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x800B85BC: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x800B85C0: or          $t9, $t8, $t1
    ctx->r25 = ctx->r24 | ctx->r9;
    // 0x800B85C4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B85C8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800B85CC: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x800B85D0: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B85D4: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x800B85D8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x800B85DC: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x800B85E0: lbu         $t4, 0x3($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X3);
    // 0x800B85E4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B85E8: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800B85EC: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B85F0: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800B85F4: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x800B85F8: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x800B85FC: sll         $t7, $t4, 12
    ctx->r15 = S32(ctx->r12 << 12);
    // 0x800B8600: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x800B8604: or          $t5, $t8, $t7
    ctx->r13 = ctx->r24 | ctx->r15;
    // 0x800B8608: b           L_800B88B0
    // 0x800B860C: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
        goto L_800B88B0;
    // 0x800B860C: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
L_800B8610:
    // 0x800B8610: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x800B8614: bne         $a0, $at, L_800B8754
    if (ctx->r4 != ctx->r1) {
        // 0x800B8618: lui         $t1, 0xF588
        ctx->r9 = S32(0XF588 << 16);
            goto L_800B8754;
    }
    // 0x800B8618: lui         $t1, 0xF588
    ctx->r9 = S32(0XF588 << 16);
    // 0x800B861C: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x800B8620: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x800B8624: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B8628: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800B862C: andi        $t3, $t6, 0xFFF
    ctx->r11 = ctx->r14 & 0XFFF;
    // 0x800B8630: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x800B8634: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B8638: addu        $t8, $t0, $at
    ctx->r24 = ADD32(ctx->r8, ctx->r1);
    // 0x800B863C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800B8640: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800B8644: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8648: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B864C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B8650: addiu       $t5, $t7, 0x7
    ctx->r13 = ADD32(ctx->r15, 0X7);
    // 0x800B8654: sra         $t9, $t5, 3
    ctx->r25 = S32(SIGNED(ctx->r13) >> 3);
    // 0x800B8658: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x800B865C: sll         $t3, $t6, 9
    ctx->r11 = S32(ctx->r14 << 9);
    // 0x800B8660: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8664: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x800B8668: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800B866C: or          $t4, $t3, $t1
    ctx->r12 = ctx->r11 | ctx->r9;
    // 0x800B8670: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B8674: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B8678: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800B867C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8680: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x800B8684: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800B8688: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800B868C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800B8690: lui         $t5, 0xF400
    ctx->r13 = S32(0XF400 << 16);
    // 0x800B8694: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x800B8698: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x800B869C: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B86A0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800B86A4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800B86A8: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x800B86AC: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x800B86B0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800B86B4: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x800B86B8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800B86BC: sll         $t3, $t6, 12
    ctx->r11 = S32(ctx->r14 << 12);
    // 0x800B86C0: or          $t8, $t4, $at
    ctx->r24 = ctx->r12 | ctx->r1;
    // 0x800B86C4: or          $t4, $t8, $t3
    ctx->r12 = ctx->r24 | ctx->r11;
    // 0x800B86C8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B86CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B86D0: sw          $t4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r12;
    // 0x800B86D4: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x800B86D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800B86DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B86E0: lbu         $t5, 0x2($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2);
    // 0x800B86E4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B86E8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B86EC: addiu       $t9, $t5, 0x7
    ctx->r25 = ADD32(ctx->r13, 0X7);
    // 0x800B86F0: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800B86F4: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x800B86F8: sll         $t3, $t8, 9
    ctx->r11 = S32(ctx->r24 << 9);
    // 0x800B86FC: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x800B8700: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x800B8704: or          $t4, $t3, $t1
    ctx->r12 = ctx->r11 | ctx->r9;
    // 0x800B8708: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B870C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B8710: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800B8714: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B8718: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x800B871C: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x800B8720: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8724: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x800B8728: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B872C: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B8730: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800B8734: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800B8738: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800B873C: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x800B8740: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x800B8744: andi        $t3, $t8, 0xFFF
    ctx->r11 = ctx->r24 & 0XFFF;
    // 0x800B8748: or          $t8, $t3, $t6
    ctx->r24 = ctx->r11 | ctx->r14;
    // 0x800B874C: b           L_800B88B0
    // 0x800B8750: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
        goto L_800B88B0;
    // 0x800B8750: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
L_800B8754:
    // 0x800B8754: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x800B8758: bne         $a0, $at, L_800B88A8
    if (ctx->r4 != ctx->r1) {
        // 0x800B875C: lui         $t1, 0xF588
        ctx->r9 = S32(0XF588 << 16);
            goto L_800B88A8;
    }
    // 0x800B875C: lui         $t1, 0xF588
    ctx->r9 = S32(0XF588 << 16);
    // 0x800B8760: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x800B8764: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x800B8768: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B876C: sra         $t7, $t4, 1
    ctx->r15 = S32(SIGNED(ctx->r12) >> 1);
    // 0x800B8770: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x800B8774: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x800B8778: or          $t3, $t9, $at
    ctx->r11 = ctx->r25 | ctx->r1;
    // 0x800B877C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B8780: addu        $t6, $t0, $at
    ctx->r14 = ADD32(ctx->r8, ctx->r1);
    // 0x800B8784: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800B8788: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800B878C: lbu         $t8, 0x2($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8790: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8794: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B8798: sra         $t4, $t8, 1
    ctx->r12 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800B879C: addiu       $t7, $t4, 0x7
    ctx->r15 = ADD32(ctx->r12, 0X7);
    // 0x800B87A0: sra         $t5, $t7, 3
    ctx->r13 = S32(SIGNED(ctx->r15) >> 3);
    // 0x800B87A4: andi        $t9, $t5, 0x1FF
    ctx->r25 = ctx->r13 & 0X1FF;
    // 0x800B87A8: sll         $t3, $t9, 9
    ctx->r11 = S32(ctx->r25 << 9);
    // 0x800B87AC: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x800B87B0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B87B4: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800B87B8: or          $t6, $t3, $t1
    ctx->r14 = ctx->r11 | ctx->r9;
    // 0x800B87BC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B87C0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B87C4: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800B87C8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B87CC: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x800B87D0: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x800B87D4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800B87D8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800B87DC: lui         $t7, 0xF400
    ctx->r15 = S32(0XF400 << 16);
    // 0x800B87E0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x800B87E4: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x800B87E8: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x800B87EC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800B87F0: addiu       $t9, $t5, -0x1
    ctx->r25 = ADD32(ctx->r13, -0X1);
    // 0x800B87F4: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x800B87F8: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B87FC: sll         $t5, $t7, 1
    ctx->r13 = S32(ctx->r15 << 1);
    // 0x800B8800: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x800B8804: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x800B8808: sll         $t3, $t9, 12
    ctx->r11 = S32(ctx->r25 << 12);
    // 0x800B880C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x800B8810: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x800B8814: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8818: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B881C: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x800B8820: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x800B8824: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800B8828: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B882C: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8830: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8834: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800B8838: sra         $t5, $t7, 1
    ctx->r13 = S32(SIGNED(ctx->r15) >> 1);
    // 0x800B883C: addiu       $t9, $t5, 0x7
    ctx->r25 = ADD32(ctx->r13, 0X7);
    // 0x800B8840: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800B8844: andi        $t3, $t8, 0x1FF
    ctx->r11 = ctx->r24 & 0X1FF;
    // 0x800B8848: sll         $t6, $t3, 9
    ctx->r14 = S32(ctx->r11 << 9);
    // 0x800B884C: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x800B8850: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x800B8854: or          $t4, $t6, $at
    ctx->r12 = ctx->r14 | ctx->r1;
    // 0x800B8858: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x800B885C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8860: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800B8864: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B8868: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x800B886C: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x800B8870: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x800B8874: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x800B8878: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x800B887C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8880: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x800B8884: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x800B8888: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x800B888C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800B8890: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x800B8894: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x800B8898: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x800B889C: or          $t3, $t6, $t8
    ctx->r11 = ctx->r14 | ctx->r24;
    // 0x800B88A0: b           L_800B88B0
    // 0x800B88A4: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
        goto L_800B88B0;
    // 0x800B88A4: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
L_800B88A8:
    // 0x800B88A8: b           L_800B8C40
    // 0x800B88AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800B8C40;
    // 0x800B88AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800B88B0:
    // 0x800B88B0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800B88B4: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x800B88B8: lwc1        $f0, 0x14($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800B88BC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800B88C0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800B88C4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B88C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B88CC: bgez        $t7, L_800B88E4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800B88D0: mov.s       $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
            goto L_800B88E4;
    }
    // 0x800B88D0: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x800B88D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800B88D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B88DC: nop

    // 0x800B88E0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_800B88E4:
    // 0x800B88E4: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x800B88E8: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800B88EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800B88F0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800B88F4: bgez        $t5, L_800B8908
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800B88F8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800B8908;
    }
    // 0x800B88F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B88FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B8900: nop

    // 0x800B8904: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_800B8908:
    // 0x800B8908: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800B890C: lbu         $t9, 0x7($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X7);
    // 0x800B8910: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800B8914: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800B8918: beq         $t9, $zero, L_800B892C
    if (ctx->r25 == 0) {
        // 0x800B891C: swc1        $f8, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
            goto L_800B892C;
    }
    // 0x800B891C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800B8920: lbu         $t6, 0x8($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X8);
    // 0x800B8924: bnel        $t6, $zero, L_800B8940
    if (ctx->r14 != 0) {
        // 0x800B8928: lbu         $t8, 0x1($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X1);
            goto L_800B8940;
    }
    goto skip_0;
    // 0x800B8928: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    skip_0:
L_800B892C:
    // 0x800B892C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B8930: nop

    // 0x800B8934: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800B8938: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x800B893C: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
L_800B8940:
    // 0x800B8940: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800B8944: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B8948: bgez        $t8, L_800B895C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800B894C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800B895C;
    }
    // 0x800B894C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B8950: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B8954: nop

    // 0x800B8958: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_800B895C:
    // 0x800B895C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800B8960: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B8964: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800B8968: lbu         $t4, 0x4($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X4);
    // 0x800B896C: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800B8970: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x800B8974: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B8978: beq         $t4, $zero, L_800B89DC
    if (ctx->r12 == 0) {
        // 0x800B897C: sub.s       $f2, $f8, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
            goto L_800B89DC;
    }
    // 0x800B897C: sub.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800B8980: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800B8984: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800B8988: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B898C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x800B8990: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x800B8994: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x800B8998: jal         0x800DC178
    // 0x800B899C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x800B899C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800B89A0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B89A4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x800B89A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800B89AC: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x800B89B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800B89B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B89B8: jal         0x800DC178
    // 0x800B89BC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_800DC178(rdram, ctx);
        goto after_4;
    // 0x800B89BC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800B89C0: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800B89C4: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800B89C8: addiu       $t2, $t2, -0x7D40
    ctx->r10 = ADD32(ctx->r10, -0X7D40);
    // 0x800B89CC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800B89D0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B89D4: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B89D8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_800B89DC:
    // 0x800B89DC: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B89E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800B89E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800B89E8: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800B89EC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800B89F0: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800B89F4: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x800B89F8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B89FC: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x800B8A00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800B8A04: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8A08: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800B8A0C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800B8A10: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x800B8A14: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800B8A18: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x800B8A1C: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800B8A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B8A24: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800B8A28: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800B8A2C: blez        $t9, L_800B8A3C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800B8A30: nop
    
            goto L_800B8A3C;
    }
    // 0x800B8A30: nop

    // 0x800B8A34: b           L_800B8A3C
    // 0x800B8A38: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800B8A3C;
    // 0x800B8A38: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800B8A3C:
    // 0x800B8A3C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800B8A40: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800B8A44: andi        $t5, $v0, 0xFFF
    ctx->r13 = ctx->r2 & 0XFFF;
    // 0x800B8A48: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x800B8A4C: sra         $t3, $t8, 16
    ctx->r11 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800B8A50: blez        $t3, L_800B8A60
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800B8A54: trunc.w.s   $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
            goto L_800B8A60;
    }
    // 0x800B8A54: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800B8A58: b           L_800B8A60
    // 0x800B8A5C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
        goto L_800B8A60;
    // 0x800B8A5C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
L_800B8A60:
    // 0x800B8A60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800B8A64: andi        $t4, $a0, 0xFFF
    ctx->r12 = ctx->r4 & 0XFFF;
    // 0x800B8A68: or          $t7, $t4, $at
    ctx->r15 = ctx->r12 | ctx->r1;
    // 0x800B8A6C: sll         $t9, $t5, 12
    ctx->r25 = S32(ctx->r13 << 12);
    // 0x800B8A70: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x800B8A74: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x800B8A78: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800B8A7C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800B8A80: blez        $t4, L_800B8A90
    if (SIGNED(ctx->r12) <= 0) {
        // 0x800B8A84: or          $a1, $t4, $zero
        ctx->r5 = ctx->r12 | 0;
            goto L_800B8A90;
    }
    // 0x800B8A84: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800B8A88: b           L_800B8A94
    // 0x800B8A8C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_800B8A94;
    // 0x800B8A8C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_800B8A90:
    // 0x800B8A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800B8A94:
    // 0x800B8A94: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800B8A98: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x800B8A9C: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x800B8AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B8AA4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x800B8AA8: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x800B8AAC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x800B8AB0: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x800B8AB4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800B8AB8: blez        $t7, L_800B8AC8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800B8ABC: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_800B8AC8;
    }
    // 0x800B8ABC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800B8AC0: b           L_800B8AC8
    // 0x800B8AC4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_800B8AC8;
    // 0x800B8AC4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_800B8AC8:
    // 0x800B8AC8: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x800B8ACC: or          $t3, $t9, $t8
    ctx->r11 = ctx->r25 | ctx->r24;
    // 0x800B8AD0: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x800B8AD4: bgez        $a1, L_800B8B5C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800B8AD8: sw          $t4, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r12;
            goto L_800B8B5C;
    }
    // 0x800B8AD8: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x800B8ADC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x800B8AE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800B8AE4: lwc1        $f6, 0x14($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800B8AE8: div.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800B8AEC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800B8AF0: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x800B8AF4: nop

    // 0x800B8AF8: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x800B8AFC: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800B8B00: bgez        $t6, L_800B8B30
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800B8B04: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_800B8B30;
    }
    // 0x800B8B04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800B8B08: multu       $a1, $t6
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B8B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B8B10: mflo        $v0
    ctx->r2 = lo;
    // 0x800B8B14: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800B8B18: blez        $t9, L_800B8B28
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800B8B1C: nop
    
            goto L_800B8B28;
    }
    // 0x800B8B1C: nop

    // 0x800B8B20: b           L_800B8B64
    // 0x800B8B24: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_800B8B64;
    // 0x800B8B24: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_800B8B28:
    // 0x800B8B28: b           L_800B8B64
    // 0x800B8B2C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
        goto L_800B8B64;
    // 0x800B8B2C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
L_800B8B30:
    // 0x800B8B30: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B8B34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B8B38: mflo        $v0
    ctx->r2 = lo;
    // 0x800B8B3C: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800B8B40: bgez        $t8, L_800B8B50
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800B8B44: nop
    
            goto L_800B8B50;
    }
    // 0x800B8B44: nop

    // 0x800B8B48: b           L_800B8B50
    // 0x800B8B4C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_800B8B50;
    // 0x800B8B4C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_800B8B50:
    // 0x800B8B50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800B8B54: b           L_800B8B64
    // 0x800B8B58: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_800B8B64;
    // 0x800B8B58: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_800B8B5C:
    // 0x800B8B5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800B8B60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_800B8B64:
    // 0x800B8B64: bgez        $t0, L_800B8BE4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800B8B68: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_800B8BE4;
    }
    // 0x800B8B68: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800B8B6C: lwc1        $f8, 0x14($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800B8B70: div.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800B8B74: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800B8B78: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x800B8B7C: nop

    // 0x800B8B80: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x800B8B84: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800B8B88: bgez        $t5, L_800B8BB8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800B8B8C: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_800B8BB8;
    }
    // 0x800B8B8C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800B8B90: multu       $a2, $t5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B8B94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B8B98: mflo        $v0
    ctx->r2 = lo;
    // 0x800B8B9C: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800B8BA0: blez        $t7, L_800B8BB0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800B8BA4: nop
    
            goto L_800B8BB0;
    }
    // 0x800B8BA4: nop

    // 0x800B8BA8: b           L_800B8BE8
    // 0x800B8BAC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_800B8BE8;
    // 0x800B8BAC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_800B8BB0:
    // 0x800B8BB0: b           L_800B8BEC
    // 0x800B8BB4: negu        $t9, $a0
    ctx->r25 = SUB32(0, ctx->r4);
        goto L_800B8BEC;
    // 0x800B8BB4: negu        $t9, $a0
    ctx->r25 = SUB32(0, ctx->r4);
L_800B8BB8:
    // 0x800B8BB8: multu       $a2, $a0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B8BBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B8BC0: mflo        $v0
    ctx->r2 = lo;
    // 0x800B8BC4: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800B8BC8: bgez        $t6, L_800B8BD8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800B8BCC: nop
    
            goto L_800B8BD8;
    }
    // 0x800B8BCC: nop

    // 0x800B8BD0: b           L_800B8BD8
    // 0x800B8BD4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_800B8BD8;
    // 0x800B8BD4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_800B8BD8:
    // 0x800B8BD8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800B8BDC: b           L_800B8BE8
    // 0x800B8BE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_800B8BE8;
    // 0x800B8BE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800B8BE4:
    // 0x800B8BE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800B8BE8:
    // 0x800B8BE8: negu        $t9, $a0
    ctx->r25 = SUB32(0, ctx->r4);
L_800B8BEC:
    // 0x800B8BEC: negu        $t4, $a3
    ctx->r12 = SUB32(0, ctx->r7);
    // 0x800B8BF0: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x800B8BF4: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x800B8BF8: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x800B8BFC: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x800B8C00: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x800B8C04: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800B8C08: lwc1        $f4, 0x14($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800B8C0C: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800B8C10: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800B8C14: div.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800B8C18: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x800B8C1C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800B8C20: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800B8C24: nop

    // 0x800B8C28: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x800B8C2C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x800B8C30: or          $t8, $t4, $t3
    ctx->r24 = ctx->r12 | ctx->r11;
    // 0x800B8C34: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x800B8C38: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800B8C3C: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
L_800B8C40:
    // 0x800B8C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8C44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800B8C48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B8C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8C50: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800B8C54: addiu       $v0, $v0, -0x7D40
    ctx->r2 = ADD32(ctx->r2, -0X7D40);
    // 0x800B8C58: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800B8C5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800B8C60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B8C64: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x800B8C68: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
    // 0x800B8C6C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x800B8C70: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x800B8C74: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x800B8C78: sb          $zero, 0x7($v0)
    MEM_B(0X7, ctx->r2) = 0;
    // 0x800B8C7C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x800B8C80: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x800B8C84: jr          $ra
    // 0x800B8C88: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x800B8C88: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800B8C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8C8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8C90: jr          $ra
    // 0x800B8C94: sb          $a0, -0x7D3D($at)
    MEM_B(-0X7D3D, ctx->r1) = ctx->r4;
    return;
    // 0x800B8C94: sb          $a0, -0x7D3D($at)
    MEM_B(-0X7D3D, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800B8C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8C98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8C9C: jr          $ra
    // 0x800B8CA0: sb          $a0, -0x7D3A($at)
    MEM_B(-0X7D3A, ctx->r1) = ctx->r4;
    return;
    // 0x800B8CA0: sb          $a0, -0x7D3A($at)
    MEM_B(-0X7D3A, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800B8CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8CA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8CA8: jr          $ra
    // 0x800B8CAC: sb          $a0, -0x7D3C($at)
    MEM_B(-0X7D3C, ctx->r1) = ctx->r4;
    return;
    // 0x800B8CAC: sb          $a0, -0x7D3C($at)
    MEM_B(-0X7D3C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800B8CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8CB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8CB4: jr          $ra
    // 0x800B8CB8: sb          $a0, -0x7D39($at)
    MEM_B(-0X7D39, ctx->r1) = ctx->r4;
    return;
    // 0x800B8CB8: sb          $a0, -0x7D39($at)
    MEM_B(-0X7D39, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800B8CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8CBC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800B8CC0: addiu       $v0, $v0, -0x7D40
    ctx->r2 = ADD32(ctx->r2, -0X7D40);
    // 0x800B8CC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800B8CC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800B8CCC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800B8CD0: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x800B8CD4: sb          $a1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r5;
    // 0x800B8CD8: jr          $ra
    // 0x800B8CDC: sb          $a2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r6;
    return;
    // 0x800B8CDC: sb          $a2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r6;
;}
RECOMP_FUNC void func_800B8CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8CE0: addiu       $t6, $a0, -0xC24
    ctx->r14 = ADD32(ctx->r4, -0XC24);
    // 0x800B8CE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8CE8: jr          $ra
    // 0x800B8CEC: sb          $t6, -0x7D37($at)
    MEM_B(-0X7D37, ctx->r1) = ctx->r14;
    return;
    // 0x800B8CEC: sb          $t6, -0x7D37($at)
    MEM_B(-0X7D37, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800B8CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8CF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800B8CF4: jr          $ra
    // 0x800B8CF8: swc1        $f12, -0x7D2C($at)
    MEM_W(-0X7D2C, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800B8CF8: swc1        $f12, -0x7D2C($at)
    MEM_W(-0X7D2C, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800B8CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8CFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B8D00: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800B8D04: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800B8D08: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800B8D0C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800B8D10: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800B8D14: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800B8D18: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800B8D1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800B8D20: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800B8D24: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800B8D28: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800B8D2C: jal         0x800E7188
    // 0x800B8D30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800E7188(rdram, ctx);
        goto after_0;
    // 0x800B8D30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x800B8D34: blez        $v0, L_800B8DA0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800B8D38: addu        $s0, $s5, $s1
        ctx->r16 = ADD32(ctx->r21, ctx->r17);
            goto L_800B8DA0;
    }
    // 0x800B8D38: addu        $s0, $s5, $s1
    ctx->r16 = ADD32(ctx->r21, ctx->r17);
    // 0x800B8D3C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800B8D40: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800B8D44: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B8D48: addiu       $s4, $s4, -0x7D40
    ctx->r20 = ADD32(ctx->r20, -0X7D40);
    // 0x800B8D4C: lbu         $a0, 0x6($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X6);
L_800B8D50:
    // 0x800B8D50: jal         0x800D36C4
    // 0x800B8D54: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    func_800D36C4(rdram, ctx);
        goto after_1;
    // 0x800B8D54: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    after_1:
    // 0x800B8D58: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x800B8D5C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800B8D60: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x800B8D64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800B8D68: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B8D6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800B8D70: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800B8D74: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800B8D78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B8D7C: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800B8D80: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800B8D84: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800B8D88: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x800B8D8C: jal         0x800E7188
    // 0x800B8D90: nop

    func_800E7188(rdram, ctx);
        goto after_2;
    // 0x800B8D90: nop

    after_2:
    // 0x800B8D94: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800B8D98: bnel        $at, $zero, L_800B8D50
    if (ctx->r1 != 0) {
        // 0x800B8D9C: lbu         $a0, 0x6($s4)
        ctx->r4 = MEM_BU(ctx->r20, 0X6);
            goto L_800B8D50;
    }
    goto skip_0;
    // 0x800B8D9C: lbu         $a0, 0x6($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X6);
    skip_0:
L_800B8DA0:
    // 0x800B8DA0: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x800B8DA4: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800B8DA8: addiu       $s4, $s4, -0x7D40
    ctx->r20 = ADD32(ctx->r20, -0X7D40);
    // 0x800B8DAC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B8DB0: lwc1        $f6, 0x14($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X14);
    // 0x800B8DB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800B8DB8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8DBC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800B8DC0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800B8DC4: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800B8DC8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8DCC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800B8DD0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800B8DD4: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800B8DD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800B8DDC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800B8DE0: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x800B8DE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B8DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8DEC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800B8DF0: addiu       $v0, $v0, -0x7D40
    ctx->r2 = ADD32(ctx->r2, -0X7D40);
    // 0x800B8DF4: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x800B8DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B8DFC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800B8E00: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x800B8E04: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800B8E08: beq         $t7, $zero, L_800B8E18
    if (ctx->r15 == 0) {
        // 0x800B8E0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800B8E18;
    }
    // 0x800B8E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8E10: jal         0x800B81CC
    // 0x800B8E14: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    func_800B81CC(rdram, ctx);
        goto after_0;
    // 0x800B8E14: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    after_0:
L_800B8E18:
    // 0x800B8E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B8E20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B8E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8E28: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800B8E2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800B8E30: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800B8E34: addiu       $s1, $s1, -0x7D40
    ctx->r17 = ADD32(ctx->r17, -0X7D40);
    // 0x800B8E38: lbu         $t6, 0xC($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XC);
    // 0x800B8E3C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800B8E40: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800B8E44: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800B8E48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800B8E4C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800B8E50: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x800B8E54: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800B8E58: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x800B8E5C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800B8E60: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800B8E64: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800B8E68: beq         $t6, $zero, L_800B8F5C
    if (ctx->r14 == 0) {
        // 0x800B8E6C: sw          $s3, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r19;
            goto L_800B8F5C;
    }
    // 0x800B8E6C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800B8E70: lbu         $t7, 0x7($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X7);
    // 0x800B8E74: beq         $t7, $zero, L_800B8EA8
    if (ctx->r15 == 0) {
        // 0x800B8E78: nop
    
            goto L_800B8EA8;
    }
    // 0x800B8E78: nop

    // 0x800B8E7C: jal         0x800D3574
    // 0x800B8E80: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    func_800D3574(rdram, ctx);
        goto after_0;
    // 0x800B8E80: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    after_0:
    // 0x800B8E84: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800B8E88: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x800B8E8C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800B8E90: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B8E94: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800B8E98: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800B8E9C: mfc1        $s4, $f16
    ctx->r20 = (int32_t)ctx->f16.u32l;
    // 0x800B8EA0: b           L_800B8ED4
    // 0x800B8EA4: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
        goto L_800B8ED4;
    // 0x800B8EA4: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
L_800B8EA8:
    // 0x800B8EA8: jal         0x800D35BC
    // 0x800B8EAC: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    func_800D35BC(rdram, ctx);
        goto after_1;
    // 0x800B8EAC: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    after_1:
    // 0x800B8EB0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x800B8EB4: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x800B8EB8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800B8EBC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800B8EC0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800B8EC4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800B8EC8: mfc1        $s5, $f10
    ctx->r21 = (int32_t)ctx->f10.u32l;
    // 0x800B8ECC: nop

    // 0x800B8ED0: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
L_800B8ED4:
    // 0x800B8ED4: lbu         $a3, 0x0($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X0);
    // 0x800B8ED8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800B8EDC: beq         $a3, $zero, L_800B8F5C
    if (ctx->r7 == 0) {
        // 0x800B8EE0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_800B8F5C;
    }
    // 0x800B8EE0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_800B8EE4:
    // 0x800B8EE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800B8EE8: jal         0x800B81CC
    // 0x800B8EEC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_800B81CC(rdram, ctx);
        goto after_2;
    // 0x800B8EEC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_2:
    // 0x800B8EF0: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x800B8EF4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800B8EF8: beq         $v1, $zero, L_800B8F28
    if (ctx->r3 == 0) {
        // 0x800B8EFC: nop
    
            goto L_800B8F28;
    }
    // 0x800B8EFC: nop

    // 0x800B8F00: lbu         $t0, 0x8($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X8);
    // 0x800B8F04: bne         $t0, $zero, L_800B8F28
    if (ctx->r8 != 0) {
        // 0x800B8F08: nop
    
            goto L_800B8F28;
    }
    // 0x800B8F08: nop

    // 0x800B8F0C: bgez        $v0, L_800B8F1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800B8F10: sra         $t1, $v0, 1
        ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
            goto L_800B8F1C;
    }
    // 0x800B8F10: sra         $t1, $v0, 1
    ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
    // 0x800B8F14: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x800B8F18: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_800B8F1C:
    // 0x800B8F1C: addu        $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
    // 0x800B8F20: b           L_800B8F50
    // 0x800B8F24: sb          $s3, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r19;
        goto L_800B8F50;
    // 0x800B8F24: sb          $s3, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r19;
L_800B8F28:
    // 0x800B8F28: beql        $v1, $zero, L_800B8F4C
    if (ctx->r3 == 0) {
        // 0x800B8F2C: or          $v0, $s5, $zero
        ctx->r2 = ctx->r21 | 0;
            goto L_800B8F4C;
    }
    goto skip_0;
    // 0x800B8F2C: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    skip_0:
    // 0x800B8F30: beq         $v0, $zero, L_800B8F40
    if (ctx->r2 == 0) {
        // 0x800B8F34: or          $v1, $s4, $zero
        ctx->r3 = ctx->r20 | 0;
            goto L_800B8F40;
    }
    // 0x800B8F34: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x800B8F38: b           L_800B8F50
    // 0x800B8F3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
        goto L_800B8F50;
    // 0x800B8F3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_800B8F40:
    // 0x800B8F40: b           L_800B8F4C
    // 0x800B8F44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800B8F4C;
    // 0x800B8F44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B8F48: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_800B8F4C:
    // 0x800B8F4C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_800B8F50:
    // 0x800B8F50: lbu         $a3, 0x0($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X0);
    // 0x800B8F54: bnel        $a3, $zero, L_800B8EE4
    if (ctx->r7 != 0) {
        // 0x800B8F58: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_800B8EE4;
    }
    goto skip_1;
    // 0x800B8F58: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_1:
L_800B8F5C:
    // 0x800B8F5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800B8F60: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800B8F64: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800B8F68: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8F6C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800B8F70: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800B8F74: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800B8F78: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8F7C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800B8F80: jr          $ra
    // 0x800B8F84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800B8F84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800B8F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B8F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8F90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800B8F94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800B8F98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800B8F9C: jal         0x800B8CFC
    // 0x800B8FA0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800B8CFC(rdram, ctx);
        goto after_0;
    // 0x800B8FA0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800B8FA4: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x800B8FA8: subu        $a1, $t6, $v0
    ctx->r5 = SUB32(ctx->r14, ctx->r2);
    // 0x800B8FAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800B8FB0: bgez        $a1, L_800B8FC0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800B8FB4: sra         $t7, $a1, 1
        ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
            goto L_800B8FC0;
    }
    // 0x800B8FB4: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800B8FB8: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x800B8FBC: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_800B8FC0:
    // 0x800B8FC0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x800B8FC4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8FC8: jal         0x800B8E28
    // 0x800B8FCC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800B8E28(rdram, ctx);
        goto after_1;
    // 0x800B8FCC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800B8FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B8FD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B8FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8FE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B8FE4: jr          $ra
    // 0x800B8FE8: sw          $zero, 0x712C($at)
    MEM_W(0X712C, ctx->r1) = 0;
    return;
    // 0x800B8FE8: sw          $zero, 0x712C($at)
    MEM_W(0X712C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800B8FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8FEC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800B8FF0: lw          $v0, 0x7128($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7128);
    // 0x800B8FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B8FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8FFC: beql        $v0, $zero, L_800B902C
    if (ctx->r2 == 0) {
        // 0x800B9000: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800B902C;
    }
    goto skip_0;
    // 0x800B9000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800B9004: jal         0x8001B084
    // 0x800B9008: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800B9008: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    after_0:
    // 0x800B900C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800B9010: jal         0x8001B084
    // 0x800B9014: lw          $a0, 0x7128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7128);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x800B9014: lw          $a0, 0x7128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7128);
    after_1:
    // 0x800B9018: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800B901C: addiu       $v0, $v0, 0x7128
    ctx->r2 = ADD32(ctx->r2, 0X7128);
    // 0x800B9020: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800B9024: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B9028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800B902C:
    // 0x800B902C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B9030: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B9038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B903C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B9040: jal         0x800B8FEC
    // 0x800B9044: nop

    func_800B8FEC(rdram, ctx);
        goto after_0;
    // 0x800B9044: nop

    after_0:
    // 0x800B9048: jal         0x8001ACCC
    // 0x800B904C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x800B904C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x800B9050: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800B9054: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800B9058: addiu       $a1, $a1, 0x7128
    ctx->r5 = ADD32(ctx->r5, 0X7128);
    // 0x800B905C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800B9060: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x800B9064: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800B9068: addiu       $a0, $zero, 0x960
    ctx->r4 = ADD32(0, 0X960);
    // 0x800B906C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800B9070: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x800B9074: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x800B9078: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x800B907C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x800B9080: swc1        $f2, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f2.u32l;
    // 0x800B9084: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800B9088: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x800B908C: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x800B9090: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x800B9094: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
    // 0x800B9098: jal         0x8001ACCC
    // 0x800B909C: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    func_8001ACCC(rdram, ctx);
        goto after_2;
    // 0x800B909C: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    after_2:
    // 0x800B90A0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800B90A4: addiu       $a1, $a1, 0x7128
    ctx->r5 = ADD32(ctx->r5, 0X7128);
    // 0x800B90A8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x800B90AC: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x800B90B0: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x800B90B4: sb          $zero, 0x18($t1)
    MEM_B(0X18, ctx->r9) = 0;
    // 0x800B90B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B90BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B90C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B90C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B90C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800B90CC: lw          $v0, 0x7128($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7128);
    // 0x800B90D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B90D4: beq         $v0, $zero, L_800B90E0
    if (ctx->r2 == 0) {
        // 0x800B90D8: nop
    
            goto L_800B90E0;
    }
    // 0x800B90D8: nop

    // 0x800B90DC: sb          $t6, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r14;
L_800B90E0:
    // 0x800B90E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B90E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B90E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800B90EC: lw          $v0, 0x7128($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7128);
    // 0x800B90F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B90F4: beq         $v0, $zero, L_800B9100
    if (ctx->r2 == 0) {
        // 0x800B90F8: nop
    
            goto L_800B9100;
    }
    // 0x800B90F8: nop

    // 0x800B90FC: sb          $t6, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r14;
L_800B9100:
    // 0x800B9100: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B9108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9108: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800B910C: addiu       $a3, $a3, 0x7128
    ctx->r7 = ADD32(ctx->r7, 0X7128);
    // 0x800B9110: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x800B9114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B9118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B911C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800B9120: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800B9124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800B9128: beq         $at, $zero, L_800B9160
    if (ctx->r1 == 0) {
        // 0x800B912C: sw          $t7, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r15;
            goto L_800B9160;
    }
    // 0x800B912C: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x800B9130: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x800B9134: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B9138: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x800B913C: lw          $v0, 0x1C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X1C);
    // 0x800B9140: mflo        $t1
    ctx->r9 = lo;
    // 0x800B9144: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x800B9148: nop

    // 0x800B914C: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B9150: mflo        $t2
    ctx->r10 = lo;
    // 0x800B9154: addu        $a1, $v0, $t2
    ctx->r5 = ADD32(ctx->r2, ctx->r10);
    // 0x800B9158: jal         0x8001BBC8
    // 0x800B915C: nop

    aligned4_memcpy(rdram, ctx);
        goto after_0;
    // 0x800B915C: nop

    after_0:
L_800B9160:
    // 0x800B9160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B9164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B9168: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B9170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9170: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800B9174: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B9178: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800B917C: addiu       $s0, $s0, 0x7128
    ctx->r16 = ADD32(ctx->r16, 0X7128);
    // 0x800B9180: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800B9184: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B9188: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800B918C: beql        $t6, $zero, L_800B955C
    if (ctx->r14 == 0) {
        // 0x800B9190: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800B955C;
    }
    goto skip_0;
    // 0x800B9190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800B9194: jal         0x800A5490
    // 0x800B9198: nop

    func_800A5490(rdram, ctx);
        goto after_0;
    // 0x800B9198: nop

    after_0:
    // 0x800B919C: beq         $v0, $zero, L_800B91AC
    if (ctx->r2 == 0) {
        // 0x800B91A0: nop
    
            goto L_800B91AC;
    }
    // 0x800B91A0: nop

    // 0x800B91A4: b           L_800B9558
    // 0x800B91A8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_800B9558;
    // 0x800B91A8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_800B91AC:
    // 0x800B91AC: jal         0x800D8FF8
    // 0x800B91B0: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x800B91B0: nop

    after_1:
    // 0x800B91B4: jal         0x8001211C
    // 0x800B91B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_8001211C(rdram, ctx);
        goto after_2;
    // 0x800B91B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x800B91BC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x800B91C0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800B91C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800B91C8: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x800B91CC: jal         0x8008FE68
    // 0x800B91D0: addiu       $a0, $a0, 0x7138
    ctx->r4 = ADD32(ctx->r4, 0X7138);
    func_8008FE68(rdram, ctx);
        goto after_3;
    // 0x800B91D0: addiu       $a0, $a0, 0x7138
    ctx->r4 = ADD32(ctx->r4, 0X7138);
    after_3:
    // 0x800B91D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800B91D8: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800B91DC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800B91E0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800B91E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B91E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800B91EC: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x800B91F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800B91F4: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800B91F8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800B91FC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800B9200: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x800B9204: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800B9208: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800B920C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800B9210: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800B9214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B9218: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x800B921C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800B9220: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800B9224: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x800B9228: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800B922C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x800B9230: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x800B9234: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x800B9238: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800B923C: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x800B9240: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800B9244: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x800B9248: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800B924C: blez        $v1, L_800B9328
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800B9250: swc1        $f8, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
            goto L_800B9328;
    }
    // 0x800B9250: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x800B9254: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x800B9258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800B925C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800B9260: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800B9264: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x800B9268: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
L_800B926C:
    // 0x800B926C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800B9270: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x800B9274: addu        $a2, $t5, $a3
    ctx->r6 = ADD32(ctx->r13, ctx->r7);
    // 0x800B9278: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800B927C: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800B9280: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800B9284: mul.s       $f18, $f14, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800B9288: beql        $v1, $a0, L_800B92B4
    if (ctx->r3 == ctx->r4) {
        // 0x800B928C: lwc1        $f16, 0x0($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
            goto L_800B92B4;
    }
    goto skip_1;
    // 0x800B928C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    skip_1:
L_800B9290:
    // 0x800B9290: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800B9294: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800B9298: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800B929C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B92A0: mul.s       $f18, $f14, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800B92A4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800B92A8: bne         $v1, $a0, L_800B9290
    if (ctx->r3 != ctx->r4) {
        // 0x800B92AC: swc1        $f16, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f16.u32l;
            goto L_800B9290;
    }
    // 0x800B92AC: swc1        $f16, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f16.u32l;
    // 0x800B92B0: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
L_800B92B4:
    // 0x800B92B4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800B92B8: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B92BC: swc1        $f16, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f16.u32l;
    // 0x800B92C0: sw          $a1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r5;
    // 0x800B92C4: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    // 0x800B92C8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800B92CC: jal         0x800DC0C0
    // 0x800B92D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_800DC0C0(rdram, ctx);
        goto after_4;
    // 0x800B92D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_4:
    // 0x800B92D4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800B92D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B92DC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800B92E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B92E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800B92E8: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x800B92EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B92F0: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800B92F4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800B92F8: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
    // 0x800B92FC: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800B9300: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800B9304: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800B9308: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800B930C: addiu       $a3, $a3, 0x18
    ctx->r7 = ADD32(ctx->r7, 0X18);
    // 0x800B9310: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x800B9314: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x800B9318: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x800B931C: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800B9320: bnel        $at, $zero, L_800B926C
    if (ctx->r1 != 0) {
        // 0x800B9324: lw          $t4, 0x0($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X0);
            goto L_800B926C;
    }
    goto skip_2;
    // 0x800B9324: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    skip_2:
L_800B9328:
    // 0x800B9328: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x800B932C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800B9330: addiu       $a1, $a1, 0x7138
    ctx->r5 = ADD32(ctx->r5, 0X7138);
    // 0x800B9334: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800B9338: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800B933C: beq         $at, $zero, L_800B9388
    if (ctx->r1 == 0) {
        // 0x800B9340: sw          $t7, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r15;
            goto L_800B9388;
    }
    // 0x800B9340: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    // 0x800B9344: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800B9348: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x800B934C: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x800B9350: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x800B9354: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800B9358: jal         0x800EEAD4
    // 0x800B935C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    func_800EEAD4(rdram, ctx);
        goto after_5;
    // 0x800B935C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_5:
    // 0x800B9360: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B9364: lwc1        $f6, 0x56A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X56A0);
    // 0x800B9368: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x800B936C: nop

    // 0x800B9370: bc1fl       L_800B9390
    if (!c1cs) {
        // 0x800B9374: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_800B9390;
    }
    goto skip_3;
    // 0x800B9374: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x800B9378: jal         0x800B9108
    // 0x800B937C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_800B9108(rdram, ctx);
        goto after_6;
    // 0x800B937C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_6:
    // 0x800B9380: b           L_800B9390
    // 0x800B9384: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
        goto L_800B9390;
    // 0x800B9384: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_800B9388:
    // 0x800B9388: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x800B938C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_800B9390:
    // 0x800B9390: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B9394: lbu         $t2, 0x18($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X18);
    // 0x800B9398: bnel        $t2, $at, L_800B955C
    if (ctx->r10 != ctx->r1) {
        // 0x800B939C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800B955C;
    }
    goto skip_4;
    // 0x800B939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x800B93A0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x800B93A4: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x800B93A8: beq         $at, $zero, L_800B9558
    if (ctx->r1 == 0) {
        // 0x800B93AC: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_800B9558;
    }
    // 0x800B93AC: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x800B93B0: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
    // 0x800B93B4: subu        $t4, $t4, $v1
    ctx->r12 = SUB32(ctx->r12, ctx->r3);
    // 0x800B93B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800B93BC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800B93C0: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x800B93C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800B93C8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x800B93CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B93D0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800B93D4: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x800B93D8: jal         0x800DC178
    // 0x800B93DC: lwc1        $f14, 0x56A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56A4);
    func_800DC178(rdram, ctx);
        goto after_7;
    // 0x800B93DC: lwc1        $f14, 0x56A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56A4);
    after_7:
    // 0x800B93E0: jal         0x800DC0C0
    // 0x800B93E4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_800DC0C0(rdram, ctx);
        goto after_8;
    // 0x800B93E4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x800B93E8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800B93EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800B93F0: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800B93F4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x800B93F8: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800B93FC: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x800B9400: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B9404: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800B9408: add.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x800B940C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800B9410: jal         0x800EFA4C
    // 0x800B9414: nop

    func_800EFA4C(rdram, ctx);
        goto after_9;
    // 0x800B9414: nop

    after_9:
    // 0x800B9418: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800B941C: jal         0x800EEFD4
    // 0x800B9420: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EEFD4(rdram, ctx);
        goto after_10;
    // 0x800B9420: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_10:
    // 0x800B9424: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x800B9428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B942C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x800B9430: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800B9434: nop

    // 0x800B9438: bc1fl       L_800B9454
    if (!c1cs) {
        // 0x800B943C: mtc1        $at, $f20
        ctx->f20.u32l = ctx->r1;
            goto L_800B9454;
    }
    goto skip_5;
    // 0x800B943C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    skip_5:
    // 0x800B9440: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800B9444: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B9448: b           L_800B9458
    // 0x800B944C: nop

        goto L_800B9458;
    // 0x800B944C: nop

    // 0x800B9450: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
L_800B9454:
    // 0x800B9454: nop

L_800B9458:
    // 0x800B9458: jal         0x800E3A80
    // 0x800B945C: nop

    func_800E3A80(rdram, ctx);
        goto after_11;
    // 0x800B945C: nop

    after_11:
    // 0x800B9460: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x800B9464: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x800B9468: jal         0x800DC178
    // 0x800B946C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800DC178(rdram, ctx);
        goto after_12;
    // 0x800B946C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_12:
    // 0x800B9470: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800B9474: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x800B9478: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800B947C: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x800B9480: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800B9484: jal         0x800EF934
    // 0x800B9488: nop

    func_800EF934(rdram, ctx);
        goto after_13;
    // 0x800B9488: nop

    after_13:
    // 0x800B948C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800B9490: addiu       $a1, $a1, 0x7138
    ctx->r5 = ADD32(ctx->r5, 0X7138);
    // 0x800B9494: jal         0x800EF04C
    // 0x800B9498: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_800EF04C(rdram, ctx);
        goto after_14;
    // 0x800B9498: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_14:
    // 0x800B949C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B94A0: lwc1        $f18, 0x56A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X56A8);
    // 0x800B94A4: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800B94A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800B94AC: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800B94B0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800B94B4: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800B94B8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800B94BC: bc1fl       L_800B951C
    if (!c1cs) {
        // 0x800B94C0: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_800B951C;
    }
    goto skip_6;
    // 0x800B94C0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    skip_6:
    // 0x800B94C4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B94C8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x800B94CC: jal         0x800E3F8C
    // 0x800B94D0: sub.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f20.fl;
    func_800E3F8C(rdram, ctx);
        goto after_15;
    // 0x800B94D0: sub.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f20.fl;
    after_15:
    // 0x800B94D4: beq         $v0, $zero, L_800B9518
    if (ctx->r2 == 0) {
        // 0x800B94D8: lw          $v1, 0x44($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X44);
            goto L_800B9518;
    }
    // 0x800B94D8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_800B94DC:
    // 0x800B94DC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800B94E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B94E4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800B94E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800B94EC: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x800B94F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B94F4: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800B94F8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800B94FC: beq         $at, $zero, L_800B9518
    if (ctx->r1 == 0) {
        // 0x800B9500: swc1        $f8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
            goto L_800B9518;
    }
    // 0x800B9500: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x800B9504: sub.s       $f14, $f8, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x800B9508: jal         0x800E3F8C
    // 0x800B950C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_800E3F8C(rdram, ctx);
        goto after_16;
    // 0x800B950C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_16:
    // 0x800B9510: bne         $v0, $zero, L_800B94DC
    if (ctx->r2 != 0) {
        // 0x800B9514: lw          $v1, 0x44($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X44);
            goto L_800B94DC;
    }
    // 0x800B9514: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_800B9518:
    // 0x800B9518: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_800B951C:
    // 0x800B951C: jal         0x800EE7F8
    // 0x800B9520: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800EE7F8(rdram, ctx);
        goto after_17;
    // 0x800B9520: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_17:
    // 0x800B9524: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x800B9528: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800B952C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x800B9530: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B9534: jal         0x800DC178
    // 0x800B9538: nop

    func_800DC178(rdram, ctx);
        goto after_18;
    // 0x800B9538: nop

    after_18:
    // 0x800B953C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800B9540: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800B9544: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800B9548: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x800B954C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x800B9550: jal         0x800EFA4C
    // 0x800B9554: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFA4C(rdram, ctx);
        goto after_19;
    // 0x800B9554: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_19:
L_800B9558:
    // 0x800B9558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800B955C:
    // 0x800B955C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800B9560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B9564: jr          $ra
    // 0x800B9568: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800B9568: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800B956C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B956C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800B9570: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800B9574: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800B9578: addiu       $s1, $s1, 0x7128
    ctx->r17 = ADD32(ctx->r17, 0X7128);
    // 0x800B957C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800B9580: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800B9584: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800B9588: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800B958C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800B9590: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800B9594: beq         $t6, $zero, L_800B9780
    if (ctx->r14 == 0) {
        // 0x800B9598: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800B9780;
    }
    // 0x800B9598: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800B959C: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x800B95A0: beql        $t7, $zero, L_800B9784
    if (ctx->r15 == 0) {
        // 0x800B95A4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800B9784;
    }
    goto skip_0;
    // 0x800B95A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x800B95A8: jal         0x800A7180
    // 0x800B95AC: nop

    func_800A7180(rdram, ctx);
        goto after_0;
    // 0x800B95AC: nop

    after_0:
    // 0x800B95B0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800B95B4: jal         0x800D674C
    // 0x800B95B8: addiu       $a0, $zero, 0x9F4
    ctx->r4 = ADD32(0, 0X9F4);
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x800B95B8: addiu       $a0, $zero, 0x9F4
    ctx->r4 = ADD32(0, 0X9F4);
    after_1:
    // 0x800B95BC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800B95C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800B95C4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800B95C8: addiu       $a1, $a1, 0x7154
    ctx->r5 = ADD32(ctx->r5, 0X7154);
    // 0x800B95CC: jal         0x800E39A8
    // 0x800B95D0: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    func_800E39A8(rdram, ctx);
        goto after_2;
    // 0x800B95D0: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    after_2:
    // 0x800B95D4: lw          $t8, 0xC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC);
    // 0x800B95D8: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x800B95DC: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x800B95E0: sw          $t0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r8;
    // 0x800B95E4: lw          $t1, 0x10($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X10);
    // 0x800B95E8: addu        $s0, $s4, $t1
    ctx->r16 = ADD32(ctx->r20, ctx->r9);
    // 0x800B95EC: jal         0x800B2354
    // 0x800B95F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800B2354(rdram, ctx);
        goto after_3;
    // 0x800B95F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800B95F4: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    // 0x800B95F8: lw          $s2, 0x0($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X0);
    // 0x800B95FC: lui         $t2, 0xDB06
    ctx->r10 = S32(0XDB06 << 16);
    // 0x800B9600: ori         $t2, $t2, 0x4
    ctx->r10 = ctx->r10 | 0X4;
    // 0x800B9604: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x800B9608: sw          $t2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r10;
    // 0x800B960C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x800B9610: jal         0x8002E330
    // 0x800B9614: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x800B9614: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    after_4:
    // 0x800B9618: lui         $t3, 0xDB06
    ctx->r11 = S32(0XDB06 << 16);
    // 0x800B961C: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x800B9620: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x800B9624: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x800B9628: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x800B962C: lh          $t4, 0x8($s4)
    ctx->r12 = MEM_H(ctx->r20, 0X8);
    // 0x800B9630: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800B9634: addu        $a0, $s4, $t4
    ctx->r4 = ADD32(ctx->r20, ctx->r12);
    // 0x800B9638: jal         0x8002E330
    // 0x800B963C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x800B963C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_5:
    // 0x800B9640: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800B9644: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800B9648: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800B964C: lui         $t5, 0xD9FF
    ctx->r13 = S32(0XD9FF << 16);
    // 0x800B9650: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x800B9654: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B9658: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800B965C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800B9660: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800B9664: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800B9668: addiu       $t8, $t8, -0x5970
    ctx->r24 = ADD32(ctx->r24, -0X5970);
    // 0x800B966C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800B9670: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800B9674: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x800B9678: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800B967C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x800B9680: ori         $t9, $t9, 0xC
    ctx->r25 = ctx->r25 | 0XC;
    // 0x800B9684: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800B9688: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800B968C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800B9690: addiu       $a0, $a0, -0x5950
    ctx->r4 = ADD32(ctx->r4, -0X5950);
    // 0x800B9694: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800B9698: jal         0x8002E330
    // 0x800B969C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_6;
    // 0x800B969C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    after_6:
    // 0x800B96A0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800B96A4: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x800B96A8: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x800B96AC: sw          $s2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r18;
    // 0x800B96B0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x800B96B4: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x800B96B8: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x800B96BC: multu       $t3, $s3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B96C0: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x800B96C4: sw          $t1, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r9;
    // 0x800B96C8: lw          $s0, 0x1C($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X1C);
    // 0x800B96CC: addiu       $s4, $zero, 0x18
    ctx->r20 = ADD32(0, 0X18);
    // 0x800B96D0: addiu       $s2, $s5, 0x4
    ctx->r18 = ADD32(ctx->r21, 0X4);
    // 0x800B96D4: mflo        $t4
    ctx->r12 = lo;
    // 0x800B96D8: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x800B96DC: sltu        $at, $s0, $t5
    ctx->r1 = ctx->r16 < ctx->r13 ? 1 : 0;
    // 0x800B96E0: beq         $at, $zero, L_800B9780
    if (ctx->r1 == 0) {
        // 0x800B96E4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800B9780;
    }
    // 0x800B96E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800B96E8:
    // 0x800B96E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800B96EC: jal         0x800B97A4
    // 0x800B96F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800B97A4(rdram, ctx);
        goto after_7;
    // 0x800B96F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x800B96F4: bnel        $v0, $zero, L_800B975C
    if (ctx->r2 != 0) {
        // 0x800B96F8: lw          $t1, 0x4($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X4);
            goto L_800B975C;
    }
    goto skip_1;
    // 0x800B96F8: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    skip_1:
    // 0x800B96FC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800B9700: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x800B9704: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800B9708: nop

    // 0x800B970C: bc1fl       L_800B975C
    if (!c1cs) {
        // 0x800B9710: lw          $t1, 0x4($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X4);
            goto L_800B975C;
    }
    goto skip_2;
    // 0x800B9710: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    skip_2:
    // 0x800B9714: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800B9718: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x800B971C: subu        $t8, $s0, $t7
    ctx->r24 = SUB32(ctx->r16, ctx->r15);
    // 0x800B9720: div         $zero, $t8, $s4
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r20)));
    // 0x800B9724: mflo        $a0
    ctx->r4 = lo;
    // 0x800B9728: bne         $s4, $zero, L_800B9734
    if (ctx->r20 != 0) {
        // 0x800B972C: nop
    
            goto L_800B9734;
    }
    // 0x800B972C: nop

    // 0x800B9730: break       7
    do_break(2148243248);
L_800B9734:
    // 0x800B9734: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B9738: bne         $s4, $at, L_800B974C
    if (ctx->r20 != ctx->r1) {
        // 0x800B973C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800B974C;
    }
    // 0x800B973C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B9740: bne         $t8, $at, L_800B974C
    if (ctx->r24 != ctx->r1) {
        // 0x800B9744: nop
    
            goto L_800B974C;
    }
    // 0x800B9744: nop

    // 0x800B9748: break       6
    do_break(2148243272);
L_800B974C:
    // 0x800B974C: jal         0x800B9108
    // 0x800B9750: nop

    func_800B9108(rdram, ctx);
        goto after_8;
    // 0x800B9750: nop

    after_8:
    // 0x800B9754: addiu       $s0, $s0, -0x18
    ctx->r16 = ADD32(ctx->r16, -0X18);
    // 0x800B9758: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
L_800B975C:
    // 0x800B975C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800B9760: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x800B9764: multu       $t1, $s3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B9768: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x800B976C: mflo        $t2
    ctx->r10 = lo;
    // 0x800B9770: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800B9774: sltu        $at, $s0, $t3
    ctx->r1 = ctx->r16 < ctx->r11 ? 1 : 0;
    // 0x800B9778: bnel        $at, $zero, L_800B96E8
    if (ctx->r1 != 0) {
        // 0x800B977C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800B96E8;
    }
    goto skip_3;
    // 0x800B977C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_3:
L_800B9780:
    // 0x800B9780: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800B9784:
    // 0x800B9784: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800B9788: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800B978C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9790: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800B9794: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800B9798: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800B979C: jr          $ra
    // 0x800B97A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800B97A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800B97A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B97A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B97A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800B97AC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800B97B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800B97B4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800B97B8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800B97BC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800B97C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B97C4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800B97C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800B97CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B97D0: addiu       $a0, $a0, 0x7160
    ctx->r4 = ADD32(ctx->r4, 0X7160);
    // 0x800B97D4: addiu       $a2, $a2, 0x7148
    ctx->r6 = ADD32(ctx->r6, 0X7148);
    // 0x800B97D8: jal         0x800EFB24
    // 0x800B97DC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800B97DC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x800B97E0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800B97E4: addiu       $s0, $s0, 0x7128
    ctx->r16 = ADD32(ctx->r16, 0X7128);
    // 0x800B97E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B97EC: lwc1        $f2, 0x56AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X56AC);
    // 0x800B97F0: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800B97F4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800B97F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B97FC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800B9800: nop

    // 0x800B9804: bc1fl       L_800B996C
    if (!c1cs) {
        // 0x800B9808: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800B996C;
    }
    goto skip_0;
    // 0x800B9808: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800B980C: lwc1        $f12, 0x56B0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X56B0);
    // 0x800B9810: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x800B9814: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800B9818: nop

    // 0x800B981C: bc1fl       L_800B996C
    if (!c1cs) {
        // 0x800B9820: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800B996C;
    }
    goto skip_1;
    // 0x800B9820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x800B9824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B9828: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800B982C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800B9830: nop

    // 0x800B9834: bc1fl       L_800B996C
    if (!c1cs) {
        // 0x800B9838: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800B996C;
    }
    goto skip_2;
    // 0x800B9838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x800B983C: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    // 0x800B9840: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800B9844: nop

    // 0x800B9848: bc1fl       L_800B996C
    if (!c1cs) {
        // 0x800B984C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800B996C;
    }
    goto skip_3;
    // 0x800B984C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x800B9850: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800B9854: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800B9858: bc1fl       L_800B996C
    if (!c1cs) {
        // 0x800B985C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800B996C;
    }
    goto skip_4;
    // 0x800B985C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x800B9860: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x800B9864: jal         0x800E3E8C
    // 0x800B9868: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800E3E8C(rdram, ctx);
        goto after_1;
    // 0x800B9868: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x800B986C: beq         $v0, $zero, L_800B9968
    if (ctx->r2 == 0) {
        // 0x800B9870: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_800B9968;
    }
    // 0x800B9870: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800B9874: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800B9878: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800B987C: jal         0x80018E8C
    // 0x800B9880: lw          $a2, 0x8($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X8);
    func_80018E8C(rdram, ctx);
        goto after_2;
    // 0x800B9880: lw          $a2, 0x8($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X8);
    after_2:
    // 0x800B9884: jal         0x80018C28
    // 0x800B9888: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_80018C28(rdram, ctx);
        goto after_3;
    // 0x800B9888: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x800B988C: lw          $a1, 0x58($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X58);
    // 0x800B9890: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800B9894: addiu       $a0, $a0, 0x716C
    ctx->r4 = ADD32(ctx->r4, 0X716C);
    // 0x800B9898: jal         0x800193C4
    // 0x800B989C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800193C4(rdram, ctx);
        goto after_4;
    // 0x800B989C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_4:
    // 0x800B98A0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800B98A4: lwc1        $f14, 0x48($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800B98A8: jal         0x80018E8C
    // 0x800B98AC: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    func_80018E8C(rdram, ctx);
        goto after_5;
    // 0x800B98AC: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    after_5:
    // 0x800B98B0: jal         0x80018FE8
    // 0x800B98B4: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    func_80018FE8(rdram, ctx);
        goto after_6;
    // 0x800B98B4: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    after_6:
    // 0x800B98B8: jal         0x80018F50
    // 0x800B98BC: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    func_80018F50(rdram, ctx);
        goto after_7;
    // 0x800B98BC: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    after_7:
    // 0x800B98C0: lw          $v0, 0x58($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X58);
    // 0x800B98C4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800B98C8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800B98CC: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800B98D0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800B98D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x800B98D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800B98DC: jal         0x80019C84
    // 0x800B98E0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80019C84(rdram, ctx);
        goto after_8;
    // 0x800B98E0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_8:
    // 0x800B98E4: jal         0x80018C28
    // 0x800B98E8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_80018C28(rdram, ctx);
        goto after_9;
    // 0x800B98E8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_9:
    // 0x800B98EC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800B98F0: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x800B98F4: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x800B98F8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800B98FC: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x800B9900: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800B9904: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800B9908: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x800B990C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800B9910: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800B9914: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x800B9918: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x800B991C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800B9920: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x800B9924: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
    // 0x800B9928: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800B992C: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    // 0x800B9930: jal         0x8002E330
    // 0x800B9934: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_10;
    // 0x800B9934: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_10:
    // 0x800B9938: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800B993C: lui         $t4, 0xD838
    ctx->r12 = S32(0XD838 << 16);
    // 0x800B9940: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x800B9944: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x800B9948: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800B994C: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x800B9950: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800B9954: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x800B9958: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
    // 0x800B995C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x800B9960: b           L_800B996C
    // 0x800B9964: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_800B996C;
    // 0x800B9964: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_800B9968:
    // 0x800B9968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800B996C:
    // 0x800B996C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B9970: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B9974: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9978: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800B997C: jr          $ra
    // 0x800B9980: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B9980: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800B9990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B9994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B9998: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800B999C: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800B99A0: addiu       $t8, $t8, -0x5920
    ctx->r24 = ADD32(ctx->r24, -0X5920);
    // 0x800B99A4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800B99A8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B99AC: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800B99B0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800B99B4: jal         0x800D2CC4
    // 0x800B99B8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    func_800D2CC4(rdram, ctx);
        goto after_0;
    // 0x800B99B8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    after_0:
    // 0x800B99BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B99C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B99C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B99CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B99CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B99D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B99D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800B99D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800B99DC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800B99E0: jal         0x800E7FCC
    // 0x800B99E4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800E7FCC(rdram, ctx);
        goto after_0;
    // 0x800B99E4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800B99E8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B99EC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800B99F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B99F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800B99F8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800B99FC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800B9A00: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800B9A04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800B9A08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800B9A0C: jal         0x800B9A24
    // 0x800B9A10: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_800B9A24(rdram, ctx);
        goto after_1;
    // 0x800B9A10: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x800B9A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B9A18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800B9A1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B9A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B9A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B9A2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B9A30: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800B9A34: addiu       $t8, $t8, -0x5920
    ctx->r24 = ADD32(ctx->r24, -0X5920);
    // 0x800B9A38: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800B9A3C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800B9A40: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800B9A44: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800B9A48: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800B9A4C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B9A50: lui         $t2, 0xF800
    ctx->r10 = S32(0XF800 << 16);
    // 0x800B9A54: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800B9A58: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800B9A5C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800B9A60: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x800B9A64: lw          $t3, 0x8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X8);
    // 0x800B9A68: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x800B9A6C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x800B9A70: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x800B9A74: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x800B9A78: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x800B9A7C: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x800B9A80: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x800B9A84: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x800B9A88: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x800B9A8C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x800B9A90: or          $t5, $t6, $t7
    ctx->r13 = ctx->r14 | ctx->r15;
    // 0x800B9A94: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800B9A98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B9A9C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800B9AA0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800B9AA4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800B9AA8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B9AAC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800B9AB0: addu        $t5, $a3, $t7
    ctx->r13 = ADD32(ctx->r7, ctx->r15);
    // 0x800B9AB4: addu        $t9, $t2, $t3
    ctx->r25 = ADD32(ctx->r10, ctx->r11);
    // 0x800B9AB8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800B9ABC: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x800B9AC0: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800B9AC4: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x800B9AC8: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x800B9ACC: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x800B9AD0: or          $t4, $t9, $t6
    ctx->r12 = ctx->r25 | ctx->r14;
    // 0x800B9AD4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800B9AD8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800B9ADC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x800B9AE0: andi        $t5, $t7, 0xFFF
    ctx->r13 = ctx->r15 & 0XFFF;
    // 0x800B9AE4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B9AE8: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x800B9AEC: sll         $t8, $t5, 12
    ctx->r24 = S32(ctx->r13 << 12);
    // 0x800B9AF0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x800B9AF4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800B9AF8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B9AFC: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x800B9B00: lui         $t3, 0x100
    ctx->r11 = S32(0X100 << 16);
    // 0x800B9B04: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800B9B08: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800B9B0C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800B9B10: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800B9B14: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800B9B18: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x800B9B1C: lui         $t2, 0xF100
    ctx->r10 = S32(0XF100 << 16);
    // 0x800B9B20: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800B9B24: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800B9B28: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x800B9B2C: jal         0x800D2CC4
    // 0x800B9B30: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    func_800D2CC4(rdram, ctx);
        goto after_0;
    // 0x800B9B30: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    after_0:
    // 0x800B9B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B9B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B9B3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800B9B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9B50: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x800B9B54: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800B9B58: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800B9B5C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800B9B60: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800B9B64: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800B9B68: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800B9B6C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x800B9B70: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800B9B74: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800B9B78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800B9B7C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800B9B80: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
L_800B9B84:
    // 0x800B9B84: lh          $a0, 0x34($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34);
    // 0x800B9B88: jal         0x800DC128
    // 0x800B9B8C: lh          $a1, 0x3A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X3A);
    func_800DC128(rdram, ctx);
        goto after_0;
    // 0x800B9B8C: lh          $a1, 0x3A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X3A);
    after_0:
    // 0x800B9B90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800B9B94: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x800B9B98: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800B9B9C: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800B9BA0: bne         $at, $zero, L_800B9B84
    if (ctx->r1 != 0) {
        // 0x800B9BA4: sh          $v0, -0x2($s2)
        MEM_H(-0X2, ctx->r18) = ctx->r2;
            goto L_800B9B84;
    }
    // 0x800B9BA4: sh          $v0, -0x2($s2)
    MEM_H(-0X2, ctx->r18) = ctx->r2;
    // 0x800B9BA8: lhu         $t6, 0xA8($s4)
    ctx->r14 = MEM_HU(ctx->r20, 0XA8);
    // 0x800B9BAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B9BB0: sb          $t6, 0x38($s5)
    MEM_B(0X38, ctx->r21) = ctx->r14;
    // 0x800B9BB4: lwc1        $f6, 0x18($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X18);
    // 0x800B9BB8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800B9BBC: nop

    // 0x800B9BC0: bc1f        L_800B9BD4
    if (!c1cs) {
        // 0x800B9BC4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800B9BD4;
    }
    // 0x800B9BC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800B9BC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B9BCC: b           L_800B9BE0
    // 0x800B9BD0: swc1        $f8, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f8.u32l;
        goto L_800B9BE0;
    // 0x800B9BD0: swc1        $f8, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f8.u32l;
L_800B9BD4:
    // 0x800B9BD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B9BD8: nop

    // 0x800B9BDC: swc1        $f10, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f10.u32l;
L_800B9BE0:
    // 0x800B9BE0: lh          $t7, 0x84($s4)
    ctx->r15 = MEM_H(ctx->r20, 0X84);
    // 0x800B9BE4: lh          $t8, 0x86($s4)
    ctx->r24 = MEM_H(ctx->r20, 0X86);
    // 0x800B9BE8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800B9BEC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800B9BF0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B9BF4: jal         0x800DC178
    // 0x800B9BF8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x800B9BF8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_1:
    // 0x800B9BFC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800B9C00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B9C04: nop

    // 0x800B9C08: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800B9C0C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800B9C10: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x800B9C14: nop

    // 0x800B9C18: sh          $t0, 0x2C($s5)
    MEM_H(0X2C, ctx->r21) = ctx->r8;
    // 0x800B9C1C: lwc1        $f14, 0x7C($s4)
    ctx->f14.u32l = MEM_W(ctx->r20, 0X7C);
    // 0x800B9C20: jal         0x800DC178
    // 0x800B9C24: lwc1        $f12, 0x78($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X78);
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x800B9C24: lwc1        $f12, 0x78($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X78);
    after_2:
    // 0x800B9C28: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800B9C2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B9C30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B9C34: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800B9C38: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800B9C3C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800B9C40: nop

    // 0x800B9C44: sh          $t2, 0x2E($s5)
    MEM_H(0X2E, ctx->r21) = ctx->r10;
    // 0x800B9C48: lbu         $v1, 0x5($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X5);
    // 0x800B9C4C: beql        $v1, $zero, L_800B9C74
    if (ctx->r3 == 0) {
        // 0x800B9C50: lhu         $t3, 0x0($s4)
        ctx->r11 = MEM_HU(ctx->r20, 0X0);
            goto L_800B9C74;
    }
    goto skip_0;
    // 0x800B9C50: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    skip_0:
    // 0x800B9C54: beq         $v1, $at, L_800B9D10
    if (ctx->r3 == ctx->r1) {
        // 0x800B9C58: addiu       $s0, $sp, 0x8C
        ctx->r16 = ADD32(ctx->r29, 0X8C);
            goto L_800B9D10;
    }
    // 0x800B9C58: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x800B9C5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B9C60: beq         $v1, $at, L_800B9D84
    if (ctx->r3 == ctx->r1) {
        // 0x800B9C64: addiu       $s0, $sp, 0x80
        ctx->r16 = ADD32(ctx->r29, 0X80);
            goto L_800B9D84;
    }
    // 0x800B9C64: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x800B9C68: b           L_800B9DF4
    // 0x800B9C6C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
        goto L_800B9DF4;
    // 0x800B9C6C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x800B9C70: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
L_800B9C74:
    // 0x800B9C74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800B9C78: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800B9C7C: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x800B9C80: beq         $t4, $zero, L_800B9CDC
    if (ctx->r12 == 0) {
        // 0x800B9C84: or          $s2, $s5, $zero
        ctx->r18 = ctx->r21 | 0;
            goto L_800B9CDC;
    }
    // 0x800B9C84: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x800B9C88: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x800B9C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800B9C90: jal         0x800EE88C
    // 0x800B9C94: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
    func_800EE88C(rdram, ctx);
        goto after_3;
    // 0x800B9C94: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
    after_3:
    // 0x800B9C98: addiu       $s1, $sp, 0xA4
    ctx->r17 = ADD32(ctx->r29, 0XA4);
    // 0x800B9C9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800B9CA0: jal         0x800EE88C
    // 0x800B9CA4: addiu       $a1, $s4, 0x2E
    ctx->r5 = ADD32(ctx->r20, 0X2E);
    func_800EE88C(rdram, ctx);
        goto after_4;
    // 0x800B9CA4: addiu       $a1, $s4, 0x2E
    ctx->r5 = ADD32(ctx->r20, 0X2E);
    after_4:
    // 0x800B9CA8: jal         0x800DC0C0
    // 0x800B9CAC: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x800B9CAC: nop

    after_5:
    // 0x800B9CB0: addiu       $s2, $sp, 0x98
    ctx->r18 = ADD32(ctx->r29, 0X98);
    // 0x800B9CB4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800B9CB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800B9CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800B9CC0: jal         0x800EFE50
    // 0x800B9CC4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFE50(rdram, ctx);
        goto after_6;
    // 0x800B9CC4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x800B9CC8: addiu       $a0, $s5, 0x6
    ctx->r4 = ADD32(ctx->r21, 0X6);
    // 0x800B9CCC: jal         0x800EE940
    // 0x800B9CD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE940(rdram, ctx);
        goto after_7;
    // 0x800B9CD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x800B9CD4: b           L_800B9DF4
    // 0x800B9CD8: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
        goto L_800B9DF4;
    // 0x800B9CD8: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_800B9CDC:
    // 0x800B9CDC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_800B9CE0:
    // 0x800B9CE0: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    // 0x800B9CE4: jal         0x800DC128
    // 0x800B9CE8: lh          $a1, 0x2E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2E);
    func_800DC128(rdram, ctx);
        goto after_8;
    // 0x800B9CE8: lh          $a1, 0x2E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2E);
    after_8:
    // 0x800B9CEC: lh          $t5, 0x12($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X12);
    // 0x800B9CF0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800B9CF4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800B9CF8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x800B9CFC: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800B9D00: bne         $s1, $s3, L_800B9CE0
    if (ctx->r17 != ctx->r19) {
        // 0x800B9D04: sh          $t6, 0x4($s2)
        MEM_H(0X4, ctx->r18) = ctx->r14;
            goto L_800B9CE0;
    }
    // 0x800B9D04: sh          $t6, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r14;
    // 0x800B9D08: b           L_800B9DF8
    // 0x800B9D0C: lh          $a0, 0x9A($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X9A);
        goto L_800B9DF8;
    // 0x800B9D0C: lh          $a0, 0x9A($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X9A);
L_800B9D10:
    // 0x800B9D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800B9D14: jal         0x800EE88C
    // 0x800B9D18: addiu       $a1, $s4, 0x12
    ctx->r5 = ADD32(ctx->r20, 0X12);
    func_800EE88C(rdram, ctx);
        goto after_9;
    // 0x800B9D18: addiu       $a1, $s4, 0x12
    ctx->r5 = ADD32(ctx->r20, 0X12);
    after_9:
    // 0x800B9D1C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800B9D20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B9D24: jal         0x800DC178
    // 0x800B9D28: lwc1        $f14, 0x56C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56C0);
    func_800DC178(rdram, ctx);
        goto after_10;
    // 0x800B9D28: lwc1        $f14, 0x56C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56C0);
    after_10:
    // 0x800B9D2C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800B9D30: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B9D34: lwc1        $f14, 0x56C4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56C4);
    // 0x800B9D38: jal         0x800DC178
    // 0x800B9D3C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_800DC178(rdram, ctx);
        goto after_11;
    // 0x800B9D3C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x800B9D40: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x800B9D44: lh          $a1, 0x2A($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X2A);
    // 0x800B9D48: jal         0x800DC128
    // 0x800B9D4C: lh          $a0, 0x28($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X28);
    func_800DC128(rdram, ctx);
        goto after_12;
    // 0x800B9D4C: lh          $a0, 0x28($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X28);
    after_12:
    // 0x800B9D50: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800B9D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800B9D58: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800B9D5C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B9D60: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x800B9D64: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800B9D68: jal         0x800EF214
    // 0x800B9D6C: nop

    func_800EF214(rdram, ctx);
        goto after_13;
    // 0x800B9D6C: nop

    after_13:
    // 0x800B9D70: addiu       $a0, $s5, 0x6
    ctx->r4 = ADD32(ctx->r21, 0X6);
    // 0x800B9D74: jal         0x800EE940
    // 0x800B9D78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE940(rdram, ctx);
        goto after_14;
    // 0x800B9D78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x800B9D7C: b           L_800B9DF4
    // 0x800B9D80: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
        goto L_800B9DF4;
    // 0x800B9D80: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_800B9D84:
    // 0x800B9D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800B9D88: jal         0x800EE88C
    // 0x800B9D8C: addiu       $a1, $s4, 0x12
    ctx->r5 = ADD32(ctx->r20, 0X12);
    func_800EE88C(rdram, ctx);
        goto after_15;
    // 0x800B9D8C: addiu       $a1, $s4, 0x12
    ctx->r5 = ADD32(ctx->r20, 0X12);
    after_15:
    // 0x800B9D90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800B9D94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800B9D98: jal         0x800DC178
    // 0x800B9D9C: lwc1        $f14, 0x56C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56C8);
    func_800DC178(rdram, ctx);
        goto after_16;
    // 0x800B9D9C: lwc1        $f14, 0x56C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X56C8);
    after_16:
    // 0x800B9DA0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x800B9DA4: lh          $a1, 0x2A($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X2A);
    // 0x800B9DA8: jal         0x800DC128
    // 0x800B9DAC: lh          $a0, 0x28($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X28);
    func_800DC128(rdram, ctx);
        goto after_17;
    // 0x800B9DAC: lh          $a0, 0x28($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X28);
    after_17:
    // 0x800B9DB0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800B9DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800B9DB8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800B9DBC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B9DC0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800B9DC4: jal         0x800EF1B8
    // 0x800B9DC8: nop

    func_800EF1B8(rdram, ctx);
        goto after_18;
    // 0x800B9DC8: nop

    after_18:
    // 0x800B9DCC: addiu       $a0, $s5, 0x6
    ctx->r4 = ADD32(ctx->r21, 0X6);
    // 0x800B9DD0: jal         0x800EE940
    // 0x800B9DD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE940(rdram, ctx);
        goto after_19;
    // 0x800B9DD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x800B9DD8: lh          $a0, 0x2E($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X2E);
    // 0x800B9DDC: jal         0x800DC128
    // 0x800B9DE0: lh          $a1, 0x2C($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X2C);
    func_800DC128(rdram, ctx);
        goto after_20;
    // 0x800B9DE0: lh          $a1, 0x2C($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X2C);
    after_20:
    // 0x800B9DE4: lh          $t7, 0x8($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X8);
    // 0x800B9DE8: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x800B9DEC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800B9DF0: sh          $t8, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r24;
L_800B9DF4:
    // 0x800B9DF4: lh          $a0, 0x9A($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X9A);
L_800B9DF8:
    // 0x800B9DF8: jal         0x800DC128
    // 0x800B9DFC: lh          $a1, 0x9C($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X9C);
    func_800DC128(rdram, ctx);
        goto after_21;
    // 0x800B9DFC: lh          $a1, 0x9C($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X9C);
    after_21:
    // 0x800B9E00: sh          $v0, 0x30($s5)
    MEM_H(0X30, ctx->r21) = ctx->r2;
    // 0x800B9E04: lh          $t9, 0x30($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X30);
    // 0x800B9E08: sh          $t9, 0x32($s5)
    MEM_H(0X32, ctx->r21) = ctx->r25;
    // 0x800B9E0C: lh          $a0, 0x9E($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X9E);
    // 0x800B9E10: bne         $a0, $zero, L_800B9E2C
    if (ctx->r4 != 0) {
        // 0x800B9E14: nop
    
            goto L_800B9E2C;
    }
    // 0x800B9E14: nop

    // 0x800B9E18: lh          $t0, 0xA0($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XA0);
    // 0x800B9E1C: bne         $t0, $zero, L_800B9E2C
    if (ctx->r8 != 0) {
        // 0x800B9E20: nop
    
            goto L_800B9E2C;
    }
    // 0x800B9E20: nop

    // 0x800B9E24: b           L_800B9E40
    // 0x800B9E28: sh          $zero, 0x34($s5)
    MEM_H(0X34, ctx->r21) = 0;
        goto L_800B9E40;
    // 0x800B9E28: sh          $zero, 0x34($s5)
    MEM_H(0X34, ctx->r21) = 0;
L_800B9E2C:
    // 0x800B9E2C: jal         0x800DC128
    // 0x800B9E30: lh          $a1, 0xA0($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XA0);
    func_800DC128(rdram, ctx);
        goto after_22;
    // 0x800B9E30: lh          $a1, 0xA0($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XA0);
    after_22:
    // 0x800B9E34: lh          $t1, 0x32($s5)
    ctx->r9 = MEM_H(ctx->r21, 0X32);
    // 0x800B9E38: subu        $t2, $v0, $t1
    ctx->r10 = SUB32(ctx->r2, ctx->r9);
    // 0x800B9E3C: sh          $t2, 0x34($s5)
    MEM_H(0X34, ctx->r21) = ctx->r10;
L_800B9E40:
    // 0x800B9E40: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x800B9E44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800B9E48: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x800B9E4C: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x800B9E50: beq         $t4, $zero, L_800B9E80
    if (ctx->r12 == 0) {
        // 0x800B9E54: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_800B9E80;
    }
L_800B9E54:
    // 0x800B9E54: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B9E58: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B9E5C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800B9E60: jal         0x800DC178
    // 0x800B9E64: nop

    func_800DC178(rdram, ctx);
        goto after_23;
    // 0x800B9E64: nop

    after_23:
    // 0x800B9E68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800B9E6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800B9E70: bne         $s1, $s3, L_800B9E54
    if (ctx->r17 != ctx->r19) {
        // 0x800B9E74: swc1        $f0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
            goto L_800B9E54;
    }
    // 0x800B9E74: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x800B9E78: b           L_800B9EC0
    // 0x800B9E7C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_800B9EC0;
    // 0x800B9E7C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800B9E80:
    // 0x800B9E80: lh          $t5, 0x4C($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X4C);
    // 0x800B9E84: lh          $t6, 0x4E($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X4E);
    // 0x800B9E88: lh          $t7, 0x50($s4)
    ctx->r15 = MEM_H(ctx->r20, 0X50);
    // 0x800B9E8C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800B9E90: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800B9E94: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800B9E98: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B9E9C: addiu       $a0, $s5, 0x10
    ctx->r4 = ADD32(ctx->r21, 0X10);
    // 0x800B9EA0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800B9EA4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800B9EA8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B9EAC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800B9EB0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800B9EB4: jal         0x800EFA4C
    // 0x800B9EB8: nop

    func_800EFA4C(rdram, ctx);
        goto after_24;
    // 0x800B9EB8: nop

    after_24:
    // 0x800B9EBC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800B9EC0:
    // 0x800B9EC0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800B9EC4: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
L_800B9EC8:
    // 0x800B9EC8: lh          $a0, 0x40($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X40);
    // 0x800B9ECC: jal         0x800DC128
    // 0x800B9ED0: lh          $a1, 0x46($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X46);
    func_800DC128(rdram, ctx);
        goto after_25;
    // 0x800B9ED0: lh          $a1, 0x46($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X46);
    after_25:
    // 0x800B9ED4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800B9ED8: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x800B9EDC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800B9EE0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800B9EE4: bne         $at, $zero, L_800B9EC8
    if (ctx->r1 != 0) {
        // 0x800B9EE8: sh          $v0, 0x1E($s2)
        MEM_H(0X1E, ctx->r18) = ctx->r2;
            goto L_800B9EC8;
    }
    // 0x800B9EE8: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x800B9EEC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B9EF0: nop

    // 0x800B9EF4: swc1        $f18, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->f18.u32l;
    // 0x800B9EF8: lh          $a1, 0xA4($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XA4);
    // 0x800B9EFC: jal         0x800DC128
    // 0x800B9F00: lh          $a0, 0xA2($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XA2);
    func_800DC128(rdram, ctx);
        goto after_26;
    // 0x800B9F00: lh          $a0, 0xA2($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XA2);
    after_26:
    // 0x800B9F04: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x800B9F08: sh          $t8, 0x36($s5)
    MEM_H(0X36, ctx->r21) = ctx->r24;
    // 0x800B9F0C: lbu         $v1, 0x4($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X4);
    // 0x800B9F10: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800B9F14: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800B9F18: beq         $v1, $zero, L_800B9F3C
    if (ctx->r3 == 0) {
        // 0x800B9F1C: or          $s2, $s5, $zero
        ctx->r18 = ctx->r21 | 0;
            goto L_800B9F3C;
    }
    // 0x800B9F1C: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x800B9F20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B9F24: beq         $v1, $at, L_800B9F64
    if (ctx->r3 == ctx->r1) {
        // 0x800B9F28: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800B9F64;
    }
    // 0x800B9F28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B9F2C: beq         $v1, $at, L_800BA018
    if (ctx->r3 == ctx->r1) {
        // 0x800B9F30: addiu       $a0, $s5, 0x6
        ctx->r4 = ADD32(ctx->r21, 0X6);
            goto L_800BA018;
    }
    // 0x800B9F30: addiu       $a0, $s5, 0x6
    ctx->r4 = ADD32(ctx->r21, 0X6);
    // 0x800B9F34: b           L_800BA144
    // 0x800B9F38: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
        goto L_800BA144;
    // 0x800B9F38: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
L_800B9F3C:
    // 0x800B9F3C: lh          $a0, 0xC4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC4);
    // 0x800B9F40: jal         0x800DC128
    // 0x800B9F44: lh          $a1, 0xCA($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XCA);
    func_800DC128(rdram, ctx);
        goto after_27;
    // 0x800B9F44: lh          $a1, 0xCA($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XCA);
    after_27:
    // 0x800B9F48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800B9F4C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800B9F50: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800B9F54: bne         $s1, $s3, L_800B9F3C
    if (ctx->r17 != ctx->r19) {
        // 0x800B9F58: sh          $v0, 0x24($s2)
        MEM_H(0X24, ctx->r18) = ctx->r2;
            goto L_800B9F3C;
    }
    // 0x800B9F58: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x800B9F5C: b           L_800BA144
    // 0x800B9F60: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
        goto L_800BA144;
    // 0x800B9F60: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
L_800B9F64:
    // 0x800B9F64: lh          $t9, 0xCA($s4)
    ctx->r25 = MEM_H(ctx->r20, 0XCA);
    // 0x800B9F68: lh          $t0, 0xC8($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XC8);
    // 0x800B9F6C: jal         0x800F0E44
    // 0x800B9F70: subu        $a0, $t9, $t0
    ctx->r4 = SUB32(ctx->r25, ctx->r8);
    func_800F0E44(rdram, ctx);
        goto after_28;
    // 0x800B9F70: subu        $a0, $t9, $t0
    ctx->r4 = SUB32(ctx->r25, ctx->r8);
    after_28:
    // 0x800B9F74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B9F78: jal         0x800DC128
    // 0x800B9F7C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800DC128(rdram, ctx);
        goto after_29;
    // 0x800B9F7C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_29:
    // 0x800B9F80: lh          $t1, 0xC8($s4)
    ctx->r9 = MEM_H(ctx->r20, 0XC8);
    // 0x800B9F84: jal         0x800F0E44
    // 0x800B9F88: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    func_800F0E44(rdram, ctx);
        goto after_30;
    // 0x800B9F88: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    after_30:
    // 0x800B9F8C: lh          $t2, 0xC6($s4)
    ctx->r10 = MEM_H(ctx->r20, 0XC6);
    // 0x800B9F90: lh          $t3, 0xC4($s4)
    ctx->r11 = MEM_H(ctx->r20, 0XC4);
    // 0x800B9F94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B9F98: jal         0x800F0E44
    // 0x800B9F9C: subu        $a0, $t2, $t3
    ctx->r4 = SUB32(ctx->r10, ctx->r11);
    func_800F0E44(rdram, ctx);
        goto after_31;
    // 0x800B9F9C: subu        $a0, $t2, $t3
    ctx->r4 = SUB32(ctx->r10, ctx->r11);
    after_31:
    // 0x800B9FA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800B9FA4: jal         0x800DC128
    // 0x800B9FA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800DC128(rdram, ctx);
        goto after_32;
    // 0x800B9FA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_32:
    // 0x800B9FAC: lh          $t4, 0xC4($s4)
    ctx->r12 = MEM_H(ctx->r20, 0XC4);
    // 0x800B9FB0: jal         0x800F0E44
    // 0x800B9FB4: addu        $a0, $v0, $t4
    ctx->r4 = ADD32(ctx->r2, ctx->r12);
    func_800F0E44(rdram, ctx);
        goto after_33;
    // 0x800B9FB4: addu        $a0, $v0, $t4
    ctx->r4 = ADD32(ctx->r2, ctx->r12);
    after_33:
    // 0x800B9FB8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800B9FBC: lh          $a0, 0xCC($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XCC);
    // 0x800B9FC0: jal         0x800DC128
    // 0x800B9FC4: lh          $a1, 0xCE($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XCE);
    func_800DC128(rdram, ctx);
        goto after_34;
    // 0x800B9FC4: lh          $a1, 0xCE($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XCE);
    after_34:
    // 0x800B9FC8: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x800B9FCC: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x800B9FD0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800B9FD4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B9FD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800B9FDC: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x800B9FE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800B9FE4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800B9FE8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B9FEC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800B9FF0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x800B9FF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B9FF8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800B9FFC: jal         0x800EF4E4
    // 0x800BA000: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_35;
    // 0x800BA000: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_35:
    // 0x800BA004: addiu       $a0, $s5, 0x26
    ctx->r4 = ADD32(ctx->r21, 0X26);
    // 0x800BA008: jal         0x800EE940
    // 0x800BA00C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE940(rdram, ctx);
        goto after_36;
    // 0x800BA00C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_36:
    // 0x800BA010: b           L_800BA144
    // 0x800BA014: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
        goto L_800BA144;
    // 0x800BA014: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
L_800BA018:
    // 0x800BA018: jal         0x800EEDA0
    // 0x800BA01C: addiu       $a1, $s4, 0xC8
    ctx->r5 = ADD32(ctx->r20, 0XC8);
    func_800EEDA0(rdram, ctx);
        goto after_37;
    // 0x800BA01C: addiu       $a1, $s4, 0xC8
    ctx->r5 = ADD32(ctx->r20, 0XC8);
    after_37:
    // 0x800BA020: bnel        $v0, $zero, L_800BA128
    if (ctx->r2 != 0) {
        // 0x800BA024: sh          $zero, 0x2A($s5)
        MEM_H(0X2A, ctx->r21) = 0;
            goto L_800BA128;
    }
    goto skip_1;
    // 0x800BA024: sh          $zero, 0x2A($s5)
    MEM_H(0X2A, ctx->r21) = 0;
    skip_1:
    // 0x800BA028: lhu         $t5, 0x0($s4)
    ctx->r13 = MEM_HU(ctx->r20, 0X0);
    // 0x800BA02C: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x800BA030: beql        $t6, $zero, L_800BA094
    if (ctx->r14 == 0) {
        // 0x800BA034: lh          $t6, 0x6($s5)
        ctx->r14 = MEM_H(ctx->r21, 0X6);
            goto L_800BA094;
    }
    goto skip_2;
    // 0x800BA034: lh          $t6, 0x6($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X6);
    skip_2:
    // 0x800BA038: lh          $t7, 0xC8($s4)
    ctx->r15 = MEM_H(ctx->r20, 0XC8);
    // 0x800BA03C: lh          $t8, 0x6($s5)
    ctx->r24 = MEM_H(ctx->r21, 0X6);
    // 0x800BA040: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x800BA044: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800BA048: nop

    // 0x800BA04C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BA050: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x800BA054: lh          $t1, 0x8($s5)
    ctx->r9 = MEM_H(ctx->r21, 0X8);
    // 0x800BA058: lh          $t0, 0xCA($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XCA);
    // 0x800BA05C: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x800BA060: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800BA064: nop

    // 0x800BA068: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BA06C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x800BA070: lh          $t4, 0xA($s5)
    ctx->r12 = MEM_H(ctx->r21, 0XA);
    // 0x800BA074: lh          $t3, 0xCC($s4)
    ctx->r11 = MEM_H(ctx->r20, 0XCC);
    // 0x800BA078: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x800BA07C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800BA080: nop

    // 0x800BA084: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BA088: b           L_800BA0E4
    // 0x800BA08C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
        goto L_800BA0E4;
    // 0x800BA08C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x800BA090: lh          $t6, 0x6($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X6);
L_800BA094:
    // 0x800BA094: lh          $t7, 0xC8($s4)
    ctx->r15 = MEM_H(ctx->r20, 0XC8);
    // 0x800BA098: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x800BA09C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800BA0A0: nop

    // 0x800BA0A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BA0A8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x800BA0AC: lh          $t0, 0xCA($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XCA);
    // 0x800BA0B0: lh          $t9, 0x8($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X8);
    // 0x800BA0B4: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x800BA0B8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800BA0BC: nop

    // 0x800BA0C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BA0C4: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x800BA0C8: lh          $t3, 0xCC($s4)
    ctx->r11 = MEM_H(ctx->r20, 0XCC);
    // 0x800BA0CC: lh          $t2, 0xA($s5)
    ctx->r10 = MEM_H(ctx->r21, 0XA);
    // 0x800BA0D0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x800BA0D4: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800BA0D8: nop

    // 0x800BA0DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BA0E0: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
L_800BA0E4:
    // 0x800BA0E4: lh          $t5, 0xC4($s4)
    ctx->r13 = MEM_H(ctx->r20, 0XC4);
    // 0x800BA0E8: lh          $t6, 0xC6($s4)
    ctx->r14 = MEM_H(ctx->r20, 0XC6);
    // 0x800BA0EC: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800BA0F0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x800BA0F4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BA0F8: jal         0x800DC178
    // 0x800BA0FC: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    func_800DC178(rdram, ctx);
        goto after_38;
    // 0x800BA0FC: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_38:
    // 0x800BA100: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x800BA104: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800BA108: jal         0x800EF368
    // 0x800BA10C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EF368(rdram, ctx);
        goto after_39;
    // 0x800BA10C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x800BA110: addiu       $a0, $s5, 0x26
    ctx->r4 = ADD32(ctx->r21, 0X26);
    // 0x800BA114: jal         0x800EE940
    // 0x800BA118: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE940(rdram, ctx);
        goto after_40;
    // 0x800BA118: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_40:
    // 0x800BA11C: b           L_800BA144
    // 0x800BA120: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
        goto L_800BA144;
    // 0x800BA120: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
    // 0x800BA124: sh          $zero, 0x2A($s5)
    MEM_H(0X2A, ctx->r21) = 0;
L_800BA128:
    // 0x800BA128: lh          $t7, 0x2A($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2A);
    // 0x800BA12C: sh          $t7, 0x26($s5)
    MEM_H(0X26, ctx->r21) = ctx->r15;
    // 0x800BA130: lh          $a1, 0xC6($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XC6);
    // 0x800BA134: jal         0x800DC128
    // 0x800BA138: lh          $a0, 0xC4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XC4);
    func_800DC128(rdram, ctx);
        goto after_41;
    // 0x800BA138: lh          $a0, 0xC4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XC4);
    after_41:
    // 0x800BA13C: sh          $v0, 0x28($s5)
    MEM_H(0X28, ctx->r21) = ctx->r2;
    // 0x800BA140: lbu         $t9, 0x39($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X39);
L_800BA144:
    // 0x800BA144: ori         $t0, $t9, 0x80
    ctx->r8 = ctx->r25 | 0X80;
    // 0x800BA148: sb          $t0, 0x39($s5)
    MEM_B(0X39, ctx->r21) = ctx->r8;
    // 0x800BA14C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x800BA150: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
    // 0x800BA154: beql        $t1, $zero, L_800BA168
    if (ctx->r9 == 0) {
        // 0x800BA158: andi        $t2, $v0, 0x10
        ctx->r10 = ctx->r2 & 0X10;
            goto L_800BA168;
    }
    goto skip_3;
    // 0x800BA158: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
    skip_3:
    // 0x800BA15C: sb          $zero, 0x52($s4)
    MEM_B(0X52, ctx->r20) = 0;
    // 0x800BA160: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x800BA164: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
L_800BA168:
    // 0x800BA168: beql        $t2, $zero, L_800BA178
    if (ctx->r10 == 0) {
        // 0x800BA16C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_800BA178;
    }
    goto skip_4;
    // 0x800BA16C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x800BA170: sb          $zero, 0x53($s4)
    MEM_B(0X53, ctx->r20) = 0;
    // 0x800BA174: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800BA178:
    // 0x800BA178: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA17C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800BA180: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800BA184: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800BA188: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA18C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800BA190: jr          $ra
    // 0x800BA194: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x800BA194: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_800BA198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA198: beq         $a0, $zero, L_800BA1C8
    if (ctx->r4 == 0) {
        // 0x800BA19C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BA1C8;
    }
    // 0x800BA19C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BA1A0: lw          $v1, 0x90($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X90);
    // 0x800BA1A4: beq         $v1, $zero, L_800BA1C8
    if (ctx->r3 == 0) {
        // 0x800BA1A8: nop
    
            goto L_800BA1C8;
    }
    // 0x800BA1A8: nop

    // 0x800BA1AC: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x800BA1B0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800BA1B4: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x800BA1B8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800BA1BC: mflo        $v0
    ctx->r2 = lo;
    // 0x800BA1C0: jr          $ra
    // 0x800BA1C4: nop

    return;
    // 0x800BA1C4: nop

L_800BA1C8:
    // 0x800BA1C8: jr          $ra
    // 0x800BA1CC: nop

    return;
    // 0x800BA1CC: nop

;}
RECOMP_FUNC void func_800BA1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA1D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BA1D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA1D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BA1DC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800BA1E0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800BA1E4: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x800BA1E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BA1EC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    // 0x800BA1F0: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x800BA1F4: jal         0x800EE940
    // 0x800BA1F8: sh          $t7, -0x28($a0)
    MEM_H(-0X28, ctx->r4) = ctx->r15;
    func_800EE940(rdram, ctx);
        goto after_0;
    // 0x800BA1F8: sh          $t7, -0x28($a0)
    MEM_H(-0X28, ctx->r4) = ctx->r15;
    after_0:
    // 0x800BA1FC: addiu       $a0, $s0, 0x2E
    ctx->r4 = ADD32(ctx->r16, 0X2E);
    // 0x800BA200: jal         0x800EE940
    // 0x800BA204: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800EE940(rdram, ctx);
        goto after_1;
    // 0x800BA204: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800BA208: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x800BA20C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800BA210: jal         0x800BA22C
    // 0x800BA214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BA22C(rdram, ctx);
        goto after_2;
    // 0x800BA214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800BA218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA21C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BA220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BA224: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA22C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BA230: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BA234: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800BA238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BA23C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800BA240: blez        $a1, L_800BA278
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800BA244: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800BA278;
    }
    // 0x800BA244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA248: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
L_800BA24C:
    // 0x800BA24C: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x800BA250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA254: addiu       $t7, $a1, 0x3C
    ctx->r15 = ADD32(ctx->r5, 0X3C);
    // 0x800BA258: sltu        $at, $a1, $t6
    ctx->r1 = ctx->r5 < ctx->r14 ? 1 : 0;
    // 0x800BA25C: beql        $at, $zero, L_800BA270
    if (ctx->r1 == 0) {
        // 0x800BA260: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_800BA270;
    }
    goto skip_0;
    // 0x800BA260: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_0:
    // 0x800BA264: jal         0x800B9B50
    // 0x800BA268: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    func_800B9B50(rdram, ctx);
        goto after_0;
    // 0x800BA268: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    after_0:
    // 0x800BA26C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800BA270:
    // 0x800BA270: bgtzl       $s1, L_800BA24C
    if (SIGNED(ctx->r17) > 0) {
        // 0x800BA274: lw          $a1, 0x90($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X90);
            goto L_800BA24C;
    }
    goto skip_1;
    // 0x800BA274: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    skip_1:
L_800BA278:
    // 0x800BA278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA27C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800BA280: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800BA284: jr          $ra
    // 0x800BA288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800BA288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800BA28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA28C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x800BA290: lw          $t7, 0x8C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8C);
    // 0x800BA294: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800BA298: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x800BA29C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800BA2A0: mflo        $t8
    ctx->r24 = lo;
    // 0x800BA2A4: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x800BA2A8: beq         $v0, $zero, L_800BA2BC
    if (ctx->r2 == 0) {
        // 0x800BA2AC: nop
    
            goto L_800BA2BC;
    }
    // 0x800BA2AC: nop

    // 0x800BA2B0: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x800BA2B4: xori        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 ^ 0X2;
    // 0x800BA2B8: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
L_800BA2BC:
    // 0x800BA2BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA2C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA2CC: jal         0x8001B084
    // 0x800BA2D0: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800BA2D0: nop

    after_0:
    // 0x800BA2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA2D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA2DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BA2E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA2E8: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x800BA2EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BA2F0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800BA2F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800BA2F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA2FC: addiu       $a2, $v0, 0xD4
    ctx->r6 = ADD32(ctx->r2, 0XD4);
    // 0x800BA300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BA304: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800BA308: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA30C: jal         0x8001ACCC
    // 0x800BA310: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800BA310: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x800BA314: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800BA318: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800BA31C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800BA320: jal         0x8001BCF8
    // 0x800BA324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    rare_memset(rdram, ctx);
        goto after_1;
    // 0x800BA324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800BA328: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800BA32C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BA330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BA334: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800BA338: sb          $t6, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r14;
    // 0x800BA33C: sb          $v0, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r2;
    // 0x800BA340: sb          $v0, 0x82($s0)
    MEM_B(0X82, ctx->r16) = ctx->r2;
    // 0x800BA344: sb          $v0, 0x81($s0)
    MEM_B(0X81, ctx->r16) = ctx->r2;
    // 0x800BA348: sb          $v0, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r2;
    // 0x800BA34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA350: addiu       $a1, $zero, -0x8000
    ctx->r5 = ADD32(0, -0X8000);
    // 0x800BA354: jal         0x800BA4D0
    // 0x800BA358: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    func_800BA4D0(rdram, ctx);
        goto after_2;
    // 0x800BA358: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x800BA35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA360: jal         0x800BA568
    // 0x800BA364: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    func_800BA568(rdram, ctx);
        goto after_3;
    // 0x800BA364: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    after_3:
    // 0x800BA368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA36C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800BA370: jal         0x800BA894
    // 0x800BA374: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_800BA894(rdram, ctx);
        goto after_4;
    // 0x800BA374: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_4:
    // 0x800BA378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA37C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800BA380: jal         0x800BA8F8
    // 0x800BA384: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_800BA8F8(rdram, ctx);
        goto after_5;
    // 0x800BA384: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_5:
    // 0x800BA388: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x800BA38C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x800BA390: jal         0x800BA4C4
    // 0x800BA394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BA4C4(rdram, ctx);
        goto after_6;
    // 0x800BA394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800BA398: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BA39C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800BA3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA3A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800BA3A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800BA3AC: jal         0x800BA554
    // 0x800BA3B0: nop

    func_800BA554(rdram, ctx);
        goto after_7;
    // 0x800BA3B0: nop

    after_7:
    // 0x800BA3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BA3B8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800BA3BC: jal         0x800BA7C4
    // 0x800BA3C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800BA7C4(rdram, ctx);
        goto after_8;
    // 0x800BA3C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_8:
    // 0x800BA3C4: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    // 0x800BA3C8: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x800BA3CC: sw          $v1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r3;
    // 0x800BA3D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BA3D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BA3D8: sb          $a0, 0x52($s0)
    MEM_B(0X52, ctx->r16) = ctx->r4;
    // 0x800BA3DC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x800BA3E0: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x800BA3E4: sb          $a0, 0x53($s0)
    MEM_B(0X53, ctx->r16) = ctx->r4;
    // 0x800BA3E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA3EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800BA3F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BA3F4: jr          $ra
    // 0x800BA3F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800BA3F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800BA3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA3FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BA400: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA404: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BA408: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x800BA40C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BA410: beql        $a1, $t6, L_800BA440
    if (ctx->r5 == ctx->r14) {
        // 0x800BA414: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800BA440;
    }
    goto skip_0;
    // 0x800BA414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800BA418: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x800BA41C: jal         0x800D738C
    // 0x800BA420: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    func_800D738C(rdram, ctx);
        goto after_0;
    // 0x800BA420: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    after_0:
    // 0x800BA424: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x800BA428: jal         0x800D674C
    // 0x800BA42C: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x800BA42C: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    after_1:
    // 0x800BA430: jal         0x800AF5A0
    // 0x800BA434: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800AF5A0(rdram, ctx);
        goto after_2;
    // 0x800BA434: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800BA438: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x800BA43C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800BA440:
    // 0x800BA440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BA444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BA448: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BA45C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BA460: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA464: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BA468: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800BA46C: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x800BA470: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x800BA474: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800BA478: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800BA47C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA480: jal         0x800EFA6C
    // 0x800BA484: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_800EFA6C(rdram, ctx);
        goto after_0;
    // 0x800BA484: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_0:
    // 0x800BA488: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BA48C: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800BA490: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x800BA494: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x800BA498: jal         0x800EFA6C
    // 0x800BA49C: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    func_800EFA6C(rdram, ctx);
        goto after_1;
    // 0x800BA49C: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    after_1:
    // 0x800BA4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA4A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA4B0: jr          $ra
    // 0x800BA4B4: sb          $a1, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r5;
    return;
    // 0x800BA4B4: sb          $a1, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800BA4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA4B8: sh          $a1, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r5;
    // 0x800BA4BC: jr          $ra
    // 0x800BA4C0: sw          $a2, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r6;
    return;
    // 0x800BA4C0: sw          $a2, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_800BA4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA4C4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA4C8: jr          $ra
    // 0x800BA4CC: swc1        $f12, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800BA4CC: swc1        $f12, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800BA4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA4D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BA4D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA4D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800BA4DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800BA4E0: jal         0x800B5698
    // 0x800BA4E4: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    func_800B5698(rdram, ctx);
        goto after_0;
    // 0x800BA4E4: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    after_0:
    // 0x800BA4E8: beq         $v0, $zero, L_800BA52C
    if (ctx->r2 == 0) {
        // 0x800BA4EC: lh          $v1, 0x26($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X26);
            goto L_800BA52C;
    }
    // 0x800BA4EC: lh          $v1, 0x26($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X26);
    // 0x800BA4F0: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x800BA4F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800BA4F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800BA4FC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BA500: beql        $at, $zero, L_800BA518
    if (ctx->r1 == 0) {
        // 0x800BA504: lh          $t7, 0xA8($a0)
        ctx->r15 = MEM_H(ctx->r4, 0XA8);
            goto L_800BA518;
    }
    goto skip_0;
    // 0x800BA504: lh          $t7, 0xA8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA8);
    skip_0:
    // 0x800BA508: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x800BA50C: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800BA510: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x800BA514: lh          $t7, 0xA8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA8);
L_800BA518:
    // 0x800BA518: bnel        $t7, $zero, L_800BA530
    if (ctx->r15 != 0) {
        // 0x800BA51C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800BA530;
    }
    goto skip_1;
    // 0x800BA51C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x800BA520: jal         0x800BA54C
    // 0x800BA524: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    func_800BA54C(rdram, ctx);
        goto after_1;
    // 0x800BA524: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    after_1:
    // 0x800BA528: lh          $v1, 0x26($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X26);
L_800BA52C:
    // 0x800BA52C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800BA530:
    // 0x800BA530: sh          $v1, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r3;
    // 0x800BA534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BA53C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA544: jr          $ra
    // 0x800BA548: sw          $a1, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r5;
    return;
    // 0x800BA548: sw          $a1, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800BA54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA54C: jr          $ra
    // 0x800BA550: sh          $a1, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r5;
    return;
    // 0x800BA550: sh          $a1, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800BA554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA554: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA558: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA55C: swc1        $f12, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f12.u32l;
    // 0x800BA560: jr          $ra
    // 0x800BA564: swc1        $f14, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x800BA564: swc1        $f14, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800BA568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA568: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800BA56C: jr          $ra
    // 0x800BA570: sh          $a1, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = ctx->r5;
    return;
    // 0x800BA570: sh          $a1, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800BA574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA57C: jal         0x800EE814
    // 0x800BA580: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE814(rdram, ctx);
        goto after_0;
    // 0x800BA580: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x800BA584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA58C: jr          $ra
    // 0x800BA590: nop

    return;
    // 0x800BA590: nop

;}
RECOMP_FUNC void func_800BA594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA594: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA598: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA59C: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x800BA5A0: jr          $ra
    // 0x800BA5A4: swc1        $f14, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x800BA5A4: swc1        $f14, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800BA5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA5A8: jr          $ra
    // 0x800BA5AC: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x800BA5AC: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800BA5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA5B0: sh          $a1, 0x84($a0)
    MEM_H(0X84, ctx->r4) = ctx->r5;
    // 0x800BA5B4: jr          $ra
    // 0x800BA5B8: sh          $a2, 0x86($a0)
    MEM_H(0X86, ctx->r4) = ctx->r6;
    return;
    // 0x800BA5B8: sh          $a2, 0x86($a0)
    MEM_H(0X86, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_800BA5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA5BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA5C0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA5C4: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    // 0x800BA5C8: jr          $ra
    // 0x800BA5CC: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x800BA5CC: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800BA5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA5D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800BA5D4: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x800BA5D8: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
    // 0x800BA5DC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800BA5E0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA5E4: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x800BA5E8: beq         $at, $zero, L_800BA608
    if (ctx->r1 == 0) {
        // 0x800BA5EC: sh          $a1, 0x14($a0)
        MEM_H(0X14, ctx->r4) = ctx->r5;
            goto L_800BA608;
    }
    // 0x800BA5EC: sh          $a1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r5;
    // 0x800BA5F0: sh          $a1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r5;
L_800BA5F4:
    // 0x800BA5F4: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x800BA5F8: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x800BA5FC: sltu        $at, $v0, $t9
    ctx->r1 = ctx->r2 < ctx->r25 ? 1 : 0;
    // 0x800BA600: bnel        $at, $zero, L_800BA5F4
    if (ctx->r1 != 0) {
        // 0x800BA604: sh          $a1, 0x8($v0)
        MEM_H(0X8, ctx->r2) = ctx->r5;
            goto L_800BA5F4;
    }
    goto skip_0;
    // 0x800BA604: sh          $a1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r5;
    skip_0:
L_800BA608:
    // 0x800BA608: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA618: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BA61C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BA620: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA624: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x800BA628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA62C: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x800BA630: jal         0x800EFA6C
    // 0x800BA634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_0;
    // 0x800BA634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800BA638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BA63C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA640: lh          $a2, 0x22($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X22);
    // 0x800BA644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BA648: jal         0x800EFA6C
    // 0x800BA64C: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    func_800EFA6C(rdram, ctx);
        goto after_1;
    // 0x800BA64C: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    after_1:
    // 0x800BA650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA658: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA660: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800BA664: sw          $a1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r5;
    // 0x800BA668: jr          $ra
    // 0x800BA66C: sh          $a2, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r6;
    return;
    // 0x800BA66C: sh          $a2, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_800BA670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA678: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x800BA67C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800BA680: beql        $a1, $t6, L_800BA6A4
    if (ctx->r5 == ctx->r14) {
        // 0x800BA684: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BA6A4;
    }
    goto skip_0;
    // 0x800BA684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BA688: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x800BA68C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x800BA690: jal         0x800D738C
    // 0x800BA694: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    func_800D738C(rdram, ctx);
        goto after_0;
    // 0x800BA694: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    after_0:
    // 0x800BA698: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800BA69C: sb          $v0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r2;
    // 0x800BA6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BA6A4:
    // 0x800BA6A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA6A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA6B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA6B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BA6BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BA6C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA6C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BA6C8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800BA6CC: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x800BA6D0: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x800BA6D4: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800BA6D8: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800BA6DC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA6E0: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x800BA6E4: jal         0x800EFA6C
    // 0x800BA6E8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EFA6C(rdram, ctx);
        goto after_0;
    // 0x800BA6E8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x800BA6EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BA6F0: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800BA6F4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x800BA6F8: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x800BA6FC: jal         0x800EFA6C
    // 0x800BA700: addiu       $a0, $a0, 0x2E
    ctx->r4 = ADD32(ctx->r4, 0X2E);
    func_800EFA6C(rdram, ctx);
        goto after_1;
    // 0x800BA700: addiu       $a0, $a0, 0x2E
    ctx->r4 = ADD32(ctx->r4, 0X2E);
    after_1:
    // 0x800BA704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA70C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA714: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800BA718: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800BA71C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800BA720: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x800BA724: sh          $a1, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r5;
    // 0x800BA728: jr          $ra
    // 0x800BA72C: sh          $a2, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r6;
    return;
    // 0x800BA72C: sh          $a2, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_800BA730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA730: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800BA734: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800BA738: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800BA73C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800BA740: sb          $t2, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r10;
    // 0x800BA744: sh          $a1, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r5;
    // 0x800BA748: sh          $a2, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r6;
    // 0x800BA74C: sh          $a3, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r7;
    // 0x800BA750: lh          $t3, 0x12($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X12);
    // 0x800BA754: jr          $ra
    // 0x800BA758: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    return;
    // 0x800BA758: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void func_800BA75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA764: jal         0x800EE940
    // 0x800BA768: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    func_800EE940(rdram, ctx);
        goto after_0;
    // 0x800BA768: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    after_0:
    // 0x800BA76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA774: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA77C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA784: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BA788: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BA78C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA790: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BA794: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800BA798: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x800BA79C: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x800BA7A0: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800BA7A4: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800BA7A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA7AC: jal         0x800EFA6C
    // 0x800BA7B0: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    func_800EFA6C(rdram, ctx);
        goto after_0;
    // 0x800BA7B0: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    after_0:
    // 0x800BA7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA7B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA7BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA7C4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800BA7C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800BA7CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA7D0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA7D4: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800BA7D8: nop

    // 0x800BA7DC: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800BA7E0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BA7E4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BA7E8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800BA7EC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800BA7F0: sh          $t7, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r15;
    // 0x800BA7F4: jr          $ra
    // 0x800BA7F8: sh          $t9, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r25;
    return;
    // 0x800BA7F8: sh          $t9, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_800BA7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA7FC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800BA800: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800BA804: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA808: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA80C: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800BA810: nop

    // 0x800BA814: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800BA818: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BA81C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BA820: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800BA824: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800BA828: sh          $t7, 0x9E($a0)
    MEM_H(0X9E, ctx->r4) = ctx->r15;
    // 0x800BA82C: jr          $ra
    // 0x800BA830: sh          $t9, 0xA0($a0)
    MEM_H(0XA0, ctx->r4) = ctx->r25;
    return;
    // 0x800BA830: sh          $t9, 0xA0($a0)
    MEM_H(0XA0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_800BA834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA83C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BA840: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BA844: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA848: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BA84C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800BA850: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x800BA854: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x800BA858: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800BA85C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800BA860: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA864: jal         0x800EFA6C
    // 0x800BA868: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    func_800EFA6C(rdram, ctx);
        goto after_0;
    // 0x800BA868: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_0:
    // 0x800BA86C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BA870: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800BA874: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x800BA878: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x800BA87C: jal         0x800EFA6C
    // 0x800BA880: addiu       $a0, $a0, 0x46
    ctx->r4 = ADD32(ctx->r4, 0X46);
    func_800EFA6C(rdram, ctx);
        goto after_1;
    // 0x800BA880: addiu       $a0, $a0, 0x46
    ctx->r4 = ADD32(ctx->r4, 0X46);
    after_1:
    // 0x800BA884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA88C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA89C: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800BA8A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BA8A4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA8A8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA8AC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800BA8B0: swc1        $f12, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f12.u32l;
    // 0x800BA8B4: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x800BA8B8: bc1tl       L_800BA8D4
    if (c1cs) {
        // 0x800BA8BC: lwc1        $f12, 0x54($a0)
        ctx->f12.u32l = MEM_W(ctx->r4, 0X54);
            goto L_800BA8D4;
    }
    goto skip_0;
    // 0x800BA8BC: lwc1        $f12, 0x54($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X54);
    skip_0:
    // 0x800BA8C0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x800BA8C4: nop

    // 0x800BA8C8: bc1fl       L_800BA8EC
    if (!c1cs) {
        // 0x800BA8CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BA8EC;
    }
    goto skip_1;
    // 0x800BA8CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800BA8D0: lwc1        $f12, 0x54($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X54);
L_800BA8D4:
    // 0x800BA8D4: lwc1        $f14, 0x58($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X58);
    // 0x800BA8D8: jal         0x800DC178
    // 0x800BA8DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x800BA8DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BA8E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BA8E4: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x800BA8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BA8EC:
    // 0x800BA8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA8F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA8F8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800BA8FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800BA900: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BA904: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BA908: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800BA90C: nop

    // 0x800BA910: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800BA914: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BA918: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BA91C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800BA920: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800BA924: sh          $t7, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r15;
    // 0x800BA928: jr          $ra
    // 0x800BA92C: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    return;
    // 0x800BA92C: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_800BA930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BA93C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BA940: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BA944: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BA948: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800BA94C: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x800BA950: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x800BA954: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800BA958: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800BA95C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA960: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x800BA964: jal         0x800EFA6C
    // 0x800BA968: addiu       $a0, $a0, 0xC4
    ctx->r4 = ADD32(ctx->r4, 0XC4);
    func_800EFA6C(rdram, ctx);
        goto after_0;
    // 0x800BA968: addiu       $a0, $a0, 0xC4
    ctx->r4 = ADD32(ctx->r4, 0XC4);
    after_0:
    // 0x800BA96C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BA970: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800BA974: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x800BA978: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x800BA97C: jal         0x800EFA6C
    // 0x800BA980: addiu       $a0, $a0, 0xCA
    ctx->r4 = ADD32(ctx->r4, 0XCA);
    func_800EFA6C(rdram, ctx);
        goto after_1;
    // 0x800BA980: addiu       $a0, $a0, 0xCA
    ctx->r4 = ADD32(ctx->r4, 0XCA);
    after_1:
    // 0x800BA984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA98C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BA994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BA998: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800BA99C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x800BA9A0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800BA9A4: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800BA9A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA9AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BA9B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800BA9B4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800BA9B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800BA9BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BA9C0: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
    // 0x800BA9C4: jal         0x800136E4
    // 0x800BA9C8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x800BA9C8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x800BA9CC: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800BA9D0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800BA9D4: nop

    // 0x800BA9D8: sh          $t0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r8;
    // 0x800BA9DC: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x800BA9E0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800BA9E4: jal         0x800136E4
    // 0x800BA9E8: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x800BA9E8: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x800BA9EC: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800BA9F0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800BA9F4: nop

    // 0x800BA9F8: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
    // 0x800BA9FC: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800BAA00: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800BAA04: jal         0x800136E4
    // 0x800BAA08: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x800BAA08: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_2:
    // 0x800BAA0C: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800BAA10: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800BAA14: nop

    // 0x800BAA18: sh          $t6, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r14;
    // 0x800BAA1C: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800BAA20: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BAA24: jal         0x800136E4
    // 0x800BAA28: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x800BAA28: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x800BAA2C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800BAA30: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x800BAA34: nop

    // 0x800BAA38: sh          $t9, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r25;
    // 0x800BAA3C: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x800BAA40: sh          $t0, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r8;
    // 0x800BAA44: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x800BAA48: sh          $t1, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = ctx->r9;
    // 0x800BAA4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAA50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BAA54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BAA58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BAA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAA60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BAA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAA68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BAA6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800BAA70: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BAA74: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800BAA78: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x800BAA7C: sh          $a2, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r6;
    // 0x800BAA80: sh          $a3, 0xC6($a0)
    MEM_H(0XC6, ctx->r4) = ctx->r7;
    // 0x800BAA84: jal         0x800EE940
    // 0x800BAA88: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    func_800EE940(rdram, ctx);
        goto after_0;
    // 0x800BAA88: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    after_0:
    // 0x800BAA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAA90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BAA94: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BAA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAA9C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BAAA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BAAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAAA8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800BAAAC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800BAAB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BAAB4: jal         0x800BA7C4
    // 0x800BAAB8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800BA7C4(rdram, ctx);
        goto after_0;
    // 0x800BAAB8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800BAABC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800BAAC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BAAC4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800BAAC8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800BAACC: jal         0x800BA7FC
    // 0x800BAAD0: nop

    func_800BA7FC(rdram, ctx);
        goto after_1;
    // 0x800BAAD0: nop

    after_1:
    // 0x800BAAD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAAD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BAADC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BAAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAAE4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BAAE8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BAAEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BAAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAAF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BAAF8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800BAAFC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800BAB00: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BAB04: jal         0x800EFA4C
    // 0x800BAB08: addiu       $a0, $a0, 0x6C
    ctx->r4 = ADD32(ctx->r4, 0X6C);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800BAB08: addiu       $a0, $a0, 0x6C
    ctx->r4 = ADD32(ctx->r4, 0X6C);
    after_0:
    // 0x800BAB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAB10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BAB14: jr          $ra
    // 0x800BAB18: nop

    return;
    // 0x800BAB18: nop

;}
RECOMP_FUNC void func_800BAB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAB1C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BAB20: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800BAB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BAB28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAB2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BAB30: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800BAB34: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800BAB38: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800BAB3C: jal         0x800EFA4C
    // 0x800BAB40: addiu       $a0, $a0, 0x60
    ctx->r4 = ADD32(ctx->r4, 0X60);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800BAB40: addiu       $a0, $a0, 0x60
    ctx->r4 = ADD32(ctx->r4, 0X60);
    after_0:
    // 0x800BAB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BAB4C: jr          $ra
    // 0x800BAB50: nop

    return;
    // 0x800BAB50: nop

;}
RECOMP_FUNC void func_800BAB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAB54: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BAB58: jr          $ra
    // 0x800BAB5C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800BAB5C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800BAB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAB60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BAB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAB68: jal         0x800F2EA0
    // 0x800BAB6C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800F2EA0(rdram, ctx);
        goto after_0;
    // 0x800BAB6C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x800BAB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BAB78: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BAB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BAB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAB88: jal         0x800F2EBC
    // 0x800BAB8C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800F2EBC(rdram, ctx);
        goto after_0;
    // 0x800BAB8C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x800BAB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BAB98: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BABA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BABA0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800BABA4: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
    // 0x800BABA8: jr          $ra
    // 0x800BABAC: swc1        $f12, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800BABAC: swc1        $f12, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800BABB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BABB0: jr          $ra
    // 0x800BABB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800BABB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800BABB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BABB8: addiu       $sp, $sp, -0x188
    ctx->r29 = ADD32(ctx->r29, -0X188);
    // 0x800BABBC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x800BABC0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x800BABC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BABC8: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x800BABCC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x800BABD0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x800BABD4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800BABD8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800BABDC: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x800BABE0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800BABE4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x800BABE8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x800BABEC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x800BABF0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x800BABF4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x800BABF8: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x800BABFC: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x800BAC00: sw          $a2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r6;
    // 0x800BAC04: beq         $a0, $zero, L_800BAC1C
    if (ctx->r4 == 0) {
        // 0x800BAC08: sw          $zero, 0x17C($sp)
        MEM_W(0X17C, ctx->r29) = 0;
            goto L_800BAC1C;
    }
    // 0x800BAC08: sw          $zero, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = 0;
    // 0x800BAC0C: beql        $a1, $zero, L_800BAC20
    if (ctx->r5 == 0) {
        // 0x800BAC10: lw          $s0, 0x198($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X198);
            goto L_800BAC20;
    }
    goto skip_0;
    // 0x800BAC10: lw          $s0, 0x198($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X198);
    skip_0:
    // 0x800BAC14: jal         0x800EE940
    // 0x800BAC18: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    func_800EE940(rdram, ctx);
        goto after_0;
    // 0x800BAC18: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    after_0:
L_800BAC1C:
    // 0x800BAC1C: lw          $s0, 0x198($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X198);
L_800BAC20:
    // 0x800BAC20: bnel        $s0, $zero, L_800BAC34
    if (ctx->r16 != 0) {
        // 0x800BAC24: lh          $v0, 0x0($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X0);
            goto L_800BAC34;
    }
    goto skip_1;
    // 0x800BAC24: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    skip_1:
    // 0x800BAC28: b           L_800BBC80
    // 0x800BAC2C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_800BBC80;
    // 0x800BAC2C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800BAC30: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_800BAC34:
    // 0x800BAC34: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAC38: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800BAC3C: beq         $v0, $zero, L_800BBC64
    if (ctx->r2 == 0) {
        // 0x800BAC40: addiu       $s5, $zero, 0x3
        ctx->r21 = ADD32(0, 0X3);
            goto L_800BBC64;
    }
    // 0x800BAC40: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x800BAC44: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800BAC48: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x800BAC4C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800BAC50: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x800BAC54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BAC58: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
L_800BAC5C:
    // 0x800BAC5C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800BAC60: sltiu       $at, $t7, 0x34
    ctx->r1 = ctx->r15 < 0X34 ? 1 : 0;
    // 0x800BAC64: beq         $at, $zero, L_800BBC54
    if (ctx->r1 == 0) {
        // 0x800BAC68: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800BBC54;
    }
    // 0x800BAC68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BAC6C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800BAC70: addu        $at, $at, $t7
    gpr jr_addend_800BAC78 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800BAC74: lw          $t7, 0x56CC($at)
    ctx->r15 = ADD32(ctx->r1, 0X56CC);
    // 0x800BAC78: jr          $t7
    // 0x800BAC7C: nop

    switch (jr_addend_800BAC78 >> 2) {
        case 0: goto L_800BAC80; break;
        case 1: goto L_800BAD3C; break;
        case 2: goto L_800BAD4C; break;
        case 3: goto L_800BAD64; break;
        case 4: goto L_800BAD84; break;
        case 5: goto L_800BAD98; break;
        case 6: goto L_800BADC4; break;
        case 7: goto L_800BADD4; break;
        case 8: goto L_800BAE08; break;
        case 9: goto L_800BAE1C; break;
        case 10: goto L_800BAEDC; break;
        case 11: goto L_800BAF78; break;
        case 12: goto L_800BB010; break;
        case 13: goto L_800BB098; break;
        case 14: goto L_800BB0E8; break;
        case 15: goto L_800BB104; break;
        case 16: goto L_800BB130; break;
        case 17: goto L_800BB160; break;
        case 18: goto L_800BB184; break;
        case 19: goto L_800BB1A8; break;
        case 20: goto L_800BB250; break;
        case 21: goto L_800BB284; break;
        case 22: goto L_800BB294; break;
        case 23: goto L_800BB2D0; break;
        case 24: goto L_800BB318; break;
        case 25: goto L_800BB334; break;
        case 26: goto L_800BB350; break;
        case 27: goto L_800BB3C8; break;
        case 28: goto L_800BB3F4; break;
        case 29: goto L_800BB440; break;
        case 30: goto L_800BB484; break;
        case 31: goto L_800BB4BC; break;
        case 32: goto L_800BB4FC; break;
        case 33: goto L_800BB51C; break;
        case 34: goto L_800BB5D8; break;
        case 35: goto L_800BB620; break;
        case 36: goto L_800BB684; break;
        case 37: goto L_800BB6E8; break;
        case 38: goto L_800BB720; break;
        case 39: goto L_800BB758; break;
        case 40: goto L_800BB788; break;
        case 41: goto L_800BB798; break;
        case 42: goto L_800BB850; break;
        case 43: goto L_800BB8A4; break;
        case 44: goto L_800BB984; break;
        case 45: goto L_800BB9EC; break;
        case 46: goto L_800BBA5C; break;
        case 47: goto L_800BBB64; break;
        case 48: goto L_800BBB84; break;
        case 49: goto L_800BBBC0; break;
        case 50: goto L_800BBBD0; break;
        case 51: goto L_800BBBE0; break;
        default: switch_error(__func__, 0x800BAC78, 0x801256CC);
    }
    // 0x800BAC7C: nop

L_800BAC80:
    // 0x800BAC80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800BAC84: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800BAC88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800BAC8C: beq         $v1, $s5, L_800BACE8
    if (ctx->r3 == ctx->r21) {
        // 0x800BAC90: lh          $t8, 0x0($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X0);
            goto L_800BACE8;
    }
    // 0x800BAC90: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
L_800BAC94:
    // 0x800BAC94: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800BAC98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800BAC9C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800BACA0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BACA4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BACA8: mul.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x800BACAC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BACB0: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800BACB4: nop

    // 0x800BACB8: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
    // 0x800BACBC: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x800BACC0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800BACC4: nop

    // 0x800BACC8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BACCC: mul.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x800BACD0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BACD4: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800BACD8: nop

    // 0x800BACDC: sh          $t3, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r11;
    // 0x800BACE0: bne         $v1, $s5, L_800BAC94
    if (ctx->r3 != ctx->r21) {
        // 0x800BACE4: lh          $t8, 0x0($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X0);
            goto L_800BAC94;
    }
    // 0x800BACE4: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
L_800BACE8:
    // 0x800BACE8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800BACEC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800BACF0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BACF4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BACF8: mul.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x800BACFC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAD00: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800BAD04: nop

    // 0x800BAD08: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
    // 0x800BAD0C: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x800BAD10: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800BAD14: nop

    // 0x800BAD18: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BAD1C: mul.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x800BAD20: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAD24: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800BAD28: nop

    // 0x800BAD2C: sh          $t3, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r11;
    // 0x800BAD30: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800BAD34: b           L_800BBC54
    // 0x800BAD38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BAD38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BAD3C:
    // 0x800BAD3C: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x800BAD40: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x800BAD44: b           L_800BBC54
    // 0x800BAD48: sb          $t5, 0x83($s1)
    MEM_B(0X83, ctx->r17) = ctx->r13;
        goto L_800BBC54;
    // 0x800BAD48: sb          $t5, 0x83($s1)
    MEM_B(0X83, ctx->r17) = ctx->r13;
L_800BAD4C:
    // 0x800BAD4C: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x800BAD50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BAD54: sh          $t6, 0xAA($s1)
    MEM_H(0XAA, ctx->r17) = ctx->r14;
    // 0x800BAD58: lh          $t7, -0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, -0X2);
    // 0x800BAD5C: b           L_800BBC54
    // 0x800BAD60: sw          $t7, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r15;
        goto L_800BBC54;
    // 0x800BAD60: sw          $t7, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r15;
L_800BAD64:
    // 0x800BAD64: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x800BAD68: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAD6C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800BAD70: nop

    // 0x800BAD74: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BAD78: mul.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BAD7C: b           L_800BBC54
    // 0x800BAD80: swc1        $f0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->f0.u32l;
        goto L_800BBC54;
    // 0x800BAD80: swc1        $f0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->f0.u32l;
L_800BAD84:
    // 0x800BAD84: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BAD88: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAD8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BAD90: b           L_800BBC54
    // 0x800BAD94: sh          $v0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r2;
        goto L_800BBC54;
    // 0x800BAD94: sh          $v0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r2;
L_800BAD98:
    // 0x800BAD98: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BAD9C: lwc1        $f4, 0x4($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X4);
    // 0x800BADA0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BADA4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800BADA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BADAC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BADB0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800BADB4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BADB8: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800BADBC: b           L_800BBC54
    // 0x800BADC0: sh          $t0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r8;
        goto L_800BBC54;
    // 0x800BADC0: sh          $t0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r8;
L_800BADC4:
    // 0x800BADC4: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x800BADC8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BADCC: b           L_800BBC54
    // 0x800BADD0: sh          $t1, 0xA8($s1)
    MEM_H(0XA8, ctx->r17) = ctx->r9;
        goto L_800BBC54;
    // 0x800BADD0: sh          $t1, 0xA8($s1)
    MEM_H(0XA8, ctx->r17) = ctx->r9;
L_800BADD4:
    // 0x800BADD4: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x800BADD8: lh          $t3, 0x2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2);
    // 0x800BADDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BADE0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800BADE4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800BADE8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BADEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BADF0: mul.s       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BADF4: nop

    // 0x800BADF8: mul.s       $f2, $f10, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x800BADFC: swc1        $f0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->f0.u32l;
    // 0x800BAE00: b           L_800BBC54
    // 0x800BAE04: swc1        $f2, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->f2.u32l;
        goto L_800BBC54;
    // 0x800BAE04: swc1        $f2, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->f2.u32l;
L_800BAE08:
    // 0x800BAE08: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BAE0C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAE10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BAE14: b           L_800BBC54
    // 0x800BAE18: sh          $v0, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r2;
        goto L_800BBC54;
    // 0x800BAE18: sh          $v0, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r2;
L_800BAE1C:
    // 0x800BAE1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800BAE20: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800BAE24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800BAE28: beq         $v1, $s5, L_800BAE84
    if (ctx->r3 == ctx->r21) {
        // 0x800BAE2C: lh          $t4, 0x0($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X0);
            goto L_800BAE84;
    }
    // 0x800BAE2C: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
L_800BAE30:
    // 0x800BAE30: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800BAE34: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800BAE38: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800BAE3C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BAE40: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAE44: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800BAE48: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAE4C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800BAE50: nop

    // 0x800BAE54: sh          $t6, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r14;
    // 0x800BAE58: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x800BAE5C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800BAE60: nop

    // 0x800BAE64: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BAE68: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800BAE6C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAE70: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800BAE74: nop

    // 0x800BAE78: sh          $t9, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r25;
    // 0x800BAE7C: bne         $v1, $s5, L_800BAE30
    if (ctx->r3 != ctx->r21) {
        // 0x800BAE80: lh          $t4, 0x0($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X0);
            goto L_800BAE30;
    }
    // 0x800BAE80: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
L_800BAE84:
    // 0x800BAE84: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800BAE88: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800BAE8C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAE90: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BAE94: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800BAE98: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAE9C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800BAEA0: nop

    // 0x800BAEA4: sh          $t6, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r14;
    // 0x800BAEA8: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x800BAEAC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800BAEB0: nop

    // 0x800BAEB4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BAEB8: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800BAEBC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAEC0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800BAEC4: nop

    // 0x800BAEC8: sh          $t9, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r25;
    // 0x800BAECC: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x800BAED0: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800BAED4: b           L_800BBC54
    // 0x800BAED8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BAED8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BAEDC:
    // 0x800BAEDC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800BAEE0: sb          $t0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r8;
    // 0x800BAEE4: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x800BAEE8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800BAEEC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800BAEF0: nop

    // 0x800BAEF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BAEF8: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800BAEFC: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAF00: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800BAF04: nop

    // 0x800BAF08: sh          $t3, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r11;
    // 0x800BAF0C: lh          $t4, -0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, -0X6);
    // 0x800BAF10: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800BAF14: nop

    // 0x800BAF18: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BAF1C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800BAF20: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BAF24: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800BAF28: nop

    // 0x800BAF2C: sh          $t6, 0x2A($s1)
    MEM_H(0X2A, ctx->r17) = ctx->r14;
    // 0x800BAF30: lh          $t7, -0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, -0X4);
    // 0x800BAF34: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800BAF38: nop

    // 0x800BAF3C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BAF40: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800BAF44: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BAF48: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800BAF4C: nop

    // 0x800BAF50: sh          $t9, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r25;
    // 0x800BAF54: lh          $t0, -0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, -0X2);
    // 0x800BAF58: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x800BAF5C: nop

    // 0x800BAF60: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BAF64: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800BAF68: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BAF6C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x800BAF70: b           L_800BBC54
    // 0x800BAF74: sh          $t2, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r10;
        goto L_800BBC54;
    // 0x800BAF74: sh          $t2, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r10;
L_800BAF78:
    // 0x800BAF78: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800BAF7C: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x800BAF80: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BAF84: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800BAF88: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    // 0x800BAF8C: addiu       $s3, $s1, 0x2E
    ctx->r19 = ADD32(ctx->r17, 0X2E);
    // 0x800BAF90: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BAF94: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800BAF98: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x800BAF9C: swc1        $f0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f0.u32l;
    // 0x800BAFA0: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BAFA4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800BAFA8: nop

    // 0x800BAFAC: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x800BAFB0: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800BAFB4: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x800BAFB8: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x800BAFBC: sra         $t8, $a3, 16
    ctx->r24 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800BAFC0: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800BAFC4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800BAFC8: jal         0x800EFA6C
    // 0x800BAFCC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_1;
    // 0x800BAFCC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_1:
    // 0x800BAFD0: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x800BAFD4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800BAFD8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800BAFDC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800BAFE0: nop

    // 0x800BAFE4: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x800BAFE8: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800BAFEC: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x800BAFF0: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x800BAFF4: sra         $t3, $a3, 16
    ctx->r11 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800BAFF8: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800BAFFC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x800BB000: jal         0x800EFA6C
    // 0x800BB004: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_2;
    // 0x800BB004: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    after_2:
    // 0x800BB008: b           L_800BBC54
    // 0x800BB00C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB00C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB010:
    // 0x800BB010: lh          $s2, 0x0($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X0);
    // 0x800BB014: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BB018: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x800BB01C: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x800BB020: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    // 0x800BB024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BB028: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BB02C: addiu       $s3, $s1, 0x2E
    ctx->r19 = ADD32(ctx->r17, 0X2E);
    // 0x800BB030: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800BB034: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BB038: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x800BB03C: nop

    // 0x800BB040: sll         $t5, $s2, 16
    ctx->r13 = S32(ctx->r18 << 16);
    // 0x800BB044: sra         $s2, $t5, 16
    ctx->r18 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800BB048: negu        $a1, $s2
    ctx->r5 = SUB32(0, ctx->r18);
    // 0x800BB04C: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x800BB050: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800BB054: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x800BB058: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800BB05C: jal         0x800EFA6C
    // 0x800BB060: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_3;
    // 0x800BB060: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    after_3:
    // 0x800BB064: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x800BB068: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x800BB06C: sll         $a3, $s2, 16
    ctx->r7 = S32(ctx->r18 << 16);
    // 0x800BB070: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800BB074: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800BB078: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800BB07C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800BB080: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x800BB084: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800BB088: jal         0x800EFA6C
    // 0x800BB08C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_4;
    // 0x800BB08C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x800BB090: b           L_800BBC54
    // 0x800BB094: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB094: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB098:
    // 0x800BB098: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
    // 0x800BB09C: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800BB0A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB0A4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800BB0A8: nop

    // 0x800BB0AC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB0B0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800BB0B4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB0B8: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x800BB0BC: nop

    // 0x800BB0C0: sh          $t5, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r13;
    // 0x800BB0C4: lh          $t6, -0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, -0X2);
    // 0x800BB0C8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800BB0CC: nop

    // 0x800BB0D0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB0D4: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800BB0D8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BB0DC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x800BB0E0: b           L_800BBC54
    // 0x800BB0E4: sh          $t8, 0x2A($s1)
    MEM_H(0X2A, ctx->r17) = ctx->r24;
        goto L_800BBC54;
    // 0x800BB0E4: sh          $t8, 0x2A($s1)
    MEM_H(0X2A, ctx->r17) = ctx->r24;
L_800BB0E8:
    // 0x800BB0E8: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    // 0x800BB0EC: lwc1        $f12, 0x54($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X54);
    // 0x800BB0F0: jal         0x800DC178
    // 0x800BB0F4: lwc1        $f14, 0x58($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X58);
    func_800DC178(rdram, ctx);
        goto after_5;
    // 0x800BB0F4: lwc1        $f14, 0x58($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X58);
    after_5:
    // 0x800BB0F8: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x800BB0FC: b           L_800BBC54
    // 0x800BB100: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB100: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB104:
    // 0x800BB104: andi        $a0, $v0, 0xFF00
    ctx->r4 = ctx->r2 & 0XFF00;
    // 0x800BB108: sra         $t9, $a0, 8
    ctx->r25 = S32(SIGNED(ctx->r4) >> 8);
    // 0x800BB10C: jal         0x800B53A4
    // 0x800BB110: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800B53A4(rdram, ctx);
        goto after_6;
    // 0x800BB110: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_6:
    // 0x800BB114: beq         $s6, $zero, L_800BB128
    if (ctx->r22 == 0) {
        // 0x800BB118: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800BB128;
    }
    // 0x800BB118: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800BB11C: addiu       $a0, $v0, 0x12
    ctx->r4 = ADD32(ctx->r2, 0X12);
    // 0x800BB120: jal         0x800EE940
    // 0x800BB124: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800EE940(rdram, ctx);
        goto after_7;
    // 0x800BB124: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_7:
L_800BB128:
    // 0x800BB128: b           L_800BBC54
    // 0x800BB12C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB12C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB130:
    // 0x800BB130: andi        $a0, $v0, 0xFF00
    ctx->r4 = ctx->r2 & 0XFF00;
    // 0x800BB134: sra         $t0, $a0, 8
    ctx->r8 = S32(SIGNED(ctx->r4) >> 8);
    // 0x800BB138: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800BB13C: jal         0x800B53A4
    // 0x800BB140: sw          $t0, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r8;
    func_800B53A4(rdram, ctx);
        goto after_8;
    // 0x800BB140: sw          $t0, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r8;
    after_8:
    // 0x800BB144: beq         $s6, $zero, L_800BB158
    if (ctx->r22 == 0) {
        // 0x800BB148: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800BB158;
    }
    // 0x800BB148: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800BB14C: addiu       $a0, $v0, 0x12
    ctx->r4 = ADD32(ctx->r2, 0X12);
    // 0x800BB150: jal         0x800EE940
    // 0x800BB154: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800EE940(rdram, ctx);
        goto after_9;
    // 0x800BB154: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_9:
L_800BB158:
    // 0x800BB158: b           L_800BBC54
    // 0x800BB15C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB15C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB160:
    // 0x800BB160: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800BB164: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x800BB168: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x800BB16C: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800BB170: jal         0x800EFA6C
    // 0x800BB174: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    func_800EFA6C(rdram, ctx);
        goto after_10;
    // 0x800BB174: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    after_10:
    // 0x800BB178: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800BB17C: b           L_800BBC54
    // 0x800BB180: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB180: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB184:
    // 0x800BB184: andi        $t1, $v0, 0xFF00
    ctx->r9 = ctx->r2 & 0XFF00;
    // 0x800BB188: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x800BB18C: beq         $t2, $zero, L_800BB19C
    if (ctx->r10 == 0) {
        // 0x800BB190: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800BB19C;
    }
    // 0x800BB190: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BB194: b           L_800BBC54
    // 0x800BB198: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
        goto L_800BBC54;
    // 0x800BB198: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
L_800BB19C:
    // 0x800BB19C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800BB1A0: b           L_800BBC58
    // 0x800BB1A4: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
        goto L_800BBC58;
    // 0x800BB1A4: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_800BB1A8:
    // 0x800BB1A8: addiu       $t3, $zero, 0x586
    ctx->r11 = ADD32(0, 0X586);
    // 0x800BB1AC: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
    // 0x800BB1B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800BB1B4: lwc1        $f18, 0x579C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X579C);
    // 0x800BB1B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB1BC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800BB1C0: addiu       $t5, $zero, 0x300
    ctx->r13 = ADD32(0, 0X300);
    // 0x800BB1C4: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x800BB1C8: sh          $t4, 0xA8($s1)
    MEM_H(0XA8, ctx->r17) = ctx->r12;
    // 0x800BB1CC: sh          $t5, 0xA2($s1)
    MEM_H(0XA2, ctx->r17) = ctx->r13;
    // 0x800BB1D0: sh          $t6, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r14;
    // 0x800BB1D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800BB1D8: swc1        $f18, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->f18.u32l;
    // 0x800BB1DC: swc1        $f6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f6.u32l;
    // 0x800BB1E0: lwc1        $f4, 0x57A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X57A0);
    // 0x800BB1E4: addiu       $t7, $s1, 0x34
    ctx->r15 = ADD32(ctx->r17, 0X34);
    // 0x800BB1E8: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x800BB1EC: swc1        $f4, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f4.u32l;
    // 0x800BB1F0: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x800BB1F4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x800BB1F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BB1FC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x800BB200: addiu       $s2, $s1, 0x46
    ctx->r18 = ADD32(ctx->r17, 0X46);
    // 0x800BB204: jal         0x800EFA6C
    // 0x800BB208: addiu       $s3, $s1, 0x3A
    ctx->r19 = ADD32(ctx->r17, 0X3A);
    func_800EFA6C(rdram, ctx);
        goto after_11;
    // 0x800BB208: addiu       $s3, $s1, 0x3A
    ctx->r19 = ADD32(ctx->r17, 0X3A);
    after_11:
    // 0x800BB20C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800BB210: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x800BB214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BB218: jal         0x800EFA6C
    // 0x800BB21C: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    func_800EFA6C(rdram, ctx);
        goto after_12;
    // 0x800BB21C: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    after_12:
    // 0x800BB220: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800BB224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BB228: addiu       $a2, $zero, -0x3E8
    ctx->r6 = ADD32(0, -0X3E8);
    // 0x800BB22C: jal         0x800EFA6C
    // 0x800BB230: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_13;
    // 0x800BB230: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x800BB234: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800BB238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BB23C: addiu       $a2, $zero, -0x320
    ctx->r6 = ADD32(0, -0X320);
    // 0x800BB240: jal         0x800EFA6C
    // 0x800BB244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800EFA6C(rdram, ctx);
        goto after_14;
    // 0x800BB244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x800BB248: b           L_800BBC54
    // 0x800BB24C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB24C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB250:
    // 0x800BB250: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x800BB254: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x800BB258: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB25C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800BB260: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800BB264: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BB268: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BB26C: mul.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x800BB270: nop

    // 0x800BB274: mul.s       $f2, $f6, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800BB278: swc1        $f0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
    // 0x800BB27C: b           L_800BBC54
    // 0x800BB280: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
        goto L_800BBC54;
    // 0x800BB280: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
L_800BB284:
    // 0x800BB284: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x800BB288: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BB28C: b           L_800BBC54
    // 0x800BB290: sh          $t0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r8;
        goto L_800BBC54;
    // 0x800BB290: sh          $t0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r8;
L_800BB294:
    // 0x800BB294: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x800BB298: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BB29C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800BB2A0: nop

    // 0x800BB2A4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB2A8: mul.s       $f12, $f8, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x800BB2AC: jal         0x800DC298
    // 0x800BB2B0: nop

    func_800DC298(rdram, ctx);
        goto after_15;
    // 0x800BB2B0: nop

    after_15:
    // 0x800BB2B4: beq         $v0, $zero, L_800BB2C8
    if (ctx->r2 == 0) {
        // 0x800BB2B8: nop
    
            goto L_800BB2C8;
    }
    // 0x800BB2B8: nop

    // 0x800BB2BC: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x800BB2C0: ori         $t3, $t2, 0x800
    ctx->r11 = ctx->r10 | 0X800;
    // 0x800BB2C4: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
L_800BB2C8:
    // 0x800BB2C8: b           L_800BBC54
    // 0x800BB2CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB2CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB2D0:
    // 0x800BB2D0: lh          $t4, 0x4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X4);
    // 0x800BB2D4: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    // 0x800BB2D8: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x800BB2DC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800BB2E0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800BB2E4: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BB2E8: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB2EC: sh          $v1, 0x86($s1)
    MEM_H(0X86, ctx->r17) = ctx->r3;
    // 0x800BB2F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800BB2F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BB2F8: sh          $v0, 0x84($s1)
    MEM_H(0X84, ctx->r17) = ctx->r2;
    // 0x800BB2FC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB300: mul.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BB304: nop

    // 0x800BB308: mul.s       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BB30C: swc1        $f0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f0.u32l;
    // 0x800BB310: b           L_800BBC54
    // 0x800BB314: swc1        $f2, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f2.u32l;
        goto L_800BBC54;
    // 0x800BB314: swc1        $f2, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f2.u32l;
L_800BB318:
    // 0x800BB318: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x800BB31C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BB320: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB324: sh          $v1, 0x86($s1)
    MEM_H(0X86, ctx->r17) = ctx->r3;
    // 0x800BB328: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BB32C: b           L_800BBC54
    // 0x800BB330: sh          $v0, 0x84($s1)
    MEM_H(0X84, ctx->r17) = ctx->r2;
        goto L_800BBC54;
    // 0x800BB330: sh          $v0, 0x84($s1)
    MEM_H(0X84, ctx->r17) = ctx->r2;
L_800BB334:
    // 0x800BB334: andi        $a1, $v0, 0xFF00
    ctx->r5 = ctx->r2 & 0XFF00;
    // 0x800BB338: sra         $t6, $a1, 8
    ctx->r14 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800BB33C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800BB340: jal         0x800BA22C
    // 0x800BB344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800BA22C(rdram, ctx);
        goto after_16;
    // 0x800BB344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x800BB348: b           L_800BBC54
    // 0x800BB34C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB34C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB350:
    // 0x800BB350: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x800BB354: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x800BB358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BB35C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800BB360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BB364: addiu       $s3, $s1, 0x3A
    ctx->r19 = ADD32(ctx->r17, 0X3A);
    // 0x800BB368: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BB36C: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x800BB370: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BB374: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800BB378: nop

    // 0x800BB37C: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x800BB380: jal         0x800EFA6C
    // 0x800BB384: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    func_800EFA6C(rdram, ctx);
        goto after_17;
    // 0x800BB384: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    after_17:
    // 0x800BB388: lh          $t1, 0x2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2);
    // 0x800BB38C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800BB390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BB394: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800BB398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BB39C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB3A0: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x800BB3A4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB3A8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800BB3AC: nop

    // 0x800BB3B0: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x800BB3B4: jal         0x800EFA6C
    // 0x800BB3B8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_800EFA6C(rdram, ctx);
        goto after_18;
    // 0x800BB3B8: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_18:
    // 0x800BB3BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB3C0: b           L_800BBC54
    // 0x800BB3C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB3C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB3C8:
    // 0x800BB3C8: andi        $a0, $v0, 0xFF00
    ctx->r4 = ctx->r2 & 0XFF00;
    // 0x800BB3CC: sra         $t5, $a0, 8
    ctx->r13 = S32(SIGNED(ctx->r4) >> 8);
    // 0x800BB3D0: jal         0x800BA2E8
    // 0x800BB3D4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_800BA2E8(rdram, ctx);
        goto after_19;
    // 0x800BB3D4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_19:
    // 0x800BB3D8: beq         $s6, $zero, L_800BB3EC
    if (ctx->r22 == 0) {
        // 0x800BB3DC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800BB3EC;
    }
    // 0x800BB3DC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800BB3E0: addiu       $a0, $v0, 0x12
    ctx->r4 = ADD32(ctx->r2, 0X12);
    // 0x800BB3E4: jal         0x800EE940
    // 0x800BB3E8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800EE940(rdram, ctx);
        goto after_20;
    // 0x800BB3E8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_20:
L_800BB3EC:
    // 0x800BB3EC: b           L_800BBC54
    // 0x800BB3F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB3F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB3F4:
    // 0x800BB3F4: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BB3F8: lhu         $t6, 0x2($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X2);
    // 0x800BB3FC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BB400: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x800BB404: beql        $v0, $t6, L_800BBC58
    if (ctx->r2 == ctx->r14) {
        // 0x800BB408: lh          $v0, 0x0($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X0);
            goto L_800BBC58;
    }
    goto skip_2;
    // 0x800BB408: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    skip_2:
    // 0x800BB40C: jal         0x800D738C
    // 0x800BB410: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_800D738C(rdram, ctx);
        goto after_21;
    // 0x800BB410: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_21:
    // 0x800BB414: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x800BB418: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800BB41C: bne         $t7, $at, L_800BB438
    if (ctx->r15 != ctx->r1) {
        // 0x800BB420: sb          $v0, 0xA($s1)
        MEM_B(0XA, ctx->r17) = ctx->r2;
            goto L_800BB438;
    }
    // 0x800BB420: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x800BB424: jal         0x800D674C
    // 0x800BB428: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    func_800D674C(rdram, ctx);
        goto after_22;
    // 0x800BB428: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    after_22:
    // 0x800BB42C: jal         0x800AF5A0
    // 0x800BB430: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800AF5A0(rdram, ctx);
        goto after_23;
    // 0x800BB430: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_23:
    // 0x800BB434: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_800BB438:
    // 0x800BB438: b           L_800BBC54
    // 0x800BB43C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB43C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB440:
    // 0x800BB440: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x800BB444: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x800BB448: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BB44C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800BB450: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB454: jal         0x800DC178
    // 0x800BB458: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    func_800DC178(rdram, ctx);
        goto after_24;
    // 0x800BB458: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_24:
    // 0x800BB45C: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x800BB460: lh          $t0, 0x14($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X14);
    // 0x800BB464: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB468: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BB46C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BB470: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800BB474: nop

    // 0x800BB478: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x800BB47C: b           L_800BBC54
    // 0x800BB480: sh          $t5, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r13;
        goto L_800BBC54;
    // 0x800BB480: sh          $t5, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r13;
L_800BB484:
    // 0x800BB484: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BB488: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x800BB48C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB490: andi        $a1, $v0, 0xFF00
    ctx->r5 = ctx->r2 & 0XFF00;
    // 0x800BB494: andi        $a3, $v1, 0xFF00
    ctx->r7 = ctx->r3 & 0XFF00;
    // 0x800BB498: srl         $t7, $a3, 8
    ctx->r15 = S32(U32(ctx->r7) >> 8);
    // 0x800BB49C: srl         $t6, $a1, 8
    ctx->r14 = S32(U32(ctx->r5) >> 8);
    // 0x800BB4A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800BB4A4: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800BB4A8: addiu       $a0, $s1, 0x80
    ctx->r4 = ADD32(ctx->r17, 0X80);
    // 0x800BB4AC: jal         0x800F31EC
    // 0x800BB4B0: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_800F31EC(rdram, ctx);
        goto after_25;
    // 0x800BB4B0: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_25:
    // 0x800BB4B4: b           L_800BBC54
    // 0x800BB4B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB4B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB4BC:
    // 0x800BB4BC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800BB4C0: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x800BB4C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB4C8: andi        $a1, $v0, 0xFF00
    ctx->r5 = ctx->r2 & 0XFF00;
    // 0x800BB4CC: andi        $a3, $v1, 0xFF00
    ctx->r7 = ctx->r3 & 0XFF00;
    // 0x800BB4D0: srl         $t9, $a3, 8
    ctx->r25 = S32(U32(ctx->r7) >> 8);
    // 0x800BB4D4: srl         $t8, $a1, 8
    ctx->r24 = S32(U32(ctx->r5) >> 8);
    // 0x800BB4D8: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x800BB4DC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800BB4E0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x800BB4E4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x800BB4E8: addiu       $a0, $s1, 0x80
    ctx->r4 = ADD32(ctx->r17, 0X80);
    // 0x800BB4EC: jal         0x800F31FC
    // 0x800BB4F0: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_800F31FC(rdram, ctx);
        goto after_26;
    // 0x800BB4F0: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_26:
    // 0x800BB4F4: b           L_800BBC54
    // 0x800BB4F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB4F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB4FC:
    // 0x800BB4FC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800BB500: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x800BB504: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x800BB508: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800BB50C: jal         0x800EFA6C
    // 0x800BB510: addiu       $a0, $s1, 0x4C
    ctx->r4 = ADD32(ctx->r17, 0X4C);
    func_800EFA6C(rdram, ctx);
        goto after_27;
    // 0x800BB510: addiu       $a0, $s1, 0x4C
    ctx->r4 = ADD32(ctx->r17, 0X4C);
    after_27:
    // 0x800BB514: b           L_800BBC54
    // 0x800BB518: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB518: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB51C:
    // 0x800BB51C: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x800BB520: lh          $t3, 0x2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2);
    // 0x800BB524: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x800BB528: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800BB52C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800BB530: lh          $t4, 0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X6);
    // 0x800BB534: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BB538: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800BB53C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800BB540: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB544: mul.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800BB548: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800BB54C: mul.s       $f2, $f8, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x800BB550: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB554: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB558: mul.s       $f12, $f18, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BB55C: nop

    // 0x800BB560: mul.s       $f14, $f4, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BB564: nop

    // 0x800BB568: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800BB56C: nop

    // 0x800BB570: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x800BB574: nop

    // 0x800BB578: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x800BB57C: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB580: mul.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x800BB584: nop

    // 0x800BB588: mul.s       $f10, $f12, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x800BB58C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800BB590: nop

    // 0x800BB594: sh          $t6, 0x9A($s1)
    MEM_H(0X9A, ctx->r17) = ctx->r14;
    // 0x800BB598: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BB59C: mul.s       $f18, $f10, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x800BB5A0: nop

    // 0x800BB5A4: mul.s       $f4, $f14, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800BB5A8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x800BB5AC: nop

    // 0x800BB5B0: sh          $t8, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r24;
    // 0x800BB5B4: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BB5B8: mul.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x800BB5BC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800BB5C0: nop

    // 0x800BB5C4: sh          $t1, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r9;
    // 0x800BB5C8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BB5CC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800BB5D0: b           L_800BBC54
    // 0x800BB5D4: sh          $t3, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = ctx->r11;
        goto L_800BBC54;
    // 0x800BB5D4: sh          $t3, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = ctx->r11;
L_800BB5D8:
    // 0x800BB5D8: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x800BB5DC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BB5E0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x800BB5E4: nop

    // 0x800BB5E8: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BB5EC: mul.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800BB5F0: nop

    // 0x800BB5F4: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800BB5F8: nop

    // 0x800BB5FC: mul.s       $f0, $f4, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x800BB600: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800BB604: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x800BB608: nop

    // 0x800BB60C: sh          $v0, 0x9A($s1)
    MEM_H(0X9A, ctx->r17) = ctx->r2;
    // 0x800BB610: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x800BB614: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
    // 0x800BB618: b           L_800BBC54
    // 0x800BB61C: sh          $v0, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = ctx->r2;
        goto L_800BBC54;
    // 0x800BB61C: sh          $v0, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = ctx->r2;
L_800BB620:
    // 0x800BB620: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
    // 0x800BB624: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x800BB628: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB62C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x800BB630: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800BB634: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB638: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB63C: mul.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BB640: nop

    // 0x800BB644: mul.s       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BB648: nop

    // 0x800BB64C: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800BB650: nop

    // 0x800BB654: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x800BB658: nop

    // 0x800BB65C: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x800BB660: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB664: mul.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x800BB668: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800BB66C: nop

    // 0x800BB670: sh          $t8, 0x9A($s1)
    MEM_H(0X9A, ctx->r17) = ctx->r24;
    // 0x800BB674: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BB678: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800BB67C: b           L_800BBC54
    // 0x800BB680: sh          $t1, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r9;
        goto L_800BBC54;
    // 0x800BB680: sh          $t1, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r9;
L_800BB684:
    // 0x800BB684: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x800BB688: lh          $t3, 0x2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2);
    // 0x800BB68C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB690: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800BB694: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800BB698: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB69C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB6A0: mul.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BB6A4: nop

    // 0x800BB6A8: mul.s       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BB6AC: nop

    // 0x800BB6B0: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800BB6B4: nop

    // 0x800BB6B8: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x800BB6BC: nop

    // 0x800BB6C0: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x800BB6C4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB6C8: mul.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x800BB6CC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800BB6D0: nop

    // 0x800BB6D4: sh          $t4, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r12;
    // 0x800BB6D8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BB6DC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800BB6E0: b           L_800BBC54
    // 0x800BB6E4: sh          $t6, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = ctx->r14;
        goto L_800BBC54;
    // 0x800BB6E4: sh          $t6, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = ctx->r14;
L_800BB6E8:
    // 0x800BB6E8: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x800BB6EC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800BB6F0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x800BB6F4: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x800BB6F8: jal         0x800EFA6C
    // 0x800BB6FC: addiu       $s2, $s1, 0x46
    ctx->r18 = ADD32(ctx->r17, 0X46);
    func_800EFA6C(rdram, ctx);
        goto after_28;
    // 0x800BB6FC: addiu       $s2, $s1, 0x46
    ctx->r18 = ADD32(ctx->r17, 0X46);
    after_28:
    // 0x800BB700: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800BB704: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
    // 0x800BB708: lh          $a2, 0x8($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X8);
    // 0x800BB70C: jal         0x800EFA6C
    // 0x800BB710: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    func_800EFA6C(rdram, ctx);
        goto after_29;
    // 0x800BB710: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    after_29:
    // 0x800BB714: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800BB718: b           L_800BBC54
    // 0x800BB71C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB71C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB720:
    // 0x800BB720: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x800BB724: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800BB728: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BB72C: lh          $a3, 0x2($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X2);
    // 0x800BB730: jal         0x800EFA6C
    // 0x800BB734: addiu       $s2, $s1, 0x46
    ctx->r18 = ADD32(ctx->r17, 0X46);
    func_800EFA6C(rdram, ctx);
        goto after_30;
    // 0x800BB734: addiu       $s2, $s1, 0x46
    ctx->r18 = ADD32(ctx->r17, 0X46);
    after_30:
    // 0x800BB738: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800BB73C: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    // 0x800BB740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BB744: jal         0x800EFA6C
    // 0x800BB748: lh          $a3, 0x6($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X6);
    func_800EFA6C(rdram, ctx);
        goto after_31;
    // 0x800BB748: lh          $a3, 0x6($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X6);
    after_31:
    // 0x800BB74C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800BB750: b           L_800BBC54
    // 0x800BB754: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB754: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB758:
    // 0x800BB758: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x800BB75C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BB760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BB764: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800BB768: nop

    // 0x800BB76C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB770: mul.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BB774: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800BB778: jal         0x800BABA0
    // 0x800BB77C: nop

    func_800BABA0(rdram, ctx);
        goto after_32;
    // 0x800BB77C: nop

    after_32:
    // 0x800BB780: b           L_800BBC54
    // 0x800BB784: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB784: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB788:
    // 0x800BB788: jal         0x800B5534
    // 0x800BB78C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800B5534(rdram, ctx);
        goto after_33;
    // 0x800BB78C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_33:
    // 0x800BB790: b           L_800BBC54
    // 0x800BB794: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB794: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB798:
    // 0x800BB798: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x800BB79C: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x800BB7A0: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x800BB7A4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BB7A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BB7AC: lh          $t2, 0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X6);
    // 0x800BB7B0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB7B4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800BB7B8: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x800BB7BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800BB7C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BB7C4: mul.s       $f12, $f4, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BB7C8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800BB7CC: mul.s       $f14, $f10, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x800BB7D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BB7D4: swc1        $f12, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f12.u32l;
    // 0x800BB7D8: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x800BB7DC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BB7E0: swc1        $f14, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f14.u32l;
    // 0x800BB7E4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB7E8: mul.s       $f2, $f6, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800BB7EC: nop

    // 0x800BB7F0: mul.s       $f16, $f8, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x800BB7F4: bc1t        L_800BB80C
    if (c1cs) {
        // 0x800BB7F8: nop
    
            goto L_800BB80C;
    }
    // 0x800BB7F8: nop

    // 0x800BB7FC: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x800BB800: nop

    // 0x800BB804: bc1f        L_800BB828
    if (!c1cs) {
        // 0x800BB808: nop
    
            goto L_800BB828;
    }
    // 0x800BB808: nop

L_800BB80C:
    // 0x800BB80C: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x800BB810: jal         0x800DC178
    // 0x800BB814: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    func_800DC178(rdram, ctx);
        goto after_34;
    // 0x800BB814: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    after_34:
    // 0x800BB818: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x800BB81C: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x800BB820: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x800BB824: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB828:
    // 0x800BB828: mul.s       $f18, $f2, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x800BB82C: nop

    // 0x800BB830: mul.s       $f4, $f16, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x800BB834: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BB838: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BB83C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800BB840: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800BB844: sh          $t0, 0xA2($s1)
    MEM_H(0XA2, ctx->r17) = ctx->r8;
    // 0x800BB848: b           L_800BBC54
    // 0x800BB84C: sh          $t5, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r13;
        goto L_800BBC54;
    // 0x800BB84C: sh          $t5, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r13;
L_800BB850:
    // 0x800BB850: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x800BB854: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x800BB858: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB85C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800BB860: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800BB864: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB868: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB86C: mul.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BB870: nop

    // 0x800BB874: mul.s       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BB878: nop

    // 0x800BB87C: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x800BB880: nop

    // 0x800BB884: mul.s       $f18, $f2, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x800BB888: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BB88C: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BB890: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800BB894: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800BB898: sh          $t9, 0xA2($s1)
    MEM_H(0XA2, ctx->r17) = ctx->r25;
    // 0x800BB89C: b           L_800BBC54
    // 0x800BB8A0: sh          $t2, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r10;
        goto L_800BBC54;
    // 0x800BB8A0: sh          $t2, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r10;
L_800BB8A4:
    // 0x800BB8A4: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x800BB8A8: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800BB8AC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800BB8B0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800BB8B4: nop

    // 0x800BB8B8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB8BC: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x800BB8C0: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB8C4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800BB8C8: nop

    // 0x800BB8CC: sh          $t4, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r12;
    // 0x800BB8D0: lh          $t5, -0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, -0XA);
    // 0x800BB8D4: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800BB8D8: nop

    // 0x800BB8DC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB8E0: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x800BB8E4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BB8E8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800BB8EC: nop

    // 0x800BB8F0: sh          $t7, 0xC6($s1)
    MEM_H(0XC6, ctx->r17) = ctx->r15;
    // 0x800BB8F4: lh          $t8, -0x8($s0)
    ctx->r24 = MEM_H(ctx->r16, -0X8);
    // 0x800BB8F8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800BB8FC: nop

    // 0x800BB900: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BB904: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x800BB908: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BB90C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800BB910: nop

    // 0x800BB914: sh          $t1, 0xC8($s1)
    MEM_H(0XC8, ctx->r17) = ctx->r9;
    // 0x800BB918: lh          $t2, -0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, -0X6);
    // 0x800BB91C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800BB920: nop

    // 0x800BB924: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BB928: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x800BB92C: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800BB930: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800BB934: nop

    // 0x800BB938: sh          $t0, 0xCA($s1)
    MEM_H(0XCA, ctx->r17) = ctx->r8;
    // 0x800BB93C: lh          $t4, -0x4($s0)
    ctx->r12 = MEM_H(ctx->r16, -0X4);
    // 0x800BB940: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800BB944: nop

    // 0x800BB948: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BB94C: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x800BB950: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BB954: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800BB958: nop

    // 0x800BB95C: sh          $t6, 0xCC($s1)
    MEM_H(0XCC, ctx->r17) = ctx->r14;
    // 0x800BB960: lh          $t7, -0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, -0X2);
    // 0x800BB964: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BB968: nop

    // 0x800BB96C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB970: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x800BB974: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BB978: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800BB97C: b           L_800BBC54
    // 0x800BB980: sh          $t9, 0xCE($s1)
    MEM_H(0XCE, ctx->r17) = ctx->r25;
        goto L_800BBC54;
    // 0x800BB980: sh          $t9, 0xCE($s1)
    MEM_H(0XCE, ctx->r17) = ctx->r25;
L_800BB984:
    // 0x800BB984: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800BB988: sb          $t1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r9;
    // 0x800BB98C: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x800BB990: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BB994: addiu       $a0, $s1, 0xC8
    ctx->r4 = ADD32(ctx->r17, 0XC8);
    // 0x800BB998: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800BB99C: nop

    // 0x800BB9A0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB9A4: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x800BB9A8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BB9AC: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800BB9B0: nop

    // 0x800BB9B4: sh          $t0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r8;
    // 0x800BB9B8: lh          $t4, -0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, -0X2);
    // 0x800BB9BC: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800BB9C0: nop

    // 0x800BB9C4: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BB9C8: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x800BB9CC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BB9D0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800BB9D4: nop

    // 0x800BB9D8: sh          $t6, 0xC6($s1)
    MEM_H(0XC6, ctx->r17) = ctx->r14;
    // 0x800BB9DC: jal         0x800EE940
    // 0x800BB9E0: lw          $a1, 0x190($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X190);
    func_800EE940(rdram, ctx);
        goto after_35;
    // 0x800BB9E0: lw          $a1, 0x190($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X190);
    after_35:
    // 0x800BB9E4: b           L_800BBC54
    // 0x800BB9E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBC54;
    // 0x800BB9E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BB9EC:
    // 0x800BB9EC: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
    // 0x800BB9F0: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x800BB9F4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800BB9F8: sh          $t7, 0xC8($s1)
    MEM_H(0XC8, ctx->r17) = ctx->r15;
    // 0x800BB9FC: lh          $t8, -0xA($s0)
    ctx->r24 = MEM_H(ctx->r16, -0XA);
    // 0x800BBA00: sh          $t8, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r24;
    // 0x800BBA04: lh          $t9, -0x8($s0)
    ctx->r25 = MEM_H(ctx->r16, -0X8);
    // 0x800BBA08: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800BBA0C: nop

    // 0x800BBA10: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BBA14: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x800BBA18: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800BBA1C: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x800BBA20: nop

    // 0x800BBA24: sh          $t2, 0xCC($s1)
    MEM_H(0XCC, ctx->r17) = ctx->r10;
    // 0x800BBA28: lh          $t3, -0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, -0X6);
    // 0x800BBA2C: sh          $t3, 0xCA($s1)
    MEM_H(0XCA, ctx->r17) = ctx->r11;
    // 0x800BBA30: lh          $t0, -0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, -0X4);
    // 0x800BBA34: sh          $t0, 0xC6($s1)
    MEM_H(0XC6, ctx->r17) = ctx->r8;
    // 0x800BBA38: lh          $t4, -0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, -0X2);
    // 0x800BBA3C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800BBA40: nop

    // 0x800BBA44: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BBA48: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x800BBA4C: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BBA50: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800BBA54: b           L_800BBC54
    // 0x800BBA58: sh          $t6, 0xCE($s1)
    MEM_H(0XCE, ctx->r17) = ctx->r14;
        goto L_800BBC54;
    // 0x800BBA58: sh          $t6, 0xCE($s1)
    MEM_H(0XCE, ctx->r17) = ctx->r14;
L_800BBA5C:
    // 0x800BBA5C: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x800BBA60: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x800BBA64: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x800BBA68: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BBA6C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800BBA70: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x800BBA74: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBA78: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800BBA7C: addiu       $s0, $s0, 0xE
    ctx->r16 = ADD32(ctx->r16, 0XE);
    // 0x800BBA80: addiu       $a0, $s1, 0x6C
    ctx->r4 = ADD32(ctx->r17, 0X6C);
    // 0x800BBA84: addiu       $s2, $s1, 0x60
    ctx->r18 = ADD32(ctx->r17, 0X60);
    // 0x800BBA88: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BBA8C: mul.s       $f0, $f8, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x800BBA90: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800BBA94: mul.s       $f2, $f18, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BBA98: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BBA9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BBAA0: mul.s       $f12, $f4, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BBAA4: nop

    // 0x800BBAA8: mul.s       $f18, $f10, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x800BBAAC: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x800BBAB0: lh          $t2, -0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, -0X6);
    // 0x800BBAB4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800BBAB8: nop

    // 0x800BBABC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BBAC0: mul.s       $f8, $f4, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x800BBAC4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x800BBAC8: lh          $t3, -0x4($s0)
    ctx->r11 = MEM_H(ctx->r16, -0X4);
    // 0x800BBACC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800BBAD0: nop

    // 0x800BBAD4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BBAD8: mul.s       $f6, $f18, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800BBADC: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x800BBAE0: lh          $t0, -0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, -0X2);
    // 0x800BBAE4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800BBAE8: nop

    // 0x800BBAEC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBAF0: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x800BBAF4: nop

    // 0x800BBAF8: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800BBAFC: nop

    // 0x800BBB00: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x800BBB04: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x800BBB08: mul.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x800BBB0C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800BBB10: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800BBB14: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800BBB18: jal         0x800EFA4C
    // 0x800BBB1C: nop

    func_800EFA4C(rdram, ctx);
        goto after_36;
    // 0x800BBB1C: nop

    after_36:
    // 0x800BBB20: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800BBB24: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800BBB28: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800BBB2C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800BBB30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800BBB34: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800BBB38: nop

    // 0x800BBB3C: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800BBB40: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800BBB44: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800BBB48: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800BBB4C: jal         0x800EFA4C
    // 0x800BBB50: nop

    func_800EFA4C(rdram, ctx);
        goto after_37;
    // 0x800BBB50: nop

    after_37:
    // 0x800BBB54: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800BBB58: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BBB5C: b           L_800BBC54
    // 0x800BBB60: swc1        $f10, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f10.u32l;
        goto L_800BBC54;
    // 0x800BBB60: swc1        $f10, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f10.u32l;
L_800BBB64:
    // 0x800BBB64: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x800BBB68: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BBB6C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800BBB70: nop

    // 0x800BBB74: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BBB78: mul.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800BBB7C: b           L_800BBC54
    // 0x800BBB80: swc1        $f0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->f0.u32l;
        goto L_800BBC54;
    // 0x800BBB80: swc1        $f0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->f0.u32l;
L_800BBB84:
    // 0x800BBB84: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x800BBB88: jal         0x800DC128
    // 0x800BBB8C: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    func_800DC128(rdram, ctx);
        goto after_38;
    // 0x800BBB8C: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    after_38:
    // 0x800BBB90: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800BBB94: lh          $t5, 0xCA($s1)
    ctx->r13 = MEM_H(ctx->r17, 0XCA);
    // 0x800BBB98: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BBB9C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBBA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BBBA4: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x800BBBA8: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BBBAC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800BBBB0: nop

    // 0x800BBBB4: addu        $t1, $t5, $t9
    ctx->r9 = ADD32(ctx->r13, ctx->r25);
    // 0x800BBBB8: b           L_800BBC54
    // 0x800BBBBC: sh          $t1, 0xCA($s1)
    MEM_H(0XCA, ctx->r17) = ctx->r9;
        goto L_800BBC54;
    // 0x800BBBBC: sh          $t1, 0xCA($s1)
    MEM_H(0XCA, ctx->r17) = ctx->r9;
L_800BBBC0:
    // 0x800BBBC0: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x800BBBC4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BBBC8: b           L_800BBC54
    // 0x800BBBCC: sb          $t2, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r10;
        goto L_800BBC54;
    // 0x800BBBCC: sb          $t2, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r10;
L_800BBBD0:
    // 0x800BBBD0: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800BBBD4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BBBD8: b           L_800BBC54
    // 0x800BBBDC: sb          $t3, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r11;
        goto L_800BBC54;
    // 0x800BBBDC: sb          $t3, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r11;
L_800BBBE0:
    // 0x800BBBE0: sb          $s4, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r20;
    // 0x800BBBE4: sb          $s4, 0x82($s1)
    MEM_B(0X82, ctx->r17) = ctx->r20;
    // 0x800BBBE8: sb          $s4, 0x83($s1)
    MEM_B(0X83, ctx->r17) = ctx->r20;
    // 0x800BBBEC: sb          $s4, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r20;
    // 0x800BBBF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800BBBF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800BBBF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800BBBFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BBC00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BBC04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BBC08: jal         0x800BA930
    // 0x800BBC0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800BA930(rdram, ctx);
        goto after_39;
    // 0x800BBC0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_39:
    // 0x800BBC10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BBC14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BBC18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BBC1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BBC20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800BBC24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800BBC28: jal         0x800BA450
    // 0x800BBC2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800BA450(rdram, ctx);
        goto after_40;
    // 0x800BBC2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_40:
    // 0x800BBC30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BBC34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BBC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BBC3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BBC40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800BBC44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800BBC48: jal         0x800BA834
    // 0x800BBC4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800BA834(rdram, ctx);
        goto after_41;
    // 0x800BBC4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_41:
    // 0x800BBC50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BBC54:
    // 0x800BBC54: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_800BBC58:
    // 0x800BBC58: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800BBC5C: bnel        $v0, $zero, L_800BAC5C
    if (ctx->r2 != 0) {
        // 0x800BBC60: andi        $t6, $v0, 0xFF
        ctx->r14 = ctx->r2 & 0XFF;
            goto L_800BAC5C;
    }
    goto skip_3;
    // 0x800BBC60: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    skip_3:
L_800BBC64:
    // 0x800BBC64: lw          $t0, 0x17C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X17C);
    // 0x800BBC68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BBC6C: beql        $t0, $zero, L_800BBC80
    if (ctx->r8 == 0) {
        // 0x800BBC70: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_800BBC80;
    }
    goto skip_4;
    // 0x800BBC70: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_4:
    // 0x800BBC74: jal         0x800BA22C
    // 0x800BBC78: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_800BA22C(rdram, ctx);
        goto after_42;
    // 0x800BBC78: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_42:
    // 0x800BBC7C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800BBC80:
    // 0x800BBC80: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800BBC84: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x800BBC88: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x800BBC8C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x800BBC90: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x800BBC94: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800BBC98: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800BBC9C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800BBCA0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800BBCA4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800BBCA8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800BBCAC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800BBCB0: jr          $ra
    // 0x800BBCB4: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
    return;
    // 0x800BBCB4: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
;}
RECOMP_FUNC void func_800BBCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBCB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BBCBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BBCC0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BBCC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BBCC8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BBCCC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800BBCD0: jal         0x800B53A4
    // 0x800BBCD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x800BBCD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800BBCD8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800BBCDC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800BBCE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800BBCE4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800BBCE8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800BBCEC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800BBCF0: jal         0x800BABB8
    // 0x800BBCF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800BABB8(rdram, ctx);
        goto after_1;
    // 0x800BBCF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x800BBCF8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800BBCFC: jal         0x800BA22C
    // 0x800BBD00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800BA22C(rdram, ctx);
        goto after_2;
    // 0x800BBD00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x800BBD04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BBD08: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800BBD0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BBD10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BBD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBD18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BBD1C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800BBD20: beq         $a0, $zero, L_800BBD44
    if (ctx->r4 == 0) {
        // 0x800BBD24: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800BBD44;
    }
    // 0x800BBD24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BBD28: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800BBD2C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800BBD30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800BBD34: jal         0x800BABB8
    // 0x800BBD38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800BABB8(rdram, ctx);
        goto after_0;
    // 0x800BBD38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800BBD3C: jal         0x800B4790
    // 0x800BBD40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800B4790(rdram, ctx);
        goto after_1;
    // 0x800BBD40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
L_800BBD44:
    // 0x800BBD44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BBD48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BBD4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BBD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBD60: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800BBD64: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800BBD68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800BBD6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800BBD70: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800BBD74: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800BBD78: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800BBD7C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800BBD80: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800BBD84: jal         0x800D674C
    // 0x800BBD88: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x800BBD88: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    after_0:
    // 0x800BBD8C: lw          $s0, 0x8C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8C);
    // 0x800BBD90: lw          $t6, 0x90($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X90);
    // 0x800BBD94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800BBD98: sltu        $at, $s0, $t6
    ctx->r1 = ctx->r16 < ctx->r14 ? 1 : 0;
    // 0x800BBD9C: beq         $at, $zero, L_800BBEB8
    if (ctx->r1 == 0) {
        // 0x800BBDA0: lui         $at, 0x3B80
        ctx->r1 = S32(0X3B80 << 16);
            goto L_800BBEB8;
    }
    // 0x800BBDA0: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x800BBDA4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800BBDA8: addiu       $s3, $sp, 0x40
    ctx->r19 = ADD32(ctx->r29, 0X40);
    // 0x800BBDAC: lh          $t7, 0xC($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XC);
L_800BBDB0:
    // 0x800BBDB0: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x800BBDB4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800BBDB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BBDBC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800BBDC0: nop

    // 0x800BBDC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBDC8: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x800BBDCC: lh          $t1, 0x8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X8);
    // 0x800BBDD0: lh          $t0, 0xE($s1)
    ctx->r8 = MEM_H(ctx->r17, 0XE);
    // 0x800BBDD4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800BBDD8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800BBDDC: nop

    // 0x800BBDE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BBDE4: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x800BBDE8: lh          $t4, 0xA($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XA);
    // 0x800BBDEC: lh          $t3, 0x10($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X10);
    // 0x800BBDF0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800BBDF4: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800BBDF8: nop

    // 0x800BBDFC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BBE00: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x800BBE04: lbu         $t6, 0x83($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X83);
    // 0x800BBE08: lbu         $a2, 0x82($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X82);
    // 0x800BBE0C: lbu         $a1, 0x81($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X81);
    // 0x800BBE10: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800BBE14: lbu         $a0, 0x80($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X80);
    // 0x800BBE18: bgez        $t6, L_800BBE2C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800BBE1C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800BBE2C;
    }
    // 0x800BBE1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBE20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BBE24: nop

    // 0x800BBE28: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800BBE2C:
    // 0x800BBE2C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800BBE30: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800BBE34: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800BBE38: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800BBE3C: jal         0x800DF5D8
    // 0x800BBE40: nop

    func_800DF5D8(rdram, ctx);
        goto after_1;
    // 0x800BBE40: nop

    after_1:
    // 0x800BBE44: jal         0x800DF830
    // 0x800BBE48: lbu         $a0, 0x53($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X53);
    func_800DF830(rdram, ctx);
        goto after_2;
    // 0x800BBE48: lbu         $a0, 0x53($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X53);
    after_2:
    // 0x800BBE4C: lh          $t8, 0x30($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X30);
    // 0x800BBE50: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x800BBE54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800BBE58: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800BBE5C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x800BBE60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BBE64: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBE68: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800BBE6C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800BBE70: jal         0x800DE448
    // 0x800BBE74: nop

    func_800DE448(rdram, ctx);
        goto after_3;
    // 0x800BBE74: nop

    after_3:
    // 0x800BBE78: beq         $v0, $zero, L_800BBE88
    if (ctx->r2 == 0) {
        // 0x800BBE7C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800BBE88;
    }
    // 0x800BBE7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800BBE80: b           L_800BBE88
    // 0x800BBE84: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800BBE88;
    // 0x800BBE84: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800BBE88:
    // 0x800BBE88: lbu         $v0, 0x39($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X39);
    // 0x800BBE8C: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x800BBE90: srl         $t9, $v0, 7
    ctx->r25 = S32(U32(ctx->r2) >> 7);
    // 0x800BBE94: or          $t1, $t9, $v1
    ctx->r9 = ctx->r25 | ctx->r3;
    // 0x800BBE98: sll         $t3, $t1, 7
    ctx->r11 = S32(ctx->r9 << 7);
    // 0x800BBE9C: andi        $t4, $v0, 0xFF7F
    ctx->r12 = ctx->r2 & 0XFF7F;
    // 0x800BBEA0: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x800BBEA4: sb          $t5, -0x3($s0)
    MEM_B(-0X3, ctx->r16) = ctx->r13;
    // 0x800BBEA8: lw          $t6, 0x90($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X90);
    // 0x800BBEAC: sltu        $at, $s0, $t6
    ctx->r1 = ctx->r16 < ctx->r14 ? 1 : 0;
    // 0x800BBEB0: bnel        $at, $zero, L_800BBDB0
    if (ctx->r1 != 0) {
        // 0x800BBEB4: lh          $t7, 0xC($s1)
        ctx->r15 = MEM_H(ctx->r17, 0XC);
            goto L_800BBDB0;
    }
    goto skip_0;
    // 0x800BBEB4: lh          $t7, 0xC($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XC);
    skip_0:
L_800BBEB8:
    // 0x800BBEB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800BBEBC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800BBEC0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800BBEC4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800BBEC8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800BBECC: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800BBED0: jr          $ra
    // 0x800BBED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800BBED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800BBED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBED8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800BBEDC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800BBEE0: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x800BBEE4: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x800BBEE8: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x800BBEEC: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x800BBEF0: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x800BBEF4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x800BBEF8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x800BBEFC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x800BBF00: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800BBF04: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800BBF08: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800BBF0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BBF10: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x800BBF14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BBF18: mtc1        $a1, $f26
    ctx->f26.u32l = ctx->r5;
    // 0x800BBF1C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800BBF20: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800BBF24: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800BBF28: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800BBF2C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x800BBF30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BBF34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800BBF38: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
L_800BBF3C:
    // 0x800BBF3C: lwc1        $f8, 0x6C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x800BBF40: addu        $s1, $s4, $s2
    ctx->r17 = ADD32(ctx->r20, ctx->r18);
    // 0x800BBF44: c.eq.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl == ctx->f8.fl;
    // 0x800BBF48: nop

    // 0x800BBF4C: bc1tl       L_800BBFA0
    if (c1cs) {
        // 0x800BBF50: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800BBFA0;
    }
    goto skip_0;
    // 0x800BBF50: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_0:
    // 0x800BBF54: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
    // 0x800BBF58: lwc1        $f14, 0x5C($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x800BBF5C: jal         0x800F13C4
    // 0x800BBF60: add.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f26.fl;
    func_800F13C4(rdram, ctx);
        goto after_0;
    // 0x800BBF60: add.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f26.fl;
    after_0:
    // 0x800BBF64: jal         0x800F2100
    // 0x800BBF68: sub.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f20.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x800BBF68: sub.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f20.fl;
    after_1:
    // 0x800BBF6C: lwc1        $f2, 0x6C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x800BBF70: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800BBF74: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800BBF78: sub.s       $f16, $f24, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x800BBF7C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x800BBF80: add.s       $f18, $f2, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f24.fl;
    // 0x800BBF84: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800BBF88: jal         0x800F10B4
    // 0x800BBF8C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x800BBF8C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800BBF90: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800BBF94: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800BBF98: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x800BBF9C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_800BBFA0:
    // 0x800BBFA0: bne         $s2, $s5, L_800BBF3C
    if (ctx->r18 != ctx->r21) {
        // 0x800BBFA4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800BBF3C;
    }
    // 0x800BBFA4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800BBFA8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x800BBFAC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800BBFB0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800BBFB4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800BBFB8: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x800BBFBC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x800BBFC0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800BBFC4: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x800BBFC8: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x800BBFCC: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x800BBFD0: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x800BBFD4: jr          $ra
    // 0x800BBFD8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800BBFD8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800BBFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBFDC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800BBFE0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800BBFE4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800BBFE8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800BBFEC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800BBFF0: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800BBFF4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800BBFF8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800BBFFC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800BC000: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x800BC004: jal         0x800D674C
    // 0x800BC008: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x800BC008: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    after_0:
    // 0x800BC00C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x800BC010: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800BC014: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800BC018: andi        $t6, $v1, 0x800
    ctx->r14 = ctx->r3 & 0X800;
    // 0x800BC01C: beq         $t6, $zero, L_800BC02C
    if (ctx->r14 == 0) {
        // 0x800BC020: andi        $t7, $v1, 0x20
        ctx->r15 = ctx->r3 & 0X20;
            goto L_800BC02C;
    }
    // 0x800BC020: andi        $t7, $v1, 0x20
    ctx->r15 = ctx->r3 & 0X20;
    // 0x800BC024: b           L_800BC02C
    // 0x800BC028: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
        goto L_800BC02C;
    // 0x800BC028: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_800BC02C:
    // 0x800BC02C: bnel        $t7, $zero, L_800BC0E4
    if (ctx->r15 != 0) {
        // 0x800BC030: lbu         $t2, 0x53($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X53);
            goto L_800BC0E4;
    }
    goto skip_0;
    // 0x800BC030: lbu         $t2, 0x53($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X53);
    skip_0:
    // 0x800BC034: lbu         $t8, 0x80($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X80);
    // 0x800BC038: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800BC03C: bne         $v0, $t8, L_800BC068
    if (ctx->r2 != ctx->r24) {
        // 0x800BC040: nop
    
            goto L_800BC068;
    }
    // 0x800BC040: nop

    // 0x800BC044: lbu         $t9, 0x81($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X81);
    // 0x800BC048: bne         $v0, $t9, L_800BC068
    if (ctx->r2 != ctx->r25) {
        // 0x800BC04C: nop
    
            goto L_800BC068;
    }
    // 0x800BC04C: nop

    // 0x800BC050: lbu         $t0, 0x82($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X82);
    // 0x800BC054: bne         $v0, $t0, L_800BC068
    if (ctx->r2 != ctx->r8) {
        // 0x800BC058: nop
    
            goto L_800BC068;
    }
    // 0x800BC058: nop

    // 0x800BC05C: lbu         $t1, 0x83($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X83);
    // 0x800BC060: beql        $v0, $t1, L_800BC0E4
    if (ctx->r2 == ctx->r9) {
        // 0x800BC064: lbu         $t2, 0x53($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X53);
            goto L_800BC0E4;
    }
    goto skip_1;
    // 0x800BC064: lbu         $t2, 0x53($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X53);
    skip_1:
L_800BC068:
    // 0x800BC068: jal         0x800E2588
    // 0x800BC06C: lbu         $a0, 0x53($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X53);
    func_800E2588(rdram, ctx);
        goto after_1;
    // 0x800BC06C: lbu         $a0, 0x53($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X53);
    after_1:
    // 0x800BC070: lbu         $a0, 0x80($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X80);
    // 0x800BC074: lbu         $a1, 0x81($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X81);
    // 0x800BC078: jal         0x800E24F8
    // 0x800BC07C: lbu         $a2, 0x82($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X82);
    func_800E24F8(rdram, ctx);
        goto after_2;
    // 0x800BC07C: lbu         $a2, 0x82($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X82);
    after_2:
    // 0x800BC080: lbu         $v0, 0x80($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X80);
    // 0x800BC084: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800BC088: beq         $at, $zero, L_800BC098
    if (ctx->r1 == 0) {
        // 0x800BC08C: addiu       $a0, $v0, -0x8
        ctx->r4 = ADD32(ctx->r2, -0X8);
            goto L_800BC098;
    }
    // 0x800BC08C: addiu       $a0, $v0, -0x8
    ctx->r4 = ADD32(ctx->r2, -0X8);
    // 0x800BC090: b           L_800BC098
    // 0x800BC094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_800BC098;
    // 0x800BC094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800BC098:
    // 0x800BC098: lbu         $v0, 0x81($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X81);
    // 0x800BC09C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800BC0A0: beq         $at, $zero, L_800BC0B0
    if (ctx->r1 == 0) {
        // 0x800BC0A4: addiu       $a1, $v0, -0x8
        ctx->r5 = ADD32(ctx->r2, -0X8);
            goto L_800BC0B0;
    }
    // 0x800BC0A4: addiu       $a1, $v0, -0x8
    ctx->r5 = ADD32(ctx->r2, -0X8);
    // 0x800BC0A8: b           L_800BC0B0
    // 0x800BC0AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_800BC0B0;
    // 0x800BC0AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800BC0B0:
    // 0x800BC0B0: lbu         $v0, 0x82($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X82);
    // 0x800BC0B4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800BC0B8: beq         $at, $zero, L_800BC0C8
    if (ctx->r1 == 0) {
        // 0x800BC0BC: addiu       $a2, $v0, -0x8
        ctx->r6 = ADD32(ctx->r2, -0X8);
            goto L_800BC0C8;
    }
    // 0x800BC0BC: addiu       $a2, $v0, -0x8
    ctx->r6 = ADD32(ctx->r2, -0X8);
    // 0x800BC0C0: b           L_800BC0C8
    // 0x800BC0C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_800BC0C8;
    // 0x800BC0C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800BC0C8:
    // 0x800BC0C8: jal         0x800E2440
    // 0x800BC0CC: nop

    func_800E2440(rdram, ctx);
        goto after_3;
    // 0x800BC0CC: nop

    after_3:
    // 0x800BC0D0: jal         0x800E24B4
    // 0x800BC0D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800E24B4(rdram, ctx);
        goto after_4;
    // 0x800BC0D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x800BC0D8: b           L_800BC104
    // 0x800BC0DC: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
        goto L_800BC104;
    // 0x800BC0DC: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
    // 0x800BC0E0: lbu         $t2, 0x53($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X53);
L_800BC0E4:
    // 0x800BC0E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BC0E8: beq         $t2, $zero, L_800BC0F8
    if (ctx->r10 == 0) {
        // 0x800BC0EC: nop
    
            goto L_800BC0F8;
    }
    // 0x800BC0EC: nop

    // 0x800BC0F0: b           L_800BC0F8
    // 0x800BC0F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_800BC0F8;
    // 0x800BC0F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_800BC0F8:
    // 0x800BC0F8: jal         0x800E2588
    // 0x800BC0FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800E2588(rdram, ctx);
        goto after_5;
    // 0x800BC0FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
    // 0x800BC100: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
L_800BC104:
    // 0x800BC104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BC108: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x800BC10C: beq         $t4, $zero, L_800BC11C
    if (ctx->r12 == 0) {
        // 0x800BC110: nop
    
            goto L_800BC11C;
    }
    // 0x800BC110: nop

    // 0x800BC114: b           L_800BC11C
    // 0x800BC118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_800BC11C;
    // 0x800BC118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800BC11C:
    // 0x800BC11C: jal         0x800E24D8
    // 0x800BC120: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800E24D8(rdram, ctx);
        goto after_6;
    // 0x800BC120: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x800BC124: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800BC128: jal         0x800E2594
    // 0x800BC12C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800E2594(rdram, ctx);
        goto after_7;
    // 0x800BC12C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x800BC130: lhu         $t5, 0x0($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X0);
    // 0x800BC134: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x800BC138: beql        $t6, $zero, L_800BC160
    if (ctx->r14 == 0) {
        // 0x800BC13C: lw          $s0, 0x8C($s1)
        ctx->r16 = MEM_W(ctx->r17, 0X8C);
            goto L_800BC160;
    }
    goto skip_2;
    // 0x800BC13C: lw          $s0, 0x8C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8C);
    skip_2:
    // 0x800BC140: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800BC144: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x800BC148: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x800BC14C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800BC150: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800BC154: jal         0x800EFA4C
    // 0x800BC158: nop

    func_800EFA4C(rdram, ctx);
        goto after_8;
    // 0x800BC158: nop

    after_8:
    // 0x800BC15C: lw          $s0, 0x8C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8C);
L_800BC160:
    // 0x800BC160: lw          $t7, 0x90($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X90);
    // 0x800BC164: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x800BC168: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
    // 0x800BC16C: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x800BC170: beq         $at, $zero, L_800BC32C
    if (ctx->r1 == 0) {
        // 0x800BC174: nop
    
            goto L_800BC32C;
    }
    // 0x800BC174: nop

    // 0x800BC178: lh          $t8, 0xC($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XC);
L_800BC17C:
    // 0x800BC17C: lh          $t9, 0x6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6);
    // 0x800BC180: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x800BC184: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BC188: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800BC18C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800BC190: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800BC194: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BC198: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x800BC19C: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x800BC1A0: lh          $t1, 0xE($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XE);
    // 0x800BC1A4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800BC1A8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800BC1AC: nop

    // 0x800BC1B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BC1B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BC1B8: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x800BC1BC: lh          $t5, 0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA);
    // 0x800BC1C0: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
    // 0x800BC1C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BC1C8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800BC1CC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800BC1D0: nop

    // 0x800BC1D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BC1D8: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x800BC1DC: lh          $t7, 0x30($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X30);
    // 0x800BC1E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BC1E4: nop

    // 0x800BC1E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BC1EC: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800BC1F0: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x800BC1F4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x800BC1F8: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x800BC1FC: lwc1        $f16, 0x5C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x800BC200: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800BC204: nop

    // 0x800BC208: bc1tl       L_800BC21C
    if (c1cs) {
        // 0x800BC20C: lhu         $t8, 0x0($s1)
        ctx->r24 = MEM_HU(ctx->r17, 0X0);
            goto L_800BC21C;
    }
    goto skip_3;
    // 0x800BC20C: lhu         $t8, 0x0($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X0);
    skip_3:
    // 0x800BC210: jal         0x800BBED8
    // 0x800BC214: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    func_800BBED8(rdram, ctx);
        goto after_9;
    // 0x800BC214: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    after_9:
    // 0x800BC218: lhu         $t8, 0x0($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X0);
L_800BC21C:
    // 0x800BC21C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800BC220: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800BC224: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800BC228: beq         $t9, $zero, L_800BC2A0
    if (ctx->r25 == 0) {
        // 0x800BC22C: addiu       $t1, $sp, 0x6C
        ctx->r9 = ADD32(ctx->r29, 0X6C);
            goto L_800BC2A0;
    }
    // 0x800BC22C: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x800BC230: lh          $a1, 0x2C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2C);
    // 0x800BC234: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x800BC238: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800BC23C: lbu         $t2, 0x83($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X83);
    // 0x800BC240: sra         $t0, $a1, 8
    ctx->r8 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800BC244: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800BC248: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800BC24C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x800BC250: bgez        $t2, L_800BC268
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800BC254: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800BC268;
    }
    // 0x800BC254: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BC258: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800BC25C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BC260: nop

    // 0x800BC264: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800BC268:
    // 0x800BC268: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800BC26C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800BC270: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BC274: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800BC278: jal         0x800E28A4
    // 0x800BC27C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_800E28A4(rdram, ctx);
        goto after_10;
    // 0x800BC27C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_10:
    // 0x800BC280: lbu         $v1, 0x39($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X39);
    // 0x800BC284: srl         $t5, $v1, 7
    ctx->r13 = S32(U32(ctx->r3) >> 7);
    // 0x800BC288: or          $t7, $t5, $v0
    ctx->r15 = ctx->r13 | ctx->r2;
    // 0x800BC28C: sll         $t9, $t7, 7
    ctx->r25 = S32(ctx->r15 << 7);
    // 0x800BC290: andi        $t0, $v1, 0xFF7F
    ctx->r8 = ctx->r3 & 0XFF7F;
    // 0x800BC294: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x800BC298: b           L_800BC318
    // 0x800BC29C: sb          $t1, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r9;
        goto L_800BC318;
    // 0x800BC29C: sb          $t1, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r9;
L_800BC2A0:
    // 0x800BC2A0: jal         0x800E2530
    // 0x800BC2A4: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    func_800E2530(rdram, ctx);
        goto after_11;
    // 0x800BC2A4: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    after_11:
    // 0x800BC2A8: lh          $a1, 0x2C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2C);
    // 0x800BC2AC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x800BC2B0: lbu         $t3, 0x83($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X83);
    // 0x800BC2B4: sra         $t2, $a1, 8
    ctx->r10 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800BC2B8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800BC2BC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800BC2C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800BC2C4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800BC2C8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x800BC2CC: bgez        $t3, L_800BC2E4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800BC2D0: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800BC2E4;
    }
    // 0x800BC2D0: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BC2D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800BC2D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BC2DC: nop

    // 0x800BC2E0: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_800BC2E4:
    // 0x800BC2E4: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800BC2E8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800BC2EC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800BC2F0: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x800BC2F4: jal         0x800E2720
    // 0x800BC2F8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800E2720(rdram, ctx);
        goto after_12;
    // 0x800BC2F8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_12:
    // 0x800BC2FC: lbu         $v1, 0x39($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X39);
    // 0x800BC300: srl         $t6, $v1, 7
    ctx->r14 = S32(U32(ctx->r3) >> 7);
    // 0x800BC304: or          $t8, $t6, $v0
    ctx->r24 = ctx->r14 | ctx->r2;
    // 0x800BC308: sll         $t0, $t8, 7
    ctx->r8 = S32(ctx->r24 << 7);
    // 0x800BC30C: andi        $t1, $v1, 0xFF7F
    ctx->r9 = ctx->r3 & 0XFF7F;
    // 0x800BC310: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x800BC314: sb          $t2, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r10;
L_800BC318:
    // 0x800BC318: lw          $t3, 0x90($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X90);
    // 0x800BC31C: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x800BC320: sltu        $at, $s0, $t3
    ctx->r1 = ctx->r16 < ctx->r11 ? 1 : 0;
    // 0x800BC324: bnel        $at, $zero, L_800BC17C
    if (ctx->r1 != 0) {
        // 0x800BC328: lh          $t8, 0xC($s1)
        ctx->r24 = MEM_H(ctx->r17, 0XC);
            goto L_800BC17C;
    }
    goto skip_4;
    // 0x800BC328: lh          $t8, 0xC($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XC);
    skip_4:
L_800BC32C:
    // 0x800BC32C: jal         0x800E2A14
    // 0x800BC330: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800E2A14(rdram, ctx);
        goto after_13;
    // 0x800BC330: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_13:
    // 0x800BC334: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800BC338: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800BC33C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800BC340: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC344: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800BC348: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800BC34C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800BC350: jr          $ra
    // 0x800BC354: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x800BC354: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800BC358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BC35C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC360: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x800BC364: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x800BC368: bnel        $t7, $a2, L_800BC3AC
    if (ctx->r15 != ctx->r6) {
        // 0x800BC36C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BC3AC;
    }
    goto skip_0;
    // 0x800BC36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BC370: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x800BC374: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800BC378: beq         $v0, $zero, L_800BC390
    if (ctx->r2 == 0) {
        // 0x800BC37C: nop
    
            goto L_800BC390;
    }
    // 0x800BC37C: nop

    // 0x800BC380: beq         $v0, $at, L_800BC3A0
    if (ctx->r2 == ctx->r1) {
        // 0x800BC384: nop
    
            goto L_800BC3A0;
    }
    // 0x800BC384: nop

    // 0x800BC388: b           L_800BC3AC
    // 0x800BC38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800BC3AC;
    // 0x800BC38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BC390:
    // 0x800BC390: jal         0x800BBD60
    // 0x800BC394: nop

    func_800BBD60(rdram, ctx);
        goto after_0;
    // 0x800BC394: nop

    after_0:
    // 0x800BC398: b           L_800BC3AC
    // 0x800BC39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800BC3AC;
    // 0x800BC39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BC3A0:
    // 0x800BC3A0: jal         0x800BBFDC
    // 0x800BC3A4: nop

    func_800BBFDC(rdram, ctx);
        goto after_1;
    // 0x800BC3A4: nop

    after_1:
    // 0x800BC3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BC3AC:
    // 0x800BC3AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BC3B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BC3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC3B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BC3BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC3C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BC3C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BC3C8: jal         0x800BC358
    // 0x800BC3CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800BC358(rdram, ctx);
        goto after_0;
    // 0x800BC3CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x800BC3D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BC3D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC3D8: jal         0x800BC358
    // 0x800BC3DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800BC358(rdram, ctx);
        goto after_1;
    // 0x800BC3DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800BC3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BC3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BC3E8: jr          $ra
    // 0x800BC3EC: nop

    return;
    // 0x800BC3EC: nop

;}
RECOMP_FUNC void func_800BC3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC3F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BC3F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC3F8: jal         0x8001BAFC
    // 0x800BC3FC: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800BC3FC: nop

    after_0:
    // 0x800BC400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BC404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BC408: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BC410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC410: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800BC414: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BC418: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800BC41C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800BC420: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800BC424: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800BC428: jal         0x800E7FCC
    // 0x800BC42C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800E7FCC(rdram, ctx);
        goto after_0;
    // 0x800BC42C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800BC430: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800BC434: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800BC438: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800BC43C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800BC440: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800BC444: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800BC448: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC44C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800BC450: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800BC454: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800BC458: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800BC45C: jal         0x800BC474
    // 0x800BC460: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_800BC474(rdram, ctx);
        goto after_1;
    // 0x800BC460: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_1:
    // 0x800BC464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BC468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800BC46C: jr          $ra
    // 0x800BC470: nop

    return;
    // 0x800BC470: nop

;}
RECOMP_FUNC void func_800BC474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC474: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800BC478: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800BC47C: addiu       $t8, $t8, -0x58D0
    ctx->r24 = ADD32(ctx->r24, -0X58D0);
    // 0x800BC480: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800BC484: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800BC488: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800BC48C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800BC490: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800BC494: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800BC498: lui         $t4, 0xF700
    ctx->r12 = S32(0XF700 << 16);
    // 0x800BC49C: addu        $t3, $a1, $a3
    ctx->r11 = ADD32(ctx->r5, ctx->r7);
    // 0x800BC4A0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800BC4A4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800BC4A8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800BC4AC: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x800BC4B0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800BC4B4: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x800BC4B8: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800BC4BC: andi        $t7, $t6, 0xF800
    ctx->r15 = ctx->r14 & 0XF800;
    // 0x800BC4C0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC4C4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800BC4C8: andi        $t4, $t9, 0x7C0
    ctx->r12 = ctx->r25 & 0X7C0;
    // 0x800BC4CC: sra         $t8, $t6, 2
    ctx->r24 = S32(SIGNED(ctx->r14) >> 2);
    // 0x800BC4D0: andi        $t9, $t8, 0x3E
    ctx->r25 = ctx->r24 & 0X3E;
    // 0x800BC4D4: or          $t5, $t7, $t4
    ctx->r13 = ctx->r15 | ctx->r12;
    // 0x800BC4D8: or          $t1, $t5, $t9
    ctx->r9 = ctx->r13 | ctx->r25;
    // 0x800BC4DC: ori         $t7, $t1, 0x1
    ctx->r15 = ctx->r9 | 0X1;
    // 0x800BC4E0: sll         $t4, $t7, 16
    ctx->r12 = S32(ctx->r15 << 16);
    // 0x800BC4E4: or          $t6, $t4, $t7
    ctx->r14 = ctx->r12 | ctx->r15;
    // 0x800BC4E8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800BC4EC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800BC4F0: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x800BC4F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BC4F8: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x800BC4FC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800BC500: blez        $t3, L_800BC510
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800BC504: lw          $t5, 0x10($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X10);
            goto L_800BC510;
    }
    // 0x800BC504: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x800BC508: b           L_800BC510
    // 0x800BC50C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_800BC510;
    // 0x800BC50C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_800BC510:
    // 0x800BC510: addu        $v1, $a2, $t5
    ctx->r3 = ADD32(ctx->r6, ctx->r13);
    // 0x800BC514: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800BC518: blez        $v1, L_800BC528
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800BC51C: andi        $t6, $v0, 0x3FF
        ctx->r14 = ctx->r2 & 0X3FF;
            goto L_800BC528;
    }
    // 0x800BC51C: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x800BC520: b           L_800BC52C
    // 0x800BC524: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_800BC52C;
    // 0x800BC524: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_800BC528:
    // 0x800BC528: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800BC52C:
    // 0x800BC52C: andi        $t9, $a0, 0x3FF
    ctx->r25 = ctx->r4 & 0X3FF;
    // 0x800BC530: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800BC534: or          $t4, $t7, $at
    ctx->r12 = ctx->r15 | ctx->r1;
    // 0x800BC538: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x800BC53C: or          $t5, $t4, $t8
    ctx->r13 = ctx->r12 | ctx->r24;
    // 0x800BC540: blez        $a1, L_800BC550
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800BC544: sw          $t5, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r13;
            goto L_800BC550;
    }
    // 0x800BC544: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x800BC548: b           L_800BC554
    // 0x800BC54C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_800BC554;
    // 0x800BC54C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_800BC550:
    // 0x800BC550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BC554:
    // 0x800BC554: blez        $a2, L_800BC564
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800BC558: andi        $t6, $v0, 0x3FF
        ctx->r14 = ctx->r2 & 0X3FF;
            goto L_800BC564;
    }
    // 0x800BC558: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x800BC55C: b           L_800BC568
    // 0x800BC560: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
        goto L_800BC568;
    // 0x800BC560: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_800BC564:
    // 0x800BC564: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800BC568:
    // 0x800BC568: andi        $t9, $a0, 0x3FF
    ctx->r25 = ctx->r4 & 0X3FF;
    // 0x800BC56C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800BC570: sll         $t4, $t6, 14
    ctx->r12 = S32(ctx->r14 << 14);
    // 0x800BC574: or          $t8, $t7, $t4
    ctx->r24 = ctx->r15 | ctx->r12;
    // 0x800BC578: jr          $ra
    // 0x800BC57C: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    return;
    // 0x800BC57C: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
;}
RECOMP_FUNC void func_800BC580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC580: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BC584: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800BC588: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BC58C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800BC590: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800BC594: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800BC598: jal         0x800BC474
    // 0x800BC59C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800BC474(rdram, ctx);
        goto after_0;
    // 0x800BC59C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800BC5A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BC5A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BC5A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BC5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC5B0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800BC5B4: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800BC5B8: addiu       $t8, $t8, -0x58D0
    ctx->r24 = ADD32(ctx->r24, -0X58D0);
    // 0x800BC5BC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800BC5C0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800BC5C4: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800BC5C8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800BC5CC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800BC5D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800BC5D4: lui         $t4, 0xFFFC
    ctx->r12 = S32(0XFFFC << 16);
    // 0x800BC5D8: ori         $t4, $t4, 0xFFFC
    ctx->r12 = ctx->r12 | 0XFFFC;
    // 0x800BC5DC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800BC5E0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800BC5E4: lui         $t3, 0xF700
    ctx->r11 = S32(0XF700 << 16);
    // 0x800BC5E8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800BC5EC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x800BC5F0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800BC5F4: addu        $t2, $a1, $a3
    ctx->r10 = ADD32(ctx->r5, ctx->r7);
    // 0x800BC5F8: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800BC5FC: addiu       $t5, $t1, 0x8
    ctx->r13 = ADD32(ctx->r9, 0X8);
    // 0x800BC600: blez        $t2, L_800BC610
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800BC604: sw          $t5, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r13;
            goto L_800BC610;
    }
    // 0x800BC604: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800BC608: b           L_800BC614
    // 0x800BC60C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_800BC614;
    // 0x800BC60C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_800BC610:
    // 0x800BC610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BC614:
    // 0x800BC614: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800BC618: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x800BC61C: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x800BC620: addu        $v1, $a2, $t6
    ctx->r3 = ADD32(ctx->r6, ctx->r14);
    // 0x800BC624: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800BC628: blez        $v1, L_800BC638
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800BC62C: lui         $at, 0xF600
        ctx->r1 = S32(0XF600 << 16);
            goto L_800BC638;
    }
    // 0x800BC62C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x800BC630: b           L_800BC63C
    // 0x800BC634: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_800BC63C;
    // 0x800BC634: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_800BC638:
    // 0x800BC638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800BC63C:
    // 0x800BC63C: andi        $t7, $a0, 0x3FF
    ctx->r15 = ctx->r4 & 0X3FF;
    // 0x800BC640: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BC644: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x800BC648: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x800BC64C: blez        $a1, L_800BC65C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800BC650: sw          $t5, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r13;
            goto L_800BC65C;
    }
    // 0x800BC650: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x800BC654: b           L_800BC660
    // 0x800BC658: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_800BC660;
    // 0x800BC658: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_800BC65C:
    // 0x800BC65C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BC660:
    // 0x800BC660: blez        $a2, L_800BC670
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800BC664: andi        $t8, $v0, 0x3FF
        ctx->r24 = ctx->r2 & 0X3FF;
            goto L_800BC670;
    }
    // 0x800BC664: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x800BC668: b           L_800BC674
    // 0x800BC66C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
        goto L_800BC674;
    // 0x800BC66C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_800BC670:
    // 0x800BC670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800BC674:
    // 0x800BC674: andi        $t6, $a0, 0x3FF
    ctx->r14 = ctx->r4 & 0X3FF;
    // 0x800BC678: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC67C: sll         $t3, $t8, 14
    ctx->r11 = S32(ctx->r24 << 14);
    // 0x800BC680: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x800BC684: jr          $ra
    // 0x800BC688: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    return;
    // 0x800BC688: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
;}
RECOMP_FUNC void func_800BC690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC690: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800BC694: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BC698: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BC69C: jal         0x800EA05C
    // 0x800BC6A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800BC6A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800BC6A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800BC6A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800BC6AC: addiu       $v1, $v1, -0x5840
    ctx->r3 = ADD32(ctx->r3, -0X5840);
    // 0x800BC6B0: addiu       $s0, $s0, -0x58A0
    ctx->r16 = ADD32(ctx->r16, -0X58A0);
    // 0x800BC6B4: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
L_800BC6B8:
    // 0x800BC6B8: beq         $v0, $t6, L_800BC6CC
    if (ctx->r2 == ctx->r14) {
        // 0x800BC6BC: nop
    
            goto L_800BC6CC;
    }
    // 0x800BC6BC: nop

    // 0x800BC6C0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800BC6C4: bnel        $s0, $v1, L_800BC6B8
    if (ctx->r16 != ctx->r3) {
        // 0x800BC6C8: lh          $t6, 0x0($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X0);
            goto L_800BC6B8;
    }
    goto skip_0;
    // 0x800BC6C8: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    skip_0:
L_800BC6CC:
    // 0x800BC6CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800BC6D0: addiu       $t7, $t7, -0x5840
    ctx->r15 = ADD32(ctx->r15, -0X5840);
    // 0x800BC6D4: beql        $s0, $t7, L_800BC890
    if (ctx->r16 == ctx->r15) {
        // 0x800BC6D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800BC890;
    }
    goto skip_1;
    // 0x800BC6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800BC6DC: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x800BC6E0: beq         $t8, $zero, L_800BC6FC
    if (ctx->r24 == 0) {
        // 0x800BC6E4: nop
    
            goto L_800BC6FC;
    }
    // 0x800BC6E4: nop

    // 0x800BC6E8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800BC6EC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BC6F0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x800BC6F4: jal         0x800B5680
    // 0x800BC6F8: nop

    func_800B5680(rdram, ctx);
        goto after_1;
    // 0x800BC6F8: nop

    after_1:
L_800BC6FC:
    // 0x800BC6FC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800BC700: addiu       $s1, $s1, -0x7D20
    ctx->r17 = ADD32(ctx->r17, -0X7D20);
    // 0x800BC704: lh          $t3, 0x2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2);
    // 0x800BC708: lh          $t4, 0x4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X4);
    // 0x800BC70C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800BC710: sb          $t1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r9;
    // 0x800BC714: sb          $t1, 0x10($s1)
    MEM_B(0X10, ctx->r17) = ctx->r9;
    // 0x800BC718: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x800BC71C: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
    // 0x800BC720: addiu       $a0, $zero, 0x5DC0
    ctx->r4 = ADD32(0, 0X5DC0);
    // 0x800BC724: sh          $t3, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r11;
    // 0x800BC728: jal         0x8001ACCC
    // 0x800BC72C: sb          $t4, 0x11($s1)
    MEM_B(0X11, ctx->r17) = ctx->r12;
    func_8001ACCC(rdram, ctx);
        goto after_2;
    // 0x800BC72C: sb          $t4, 0x11($s1)
    MEM_B(0X11, ctx->r17) = ctx->r12;
    after_2:
    // 0x800BC730: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800BC734: jal         0x8001ACCC
    // 0x800BC738: addiu       $a0, $zero, 0x5DC0
    ctx->r4 = ADD32(0, 0X5DC0);
    func_8001ACCC(rdram, ctx);
        goto after_3;
    // 0x800BC738: addiu       $a0, $zero, 0x5DC0
    ctx->r4 = ADD32(0, 0X5DC0);
    after_3:
    // 0x800BC73C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800BC740: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800BC744: jal         0x800EF410
    // 0x800BC748: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_800EF410(rdram, ctx);
        goto after_4;
    // 0x800BC748: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x800BC74C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800BC750: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800BC754: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800BC758: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800BC75C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BC760: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BC764: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x800BC768: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800BC76C: add.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x800BC770: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x800BC774: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800BC778: neg.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
    // 0x800BC77C: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800BC780: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800BC784: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x800BC788: add.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x800BC78C: swc1        $f6, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f6.u32l;
    // 0x800BC790: swc1        $f10, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f10.u32l;
    // 0x800BC794: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x800BC798: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800BC79C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800BC7A0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x800BC7A4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800BC7A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800BC7AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800BC7B0: add.s       $f4, $f8, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f8.fl;
    // 0x800BC7B4: add.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800BC7B8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800BC7BC: swc1        $f6, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f6.u32l;
    // 0x800BC7C0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800BC7C4: nop

    // 0x800BC7C8: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x800BC7CC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800BC7D0: swc1        $f6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f6.u32l;
    // 0x800BC7D4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800BC7D8: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x800BC7DC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800BC7E0: swc1        $f6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f6.u32l;
    // 0x800BC7E4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800BC7E8: add.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x800BC7EC: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800BC7F0: swc1        $f10, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f10.u32l;
    // 0x800BC7F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800BC7F8: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x800BC7FC: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800BC800: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BC804: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x800BC808: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    // 0x800BC80C: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x800BC810: lwc1        $f10, 0x40($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X40);
    // 0x800BC814: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x800BC818: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
    // 0x800BC81C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800BC820: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800BC824: swc1        $f8, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f8.u32l;
    // 0x800BC828: jal         0x800EEAA4
    // 0x800BC82C: swc1        $f6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f6.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_5;
    // 0x800BC82C: swc1        $f6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f6.u32l;
    after_5:
    // 0x800BC830: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800BC834: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x800BC838: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BC83C: addiu       $a0, $a0, -0x7CDC
    ctx->r4 = ADD32(ctx->r4, -0X7CDC);
    // 0x800BC840: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BC844: jal         0x800EFA20
    // 0x800BC848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EFA20(rdram, ctx);
        goto after_6;
    // 0x800BC848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800BC84C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BC850: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800BC854: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BC858: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BC85C: addiu       $a1, $a1, -0x7CC8
    ctx->r5 = ADD32(ctx->r5, -0X7CC8);
    // 0x800BC860: addiu       $a0, $a0, -0x7D0C
    ctx->r4 = ADD32(ctx->r4, -0X7D0C);
    // 0x800BC864: jal         0x8002ED00
    // 0x800BC868: swc1        $f10, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f10.u32l;
    func_8002ED00(rdram, ctx);
        goto after_7;
    // 0x800BC868: swc1        $f10, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f10.u32l;
    after_7:
    // 0x800BC86C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BC870: addiu       $a0, $a0, -0x7C7C
    ctx->r4 = ADD32(ctx->r4, -0X7C7C);
    // 0x800BC874: jal         0x800EE7F8
    // 0x800BC878: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x800BC878: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800BC87C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BC880: addiu       $a0, $a0, -0x7C88
    ctx->r4 = ADD32(ctx->r4, -0X7C88);
    // 0x800BC884: jal         0x800EE7F8
    // 0x800BC888: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x800BC888: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x800BC88C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800BC890:
    // 0x800BC890: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800BC894: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800BC898: jr          $ra
    // 0x800BC89C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800BC89C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800BC8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC8A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BC8A4: addiu       $v0, $v0, -0x7D20
    ctx->r2 = ADD32(ctx->r2, -0X7D20);
    // 0x800BC8A8: lbu         $t6, 0xD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD);
    // 0x800BC8AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BC8B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC8B4: beql        $t6, $zero, L_800BC8EC
    if (ctx->r14 == 0) {
        // 0x800BC8B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BC8EC;
    }
    goto skip_0;
    // 0x800BC8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BC8BC: jal         0x8001B084
    // 0x800BC8C0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800BC8C0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x800BC8C4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BC8C8: addiu       $v0, $v0, -0x7D20
    ctx->r2 = ADD32(ctx->r2, -0X7D20);
    // 0x800BC8CC: jal         0x8001B084
    // 0x800BC8D0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x800BC8D0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x800BC8D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BC8D8: addiu       $v0, $v0, -0x7D20
    ctx->r2 = ADD32(ctx->r2, -0X7D20);
    // 0x800BC8DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800BC8E0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800BC8E4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x800BC8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BC8EC:
    // 0x800BC8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BC8F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BC8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC8F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BC8FC: addiu       $v0, $v0, -0x7D20
    ctx->r2 = ADD32(ctx->r2, -0X7D20);
    // 0x800BC900: lbu         $t6, 0xD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD);
    // 0x800BC904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BC908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC90C: beql        $t6, $zero, L_800BC93C
    if (ctx->r14 == 0) {
        // 0x800BC910: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BC93C;
    }
    goto skip_0;
    // 0x800BC910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BC914: lbu         $t8, 0xC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XC);
    // 0x800BC918: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800BC91C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BC920: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x800BC924: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x800BC928: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800BC92C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800BC930: jal         0x800E42E4
    // 0x800BC934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800E42E4(rdram, ctx);
        goto after_0;
    // 0x800BC934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800BC938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BC93C:
    // 0x800BC93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BC940: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BC948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC948: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800BC94C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800BC950: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BC954: addiu       $s0, $s0, -0x7D20
    ctx->r16 = ADD32(ctx->r16, -0X7D20);
    // 0x800BC958: lbu         $t6, 0xD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD);
    // 0x800BC95C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800BC960: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800BC964: beq         $t6, $zero, L_800BCC14
    if (ctx->r14 == 0) {
        // 0x800BC968: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_800BCC14;
    }
    // 0x800BC968: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BC96C: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x800BC970: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800BC974: lui         $t8, 0xDF00
    ctx->r24 = S32(0XDF00 << 16);
    // 0x800BC978: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800BC97C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800BC980: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800BC984: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800BC988: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x800BC98C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x800BC990: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BC994: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x800BC998: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x800BC99C: subu        $a1, $t2, $a0
    ctx->r5 = SUB32(ctx->r10, ctx->r4);
    // 0x800BC9A0: sra         $t3, $a1, 3
    ctx->r11 = S32(SIGNED(ctx->r5) >> 3);
    // 0x800BC9A4: jal         0x8002E660
    // 0x800BC9A8: sll         $a1, $t3, 3
    ctx->r5 = S32(ctx->r11 << 3);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x800BC9A8: sll         $a1, $t3, 3
    ctx->r5 = S32(ctx->r11 << 3);
    after_0:
    // 0x800BC9AC: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x800BC9B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800BC9B4: jal         0x800E42E4
    // 0x800BC9B8: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    func_800E42E4(rdram, ctx);
        goto after_1;
    // 0x800BC9B8: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    after_1:
    // 0x800BC9BC: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x800BC9C0: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800BC9C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC9C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800BC9CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC9D0: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x800BC9D4: addiu       $t9, $t8, 0xC8
    ctx->r25 = ADD32(ctx->r24, 0XC8);
    // 0x800BC9D8: jal         0x800E4640
    // 0x800BC9DC: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    func_800E4640(rdram, ctx);
        goto after_2;
    // 0x800BC9DC: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    after_2:
    // 0x800BC9E0: jal         0x800BCC90
    // 0x800BC9E4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_800BCC90(rdram, ctx);
        goto after_3;
    // 0x800BC9E4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x800BC9E8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800BC9EC: lui         $t2, 0xDF00
    ctx->r10 = S32(0XDF00 << 16);
    // 0x800BC9F0: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800BC9F4: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800BC9F8: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x800BC9FC: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800BCA00: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x800BCA04: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800BCA08: jal         0x800E4640
    // 0x800BCA0C: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    func_800E4640(rdram, ctx);
        goto after_4;
    // 0x800BCA0C: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    after_4:
    // 0x800BCA10: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800BCA14: lui         $t6, 0xDF00
    ctx->r14 = S32(0XDF00 << 16);
    // 0x800BCA18: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x800BCA1C: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x800BCA20: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x800BCA24: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800BCA28: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x800BCA2C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800BCA30: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BCA34: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800BCA38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BCA3C: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x800BCA40: subu        $a1, $t9, $v0
    ctx->r5 = SUB32(ctx->r25, ctx->r2);
    // 0x800BCA44: addiu       $a1, $a1, -0xC8
    ctx->r5 = ADD32(ctx->r5, -0XC8);
    // 0x800BCA48: sra         $t0, $a1, 3
    ctx->r8 = S32(SIGNED(ctx->r5) >> 3);
    // 0x800BCA4C: sll         $a1, $t0, 3
    ctx->r5 = S32(ctx->r8 << 3);
    // 0x800BCA50: jal         0x8002E660
    // 0x800BCA54: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x800BCA54: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    after_5:
    // 0x800BCA58: lbu         $t2, 0xE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE);
    // 0x800BCA5C: beql        $t2, $zero, L_800BCA90
    if (ctx->r10 == 0) {
        // 0x800BCA60: lbu         $t3, 0xC($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XC);
            goto L_800BCA90;
    }
    goto skip_0;
    // 0x800BCA60: lbu         $t3, 0xC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XC);
    skip_0:
    // 0x800BCA64: jal         0x800E42A8
    // 0x800BCA68: nop

    func_800E42A8(rdram, ctx);
        goto after_6;
    // 0x800BCA68: nop

    after_6:
    // 0x800BCA6C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BCA70: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800BCA74: addiu       $a2, $a2, -0x7C64
    ctx->r6 = ADD32(ctx->r6, -0X7C64);
    // 0x800BCA78: addiu       $a1, $a1, -0x7C70
    ctx->r5 = ADD32(ctx->r5, -0X7C70);
    // 0x800BCA7C: jal         0x800CAA24
    // 0x800BCA80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CAA24(rdram, ctx);
        goto after_7;
    // 0x800BCA80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x800BCA84: beql        $v0, $zero, L_800BCBD0
    if (ctx->r2 == 0) {
        // 0x800BCA88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800BCBD0;
    }
    goto skip_1;
    // 0x800BCA88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x800BCA8C: lbu         $t3, 0xC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XC);
L_800BCA90:
    // 0x800BCA90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BCA94: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BCA98: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800BCA9C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BCAA0: addu        $a1, $s0, $t4
    ctx->r5 = ADD32(ctx->r16, ctx->r12);
    // 0x800BCAA4: jal         0x800E46E0
    // 0x800BCAA8: addiu       $a1, $a1, 0xC8
    ctx->r5 = ADD32(ctx->r5, 0XC8);
    func_800E46E0(rdram, ctx);
        goto after_8;
    // 0x800BCAA8: addiu       $a1, $a1, 0xC8
    ctx->r5 = ADD32(ctx->r5, 0XC8);
    after_8:
    // 0x800BCAAC: jal         0x800BCC90
    // 0x800BCAB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800BCC90(rdram, ctx);
        goto after_9;
    // 0x800BCAB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x800BCAB4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800BCAB8: lui         $t6, 0xD9FF
    ctx->r14 = S32(0XD9FF << 16);
    // 0x800BCABC: ori         $t6, $t6, 0xF9FF
    ctx->r14 = ctx->r14 | 0XF9FF;
    // 0x800BCAC0: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800BCAC4: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x800BCAC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BCACC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x800BCAD0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800BCAD4: jal         0x800E7FF8
    // 0x800BCAD8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_800E7FF8(rdram, ctx);
        goto after_10;
    // 0x800BCAD8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_10:
    // 0x800BCADC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800BCAE0: lui         $t8, 0xDE00
    ctx->r24 = S32(0XDE00 << 16);
    // 0x800BCAE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BCAE8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800BCAEC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x800BCAF0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800BCAF4: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x800BCAF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BCAFC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BCB00: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x800BCB04: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800BCB08: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x800BCB0C: jal         0x800E4640
    // 0x800BCB10: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    func_800E4640(rdram, ctx);
        goto after_11;
    // 0x800BCB10: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    after_11:
    // 0x800BCB14: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800BCB18: lui         $t5, 0xD9FF
    ctx->r13 = S32(0XD9FF << 16);
    // 0x800BCB1C: ori         $t5, $t5, 0xF9FF
    ctx->r13 = ctx->r13 | 0XF9FF;
    // 0x800BCB20: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800BCB24: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x800BCB28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BCB2C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x800BCB30: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800BCB34: jal         0x800E7FF8
    // 0x800BCB38: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    func_800E7FF8(rdram, ctx);
        goto after_12;
    // 0x800BCB38: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    after_12:
    // 0x800BCB3C: lh          $a0, 0x12($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X12);
    // 0x800BCB40: beql        $a0, $zero, L_800BCBC8
    if (ctx->r4 == 0) {
        // 0x800BCB44: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_800BCBC8;
    }
    goto skip_2;
    // 0x800BCB44: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_2:
    // 0x800BCB48: jal         0x800D674C
    // 0x800BCB4C: nop

    func_800D674C(rdram, ctx);
        goto after_13;
    // 0x800BCB4C: nop

    after_13:
    // 0x800BCB50: lbu         $t6, 0xF($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XF);
    // 0x800BCB54: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800BCB58: bne         $t6, $zero, L_800BCB8C
    if (ctx->r14 != 0) {
        // 0x800BCB5C: nop
    
            goto L_800BCB8C;
    }
    // 0x800BCB5C: nop

    // 0x800BCB60: jal         0x800B2840
    // 0x800BCB64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2840(rdram, ctx);
        goto after_14;
    // 0x800BCB64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x800BCB68: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BCB6C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800BCB70: addiu       $a2, $a2, -0x7C64
    ctx->r6 = ADD32(ctx->r6, -0X7C64);
    // 0x800BCB74: addiu       $a1, $a1, -0x7C70
    ctx->r5 = ADD32(ctx->r5, -0X7C70);
    // 0x800BCB78: jal         0x800B21CC
    // 0x800BCB7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B21CC(rdram, ctx);
        goto after_15;
    // 0x800BCB7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x800BCB80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800BCB84: sb          $t8, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r24;
    // 0x800BCB88: sb          $t8, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r24;
L_800BCB8C:
    // 0x800BCB8C: jal         0x800DF440
    // 0x800BCB90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF440(rdram, ctx);
        goto after_16;
    // 0x800BCB90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x800BCB94: jal         0x800DF830
    // 0x800BCB98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DF830(rdram, ctx);
        goto after_17;
    // 0x800BCB98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x800BCB9C: jal         0x800DF410
    // 0x800BCBA0: lbu         $a0, 0x11($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X11);
    func_800DF410(rdram, ctx);
        goto after_18;
    // 0x800BCBA0: lbu         $a0, 0x11($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X11);
    after_18:
    // 0x800BCBA4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800BCBA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800BCBAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BCBB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BCBB4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800BCBB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800BCBBC: jal         0x800DE498
    // 0x800BCBC0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800DE498(rdram, ctx);
        goto after_19;
    // 0x800BCBC0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_19:
    // 0x800BCBC4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_800BCBC8:
    // 0x800BCBC8: sb          $t0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r8;
    // 0x800BCBCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800BCBD0:
    // 0x800BCBD0: jal         0x800E46E0
    // 0x800BCBD4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800E46E0(rdram, ctx);
        goto after_20;
    // 0x800BCBD4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_20:
    // 0x800BCBD8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800BCBDC: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x800BCBE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BCBE4: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x800BCBE8: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x800BCBEC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x800BCBF0: lbu         $t3, 0xC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XC);
    // 0x800BCBF4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BCBF8: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x800BCBFC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800BCC00: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x800BCC04: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800BCC08: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x800BCC0C: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x800BCC10: sb          $t9, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r25;
L_800BCC14:
    // 0x800BCC14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BCC18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCC1C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800BCC20: jr          $ra
    // 0x800BCC24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800BCC24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800BCC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCC28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCC2C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800BCC30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BCC34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BCC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCC3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BCC40: jal         0x800F23D0
    // 0x800BCC44: addiu       $a0, $a0, -0x7D0C
    ctx->r4 = ADD32(ctx->r4, -0X7D0C);
    func_800F23D0(rdram, ctx);
        goto after_0;
    // 0x800BCC44: addiu       $a0, $a0, -0x7D0C
    ctx->r4 = ADD32(ctx->r4, -0X7D0C);
    after_0:
    // 0x800BCC48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCC4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BCC50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BCC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCC58: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BCC5C: addiu       $v1, $v1, -0x7D20
    ctx->r3 = ADD32(ctx->r3, -0X7D20);
    // 0x800BCC60: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x800BCC64: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800BCC68: beq         $t6, $zero, L_800BCC7C
    if (ctx->r14 == 0) {
        // 0x800BCC6C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800BCC7C;
    }
    // 0x800BCC6C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800BCC70: lbu         $v0, 0x10($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10);
    // 0x800BCC74: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800BCC78: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_800BCC7C:
    // 0x800BCC7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BCC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCC84: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BCC88: jr          $ra
    // 0x800BCC8C: lbu         $v0, -0x7D13($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7D13);
    return;
    // 0x800BCC8C: lbu         $v0, -0x7D13($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7D13);
;}
RECOMP_FUNC void func_800BCC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCC90: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800BCC94: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x800BCC98: lui         $t8, 0x13
    ctx->r24 = S32(0X13 << 16);
    // 0x800BCC9C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800BCCA0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800BCCA4: addiu       $t8, $t8, -0x7CC8
    ctx->r24 = ADD32(ctx->r24, -0X7CC8);
    // 0x800BCCA8: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x800BCCAC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800BCCB0: jr          $ra
    // 0x800BCCB4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    return;
    // 0x800BCCB4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_800BCCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCCC0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800BCCC4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800BCCC8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800BCCCC: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x800BCCD0: jr          $ra
    // 0x800BCCD4: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    return;
    // 0x800BCCD4: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
;}
RECOMP_FUNC void func_800BCCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCCD8: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x800BCCDC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800BCCE0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800BCCE4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800BCCE8: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x800BCCEC: jr          $ra
    // 0x800BCCF0: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    return;
    // 0x800BCCF0: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
;}
RECOMP_FUNC void func_800BCCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCCF4: jr          $ra
    // 0x800BCCF8: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    return;
    // 0x800BCCF8: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
;}
RECOMP_FUNC void func_800BCCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCD00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCD04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BCD08: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x800BCD0C: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BCD10: lbu         $t8, 0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8);
    // 0x800BCD14: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    // 0x800BCD18: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x800BCD1C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x800BCD20: div         $zero, $a2, $v0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r2)));
    // 0x800BCD24: mfhi        $a1
    ctx->r5 = hi;
    // 0x800BCD28: bne         $v0, $zero, L_800BCD34
    if (ctx->r2 != 0) {
        // 0x800BCD2C: nop
    
            goto L_800BCD34;
    }
    // 0x800BCD2C: nop

    // 0x800BCD30: break       7
    do_break(2148257072);
L_800BCD34:
    // 0x800BCD34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BCD38: bne         $v0, $at, L_800BCD4C
    if (ctx->r2 != ctx->r1) {
        // 0x800BCD3C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BCD4C;
    }
    // 0x800BCD3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BCD40: bne         $a2, $at, L_800BCD4C
    if (ctx->r6 != ctx->r1) {
        // 0x800BCD44: nop
    
            goto L_800BCD4C;
    }
    // 0x800BCD44: nop

    // 0x800BCD48: break       6
    do_break(2148257096);
L_800BCD4C:
    // 0x800BCD4C: jal         0x800BCCC0
    // 0x800BCD50: nop

    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BCD50: nop

    after_0:
    // 0x800BCD54: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCD58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCD5C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BCD60: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x800BCD64: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x800BCD68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BCD6C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x800BCD70: jr          $ra
    // 0x800BCD74: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x800BCD74: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_800BCD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCD78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BCD7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCD80: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800BCD84: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x800BCD88: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BCD8C: lbu         $t8, 0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8);
    // 0x800BCD90: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800BCD94: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    // 0x800BCD98: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x800BCD9C: div         $zero, $a2, $v0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r2)));
    // 0x800BCDA0: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x800BCDA4: bne         $v0, $zero, L_800BCDB0
    if (ctx->r2 != 0) {
        // 0x800BCDA8: nop
    
            goto L_800BCDB0;
    }
    // 0x800BCDA8: nop

    // 0x800BCDAC: break       7
    do_break(2148257196);
L_800BCDB0:
    // 0x800BCDB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BCDB4: bne         $v0, $at, L_800BCDC8
    if (ctx->r2 != ctx->r1) {
        // 0x800BCDB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BCDC8;
    }
    // 0x800BCDB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BCDBC: bne         $a2, $at, L_800BCDC8
    if (ctx->r6 != ctx->r1) {
        // 0x800BCDC0: nop
    
            goto L_800BCDC8;
    }
    // 0x800BCDC0: nop

    // 0x800BCDC4: break       6
    do_break(2148257220);
L_800BCDC8:
    // 0x800BCDC8: mfhi        $a2
    ctx->r6 = hi;
    // 0x800BCDCC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800BCDD0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800BCDD4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800BCDD8: jal         0x800BCCC0
    // 0x800BCDDC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BCDDC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BCDE0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800BCDE4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800BCDE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800BCDEC: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800BCDF0: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x800BCDF4: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x800BCDF8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x800BCDFC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800BCE00: srl         $t2, $t0, 1
    ctx->r10 = S32(U32(ctx->r8) >> 1);
    // 0x800BCE04: bne         $a3, $zero, L_800BCE14
    if (ctx->r7 != 0) {
        // 0x800BCE08: or          $t0, $t2, $zero
        ctx->r8 = ctx->r10 | 0;
            goto L_800BCE14;
    }
    // 0x800BCE08: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x800BCE0C: b           L_800BCE70
    // 0x800BCE10: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
        goto L_800BCE70;
    // 0x800BCE10: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
L_800BCE14:
    // 0x800BCE14: lbu         $t4, 0x4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X4);
    // 0x800BCE18: addiu       $t3, $a2, 0x1
    ctx->r11 = ADD32(ctx->r6, 0X1);
    // 0x800BCE1C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800BCE20: div         $zero, $t3, $t4
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r12)));
    // 0x800BCE24: mfhi        $a1
    ctx->r5 = hi;
    // 0x800BCE28: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800BCE2C: bne         $t4, $zero, L_800BCE38
    if (ctx->r12 != 0) {
        // 0x800BCE30: nop
    
            goto L_800BCE38;
    }
    // 0x800BCE30: nop

    // 0x800BCE34: break       7
    do_break(2148257332);
L_800BCE38:
    // 0x800BCE38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BCE3C: bne         $t4, $at, L_800BCE50
    if (ctx->r12 != ctx->r1) {
        // 0x800BCE40: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BCE50;
    }
    // 0x800BCE40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BCE44: bne         $t3, $at, L_800BCE50
    if (ctx->r11 != ctx->r1) {
        // 0x800BCE48: nop
    
            goto L_800BCE50;
    }
    // 0x800BCE48: nop

    // 0x800BCE4C: break       6
    do_break(2148257356);
L_800BCE50:
    // 0x800BCE50: jal         0x800BCCC0
    // 0x800BCE54: nop

    func_800BCCC0(rdram, ctx);
        goto after_1;
    // 0x800BCE54: nop

    after_1:
    // 0x800BCE58: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCE5C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800BCE60: addu        $t5, $v0, $v1
    ctx->r13 = ADD32(ctx->r2, ctx->r3);
    // 0x800BCE64: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x800BCE68: srl         $t6, $a1, 1
    ctx->r14 = S32(U32(ctx->r5) >> 1);
    // 0x800BCE6C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_800BCE70:
    // 0x800BCE70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCE74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BCE78: subu        $v0, $a1, $t0
    ctx->r2 = SUB32(ctx->r5, ctx->r8);
    // 0x800BCE7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BCE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCE84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCE88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCE8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BCE90: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BCE94: jal         0x800BCCC0
    // 0x800BCE98: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BCE98: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    after_0:
    // 0x800BCE9C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCEA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BCEA8: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x800BCEAC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800BCEB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BCEB4: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x800BCEB8: jr          $ra
    // 0x800BCEBC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x800BCEBC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void func_800BCEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCEC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCEC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCEC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BCECC: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BCED0: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x800BCED4: jal         0x800BCCC0
    // 0x800BCED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BCED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BCEDC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCEE0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800BCEE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BCEE8: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800BCEEC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800BCEF0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800BCEF4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800BCEF8: addu        $t3, $a1, $v1
    ctx->r11 = ADD32(ctx->r5, ctx->r3);
    // 0x800BCEFC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800BCF00: beq         $t1, $zero, L_800BCF10
    if (ctx->r9 == 0) {
        // 0x800BCF04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BCF10;
    }
    // 0x800BCF04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCF08: b           L_800BCF20
    // 0x800BCF0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800BCF20;
    // 0x800BCF0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BCF10:
    // 0x800BCF10: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800BCF14: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800BCF18: srl         $t5, $t4, 1
    ctx->r13 = S32(U32(ctx->r12) >> 1);
    // 0x800BCF1C: subu        $v0, $t2, $t5
    ctx->r2 = SUB32(ctx->r10, ctx->r13);
L_800BCF20:
    // 0x800BCF20: jr          $ra
    // 0x800BCF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800BCF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800BCF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCF30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BCF34: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BCF38: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x800BCF3C: jal         0x800BCCC0
    // 0x800BCF40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BCF40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BCF44: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCF48: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800BCF4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BCF50: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800BCF54: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800BCF58: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800BCF5C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800BCF60: addu        $t3, $a1, $v1
    ctx->r11 = ADD32(ctx->r5, ctx->r3);
    // 0x800BCF64: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800BCF68: bne         $t1, $zero, L_800BCF78
    if (ctx->r9 != 0) {
        // 0x800BCF6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BCF78;
    }
    // 0x800BCF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCF70: b           L_800BCF88
    // 0x800BCF74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800BCF88;
    // 0x800BCF74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BCF78:
    // 0x800BCF78: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800BCF7C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800BCF80: srl         $t5, $t4, 1
    ctx->r13 = S32(U32(ctx->r12) >> 1);
    // 0x800BCF84: subu        $v0, $t2, $t5
    ctx->r2 = SUB32(ctx->r10, ctx->r13);
L_800BCF88:
    // 0x800BCF88: jr          $ra
    // 0x800BCF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800BCF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800BCF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCF90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCF94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCF98: jal         0x800BCCD8
    // 0x800BCF9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800BCCD8(rdram, ctx);
        goto after_0;
    // 0x800BCF9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800BCFA0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCFA4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800BCFA8: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x800BCFAC: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800BCFB0: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x800BCFB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCFB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BCFBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BCFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCFC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCFC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCFCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BCFD0: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BCFD4: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x800BCFD8: jal         0x800BCCC0
    // 0x800BCFDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BCFDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BCFE0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCFE4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800BCFE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BCFEC: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800BCFF0: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800BCFF4: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x800BCFF8: addu        $t3, $a1, $t8
    ctx->r11 = ADD32(ctx->r5, ctx->r24);
    // 0x800BCFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD000: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x800BD004: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x800BD008: beq         $v0, $zero, L_800BD028
    if (ctx->r2 == 0) {
        // 0x800BD00C: nop
    
            goto L_800BD028;
    }
    // 0x800BD00C: nop

    // 0x800BD010: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800BD014: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800BD018: srl         $t5, $t4, 1
    ctx->r13 = S32(U32(ctx->r12) >> 1);
    // 0x800BD01C: subu        $v0, $t2, $t5
    ctx->r2 = SUB32(ctx->r10, ctx->r13);
    // 0x800BD020: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x800BD024: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
L_800BD028:
    // 0x800BD028: jr          $ra
    // 0x800BD02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800BD02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800BD030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD038: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BD03C: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800BD040: lbu         $a1, 0x8($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X8);
    // 0x800BD044: jal         0x800BCCC0
    // 0x800BD048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800BCCC0(rdram, ctx);
        goto after_0;
    // 0x800BD048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BD04C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD050: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800BD054: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BD058: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800BD05C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800BD060: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x800BD064: addu        $t3, $a1, $t8
    ctx->r11 = ADD32(ctx->r5, ctx->r24);
    // 0x800BD068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD06C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x800BD070: sltu        $v0, $zero, $t0
    ctx->r2 = 0 < ctx->r8 ? 1 : 0;
    // 0x800BD074: beq         $v0, $zero, L_800BD094
    if (ctx->r2 == 0) {
        // 0x800BD078: nop
    
            goto L_800BD094;
    }
    // 0x800BD078: nop

    // 0x800BD07C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800BD080: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800BD084: srl         $t5, $t4, 1
    ctx->r13 = S32(U32(ctx->r12) >> 1);
    // 0x800BD088: subu        $v0, $t2, $t5
    ctx->r2 = SUB32(ctx->r10, ctx->r13);
    // 0x800BD08C: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x800BD090: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
L_800BD094:
    // 0x800BD094: jr          $ra
    // 0x800BD098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800BD098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800BD09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD09C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD0A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD0A4: jal         0x8001B084
    // 0x800BD0A8: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800BD0A8: nop

    after_0:
    // 0x800BD0AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD0B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD0BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD0C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD0C4: jal         0x8001BAFC
    // 0x800BD0C8: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800BD0C8: nop

    after_0:
    // 0x800BD0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD0D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD0D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD0DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BD0E0: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800BD0E4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BD0E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD0EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800BD0F0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800BD0F4: jal         0x8001ACCC
    // 0x800BD0F8: addiu       $a0, $t6, 0x2C
    ctx->r4 = ADD32(ctx->r14, 0X2C);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800BD0F8: addiu       $a0, $t6, 0x2C
    ctx->r4 = ADD32(ctx->r14, 0X2C);
    after_0:
    // 0x800BD0FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800BD100: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x800BD104: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800BD108: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800BD10C: sb          $t8, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r24;
    // 0x800BD110: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x800BD114: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800BD118: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800BD11C: jal         0x800BD138
    // 0x800BD120: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
    func_800BD138(rdram, ctx);
        goto after_1;
    // 0x800BD120: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
    after_1:
    // 0x800BD124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD128: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD12C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BD130: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BD13C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_800BD140:
    // 0x800BD140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BD144: slti        $at, $v0, 0xE
    ctx->r1 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x800BD148: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800BD14C: sb          $zero, 0x7($v1)
    MEM_B(0X7, ctx->r3) = 0;
    // 0x800BD150: bne         $at, $zero, L_800BD140
    if (ctx->r1 != 0) {
        // 0x800BD154: sb          $zero, 0x15($v1)
        MEM_B(0X15, ctx->r3) = 0;
            goto L_800BD140;
    }
    // 0x800BD154: sb          $zero, 0x15($v1)
    MEM_B(0X15, ctx->r3) = 0;
    // 0x800BD158: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x800BD15C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800BD160: addiu       $v1, $a0, 0x24
    ctx->r3 = ADD32(ctx->r4, 0X24);
    // 0x800BD164: blez        $t6, L_800BD25C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800BD168: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BD25C;
    }
    // 0x800BD168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BD16C: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x800BD170: lbu         $t7, 0x3($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3);
L_800BD174:
    // 0x800BD174: lbu         $t6, 0x7($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7);
    // 0x800BD178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800BD17C: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x800BD180: sb          $t8, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r24;
    // 0x800BD184: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800BD188: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x800BD18C: sb          $t7, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r15;
    // 0x800BD190: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x800BD194: srl         $t9, $t0, 1
    ctx->r25 = S32(U32(ctx->r8) >> 1);
    // 0x800BD198: sll         $t4, $t9, 1
    ctx->r12 = S32(ctx->r25 << 1);
    // 0x800BD19C: srl         $t8, $t1, 1
    ctx->r24 = S32(U32(ctx->r9) >> 1);
    // 0x800BD1A0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800BD1A4: xor         $t5, $t4, $t0
    ctx->r13 = ctx->r12 ^ ctx->r8;
    // 0x800BD1A8: xor         $t4, $t9, $t1
    ctx->r12 = ctx->r25 ^ ctx->r9;
    // 0x800BD1AC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x800BD1B0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800BD1B4: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
L_800BD1B8:
    // 0x800BD1B8: lbu         $t5, 0x3($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X3);
    // 0x800BD1BC: lbu         $t4, 0x7($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X7);
    // 0x800BD1C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800BD1C4: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x800BD1C8: sb          $t6, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r14;
    // 0x800BD1CC: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x800BD1D0: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x800BD1D4: sb          $t5, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r13;
    // 0x800BD1D8: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x800BD1DC: srl         $t7, $a3, 1
    ctx->r15 = S32(U32(ctx->r7) >> 1);
    // 0x800BD1E0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800BD1E4: xor         $t9, $t8, $a3
    ctx->r25 = ctx->r24 ^ ctx->r7;
    // 0x800BD1E8: srl         $t6, $t0, 1
    ctx->r14 = S32(U32(ctx->r8) >> 1);
    // 0x800BD1EC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800BD1F0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800BD1F4: lbu         $t9, 0xB($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XB);
    // 0x800BD1F8: xor         $t8, $t7, $t0
    ctx->r24 = ctx->r15 ^ ctx->r8;
    // 0x800BD1FC: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x800BD200: lbu         $t8, 0xF($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XF);
    // 0x800BD204: andi        $t4, $t9, 0xFFFE
    ctx->r12 = ctx->r25 & 0XFFFE;
    // 0x800BD208: sb          $t4, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r12;
    // 0x800BD20C: lw          $t1, 0x8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X8);
    // 0x800BD210: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x800BD214: sb          $t9, 0xF($a2)
    MEM_B(0XF, ctx->r6) = ctx->r25;
    // 0x800BD218: lw          $t2, 0xC($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XC);
    // 0x800BD21C: srl         $t5, $t1, 1
    ctx->r13 = S32(U32(ctx->r9) >> 1);
    // 0x800BD220: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x800BD224: srl         $t4, $t2, 1
    ctx->r12 = S32(U32(ctx->r10) >> 1);
    // 0x800BD228: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800BD22C: xor         $t7, $t6, $t1
    ctx->r15 = ctx->r14 ^ ctx->r9;
    // 0x800BD230: xor         $t6, $t5, $t2
    ctx->r14 = ctx->r13 ^ ctx->r10;
    // 0x800BD234: sw          $t6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r14;
    // 0x800BD238: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x800BD23C: bne         $a1, $t3, L_800BD1B8
    if (ctx->r5 != ctx->r11) {
        // 0x800BD240: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_800BD1B8;
    }
    // 0x800BD240: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800BD244: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800BD248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BD24C: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x800BD250: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800BD254: bnel        $at, $zero, L_800BD174
    if (ctx->r1 != 0) {
        // 0x800BD258: lbu         $t7, 0x3($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X3);
            goto L_800BD174;
    }
    goto skip_0;
    // 0x800BD258: lbu         $t7, 0x3($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3);
    skip_0:
L_800BD25C:
    // 0x800BD25C: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x800BD260: jr          $ra
    // 0x800BD264: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    return;
    // 0x800BD264: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_800BD268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD270: sb          $a1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r5;
    // 0x800BD274: jal         0x800BD28C
    // 0x800BD278: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800BD28C(rdram, ctx);
        goto after_0;
    // 0x800BD278: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800BD27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD284: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD28C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BD290: bne         $a1, $at, L_800BD2C8
    if (ctx->r5 != ctx->r1) {
        // 0x800BD294: sb          $a1, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r5;
            goto L_800BD2C8;
    }
    // 0x800BD294: sb          $a1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r5;
    // 0x800BD298: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    // 0x800BD29C: sb          $zero, 0x17($a0)
    MEM_B(0X17, ctx->r4) = 0;
    // 0x800BD2A0: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x800BD2A4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x800BD2A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800BD2AC:
    // 0x800BD2AC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800BD2B0: sb          $zero, 0x17($v1)
    MEM_B(0X17, ctx->r3) = 0;
    // 0x800BD2B4: sb          $zero, 0x18($v1)
    MEM_B(0X18, ctx->r3) = 0;
    // 0x800BD2B8: sb          $zero, 0x19($v1)
    MEM_B(0X19, ctx->r3) = 0;
    // 0x800BD2BC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800BD2C0: bne         $v0, $a0, L_800BD2AC
    if (ctx->r2 != ctx->r4) {
        // 0x800BD2C4: sb          $zero, 0x12($v1)
        MEM_B(0X12, ctx->r3) = 0;
            goto L_800BD2AC;
    }
    // 0x800BD2C4: sb          $zero, 0x12($v1)
    MEM_B(0X12, ctx->r3) = 0;
L_800BD2C8:
    // 0x800BD2C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD2D0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800BD2D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BD2D8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800BD2DC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800BD2E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800BD2E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800BD2E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BD2EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800BD2F0: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x800BD2F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BD2F8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800BD2FC: bnel        $v0, $at, L_800BD448
    if (ctx->r2 != ctx->r1) {
        // 0x800BD300: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800BD448;
    }
    goto skip_0;
    // 0x800BD300: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x800BD304: lbu         $a0, 0x6($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X6);
    // 0x800BD308: jal         0x80015F84
    // 0x800BD30C: sw          $a0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r4;
    func_80015F84(rdram, ctx);
        goto after_0;
    // 0x800BD30C: sw          $a0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800BD310: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x800BD314: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x800BD318: jal         0x80015F28
    // 0x800BD31C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80015F28(rdram, ctx);
        goto after_1;
    // 0x800BD31C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x800BD320: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x800BD324: jal         0x80015FFC
    // 0x800BD328: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80015FFC(rdram, ctx);
        goto after_2;
    // 0x800BD328: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x800BD32C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x800BD330: jal         0x80015E80
    // 0x800BD334: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80015E80(rdram, ctx);
        goto after_3;
    // 0x800BD334: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_3:
    // 0x800BD338: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800BD33C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800BD340: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x800BD344: addiu       $s5, $sp, 0x80
    ctx->r21 = ADD32(ctx->r29, 0X80);
L_800BD348:
    // 0x800BD348: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800BD34C: jal         0x800BCCC0
    // 0x800BD350: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    func_800BCCC0(rdram, ctx);
        goto after_4;
    // 0x800BD350: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    after_4:
    // 0x800BD354: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x800BD358: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800BD35C: addu        $t7, $v0, $s2
    ctx->r15 = ADD32(ctx->r2, ctx->r18);
    // 0x800BD360: beq         $t6, $zero, L_800BD370
    if (ctx->r14 == 0) {
        // 0x800BD364: nop
    
            goto L_800BD370;
    }
    // 0x800BD364: nop

    // 0x800BD368: b           L_800BD370
    // 0x800BD36C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_800BD370;
    // 0x800BD36C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800BD370:
    // 0x800BD370: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x800BD374: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x800BD378: xor         $t9, $s1, $t8
    ctx->r25 = ctx->r17 ^ ctx->r24;
    // 0x800BD37C: beq         $t9, $zero, L_800BD418
    if (ctx->r25 == 0) {
        // 0x800BD380: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_800BD418;
    }
    // 0x800BD380: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800BD384: lbu         $t0, 0x8($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X8);
    // 0x800BD388: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800BD38C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800BD390: sb          $t1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r9;
    // 0x800BD394: lbu         $t3, 0x4($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X4);
    // 0x800BD398: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800BD39C: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x800BD3A0: mfhi        $t4
    ctx->r12 = hi;
    // 0x800BD3A4: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
    // 0x800BD3A8: bne         $t3, $zero, L_800BD3B4
    if (ctx->r11 != 0) {
        // 0x800BD3AC: nop
    
            goto L_800BD3B4;
    }
    // 0x800BD3AC: nop

    // 0x800BD3B0: break       7
    do_break(2148258736);
L_800BD3B4:
    // 0x800BD3B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD3B8: bne         $t3, $at, L_800BD3CC
    if (ctx->r11 != ctx->r1) {
        // 0x800BD3BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BD3CC;
    }
    // 0x800BD3BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BD3C0: bne         $t2, $at, L_800BD3CC
    if (ctx->r10 != ctx->r1) {
        // 0x800BD3C4: nop
    
            goto L_800BD3CC;
    }
    // 0x800BD3C4: nop

    // 0x800BD3C8: break       6
    do_break(2148258760);
L_800BD3CC:
    // 0x800BD3CC: andi        $a1, $t4, 0xFF
    ctx->r5 = ctx->r12 & 0XFF;
    // 0x800BD3D0: jal         0x800BCCC0
    // 0x800BD3D4: nop

    func_800BCCC0(rdram, ctx);
        goto after_5;
    // 0x800BD3D4: nop

    after_5:
    // 0x800BD3D8: addu        $v1, $v0, $s2
    ctx->r3 = ADD32(ctx->r2, ctx->r18);
    // 0x800BD3DC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800BD3E0: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x800BD3E4: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x800BD3E8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800BD3EC: srl         $t7, $a0, 1
    ctx->r15 = S32(U32(ctx->r4) >> 1);
    // 0x800BD3F0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x800BD3F4: xor         $t8, $t6, $t7
    ctx->r24 = ctx->r14 ^ ctx->r15;
    // 0x800BD3F8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800BD3FC: xor         $t0, $t9, $a0
    ctx->r8 = ctx->r25 ^ ctx->r4;
    // 0x800BD400: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800BD404: lbu         $t3, 0x3($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3);
    // 0x800BD408: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x800BD40C: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x800BD410: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x800BD414: sb          $t5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r13;
L_800BD418:
    // 0x800BD418: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800BD41C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800BD420: bne         $s3, $s5, L_800BD348
    if (ctx->r19 != ctx->r21) {
        // 0x800BD424: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800BD348;
    }
    // 0x800BD424: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800BD428: jal         0x800BCCD8
    // 0x800BD42C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800BCCD8(rdram, ctx);
        goto after_6;
    // 0x800BD42C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x800BD430: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x800BD434: jal         0x80016068
    // 0x800BD438: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80016068(rdram, ctx);
        goto after_7;
    // 0x800BD438: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x800BD43C: b           L_800BD540
    // 0x800BD440: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
        goto L_800BD540;
    // 0x800BD440: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x800BD444: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_800BD448:
    // 0x800BD448: bne         $v0, $at, L_800BD53C
    if (ctx->r2 != ctx->r1) {
        // 0x800BD44C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800BD53C;
    }
    // 0x800BD44C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800BD450: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800BD454: addiu       $s5, $zero, 0xE
    ctx->r21 = ADD32(0, 0XE);
L_800BD458:
    // 0x800BD458: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x800BD45C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800BD460: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x800BD464: beql        $t6, $zero, L_800BD534
    if (ctx->r14 == 0) {
        // 0x800BD468: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800BD534;
    }
    goto skip_1;
    // 0x800BD468: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x800BD46C: jal         0x800BCCC0
    // 0x800BD470: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    func_800BCCC0(rdram, ctx);
        goto after_8;
    // 0x800BD470: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    after_8:
    // 0x800BD474: lbu         $t9, 0x16($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X16);
    // 0x800BD478: addu        $t7, $v0, $s1
    ctx->r15 = ADD32(ctx->r2, ctx->r17);
    // 0x800BD47C: lw          $s3, 0x0($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X0);
    // 0x800BD480: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BD484: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800BD488: andi        $t8, $s3, 0x1
    ctx->r24 = ctx->r19 & 0X1;
    // 0x800BD48C: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x800BD490: bne         $t1, $zero, L_800BD530
    if (ctx->r9 != 0) {
        // 0x800BD494: sb          $t0, 0x16($s0)
        MEM_B(0X16, ctx->r16) = ctx->r8;
            goto L_800BD530;
    }
    // 0x800BD494: sb          $t0, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r8;
    // 0x800BD498: lbu         $t3, 0x8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X8);
    // 0x800BD49C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800BD4A0: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x800BD4A4: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x800BD4A8: lbu         $t5, 0x4($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X4);
    // 0x800BD4AC: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x800BD4B0: div         $zero, $t4, $t5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r13)));
    // 0x800BD4B4: mfhi        $t6
    ctx->r14 = hi;
    // 0x800BD4B8: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
    // 0x800BD4BC: bne         $t5, $zero, L_800BD4C8
    if (ctx->r13 != 0) {
        // 0x800BD4C0: nop
    
            goto L_800BD4C8;
    }
    // 0x800BD4C0: nop

    // 0x800BD4C4: break       7
    do_break(2148259012);
L_800BD4C8:
    // 0x800BD4C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD4CC: bne         $t5, $at, L_800BD4E0
    if (ctx->r13 != ctx->r1) {
        // 0x800BD4D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BD4E0;
    }
    // 0x800BD4D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BD4D4: bne         $t4, $at, L_800BD4E0
    if (ctx->r12 != ctx->r1) {
        // 0x800BD4D8: nop
    
            goto L_800BD4E0;
    }
    // 0x800BD4D8: nop

    // 0x800BD4DC: break       6
    do_break(2148259036);
L_800BD4E0:
    // 0x800BD4E0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x800BD4E4: jal         0x800BCCC0
    // 0x800BD4E8: nop

    func_800BCCC0(rdram, ctx);
        goto after_9;
    // 0x800BD4E8: nop

    after_9:
    // 0x800BD4EC: addu        $v1, $v0, $s1
    ctx->r3 = ADD32(ctx->r2, ctx->r17);
    // 0x800BD4F0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800BD4F4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x800BD4F8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x800BD4FC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800BD500: srl         $t9, $a0, 1
    ctx->r25 = S32(U32(ctx->r4) >> 1);
    // 0x800BD504: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x800BD508: xor         $t0, $t8, $t9
    ctx->r8 = ctx->r24 ^ ctx->r25;
    // 0x800BD50C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800BD510: xor         $t3, $t1, $a0
    ctx->r11 = ctx->r9 ^ ctx->r4;
    // 0x800BD514: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800BD518: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x800BD51C: xori        $t4, $s3, 0x1
    ctx->r12 = ctx->r19 ^ 0X1;
    // 0x800BD520: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x800BD524: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x800BD528: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x800BD52C: sb          $t8, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r24;
L_800BD530:
    // 0x800BD530: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800BD534:
    // 0x800BD534: bne         $s2, $s5, L_800BD458
    if (ctx->r18 != ctx->r21) {
        // 0x800BD538: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800BD458;
    }
    // 0x800BD538: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800BD53C:
    // 0x800BD53C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
L_800BD540:
    // 0x800BD540: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800BD544: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x800BD548: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800BD54C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800BD550: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800BD554: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800BD558: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD55C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800BD560: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800BD564: jr          $ra
    // 0x800BD568: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800BD568: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800BD570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD578: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BD57C: jal         0x80087C58
    // 0x800BD580: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800BD580: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BD584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD58C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD59C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BD5A0: jal         0x800EA068
    // 0x800BD5A4: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x800BD5A4: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_0:
    // 0x800BD5A8: beq         $v0, $zero, L_800BD5C0
    if (ctx->r2 == 0) {
        // 0x800BD5AC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800BD5C0;
    }
    // 0x800BD5AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BD5B0: jal         0x8010A874
    // 0x800BD5B4: nop

    func_8010A874(rdram, ctx);
        goto after_1;
    // 0x800BD5B4: nop

    after_1:
    // 0x800BD5B8: b           L_800BD5D0
    // 0x800BD5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800BD5D0;
    // 0x800BD5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BD5C0:
    // 0x800BD5C0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BD5C4: jal         0x800D3104
    // 0x800BD5C8: addiu       $a1, $a1, -0x7BF0
    ctx->r5 = ADD32(ctx->r5, -0X7BF0);
    func_800D3104(rdram, ctx);
        goto after_2;
    // 0x800BD5C8: addiu       $a1, $a1, -0x7BF0
    ctx->r5 = ADD32(ctx->r5, -0X7BF0);
    after_2:
    // 0x800BD5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BD5D0:
    // 0x800BD5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD5D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD5DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD5E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BD5E8: jal         0x80087C60
    // 0x800BD5EC: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800BD5EC: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BD5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD5F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BD604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD608: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BD60C: jal         0x8001BAFC
    // 0x800BD610: lw          $a0, -0x7BF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7BF0);
    defrag(rdram, ctx);
        goto after_0;
    // 0x800BD610: lw          $a0, -0x7BF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BD614: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BD618: addiu       $v1, $v1, -0x7BF0
    ctx->r3 = ADD32(ctx->r3, -0X7BF0);
    // 0x800BD61C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800BD620: jal         0x8001BAFC
    // 0x800BD624: lw          $a0, 0x44($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X44);
    defrag(rdram, ctx);
        goto after_1;
    // 0x800BD624: lw          $a0, 0x44($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X44);
    after_1:
    // 0x800BD628: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800BD62C: jal         0x800E9DF8
    // 0x800BD630: sw          $v0, -0x7BAC($at)
    MEM_W(-0X7BAC, ctx->r1) = ctx->r2;
    func_800E9DF8(rdram, ctx);
        goto after_2;
    // 0x800BD630: sw          $v0, -0x7BAC($at)
    MEM_W(-0X7BAC, ctx->r1) = ctx->r2;
    after_2:
    // 0x800BD634: jal         0x800D2EE4
    // 0x800BD638: nop

    func_800D2EE4(rdram, ctx);
        goto after_3;
    // 0x800BD638: nop

    after_3:
    // 0x800BD63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BD644: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD64C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800BD650: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800BD654: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BD658: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800BD65C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800BD660: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800BD664: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800BD668: addiu       $t0, $t0, -0x7BE4
    ctx->r8 = ADD32(ctx->r8, -0X7BE4);
    // 0x800BD66C: addiu       $a3, $a3, -0x7BF0
    ctx->r7 = ADD32(ctx->r7, -0X7BF0);
    // 0x800BD670: addiu       $a1, $a1, -0x7BF0
    ctx->r5 = ADD32(ctx->r5, -0X7BF0);
    // 0x800BD674: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_800BD678:
    // 0x800BD678: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800BD67C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800BD680: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x800BD684: nop

    // 0x800BD688: bc1fl       L_800BD6AC
    if (!c1cs) {
        // 0x800BD68C: lwc1        $f10, 0x40($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X40);
            goto L_800BD6AC;
    }
    goto skip_0;
    // 0x800BD68C: lwc1        $f10, 0x40($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X40);
    skip_0:
    // 0x800BD690: lwc1        $f4, 0x40($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X40);
    // 0x800BD694: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800BD698: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800BD69C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800BD6A0: b           L_800BD6C4
    // 0x800BD6A4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
        goto L_800BD6C4;
    // 0x800BD6A4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800BD6A8: lwc1        $f10, 0x40($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X40);
L_800BD6AC:
    // 0x800BD6AC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800BD6B0: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x800BD6B4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800BD6B8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800BD6BC: nop

    // 0x800BD6C0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_800BD6C4:
    // 0x800BD6C4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800BD6C8: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x800BD6CC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800BD6D0: beql        $at, $zero, L_800BD6E4
    if (ctx->r1 == 0) {
        // 0x800BD6D4: lw          $a0, 0x10($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X10);
            goto L_800BD6E4;
    }
    goto skip_1;
    // 0x800BD6D4: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    skip_1:
    // 0x800BD6D8: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x800BD6DC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800BD6E0: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
L_800BD6E4:
    // 0x800BD6E4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800BD6E8: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BD6EC: beq         $at, $zero, L_800BD6F8
    if (ctx->r1 == 0) {
        // 0x800BD6F0: nop
    
            goto L_800BD6F8;
    }
    // 0x800BD6F0: nop

    // 0x800BD6F4: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_800BD6F8:
    // 0x800BD6F8: bne         $a3, $t0, L_800BD678
    if (ctx->r7 != ctx->r8) {
        // 0x800BD6FC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800BD678;
    }
    // 0x800BD6FC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800BD700: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD708: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x800BD70C: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x800BD710: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800BD714: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BD718: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BD71C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800BD720: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BD724: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BD728: addiu       $t2, $t2, -0x7BF0
    ctx->r10 = ADD32(ctx->r10, -0X7BF0);
    // 0x800BD72C: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    // 0x800BD730: addiu       $a1, $a1, -0x7BE4
    ctx->r5 = ADD32(ctx->r5, -0X7BE4);
    // 0x800BD734: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x800BD738: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x800BD73C: lwc1        $f14, 0x10($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10);
L_800BD740:
    // 0x800BD740: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800BD744: lwc1        $f2, 0x0($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800BD748: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x800BD74C: nop

    // 0x800BD750: bc1fl       L_800BD764
    if (!c1cs) {
        // 0x800BD754: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_800BD764;
    }
    goto skip_0;
    // 0x800BD754: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_0:
    // 0x800BD758: b           L_800BD764
    // 0x800BD75C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_800BD764;
    // 0x800BD75C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x800BD760: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_800BD764:
    // 0x800BD764: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x800BD768: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x800BD76C: bc1fl       L_800BD790
    if (!c1cs) {
        // 0x800BD770: lwc1        $f10, 0x40($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
            goto L_800BD790;
    }
    goto skip_1;
    // 0x800BD770: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    skip_1:
    // 0x800BD774: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x800BD778: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800BD77C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800BD780: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800BD784: b           L_800BD7A8
    // 0x800BD788: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
        goto L_800BD7A8;
    // 0x800BD788: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x800BD78C: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
L_800BD790:
    // 0x800BD790: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800BD794: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x800BD798: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800BD79C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800BD7A0: nop

    // 0x800BD7A4: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_800BD7A8:
    // 0x800BD7A8: lw          $v0, 0x4($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X4);
    // 0x800BD7AC: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x800BD7B0: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BD7B4: beql        $at, $zero, L_800BD7C4
    if (ctx->r1 == 0) {
        // 0x800BD7B8: lwc1        $f2, 0x0($t0)
        ctx->f2.u32l = MEM_W(ctx->r8, 0X0);
            goto L_800BD7C4;
    }
    goto skip_2;
    // 0x800BD7B8: lwc1        $f2, 0x0($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X0);
    skip_2:
    // 0x800BD7BC: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x800BD7C0: lwc1        $f2, 0x0($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X0);
L_800BD7C4:
    // 0x800BD7C4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800BD7C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800BD7CC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800BD7D0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x800BD7D4: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800BD7D8: bc1fl       L_800BD7EC
    if (!c1cs) {
        // 0x800BD7DC: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_800BD7EC;
    }
    goto skip_3;
    // 0x800BD7DC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_3:
    // 0x800BD7E0: b           L_800BD7EC
    // 0x800BD7E4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_800BD7EC;
    // 0x800BD7E4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x800BD7E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_800BD7EC:
    // 0x800BD7EC: add.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x800BD7F0: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x800BD7F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800BD7F8: bc1fl       L_800BD81C
    if (!c1cs) {
        // 0x800BD7FC: lwc1        $f8, 0x40($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X40);
            goto L_800BD81C;
    }
    goto skip_4;
    // 0x800BD7FC: lwc1        $f8, 0x40($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X40);
    skip_4:
    // 0x800BD800: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x800BD804: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x800BD808: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BD80C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800BD810: b           L_800BD834
    // 0x800BD814: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
        goto L_800BD834;
    // 0x800BD814: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x800BD818: lwc1        $f8, 0x40($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X40);
L_800BD81C:
    // 0x800BD81C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800BD820: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800BD824: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BD828: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800BD82C: nop

    // 0x800BD830: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
L_800BD834:
    // 0x800BD834: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x800BD838: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x800BD83C: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800BD840: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800BD844: beq         $at, $zero, L_800BD850
    if (ctx->r1 == 0) {
        // 0x800BD848: nop
    
            goto L_800BD850;
    }
    // 0x800BD848: nop

    // 0x800BD84C: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
L_800BD850:
    // 0x800BD850: bne         $t2, $a1, L_800BD740
    if (ctx->r10 != ctx->r5) {
        // 0x800BD854: addiu       $t3, $t3, 0x4
        ctx->r11 = ADD32(ctx->r11, 0X4);
            goto L_800BD740;
    }
    // 0x800BD854: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x800BD858: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BD860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD860: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800BD864: addiu       $t1, $t1, -0x7BF0
    ctx->r9 = ADD32(ctx->r9, -0X7BF0);
    // 0x800BD868: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x800BD86C: lw          $t8, 0x20($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X20);
    // 0x800BD870: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800BD874: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x800BD878: sra         $t7, $v0, 3
    ctx->r15 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800BD87C: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x800BD880: mflo        $t9
    ctx->r25 = lo;
    // 0x800BD884: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
    // 0x800BD888: lw          $t2, 0x20($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X20);
    // 0x800BD88C: lw          $t5, 0x1C($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X1C);
    // 0x800BD890: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800BD894: multu       $t2, $t9
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BD898: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x800BD89C: bne         $t8, $zero, L_800BD8A8
    if (ctx->r24 != 0) {
        // 0x800BD8A0: nop
    
            goto L_800BD8A8;
    }
    // 0x800BD8A0: nop

    // 0x800BD8A4: break       7
    do_break(2148260004);
L_800BD8A8:
    // 0x800BD8A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD8AC: bne         $t8, $at, L_800BD8C0
    if (ctx->r24 != ctx->r1) {
        // 0x800BD8B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BD8C0;
    }
    // 0x800BD8B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BD8B4: bne         $v0, $at, L_800BD8C0
    if (ctx->r2 != ctx->r1) {
        // 0x800BD8B8: nop
    
            goto L_800BD8C0;
    }
    // 0x800BD8B8: nop

    // 0x800BD8BC: break       6
    do_break(2148260028);
L_800BD8C0:
    // 0x800BD8C0: mflo        $t4
    ctx->r12 = lo;
    // 0x800BD8C4: subu        $v1, $v0, $t4
    ctx->r3 = SUB32(ctx->r2, ctx->r12);
    // 0x800BD8C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BD8CC: div         $zero, $v1, $t5
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r13)));
    // 0x800BD8D0: mflo        $t6
    ctx->r14 = lo;
    // 0x800BD8D4: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x800BD8D8: lw          $t7, 0x1C($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X1C);
    // 0x800BD8DC: or          $t8, $t6, $zero
    ctx->r24 = ctx->r14 | 0;
    // 0x800BD8E0: addiu       $v0, $v0, -0x7BE4
    ctx->r2 = ADD32(ctx->r2, -0X7BE4);
    // 0x800BD8E4: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BD8E8: addiu       $t0, $t0, -0x7BF0
    ctx->r8 = ADD32(ctx->r8, -0X7BF0);
    // 0x800BD8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BD8F0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800BD8F4: bne         $t5, $zero, L_800BD900
    if (ctx->r13 != 0) {
        // 0x800BD8F8: nop
    
            goto L_800BD900;
    }
    // 0x800BD8F8: nop

    // 0x800BD8FC: break       7
    do_break(2148260092);
L_800BD900:
    // 0x800BD900: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD904: bne         $t5, $at, L_800BD918
    if (ctx->r13 != ctx->r1) {
        // 0x800BD908: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800BD918;
    }
    // 0x800BD908: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800BD90C: bne         $v1, $at, L_800BD918
    if (ctx->r3 != ctx->r1) {
        // 0x800BD910: nop
    
            goto L_800BD918;
    }
    // 0x800BD910: nop

    // 0x800BD914: break       6
    do_break(2148260116);
L_800BD918:
    // 0x800BD918: mflo        $t9
    ctx->r25 = lo;
    // 0x800BD91C: subu        $t2, $v1, $t9
    ctx->r10 = SUB32(ctx->r3, ctx->r25);
    // 0x800BD920: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
L_800BD924:
    // 0x800BD924: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x800BD928: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x800BD92C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800BD930: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800BD934: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800BD938: bne         $t0, $v0, L_800BD924
    if (ctx->r8 != ctx->r2) {
        // 0x800BD93C: sw          $t5, -0x4($a3)
        MEM_W(-0X4, ctx->r7) = ctx->r13;
            goto L_800BD924;
    }
    // 0x800BD93C: sw          $t5, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = ctx->r13;
    // 0x800BD940: jr          $ra
    // 0x800BD944: nop

    return;
    // 0x800BD944: nop

;}
RECOMP_FUNC void func_800BD948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD948: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BD94C: addiu       $v0, $v0, -0x7BF0
    ctx->r2 = ADD32(ctx->r2, -0X7BF0);
    // 0x800BD950: addiu       $t6, $v0, 0x34
    ctx->r14 = ADD32(ctx->r2, 0X34);
    // 0x800BD954: bnel        $a0, $t6, L_800BD968
    if (ctx->r4 != ctx->r14) {
            // 0x800BD958: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    static_3_800BD968(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800BD958: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x800BD95C: jr          $ra
    // 0x800BD960: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800BD960: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_800BD964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD964: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800BD968: subu        $v1, $a0, $t7
    ctx->r3 = SUB32(ctx->r4, ctx->r15);
    // 0x800BD96C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x800BD970: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800BD974: jr          $ra
    // 0x800BD978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800BD978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800BD97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD97C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800BD980: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800BD984: lwc1        $f0, -0x7BB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7BB0);
    // 0x800BD988: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800BD98C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BD990: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800BD994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD998: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800BD99C: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
L_800BD9A0:
    // 0x800BD9A0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800BD9A4: bltzl       $v1, L_800BD9D0
    if (SIGNED(ctx->r3) < 0) {
        // 0x800BD9A8: mtc1        $v1, $f16
        ctx->f16.u32l = ctx->r3;
            goto L_800BD9D0;
    }
    goto skip_0;
    // 0x800BD9A8: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    skip_0:
    // 0x800BD9AC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800BD9B0: nop

    // 0x800BD9B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BD9B8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800BD9BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BD9C0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800BD9C4: b           L_800BD9F0
    // 0x800BD9C8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_800BD9F0;
    // 0x800BD9C8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800BD9CC: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
L_800BD9D0:
    // 0x800BD9D0: nop

    // 0x800BD9D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BD9D8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800BD9DC: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800BD9E0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800BD9E4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800BD9E8: nop

    // 0x800BD9EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_800BD9F0:
    // 0x800BD9F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800BD9F4: bne         $v0, $a0, L_800BD9A0
    if (ctx->r2 != ctx->r4) {
        // 0x800BD9F8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800BD9A0;
    }
    // 0x800BD9F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800BD9FC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BDA00: addiu       $v1, $v1, -0x7BF0
    ctx->r3 = ADD32(ctx->r3, -0X7BF0);
    // 0x800BDA04: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800BDA08: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x800BDA0C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800BDA10: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800BDA14: bne         $at, $zero, L_800BDA78
    if (ctx->r1 != 0) {
        // 0x800BDA18: nop
    
            goto L_800BDA78;
    }
    // 0x800BDA18: nop

    // 0x800BDA1C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x800BDA20: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800BDA24: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800BDA28: bne         $at, $zero, L_800BDA78
    if (ctx->r1 != 0) {
        // 0x800BDA2C: nop
    
            goto L_800BDA78;
    }
    // 0x800BDA2C: nop

    // 0x800BDA30: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x800BDA34: slt         $at, $a1, $t2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800BDA38: bne         $at, $zero, L_800BDA78
    if (ctx->r1 != 0) {
        // 0x800BDA3C: nop
    
            goto L_800BDA78;
    }
    // 0x800BDA3C: nop

    // 0x800BDA40: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x800BDA44: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BDA48: bne         $at, $zero, L_800BDA78
    if (ctx->r1 != 0) {
        // 0x800BDA4C: nop
    
            goto L_800BDA78;
    }
    // 0x800BDA4C: nop

    // 0x800BDA50: lw          $t4, 0x14($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X14);
    // 0x800BDA54: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800BDA58: bne         $at, $zero, L_800BDA78
    if (ctx->r1 != 0) {
        // 0x800BDA5C: nop
    
            goto L_800BDA78;
    }
    // 0x800BDA5C: nop

    // 0x800BDA60: lw          $t5, 0x18($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X18);
    // 0x800BDA64: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800BDA68: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800BDA6C: slt         $at, $t5, $a1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800BDA70: beq         $at, $zero, L_800BDA80
    if (ctx->r1 == 0) {
        // 0x800BDA74: addiu       $a1, $sp, 0x3C
        ctx->r5 = ADD32(ctx->r29, 0X3C);
            goto L_800BDA80;
    }
    // 0x800BDA74: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
L_800BDA78:
    // 0x800BDA78: b           L_800BDAC4
    // 0x800BDA7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800BDAC4;
    // 0x800BDA7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800BDA80:
    // 0x800BDA80: jal         0x800EFB58
    // 0x800BDA84: addiu       $a2, $a2, -0x7BEC
    ctx->r6 = ADD32(ctx->r6, -0X7BEC);
    func_800EFB58(rdram, ctx);
        goto after_0;
    // 0x800BDA84: addiu       $a2, $a2, -0x7BEC
    ctx->r6 = ADD32(ctx->r6, -0X7BEC);
    after_0:
    // 0x800BDA88: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BDA8C: addiu       $v1, $v1, -0x7BF0
    ctx->r3 = ADD32(ctx->r3, -0X7BF0);
    // 0x800BDA90: lw          $t6, 0x20($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X20);
    // 0x800BDA94: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800BDA98: lw          $t2, 0x1C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X1C);
    // 0x800BDA9C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800BDAA0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDAA4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800BDAA8: mflo        $t8
    ctx->r24 = lo;
    // 0x800BDAAC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800BDAB0: nop

    // 0x800BDAB4: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDAB8: mflo        $t3
    ctx->r11 = lo;
    // 0x800BDABC: addu        $v0, $t0, $t3
    ctx->r2 = ADD32(ctx->r8, ctx->r11);
    // 0x800BDAC0: nop

L_800BDAC4:
    // 0x800BDAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDAC8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800BDACC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDAD4: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800BDAD8: addiu       $t2, $t2, -0x7BF0
    ctx->r10 = ADD32(ctx->r10, -0X7BF0);
    // 0x800BDADC: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x800BDAE0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800BDAE4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BDAE8: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800BDAEC: bne         $at, $zero, L_800BDB4C
    if (ctx->r1 != 0) {
        // 0x800BDAF0: nop
    
            goto L_800BDB4C;
    }
    // 0x800BDAF0: nop

    // 0x800BDAF4: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x800BDAF8: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x800BDAFC: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800BDB00: bne         $at, $zero, L_800BDB4C
    if (ctx->r1 != 0) {
        // 0x800BDB04: nop
    
            goto L_800BDB4C;
    }
    // 0x800BDB04: nop

    // 0x800BDB08: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x800BDB0C: lw          $t1, 0xC($t2)
    ctx->r9 = MEM_W(ctx->r10, 0XC);
    // 0x800BDB10: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800BDB14: bne         $at, $zero, L_800BDB4C
    if (ctx->r1 != 0) {
        // 0x800BDB18: nop
    
            goto L_800BDB4C;
    }
    // 0x800BDB18: nop

    // 0x800BDB1C: lw          $t6, 0x10($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X10);
    // 0x800BDB20: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800BDB24: bne         $at, $zero, L_800BDB4C
    if (ctx->r1 != 0) {
        // 0x800BDB28: nop
    
            goto L_800BDB4C;
    }
    // 0x800BDB28: nop

    // 0x800BDB2C: lw          $t7, 0x14($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X14);
    // 0x800BDB30: slt         $at, $t7, $a2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800BDB34: bne         $at, $zero, L_800BDB4C
    if (ctx->r1 != 0) {
        // 0x800BDB38: nop
    
            goto L_800BDB4C;
    }
    // 0x800BDB38: nop

    // 0x800BDB3C: lw          $t8, 0x18($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X18);
    // 0x800BDB40: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800BDB44: beql        $at, $zero, L_800BDB58
    if (ctx->r1 == 0) {
            // 0x800BDB48: lw          $t9, 0x20($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X20);
    static_3_800BDB58(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800BDB48: lw          $t9, 0x20($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X20);
    skip_0:
L_800BDB4C:
    // 0x800BDB4C: jr          $ra
    // 0x800BDB50: addiu       $v0, $v0, -0x7BBC
    ctx->r2 = ADD32(ctx->r2, -0X7BBC);
    return;
    // 0x800BDB50: addiu       $v0, $v0, -0x7BBC
    ctx->r2 = ADD32(ctx->r2, -0X7BBC);
;}
RECOMP_FUNC void func_800BDB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDB54: lw          $t9, 0x20($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X20);
    // 0x800BDB58: subu        $t3, $t0, $t1
    ctx->r11 = SUB32(ctx->r8, ctx->r9);
    // 0x800BDB5C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x800BDB60: multu       $t9, $t3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDB64: subu        $t8, $v1, $a1
    ctx->r24 = SUB32(ctx->r3, ctx->r5);
    // 0x800BDB68: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800BDB6C: mflo        $t4
    ctx->r12 = lo;
    // 0x800BDB70: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800BDB74: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800BDB78: lw          $t5, 0x1C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X1C);
    // 0x800BDB7C: subu        $t4, $a2, $a3
    ctx->r12 = SUB32(ctx->r6, ctx->r7);
    // 0x800BDB80: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x800BDB84: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDB88: mflo        $t6
    ctx->r14 = lo;
    // 0x800BDB8C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x800BDB90: addu        $v0, $t3, $t8
    ctx->r2 = ADD32(ctx->r11, ctx->r24);
    // 0x800BDB94: jr          $ra
    // 0x800BDB98: nop

    return;
    // 0x800BDB98: nop

;}
RECOMP_FUNC void func_800BDB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDB9C: bgez        $a0, L_800BDBB0
    if (SIGNED(ctx->r4) >= 0) {
            // 0x800BDBA0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    func_800BDBB0(rdram, ctx);
    return;
    }
    // 0x800BDBA0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BDBA4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BDBA8: jr          $ra
    // 0x800BDBAC: addiu       $v0, $v1, -0x7BBC
    ctx->r2 = ADD32(ctx->r3, -0X7BBC);
    return;
    // 0x800BDBAC: addiu       $v0, $v1, -0x7BBC
    ctx->r2 = ADD32(ctx->r3, -0X7BBC);
;}
RECOMP_FUNC void func_800BDBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDBB0: lw          $t7, -0x7BF0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7BF0);
    // 0x800BDBB4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800BDBB8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800BDBBC: jr          $ra
    // 0x800BDBC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800BDBC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800BDBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDBC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BDBC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDBCC: jal         0x800BD97C
    // 0x800BDBD0: nop

    func_800BD97C(rdram, ctx);
        goto after_0;
    // 0x800BDBD0: nop

    after_0:
    // 0x800BDBD4: jal         0x800BDB9C
    // 0x800BDBD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800BDB9C(rdram, ctx);
        goto after_1;
    // 0x800BDBD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800BDBDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDBE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BDBE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDBEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BDBF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDBF4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800BDBF8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BDBFC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800BDC00: nop

    // 0x800BDC04: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800BDC08: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800BDC0C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800BDC10: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800BDC14: nop

    // 0x800BDC18: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800BDC1C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800BDC20: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800BDC24: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800BDC28: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800BDC2C: jal         0x800BDBC4
    // 0x800BDC30: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_800BDBC4(rdram, ctx);
        goto after_0;
    // 0x800BDC30: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x800BDC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDC38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BDC3C: jr          $ra
    // 0x800BDC40: nop

    return;
    // 0x800BDC40: nop

;}
RECOMP_FUNC void func_800BDC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDC44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BDC48: jr          $ra
    // 0x800BDC4C: addiu       $v0, $v0, -0x7BBC
    ctx->r2 = ADD32(ctx->r2, -0X7BBC);
    return;
    // 0x800BDC4C: addiu       $v0, $v0, -0x7BBC
    ctx->r2 = ADD32(ctx->r2, -0X7BBC);
;}
RECOMP_FUNC void func_800BDC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDC50: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BDC54: jr          $ra
    // 0x800BDC58: lw          $v0, -0x7BCC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7BCC);
    return;
    // 0x800BDC58: lw          $v0, -0x7BCC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7BCC);
;}
RECOMP_FUNC void func_800BDC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDC5C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BDC60: jr          $ra
    // 0x800BDC64: lh          $v0, -0x7BB4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7BB4);
    return;
    // 0x800BDC64: lh          $v0, -0x7BB4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7BB4);
;}
RECOMP_FUNC void func_800BDC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDC68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BDC6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BDC70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDC74: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BDC78: jal         0x80087C68
    // 0x800BDC7C: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800BDC7C: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BDC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BDC88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDC90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BDC94: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BDC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDC9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BDCA0: jal         0x80087C70
    // 0x800BDCA4: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800BDCA4: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BDCA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BDCB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDCB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BDCBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDCC0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BDCC4: jal         0x80087C50
    // 0x800BDCC8: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800BDCC8: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BDCCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDCD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BDCD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDCDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BDCE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDCE4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BDCE8: jal         0x80087C78
    // 0x800BDCEC: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800BDCEC: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BDCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BDCF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BDD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDD08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BDD0C: jal         0x80087C80
    // 0x800BDD10: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    _gccubeDll_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800BDD10: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    after_0:
    // 0x800BDD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDD18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BDD1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BDD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDD24: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800BDD28: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BDD2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BDD30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800BDD34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BDD38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BDD3C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800BDD40: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800BDD44: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800BDD48: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800BDD4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BDD50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800BDD54: addiu       $v0, $v0, -0x7BF0
    ctx->r2 = ADD32(ctx->r2, -0X7BF0);
    // 0x800BDD58: lwc1        $f2, -0x7BB0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7BB0);
    // 0x800BDD5C: addiu       $a0, $a0, -0x7BE4
    ctx->r4 = ADD32(ctx->r4, -0X7BE4);
    // 0x800BDD60: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
L_800BDD64:
    // 0x800BDD64: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800BDD68: bltzl       $v1, L_800BDD8C
    if (SIGNED(ctx->r3) < 0) {
        // 0x800BDD6C: mtc1        $v1, $f8
        ctx->f8.u32l = ctx->r3;
            goto L_800BDD8C;
    }
    goto skip_0;
    // 0x800BDD6C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    skip_0:
    // 0x800BDD70: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800BDD74: nop

    // 0x800BDD78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BDD7C: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800BDD80: b           L_800BDDA0
    // 0x800BDD84: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
        goto L_800BDDA0;
    // 0x800BDD84: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800BDD88: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
L_800BDD8C:
    // 0x800BDD8C: nop

    // 0x800BDD90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BDD94: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800BDD98: nop

    // 0x800BDD9C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
L_800BDDA0:
    // 0x800BDDA0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800BDDA4: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800BDDA8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800BDDAC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800BDDB0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800BDDB4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BDDB8: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x800BDDBC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BDDC0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800BDDC4: bne         $at, $zero, L_800BDD64
    if (ctx->r1 != 0) {
        // 0x800BDDC8: sw          $t8, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->r24;
            goto L_800BDD64;
    }
    // 0x800BDDC8: sw          $t8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r24;
    // 0x800BDDCC: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x800BDDD0: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800BDDD4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800BDDD8: blez        $t9, L_800BDF10
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800BDDDC: addiu       $s2, $s2, -0x7BF0
        ctx->r18 = ADD32(ctx->r18, -0X7BF0);
            goto L_800BDF10;
    }
    // 0x800BDDDC: addiu       $s2, $s2, -0x7BF0
    ctx->r18 = ADD32(ctx->r18, -0X7BF0);
    // 0x800BDDE0: lw          $t0, 0x28($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X28);
    // 0x800BDDE4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800BDDE8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800BDDEC: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800BDDF0: beql        $at, $zero, L_800BDF14
    if (ctx->r1 == 0) {
        // 0x800BDDF4: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BDF14;
    }
    goto skip_1;
    // 0x800BDDF4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_1:
    // 0x800BDDF8: blezl       $t2, L_800BDF14
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800BDDFC: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BDF14;
    }
    goto skip_2;
    // 0x800BDDFC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_2:
    // 0x800BDE00: lw          $t3, 0x2C($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X2C);
    // 0x800BDE04: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800BDE08: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800BDE0C: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800BDE10: beql        $at, $zero, L_800BDF14
    if (ctx->r1 == 0) {
        // 0x800BDE14: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BDF14;
    }
    goto skip_3;
    // 0x800BDE14: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_3:
    // 0x800BDE18: blezl       $a0, L_800BDF14
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800BDE1C: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BDF14;
    }
    goto skip_4;
    // 0x800BDE1C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_4:
    // 0x800BDE20: lw          $t5, 0x30($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X30);
    // 0x800BDE24: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800BDE28: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800BDE2C: beql        $at, $zero, L_800BDF14
    if (ctx->r1 == 0) {
        // 0x800BDE30: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BDF14;
    }
    goto skip_5;
    // 0x800BDE30: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_5:
    // 0x800BDE34: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x800BDE38: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x800BDE3C: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x800BDE40: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDE44: addiu       $t1, $t2, -0x1
    ctx->r9 = ADD32(ctx->r10, -0X1);
    // 0x800BDE48: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800BDE4C: addiu       $s4, $s4, -0x7BA8
    ctx->r20 = ADD32(ctx->r20, -0X7BA8);
    // 0x800BDE50: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x800BDE54: mflo        $t8
    ctx->r24 = lo;
    // 0x800BDE58: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800BDE5C: nop

    // 0x800BDE60: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDE64: mflo        $t3
    ctx->r11 = lo;
    // 0x800BDE68: addu        $s5, $t0, $t3
    ctx->r21 = ADD32(ctx->r8, ctx->r11);
    // 0x800BDE6C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x800BDE70: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_800BDE74:
    // 0x800BDE74: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_800BDE78:
    // 0x800BDE78: slti        $at, $zero, 0x3
    ctx->r1 = SIGNED(0) < 0X3 ? 1 : 0;
    // 0x800BDE7C: beq         $at, $zero, L_800BDECC
    if (ctx->r1 == 0) {
        // 0x800BDE80: sw          $zero, 0x54($sp)
        MEM_W(0X54, ctx->r29) = 0;
            goto L_800BDECC;
    }
    // 0x800BDE80: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_800BDE84:
    // 0x800BDE84: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800BDE88: sll         $s0, $s1, 3
    ctx->r16 = S32(ctx->r17 << 3);
    // 0x800BDE8C: jal         0x800E9DC4
    // 0x800BDE90: addu        $a0, $s0, $t4
    ctx->r4 = ADD32(ctx->r16, ctx->r12);
    func_800E9DC4(rdram, ctx);
        goto after_0;
    // 0x800BDE90: addu        $a0, $s0, $t4
    ctx->r4 = ADD32(ctx->r16, ctx->r12);
    after_0:
    // 0x800BDE94: beq         $v0, $zero, L_800BDEB0
    if (ctx->r2 == 0) {
        // 0x800BDE98: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_800BDEB0;
    }
    // 0x800BDE98: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x800BDE9C: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x800BDEA0: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x800BDEA4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800BDEA8: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x800BDEAC: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_800BDEB0:
    // 0x800BDEB0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x800BDEB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800BDEB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BDEBC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800BDEC0: bne         $at, $zero, L_800BDE84
    if (ctx->r1 != 0) {
        // 0x800BDEC4: sw          $v0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r2;
            goto L_800BDE84;
    }
    // 0x800BDEC4: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BDEC8: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
L_800BDECC:
    // 0x800BDECC: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800BDED0: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x800BDED4: addiu       $s1, $s1, -0x3
    ctx->r17 = ADD32(ctx->r17, -0X3);
    // 0x800BDED8: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x800BDEDC: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x800BDEE0: bne         $at, $zero, L_800BDE78
    if (ctx->r1 != 0) {
        // 0x800BDEE4: sw          $t2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r10;
            goto L_800BDE78;
    }
    // 0x800BDEE4: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x800BDEE8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800BDEEC: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x800BDEF0: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x800BDEF4: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800BDEF8: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x800BDEFC: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x800BDF00: bne         $at, $zero, L_800BDE74
    if (ctx->r1 != 0) {
        // 0x800BDF04: sw          $t0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r8;
            goto L_800BDE74;
    }
    // 0x800BDF04: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x800BDF08: b           L_800BE064
    // 0x800BDF0C: nop

        goto L_800BE064;
    // 0x800BDF0C: nop

L_800BDF10:
    // 0x800BDF10: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
L_800BDF14:
    // 0x800BDF14: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800BDF18: addiu       $s2, $s2, -0x7BF0
    ctx->r18 = ADD32(ctx->r18, -0X7BF0);
    // 0x800BDF1C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800BDF20: addiu       $v0, $t3, 0x2
    ctx->r2 = ADD32(ctx->r11, 0X2);
    // 0x800BDF24: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BDF28: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800BDF2C: beq         $at, $zero, L_800BE064
    if (ctx->r1 == 0) {
        // 0x800BDF30: sw          $t4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r12;
            goto L_800BE064;
    }
    // 0x800BDF30: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x800BDF34: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800BDF38: addiu       $s4, $s4, -0x7BA8
    ctx->r20 = ADD32(ctx->r20, -0X7BA8);
L_800BDF3C:
    // 0x800BDF3C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800BDF40: bltzl       $t5, L_800BE054
    if (SIGNED(ctx->r13) < 0) {
        // 0x800BDF44: lw          $t7, 0x4C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X4C);
            goto L_800BE054;
    }
    goto skip_6;
    // 0x800BDF44: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    skip_6:
    // 0x800BDF48: lw          $t7, 0x28($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X28);
    // 0x800BDF4C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800BDF50: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800BDF54: beq         $at, $zero, L_800BE050
    if (ctx->r1 == 0) {
        // 0x800BDF58: addiu       $t8, $t6, -0x1
        ctx->r24 = ADD32(ctx->r14, -0X1);
            goto L_800BE050;
    }
    // 0x800BDF58: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x800BDF5C: addiu       $v1, $t6, 0x2
    ctx->r3 = ADD32(ctx->r14, 0X2);
    // 0x800BDF60: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800BDF64: beq         $at, $zero, L_800BE050
    if (ctx->r1 == 0) {
        // 0x800BDF68: sw          $t8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r24;
            goto L_800BE050;
    }
    // 0x800BDF68: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
L_800BDF6C:
    // 0x800BDF6C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800BDF70: bltzl       $t9, L_800BE038
    if (SIGNED(ctx->r25) < 0) {
        // 0x800BDF74: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_800BE038;
    }
    goto skip_7;
    // 0x800BDF74: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    skip_7:
    // 0x800BDF78: lw          $t2, 0x2C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X2C);
    // 0x800BDF7C: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x800BDF80: addiu       $t1, $a0, 0x2
    ctx->r9 = ADD32(ctx->r4, 0X2);
    // 0x800BDF84: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800BDF88: beq         $at, $zero, L_800BE034
    if (ctx->r1 == 0) {
        // 0x800BDF8C: slt         $at, $v0, $t1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
            goto L_800BE034;
    }
    // 0x800BDF8C: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800BDF90: beql        $at, $zero, L_800BE038
    if (ctx->r1 == 0) {
        // 0x800BDF94: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_800BE038;
    }
    goto skip_8;
    // 0x800BDF94: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    skip_8:
L_800BDF98:
    // 0x800BDF98: bltz        $v0, L_800BE010
    if (SIGNED(ctx->r2) < 0) {
        // 0x800BDF9C: sw          $v0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r2;
            goto L_800BE010;
    }
    // 0x800BDF9C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BDFA0: lw          $t0, 0x30($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X30);
    // 0x800BDFA4: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BDFA8: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800BDFAC: beql        $at, $zero, L_800BE014
    if (ctx->r1 == 0) {
        // 0x800BDFB0: lw          $v0, 0x54($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X54);
            goto L_800BE014;
    }
    goto skip_9;
    // 0x800BDFB0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    skip_9:
    // 0x800BDFB4: lw          $t3, 0x20($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X20);
    // 0x800BDFB8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800BDFBC: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    // 0x800BDFC0: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDFC4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800BDFC8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800BDFCC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BDFD0: mflo        $t4
    ctx->r12 = lo;
    // 0x800BDFD4: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x800BDFD8: nop

    // 0x800BDFDC: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDFE0: mflo        $t9
    ctx->r25 = lo;
    // 0x800BDFE4: addu        $s1, $t7, $t9
    ctx->r17 = ADD32(ctx->r15, ctx->r25);
    // 0x800BDFE8: sll         $s0, $s1, 3
    ctx->r16 = S32(ctx->r17 << 3);
    // 0x800BDFEC: jal         0x800E9DC4
    // 0x800BDFF0: addu        $a0, $s0, $t2
    ctx->r4 = ADD32(ctx->r16, ctx->r10);
    func_800E9DC4(rdram, ctx);
        goto after_1;
    // 0x800BDFF0: addu        $a0, $s0, $t2
    ctx->r4 = ADD32(ctx->r16, ctx->r10);
    after_1:
    // 0x800BDFF4: beq         $v0, $zero, L_800BE010
    if (ctx->r2 == 0) {
        // 0x800BDFF8: sll         $t3, $s3, 2
        ctx->r11 = S32(ctx->r19 << 2);
            goto L_800BE010;
    }
    // 0x800BDFF8: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x800BDFFC: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x800BE000: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x800BE004: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800BE008: addu        $t0, $s0, $t1
    ctx->r8 = ADD32(ctx->r16, ctx->r9);
    // 0x800BE00C: sw          $t0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r8;
L_800BE010:
    // 0x800BE010: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
L_800BE014:
    // 0x800BE014: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800BE018: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BE01C: addiu       $t5, $a0, 0x2
    ctx->r13 = ADD32(ctx->r4, 0X2);
    // 0x800BE020: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800BE024: bne         $at, $zero, L_800BDF98
    if (ctx->r1 != 0) {
        // 0x800BE028: nop
    
            goto L_800BDF98;
    }
    // 0x800BE028: nop

    // 0x800BE02C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x800BE030: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_800BE034:
    // 0x800BE034: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_800BE038:
    // 0x800BE038: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800BE03C: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800BE040: bne         $at, $zero, L_800BDF6C
    if (ctx->r1 != 0) {
        // 0x800BE044: sw          $t8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r24;
            goto L_800BDF6C;
    }
    // 0x800BE044: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x800BE048: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x800BE04C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_800BE050:
    // 0x800BE050: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
L_800BE054:
    // 0x800BE054: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800BE058: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BE05C: bne         $at, $zero, L_800BDF3C
    if (ctx->r1 != 0) {
        // 0x800BE060: sw          $t9, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r25;
            goto L_800BDF3C;
    }
    // 0x800BE060: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_800BE064:
    // 0x800BE064: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800BE068: addiu       $v0, $s4, -0x7BA8
    ctx->r2 = ADD32(ctx->r20, -0X7BA8);
    // 0x800BE06C: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x800BE070: addu        $t1, $v0, $t2
    ctx->r9 = ADD32(ctx->r2, ctx->r10);
    // 0x800BE074: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x800BE078: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800BE07C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800BE080: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800BE084: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800BE088: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE08C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800BE090: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800BE094: jr          $ra
    // 0x800BE098: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800BE098: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800BE09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE09C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800BE0A0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800BE0A4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800BE0A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE0AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800BE0B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BE0B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BE0B8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800BE0BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800BE0C0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800BE0C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BE0C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800BE0CC: addiu       $v0, $v0, -0x7BF0
    ctx->r2 = ADD32(ctx->r2, -0X7BF0);
    // 0x800BE0D0: lwc1        $f2, -0x7BB0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7BB0);
    // 0x800BE0D4: addiu       $a0, $a0, -0x7BE4
    ctx->r4 = ADD32(ctx->r4, -0X7BE4);
    // 0x800BE0D8: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x800BE0DC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_800BE0E0:
    // 0x800BE0E0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x800BE0E4: bltzl       $v1, L_800BE108
    if (SIGNED(ctx->r3) < 0) {
        // 0x800BE0E8: mtc1        $v1, $f8
        ctx->f8.u32l = ctx->r3;
            goto L_800BE108;
    }
    goto skip_0;
    // 0x800BE0E8: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    skip_0:
    // 0x800BE0EC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800BE0F0: nop

    // 0x800BE0F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BE0F8: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800BE0FC: b           L_800BE11C
    // 0x800BE100: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
        goto L_800BE11C;
    // 0x800BE100: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800BE104: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
L_800BE108:
    // 0x800BE108: nop

    // 0x800BE10C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BE110: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800BE114: nop

    // 0x800BE118: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
L_800BE11C:
    // 0x800BE11C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800BE120: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800BE124: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800BE128: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800BE12C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800BE130: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BE134: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x800BE138: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800BE13C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800BE140: bne         $at, $zero, L_800BE0E0
    if (ctx->r1 != 0) {
        // 0x800BE144: sw          $t8, -0x4($a3)
        MEM_W(-0X4, ctx->r7) = ctx->r24;
            goto L_800BE0E0;
    }
    // 0x800BE144: sw          $t8, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = ctx->r24;
    // 0x800BE148: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x800BE14C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800BE150: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800BE154: blez        $t9, L_800BE284
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800BE158: addiu       $s2, $s2, -0x7BF0
        ctx->r18 = ADD32(ctx->r18, -0X7BF0);
            goto L_800BE284;
    }
    // 0x800BE158: addiu       $s2, $s2, -0x7BF0
    ctx->r18 = ADD32(ctx->r18, -0X7BF0);
    // 0x800BE15C: lw          $t0, 0x28($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X28);
    // 0x800BE160: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800BE164: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800BE168: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800BE16C: beql        $at, $zero, L_800BE288
    if (ctx->r1 == 0) {
        // 0x800BE170: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BE288;
    }
    goto skip_1;
    // 0x800BE170: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_1:
    // 0x800BE174: blezl       $t2, L_800BE288
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800BE178: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BE288;
    }
    goto skip_2;
    // 0x800BE178: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_2:
    // 0x800BE17C: lw          $t3, 0x2C($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X2C);
    // 0x800BE180: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800BE184: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800BE188: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800BE18C: beql        $at, $zero, L_800BE288
    if (ctx->r1 == 0) {
        // 0x800BE190: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BE288;
    }
    goto skip_3;
    // 0x800BE190: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_3:
    // 0x800BE194: blezl       $a0, L_800BE288
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800BE198: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BE288;
    }
    goto skip_4;
    // 0x800BE198: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_4:
    // 0x800BE19C: lw          $t5, 0x30($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X30);
    // 0x800BE1A0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800BE1A4: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800BE1A8: beql        $at, $zero, L_800BE288
    if (ctx->r1 == 0) {
        // 0x800BE1AC: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_800BE288;
    }
    goto skip_5;
    // 0x800BE1AC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_5:
    // 0x800BE1B0: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x800BE1B4: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x800BE1B8: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x800BE1BC: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BE1C0: addiu       $t1, $t2, -0x1
    ctx->r9 = ADD32(ctx->r10, -0X1);
    // 0x800BE1C4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x800BE1C8: mflo        $t8
    ctx->r24 = lo;
    // 0x800BE1CC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800BE1D0: nop

    // 0x800BE1D4: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BE1D8: mflo        $t3
    ctx->r11 = lo;
    // 0x800BE1DC: addu        $s5, $t0, $t3
    ctx->r21 = ADD32(ctx->r8, ctx->r11);
    // 0x800BE1E0: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x800BE1E4: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_800BE1E8:
    // 0x800BE1E8: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_800BE1EC:
    // 0x800BE1EC: slti        $at, $zero, 0x3
    ctx->r1 = SIGNED(0) < 0X3 ? 1 : 0;
    // 0x800BE1F0: beq         $at, $zero, L_800BE240
    if (ctx->r1 == 0) {
        // 0x800BE1F4: sw          $zero, 0x54($sp)
        MEM_W(0X54, ctx->r29) = 0;
            goto L_800BE240;
    }
    // 0x800BE1F4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_800BE1F8:
    // 0x800BE1F8: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800BE1FC: sll         $s0, $s1, 3
    ctx->r16 = S32(ctx->r17 << 3);
    // 0x800BE200: jal         0x800E9DCC
    // 0x800BE204: addu        $a0, $s0, $t4
    ctx->r4 = ADD32(ctx->r16, ctx->r12);
    func_800E9DCC(rdram, ctx);
        goto after_0;
    // 0x800BE204: addu        $a0, $s0, $t4
    ctx->r4 = ADD32(ctx->r16, ctx->r12);
    after_0:
    // 0x800BE208: beq         $v0, $zero, L_800BE224
    if (ctx->r2 == 0) {
        // 0x800BE20C: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_800BE224;
    }
    // 0x800BE20C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x800BE210: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x800BE214: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x800BE218: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800BE21C: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x800BE220: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_800BE224:
    // 0x800BE224: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x800BE228: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800BE22C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BE230: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800BE234: bne         $at, $zero, L_800BE1F8
    if (ctx->r1 != 0) {
        // 0x800BE238: sw          $v0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r2;
            goto L_800BE1F8;
    }
    // 0x800BE238: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BE23C: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
L_800BE240:
    // 0x800BE240: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800BE244: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x800BE248: addiu       $s1, $s1, -0x3
    ctx->r17 = ADD32(ctx->r17, -0X3);
    // 0x800BE24C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x800BE250: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x800BE254: bne         $at, $zero, L_800BE1EC
    if (ctx->r1 != 0) {
        // 0x800BE258: sw          $t2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r10;
            goto L_800BE1EC;
    }
    // 0x800BE258: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x800BE25C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800BE260: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x800BE264: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x800BE268: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800BE26C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x800BE270: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x800BE274: bne         $at, $zero, L_800BE1E8
    if (ctx->r1 != 0) {
        // 0x800BE278: sw          $t0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r8;
            goto L_800BE1E8;
    }
    // 0x800BE278: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x800BE27C: b           L_800BE3D4
    // 0x800BE280: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800BE3D4;
    // 0x800BE280: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BE284:
    // 0x800BE284: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
L_800BE288:
    // 0x800BE288: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800BE28C: addiu       $s2, $s2, -0x7BF0
    ctx->r18 = ADD32(ctx->r18, -0X7BF0);
    // 0x800BE290: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800BE294: addiu       $v0, $t3, 0x2
    ctx->r2 = ADD32(ctx->r11, 0X2);
    // 0x800BE298: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BE29C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800BE2A0: beq         $at, $zero, L_800BE3D0
    if (ctx->r1 == 0) {
        // 0x800BE2A4: sw          $t4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r12;
            goto L_800BE3D0;
    }
    // 0x800BE2A4: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
L_800BE2A8:
    // 0x800BE2A8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800BE2AC: bltzl       $t5, L_800BE3C0
    if (SIGNED(ctx->r13) < 0) {
        // 0x800BE2B0: lw          $t7, 0x4C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X4C);
            goto L_800BE3C0;
    }
    goto skip_6;
    // 0x800BE2B0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    skip_6:
    // 0x800BE2B4: lw          $t7, 0x28($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X28);
    // 0x800BE2B8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800BE2BC: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800BE2C0: beq         $at, $zero, L_800BE3BC
    if (ctx->r1 == 0) {
        // 0x800BE2C4: addiu       $t8, $t6, -0x1
        ctx->r24 = ADD32(ctx->r14, -0X1);
            goto L_800BE3BC;
    }
    // 0x800BE2C4: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x800BE2C8: addiu       $v1, $t6, 0x2
    ctx->r3 = ADD32(ctx->r14, 0X2);
    // 0x800BE2CC: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800BE2D0: beq         $at, $zero, L_800BE3BC
    if (ctx->r1 == 0) {
        // 0x800BE2D4: sw          $t8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r24;
            goto L_800BE3BC;
    }
    // 0x800BE2D4: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
L_800BE2D8:
    // 0x800BE2D8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800BE2DC: bltzl       $t9, L_800BE3A4
    if (SIGNED(ctx->r25) < 0) {
        // 0x800BE2E0: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_800BE3A4;
    }
    goto skip_7;
    // 0x800BE2E0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    skip_7:
    // 0x800BE2E4: lw          $t2, 0x2C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X2C);
    // 0x800BE2E8: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x800BE2EC: addiu       $t1, $a0, 0x2
    ctx->r9 = ADD32(ctx->r4, 0X2);
    // 0x800BE2F0: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800BE2F4: beq         $at, $zero, L_800BE3A0
    if (ctx->r1 == 0) {
        // 0x800BE2F8: slt         $at, $v0, $t1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
            goto L_800BE3A0;
    }
    // 0x800BE2F8: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800BE2FC: beql        $at, $zero, L_800BE3A4
    if (ctx->r1 == 0) {
        // 0x800BE300: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_800BE3A4;
    }
    goto skip_8;
    // 0x800BE300: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    skip_8:
L_800BE304:
    // 0x800BE304: bltz        $v0, L_800BE37C
    if (SIGNED(ctx->r2) < 0) {
        // 0x800BE308: sw          $v0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r2;
            goto L_800BE37C;
    }
    // 0x800BE308: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BE30C: lw          $t0, 0x30($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X30);
    // 0x800BE310: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BE314: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800BE318: beql        $at, $zero, L_800BE380
    if (ctx->r1 == 0) {
        // 0x800BE31C: lw          $v0, 0x54($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X54);
            goto L_800BE380;
    }
    goto skip_9;
    // 0x800BE31C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    skip_9:
    // 0x800BE320: lw          $t3, 0x20($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X20);
    // 0x800BE324: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800BE328: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    // 0x800BE32C: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BE330: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800BE334: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800BE338: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800BE33C: mflo        $t4
    ctx->r12 = lo;
    // 0x800BE340: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x800BE344: nop

    // 0x800BE348: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BE34C: mflo        $t9
    ctx->r25 = lo;
    // 0x800BE350: addu        $s1, $t7, $t9
    ctx->r17 = ADD32(ctx->r15, ctx->r25);
    // 0x800BE354: sll         $s0, $s1, 3
    ctx->r16 = S32(ctx->r17 << 3);
    // 0x800BE358: jal         0x800E9DCC
    // 0x800BE35C: addu        $a0, $s0, $t2
    ctx->r4 = ADD32(ctx->r16, ctx->r10);
    func_800E9DCC(rdram, ctx);
        goto after_1;
    // 0x800BE35C: addu        $a0, $s0, $t2
    ctx->r4 = ADD32(ctx->r16, ctx->r10);
    after_1:
    // 0x800BE360: beq         $v0, $zero, L_800BE37C
    if (ctx->r2 == 0) {
        // 0x800BE364: sll         $t3, $s3, 2
        ctx->r11 = S32(ctx->r19 << 2);
            goto L_800BE37C;
    }
    // 0x800BE364: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x800BE368: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x800BE36C: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x800BE370: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800BE374: addu        $t0, $s0, $t1
    ctx->r8 = ADD32(ctx->r16, ctx->r9);
    // 0x800BE378: sw          $t0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r8;
L_800BE37C:
    // 0x800BE37C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
L_800BE380:
    // 0x800BE380: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800BE384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BE388: addiu       $t5, $a0, 0x2
    ctx->r13 = ADD32(ctx->r4, 0X2);
    // 0x800BE38C: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800BE390: bne         $at, $zero, L_800BE304
    if (ctx->r1 != 0) {
        // 0x800BE394: nop
    
            goto L_800BE304;
    }
    // 0x800BE394: nop

    // 0x800BE398: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x800BE39C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_800BE3A0:
    // 0x800BE3A0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_800BE3A4:
    // 0x800BE3A4: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800BE3A8: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800BE3AC: bne         $at, $zero, L_800BE2D8
    if (ctx->r1 != 0) {
        // 0x800BE3B0: sw          $t8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r24;
            goto L_800BE2D8;
    }
    // 0x800BE3B0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x800BE3B4: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x800BE3B8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_800BE3BC:
    // 0x800BE3BC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
L_800BE3C0:
    // 0x800BE3C0: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800BE3C4: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800BE3C8: bne         $at, $zero, L_800BE2A8
    if (ctx->r1 != 0) {
        // 0x800BE3CC: sw          $t9, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r25;
            goto L_800BE2A8;
    }
    // 0x800BE3CC: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_800BE3D0:
    // 0x800BE3D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BE3D4:
    // 0x800BE3D4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x800BE3D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800BE3DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800BE3E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800BE3E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE3E8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800BE3EC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800BE3F0: jr          $ra
    // 0x800BE3F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800BE3F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800BE3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE3F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BE3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE400: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BE404: jal         0x800EE904
    // 0x800BE408: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x800BE408: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800BE40C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE410: addiu       $a0, $a0, -0x7B38
    ctx->r4 = ADD32(ctx->r4, -0X7B38);
    // 0x800BE414: jal         0x800BE09C
    // 0x800BE418: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800BE09C(rdram, ctx);
        goto after_1;
    // 0x800BE418: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x800BE41C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BE420: addiu       $v1, $v1, -0x7B38
    ctx->r3 = ADD32(ctx->r3, -0X7B38);
    // 0x800BE424: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800BE428: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x800BE42C: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x800BE430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BE434: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BE438: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800BE43C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BE444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE444: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BE448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE44C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BE450: jal         0x800EE904
    // 0x800BE454: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x800BE454: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800BE458: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE45C: addiu       $a0, $a0, -0x7AC8
    ctx->r4 = ADD32(ctx->r4, -0X7AC8);
    // 0x800BE460: jal         0x800BE09C
    // 0x800BE464: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800BE09C(rdram, ctx);
        goto after_1;
    // 0x800BE464: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x800BE468: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE46C: addiu       $a0, $a0, -0x7BBC
    ctx->r4 = ADD32(ctx->r4, -0X7BBC);
    // 0x800BE470: jal         0x800E9DCC
    // 0x800BE474: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800E9DCC(rdram, ctx);
        goto after_2;
    // 0x800BE474: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x800BE478: beq         $v0, $zero, L_800BE4A0
    if (ctx->r2 == 0) {
        // 0x800BE47C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_800BE4A0;
    }
    // 0x800BE47C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800BE480: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE484: addiu       $a0, $a0, -0x7AC8
    ctx->r4 = ADD32(ctx->r4, -0X7AC8);
    // 0x800BE488: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800BE48C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800BE490: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800BE494: addiu       $t6, $t6, -0x7BBC
    ctx->r14 = ADD32(ctx->r14, -0X7BBC);
    // 0x800BE498: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x800BE49C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800BE4A0:
    // 0x800BE4A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE4A4: addiu       $v0, $a0, -0x7AC8
    ctx->r2 = ADD32(ctx->r4, -0X7AC8);
    // 0x800BE4A8: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800BE4AC: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x800BE4B0: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x800BE4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BE4B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BE4BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BE4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE4C4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BE4C8: addiu       $v1, $v1, -0x7BF0
    ctx->r3 = ADD32(ctx->r3, -0X7BF0);
    // 0x800BE4CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BE4D0: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x800BE4D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800BE4D8: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x800BE4DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BE4E0: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800BE4E4: addu        $s1, $t7, $s0
    ctx->r17 = ADD32(ctx->r15, ctx->r16);
    // 0x800BE4E8: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800BE4EC: beq         $at, $zero, L_800BE50C
    if (ctx->r1 == 0) {
        // 0x800BE4F0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800BE50C;
    }
    // 0x800BE4F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_800BE4F4:
    // 0x800BE4F4: jal         0x800E9CF4
    // 0x800BE4F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9CF4(rdram, ctx);
        goto after_0;
    // 0x800BE4F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800BE4FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800BE500: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800BE504: bne         $at, $zero, L_800BE4F4
    if (ctx->r1 != 0) {
        // 0x800BE508: nop
    
            goto L_800BE4F4;
    }
    // 0x800BE508: nop

L_800BE50C:
    // 0x800BE50C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE510: jal         0x800E9CF4
    // 0x800BE514: addiu       $a0, $a0, -0x7BBC
    ctx->r4 = ADD32(ctx->r4, -0X7BBC);
    func_800E9CF4(rdram, ctx);
        goto after_1;
    // 0x800BE514: addiu       $a0, $a0, -0x7BBC
    ctx->r4 = ADD32(ctx->r4, -0X7BBC);
    after_1:
    // 0x800BE518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE51C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800BE520: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800BE524: jr          $ra
    // 0x800BE528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800BE528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800BE52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE52C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BE530: addiu       $v0, $v0, -0x7BF0
    ctx->r2 = ADD32(ctx->r2, -0X7BF0);
    // 0x800BE534: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800BE538: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800BE53C: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x800BE540: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800BE544: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800BE548: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800BE54C: jr          $ra
    // 0x800BE550: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    return;
    // 0x800BE550: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
;}
RECOMP_FUNC void func_800BE554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BE558: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BE55C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE560: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BE564: jal         0x800EE830
    // 0x800BE568: addiu       $a1, $a1, -0x7BEC
    ctx->r5 = ADD32(ctx->r5, -0X7BEC);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800BE568: addiu       $a1, $a1, -0x7BEC
    ctx->r5 = ADD32(ctx->r5, -0X7BEC);
    after_0:
    // 0x800BE56C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BE570: addiu       $a1, $a1, -0x7BE0
    ctx->r5 = ADD32(ctx->r5, -0X7BE0);
    // 0x800BE574: jal         0x800EE830
    // 0x800BE578: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EE830(rdram, ctx);
        goto after_1;
    // 0x800BE578: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800BE57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BE580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BE584: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BE58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE58C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BE590: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BE594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE598: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BE59C: jal         0x800EE830
    // 0x800BE5A0: addiu       $a1, $a1, -0x7BC8
    ctx->r5 = ADD32(ctx->r5, -0X7BC8);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800BE5A0: addiu       $a1, $a1, -0x7BC8
    ctx->r5 = ADD32(ctx->r5, -0X7BC8);
    after_0:
    // 0x800BE5A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BE5A8: addiu       $a1, $a1, -0x7BD4
    ctx->r5 = ADD32(ctx->r5, -0X7BD4);
    // 0x800BE5AC: jal         0x800EE830
    // 0x800BE5B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EE830(rdram, ctx);
        goto after_1;
    // 0x800BE5B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800BE5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BE5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BE5BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BE5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE5C4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BE5C8: addiu       $v1, $v1, -0x7BF0
    ctx->r3 = ADD32(ctx->r3, -0X7BF0);
    // 0x800BE5CC: addiu       $t6, $v1, 0x34
    ctx->r14 = ADD32(ctx->r3, 0X34);
    // 0x800BE5D0: bne         $a0, $t6, L_800BE5E0
    if (ctx->r4 != ctx->r14) {
            // 0x800BE5D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    func_800BE5E0(rdram, ctx);
    return;
    }
    // 0x800BE5D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BE5D8: jr          $ra
    // 0x800BE5DC: addiu       $v0, $v0, -0x7BB2
    ctx->r2 = ADD32(ctx->r2, -0X7BB2);
    return;
    // 0x800BE5DC: addiu       $v0, $v0, -0x7BB2
    ctx->r2 = ADD32(ctx->r2, -0X7BB2);
;}
RECOMP_FUNC void func_800BE5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE5E0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800BE5E4: lw          $t0, 0x44($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X44);
    // 0x800BE5E8: subu        $t8, $a0, $t7
    ctx->r24 = SUB32(ctx->r4, ctx->r15);
    // 0x800BE5EC: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x800BE5F0: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x800BE5F4: jr          $ra
    // 0x800BE5F8: nop

    return;
    // 0x800BE5F8: nop

;}
RECOMP_FUNC void func_800BE600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE600: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800BE604: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800BE608: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x800BE60C: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x800BE610: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800BE614: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800BE618: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800BE61C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800BE620: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800BE624: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800BE628: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800BE62C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800BE630: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800BE634: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800BE638: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800BE63C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x800BE640: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800BE644: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800BE648: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BE64C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x800BE650: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800BE654: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800BE658: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800BE65C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800BE660: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x800BE664: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800BE668: addiu       $s5, $sp, 0x64
    ctx->r21 = ADD32(ctx->r29, 0X64);
    // 0x800BE66C: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x800BE670: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800BE674: addiu       $s6, $sp, 0x58
    ctx->r22 = ADD32(ctx->r29, 0X58);
    // 0x800BE678: addiu       $s7, $sp, 0x70
    ctx->r23 = ADD32(ctx->r29, 0X70);
    // 0x800BE67C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x800BE680: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800BE684: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x800BE688: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800BE68C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x800BE690: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800BE694: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800BE698: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800BE69C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800BE6A0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x800BE6A4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x800BE6A8: jal         0x800BEF00
    // 0x800BE6AC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    func_800BEF00(rdram, ctx);
        goto after_0;
    // 0x800BE6AC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800BE6B0: beq         $v0, $zero, L_800BE6C0
    if (ctx->r2 == 0) {
        // 0x800BE6B4: addiu       $s2, $zero, 0x96
        ctx->r18 = ADD32(0, 0X96);
            goto L_800BE6C0;
    }
    // 0x800BE6B4: addiu       $s2, $zero, 0x96
    ctx->r18 = ADD32(0, 0X96);
    // 0x800BE6B8: b           L_800BE7C4
    // 0x800BE6BC: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
        goto L_800BE7C4;
    // 0x800BE6BC: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
L_800BE6C0:
    // 0x800BE6C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BE6C4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800BE6C8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800BE6CC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800BE6D0: addiu       $s1, $zero, 0x3E8
    ctx->r17 = ADD32(0, 0X3E8);
    // 0x800BE6D4: ori         $s3, $zero, 0xC738
    ctx->r19 = 0 | 0XC738;
L_800BE6D8:
    // 0x800BE6D8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800BE6DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800BE6E0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x800BE6E4: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x800BE6E8: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800BE6EC: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x800BE6F0: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800BE6F4: jal         0x800DC178
    // 0x800BE6F8: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x800BE6F8: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800BE6FC: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x800BE700: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800BE704: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800BE708: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BE70C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800BE710: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x800BE714: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800BE718: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800BE71C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x800BE720: jal         0x800DC178
    // 0x800BE724: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x800BE724: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800BE728: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800BE72C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800BE730: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x800BE734: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800BE738: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x800BE73C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800BE740: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x800BE744: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800BE748: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x800BE74C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800BE750: jal         0x800DC178
    // 0x800BE754: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x800BE754: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800BE758: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x800BE75C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800BE760: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800BE764: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BE768: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800BE76C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x800BE770: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800BE774: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800BE778: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x800BE77C: jal         0x800DC178
    // 0x800BE780: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    func_800DC178(rdram, ctx);
        goto after_4;
    // 0x800BE780: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800BE784: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800BE788: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800BE78C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800BE790: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800BE794: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x800BE798: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x800BE79C: jal         0x800BEF00
    // 0x800BE7A0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    func_800BEF00(rdram, ctx);
        goto after_5;
    // 0x800BE7A0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800BE7A4: beq         $v0, $zero, L_800BE7B4
    if (ctx->r2 == 0) {
        // 0x800BE7A8: addiu       $s1, $s1, 0x7D0
        ctx->r17 = ADD32(ctx->r17, 0X7D0);
            goto L_800BE7B4;
    }
    // 0x800BE7A8: addiu       $s1, $s1, 0x7D0
    ctx->r17 = ADD32(ctx->r17, 0X7D0);
    // 0x800BE7AC: b           L_800BE7C4
    // 0x800BE7B0: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
        goto L_800BE7C4;
    // 0x800BE7B0: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
L_800BE7B4:
    // 0x800BE7B4: bne         $s1, $s3, L_800BE6D8
    if (ctx->r17 != ctx->r19) {
        // 0x800BE7B8: addiu       $s2, $s2, 0x12C
        ctx->r18 = ADD32(ctx->r18, 0X12C);
            goto L_800BE6D8;
    }
    // 0x800BE7B8: addiu       $s2, $s2, 0x12C
    ctx->r18 = ADD32(ctx->r18, 0X12C);
    // 0x800BE7BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800BE7C0: nop

L_800BE7C4:
    // 0x800BE7C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800BE7C8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800BE7CC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800BE7D0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800BE7D4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800BE7D8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800BE7DC: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800BE7E0: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800BE7E4: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800BE7E8: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x800BE7EC: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x800BE7F0: jr          $ra
    // 0x800BE7F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x800BE7F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_800BE7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE7F8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800BE7FC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800BE800: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BE804: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BE808: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800BE80C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BE810: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800BE814: addiu       $t7, $t7, -0x7A50
    ctx->r15 = ADD32(ctx->r15, -0X7A50);
    // 0x800BE818: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BE81C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800BE820: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x800BE824: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BE828: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BE82C: beql        $t8, $zero, L_800BE9A0
    if (ctx->r24 == 0) {
        // 0x800BE830: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800BE9A0;
    }
    goto skip_0;
    // 0x800BE830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800BE834: lbu         $t9, 0x2B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2B);
    // 0x800BE838: beql        $t9, $zero, L_800BE9A0
    if (ctx->r25 == 0) {
        // 0x800BE83C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800BE9A0;
    }
    goto skip_1;
    // 0x800BE83C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800BE840: jal         0x800BF774
    // 0x800BE844: nop

    func_800BF774(rdram, ctx);
        goto after_0;
    // 0x800BE844: nop

    after_0:
    // 0x800BE848: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE84C: jal         0x800DF738
    // 0x800BE850: lw          $a0, -0x78D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78D8);
    func_800DF738(rdram, ctx);
        goto after_1;
    // 0x800BE850: lw          $a0, -0x78D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78D8);
    after_1:
    // 0x800BE854: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800BE858: addiu       $t0, $t0, -0x7A50
    ctx->r8 = ADD32(ctx->r8, -0X7A50);
    // 0x800BE85C: bne         $s0, $t0, L_800BE86C
    if (ctx->r16 != ctx->r8) {
        // 0x800BE860: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800BE86C;
    }
    // 0x800BE860: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE864: jal         0x800DF83C
    // 0x800BE868: lw          $a0, -0x78D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78D4);
    func_800DF83C(rdram, ctx);
        goto after_2;
    // 0x800BE868: lw          $a0, -0x78D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78D4);
    after_2:
L_800BE86C:
    // 0x800BE86C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800BE870: addiu       $t1, $t1, -0x7A50
    ctx->r9 = ADD32(ctx->r9, -0X7A50);
    // 0x800BE874: beql        $s0, $t1, L_800BE888
    if (ctx->r16 == ctx->r9) {
        // 0x800BE878: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800BE888;
    }
    goto skip_2;
    // 0x800BE878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x800BE87C: b           L_800BE888
    // 0x800BE880: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_800BE888;
    // 0x800BE880: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800BE884: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800BE888:
    // 0x800BE888: jal         0x800DF830
    // 0x800BE88C: nop

    func_800DF830(rdram, ctx);
        goto after_3;
    // 0x800BE88C: nop

    after_3:
    // 0x800BE890: lbu         $a0, 0x28($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X28);
    // 0x800BE894: beq         $a0, $zero, L_800BE8A4
    if (ctx->r4 == 0) {
        // 0x800BE898: nop
    
            goto L_800BE8A4;
    }
    // 0x800BE898: nop

    // 0x800BE89C: jal         0x800DF7E8
    // 0x800BE8A0: nop

    func_800DF7E8(rdram, ctx);
        goto after_4;
    // 0x800BE8A0: nop

    after_4:
L_800BE8A4:
    // 0x800BE8A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BE8A8: addiu       $v0, $v0, -0x7A50
    ctx->r2 = ADD32(ctx->r2, -0X7A50);
    // 0x800BE8AC: lbu         $a0, 0x85($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X85);
    // 0x800BE8B0: lbu         $a1, 0x86($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X86);
    // 0x800BE8B4: lbu         $a2, 0x87($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X87);
    // 0x800BE8B8: jal         0x800DF5D8
    // 0x800BE8BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_800DF5D8(rdram, ctx);
        goto after_5;
    // 0x800BE8BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x800BE8C0: jal         0x800DF7DC
    // 0x800BE8C4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_800DF7DC(rdram, ctx);
        goto after_6;
    // 0x800BE8C4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_6:
    // 0x800BE8C8: lbu         $t2, 0x29($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X29);
    // 0x800BE8CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800BE8D0: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x800BE8D4: jal         0x800DF818
    // 0x800BE8D8: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    func_800DF818(rdram, ctx);
        goto after_7;
    // 0x800BE8D8: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    after_7:
    // 0x800BE8DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800BE8E0: jal         0x800DF428
    // 0x800BE8E4: lwc1        $f12, 0x57B0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X57B0);
    func_800DF428(rdram, ctx);
        goto after_8;
    // 0x800BE8E4: lwc1        $f12, 0x57B0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X57B0);
    after_8:
    // 0x800BE8E8: jal         0x800DF440
    // 0x800BE8EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF440(rdram, ctx);
        goto after_9;
    // 0x800BE8EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x800BE8F0: jal         0x800DF4B0
    // 0x800BE8F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DF4B0(rdram, ctx);
        goto after_10;
    // 0x800BE8F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x800BE8F8: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x800BE8FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800BE900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE904: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800BE908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BE90C: jal         0x800DE448
    // 0x800BE910: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800DE448(rdram, ctx);
        goto after_11;
    // 0x800BE910: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_11:
    // 0x800BE914: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x800BE918: beql        $a0, $zero, L_800BE93C
    if (ctx->r4 == 0) {
        // 0x800BE91C: lw          $t9, 0x14($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X14);
            goto L_800BE93C;
    }
    goto skip_3;
    // 0x800BE91C: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    skip_3:
    // 0x800BE920: lbu         $t6, 0x29($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X29);
    // 0x800BE924: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x800BE928: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BE92C: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x800BE930: jal         0x800890C8
    // 0x800BE934: lw          $a2, 0x10($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X10);
    _vpmodule_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x800BE934: lw          $a2, 0x10($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X10);
    after_12:
    // 0x800BE938: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
L_800BE93C:
    // 0x800BE93C: beql        $t9, $zero, L_800BE9A0
    if (ctx->r25 == 0) {
        // 0x800BE940: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800BE9A0;
    }
    goto skip_4;
    // 0x800BE940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x800BE944: jal         0x800EA340
    // 0x800BE948: nop

    func_800EA340(rdram, ctx);
        goto after_13;
    // 0x800BE948: nop

    after_13:
    // 0x800BE94C: beql        $v0, $zero, L_800BE9A0
    if (ctx->r2 == 0) {
        // 0x800BE950: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800BE9A0;
    }
    goto skip_5;
    // 0x800BE950: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x800BE954: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800BE958: beql        $a0, $zero, L_800BE97C
    if (ctx->r4 == 0) {
        // 0x800BE95C: lbu         $t3, 0x29($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X29);
            goto L_800BE97C;
    }
    goto skip_6;
    // 0x800BE95C: lbu         $t3, 0x29($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X29);
    skip_6:
    // 0x800BE960: lbu         $t0, 0x29($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X29);
    // 0x800BE964: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800BE968: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x800BE96C: jal         0x80088690
    // 0x800BE970: lw          $a1, 0x10($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X10);
    _glid_entrypoint_6(rdram, ctx);
        goto after_14;
    // 0x800BE970: lw          $a1, 0x10($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X10);
    after_14:
    // 0x800BE974: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800BE978: lbu         $t3, 0x29($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X29);
L_800BE97C:
    // 0x800BE97C: xori        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 ^ 0X1;
    // 0x800BE980: beq         $a0, $zero, L_800BE99C
    if (ctx->r4 == 0) {
        // 0x800BE984: sb          $t4, 0x29($s0)
        MEM_B(0X29, ctx->r16) = ctx->r12;
            goto L_800BE99C;
    }
    // 0x800BE984: sb          $t4, 0x29($s0)
    MEM_B(0X29, ctx->r16) = ctx->r12;
    // 0x800BE988: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800BE98C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BE990: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x800BE994: jal         0x80088688
    // 0x800BE998: lw          $a1, 0x10($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X10);
    _glid_entrypoint_5(rdram, ctx);
        goto after_15;
    // 0x800BE998: lw          $a1, 0x10($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X10);
    after_15:
L_800BE99C:
    // 0x800BE99C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800BE9A0:
    // 0x800BE9A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800BE9A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BE9A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BE9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE9B0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE9B4: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BE9B8: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x800BE9BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BE9C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE9C4: beql        $t6, $zero, L_800BE9D8
    if (ctx->r14 == 0) {
        // 0x800BE9C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BE9D8;
    }
    goto skip_0;
    // 0x800BE9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BE9CC: jal         0x80087F88
    // 0x800BE9D0: nop

    _gcmapsects_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x800BE9D0: nop

    after_0:
    // 0x800BE9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BE9D8:
    // 0x800BE9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BE9DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BE9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE9E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BE9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE9EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BE9F0: jal         0x800BE7F8
    // 0x800BE9F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800BE7F8(rdram, ctx);
        goto after_0;
    // 0x800BE9F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800BE9F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BE9FC: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BEA00: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x800BEA04: beql        $t6, $zero, L_800BEA18
    if (ctx->r14 == 0) {
        // 0x800BEA08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BEA18;
    }
    goto skip_0;
    // 0x800BEA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BEA0C: jal         0x80087F90
    // 0x800BEA10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _gcmapsects_entrypoint_18(rdram, ctx);
        goto after_1;
    // 0x800BEA10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800BEA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BEA18:
    // 0x800BEA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BEA1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEA24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BEA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BEA2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BEA30: jal         0x800BE7F8
    // 0x800BEA34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BE7F8(rdram, ctx);
        goto after_0;
    // 0x800BEA34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800BEA38: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BEA3C: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BEA40: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x800BEA44: beql        $t6, $zero, L_800BEA58
    if (ctx->r14 == 0) {
        // 0x800BEA48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BEA58;
    }
    goto skip_0;
    // 0x800BEA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BEA4C: jal         0x80087F98
    // 0x800BEA50: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _gcmapsects_entrypoint_19(rdram, ctx);
        goto after_1;
    // 0x800BEA50: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800BEA54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BEA58:
    // 0x800BEA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BEA5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEA64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BEA68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BEA6C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800BEA70: jal         0x800BE600
    // 0x800BEA74: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    func_800BE600(rdram, ctx);
        goto after_0;
    // 0x800BEA74: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    after_0:
    // 0x800BEA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BEA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BEA80: jr          $ra
    // 0x800BEA84: nop

    return;
    // 0x800BEA84: nop

;}
RECOMP_FUNC void func_800BEA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEA88: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BEA8C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEA90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEA94: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEA98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEA9C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEAA0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800BEAA4: jr          $ra
    // 0x800BEAA8: lw          $v0, -0x7A4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7A4C);
    return;
    // 0x800BEAA8: lw          $v0, -0x7A4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7A4C);
;}
RECOMP_FUNC void func_800BEAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEAAC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800BEAB0: lbu         $t6, -0x79D9($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X79D9);
    // 0x800BEAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BEAB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BEABC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800BEAC0: beq         $t6, $zero, L_800BEAE0
    if (ctx->r14 == 0) {
        // 0x800BEAC4: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800BEAE0;
    }
    // 0x800BEAC4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800BEAC8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BEACC: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BEAD0: jal         0x80087F30
    // 0x800BEAD4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    _gcmapsects_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800BEAD4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x800BEAD8: b           L_800BEAE8
    // 0x800BEADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800BEAE8;
    // 0x800BEADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BEAE0:
    // 0x800BEAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BEAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BEAE8:
    // 0x800BEAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BEAEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEAF4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BEAF8: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BEAFC: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x800BEB00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BEB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BEB08: beql        $t6, $zero, L_800BEB1C
    if (ctx->r14 == 0) {
        // 0x800BEB0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BEB1C;
    }
    goto skip_0;
    // 0x800BEB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BEB10: jal         0x80087F40
    // 0x800BEB14: nop

    _gcmapsects_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x800BEB14: nop

    after_0:
    // 0x800BEB18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BEB1C:
    // 0x800BEB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BEB20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEB28: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BEB2C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEB30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEB34: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEB38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEB3C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEB40: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800BEB44: jr          $ra
    // 0x800BEB48: lw          $v0, -0x7A44($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7A44);
    return;
    // 0x800BEB48: lw          $v0, -0x7A44($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7A44);
;}
RECOMP_FUNC void func_800BEB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEB4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEB50: jr          $ra
    // 0x800BEB54: lw          $v0, -0x78A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78A0);
    return;
    // 0x800BEB54: lw          $v0, -0x78A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78A0);
;}
RECOMP_FUNC void func_800BEB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEB58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800BEB5C: jr          $ra
    // 0x800BEB60: sw          $a0, -0x78A0($at)
    MEM_W(-0X78A0, ctx->r1) = ctx->r4;
    return;
    // 0x800BEB60: sw          $a0, -0x78A0($at)
    MEM_W(-0X78A0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800BEB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEB64: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BEB68: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEB6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEB70: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEB74: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BEB78: addiu       $t7, $t7, -0x7A50
    ctx->r15 = ADD32(ctx->r15, -0X7A50);
    // 0x800BEB7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEB80: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800BEB84: lbu         $t8, 0x29($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X29);
    // 0x800BEB88: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BEB8C: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x800BEB90: jr          $ra
    // 0x800BEB94: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    return;
    // 0x800BEB94: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
;}
RECOMP_FUNC void func_800BEB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEB98: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BEB9C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEBA0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEBA4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEBA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEBAC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BEBB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BEBB4: lw          $t7, -0x7A3C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7A3C);
    // 0x800BEBB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800BEBBC: beq         $t7, $zero, L_800BEBCC
    if (ctx->r15 == 0) {
            // 0x800BEBC0: nop

    func_800BEBCC(rdram, ctx);
    return;
    }
    // 0x800BEBC0: nop

    // 0x800BEBC4: jr          $ra
    // 0x800BEBC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800BEBC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800BEBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEBCC: jr          $ra
    // 0x800BEBD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800BEBD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800BEBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEBD4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BEBD8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEBDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEBE0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEBE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BEBE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEBEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BEBF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BEBF4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800BEBF8: jal         0x800B27A0
    // 0x800BEBFC: lw          $a0, -0x7A44($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7A44);
    func_800B27A0(rdram, ctx);
        goto after_0;
    // 0x800BEBFC: lw          $a0, -0x7A44($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7A44);
    after_0:
    // 0x800BEC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BEC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BEC08: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEC10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEC14: jr          $ra
    // 0x800BEC18: lw          $v0, -0x78D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78D8);
    return;
    // 0x800BEC18: lw          $v0, -0x78D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78D8);
;}
RECOMP_FUNC void func_800BEC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEC1C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEC20: jr          $ra
    // 0x800BEC24: lw          $v0, -0x78D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78D4);
    return;
    // 0x800BEC24: lw          $v0, -0x78D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78D4);
;}
RECOMP_FUNC void func_800BEC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEC28: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BEC2C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEC30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEC34: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BEC38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BEC3C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEC40: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800BEC44: jr          $ra
    // 0x800BEC48: lw          $v0, -0x7A30($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7A30);
    return;
    // 0x800BEC48: lw          $v0, -0x7A30($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7A30);
;}
RECOMP_FUNC void func_800BEC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEC4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BEC50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BEC54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800BEC58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BEC5C: jal         0x800BECE0
    // 0x800BEC60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800BECE0(rdram, ctx);
        goto after_0;
    // 0x800BEC60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800BEC64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800BEC68: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEC6C: jal         0x800E37E8
    // 0x800BEC70: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_800E37E8(rdram, ctx);
        goto after_1;
    // 0x800BEC70: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800BEC74: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BEC78: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BEC7C: addiu       $a1, $a1, -0x7A4D
    ctx->r5 = ADD32(ctx->r5, -0X7A4D);
    // 0x800BEC80: addiu       $v0, $v0, -0x7A50
    ctx->r2 = ADD32(ctx->r2, -0X7A50);
    // 0x800BEC84: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800BEC88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_800BEC8C:
    // 0x800BEC8C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800BEC90: lb          $t7, 0x5E($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X5E);
    // 0x800BEC94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800BEC98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800BEC9C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800BECA0: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x800BECA4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800BECA8: lb          $t0, 0x60($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X60);
    // 0x800BECAC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800BECB0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800BECB4: bne         $v0, $a1, L_800BEC8C
    if (ctx->r2 != ctx->r5) {
        // 0x800BECB8: sw          $t1, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r9;
            goto L_800BEC8C;
    }
    // 0x800BECB8: sw          $t1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r9;
    // 0x800BECBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BECC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BECC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BECCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BECCC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800BECD0: lw          $t6, -0x78CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78CC);
    // 0x800BECD4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800BECD8: jr          $ra
    // 0x800BECDC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    return;
    // 0x800BECDC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
;}
RECOMP_FUNC void func_800BECE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BECE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BECE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BECE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BECEC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BECF0: jal         0x800EE830
    // 0x800BECF4: addiu       $a1, $a1, -0x78D0
    ctx->r5 = ADD32(ctx->r5, -0X78D0);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800BECF4: addiu       $a1, $a1, -0x78D0
    ctx->r5 = ADD32(ctx->r5, -0X78D0);
    after_0:
    // 0x800BECF8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BECFC: addiu       $a1, $a1, -0x78C4
    ctx->r5 = ADD32(ctx->r5, -0X78C4);
    // 0x800BED00: jal         0x800EE830
    // 0x800BED04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EE830(rdram, ctx);
        goto after_1;
    // 0x800BED04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800BED08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BED0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BED10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BED18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BED18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BED1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800BED20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BED24: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BED28: jal         0x800EE830
    // 0x800BED2C: addiu       $a1, $a1, -0x78B8
    ctx->r5 = ADD32(ctx->r5, -0X78B8);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800BED2C: addiu       $a1, $a1, -0x78B8
    ctx->r5 = ADD32(ctx->r5, -0X78B8);
    after_0:
    // 0x800BED30: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BED34: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    // 0x800BED38: jal         0x800EE830
    // 0x800BED3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EE830(rdram, ctx);
        goto after_1;
    // 0x800BED3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800BED40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BED44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BED48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BED50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BED50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BED54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BED58: jal         0x800BE600
    // 0x800BED5C: addiu       $a1, $zero, 0x1F00
    ctx->r5 = ADD32(0, 0X1F00);
    func_800BE600(rdram, ctx);
        goto after_0;
    // 0x800BED5C: addiu       $a1, $zero, 0x1F00
    ctx->r5 = ADD32(0, 0X1F00);
    after_0:
    // 0x800BED60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BED64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BED68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BED70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800BED74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800BED78: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BED7C: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BED80: lbu         $t6, 0x2A($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2A);
    // 0x800BED84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BED88: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800BED8C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800BED90: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800BED94: beq         $t6, $zero, L_800BEDF4
    if (ctx->r14 == 0) {
        // 0x800BED98: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_800BEDF4;
    }
    // 0x800BED98: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800BED9C: jal         0x800EFD24
    // 0x800BEDA0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x800BEDA0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x800BEDA4: lbu         $t7, 0x29($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X29);
    // 0x800BEDA8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x800BEDAC: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800BEDB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BEDB4: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x800BEDB8: lw          $a1, 0x10($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X10);
    // 0x800BEDBC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800BEDC0: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x800BEDC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800BEDC8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800BEDCC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800BEDD0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800BEDD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800BEDD8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800BEDDC: jal         0x800AD2C8
    // 0x800BEDE0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_800AD2C8(rdram, ctx);
        goto after_1;
    // 0x800BEDE0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800BEDE4: beql        $v0, $zero, L_800BEDF8
    if (ctx->r2 == 0) {
        // 0x800BEDE8: lbu         $t3, 0x77($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X77);
            goto L_800BEDF8;
    }
    goto skip_0;
    // 0x800BEDE8: lbu         $t3, 0x77($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X77);
    skip_0:
    // 0x800BEDEC: b           L_800BEE30
    // 0x800BEDF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800BEE30;
    // 0x800BEDF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BEDF4:
    // 0x800BEDF4: lbu         $t3, 0x77($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X77);
L_800BEDF8:
    // 0x800BEDF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BEDFC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800BEE00: beq         $t3, $zero, L_800BEE2C
    if (ctx->r11 == 0) {
        // 0x800BEE04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BEE2C;
    }
    // 0x800BEE04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BEE08: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800BEE0C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800BEE10: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800BEE14: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800BEE18: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800BEE1C: jal         0x80087FA0
    // 0x800BEE20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    _gcmapsects_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x800BEE20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x800BEE24: b           L_800BEE30
    // 0x800BEE28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800BEE30;
    // 0x800BEE28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BEE2C:
    // 0x800BEE2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BEE30:
    // 0x800BEE30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800BEE34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800BEE38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEE40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800BEE44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800BEE48: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BEE4C: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BEE50: lbu         $t6, 0x2A($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2A);
    // 0x800BEE54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BEE58: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800BEE5C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800BEE60: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800BEE64: beq         $t6, $zero, L_800BEEBC
    if (ctx->r14 == 0) {
        // 0x800BEE68: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_800BEEBC;
    }
    // 0x800BEE68: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800BEE6C: jal         0x800EFD24
    // 0x800BEE70: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x800BEE70: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800BEE74: lbu         $t7, 0x29($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X29);
    // 0x800BEE78: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800BEE7C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800BEE80: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BEE84: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x800BEE88: lw          $a1, 0x10($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X10);
    // 0x800BEE8C: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x800BEE90: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800BEE94: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800BEE98: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800BEE9C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800BEEA0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800BEEA4: jal         0x800AD894
    // 0x800BEEA8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_800AD894(rdram, ctx);
        goto after_1;
    // 0x800BEEA8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800BEEAC: beql        $v0, $zero, L_800BEEC0
    if (ctx->r2 == 0) {
        // 0x800BEEB0: lbu         $t2, 0x77($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X77);
            goto L_800BEEC0;
    }
    goto skip_0;
    // 0x800BEEB0: lbu         $t2, 0x77($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X77);
    skip_0:
    // 0x800BEEB4: b           L_800BEEEC
    // 0x800BEEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800BEEEC;
    // 0x800BEEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800BEEBC:
    // 0x800BEEBC: lbu         $t2, 0x77($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X77);
L_800BEEC0:
    // 0x800BEEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BEEC4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800BEEC8: beq         $t2, $zero, L_800BEEEC
    if (ctx->r10 == 0) {
        // 0x800BEECC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BEEEC;
    }
    // 0x800BEECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BEED0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800BEED4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800BEED8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800BEEDC: jal         0x80087FA8
    // 0x800BEEE0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    _gcmapsects_entrypoint_21(rdram, ctx);
        goto after_2;
    // 0x800BEEE0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x800BEEE4: b           L_800BEEF0
    // 0x800BEEE8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800BEEF0;
    // 0x800BEEE8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BEEEC:
    // 0x800BEEEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800BEEF0:
    // 0x800BEEF0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800BEEF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800BEEF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BEF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEF00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BEF04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800BEF08: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BEF0C: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BEF10: lbu         $t6, 0x56($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X56);
    // 0x800BEF14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BEF18: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800BEF1C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800BEF20: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800BEF24: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800BEF28: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800BEF2C: beq         $t6, $zero, L_800BF044
    if (ctx->r14 == 0) {
        // 0x800BEF30: sw          $zero, 0x1B0($s0)
        MEM_W(0X1B0, ctx->r16) = 0;
            goto L_800BF044;
    }
    // 0x800BEF30: sw          $zero, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = 0;
    // 0x800BEF34: andi        $t8, $a3, 0x1F00
    ctx->r24 = ctx->r7 & 0X1F00;
    // 0x800BEF38: addiu       $at, $zero, 0x1F00
    ctx->r1 = ADD32(0, 0X1F00);
    // 0x800BEF3C: beq         $t8, $at, L_800BEFAC
    if (ctx->r24 == ctx->r1) {
        // 0x800BEF40: or          $t7, $a3, $zero
        ctx->r15 = ctx->r7 | 0;
            goto L_800BEFAC;
    }
    // 0x800BEF40: or          $t7, $a3, $zero
    ctx->r15 = ctx->r7 | 0;
    // 0x800BEF44: lbu         $t9, 0x77($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X77);
    // 0x800BEF48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BEF4C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800BEF50: beq         $t9, $zero, L_800BEF68
    if (ctx->r25 == 0) {
        // 0x800BEF54: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_800BEF68;
    }
    // 0x800BEF54: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800BEF58: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800BEF5C: jal         0x80087FB0
    // 0x800BEF60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    _gcmapsects_entrypoint_22(rdram, ctx);
        goto after_0;
    // 0x800BEF60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x800BEF64: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_800BEF68:
    // 0x800BEF68: bnel        $t0, $zero, L_800BEFB0
    if (ctx->r8 != 0) {
        // 0x800BEF6C: lbu         $t8, 0x55($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X55);
            goto L_800BEFB0;
    }
    goto skip_0;
    // 0x800BEF6C: lbu         $t8, 0x55($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X55);
    skip_0:
    // 0x800BEF70: lbu         $t1, 0x2A($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2A);
    // 0x800BEF74: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800BEF78: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800BEF7C: beq         $t1, $zero, L_800BEFAC
    if (ctx->r9 == 0) {
        // 0x800BEF80: lw          $t5, 0x38($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X38);
            goto L_800BEFAC;
    }
    // 0x800BEF80: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800BEF84: lbu         $t2, 0x29($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X29);
    // 0x800BEF88: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800BEF8C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800BEF90: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800BEF94: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x800BEF98: lw          $a1, 0x10($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X10);
    // 0x800BEF9C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800BEFA0: jal         0x800AB0BC
    // 0x800BEFA4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800AB0BC(rdram, ctx);
        goto after_1;
    // 0x800BEFA4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x800BEFA8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_800BEFAC:
    // 0x800BEFAC: lbu         $t8, 0x55($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X55);
L_800BEFB0:
    // 0x800BEFB0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800BEFB4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800BEFB8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BEFBC: addu        $t7, $s0, $t9
    ctx->r15 = ADD32(ctx->r16, ctx->r25);
    // 0x800BEFC0: lw          $a1, 0x3C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X3C);
    // 0x800BEFC4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800BEFC8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x800BEFCC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800BEFD0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800BEFD4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800BEFD8: jal         0x800AB0BC
    // 0x800BEFDC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_800AB0BC(rdram, ctx);
        goto after_2;
    // 0x800BEFDC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_2:
    // 0x800BEFE0: beq         $v0, $zero, L_800BEFF4
    if (ctx->r2 == 0) {
        // 0x800BEFE4: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_800BEFF4;
    }
    // 0x800BEFE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BEFE8: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x800BEFEC: b           L_800BF0CC
    // 0x800BEFF0: sw          $t3, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r11;
        goto L_800BF0CC;
    // 0x800BEFF0: sw          $t3, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r11;
L_800BEFF4:
    // 0x800BEFF4: lbu         $t4, 0x77($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X77);
    // 0x800BEFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BEFFC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800BF000: beq         $t4, $zero, L_800BF02C
    if (ctx->r12 == 0) {
        // 0x800BF004: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_800BF02C;
    }
    // 0x800BF004: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800BF008: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF00C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800BF010: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800BF014: jal         0x80087FB0
    // 0x800BF018: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    _gcmapsects_entrypoint_22(rdram, ctx);
        goto after_3;
    // 0x800BF018: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x800BF01C: beq         $v0, $zero, L_800BF02C
    if (ctx->r2 == 0) {
        // 0x800BF020: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_800BF02C;
    }
    // 0x800BF020: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF024: b           L_800BF0D0
    // 0x800BF028: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800BF0D0;
    // 0x800BF028: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800BF02C:
    // 0x800BF02C: beq         $t0, $zero, L_800BF03C
    if (ctx->r8 == 0) {
        // 0x800BF030: nop
    
            goto L_800BF03C;
    }
    // 0x800BF030: nop

    // 0x800BF034: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x800BF038: sw          $t6, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r14;
L_800BF03C:
    // 0x800BF03C: b           L_800BF0CC
    // 0x800BF040: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_800BF0CC;
    // 0x800BF040: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_800BF044:
    // 0x800BF044: lbu         $t8, 0x77($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X77);
    // 0x800BF048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BF04C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800BF050: beq         $t8, $zero, L_800BF06C
    if (ctx->r24 == 0) {
        // 0x800BF054: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_800BF06C;
    }
    // 0x800BF054: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800BF058: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF05C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800BF060: jal         0x80087FB0
    // 0x800BF064: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    _gcmapsects_entrypoint_22(rdram, ctx);
        goto after_4;
    // 0x800BF064: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x800BF068: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_800BF06C:
    // 0x800BF06C: bne         $t0, $zero, L_800BF0B0
    if (ctx->r8 != 0) {
        // 0x800BF070: nop
    
            goto L_800BF0B0;
    }
    // 0x800BF070: nop

    // 0x800BF074: lbu         $t7, 0x2A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2A);
    // 0x800BF078: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800BF07C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800BF080: beq         $t7, $zero, L_800BF0B0
    if (ctx->r15 == 0) {
        // 0x800BF084: lw          $t4, 0x38($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X38);
            goto L_800BF0B0;
    }
    // 0x800BF084: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800BF088: lbu         $t1, 0x29($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X29);
    // 0x800BF08C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF090: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800BF094: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BF098: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x800BF09C: lw          $a1, 0x10($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X10);
    // 0x800BF0A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800BF0A4: jal         0x800AB0BC
    // 0x800BF0A8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800AB0BC(rdram, ctx);
        goto after_5;
    // 0x800BF0A8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_5:
    // 0x800BF0AC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_800BF0B0:
    // 0x800BF0B0: beql        $t0, $zero, L_800BF0CC
    if (ctx->r8 == 0) {
        // 0x800BF0B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BF0CC;
    }
    goto skip_1;
    // 0x800BF0B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x800BF0B8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x800BF0BC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800BF0C0: b           L_800BF0CC
    // 0x800BF0C4: sw          $t6, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r14;
        goto L_800BF0CC;
    // 0x800BF0C4: sw          $t6, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r14;
    // 0x800BF0C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BF0CC:
    // 0x800BF0CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800BF0D0:
    // 0x800BF0D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800BF0D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BF0D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF0E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800BF0E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800BF0E8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BF0EC: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BF0F0: lbu         $t6, 0x77($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X77);
    // 0x800BF0F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BF0F8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800BF0FC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800BF100: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800BF104: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800BF108: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800BF10C: beq         $t6, $zero, L_800BF144
    if (ctx->r14 == 0) {
        // 0x800BF110: sw          $zero, 0x1B0($s0)
        MEM_W(0X1B0, ctx->r16) = 0;
            goto L_800BF144;
    }
    // 0x800BF110: sw          $zero, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = 0;
    // 0x800BF114: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800BF118: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800BF11C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800BF120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BF124: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800BF128: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF12C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800BF130: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800BF134: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800BF138: jal         0x80087FB8
    // 0x800BF13C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    _gcmapsects_entrypoint_23(rdram, ctx);
        goto after_0;
    // 0x800BF13C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x800BF140: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800BF144:
    // 0x800BF144: bne         $v1, $zero, L_800BF198
    if (ctx->r3 != 0) {
        // 0x800BF148: nop
    
            goto L_800BF198;
    }
    // 0x800BF148: nop

    // 0x800BF14C: lbu         $t0, 0x2A($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2A);
    // 0x800BF150: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800BF154: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF158: beq         $t0, $zero, L_800BF198
    if (ctx->r8 == 0) {
        // 0x800BF15C: lwc1        $f4, 0x40($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
            goto L_800BF198;
    }
    // 0x800BF15C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800BF160: lbu         $t1, 0x29($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X29);
    // 0x800BF164: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800BF168: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x800BF16C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BF170: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x800BF174: lw          $a1, 0x10($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X10);
    // 0x800BF178: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800BF17C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800BF180: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800BF184: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800BF188: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800BF18C: jal         0x800AC638
    // 0x800BF190: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_800AC638(rdram, ctx);
        goto after_1;
    // 0x800BF190: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_1:
    // 0x800BF194: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800BF198:
    // 0x800BF198: beql        $v1, $zero, L_800BF1AC
    if (ctx->r3 == 0) {
        // 0x800BF19C: lbu         $t8, 0x56($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X56);
            goto L_800BF1AC;
    }
    goto skip_0;
    // 0x800BF19C: lbu         $t8, 0x56($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X56);
    skip_0:
    // 0x800BF1A0: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x800BF1A4: sw          $t7, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r15;
    // 0x800BF1A8: lbu         $t8, 0x56($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X56);
L_800BF1AC:
    // 0x800BF1AC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800BF1B0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF1B4: bne         $t8, $zero, L_800BF1C4
    if (ctx->r24 != 0) {
        // 0x800BF1B8: lwc1        $f6, 0x40($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
            goto L_800BF1C4;
    }
    // 0x800BF1B8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800BF1BC: b           L_800BF214
    // 0x800BF1C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800BF214;
    // 0x800BF1C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800BF1C4:
    // 0x800BF1C4: lbu         $t9, 0x55($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X55);
    // 0x800BF1C8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800BF1CC: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x800BF1D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BF1D4: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x800BF1D8: lw          $a1, 0x3C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X3C);
    // 0x800BF1DC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800BF1E0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x800BF1E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800BF1E8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x800BF1EC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800BF1F0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800BF1F4: jal         0x800AC638
    // 0x800BF1F8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_800AC638(rdram, ctx);
        goto after_2;
    // 0x800BF1F8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_2:
    // 0x800BF1FC: beq         $v0, $zero, L_800BF210
    if (ctx->r2 == 0) {
        // 0x800BF200: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_800BF210;
    }
    // 0x800BF200: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800BF204: lw          $t5, 0x38($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X38);
    // 0x800BF208: b           L_800BF214
    // 0x800BF20C: sw          $t5, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r13;
        goto L_800BF214;
    // 0x800BF20C: sw          $t5, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r13;
L_800BF210:
    // 0x800BF210: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800BF214:
    // 0x800BF214: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF218: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800BF21C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800BF220: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF228: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BF22C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800BF230: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BF234: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BF238: lbu         $t6, 0x77($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X77);
    // 0x800BF23C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BF240: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800BF244: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800BF248: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800BF24C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800BF250: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800BF254: beq         $t6, $zero, L_800BF27C
    if (ctx->r14 == 0) {
        // 0x800BF258: sw          $zero, 0x1B0($s0)
        MEM_W(0X1B0, ctx->r16) = 0;
            goto L_800BF27C;
    }
    // 0x800BF258: sw          $zero, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = 0;
    // 0x800BF25C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BF264: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800BF268: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800BF26C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800BF270: jal         0x80087FD0
    // 0x800BF274: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    _gcmapsects_entrypoint_26(rdram, ctx);
        goto after_0;
    // 0x800BF274: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x800BF278: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800BF27C:
    // 0x800BF27C: bne         $v1, $zero, L_800BF2C0
    if (ctx->r3 != 0) {
        // 0x800BF280: nop
    
            goto L_800BF2C0;
    }
    // 0x800BF280: nop

    // 0x800BF284: lbu         $t8, 0x2A($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2A);
    // 0x800BF288: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800BF28C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800BF290: beq         $t8, $zero, L_800BF2C0
    if (ctx->r24 == 0) {
        // 0x800BF294: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_800BF2C0;
    }
    // 0x800BF294: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800BF298: lbu         $t9, 0x29($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X29);
    // 0x800BF29C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF2A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800BF2A4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BF2A8: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x800BF2AC: lw          $a1, 0x10($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X10);
    // 0x800BF2B0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800BF2B4: jal         0x800AC978
    // 0x800BF2B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800AC978(rdram, ctx);
        goto after_1;
    // 0x800BF2B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x800BF2BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800BF2C0:
    // 0x800BF2C0: beql        $v1, $zero, L_800BF2D4
    if (ctx->r3 == 0) {
        // 0x800BF2C4: lbu         $t5, 0x56($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X56);
            goto L_800BF2D4;
    }
    goto skip_0;
    // 0x800BF2C4: lbu         $t5, 0x56($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X56);
    skip_0:
    // 0x800BF2C8: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x800BF2CC: sw          $t4, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r12;
    // 0x800BF2D0: lbu         $t5, 0x56($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X56);
L_800BF2D4:
    // 0x800BF2D4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800BF2D8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800BF2DC: bne         $t5, $zero, L_800BF2EC
    if (ctx->r13 != 0) {
        // 0x800BF2E0: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_800BF2EC;
    }
    // 0x800BF2E0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800BF2E4: b           L_800BF32C
    // 0x800BF2E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800BF32C;
    // 0x800BF2E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800BF2EC:
    // 0x800BF2EC: lbu         $t6, 0x55($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X55);
    // 0x800BF2F0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800BF2F4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x800BF2F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BF2FC: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x800BF300: lw          $a1, 0x3C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X3C);
    // 0x800BF304: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x800BF308: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800BF30C: jal         0x800AC978
    // 0x800BF310: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800AC978(rdram, ctx);
        goto after_2;
    // 0x800BF310: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x800BF314: beq         $v0, $zero, L_800BF328
    if (ctx->r2 == 0) {
        // 0x800BF318: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_800BF328;
    }
    // 0x800BF318: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF31C: lw          $t1, 0x38($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X38);
    // 0x800BF320: b           L_800BF32C
    // 0x800BF324: sw          $t1, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r9;
        goto L_800BF32C;
    // 0x800BF324: sw          $t1, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->r9;
L_800BF328:
    // 0x800BF328: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800BF32C:
    // 0x800BF32C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BF330: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800BF334: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BF338: jr          $ra
    // 0x800BF33C: nop

    return;
    // 0x800BF33C: nop

;}
RECOMP_FUNC void func_800BF340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF340: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800BF344: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BF348: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x800BF34C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BF350: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800BF354: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800BF358: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800BF35C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800BF360: jal         0x800EE7F8
    // 0x800BF364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800BF364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800BF368: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800BF36C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800BF370: jal         0x800EFB24
    // 0x800BF374: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x800BF374: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800BF378: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800BF37C: jal         0x800EF368
    // 0x800BF380: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800EF368(rdram, ctx);
        goto after_2;
    // 0x800BF380: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800BF384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BF388: jal         0x800EF04C
    // 0x800BF38C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x800BF38C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x800BF390: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800BF394: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800BF398: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800BF39C: jal         0x800BEF00
    // 0x800BF3A0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_800BEF00(rdram, ctx);
        goto after_4;
    // 0x800BF3A0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x800BF3A4: bne         $v0, $zero, L_800BF3B4
    if (ctx->r2 != 0) {
        // 0x800BF3A8: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_800BF3B4;
    }
    // 0x800BF3A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800BF3AC: b           L_800BF3D0
    // 0x800BF3B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800BF3D0;
    // 0x800BF3B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800BF3B4:
    // 0x800BF3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BF3B8: jal         0x800EF3DC
    // 0x800BF3BC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF3DC(rdram, ctx);
        goto after_5;
    // 0x800BF3BC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x800BF3C0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800BF3C4: jal         0x800EE7F8
    // 0x800BF3C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x800BF3C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800BF3CC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_800BF3D0:
    // 0x800BF3D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF3D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BF3D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800BF3DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF3E4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BF3E8: addiu       $v1, $v1, -0x7A50
    ctx->r3 = ADD32(ctx->r3, -0X7A50);
    // 0x800BF3EC: lhu         $v0, 0x5A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X5A);
    // 0x800BF3F0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800BF3F4: bnel        $t6, $zero, L_800BF410
    if (ctx->r14 != 0) {
        // 0x800BF3F8: lhu         $v0, 0x5C($v1)
        ctx->r2 = MEM_HU(ctx->r3, 0X5C);
            goto L_800BF410;
    }
    goto skip_0;
    // 0x800BF3F8: lhu         $v0, 0x5C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X5C);
    skip_0:
    // 0x800BF3FC: lbu         $v0, 0x77($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X77);
    // 0x800BF400: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800BF404: beq         $t7, $zero, L_800BF418
    if (ctx->r15 == 0) {
        // 0x800BF408: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800BF418;
    }
    // 0x800BF408: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800BF40C: lhu         $v0, 0x5C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X5C);
L_800BF410:
    // 0x800BF410: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800BF414: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800BF418:
    // 0x800BF418: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF428: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BF42C: jal         0x80088118
    // 0x800BF430: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    _gcmapDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800BF430: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    after_0:
    // 0x800BF434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF43C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF44C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BF450: jal         0x80088110
    // 0x800BF454: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    _gcmapDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800BF454: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    after_0:
    // 0x800BF458: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800BF45C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800BF460: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x800BF464: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x800BF468: addiu       $a3, $a3, -0x14B4
    ctx->r7 = ADD32(ctx->r7, -0X14B4);
    // 0x800BF46C: addiu       $a2, $a2, -0xDD8
    ctx->r6 = ADD32(ctx->r6, -0XDD8);
    // 0x800BF470: addiu       $a1, $a1, -0xF20
    ctx->r5 = ADD32(ctx->r5, -0XF20);
    // 0x800BF474: jal         0x800C6A28
    // 0x800BF478: addiu       $a0, $a0, -0x1100
    ctx->r4 = ADD32(ctx->r4, -0X1100);
    func_800C6A28(rdram, ctx);
        goto after_1;
    // 0x800BF478: addiu       $a0, $a0, -0x1100
    ctx->r4 = ADD32(ctx->r4, -0X1100);
    after_1:
    // 0x800BF47C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF484: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF48C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BF490: addiu       $v0, $v0, -0x7A50
    ctx->r2 = ADD32(ctx->r2, -0X7A50);
    // 0x800BF494: sb          $a0, 0x85($v0)
    MEM_B(0X85, ctx->r2) = ctx->r4;
    // 0x800BF498: sb          $a1, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r5;
    // 0x800BF49C: jr          $ra
    // 0x800BF4A0: sb          $a2, 0x87($v0)
    MEM_B(0X87, ctx->r2) = ctx->r6;
    return;
    // 0x800BF4A0: sb          $a2, 0x87($v0)
    MEM_B(0X87, ctx->r2) = ctx->r6;
;}
RECOMP_FUNC void func_800BF4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF4A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BF4A8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF4AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF4B0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF4B4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BF4B8: addiu       $t7, $t7, -0x7A50
    ctx->r15 = ADD32(ctx->r15, -0X7A50);
    // 0x800BF4BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF4C0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800BF4C4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800BF4C8: beq         $t8, $zero, L_800BF4D4
    if (ctx->r24 == 0) {
        // 0x800BF4CC: nop
    
            goto L_800BF4D4;
    }
    // 0x800BF4CC: nop

    // 0x800BF4D0: sb          $a1, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r5;
L_800BF4D4:
    // 0x800BF4D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF4DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BF4E0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF4E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF4E8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF4EC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BF4F0: addiu       $t7, $t7, -0x7A50
    ctx->r15 = ADD32(ctx->r15, -0X7A50);
    // 0x800BF4F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF4F8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800BF4FC: lbu         $t8, 0x2B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2B);
    // 0x800BF500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BF504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF508: beql        $a1, $t8, L_800BF534
    if (ctx->r5 == ctx->r24) {
        // 0x800BF50C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BF534;
    }
    goto skip_0;
    // 0x800BF50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BF510: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800BF514: beql        $a0, $zero, L_800BF534
    if (ctx->r4 == 0) {
        // 0x800BF518: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BF534;
    }
    goto skip_1;
    // 0x800BF518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800BF51C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800BF520: jal         0x80088F48
    // 0x800BF524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    _idworldmake_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800BF524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800BF528: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF52C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800BF530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BF534:
    // 0x800BF534: sb          $a1, 0x2B($v0)
    MEM_B(0X2B, ctx->r2) = ctx->r5;
    // 0x800BF538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BF53C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF544: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BF548: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF54C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF550: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF554: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF558: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800BF55C: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x800BF560: lw          $a3, -0x7A4C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X7A4C);
    // 0x800BF564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF56C: beql        $a3, $zero, L_800BF580
    if (ctx->r7 == 0) {
        // 0x800BF570: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BF580;
    }
    goto skip_0;
    // 0x800BF570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BF574: jal         0x80088F50
    // 0x800BF578: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    _idworldmake_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800BF578: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800BF57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BF580:
    // 0x800BF580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF584: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF58C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BF590: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BF594: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BF598: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BF59C: lw          $a0, 0x178($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X178);
    // 0x800BF5A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BF5A4: beql        $a0, $zero, L_800BF5BC
    if (ctx->r4 == 0) {
        // 0x800BF5A8: lw          $a0, 0x17C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X17C);
            goto L_800BF5BC;
    }
    goto skip_0;
    // 0x800BF5A8: lw          $a0, 0x17C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X17C);
    skip_0:
    // 0x800BF5AC: jal         0x800DC060
    // 0x800BF5B0: nop

    func_800DC060(rdram, ctx);
        goto after_0;
    // 0x800BF5B0: nop

    after_0:
    // 0x800BF5B4: sw          $v0, 0x178($s0)
    MEM_W(0X178, ctx->r16) = ctx->r2;
    // 0x800BF5B8: lw          $a0, 0x17C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X17C);
L_800BF5BC:
    // 0x800BF5BC: beql        $a0, $zero, L_800BF5D4
    if (ctx->r4 == 0) {
        // 0x800BF5C0: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_800BF5D4;
    }
    goto skip_1;
    // 0x800BF5C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x800BF5C4: jal         0x8001BAFC
    // 0x800BF5C8: nop

    defrag(rdram, ctx);
        goto after_1;
    // 0x800BF5C8: nop

    after_1:
    // 0x800BF5CC: sw          $v0, 0x17C($s0)
    MEM_W(0X17C, ctx->r16) = ctx->r2;
    // 0x800BF5D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_800BF5D4:
    // 0x800BF5D4: beql        $a0, $zero, L_800BF5EC
    if (ctx->r4 == 0) {
        // 0x800BF5D8: lw          $a0, 0x30($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X30);
            goto L_800BF5EC;
    }
    goto skip_2;
    // 0x800BF5D8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    skip_2:
    // 0x800BF5DC: jal         0x800EE5D8
    // 0x800BF5E0: nop

    func_800EE5D8(rdram, ctx);
        goto after_2;
    // 0x800BF5E0: nop

    after_2:
    // 0x800BF5E4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800BF5E8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
L_800BF5EC:
    // 0x800BF5EC: beql        $a0, $zero, L_800BF604
    if (ctx->r4 == 0) {
        // 0x800BF5F0: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_800BF604;
    }
    goto skip_3;
    // 0x800BF5F0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_3:
    // 0x800BF5F4: jal         0x800EE5D8
    // 0x800BF5F8: nop

    func_800EE5D8(rdram, ctx);
        goto after_3;
    // 0x800BF5F8: nop

    after_3:
    // 0x800BF5FC: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x800BF600: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
L_800BF604:
    // 0x800BF604: beql        $a0, $zero, L_800BF61C
    if (ctx->r4 == 0) {
        // 0x800BF608: lw          $a0, 0x48($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X48);
            goto L_800BF61C;
    }
    goto skip_4;
    // 0x800BF608: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    skip_4:
    // 0x800BF60C: jal         0x800F9F90
    // 0x800BF610: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    func_800F9F90(rdram, ctx);
        goto after_4;
    // 0x800BF610: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_4:
    // 0x800BF614: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x800BF618: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
L_800BF61C:
    // 0x800BF61C: beql        $a0, $zero, L_800BF634
    if (ctx->r4 == 0) {
        // 0x800BF620: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_800BF634;
    }
    goto skip_5;
    // 0x800BF620: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_5:
    // 0x800BF624: jal         0x800F9F90
    // 0x800BF628: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    func_800F9F90(rdram, ctx);
        goto after_5;
    // 0x800BF628: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    after_5:
    // 0x800BF62C: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x800BF630: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_800BF634:
    // 0x800BF634: beql        $a0, $zero, L_800BF64C
    if (ctx->r4 == 0) {
        // 0x800BF638: lw          $a0, 0x34($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X34);
            goto L_800BF64C;
    }
    goto skip_6;
    // 0x800BF638: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    skip_6:
    // 0x800BF63C: jal         0x8001BAFC
    // 0x800BF640: nop

    defrag(rdram, ctx);
        goto after_6;
    // 0x800BF640: nop

    after_6:
    // 0x800BF644: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x800BF648: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
L_800BF64C:
    // 0x800BF64C: beql        $a0, $zero, L_800BF664
    if (ctx->r4 == 0) {
        // 0x800BF650: lbu         $t6, 0x77($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X77);
            goto L_800BF664;
    }
    goto skip_7;
    // 0x800BF650: lbu         $t6, 0x77($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X77);
    skip_7:
    // 0x800BF654: jal         0x8001BAFC
    // 0x800BF658: nop

    defrag(rdram, ctx);
        goto after_7;
    // 0x800BF658: nop

    after_7:
    // 0x800BF65C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x800BF660: lbu         $t6, 0x77($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X77);
L_800BF664:
    // 0x800BF664: beql        $t6, $zero, L_800BF67C
    if (ctx->r14 == 0) {
        // 0x800BF668: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800BF67C;
    }
    goto skip_8;
    // 0x800BF668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x800BF66C: jal         0x8001BAFC
    // 0x800BF670: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    defrag(rdram, ctx);
        goto after_8;
    // 0x800BF670: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_8:
    // 0x800BF674: sw          $v0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r2;
    // 0x800BF678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800BF67C:
    // 0x800BF67C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BF680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BF684: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF68C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF694: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BF698: jal         0x80088100
    // 0x800BF69C: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    _gcmapDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800BF69C: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    after_0:
    // 0x800BF6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF6A4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800BF6A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800BF6AC: sb          $t6, -0x79CC($at)
    MEM_B(-0X79CC, ctx->r1) = ctx->r14;
    // 0x800BF6B0: jr          $ra
    // 0x800BF6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800BF6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800BF6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF6B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BF6BC: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BF6C0: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x800BF6C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF6C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF6CC: beq         $t6, $zero, L_800BF6F4
    if (ctx->r14 == 0) {
        // 0x800BF6D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BF6F4;
    }
    // 0x800BF6D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BF6D4: jal         0x80087FC0
    // 0x800BF6D8: nop

    _gcmapsects_entrypoint_24(rdram, ctx);
        goto after_0;
    // 0x800BF6D8: nop

    after_0:
    // 0x800BF6DC: beq         $v0, $zero, L_800BF6EC
    if (ctx->r2 == 0) {
        // 0x800BF6E0: nop
    
            goto L_800BF6EC;
    }
    // 0x800BF6E0: nop

    // 0x800BF6E4: b           L_800BF6F4
    // 0x800BF6E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800BF6F4;
    // 0x800BF6E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800BF6EC:
    // 0x800BF6EC: b           L_800BF6F4
    // 0x800BF6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800BF6F4;
    // 0x800BF6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800BF6F4:
    // 0x800BF6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF6F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF6FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF704: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BF708: jr          $ra
    // 0x800BF70C: addiu       $v0, $v0, -0x7A50
    ctx->r2 = ADD32(ctx->r2, -0X7A50);
    return;
    // 0x800BF70C: addiu       $v0, $v0, -0x7A50
    ctx->r2 = ADD32(ctx->r2, -0X7A50);
;}
RECOMP_FUNC void func_800BF710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF710: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BF714: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    // 0x800BF718: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x800BF71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF724: beql        $t6, $zero, L_800BF738
    if (ctx->r14 == 0) {
        // 0x800BF728: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BF738;
    }
    goto skip_0;
    // 0x800BF728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BF72C: jal         0x80087F48
    // 0x800BF730: nop

    _gcmapsects_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x800BF730: nop

    after_0:
    // 0x800BF734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BF738:
    // 0x800BF738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF73C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF744: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BF748: addiu       $v0, $v0, -0x7A50
    ctx->r2 = ADD32(ctx->r2, -0X7A50);
    // 0x800BF74C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BF750: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800BF754: sw          $a1, 0x88($t7)
    MEM_W(0X88, ctx->r15) = ctx->r5;
    // 0x800BF758: lw          $t8, 0x88($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X88);
    // 0x800BF75C: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800BF760: beq         $at, $zero, L_800BF76C
    if (ctx->r1 == 0) {
        // 0x800BF764: nop
    
            goto L_800BF76C;
    }
    // 0x800BF764: nop

    // 0x800BF768: sw          $a0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r4;
L_800BF76C:
    // 0x800BF76C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF774: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BF778: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800BF77C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800BF780: addiu       $s2, $s2, -0x7A50
    ctx->r18 = ADD32(ctx->r18, -0X7A50);
    // 0x800BF784: lw          $t6, 0x88($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X88);
    // 0x800BF788: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BF78C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BF790: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800BF794: blez        $t6, L_800BF7C8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800BF798: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_800BF7C8;
    }
    // 0x800BF798: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800BF79C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800BF7A0: addiu       $s1, $s1, -0x7A4C
    ctx->r17 = ADD32(ctx->r17, -0X7A4C);
    // 0x800BF7A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800BF7A8:
    // 0x800BF7A8: jal         0x800DF744
    // 0x800BF7AC: lw          $a1, 0x88($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X88);
    func_800DF744(rdram, ctx);
        goto after_0;
    // 0x800BF7AC: lw          $a1, 0x88($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X88);
    after_0:
    // 0x800BF7B0: lw          $t7, 0x88($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X88);
    // 0x800BF7B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800BF7B8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800BF7BC: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800BF7C0: beql        $at, $zero, L_800BF7A8
    if (ctx->r1 == 0) {
        // 0x800BF7C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800BF7A8;
    }
    goto skip_0;
    // 0x800BF7C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_800BF7C8:
    // 0x800BF7C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BF7CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BF7D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF7D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800BF7D8: jr          $ra
    // 0x800BF7DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BF7DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800BF7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF7E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BF7E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BF7E8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BF7EC: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BF7F0: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x800BF7F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BF7F8: beql        $t6, $zero, L_800BF838
    if (ctx->r14 == 0) {
        // 0x800BF7FC: lw          $t7, 0x34($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X34);
            goto L_800BF838;
    }
    goto skip_0;
    // 0x800BF7FC: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    skip_0:
    // 0x800BF800: jal         0x800BEB64
    // 0x800BF804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BEB64(rdram, ctx);
        goto after_0;
    // 0x800BF804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800BF808: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800BF80C: jal         0x800BEBD4
    // 0x800BF810: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BEBD4(rdram, ctx);
        goto after_1;
    // 0x800BF810: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800BF814: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800BF818: jal         0x800BEB98
    // 0x800BF81C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BEB98(rdram, ctx);
        goto after_2;
    // 0x800BF81C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800BF820: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x800BF824: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800BF828: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800BF82C: jal         0x800890A8
    // 0x800BF830: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    _rtlight_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x800BF830: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_3:
    // 0x800BF834: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
L_800BF838:
    // 0x800BF838: beql        $t7, $zero, L_800BF878
    if (ctx->r15 == 0) {
        // 0x800BF83C: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_800BF878;
    }
    goto skip_1;
    // 0x800BF83C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_1:
    // 0x800BF840: jal         0x800BEB64
    // 0x800BF844: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BEB64(rdram, ctx);
        goto after_4;
    // 0x800BF844: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800BF848: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800BF84C: jal         0x800BEBD4
    // 0x800BF850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BEBD4(rdram, ctx);
        goto after_5;
    // 0x800BF850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x800BF854: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800BF858: jal         0x800BEB98
    // 0x800BF85C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BEB98(rdram, ctx);
        goto after_6;
    // 0x800BF85C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x800BF860: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x800BF864: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800BF868: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800BF86C: jal         0x800890A8
    // 0x800BF870: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    _rtlight_entrypoint_2(rdram, ctx);
        goto after_7;
    // 0x800BF870: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_7:
    // 0x800BF874: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
L_800BF878:
    // 0x800BF878: beql        $a0, $zero, L_800BF88C
    if (ctx->r4 == 0) {
        // 0x800BF87C: lw          $a0, 0x48($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X48);
            goto L_800BF88C;
    }
    goto skip_2;
    // 0x800BF87C: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    skip_2:
    // 0x800BF880: jal         0x800890C0
    // 0x800BF884: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    _vpmodule_entrypoint_2(rdram, ctx);
        goto after_8;
    // 0x800BF884: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_8:
    // 0x800BF888: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
L_800BF88C:
    // 0x800BF88C: beql        $a0, $zero, L_800BF8A0
    if (ctx->r4 == 0) {
        // 0x800BF890: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800BF8A0;
    }
    goto skip_3;
    // 0x800BF890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800BF894: jal         0x800890C0
    // 0x800BF898: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    _vpmodule_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x800BF898: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    after_9:
    // 0x800BF89C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800BF8A0:
    // 0x800BF8A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BF8A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BF8A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF8B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BF8B4: jr          $ra
    // 0x800BF8B8: lbu         $v0, -0x79D9($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X79D9);
    return;
    // 0x800BF8B8: lbu         $v0, -0x79D9($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X79D9);
;}
RECOMP_FUNC void func_800BF8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF8C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800BF8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF8C8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BF8CC: jal         0x80088128
    // 0x800BF8D0: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    _gcmapDll_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800BF8D0: addiu       $a0, $a0, -0x7A50
    ctx->r4 = ADD32(ctx->r4, -0X7A50);
    after_0:
    // 0x800BF8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF8DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BF8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF8E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BF8E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800BF8EC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800BF8F0: addiu       $s1, $s1, -0x7A50
    ctx->r17 = ADD32(ctx->r17, -0X7A50);
    // 0x800BF8F4: lb          $v1, 0x84($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X84);
    // 0x800BF8F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BF8FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800BF900: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800BF904: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800BF908: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800BF90C: bne         $v1, $at, L_800BF978
    if (ctx->r3 != ctx->r1) {
        // 0x800BF910: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800BF978;
    }
    // 0x800BF910: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BF914: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800BF918: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800BF91C: sb          $zero, 0x84($s1)
    MEM_B(0X84, ctx->r17) = 0;
    // 0x800BF920: addiu       $s4, $s4, -0x79F8
    ctx->r20 = ADD32(ctx->r20, -0X79F8);
    // 0x800BF924: addiu       $s0, $s0, -0x7A50
    ctx->r16 = ADD32(ctx->r16, -0X7A50);
    // 0x800BF928: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x800BF92C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800BF930: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
L_800BF934:
    // 0x800BF934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BF938: beql        $t6, $zero, L_800BF948
    if (ctx->r14 == 0) {
        // 0x800BF93C: lw          $t7, 0x1C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X1C);
            goto L_800BF948;
    }
    goto skip_0;
    // 0x800BF93C: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x800BF940: sb          $s2, 0x84($s1)
    MEM_B(0X84, ctx->r17) = ctx->r18;
    // 0x800BF944: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
L_800BF948:
    // 0x800BF948: beql        $t7, $zero, L_800BF968
    if (ctx->r15 == 0) {
        // 0x800BF94C: addiu       $s0, $s0, 0x2C
        ctx->r16 = ADD32(ctx->r16, 0X2C);
            goto L_800BF968;
    }
    goto skip_1;
    // 0x800BF94C: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    skip_1:
    // 0x800BF950: jal         0x800879A0
    // 0x800BF954: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    _dbvpl_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800BF954: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_0:
    // 0x800BF958: beql        $v0, $zero, L_800BF968
    if (ctx->r2 == 0) {
        // 0x800BF95C: addiu       $s0, $s0, 0x2C
        ctx->r16 = ADD32(ctx->r16, 0X2C);
            goto L_800BF968;
    }
    goto skip_2;
    // 0x800BF95C: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    skip_2:
    // 0x800BF960: sb          $s3, 0x84($s1)
    MEM_B(0X84, ctx->r17) = ctx->r19;
    // 0x800BF964: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
L_800BF968:
    // 0x800BF968: bnel        $s0, $s4, L_800BF934
    if (ctx->r16 != ctx->r20) {
        // 0x800BF96C: lw          $t6, 0x8($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8);
            goto L_800BF934;
    }
    goto skip_3;
    // 0x800BF96C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    skip_3:
    // 0x800BF970: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800BF974: lb          $v1, -0x79CC($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X79CC);
L_800BF978:
    // 0x800BF978: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF97C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BF980: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF984: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800BF988: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800BF98C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800BF990: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BF994: jr          $ra
    // 0x800BF998: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800BF998: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800BF99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF99C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BF9A0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF9A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF9A8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800BF9AC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800BF9B0: addiu       $t7, $t7, -0x7A50
    ctx->r15 = ADD32(ctx->r15, -0X7A50);
    // 0x800BF9B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BF9B8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800BF9BC: lw          $t8, 0x1C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1C);
    // 0x800BF9C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BF9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF9C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800BF9CC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800BF9D0: beq         $t8, $zero, L_800BF9F4
    if (ctx->r24 == 0) {
        // 0x800BF9D4: sw          $t8, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r24;
            goto L_800BF9F4;
    }
    // 0x800BF9D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800BF9D8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800BF9DC: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x800BF9E0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800BF9E4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800BF9E8: jal         0x800890D0
    // 0x800BF9EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _vpmodule_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800BF9EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800BF9F0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800BF9F4:
    // 0x800BF9F4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800BF9F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800BF9FC: beql        $a0, $zero, L_800BFA10
    if (ctx->r4 == 0) {
        // 0x800BFA00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800BFA10;
    }
    goto skip_0;
    // 0x800BFA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800BFA04: jal         0x80088F58
    // 0x800BFA08: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    _idworldmake_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x800BFA08: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800BFA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800BFA10:
    // 0x800BFA10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BFA14: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFA1C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800BFA20: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BFA24: addiu       $v0, $v0, -0x7A44
    ctx->r2 = ADD32(ctx->r2, -0X7A44);
    // 0x800BFA28: addiu       $a1, $a1, -0x7A50
    ctx->r5 = ADD32(ctx->r5, -0X7A50);
    // 0x800BFA2C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800BFA30: lw          $t6, 0x180($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X180);
    // 0x800BFA34: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800BFA38: addiu       $t7, $t6, -0x64
    ctx->r15 = ADD32(ctx->r14, -0X64);
    // 0x800BFA3C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BFA40: nop

    // 0x800BFA44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BFA48: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800BFA4C: nop

    // 0x800BFA50: bc1fl       L_800BFA64
    if (!c1cs) {
        // 0x800BFA54: lw          $t8, 0x18C($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X18C);
            goto L_800BFA64;
    }
    goto skip_0;
    // 0x800BFA54: lw          $t8, 0x18C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18C);
    skip_0:
    // 0x800BFA58: jr          $ra
    // 0x800BFA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800BFA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BFA60: lw          $t8, 0x18C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18C);
L_800BFA64:
    // 0x800BFA64: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800BFA68: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x800BFA6C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BFA70: nop

    // 0x800BFA74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BFA78: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800BFA7C: nop

    // 0x800BFA80: bc1f        L_800BFA90
    if (!c1cs) {
            // 0x800BFA84: nop

    func_800BFA90(rdram, ctx);
    return;
    }
    // 0x800BFA84: nop

    // 0x800BFA88: jr          $ra
    // 0x800BFA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800BFA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800BFA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800BFA30:
    // 0x800BFA90: bne         $a1, $v0, L_800BFA30
    if (ctx->r5 != ctx->r2) {
            // 0x800BFA94: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800BFA30(rdram, ctx);
    return;
    }
    // 0x800BFA94: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800BFA98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800BFA9C: jr          $ra
    // 0x800BFAA0: nop

    return;
    // 0x800BFAA0: nop

;}
RECOMP_FUNC void func_800BFAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFAA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFAA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFAAC: jal         0x800BF704
    // 0x800BFAB0: nop

    func_800BF704(rdram, ctx);
        goto after_0;
    // 0x800BFAB0: nop

    after_0:
    // 0x800BFAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFAB8: lbu         $v0, 0x77($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X77);
    // 0x800BFABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFAC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFAD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFAD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFAD8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BFADC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BFAE0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BFAE4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800BFAE8: jal         0x800BFC34
    // 0x800BFAEC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800BFC34(rdram, ctx);
        goto after_0;
    // 0x800BFAEC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x800BFAF0: jal         0x800D2F20
    // 0x800BFAF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800D2F20(rdram, ctx);
        goto after_1;
    // 0x800BFAF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800BFAF8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800BFAFC: jal         0x800DF428
    // 0x800BFB00: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800DF428(rdram, ctx);
        goto after_2;
    // 0x800BFB00: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_2:
    // 0x800BFB04: jal         0x800DF470
    // 0x800BFB08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DF470(rdram, ctx);
        goto after_3;
    // 0x800BFB08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800BFB0C: jal         0x800DF830
    // 0x800BFB10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DF830(rdram, ctx);
        goto after_4;
    // 0x800BFB10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800BFB14: jal         0x800DF3E0
    // 0x800BFB18: nop

    func_800DF3E0(rdram, ctx);
        goto after_5;
    // 0x800BFB18: nop

    after_5:
    // 0x800BFB1C: jal         0x800D731C
    // 0x800BFB20: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800D731C(rdram, ctx);
        goto after_6;
    // 0x800BFB20: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x800BFB24: jal         0x800DF7E8
    // 0x800BFB28: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_800DF7E8(rdram, ctx);
        goto after_7;
    // 0x800BFB28: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_7:
    // 0x800BFB2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BFB30: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800BFB34: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800BFB38: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800BFB3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BFB40: jal         0x800DE448
    // 0x800BFB44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800DE448(rdram, ctx);
        goto after_8;
    // 0x800BFB44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_8:
    // 0x800BFB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFB4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BFB50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFB58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800BFB5C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800BFB60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFB64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800BFB68: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800BFB6C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800BFB70: jal         0x800BFC94
    // 0x800BFB74: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    func_800BFC94(rdram, ctx);
        goto after_0;
    // 0x800BFB74: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800BFB78: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800BFB7C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800BFB80: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800BFB84: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800BFB88: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800BFB8C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800BFB90: jal         0x800EFA4C
    // 0x800BFB94: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800BFB94: nop

    after_1:
    // 0x800BFB98: jal         0x800D2F20
    // 0x800BFB9C: nop

    func_800D2F20(rdram, ctx);
        goto after_2;
    // 0x800BFB9C: nop

    after_2:
    // 0x800BFBA0: jal         0x800E249C
    // 0x800BFBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800E249C(rdram, ctx);
        goto after_3;
    // 0x800BFBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800BFBA8: jal         0x800E24C0
    // 0x800BFBAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800E24C0(rdram, ctx);
        goto after_4;
    // 0x800BFBAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800BFBB0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800BFBB4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800BFBB8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800BFBBC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800BFBC0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800BFBC4: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800BFBC8: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x800BFBCC: subu        $a2, $v0, $t1
    ctx->r6 = SUB32(ctx->r2, ctx->r9);
    // 0x800BFBD0: subu        $a1, $v0, $t9
    ctx->r5 = SUB32(ctx->r2, ctx->r25);
    // 0x800BFBD4: jal         0x800E24F8
    // 0x800BFBD8: subu        $a0, $v0, $t7
    ctx->r4 = SUB32(ctx->r2, ctx->r15);
    func_800E24F8(rdram, ctx);
        goto after_5;
    // 0x800BFBD8: subu        $a0, $v0, $t7
    ctx->r4 = SUB32(ctx->r2, ctx->r15);
    after_5:
    // 0x800BFBDC: jal         0x800AF5A8
    // 0x800BFBE0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800AF5A8(rdram, ctx);
        goto after_6;
    // 0x800BFBE0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x800BFBE4: andi        $t2, $v0, 0xB00
    ctx->r10 = ctx->r2 & 0XB00;
    // 0x800BFBE8: beq         $t2, $zero, L_800BFBF8
    if (ctx->r10 == 0) {
        // 0x800BFBEC: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_800BFBF8;
    }
    // 0x800BFBEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800BFBF0: b           L_800BFBF8
    // 0x800BFBF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800BFBF8;
    // 0x800BFBF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800BFBF8:
    // 0x800BFBF8: jal         0x800E2588
    // 0x800BFBFC: nop

    func_800E2588(rdram, ctx);
        goto after_7;
    // 0x800BFBFC: nop

    after_7:
    // 0x800BFC00: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800BFC04: addiu       $t4, $sp, 0x2C
    ctx->r12 = ADD32(ctx->r29, 0X2C);
    // 0x800BFC08: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800BFC0C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800BFC10: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800BFC14: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x800BFC18: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x800BFC1C: jal         0x800E2AA4
    // 0x800BFC20: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_800E2AA4(rdram, ctx);
        goto after_8;
    // 0x800BFC20: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_8:
    // 0x800BFC24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFC28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800BFC2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFC3C: jal         0x800D674C
    // 0x800BFC40: nop

    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x800BFC40: nop

    after_0:
    // 0x800BFC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFC48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFC4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFC54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFC58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFC5C: jal         0x800D6B0C
    // 0x800BFC60: nop

    func_800D6B0C(rdram, ctx);
        goto after_0;
    // 0x800BFC60: nop

    after_0:
    // 0x800BFC64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFC68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFC6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFC74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFC78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFC7C: jal         0x800D62E4
    // 0x800BFC80: nop

    func_800D62E4(rdram, ctx);
        goto after_0;
    // 0x800BFC80: nop

    after_0:
    // 0x800BFC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFC88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFC8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFC9C: jal         0x800D674C
    // 0x800BFCA0: nop

    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x800BFCA0: nop

    after_0:
    // 0x800BFCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFCAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFCB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFCBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFCC4: jr          $ra
    // 0x800BFCC8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800BFCC8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800BFCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFCD0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BFCD4: addiu       $v0, $v0, -0x7890
    ctx->r2 = ADD32(ctx->r2, -0X7890);
    // 0x800BFCD8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BFCDC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800BFCE0: sw          $a1, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r5;
    // 0x800BFCE4: lw          $t8, 0x30($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X30);
    // 0x800BFCE8: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800BFCEC: beq         $at, $zero, L_800BFCF8
    if (ctx->r1 == 0) {
        // 0x800BFCF0: nop
    
            goto L_800BFCF8;
    }
    // 0x800BFCF0: nop

    // 0x800BFCF4: sw          $a0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r4;
L_800BFCF8:
    // 0x800BFCF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFD00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFD04: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800BFD08: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800BFD0C: addiu       $s2, $s2, -0x7890
    ctx->r18 = ADD32(ctx->r18, -0X7890);
    // 0x800BFD10: lw          $t6, 0x30($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X30);
    // 0x800BFD14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BFD18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BFD1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800BFD20: blez        $t6, L_800BFD54
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800BFD24: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_800BFD54;
    }
    // 0x800BFD24: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800BFD28: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800BFD2C: addiu       $s1, $s1, -0x788C
    ctx->r17 = ADD32(ctx->r17, -0X788C);
    // 0x800BFD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800BFD34:
    // 0x800BFD34: jal         0x800DF744
    // 0x800BFD38: lw          $a1, 0x30($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X30);
    func_800DF744(rdram, ctx);
        goto after_0;
    // 0x800BFD38: lw          $a1, 0x30($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X30);
    after_0:
    // 0x800BFD3C: lw          $t7, 0x30($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X30);
    // 0x800BFD40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800BFD44: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800BFD48: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800BFD4C: beql        $at, $zero, L_800BFD34
    if (ctx->r1 == 0) {
        // 0x800BFD50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800BFD34;
    }
    goto skip_0;
    // 0x800BFD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_800BFD54:
    // 0x800BFD54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BFD58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BFD5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFD60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800BFD64: jr          $ra
    // 0x800BFD68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BFD68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800BFD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_rt64_sky_scope(rdram, ctx, 1);
    // 0x800BFD6C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800BFD70: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x800BFD74: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x800BFD78: addiu       $s7, $s7, -0x7890
    ctx->r23 = ADD32(ctx->r23, -0X7890);
    // 0x800BFD7C: lw          $t6, 0x10($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X10);
    // 0x800BFD80: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800BFD84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800BFD88: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800BFD8C: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x800BFD90: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800BFD94: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800BFD98: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800BFD9C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800BFDA0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800BFDA4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800BFDA8: beq         $t6, $zero, L_800BFEF8
    if (ctx->r14 == 0) {
        // 0x800BFDAC: sw          $a1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r5;
            goto L_800BFEF8;
    }
    // 0x800BFDAC: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x800BFDB0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800BFDB4: jal         0x800E3CB8
    // 0x800BFDB8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800E3CB8(rdram, ctx);
        goto after_0;
    // 0x800BFDB8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x800BFDBC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800BFDC0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800BFDC4: jal         0x800E3C8C
    // 0x800BFDC8: lwc1        $f14, 0x130($s7)
    ctx->f14.u32l = MEM_W(ctx->r23, 0X130);
    func_800E3C8C(rdram, ctx);
        goto after_1;
    // 0x800BFDC8: lwc1        $f14, 0x130($s7)
    ctx->f14.u32l = MEM_W(ctx->r23, 0X130);
    after_1:
    // 0x800BFDCC: addiu       $s6, $sp, 0x68
    ctx->r22 = ADD32(ctx->r29, 0X68);
    // 0x800BFDD0: jal         0x800E3980
    // 0x800BFDD4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800E3980(rdram, ctx);
        goto after_2;
    // 0x800BFDD4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x800BFDD8: jal         0x800E44FC
    // 0x800BFDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E44FC(rdram, ctx);
        goto after_3;
    // 0x800BFDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800BFDE0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800BFDE4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800BFDE8: addiu       $s1, $s1, -0x7890
    ctx->r17 = ADD32(ctx->r17, -0X7890);
    // 0x800BFDEC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800BFDF0: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x800BFDF4: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
L_800BFDF8:
    tooie_rt64_sky_layer(rdram, ctx);
    // 0x800BFDF8: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x800BFDFC: beql        $t7, $zero, L_800BFEE4
    if (ctx->r15 == 0) {
        // 0x800BFE00: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800BFEE4;
    }
    goto skip_0;
    // 0x800BFE00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800BFE04: lwc1        $f4, 0x120($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X120);
    // 0x800BFE08: lwc1        $f6, 0x134($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X134);
    // 0x800BFE0C: sll         $t8, $s2, 3
    ctx->r24 = S32(ctx->r18 << 3);
    // 0x800BFE10: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x800BFE14: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800BFE18: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x800BFE1C: swc1        $f20, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f20.u32l;
    // 0x800BFE20: addu        $s0, $s7, $t9
    ctx->r16 = ADD32(ctx->r23, ctx->r25);
    // 0x800BFE24: addu        $s3, $s7, $t8
    ctx->r19 = ADD32(ctx->r23, ctx->r24);
    // 0x800BFE28: jal         0x800BFD00
    // 0x800BFE2C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    func_800BFD00(rdram, ctx);
        goto after_4;
    // 0x800BFE2C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800BFE30: jal         0x800DF738
    // 0x800BFE34: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800DF738(rdram, ctx);
        goto after_5;
    // 0x800BFE34: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_5:
    // 0x800BFE38: jal         0x800DF7DC
    // 0x800BFE3C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    func_800DF7DC(rdram, ctx);
        goto after_6;
    // 0x800BFE3C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    after_6:
    // 0x800BFE40: lw          $t0, 0x138($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X138);
    // 0x800BFE44: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800BFE48: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x800BFE4C: jal         0x800DF818
    // 0x800BFE50: lw          $a0, 0x20($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X20);
    func_800DF818(rdram, ctx);
        goto after_7;
    // 0x800BFE50: lw          $a0, 0x20($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X20);
    after_7:
    // 0x800BFE54: jal         0x800DF4B0
    // 0x800BFE58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800DF4B0(rdram, ctx);
        goto after_8;
    // 0x800BFE58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
    // 0x800BFE5C: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    // 0x800BFE60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800BFE64: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800BFE68: lw          $a2, 0x128($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X128);
    // 0x800BFE6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800BFE70: jal         0x800DE448
    // 0x800BFE74: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_800DE448(rdram, ctx);
        goto after_9;
    // 0x800BFE74: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_9:
    // 0x800BFE78: lw          $t4, 0x24($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X24);
    // 0x800BFE7C: beql        $t4, $zero, L_800BFEE4
    if (ctx->r12 == 0) {
        // 0x800BFE80: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800BFEE4;
    }
    goto skip_1;
    // 0x800BFE80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x800BFE84: jal         0x800EA340
    // 0x800BFE88: nop

    func_800EA340(rdram, ctx);
        goto after_10;
    // 0x800BFE88: nop

    after_10:
    // 0x800BFE8C: beql        $v0, $zero, L_800BFEE4
    if (ctx->r2 == 0) {
        // 0x800BFE90: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800BFEE4;
    }
    goto skip_2;
    // 0x800BFE90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x800BFE94: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x800BFE98: beql        $s0, $zero, L_800BFEC0
    if (ctx->r16 == 0) {
        // 0x800BFE9C: lw          $t8, 0x138($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X138);
            goto L_800BFEC0;
    }
    goto skip_3;
    // 0x800BFE9C: lw          $t8, 0x138($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X138);
    skip_3:
    // 0x800BFEA0: lw          $t5, 0x138($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X138);
    // 0x800BFEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BFEA8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BFEAC: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x800BFEB0: jal         0x80088690
    // 0x800BFEB4: lw          $a1, 0x20($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X20);
    _glid_entrypoint_6(rdram, ctx);
        goto after_11;
    // 0x800BFEB4: lw          $a1, 0x20($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X20);
    after_11:
    // 0x800BFEB8: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x800BFEBC: lw          $t8, 0x138($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X138);
L_800BFEC0:
    // 0x800BFEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800BFEC4: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x800BFEC8: beq         $s0, $zero, L_800BFEE0
    if (ctx->r16 == 0) {
        // 0x800BFECC: sw          $t9, 0x138($s1)
        MEM_W(0X138, ctx->r17) = ctx->r25;
            goto L_800BFEE0;
    }
    // 0x800BFECC: sw          $t9, 0x138($s1)
    MEM_W(0X138, ctx->r17) = ctx->r25;
    // 0x800BFED0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800BFED4: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x800BFED8: jal         0x80088688
    // 0x800BFEDC: lw          $a1, 0x20($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X20);
    _glid_entrypoint_5(rdram, ctx);
        goto after_12;
    // 0x800BFEDC: lw          $a1, 0x20($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X20);
    after_12:
L_800BFEE0:
    // 0x800BFEE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800BFEE4:
    // 0x800BFEE4: bne         $s2, $s5, L_800BFDF8
    if (ctx->r18 != ctx->r21) {
        // 0x800BFEE8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800BFDF8;
    }
    // 0x800BFEE8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800BFEEC: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800BFEF0: jal         0x800E3C8C
    // 0x800BFEF4: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    func_800E3C8C(rdram, ctx);
        goto after_13;
    // 0x800BFEF4: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    after_13:
L_800BFEF8:
    tooie_rt64_sky_scope(rdram, ctx, 2);
    // 0x800BFEF8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800BFEFC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800BFF00: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800BFF04: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800BFF08: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800BFF0C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800BFF10: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800BFF14: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800BFF18: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x800BFF1C: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x800BFF20: jr          $ra
    // 0x800BFF24: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800BFF24: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800BFF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFF30: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BFF34: jal         0x80088058
    // 0x800BFF38: addiu       $a0, $a0, -0x7890
    ctx->r4 = ADD32(ctx->r4, -0X7890);
    _gcskyDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800BFF38: addiu       $a0, $a0, -0x7890
    ctx->r4 = ADD32(ctx->r4, -0X7890);
    after_0:
    // 0x800BFF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFF44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFF54: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800BFF58: jal         0x80088060
    // 0x800BFF5C: addiu       $a0, $a0, -0x7890
    ctx->r4 = ADD32(ctx->r4, -0X7890);
    _gcskyDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800BFF5C: addiu       $a0, $a0, -0x7890
    ctx->r4 = ADD32(ctx->r4, -0X7890);
    after_0:
    // 0x800BFF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFF68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFF70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFF74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFF78: jal         0x800D8FF8
    // 0x800BFF7C: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800BFF7C: nop

    after_0:
    // 0x800BFF80: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BFF84: addiu       $v0, $v0, -0x7890
    ctx->r2 = ADD32(ctx->r2, -0X7890);
    // 0x800BFF88: lwc1        $f4, 0x134($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X134);
    // 0x800BFF8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFF94: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800BFF98: jr          $ra
    // 0x800BFF9C: swc1        $f6, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x800BFF9C: swc1        $f6, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800BFFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFFA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BFFA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800BFFA8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800BFFAC: jr          $ra
    // 0x800BFFB0: lw          $v0, -0x7888($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7888);
    return;
    // 0x800BFFB0: lw          $v0, -0x7888($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7888);
;}
RECOMP_FUNC void func_800BFFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFFB4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800BFFB8: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800BFFBC: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x800BFFC0: lw          $a3, -0x7890($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X7890);
    // 0x800BFFC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFFC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFFCC: beq         $a3, $zero, L_800BFFE4
    if (ctx->r7 == 0) {
        // 0x800BFFD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800BFFE4;
    }
    // 0x800BFFD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BFFD4: jal         0x800DBEFC
    // 0x800BFFD8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800DBEFC(rdram, ctx);
        goto after_0;
    // 0x800BFFD8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800BFFDC: b           L_800BFFE4
    // 0x800BFFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800BFFE4;
    // 0x800BFFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800BFFE4:
    // 0x800BFFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFFE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFFEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800BFFF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFFF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BFFF8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800BFFFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C0000: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C0004: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C0008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C000C: addiu       $s1, $s1, -0x7888
    ctx->r17 = ADD32(ctx->r17, -0X7888);
    // 0x800C0010: addiu       $s0, $s0, -0x7890
    ctx->r16 = ADD32(ctx->r16, -0X7890);
    // 0x800C0014: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_800C0018:
    // 0x800C0018: beql        $a0, $zero, L_800C0030
    if (ctx->r4 == 0) {
        // 0x800C001C: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800C0030;
    }
    goto skip_0;
    // 0x800C001C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x800C0020: jal         0x800EE5D8
    // 0x800C0024: nop

    func_800EE5D8(rdram, ctx);
        goto after_0;
    // 0x800C0024: nop

    after_0:
    // 0x800C0028: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x800C002C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800C0030:
    // 0x800C0030: beql        $a0, $zero, L_800C0048
    if (ctx->r4 == 0) {
        // 0x800C0034: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800C0048;
    }
    goto skip_1;
    // 0x800C0034: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x800C0038: jal         0x800DC060
    // 0x800C003C: nop

    func_800DC060(rdram, ctx);
        goto after_1;
    // 0x800C003C: nop

    after_1:
    // 0x800C0040: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800C0044: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C0048:
    // 0x800C0048: bnel        $s0, $s1, L_800C0018
    if (ctx->r16 != ctx->r17) {
        // 0x800C004C: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_800C0018;
    }
    goto skip_2;
    // 0x800C004C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x800C0050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0054: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C0058: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C005C: jr          $ra
    // 0x800C0060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C0060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C0064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0068: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800C006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0070: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0074: jal         0x80088068
    // 0x800C0078: addiu       $a0, $a0, -0x7890
    ctx->r4 = ADD32(ctx->r4, -0X7890);
    _gcskyDll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800C0078: addiu       $a0, $a0, -0x7890
    ctx->r4 = ADD32(ctx->r4, -0X7890);
    after_0:
    // 0x800C007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0084: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0090: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C0094: bnel        $a1, $at, L_800C00A8
    if (ctx->r5 != ctx->r1) {
            // 0x800C0098: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    static_3_800C00A8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C0098: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    skip_0:
    // 0x800C009C: jr          $ra
    // 0x800C00A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800C00A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800C00A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C00A4: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x800C00A8: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x800C00AC: xor         $v1, $a1, $t7
    ctx->r3 = ctx->r5 ^ ctx->r15;
    // 0x800C00B0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800C00B4: jr          $ra
    // 0x800C00B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800C00B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800C00BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C00BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C00C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C00C4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C00C8: jal         0x80087C90
    // 0x800C00CC: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800C00CC: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
    // 0x800C00D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C00D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C00D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C00E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C00E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C00E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C00E8: jal         0x800C0638
    // 0x800C00EC: nop

    func_800C0638(rdram, ctx);
        goto after_0;
    // 0x800C00EC: nop

    after_0:
    // 0x800C00F0: beq         $v0, $zero, L_800C0100
    if (ctx->r2 == 0) {
        // 0x800C00F4: nop
    
            goto L_800C0100;
    }
    // 0x800C00F4: nop

    // 0x800C00F8: jal         0x800FECB8
    // 0x800C00FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800FECB8(rdram, ctx);
        goto after_1;
    // 0x800C00FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_800C0100:
    // 0x800C0100: jal         0x800C0658
    // 0x800C0104: nop

    func_800C0658(rdram, ctx);
        goto after_2;
    // 0x800C0104: nop

    after_2:
    // 0x800C0108: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C010C: jal         0x80087E60
    // 0x800C0110: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x800C0110: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_3:
    // 0x800C0114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0118: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C011C: addiu       $v0, $v0, -0x7750
    ctx->r2 = ADD32(ctx->r2, -0X7750);
    // 0x800C0120: sb          $zero, 0x15C($v0)
    MEM_B(0X15C, ctx->r2) = 0;
    // 0x800C0124: sb          $zero, 0x180($v0)
    MEM_B(0X180, ctx->r2) = 0;
    // 0x800C0128: jr          $ra
    // 0x800C012C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800C012C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800C0130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0134: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C0138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C013C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C0140: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C0144: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C0148: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800C014C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C0150: addiu       $s1, $s1, -0x7748
    ctx->r17 = ADD32(ctx->r17, -0X7748);
    // 0x800C0154: addiu       $s0, $s0, -0x7750
    ctx->r16 = ADD32(ctx->r16, -0X7750);
    // 0x800C0158: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
L_800C015C:
    // 0x800C015C: beql        $a0, $zero, L_800C0170
    if (ctx->r4 == 0) {
        // 0x800C0160: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800C0170;
    }
    goto skip_0;
    // 0x800C0160: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800C0164: jal         0x80087AF0
    // 0x800C0168: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    _gczoombox_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800C0168: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x800C016C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C0170:
    // 0x800C0170: bnel        $s0, $s1, L_800C015C
    if (ctx->r16 != ctx->r17) {
        // 0x800C0174: lw          $a0, 0x120($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X120);
            goto L_800C015C;
    }
    goto skip_1;
    // 0x800C0174: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
    skip_1:
    // 0x800C0178: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C017C: lw          $a0, -0x7624($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7624);
    // 0x800C0180: beql        $a0, $zero, L_800C0194
    if (ctx->r4 == 0) {
        // 0x800C0184: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800C0194;
    }
    goto skip_2;
    // 0x800C0184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x800C0188: jal         0x80087AF0
    // 0x800C018C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    _gczoombox_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800C018C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800C0190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C0194:
    // 0x800C0194: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C0198: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C019C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C01A0: jr          $ra
    // 0x800C01A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C01A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C01A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C01A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C01AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C01B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C01B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C01B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C01BC: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x800C01C0: jal         0x800880C8
    // 0x800C01C4: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogcamera_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x800C01C4: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
    // 0x800C01C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C01CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C01D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C01D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C01D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C01DC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C01E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800C01E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C01E8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C01EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C01F0: jal         0x80087E50
    // 0x800C01F4: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800C01F4: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
    // 0x800C01F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C01FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0200: jr          $ra
    // 0x800C0204: nop

    return;
    // 0x800C0204: nop

;}
RECOMP_FUNC void func_800C0208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0208: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C020C: addiu       $v0, $v0, -0x7750
    ctx->r2 = ADD32(ctx->r2, -0X7750);
    // 0x800C0210: lw          $a0, 0x168($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X168);
    // 0x800C0214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C021C: bne         $a0, $zero, L_800C022C
    if (ctx->r4 != 0) {
        // 0x800C0220: nop
    
            goto L_800C022C;
    }
    // 0x800C0220: nop

    // 0x800C0224: b           L_800C0248
    // 0x800C0228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C0248;
    // 0x800C0228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C022C:
    // 0x800C022C: jal         0x800C0090
    // 0x800C0230: lw          $a1, 0x16C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X16C);
    func_800C0090(rdram, ctx);
        goto after_0;
    // 0x800C0230: lw          $a1, 0x16C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X16C);
    after_0:
    // 0x800C0234: beq         $v0, $zero, L_800C0244
    if (ctx->r2 == 0) {
        // 0x800C0238: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_800C0244;
    }
    // 0x800C0238: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C023C: b           L_800C0248
    // 0x800C0240: lw          $v0, -0x75E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75E8);
        goto L_800C0248;
    // 0x800C0240: lw          $v0, -0x75E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75E8);
L_800C0244:
    // 0x800C0244: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C0248:
    // 0x800C0248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C024C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0250: jr          $ra
    // 0x800C0254: nop

    return;
    // 0x800C0254: nop

;}
RECOMP_FUNC void func_800C0258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0258: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C025C: addiu       $v1, $v1, -0x7750
    ctx->r3 = ADD32(ctx->r3, -0X7750);
    // 0x800C0260: lhu         $t6, 0x15E($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X15E);
    // 0x800C0264: srl         $t7, $t6, 15
    ctx->r15 = S32(U32(ctx->r14) >> 15);
    // 0x800C0268: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800C026C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x800C0270: lh          $v0, 0x118($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X118);
    // 0x800C0274: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800C0278: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x800C027C: jr          $ra
    // 0x800C0280: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    return;
    // 0x800C0280: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
;}
RECOMP_FUNC void func_800C0284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0284: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C0288: lbu         $t6, -0x75F4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X75F4);
    // 0x800C028C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C0290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C0294: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C0298: beq         $t6, $zero, L_800C02AC
    if (ctx->r14 == 0) {
        // 0x800C029C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800C02AC;
    }
    // 0x800C029C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C02A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C02A4: jal         0x80087E78
    // 0x800C02A8: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x800C02A8: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
L_800C02AC:
    // 0x800C02AC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C02B0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C02B4: addiu       $s1, $s1, -0x7748
    ctx->r17 = ADD32(ctx->r17, -0X7748);
    // 0x800C02B8: addiu       $s0, $s0, -0x7750
    ctx->r16 = ADD32(ctx->r16, -0X7750);
    // 0x800C02BC: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
L_800C02C0:
    // 0x800C02C0: beql        $a0, $zero, L_800C02D4
    if (ctx->r4 == 0) {
        // 0x800C02C4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800C02D4;
    }
    goto skip_0;
    // 0x800C02C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800C02C8: jal         0x80087B00
    // 0x800C02CC: nop

    _gczoombox_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x800C02CC: nop

    after_1:
    // 0x800C02D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C02D4:
    // 0x800C02D4: bnel        $s0, $s1, L_800C02C0
    if (ctx->r16 != ctx->r17) {
        // 0x800C02D8: lw          $a0, 0x120($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X120);
            goto L_800C02C0;
    }
    goto skip_1;
    // 0x800C02D8: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
    skip_1:
    // 0x800C02DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C02E0: lw          $a0, -0x7624($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7624);
    // 0x800C02E4: beql        $a0, $zero, L_800C02F8
    if (ctx->r4 == 0) {
        // 0x800C02E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C02F8;
    }
    goto skip_2;
    // 0x800C02E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800C02EC: jal         0x80087B00
    // 0x800C02F0: nop

    _gczoombox_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x800C02F0: nop

    after_2:
    // 0x800C02F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C02F8:
    // 0x800C02F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C02FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C0300: jr          $ra
    // 0x800C0304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C0304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C0308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0308: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C030C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C0310: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C0314: addiu       $s0, $s0, -0x7750
    ctx->r16 = ADD32(ctx->r16, -0X7750);
    // 0x800C0318: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x800C031C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C0320: sll         $t8, $t6, 19
    ctx->r24 = S32(ctx->r14 << 19);
    // 0x800C0324: bgezl       $t8, L_800C03B0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800C0328: lb          $t9, 0x166($s0)
        ctx->r25 = MEM_B(ctx->r16, 0X166);
            goto L_800C03B0;
    }
    goto skip_0;
    // 0x800C0328: lb          $t9, 0x166($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X166);
    skip_0:
    // 0x800C032C: lb          $t9, 0x166($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X166);
    // 0x800C0330: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
    // 0x800C0334: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C0338: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C033C: sb          $t0, 0x166($s0)
    MEM_B(0X166, ctx->r16) = ctx->r8;
    // 0x800C0340: lb          $t1, 0x166($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X166);
    // 0x800C0344: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800C0348: beq         $a0, $zero, L_800C036C
    if (ctx->r4 == 0) {
        // 0x800C034C: lb          $v0, -0x5840($v0)
        ctx->r2 = MEM_B(ctx->r2, -0X5840);
            goto L_800C036C;
    }
    // 0x800C034C: lb          $v0, -0x5840($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X5840);
    // 0x800C0350: lh          $t2, 0x128($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X128);
    // 0x800C0354: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C0358: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x800C035C: sh          $t3, 0x128($s0)
    MEM_H(0X128, ctx->r16) = ctx->r11;
    // 0x800C0360: jal         0x80087C10
    // 0x800C0364: lh          $a1, 0x128($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X128);
    _gczoombox_entrypoint_38(rdram, ctx);
        goto after_0;
    // 0x800C0364: lh          $a1, 0x128($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X128);
    after_0:
    // 0x800C0368: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_800C036C:
    // 0x800C036C: lw          $a0, 0x124($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X124);
    // 0x800C0370: beql        $a0, $zero, L_800C0390
    if (ctx->r4 == 0) {
        // 0x800C0374: lb          $t6, 0x166($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X166);
            goto L_800C0390;
    }
    goto skip_1;
    // 0x800C0374: lb          $t6, 0x166($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X166);
    skip_1:
    // 0x800C0378: lh          $t4, 0x12A($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X12A);
    // 0x800C037C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x800C0380: sh          $t5, 0x12A($s0)
    MEM_H(0X12A, ctx->r16) = ctx->r13;
    // 0x800C0384: jal         0x80087C10
    // 0x800C0388: lh          $a1, 0x12A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X12A);
    _gczoombox_entrypoint_38(rdram, ctx);
        goto after_1;
    // 0x800C0388: lh          $a1, 0x12A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X12A);
    after_1:
    // 0x800C038C: lb          $t6, 0x166($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X166);
L_800C0390:
    // 0x800C0390: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800C0394: bnel        $t6, $at, L_800C0428
    if (ctx->r14 != ctx->r1) {
        // 0x800C0398: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C0428;
    }
    goto skip_2;
    // 0x800C0398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800C039C: lbu         $t7, 0x15E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15E);
    // 0x800C03A0: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x800C03A4: b           L_800C0424
    // 0x800C03A8: sb          $t8, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r24;
        goto L_800C0424;
    // 0x800C03A8: sb          $t8, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r24;
    // 0x800C03AC: lb          $t9, 0x166($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X166);
L_800C03B0:
    // 0x800C03B0: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
    // 0x800C03B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C03B8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800C03BC: sb          $t0, 0x166($s0)
    MEM_B(0X166, ctx->r16) = ctx->r8;
    // 0x800C03C0: lb          $t1, 0x166($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X166);
    // 0x800C03C4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800C03C8: beq         $a0, $zero, L_800C03EC
    if (ctx->r4 == 0) {
        // 0x800C03CC: lb          $v0, -0x5840($v0)
        ctx->r2 = MEM_B(ctx->r2, -0X5840);
            goto L_800C03EC;
    }
    // 0x800C03CC: lb          $v0, -0x5840($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X5840);
    // 0x800C03D0: lh          $t2, 0x128($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X128);
    // 0x800C03D4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C03D8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x800C03DC: sh          $t3, 0x128($s0)
    MEM_H(0X128, ctx->r16) = ctx->r11;
    // 0x800C03E0: jal         0x80087C10
    // 0x800C03E4: lh          $a1, 0x128($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X128);
    _gczoombox_entrypoint_38(rdram, ctx);
        goto after_2;
    // 0x800C03E4: lh          $a1, 0x128($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X128);
    after_2:
    // 0x800C03E8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_800C03EC:
    // 0x800C03EC: lw          $a0, 0x124($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X124);
    // 0x800C03F0: beql        $a0, $zero, L_800C0410
    if (ctx->r4 == 0) {
        // 0x800C03F4: lb          $t6, 0x166($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X166);
            goto L_800C0410;
    }
    goto skip_3;
    // 0x800C03F4: lb          $t6, 0x166($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X166);
    skip_3:
    // 0x800C03F8: lh          $t4, 0x12A($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X12A);
    // 0x800C03FC: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x800C0400: sh          $t5, 0x12A($s0)
    MEM_H(0X12A, ctx->r16) = ctx->r13;
    // 0x800C0404: jal         0x80087C10
    // 0x800C0408: lh          $a1, 0x12A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X12A);
    _gczoombox_entrypoint_38(rdram, ctx);
        goto after_3;
    // 0x800C0408: lh          $a1, 0x12A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X12A);
    after_3:
    // 0x800C040C: lb          $t6, 0x166($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X166);
L_800C0410:
    // 0x800C0410: bnel        $t6, $zero, L_800C0428
    if (ctx->r14 != 0) {
        // 0x800C0414: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C0428;
    }
    goto skip_4;
    // 0x800C0414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800C0418: lbu         $t7, 0x15E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15E);
    // 0x800C041C: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x800C0420: sb          $t8, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r24;
L_800C0424:
    // 0x800C0424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C0428:
    // 0x800C0428: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C042C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C0430: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0438: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C043C: lw          $t6, -0x75F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X75F4);
    // 0x800C0440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0448: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x800C044C: bgez        $t8, L_800C045C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800C0450: nop
    
            goto L_800C045C;
    }
    // 0x800C0450: nop

    // 0x800C0454: jal         0x800C0308
    // 0x800C0458: nop

    func_800C0308(rdram, ctx);
        goto after_0;
    // 0x800C0458: nop

    after_0:
L_800C045C:
    // 0x800C045C: jal         0x800A819C
    // 0x800C0460: nop

    func_800A819C(rdram, ctx);
        goto after_1;
    // 0x800C0460: nop

    after_1:
    // 0x800C0464: beq         $v0, $zero, L_800C04B8
    if (ctx->r2 == 0) {
        // 0x800C0468: lui         $t9, 0x8013
        ctx->r25 = S32(0X8013 << 16);
            goto L_800C04B8;
    }
    // 0x800C0468: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800C046C: lw          $t9, -0x75F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75F4);
    // 0x800C0470: sll         $t1, $t9, 18
    ctx->r9 = S32(ctx->r25 << 18);
    // 0x800C0474: bltzl       $t1, L_800C04BC
    if (SIGNED(ctx->r9) < 0) {
        // 0x800C0478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C04BC;
    }
    goto skip_0;
    // 0x800C0478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C047C: jal         0x800C0638
    // 0x800C0480: nop

    func_800C0638(rdram, ctx);
        goto after_2;
    // 0x800C0480: nop

    after_2:
    // 0x800C0484: bne         $v0, $zero, L_800C04B0
    if (ctx->r2 != 0) {
        // 0x800C0488: lui         $t2, 0x8013
        ctx->r10 = S32(0X8013 << 16);
            goto L_800C04B0;
    }
    // 0x800C0488: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800C048C: lbu         $t2, -0x75EF($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X75EF);
    // 0x800C0490: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0494: srl         $t3, $t2, 4
    ctx->r11 = S32(U32(ctx->r10) >> 4);
    // 0x800C0498: blez        $t3, L_800C04B0
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800C049C: nop
    
            goto L_800C04B0;
    }
    // 0x800C049C: nop

    // 0x800C04A0: jal         0x80087E30
    // 0x800C04A4: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x800C04A4: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_3:
    // 0x800C04A8: b           L_800C04BC
    // 0x800C04AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C04BC;
    // 0x800C04AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C04B0:
    // 0x800C04B0: jal         0x800C0284
    // 0x800C04B4: nop

    func_800C0284(rdram, ctx);
        goto after_4;
    // 0x800C04B4: nop

    after_4:
L_800C04B8:
    // 0x800C04B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C04BC:
    // 0x800C04BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C04C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C04C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C04C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C04CC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C04D0: lbu         $t6, -0x75D0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X75D0);
    // 0x800C04D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C04D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C04DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C04E0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C04E4: beq         $t6, $zero, L_800C051C
    if (ctx->r14 == 0) {
        // 0x800C04E8: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_800C051C;
    }
    // 0x800C04E8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800C04EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C04F0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C04F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C04F8: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    // 0x800C04FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800C0500: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C0504: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C0508: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C050C: jal         0x80087E40
    // 0x800C0510: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    _gcdialogexec_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800C0510: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x800C0514: b           L_800C0520
    // 0x800C0518: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C0520;
    // 0x800C0518: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C051C:
    // 0x800C051C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C0520:
    // 0x800C0520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C0528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800C052C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0534: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C0538: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C053C: lbu         $t6, -0x75D0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X75D0);
    // 0x800C0540: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C0544: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C0548: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C054C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800C0550: beq         $t6, $zero, L_800C05A0
    if (ctx->r14 == 0) {
        // 0x800C0554: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_800C05A0;
    }
    // 0x800C0554: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800C0558: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C055C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800C0560: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800C0564: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800C0568: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x800C056C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0570: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    // 0x800C0574: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800C0578: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800C057C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800C0580: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C0584: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800C0588: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800C058C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800C0590: jal         0x80087E28
    // 0x800C0594: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    _gcdialogexec_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800C0594: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x800C0598: b           L_800C05A4
    // 0x800C059C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C05A4;
    // 0x800C059C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C05A0:
    // 0x800C05A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C05A4:
    // 0x800C05A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C05A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C05AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800C05B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C05B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C05B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C05BC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C05C0: lbu         $t6, -0x75D0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X75D0);
    // 0x800C05C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C05C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C05CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C05D0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800C05D4: beq         $t6, $zero, L_800C0620
    if (ctx->r14 == 0) {
        // 0x800C05D8: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_800C0620;
    }
    // 0x800C05D8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800C05DC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C05E0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800C05E4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800C05E8: lh          $t0, 0x4A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4A);
    // 0x800C05EC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C05F0: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    // 0x800C05F4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800C05F8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800C05FC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800C0600: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C0604: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C0608: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800C060C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800C0610: jal         0x80087E28
    // 0x800C0614: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    _gcdialogexec_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800C0614: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x800C0618: b           L_800C0624
    // 0x800C061C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C0624;
    // 0x800C061C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C0620:
    // 0x800C0620: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C0624:
    // 0x800C0624: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C0628: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C062C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800C0630: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0638: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C063C: lh          $v0, -0x75EE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X75EE);
    // 0x800C0640: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800C0644: jr          $ra
    // 0x800C0648: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
    return;
    // 0x800C0648: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
;}
RECOMP_FUNC void func_800C064C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C064C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C0650: jr          $ra
    // 0x800C0654: lh          $v0, -0x75EE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X75EE);
    return;
    // 0x800C0654: lh          $v0, -0x75EE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X75EE);
;}
RECOMP_FUNC void func_800C0658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C065C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0660: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0664: jal         0x80087E38
    // 0x800C0668: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800C0668: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
    // 0x800C066C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0674: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C067C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C067C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0684: jal         0x800C064C
    // 0x800C0688: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800C064C(rdram, ctx);
        goto after_0;
    // 0x800C0688: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C068C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800C0690: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0694: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    // 0x800C0698: beq         $v0, $t6, L_800C06A8
    if (ctx->r2 == ctx->r14) {
        // 0x800C069C: nop
    
            goto L_800C06A8;
    }
    // 0x800C069C: nop

    // 0x800C06A0: b           L_800C06B4
    // 0x800C06A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C06B4;
    // 0x800C06A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C06A8:
    // 0x800C06A8: jal         0x80087E58
    // 0x800C06AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    _gcdialogexec_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800C06AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x800C06B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C06B4:
    // 0x800C06B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C06B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C06BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C06C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C06C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C06C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C06CC: jal         0x800C0638
    // 0x800C06D0: nop

    func_800C0638(rdram, ctx);
        goto after_0;
    // 0x800C06D0: nop

    after_0:
    // 0x800C06D4: beq         $v0, $zero, L_800C0700
    if (ctx->r2 == 0) {
        // 0x800C06D8: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_800C0700;
    }
    // 0x800C06D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C06DC: addiu       $v0, $v0, -0x7750
    ctx->r2 = ADD32(ctx->r2, -0X7750);
    // 0x800C06E0: lbu         $t7, 0x15E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X15E);
    // 0x800C06E4: lb          $t1, 0x166($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X166);
    // 0x800C06E8: ori         $t9, $t7, 0x20
    ctx->r25 = ctx->r15 | 0X20;
    // 0x800C06EC: sb          $t9, 0x15E($v0)
    MEM_B(0X15E, ctx->r2) = ctx->r25;
    // 0x800C06F0: andi        $t0, $t9, 0xEF
    ctx->r8 = ctx->r25 & 0XEF;
    // 0x800C06F4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800C06F8: sb          $t0, 0x15E($v0)
    MEM_B(0X15E, ctx->r2) = ctx->r8;
    // 0x800C06FC: sb          $t2, 0x166($v0)
    MEM_B(0X166, ctx->r2) = ctx->r10;
L_800C0700:
    // 0x800C0700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0708: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0718: jal         0x800C0638
    // 0x800C071C: nop

    func_800C0638(rdram, ctx);
        goto after_0;
    // 0x800C071C: nop

    after_0:
    // 0x800C0720: beq         $v0, $zero, L_800C074C
    if (ctx->r2 == 0) {
        // 0x800C0724: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_800C074C;
    }
    // 0x800C0724: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C0728: addiu       $v0, $v0, -0x7750
    ctx->r2 = ADD32(ctx->r2, -0X7750);
    // 0x800C072C: lbu         $t7, 0x15E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X15E);
    // 0x800C0730: lb          $t2, 0x166($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X166);
    // 0x800C0734: ori         $t0, $t7, 0x20
    ctx->r8 = ctx->r15 | 0X20;
    // 0x800C0738: sb          $t0, 0x15E($v0)
    MEM_B(0X15E, ctx->r2) = ctx->r8;
    // 0x800C073C: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x800C0740: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800C0744: sb          $t1, 0x15E($v0)
    MEM_B(0X15E, ctx->r2) = ctx->r9;
    // 0x800C0748: sb          $t3, 0x166($v0)
    MEM_B(0X166, ctx->r2) = ctx->r11;
L_800C074C:
    // 0x800C074C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0754: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C075C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C075C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0760: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C0764: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C0768: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C076C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C0770: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C0774: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800C0778: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C077C: addiu       $s2, $s2, -0x7748
    ctx->r18 = ADD32(ctx->r18, -0X7748);
    // 0x800C0780: addiu       $s1, $s1, -0x7750
    ctx->r17 = ADD32(ctx->r17, -0X7750);
    // 0x800C0784: addiu       $s0, $s0, -0x7750
    ctx->r16 = ADD32(ctx->r16, -0X7750);
    // 0x800C0788: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
L_800C078C:
    // 0x800C078C: beql        $a0, $zero, L_800C07A4
    if (ctx->r4 == 0) {
        // 0x800C0790: lw          $a0, 0x12C($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X12C);
            goto L_800C07A4;
    }
    goto skip_0;
    // 0x800C0790: lw          $a0, 0x12C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X12C);
    skip_0:
    // 0x800C0794: jal         0x800C7150
    // 0x800C0798: nop

    func_800C7150(rdram, ctx);
        goto after_0;
    // 0x800C0798: nop

    after_0:
    // 0x800C079C: sw          $v0, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->r2;
    // 0x800C07A0: lw          $a0, 0x12C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X12C);
L_800C07A4:
    // 0x800C07A4: beql        $a0, $zero, L_800C07BC
    if (ctx->r4 == 0) {
        // 0x800C07A8: lw          $a0, 0x104($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X104);
            goto L_800C07BC;
    }
    goto skip_1;
    // 0x800C07A8: lw          $a0, 0x104($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X104);
    skip_1:
    // 0x800C07AC: jal         0x800C7150
    // 0x800C07B0: nop

    func_800C7150(rdram, ctx);
        goto after_1;
    // 0x800C07B0: nop

    after_1:
    // 0x800C07B4: sw          $v0, 0x12C($s1)
    MEM_W(0X12C, ctx->r17) = ctx->r2;
    // 0x800C07B8: lw          $a0, 0x104($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X104);
L_800C07BC:
    // 0x800C07BC: beql        $a0, $zero, L_800C07D4
    if (ctx->r4 == 0) {
        // 0x800C07C0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800C07D4;
    }
    goto skip_2;
    // 0x800C07C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_2:
    // 0x800C07C4: jal         0x8001BAFC
    // 0x800C07C8: nop

    defrag(rdram, ctx);
        goto after_2;
    // 0x800C07C8: nop

    after_2:
    // 0x800C07CC: sw          $v0, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->r2;
    // 0x800C07D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C07D4:
    // 0x800C07D4: bnel        $s0, $s2, L_800C078C
    if (ctx->r16 != ctx->r18) {
        // 0x800C07D8: lw          $a0, 0x120($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X120);
            goto L_800C078C;
    }
    goto skip_3;
    // 0x800C07D8: lw          $a0, 0x120($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X120);
    skip_3:
    // 0x800C07DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C07E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C07E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C07E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C07EC: jr          $ra
    // 0x800C07F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C07F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C07F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C07F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C07F8: lw          $v0, -0x75F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75F4);
    // 0x800C07FC: sll         $t6, $v0, 21
    ctx->r14 = S32(ctx->r2 << 21);
    // 0x800C0800: jr          $ra
    // 0x800C0804: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
    return;
    // 0x800C0804: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
;}
RECOMP_FUNC void func_800C0808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C080C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0810: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0814: jal         0x80087E68
    // 0x800C0818: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x800C0818: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
    // 0x800C081C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0824: jr          $ra
    // 0x800C0828: nop

    return;
    // 0x800C0828: nop

;}
RECOMP_FUNC void func_800C082C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C082C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C0830: addiu       $v0, $v0, -0x7750
    ctx->r2 = ADD32(ctx->r2, -0X7750);
    // 0x800C0834: lbu         $t9, 0x15E($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X15E);
    // 0x800C0838: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800C083C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x800C0840: andi        $t0, $t9, 0xFFF7
    ctx->r8 = ctx->r25 & 0XFFF7;
    // 0x800C0844: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800C0848: jr          $ra
    // 0x800C084C: sb          $t1, 0x15E($v0)
    MEM_B(0X15E, ctx->r2) = ctx->r9;
    return;
    // 0x800C084C: sb          $t1, 0x15E($v0)
    MEM_B(0X15E, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_800C0850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0850: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0854: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    // 0x800C0858: lbu         $t6, 0x11C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X11C);
    // 0x800C085C: lbu         $t8, 0x11D($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X11D);
    // 0x800C0860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0868: andi        $t7, $t6, 0xFF3F
    ctx->r15 = ctx->r14 & 0XFF3F;
    // 0x800C086C: andi        $t9, $t8, 0xFF3F
    ctx->r25 = ctx->r24 & 0XFF3F;
    // 0x800C0870: sb          $t7, 0x11C($a0)
    MEM_B(0X11C, ctx->r4) = ctx->r15;
    // 0x800C0874: sb          $t9, 0x11D($a0)
    MEM_B(0X11D, ctx->r4) = ctx->r25;
    // 0x800C0878: jal         0x80087E58
    // 0x800C087C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    _gcdialogexec_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800C087C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x800C0880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0888: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0894: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C0898: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800C089C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C08A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C08A4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C08A8: jal         0x80087E70
    // 0x800C08AC: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    _gcdialogexec_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x800C08AC: addiu       $a0, $a0, -0x7750
    ctx->r4 = ADD32(ctx->r4, -0X7750);
    after_0:
    // 0x800C08B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C08B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C08B8: jr          $ra
    // 0x800C08BC: nop

    return;
    // 0x800C08BC: nop

;}
RECOMP_FUNC void func_800C08C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C08C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C08C4: lw          $a0, -0x7510($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7510);
    // 0x800C08C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C08CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C08D0: beql        $a0, $zero, L_800C08EC
    if (ctx->r4 == 0) {
        // 0x800C08D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C08EC;
    }
    goto skip_0;
    // 0x800C08D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C08D8: jal         0x8001BAFC
    // 0x800C08DC: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800C08DC: nop

    after_0:
    // 0x800C08E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C08E4: sw          $v0, -0x7510($at)
    MEM_W(-0X7510, ctx->r1) = ctx->r2;
    // 0x800C08E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C08EC:
    // 0x800C08EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C08F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C08F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C08F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C08FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0900: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C0904: jal         0x800881F8
    // 0x800C0908: lw          $a0, -0x750C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X750C);
    _gcnewpause_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800C0908: lw          $a0, -0x750C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X750C);
    after_0:
    // 0x800C090C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0910: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C0914: sw          $v0, -0x7510($at)
    MEM_W(-0X7510, ctx->r1) = ctx->r2;
    // 0x800C0918: jr          $ra
    // 0x800C091C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800C091C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800C0920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0928: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C092C: jal         0x80088200
    // 0x800C0930: lw          $a0, -0x7510($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7510);
    _gcnewpause_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800C0930: lw          $a0, -0x7510($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7510);
    after_0:
    // 0x800C0934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0938: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C093C: sw          $zero, -0x7510($at)
    MEM_W(-0X7510, ctx->r1) = 0;
    // 0x800C0940: jr          $ra
    // 0x800C0944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800C0944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800C0948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0948: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C094C: lw          $a0, -0x7510($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7510);
    // 0x800C0950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0958: beq         $a0, $zero, L_800C0970
    if (ctx->r4 == 0) {
        // 0x800C095C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800C0970;
    }
    // 0x800C095C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C0960: jal         0x80088208
    // 0x800C0964: nop

    _gcnewpause_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800C0964: nop

    after_0:
    // 0x800C0968: b           L_800C0970
    // 0x800C096C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C0970;
    // 0x800C096C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C0970:
    // 0x800C0970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800C097C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C0988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C098C: jal         0x800A8184
    // 0x800C0990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A8184(rdram, ctx);
        goto after_0;
    // 0x800C0990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C0994: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C0998: beq         $v0, $at, L_800C09C4
    if (ctx->r2 == ctx->r1) {
        // 0x800C099C: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_800C09C4;
    }
    // 0x800C099C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C09A0: lw          $t6, -0x5830($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5830);
    // 0x800C09A4: bnel        $t6, $zero, L_800C09B8
    if (ctx->r14 != 0) {
        // 0x800C09A8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_800C09B8;
    }
    goto skip_0;
    // 0x800C09A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_0:
    // 0x800C09AC: jal         0x800C1044
    // 0x800C09B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C1044(rdram, ctx);
        goto after_1;
    // 0x800C09B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800C09B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_800C09B8:
    // 0x800C09B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C09BC: b           L_800C0A1C
    // 0x800C09C0: sw          $t7, -0x5830($at)
    MEM_W(-0X5830, ctx->r1) = ctx->r15;
        goto L_800C0A1C;
    // 0x800C09C0: sw          $t7, -0x5830($at)
    MEM_W(-0X5830, ctx->r1) = ctx->r15;
L_800C09C4:
    // 0x800C09C4: jal         0x800A8178
    // 0x800C09C8: nop

    func_800A8178(rdram, ctx);
        goto after_2;
    // 0x800C09C8: nop

    after_2:
    // 0x800C09CC: bne         $v0, $zero, L_800C0A1C
    if (ctx->r2 != 0) {
        // 0x800C09D0: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_800C0A1C;
    }
    // 0x800C09D0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800C09D4: lw          $t8, -0x5830($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5830);
    // 0x800C09D8: beq         $t8, $zero, L_800C09FC
    if (ctx->r24 == 0) {
        // 0x800C09DC: nop
    
            goto L_800C09FC;
    }
    // 0x800C09DC: nop

    // 0x800C09E0: jal         0x800D58CC
    // 0x800C09E4: nop

    func_800D58CC(rdram, ctx);
        goto after_3;
    // 0x800C09E4: nop

    after_3:
    // 0x800C09E8: jal         0x800C0F8C
    // 0x800C09EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C0F8C(rdram, ctx);
        goto after_4;
    // 0x800C09EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x800C09F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C09F4: b           L_800C0A04
    // 0x800C09F8: sw          $zero, -0x5830($at)
    MEM_W(-0X5830, ctx->r1) = 0;
        goto L_800C0A04;
    // 0x800C09F8: sw          $zero, -0x5830($at)
    MEM_W(-0X5830, ctx->r1) = 0;
L_800C09FC:
    // 0x800C09FC: jal         0x800C0FD8
    // 0x800C0A00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C0FD8(rdram, ctx);
        goto after_5;
    // 0x800C0A00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
L_800C0A04:
    // 0x800C0A04: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C0A08: lw          $a1, -0x7510($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7510);
    // 0x800C0A0C: beql        $a1, $zero, L_800C0A20
    if (ctx->r5 == 0) {
        // 0x800C0A10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C0A20;
    }
    goto skip_1;
    // 0x800C0A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800C0A14: jal         0x80088210
    // 0x800C0A18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _gcnewpause_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x800C0A18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_6:
L_800C0A1C:
    // 0x800C0A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C0A20:
    // 0x800C0A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0A24: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0A2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0A34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0A38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C0A3C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800C0A40: lbu         $s1, 0x762C($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X762C);
    // 0x800C0A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C0A48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C0A4C: sltu        $t6, $zero, $s1
    ctx->r14 = 0 < ctx->r17 ? 1 : 0;
    // 0x800C0A50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C0A54: beq         $t6, $zero, L_800C0A90
    if (ctx->r14 == 0) {
        // 0x800C0A58: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_800C0A90;
    }
    // 0x800C0A58: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x800C0A5C: jal         0x800C95D4
    // 0x800C0A60: nop

    func_800C95D4(rdram, ctx);
        goto after_0;
    // 0x800C0A60: nop

    after_0:
    // 0x800C0A64: sltu        $s1, $zero, $v0
    ctx->r17 = 0 < ctx->r2 ? 1 : 0;
    // 0x800C0A68: beq         $s1, $zero, L_800C0A90
    if (ctx->r17 == 0) {
        // 0x800C0A6C: nop
    
            goto L_800C0A90;
    }
    // 0x800C0A6C: nop

    // 0x800C0A70: jal         0x800C9510
    // 0x800C0A74: nop

    func_800C9510(rdram, ctx);
        goto after_1;
    // 0x800C0A74: nop

    after_1:
    // 0x800C0A78: sltiu       $s1, $v0, 0x1
    ctx->r17 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800C0A7C: beq         $s1, $zero, L_800C0A90
    if (ctx->r17 == 0) {
        // 0x800C0A80: nop
    
            goto L_800C0A90;
    }
    // 0x800C0A80: nop

    // 0x800C0A84: jal         0x800C0638
    // 0x800C0A88: nop

    func_800C0638(rdram, ctx);
        goto after_2;
    // 0x800C0A88: nop

    after_2:
    // 0x800C0A8C: sltiu       $s1, $v0, 0x1
    ctx->r17 = ctx->r2 < 0X1 ? 1 : 0;
L_800C0A90:
    // 0x800C0A90: jal         0x800D3948
    // 0x800C0A94: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    func_800D3948(rdram, ctx);
        goto after_3;
    // 0x800C0A94: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    after_3:
    // 0x800C0A98: bne         $v0, $zero, L_800C0B08
    if (ctx->r2 != 0) {
        // 0x800C0A9C: nop
    
            goto L_800C0B08;
    }
    // 0x800C0A9C: nop

    // 0x800C0AA0: jal         0x800F54E4
    // 0x800C0AA4: nop

    func_800F54E4(rdram, ctx);
        goto after_4;
    // 0x800C0AA4: nop

    after_4:
    // 0x800C0AA8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800C0AAC: jal         0x800F6438
    // 0x800C0AB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6438(rdram, ctx);
        goto after_5;
    // 0x800C0AB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x800C0AB4: sltu        $s1, $zero, $v0
    ctx->r17 = 0 < ctx->r2 ? 1 : 0;
    // 0x800C0AB8: beql        $s1, $zero, L_800C0AD0
    if (ctx->r17 == 0) {
        // 0x800C0ABC: and         $s0, $s0, $s1
        ctx->r16 = ctx->r16 & ctx->r17;
            goto L_800C0AD0;
    }
    goto skip_0;
    // 0x800C0ABC: and         $s0, $s0, $s1
    ctx->r16 = ctx->r16 & ctx->r17;
    skip_0:
    // 0x800C0AC0: jal         0x800DB9B0
    // 0x800C0AC4: nop

    func_800DB9B0(rdram, ctx);
        goto after_6;
    // 0x800C0AC4: nop

    after_6:
    // 0x800C0AC8: sltiu       $s1, $v0, 0x1
    ctx->r17 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800C0ACC: and         $s0, $s0, $s1
    ctx->r16 = ctx->r16 & ctx->r17;
L_800C0AD0:
    // 0x800C0AD0: beql        $s0, $zero, L_800C0B9C
    if (ctx->r16 == 0) {
        // 0x800C0AD4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800C0B9C;
    }
    goto skip_1;
    // 0x800C0AD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x800C0AD8: jal         0x800F6774
    // 0x800C0ADC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800F6774(rdram, ctx);
        goto after_7;
    // 0x800C0ADC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x800C0AE0: beql        $v0, $zero, L_800C0B9C
    if (ctx->r2 == 0) {
        // 0x800C0AE4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800C0B9C;
    }
    goto skip_2;
    // 0x800C0AE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x800C0AE8: jal         0x80015FA0
    // 0x800C0AEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80015FA0(rdram, ctx);
        goto after_8;
    // 0x800C0AEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x800C0AF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C0AF4: bne         $v0, $at, L_800C0B98
    if (ctx->r2 != ctx->r1) {
        // 0x800C0AF8: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_800C0B98;
    }
    // 0x800C0AF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C0AFC: sw          $zero, -0x750C($at)
    MEM_W(-0X750C, ctx->r1) = 0;
    // 0x800C0B00: b           L_800C0B9C
    // 0x800C0B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C0B9C;
    // 0x800C0B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C0B08:
    // 0x800C0B08: beql        $s1, $zero, L_800C0B9C
    if (ctx->r17 == 0) {
        // 0x800C0B0C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800C0B9C;
    }
    goto skip_3;
    // 0x800C0B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x800C0B10: jal         0x80088368
    // 0x800C0B14: nop

    _gcstatusDll_entrypoint_11(rdram, ctx);
        goto after_9;
    // 0x800C0B14: nop

    after_9:
    // 0x800C0B18: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800C0B1C: jal         0x800DA298
    // 0x800C0B20: addiu       $a0, $zero, 0x6B6
    ctx->r4 = ADD32(0, 0X6B6);
    func_800DA298(rdram, ctx);
        goto after_10;
    // 0x800C0B20: addiu       $a0, $zero, 0x6B6
    ctx->r4 = ADD32(0, 0X6B6);
    after_10:
    // 0x800C0B24: sltu        $s1, $zero, $v0
    ctx->r17 = 0 < ctx->r2 ? 1 : 0;
    // 0x800C0B28: beq         $s1, $zero, L_800C0B3C
    if (ctx->r17 == 0) {
        // 0x800C0B2C: nop
    
            goto L_800C0B3C;
    }
    // 0x800C0B2C: nop

    // 0x800C0B30: jal         0x800DA298
    // 0x800C0B34: addiu       $a0, $zero, 0x6E3
    ctx->r4 = ADD32(0, 0X6E3);
    func_800DA298(rdram, ctx);
        goto after_11;
    // 0x800C0B34: addiu       $a0, $zero, 0x6E3
    ctx->r4 = ADD32(0, 0X6E3);
    after_11:
    // 0x800C0B38: sltiu       $s1, $v0, 0x1
    ctx->r17 = ctx->r2 < 0X1 ? 1 : 0;
L_800C0B3C:
    // 0x800C0B3C: blez        $s2, L_800C0B98
    if (SIGNED(ctx->r18) <= 0) {
        // 0x800C0B40: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800C0B98;
    }
    // 0x800C0B40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800C0B44:
    // 0x800C0B44: jal         0x80015FA0
    // 0x800C0B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80015FA0(rdram, ctx);
        goto after_12;
    // 0x800C0B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800C0B4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C0B50: bnel        $v0, $at, L_800C0B90
    if (ctx->r2 != ctx->r1) {
        // 0x800C0B54: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800C0B90;
    }
    goto skip_4;
    // 0x800C0B54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x800C0B58: bne         $s1, $zero, L_800C0B7C
    if (ctx->r17 != 0) {
        // 0x800C0B5C: nop
    
            goto L_800C0B7C;
    }
    // 0x800C0B5C: nop

    // 0x800C0B60: jal         0x800F6438
    // 0x800C0B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_13;
    // 0x800C0B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x800C0B68: beql        $v0, $zero, L_800C0B90
    if (ctx->r2 == 0) {
        // 0x800C0B6C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800C0B90;
    }
    goto skip_5;
    // 0x800C0B6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x800C0B70: jal         0x800F6774
    // 0x800C0B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6774(rdram, ctx);
        goto after_14;
    // 0x800C0B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x800C0B78: beq         $v0, $zero, L_800C0B8C
    if (ctx->r2 == 0) {
        // 0x800C0B7C: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_800C0B8C;
    }
L_800C0B7C:
    // 0x800C0B7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C0B80: sw          $s0, -0x750C($at)
    MEM_W(-0X750C, ctx->r1) = ctx->r16;
    // 0x800C0B84: b           L_800C0B9C
    // 0x800C0B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C0B9C;
    // 0x800C0B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C0B8C:
    // 0x800C0B8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800C0B90:
    // 0x800C0B90: bne         $s0, $s2, L_800C0B44
    if (ctx->r16 != ctx->r18) {
        // 0x800C0B94: nop
    
            goto L_800C0B44;
    }
    // 0x800C0B94: nop

L_800C0B98:
    // 0x800C0B98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C0B9C:
    // 0x800C0B9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C0BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C0BA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0BA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C0BAC: jr          $ra
    // 0x800C0BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C0BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C0BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0BB4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C0BB8: jr          $ra
    // 0x800C0BBC: lw          $v0, -0x750C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X750C);
    return;
    // 0x800C0BBC: lw          $v0, -0x750C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X750C);
;}
RECOMP_FUNC void func_800C0BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0BC0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x800C0BC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800C0BC8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800C0BCC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800C0BD0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800C0BD4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800C0BD8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800C0BDC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800C0BE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C0BE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C0BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C0BEC: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x800C0BF0: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x800C0BF4: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x800C0BF8: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800C0BFC: addiu       $t8, $t8, -0x5820
    ctx->r24 = ADD32(ctx->r24, -0X5820);
    // 0x800C0C00: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800C0C04: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800C0C08: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800C0C0C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800C0C10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0C14: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800C0C18: lui         $t9, 0xFF10
    ctx->r25 = S32(0XFF10 << 16);
    // 0x800C0C1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800C0C20: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x800C0C24: ori         $t9, $t9, 0x12F
    ctx->r25 = ctx->r25 | 0X12F;
    // 0x800C0C28: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800C0C2C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800C0C30: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x800C0C34: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x800C0C38: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0C3C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x800C0C40: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x800C0C44: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x800C0C48: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_800C0C4C:
    // 0x800C0C4C: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x800C0C50: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800C0C54: sll         $s6, $t3, 16
    ctx->r22 = S32(ctx->r11 << 16);
    // 0x800C0C58: sll         $s7, $v1, 2
    ctx->r23 = S32(ctx->r3 << 2);
    // 0x800C0C5C: andi        $t9, $s7, 0xFFF
    ctx->r25 = ctx->r23 & 0XFFF;
    // 0x800C0C60: sra         $t8, $s6, 16
    ctx->r24 = S32(SIGNED(ctx->r22) >> 16);
    // 0x800C0C64: sll         $t6, $fp, 2
    ctx->r14 = S32(ctx->r30 << 2);
    // 0x800C0C68: andi        $fp, $t6, 0xFFF
    ctx->r30 = ctx->r14 & 0XFFF;
    // 0x800C0C6C: or          $s6, $t8, $zero
    ctx->r22 = ctx->r24 | 0;
    // 0x800C0C70: or          $s7, $t9, $zero
    ctx->r23 = ctx->r25 | 0;
    // 0x800C0C74: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800C0C78: addiu       $t4, $zero, 0x47
    ctx->r12 = ADD32(0, 0X47);
    // 0x800C0C7C: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x800C0C80: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800C0C84: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x800C0C88: lh          $t2, 0x4E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4E);
    // 0x800C0C8C: sll         $t5, $v1, 5
    ctx->r13 = S32(ctx->r3 << 5);
L_800C0C90:
    // 0x800C0C90: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x800C0C94: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800C0C98: ori         $t9, $t9, 0x12F
    ctx->r25 = ctx->r25 | 0X12F;
    // 0x800C0C9C: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x800C0CA0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0CA4: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x800C0CA8: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x800C0CAC: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x800C0CB0: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x800C0CB4: jal         0x8002E330
    // 0x800C0CB8: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800C0CB8: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    after_0:
    // 0x800C0CBC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x800C0CC0: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x800C0CC4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x800C0CC8: sra         $a2, $t4, 3
    ctx->r6 = S32(SIGNED(ctx->r12) >> 3);
    // 0x800C0CCC: andi        $t6, $a2, 0x1FF
    ctx->r14 = ctx->r6 & 0X1FF;
    // 0x800C0CD0: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x800C0CD4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800C0CD8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800C0CDC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800C0CE0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800C0CE4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800C0CE8: lui         $t9, 0x708
    ctx->r25 = S32(0X708 << 16);
    // 0x800C0CEC: sll         $a3, $s2, 2
    ctx->r7 = S32(ctx->r18 << 2);
    // 0x800C0CF0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0CF4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800C0CF8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800C0CFC: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x800C0D00: andi        $t7, $a3, 0xFFF
    ctx->r15 = ctx->r7 & 0XFFF;
    // 0x800C0D04: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800C0D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C0D0C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800C0D10: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800C0D14: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x800C0D18: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x800C0D1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0D20: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800C0D24: sll         $t0, $s4, 2
    ctx->r8 = S32(ctx->r20 << 2);
    // 0x800C0D28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C0D2C: or          $t6, $t9, $s7
    ctx->r14 = ctx->r25 | ctx->r23;
    // 0x800C0D30: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x800C0D34: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x800C0D38: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800C0D3C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800C0D40: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800C0D44: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0D48: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800C0D4C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x800C0D50: or          $t6, $t9, $fp
    ctx->r14 = ctx->r25 | ctx->r30;
    // 0x800C0D54: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800C0D58: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0D5C: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x800C0D60: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x800C0D64: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x800C0D68: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800C0D6C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800C0D70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0D74: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800C0D78: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x800C0D7C: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800C0D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C0D84: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800C0D88: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x800C0D8C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800C0D90: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0D94: or          $t9, $a3, $at
    ctx->r25 = ctx->r7 | ctx->r1;
    // 0x800C0D98: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x800C0D9C: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800C0DA0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x800C0DA4: or          $t6, $t9, $s7
    ctx->r14 = ctx->r25 | ctx->r23;
    // 0x800C0DA8: or          $t7, $t0, $fp
    ctx->r15 = ctx->r8 | ctx->r30;
    // 0x800C0DAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0DB0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800C0DB4: blez        $t8, L_800C0DC4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800C0DB8: sw          $t7, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r15;
            goto L_800C0DC4;
    }
    // 0x800C0DB8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800C0DBC: b           L_800C0DC8
    // 0x800C0DC0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_800C0DC8;
    // 0x800C0DC0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_800C0DC4:
    // 0x800C0DC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C0DC8:
    // 0x800C0DC8: blez        $t2, L_800C0DD8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800C0DCC: lui         $at, 0xE400
        ctx->r1 = S32(0XE400 << 16);
            goto L_800C0DD8;
    }
    // 0x800C0DCC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800C0DD0: b           L_800C0DDC
    // 0x800C0DD4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_800C0DDC;
    // 0x800C0DD4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_800C0DD8:
    // 0x800C0DD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C0DDC:
    // 0x800C0DDC: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x800C0DE0: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800C0DE4: andi        $t9, $v0, 0xFFF
    ctx->r25 = ctx->r2 & 0XFFF;
    // 0x800C0DE8: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800C0DEC: sll         $a0, $s5, 16
    ctx->r4 = S32(ctx->r21 << 16);
    // 0x800C0DF0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x800C0DF4: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800C0DF8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x800C0DFC: blez        $t7, L_800C0E0C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800C0E00: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_800C0E0C;
    }
    // 0x800C0E00: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800C0E04: b           L_800C0E10
    // 0x800C0E08: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_800C0E10;
    // 0x800C0E08: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_800C0E0C:
    // 0x800C0E0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C0E10:
    // 0x800C0E10: blez        $s6, L_800C0E20
    if (SIGNED(ctx->r22) <= 0) {
        // 0x800C0E14: andi        $t8, $v1, 0xFFF
        ctx->r24 = ctx->r3 & 0XFFF;
            goto L_800C0E20;
    }
    // 0x800C0E14: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x800C0E18: b           L_800C0E24
    // 0x800C0E1C: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
        goto L_800C0E24;
    // 0x800C0E1C: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
L_800C0E20:
    // 0x800C0E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C0E24:
    // 0x800C0E24: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x800C0E28: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800C0E2C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x800C0E30: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x800C0E34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C0E38: lui         $t8, 0xE100
    ctx->r24 = S32(0XE100 << 16);
    // 0x800C0E3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0E40: bgez        $a0, L_800C0E68
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800C0E44: sw          $t8, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r24;
            goto L_800C0E68;
    }
    // 0x800C0E44: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800C0E48: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x800C0E4C: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800C0E50: bgez        $t6, L_800C0E60
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800C0E54: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800C0E60;
    }
    // 0x800C0E54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C0E58: b           L_800C0E6C
    // 0x800C0E5C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_800C0E6C;
    // 0x800C0E5C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_800C0E60:
    // 0x800C0E60: b           L_800C0E6C
    // 0x800C0E64: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_800C0E6C;
    // 0x800C0E64: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_800C0E68:
    // 0x800C0E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800C0E6C:
    // 0x800C0E6C: bgez        $t3, L_800C0E94
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800C0E70: sll         $t6, $s2, 5
        ctx->r14 = S32(ctx->r18 << 5);
            goto L_800C0E94;
    }
    // 0x800C0E70: sll         $t6, $s2, 5
    ctx->r14 = S32(ctx->r18 << 5);
    // 0x800C0E74: sll         $v0, $s6, 10
    ctx->r2 = S32(ctx->r22 << 10);
    // 0x800C0E78: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800C0E7C: bgez        $t9, L_800C0E8C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800C0E80: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800C0E8C;
    }
    // 0x800C0E80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C0E84: b           L_800C0E98
    // 0x800C0E88: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800C0E98;
    // 0x800C0E88: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800C0E8C:
    // 0x800C0E8C: b           L_800C0E98
    // 0x800C0E90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800C0E98;
    // 0x800C0E90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800C0E94:
    // 0x800C0E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C0E98:
    // 0x800C0E98: subu        $t7, $t5, $v0
    ctx->r15 = SUB32(ctx->r13, ctx->r2);
    // 0x800C0E9C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800C0EA0: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x800C0EA4: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x800C0EA8: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x800C0EAC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800C0EB0: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x800C0EB4: addiu       $s3, $s3, 0x80
    ctx->r19 = ADD32(ctx->r19, 0X80);
    // 0x800C0EB8: addiu       $at, $zero, 0x580
    ctx->r1 = ADD32(0, 0X580);
    // 0x800C0EBC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x800C0EC0: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x800C0EC4: lui         $t7, 0xF100
    ctx->r15 = S32(0XF100 << 16);
    // 0x800C0EC8: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x800C0ECC: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x800C0ED0: addiu       $s5, $s5, 0x80
    ctx->r21 = ADD32(ctx->r21, 0X80);
    // 0x800C0ED4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0ED8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800C0EDC: bne         $s3, $at, L_800C0C90
    if (ctx->r19 != ctx->r1) {
        // 0x800C0EE0: sw          $t8, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r24;
            goto L_800C0C90;
    }
    // 0x800C0EE0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800C0EE4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x800C0EE8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800C0EEC: addiu       $at, $zero, 0x480
    ctx->r1 = ADD32(0, 0X480);
    // 0x800C0EF0: addiu       $t9, $t6, 0x20
    ctx->r25 = ADD32(ctx->r14, 0X20);
    // 0x800C0EF4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800C0EF8: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x800C0EFC: addiu       $t8, $t7, 0x20
    ctx->r24 = ADD32(ctx->r15, 0X20);
    // 0x800C0F00: addiu       $t9, $t6, 0x80
    ctx->r25 = ADD32(ctx->r14, 0X80);
    // 0x800C0F04: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800C0F08: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x800C0F0C: bne         $t9, $at, L_800C0C4C
    if (ctx->r25 != ctx->r1) {
        // 0x800C0F10: addiu       $t3, $t3, 0x80
        ctx->r11 = ADD32(ctx->r11, 0X80);
            goto L_800C0C4C;
    }
    // 0x800C0F10: addiu       $t3, $t3, 0x80
    ctx->r11 = ADD32(ctx->r11, 0X80);
    // 0x800C0F14: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800C0F18: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800C0F1C: addiu       $t8, $t8, -0x57C0
    ctx->r24 = ADD32(ctx->r24, -0X57C0);
    // 0x800C0F20: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C0F24: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800C0F28: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x800C0F2C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800C0F30: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800C0F34: ori         $t6, $t6, 0x12F
    ctx->r14 = ctx->r14 | 0X12F;
    // 0x800C0F38: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800C0F3C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x800C0F40: jal         0x80014F00
    // 0x800C0F44: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    func_80014F00(rdram, ctx);
        goto after_1;
    // 0x800C0F44: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x800C0F48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800C0F4C: addu        $t9, $v0, $at
    ctx->r25 = ADD32(ctx->r2, ctx->r1);
    // 0x800C0F50: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x800C0F54: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x800C0F58: sw          $s0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r16;
    // 0x800C0F5C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800C0F60: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800C0F64: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800C0F68: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800C0F6C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800C0F70: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800C0F74: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800C0F78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C0F7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0F80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C0F84: jr          $ra
    // 0x800C0F88: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x800C0F88: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
