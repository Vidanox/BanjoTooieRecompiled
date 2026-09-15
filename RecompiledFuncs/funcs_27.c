#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800C0F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0F8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C0F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0F94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C0F98: jal         0x800EA34C
    // 0x800C0F9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800EA34C(rdram, ctx);
        goto after_0;
    // 0x800C0F9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800C0FA0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C0FA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C0FA8: jal         0x8001A0A8
    // 0x800C0FAC: sw          $t6, -0x7500($at)
    MEM_W(-0X7500, ctx->r1) = ctx->r14;
    func_8001A0A8(rdram, ctx);
        goto after_1;
    // 0x800C0FAC: sw          $t6, -0x7500($at)
    MEM_W(-0X7500, ctx->r1) = ctx->r14;
    after_1:
    // 0x800C0FB0: jal         0x80014F00
    // 0x800C0FB4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80014F00(rdram, ctx);
        goto after_2;
    // 0x800C0FB4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x800C0FB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C0FBC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800C0FC0: jal         0x800C0BC0
    // 0x800C0FC4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800C0BC0(rdram, ctx);
        goto after_3;
    // 0x800C0FC4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_3:
    // 0x800C0FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C0FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C0FD0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C0FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0FD8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C0FDC: addiu       $v1, $v1, -0x7500
    ctx->r3 = ADD32(ctx->r3, -0X7500);
    // 0x800C0FE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800C0FE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C0FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0FEC: bne         $v0, $zero, L_800C100C
    if (ctx->r2 != 0) {
        // 0x800C0FF0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_800C100C;
    }
    // 0x800C0FF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C0FF4: jal         0x800D6E54
    // 0x800C0FF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800D6E54(rdram, ctx);
        goto after_0;
    // 0x800C0FF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x800C0FFC: jal         0x800FFD10
    // 0x800C1000: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800FFD10(rdram, ctx);
        goto after_1;
    // 0x800C1000: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x800C1004: b           L_800C1014
    // 0x800C1008: nop

        goto L_800C1014;
    // 0x800C1008: nop

L_800C100C:
    // 0x800C100C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x800C1010: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800C1014:
    // 0x800C1014: jal         0x80014F00
    // 0x800C1018: nop

    func_80014F00(rdram, ctx);
        goto after_2;
    // 0x800C1018: nop

    after_2:
    // 0x800C101C: jal         0x8001A0A8
    // 0x800C1020: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001A0A8(rdram, ctx);
        goto after_3;
    // 0x800C1020: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x800C1024: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C1028: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800C102C: jal         0x800C0BC0
    // 0x800C1030: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800C0BC0(rdram, ctx);
        goto after_4;
    // 0x800C1030: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_4:
    // 0x800C1034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C1038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C103C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C104C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C1050: jal         0x800EA34C
    // 0x800C1054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800EA34C(rdram, ctx);
        goto after_0;
    // 0x800C1054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800C1058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C105C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C1060: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1070: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C1074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C1078: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C107C: jal         0x800F5310
    // 0x800C1080: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_800F5310(rdram, ctx);
        goto after_0;
    // 0x800C1080: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C1084: beq         $v0, $zero, L_800C10EC
    if (ctx->r2 == 0) {
        // 0x800C1088: nop
    
            goto L_800C10EC;
    }
    // 0x800C1088: nop

    // 0x800C108C: jal         0x800EA068
    // 0x800C1090: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x800C1090: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x800C1094: beq         $v0, $zero, L_800C10B0
    if (ctx->r2 == 0) {
        // 0x800C1098: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_800C10B0;
    }
    // 0x800C1098: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C109C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C10A0: jal         0x80087898
    // 0x800C10A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    _plsu_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x800C10A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x800C10A8: b           L_800C10F8
    // 0x800C10AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C10F8;
    // 0x800C10AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C10B0:
    // 0x800C10B0: jal         0x80087898
    // 0x800C10B4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    _plsu_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x800C10B4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x800C10B8: jal         0x800F5EF8
    // 0x800C10BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5EF8(rdram, ctx);
        goto after_4;
    // 0x800C10BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800C10C0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800C10C4: jal         0x8010FFA8
    // 0x800C10C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFA8(rdram, ctx);
        goto after_5;
    // 0x800C10C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x800C10CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C10D0: beq         $v0, $at, L_800C10F4
    if (ctx->r2 == ctx->r1) {
        // 0x800C10D4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_800C10F4;
    }
    // 0x800C10D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C10D8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800C10DC: jal         0x8010FFB0
    // 0x800C10E0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_8010FFB0(rdram, ctx);
        goto after_6;
    // 0x800C10E0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_6:
    // 0x800C10E4: b           L_800C10F8
    // 0x800C10E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C10F8;
    // 0x800C10E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C10EC:
    // 0x800C10EC: jal         0x800E3980
    // 0x800C10F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800E3980(rdram, ctx);
        goto after_7;
    // 0x800C10F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
L_800C10F4:
    // 0x800C10F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C10F8:
    // 0x800C10F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C10FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1104: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C1108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C110C: jal         0x800F5310
    // 0x800C1110: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800F5310(rdram, ctx);
        goto after_0;
    // 0x800C1110: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C1114: beq         $v0, $zero, L_800C11CC
    if (ctx->r2 == 0) {
        // 0x800C1118: nop
    
            goto L_800C11CC;
    }
    // 0x800C1118: nop

    // 0x800C111C: jal         0x800EA068
    // 0x800C1120: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x800C1120: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x800C1124: beq         $v0, $zero, L_800C115C
    if (ctx->r2 == 0) {
        // 0x800C1128: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_800C115C;
    }
    // 0x800C1128: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800C112C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800C1130: jal         0x80087898
    // 0x800C1134: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    _plsu_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x800C1134: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x800C1138: jal         0x800F5D18
    // 0x800C113C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5D18(rdram, ctx);
        goto after_3;
    // 0x800C113C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800C1140: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C1144: bne         $v0, $at, L_800C1154
    if (ctx->r2 != ctx->r1) {
        // 0x800C1148: nop
    
            goto L_800C1154;
    }
    // 0x800C1148: nop

    // 0x800C114C: b           L_800C11E8
    // 0x800C1150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C11E8;
    // 0x800C1150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C1154:
    // 0x800C1154: b           L_800C11E8
    // 0x800C1158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C11E8;
    // 0x800C1158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C115C:
    // 0x800C115C: jal         0x80087898
    // 0x800C1160: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    _plsu_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x800C1160: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x800C1164: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800C1168: jal         0x800F5EF8
    // 0x800C116C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5EF8(rdram, ctx);
        goto after_5;
    // 0x800C116C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x800C1170: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800C1174: jal         0x8010FFA8
    // 0x800C1178: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFA8(rdram, ctx);
        goto after_6;
    // 0x800C1178: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x800C117C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C1180: bne         $v0, $at, L_800C11AC
    if (ctx->r2 != ctx->r1) {
        // 0x800C1184: nop
    
            goto L_800C11AC;
    }
    // 0x800C1184: nop

    // 0x800C1188: jal         0x800F5D18
    // 0x800C118C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800F5D18(rdram, ctx);
        goto after_7;
    // 0x800C118C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_7:
    // 0x800C1190: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C1194: bne         $v0, $at, L_800C11A4
    if (ctx->r2 != ctx->r1) {
        // 0x800C1198: nop
    
            goto L_800C11A4;
    }
    // 0x800C1198: nop

    // 0x800C119C: b           L_800C11E8
    // 0x800C11A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C11E8;
    // 0x800C11A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C11A4:
    // 0x800C11A4: b           L_800C11E8
    // 0x800C11A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C11E8;
    // 0x800C11A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C11AC:
    // 0x800C11AC: jal         0x8010FFD8
    // 0x800C11B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8010FFD8(rdram, ctx);
        goto after_8;
    // 0x800C11B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_8:
    // 0x800C11B4: beq         $v0, $zero, L_800C11C4
    if (ctx->r2 == 0) {
        // 0x800C11B8: nop
    
            goto L_800C11C4;
    }
    // 0x800C11B8: nop

    // 0x800C11BC: b           L_800C11E8
    // 0x800C11C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C11E8;
    // 0x800C11C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C11C4:
    // 0x800C11C4: b           L_800C11E8
    // 0x800C11C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C11E8;
    // 0x800C11C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C11CC:
    // 0x800C11CC: jal         0x800A5490
    // 0x800C11D0: nop

    func_800A5490(rdram, ctx);
        goto after_9;
    // 0x800C11D0: nop

    after_9:
    // 0x800C11D4: beql        $v0, $zero, L_800C11E8
    if (ctx->r2 == 0) {
        // 0x800C11D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800C11E8;
    }
    goto skip_0;
    // 0x800C11D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800C11DC: b           L_800C11E8
    // 0x800C11E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C11E8;
    // 0x800C11E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C11E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C11E8:
    // 0x800C11E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C11EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C11F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C11F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C11F8: lbu         $t9, 0x7A($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7A);
    // 0x800C11FC: sll         $t8, $a1, 5
    ctx->r24 = S32(ctx->r5 << 5);
    // 0x800C1200: andi        $t0, $t9, 0xFF1F
    ctx->r8 = ctx->r25 & 0XFF1F;
    // 0x800C1204: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800C1208: jr          $ra
    // 0x800C120C: sb          $t1, 0x7A($a0)
    MEM_B(0X7A, ctx->r4) = ctx->r9;
    return;
    // 0x800C120C: sb          $t1, 0x7A($a0)
    MEM_B(0X7A, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_800C1210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1210: lbu         $t9, 0x7A($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7A);
    // 0x800C1214: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800C1218: andi        $t8, $t7, 0x1C
    ctx->r24 = ctx->r15 & 0X1C;
    // 0x800C121C: andi        $t0, $t9, 0xFFE3
    ctx->r8 = ctx->r25 & 0XFFE3;
    // 0x800C1220: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800C1224: jr          $ra
    // 0x800C1228: sb          $t1, 0x7A($a0)
    MEM_B(0X7A, ctx->r4) = ctx->r9;
    return;
    // 0x800C1228: sb          $t1, 0x7A($a0)
    MEM_B(0X7A, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_800C122C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C122C: beq         $a3, $zero, L_800C1254
    if (ctx->r7 == 0) {
        // 0x800C1230: nop
    
            goto L_800C1254;
    }
    // 0x800C1230: nop

    // 0x800C1234: beq         $a1, $zero, L_800C1244
    if (ctx->r5 == 0) {
        // 0x800C1238: nop
    
            goto L_800C1244;
    }
    // 0x800C1238: nop

    // 0x800C123C: bne         $a2, $zero, L_800C124C
    if (ctx->r6 != 0) {
        // 0x800C1240: nop
    
            goto L_800C124C;
    }
    // 0x800C1240: nop

L_800C1244:
    // 0x800C1244: jr          $ra
    // 0x800C1248: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800C1248: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800C124C:
    // 0x800C124C: jr          $ra
    // 0x800C1250: addiu       $v0, $a0, 0x80
    ctx->r2 = ADD32(ctx->r4, 0X80);
    return;
    // 0x800C1250: addiu       $v0, $a0, 0x80
    ctx->r2 = ADD32(ctx->r4, 0X80);
L_800C1254:
    // 0x800C1254: beq         $a1, $zero, L_800C1264
    if (ctx->r5 == 0) {
        // 0x800C1258: lui         $at, 0x42FE
        ctx->r1 = S32(0X42FE << 16);
            goto L_800C1264;
    }
    // 0x800C1258: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x800C125C: bnel        $a2, $zero, L_800C1300
    if (ctx->r6 != 0) {
            // 0x800C1260: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    static_3_800C1300(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C1260: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    skip_0:
L_800C1264:
    // 0x800C1264: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800C1268: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C126C: lwc1        $f8, -0x5790($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5790);
    // 0x800C1270: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x800C1274: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1278: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800C127C: lwc1        $f18, -0x578C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X578C);
    // 0x800C1280: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800C1284: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C1288: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800C128C: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800C1290: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800C1294: nop

    // 0x800C1298: bc1fl       L_800C12AC
    if (!c1cs) {
        // 0x800C129C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800C12AC;
    }
    goto skip_1;
    // 0x800C129C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x800C12A0: b           L_800C12AC
    // 0x800C12A4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C12AC;
    // 0x800C12A4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800C12A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C12AC:
    // 0x800C12AC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x800C12B0: nop

    // 0x800C12B4: bc1fl       L_800C12D0
    if (!c1cs) {
        // 0x800C12B8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_800C12D0;
    }
    goto skip_2;
    // 0x800C12B8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
    // 0x800C12BC: trunc.w.s   $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x800C12C0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800C12C4: jr          $ra
    // 0x800C12C8: nop

    return;
    // 0x800C12C8: nop

    // 0x800C12CC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_800C12D0:
    // 0x800C12D0: nop

    // 0x800C12D4: bc1fl       L_800C12E8
    if (!c1cs) {
        // 0x800C12D8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800C12E8;
    }
    goto skip_3;
    // 0x800C12D8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x800C12DC: b           L_800C12E8
    // 0x800C12E0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C12E8;
    // 0x800C12E0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800C12E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C12E8:
    // 0x800C12E8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800C12EC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800C12F0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800C12F4: jr          $ra
    // 0x800C12F8: nop

    return;
    // 0x800C12F8: nop

;}
RECOMP_FUNC void func_800C12FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C12FC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x800C1300: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800C1304: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1308: lwc1        $f10, -0x5790($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5790);
    // 0x800C130C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x800C1310: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1314: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800C1318: lwc1        $f4, -0x578C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X578C);
    // 0x800C131C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x800C1320: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800C1324: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C1328: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C132C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800C1330: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800C1334: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800C1338: nop

    // 0x800C133C: bc1fl       L_800C1350
    if (!c1cs) {
        // 0x800C1340: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800C1350;
    }
    goto skip_0;
    // 0x800C1340: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x800C1344: b           L_800C1350
    // 0x800C1348: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C1350;
    // 0x800C1348: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800C134C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C1350:
    // 0x800C1350: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x800C1354: nop

    // 0x800C1358: bc1fl       L_800C136C
    if (!c1cs) {
        // 0x800C135C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_800C136C;
    }
    goto skip_1;
    // 0x800C135C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_1:
    // 0x800C1360: b           L_800C1388
    // 0x800C1364: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_800C1388;
    // 0x800C1364: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x800C1368: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_800C136C:
    // 0x800C136C: nop

    // 0x800C1370: bc1fl       L_800C1384
    if (!c1cs) {
        // 0x800C1374: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800C1384;
    }
    goto skip_2;
    // 0x800C1374: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x800C1378: b           L_800C1384
    // 0x800C137C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C1384;
    // 0x800C137C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800C1380: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C1384:
    // 0x800C1384: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800C1388:
    // 0x800C1388: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x800C138C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C1390: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800C1394: nop

    // 0x800C1398: jr          $ra
    // 0x800C139C: nop

    return;
    // 0x800C139C: nop

;}
RECOMP_FUNC void func_800C13A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C13A0: lhu         $t6, 0x7C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7C);
    // 0x800C13A4: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x800C13A8: jr          $ra
    // 0x800C13AC: sh          $t7, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r15;
    return;
    // 0x800C13AC: sh          $t7, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800C13B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C13B0: lhu         $t6, 0x7C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7C);
    // 0x800C13B4: nor         $t7, $a1, $zero
    ctx->r15 = ~(ctx->r5 | 0);
    // 0x800C13B8: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x800C13BC: jr          $ra
    // 0x800C13C0: sh          $t8, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r24;
    return;
    // 0x800C13C0: sh          $t8, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800C13C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C13C4: lhu         $t6, 0x7C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7C);
    // 0x800C13C8: jr          $ra
    // 0x800C13CC: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
    return;
    // 0x800C13CC: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
;}
RECOMP_FUNC void func_800C13D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C13D0: lhu         $t6, 0x7C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7C);
    // 0x800C13D4: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
    // 0x800C13D8: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800C13DC: jr          $ra
    // 0x800C13E0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x800C13E0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void func_800C13E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C13E4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C13E8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C13EC: addiu       $v0, $v0, -0x5670
    ctx->r2 = ADD32(ctx->r2, -0X5670);
    // 0x800C13F0: addiu       $v1, $v1, -0x7470
    ctx->r3 = ADD32(ctx->r3, -0X7470);
L_800C13F4:
    // 0x800C13F4: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x800C13F8: sb          $zero, -0x108($v1)
    MEM_B(-0X108, ctx->r3) = 0;
    // 0x800C13FC: sb          $zero, -0x88($v1)
    MEM_B(-0X88, ctx->r3) = 0;
    // 0x800C1400: sb          $zero, -0x8($v1)
    MEM_B(-0X8, ctx->r3) = 0;
    // 0x800C1404: bne         $v1, $v0, L_800C13F4
    if (ctx->r3 != ctx->r2) {
        // 0x800C1408: sb          $zero, -0x188($v1)
        MEM_B(-0X188, ctx->r3) = 0;
            goto L_800C13F4;
    }
    // 0x800C1408: sb          $zero, -0x188($v1)
    MEM_B(-0X188, ctx->r3) = 0;
    // 0x800C140C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1414: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C1418: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800C141C: addiu       $t8, $t8, -0x7470
    ctx->r24 = ADD32(ctx->r24, -0X7470);
    // 0x800C1420: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x800C1424: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800C1428: jr          $ra
    // 0x800C142C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x800C142C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_800C1430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1430: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800C1434: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800C1438: addiu       $t8, $t8, -0x74F0
    ctx->r24 = ADD32(ctx->r24, -0X74F0);
    // 0x800C143C: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x800C1440: jr          $ra
    // 0x800C1444: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x800C1444: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_800C1448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1448: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800C144C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C1450: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800C1454: jr          $ra
    // 0x800C1458: lw          $v0, -0x74F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X74F8);
    return;
    // 0x800C1458: lw          $v0, -0x74F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X74F8);
;}
RECOMP_FUNC void func_800C145C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C145C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C1460: lbu         $t6, -0x7378($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7378);
    // 0x800C1464: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800C1468: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C146C: bne         $t6, $zero, L_800C1480
    if (ctx->r14 != 0) {
            // 0x800C1470: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    func_800C1480(rdram, ctx);
    return;
    }
    // 0x800C1470: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C1474: sb          $t7, -0x7378($at)
    MEM_B(-0X7378, ctx->r1) = ctx->r15;
    // 0x800C1478: jr          $ra
    // 0x800C147C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800C147C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800C1480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1480: lbu         $t8, -0x72F8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X72F8);
    // 0x800C1484: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800C1488: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800C148C: bne         $t8, $zero, L_800C14A0
    if (ctx->r24 != 0) {
            // 0x800C1490: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    func_800C14A0(rdram, ctx);
    return;
    }
    // 0x800C1490: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C1494: sb          $t9, -0x72F8($at)
    MEM_B(-0X72F8, ctx->r1) = ctx->r25;
    // 0x800C1498: jr          $ra
    // 0x800C149C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800C149C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800C14A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C14A0: lbu         $t0, -0x7278($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X7278);
    // 0x800C14A4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C14A8: addiu       $a0, $a0, -0x7270
    ctx->r4 = ADD32(ctx->r4, -0X7270);
    // 0x800C14AC: bne         $t0, $zero, L_800C14C8
    if (ctx->r8 != 0) {
            // 0x800C14B0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    func_800C14C8(rdram, ctx);
    return;
    }
    // 0x800C14B0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x800C14B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C14B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C14BC: sb          $t1, -0x7278($at)
    MEM_B(-0X7278, ctx->r1) = ctx->r9;
    // 0x800C14C0: jr          $ra
    // 0x800C14C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800C14C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_800C14C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C14C8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x800C14CC: lbu         $t2, 0x78($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X78);
    // 0x800C14D0: bne         $t2, $zero, L_800C14E4
    if (ctx->r10 != 0) {
            // 0x800C14D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    func_800C14E4(rdram, ctx);
    return;
    }
    // 0x800C14D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C14D8: sb          $t3, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r11;
    // 0x800C14DC: jr          $ra
    // 0x800C14E0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x800C14E0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void func_800C14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C14E4: lbu         $t4, 0xF8($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XF8);
    // 0x800C14E8: bnel        $t4, $zero, L_800C150C
    if (ctx->r12 != 0) {
            // 0x800C14EC: lbu         $t7, 0x178($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X178);
    static_3_800C150C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C14EC: lbu         $t7, 0x178($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X178);
    skip_0:
    // 0x800C14F0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800C14F4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x800C14F8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800C14FC: sb          $t5, 0xF8($a0)
    MEM_B(0XF8, ctx->r4) = ctx->r13;
    // 0x800C1500: jr          $ra
    // 0x800C1504: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800C1504: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_800C1508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1508: lbu         $t7, 0x178($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X178);
    // 0x800C150C: bnel        $t7, $zero, L_800C1530
    if (ctx->r15 != 0) {
            // 0x800C1510: lbu         $t0, 0x1F8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1F8);
    static_3_800C1530(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C1510: lbu         $t0, 0x1F8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1F8);
    skip_0:
    // 0x800C1514: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x800C1518: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800C151C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C1520: sb          $t8, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r24;
    // 0x800C1524: jr          $ra
    // 0x800C1528: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x800C1528: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void func_800C152C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C152C: lbu         $t0, 0x1F8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1F8);
    // 0x800C1530: bnel        $t0, $zero, L_800C1554
    if (ctx->r8 != 0) {
            // 0x800C1534: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800C1554(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C1534: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800C1538: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x800C153C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x800C1540: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C1544: sb          $t1, 0x1F8($a0)
    MEM_B(0X1F8, ctx->r4) = ctx->r9;
    // 0x800C1548: jr          $ra
    // 0x800C154C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x800C154C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_800C1550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800C14CC:
    // 0x800C1550: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800C1554: bne         $v1, $v0, L_800C14CC
    if (ctx->r3 != ctx->r2) {
            // 0x800C1558: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    static_3_800C14CC(rdram, ctx);
    return;
    }
    // 0x800C1558: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x800C155C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C1560: jr          $ra
    // 0x800C1564: nop

    return;
    // 0x800C1564: nop

;}
RECOMP_FUNC void func_800C1568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1568: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800C156C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C1570: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C1574: jr          $ra
    // 0x800C1578: sw          $zero, -0x74F4($at)
    MEM_W(-0X74F4, ctx->r1) = 0;
    return;
    // 0x800C1578: sw          $zero, -0x74F4($at)
    MEM_W(-0X74F4, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800C157C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C157C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C1580: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C1584: addiu       $v0, $v0, -0x7470
    ctx->r2 = ADD32(ctx->r2, -0X7470);
    // 0x800C1588: addiu       $v1, $v1, -0x74F0
    ctx->r3 = ADD32(ctx->r3, -0X74F0);
L_800C158C:
    // 0x800C158C: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800C1590: sw          $zero, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = 0;
    // 0x800C1594: sw          $zero, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = 0;
    // 0x800C1598: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x800C159C: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x800C15A0: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x800C15A4: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x800C15A8: sw          $zero, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = 0;
    // 0x800C15AC: bne         $v1, $v0, L_800C158C
    if (ctx->r3 != ctx->r2) {
        // 0x800C15B0: sw          $zero, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = 0;
            goto L_800C158C;
    }
    // 0x800C15B0: sw          $zero, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = 0;
    // 0x800C15B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C15BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C15BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800C15C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C15C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C15C8: addiu       $a0, $a0, -0x74F0
    ctx->r4 = ADD32(ctx->r4, -0X74F0);
    // 0x800C15CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C15D0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800C15D4: beql        $t6, $zero, L_800C15E8
    if (ctx->r14 == 0) {
        // 0x800C15D8: lw          $t7, 0x0($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X0);
            goto L_800C15E8;
    }
    goto skip_0;
    // 0x800C15D8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800C15DC: b           L_800C15FC
    // 0x800C15E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    func_800C15FC(rdram, ctx);
    return;
    // 0x800C15E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C15E4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_800C15E8:
    // 0x800C15E8: bne         $t7, $zero, L_800C15FC
    if (ctx->r15 != 0) {
            // 0x800C15EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    func_800C15FC(rdram, ctx);
    return;
    }
    // 0x800C15EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C15F0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800C15F4: jr          $ra
    // 0x800C15F8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x800C15F8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
;}
RECOMP_FUNC void func_800C15FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C15FC: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x800C1600: beql        $t9, $zero, L_800C1614
    if (ctx->r25 == 0) {
        // 0x800C1604: lw          $t0, 0x8($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X8);
            goto L_800C1614;
    }
    goto skip_0;
    // 0x800C1604: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x800C1608: b           L_800C1628
    // 0x800C160C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    func_800C1628(rdram, ctx);
    return;
    // 0x800C160C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C1610: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
L_800C1614:
    // 0x800C1614: bne         $t0, $zero, L_800C1628
    if (ctx->r8 != 0) {
            // 0x800C1618: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    func_800C1628(rdram, ctx);
    return;
    }
    // 0x800C1618: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C161C: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x800C1620: jr          $ra
    // 0x800C1624: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x800C1624: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
;}
RECOMP_FUNC void func_800C1628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1628: lw          $t2, 0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X14);
    // 0x800C162C: beql        $t2, $zero, L_800C1640
    if (ctx->r10 == 0) {
        // 0x800C1630: lw          $t3, 0x10($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X10);
            goto L_800C1640;
    }
    goto skip_0;
    // 0x800C1630: lw          $t3, 0x10($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X10);
    skip_0:
    // 0x800C1634: b           L_800C1654
    // 0x800C1638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    func_800C1654(rdram, ctx);
    return;
    // 0x800C1638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C163C: lw          $t3, 0x10($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X10);
L_800C1640:
    // 0x800C1640: bne         $t3, $zero, L_800C1654
    if (ctx->r11 != 0) {
            // 0x800C1644: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    func_800C1654(rdram, ctx);
    return;
    }
    // 0x800C1644: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C1648: sw          $t4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r12;
    // 0x800C164C: jr          $ra
    // 0x800C1650: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x800C1650: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
;}
RECOMP_FUNC void func_800C1654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1654: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x800C1658: beql        $t5, $zero, L_800C166C
    if (ctx->r13 == 0) {
        // 0x800C165C: lw          $t6, 0x18($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X18);
            goto L_800C166C;
    }
    goto skip_0;
    // 0x800C165C: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    skip_0:
    // 0x800C1660: b           L_800C1680
    // 0x800C1664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    func_800C1680(rdram, ctx);
    return;
    // 0x800C1664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C1668: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
L_800C166C:
    // 0x800C166C: bne         $t6, $zero, L_800C1680
    if (ctx->r14 != 0) {
            // 0x800C1670: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    func_800C1680(rdram, ctx);
    return;
    }
    // 0x800C1670: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C1674: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x800C1678: jr          $ra
    // 0x800C167C: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    return;
    // 0x800C167C: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
;}
RECOMP_FUNC void func_800C1680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800C15C0:
    // 0x800C1680: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_800C15D0:
    // 0x800C1684: bne         $v1, $a1, L_800C15D0
    if (ctx->r3 != ctx->r5) {
            // 0x800C1688: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_800C15D0(rdram, ctx);
    return;
    }
    // 0x800C1688: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x800C168C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x800C1690: bne         $at, $zero, L_800C15C0
    if (ctx->r1 != 0) {
            // 0x800C1694: nop

    static_3_800C15C0(rdram, ctx);
    return;
    }
    // 0x800C1694: nop

    // 0x800C1698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C169C: jr          $ra
    // 0x800C16A0: nop

    return;
    // 0x800C16A0: nop

;}
RECOMP_FUNC void func_800C16A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C16A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C16A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C16AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C16B0: jal         0x800C1414
    // 0x800C16B4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C16B4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_0:
    // 0x800C16B8: lbu         $t6, 0x79($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X79);
    // 0x800C16BC: beql        $t6, $zero, L_800C16DC
    if (ctx->r14 == 0) {
        // 0x800C16C0: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_800C16DC;
    }
    goto skip_0;
    // 0x800C16C0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_0:
    // 0x800C16C4: lbu         $a0, 0x79($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X79);
    // 0x800C16C8: jal         0x800C1568
    // 0x800C16CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800C1568(rdram, ctx);
        goto after_1;
    // 0x800C16CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C16D0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800C16D4: sb          $zero, 0x79($v1)
    MEM_B(0X79, ctx->r3) = 0;
    // 0x800C16D8: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_800C16DC:
    // 0x800C16DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C16E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C16E4: sll         $t8, $t7, 7
    ctx->r24 = S32(ctx->r15 << 7);
    // 0x800C16E8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C16EC: sb          $zero, -0x73F8($at)
    MEM_B(-0X73F8, ctx->r1) = 0;
    // 0x800C16F0: jr          $ra
    // 0x800C16F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C16F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C16F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C16F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C16FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C1700: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C1704: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C1708: beq         $a1, $zero, L_800C184C
    if (ctx->r5 == 0) {
        // 0x800C170C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800C184C;
    }
    // 0x800C170C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C1710: lbu         $v0, 0x79($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X79);
    // 0x800C1714: beq         $v0, $zero, L_800C1728
    if (ctx->r2 == 0) {
        // 0x800C1718: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C1728;
    }
    // 0x800C1718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C171C: jal         0x800C1568
    // 0x800C1720: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_800C1568(rdram, ctx);
        goto after_0;
    // 0x800C1720: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C1724: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
L_800C1728:
    // 0x800C1728: sb          $a2, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r6;
    // 0x800C172C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1730: jal         0x800C1210
    // 0x800C1734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C1210(rdram, ctx);
        goto after_1;
    // 0x800C1734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C1738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C173C: jal         0x800C13A0
    // 0x800C1740: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_2;
    // 0x800C1740: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x800C1744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1748: jal         0x800C13A0
    // 0x800C174C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13A0(rdram, ctx);
        goto after_3;
    // 0x800C174C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x800C1750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1754: jal         0x800C13A0
    // 0x800C1758: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800C13A0(rdram, ctx);
        goto after_4;
    // 0x800C1758: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x800C175C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800C1760: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x800C1764: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x800C1768: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800C176C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1770: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    // 0x800C1774: addiu       $a2, $s0, 0x24
    ctx->r6 = ADD32(ctx->r16, 0X24);
    // 0x800C1778: jal         0x800CCEF4
    // 0x800C177C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800CCEF4(rdram, ctx);
        goto after_5;
    // 0x800C177C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x800C1780: beql        $v0, $zero, L_800C1800
    if (ctx->r2 == 0) {
        // 0x800C1784: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1800;
    }
    goto skip_0;
    // 0x800C1784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800C1788: jal         0x800CBC00
    // 0x800C178C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_800CBC00(rdram, ctx);
        goto after_6;
    // 0x800C178C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_6:
    // 0x800C1790: beql        $v0, $zero, L_800C1800
    if (ctx->r2 == 0) {
        // 0x800C1794: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1800;
    }
    goto skip_1;
    // 0x800C1794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800C1798: jal         0x800CBBE0
    // 0x800C179C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_800CBBE0(rdram, ctx);
        goto after_7;
    // 0x800C179C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x800C17A0: addiu       $t7, $v0, -0x2
    ctx->r15 = ADD32(ctx->r2, -0X2);
    // 0x800C17A4: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x800C17A8: beq         $at, $zero, L_800C17FC
    if (ctx->r1 == 0) {
        // 0x800C17AC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800C17FC;
    }
    // 0x800C17AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C17B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C17B4: addu        $at, $at, $t7
    gpr jr_addend_800C17BC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C17B8: lw          $t7, 0x57C0($at)
    ctx->r15 = ADD32(ctx->r1, 0X57C0);
    // 0x800C17BC: jr          $t7
    // 0x800C17C0: nop

    switch (jr_addend_800C17BC >> 2) {
        case 0: goto L_800C17C4; break;
        case 1: goto L_800C17D0; break;
        case 2: goto L_800C17DC; break;
        case 3: goto L_800C17E8; break;
        case 4: goto L_800C17F4; break;
        default: switch_error(__func__, 0x800C17BC, 0x801257C0);
    }
    // 0x800C17C0: nop

L_800C17C4:
    // 0x800C17C4: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x800C17C8: b           L_800C17FC
    // 0x800C17CC: sb          $t8, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r24;
        goto L_800C17FC;
    // 0x800C17CC: sb          $t8, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r24;
L_800C17D0:
    // 0x800C17D0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x800C17D4: b           L_800C17FC
    // 0x800C17D8: sb          $t9, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r25;
        goto L_800C17FC;
    // 0x800C17D8: sb          $t9, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r25;
L_800C17DC:
    // 0x800C17DC: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x800C17E0: b           L_800C17FC
    // 0x800C17E4: sb          $t0, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r8;
        goto L_800C17FC;
    // 0x800C17E4: sb          $t0, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r8;
L_800C17E8:
    // 0x800C17E8: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x800C17EC: b           L_800C17FC
    // 0x800C17F0: sb          $t1, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r9;
        goto L_800C17FC;
    // 0x800C17F0: sb          $t1, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r9;
L_800C17F4:
    // 0x800C17F4: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800C17F8: sb          $t2, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r10;
L_800C17FC:
    // 0x800C17FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1800:
    // 0x800C1800: jal         0x800C13C4
    // 0x800C1804: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13C4(rdram, ctx);
        goto after_8;
    // 0x800C1804: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_8:
    // 0x800C1808: lbu         $a0, 0x60($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X60);
    // 0x800C180C: lbu         $a1, 0x1B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1B);
    // 0x800C1810: lbu         $a2, 0x1C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1C);
    // 0x800C1814: jal         0x800C122C
    // 0x800C1818: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800C122C(rdram, ctx);
        goto after_9;
    // 0x800C1818: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_9:
    // 0x800C181C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800C1820: jal         0x800C1430
    // 0x800C1824: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    func_800C1430(rdram, ctx);
        goto after_10;
    // 0x800C1824: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    after_10:
    // 0x800C1828: lh          $a0, 0x58($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X58);
    // 0x800C182C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800C1830: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    // 0x800C1834: lhu         $a2, 0x5A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X5A);
    // 0x800C1838: lbu         $a3, 0x61($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X61);
    // 0x800C183C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800C1840: addiu       $a0, $a0, -0x3E9
    ctx->r4 = ADD32(ctx->r4, -0X3E9);
    // 0x800C1844: jal         0x800DC3D4
    // 0x800C1848: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_800DC3D4(rdram, ctx);
        goto after_11;
    // 0x800C1848: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_11:
L_800C184C:
    // 0x800C184C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C1850: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C1854: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C1858: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C1868: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x800C186C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C1870: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x800C1874: sll         $t7, $t6, 19
    ctx->r15 = S32(ctx->r14 << 19);
    // 0x800C1878: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x800C187C: bnel        $t8, $at, L_800C18BC
    if (ctx->r24 != ctx->r1) {
        // 0x800C1880: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C18BC;
    }
    goto skip_0;
    // 0x800C1880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C1884: jal         0x800C13B0
    // 0x800C1888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800C13B0(rdram, ctx);
        goto after_0;
    // 0x800C1888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C188C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800C1890: jal         0x800C1210
    // 0x800C1894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C1210(rdram, ctx);
        goto after_1;
    // 0x800C1894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800C1898: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800C189C: lbu         $v0, 0x79($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X79);
    // 0x800C18A0: beql        $v0, $zero, L_800C18BC
    if (ctx->r2 == 0) {
        // 0x800C18A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C18BC;
    }
    goto skip_1;
    // 0x800C18A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800C18A8: jal         0x800C1448
    // 0x800C18AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C1448(rdram, ctx);
        goto after_2;
    // 0x800C18AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800C18B0: jal         0x800DC4D4
    // 0x800C18B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DC4D4(rdram, ctx);
        goto after_3;
    // 0x800C18B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800C18B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C18BC:
    // 0x800C18BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C18C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C18C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C18C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C18CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C18D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C18D4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C18D8: beq         $a0, $zero, L_800C190C
    if (ctx->r4 == 0) {
        // 0x800C18DC: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_800C190C;
    }
    // 0x800C18DC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800C18E0: jal         0x800C1448
    // 0x800C18E4: nop

    func_800C1448(rdram, ctx);
        goto after_0;
    // 0x800C18E4: nop

    after_0:
    // 0x800C18E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800C18EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C18F0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800C18F4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800C18F8: jal         0x800C122C
    // 0x800C18FC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    func_800C122C(rdram, ctx);
        goto after_1;
    // 0x800C18FC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x800C1900: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800C1904: jal         0x800DC48C
    // 0x800C1908: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800DC48C(rdram, ctx);
        goto after_2;
    // 0x800C1908: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
L_800C190C:
    // 0x800C190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C1910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C1914: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C191C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C191C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C1924: beq         $a0, $zero, L_800C1940
    if (ctx->r4 == 0) {
        // 0x800C1928: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C1940;
    }
    // 0x800C1928: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C192C: jal         0x800C1448
    // 0x800C1930: nop

    func_800C1448(rdram, ctx);
        goto after_0;
    // 0x800C1930: nop

    after_0:
    // 0x800C1934: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C1938: jal         0x800DC4B0
    // 0x800C193C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800DC4B0(rdram, ctx);
        goto after_1;
    // 0x800C193C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800C1940:
    // 0x800C1940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C1944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C1948: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C1958: beq         $a0, $zero, L_800C1974
    if (ctx->r4 == 0) {
        // 0x800C195C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C1974;
    }
    // 0x800C195C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C1960: jal         0x800C1448
    // 0x800C1964: nop

    func_800C1448(rdram, ctx);
        goto after_0;
    // 0x800C1964: nop

    after_0:
    // 0x800C1968: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C196C: jal         0x800DC42C
    // 0x800C1970: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800DC42C(rdram, ctx);
        goto after_1;
    // 0x800C1970: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800C1974:
    // 0x800C1974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C1978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C197C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C198C: beq         $a0, $zero, L_800C19D4
    if (ctx->r4 == 0) {
        // 0x800C1990: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_800C19D4;
    }
    // 0x800C1990: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800C1994: bne         $a2, $zero, L_800C19BC
    if (ctx->r6 != 0) {
        // 0x800C1998: nop
    
            goto L_800C19BC;
    }
    // 0x800C1998: nop

    // 0x800C199C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x800C19A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C19A4: lwc1        $f8, -0x5788($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5788);
    // 0x800C19A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C19AC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C19B0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C19B4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800C19B8: nop

L_800C19BC:
    // 0x800C19BC: jal         0x800C1448
    // 0x800C19C0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_800C1448(rdram, ctx);
        goto after_0;
    // 0x800C19C0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C19C4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x800C19C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C19CC: jal         0x800DC454
    // 0x800C19D0: andi        $a1, $a3, 0xFFFF
    ctx->r5 = ctx->r7 & 0XFFFF;
    func_800DC454(rdram, ctx);
        goto after_1;
    // 0x800C19D0: andi        $a1, $a3, 0xFFFF
    ctx->r5 = ctx->r7 & 0XFFFF;
    after_1:
L_800C19D4:
    // 0x800C19D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C19D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C19DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C19E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C19E4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800C19E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C19EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C19F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C19F4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800C19F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C19FC: jal         0x800C1070
    // 0x800C1A00: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800C1070(rdram, ctx);
        goto after_0;
    // 0x800C1A00: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x800C1A04: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800C1A08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C1A0C: jal         0x800EFB24
    // 0x800C1A10: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x800C1A10: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x800C1A14: jal         0x800EEFD4
    // 0x800C1A18: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800EEFD4(rdram, ctx);
        goto after_2;
    // 0x800C1A18: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x800C1A1C: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800C1A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1A24: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800C1A28: nop

    // 0x800C1A2C: bc1fl       L_800C1A40
    if (!c1cs) {
        // 0x800C1A30: lwc1        $f2, 0x10($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
            goto L_800C1A40;
    }
    goto skip_0;
    // 0x800C1A30: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x800C1A34: b           L_800C1A94
    // 0x800C1A38: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
        goto L_800C1A94;
    // 0x800C1A38: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800C1A3C: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
L_800C1A40:
    // 0x800C1A40: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800C1A44: nop

    // 0x800C1A48: bc1fl       L_800C1A94
    if (!c1cs) {
        // 0x800C1A4C: lh          $v1, 0x18($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X18);
            goto L_800C1A94;
    }
    goto skip_1;
    // 0x800C1A4C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    skip_1:
    // 0x800C1A50: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x800C1A54: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x800C1A58: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800C1A5C: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800C1A60: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x800C1A64: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800C1A68: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C1A6C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800C1A70: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C1A74: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C1A78: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800C1A7C: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x800C1A80: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C1A84: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x800C1A88: b           L_800C1A98
    // 0x800C1A8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
        goto L_800C1A98;
    // 0x800C1A8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C1A90: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
L_800C1A94:
    // 0x800C1A94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
L_800C1A98:
    // 0x800C1A98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800C1A9C: jr          $ra
    // 0x800C1AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800C1AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800C1AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1AA4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800C1AA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C1AAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C1AB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C1AB4: jal         0x800E3980
    // 0x800C1AB8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_800E3980(rdram, ctx);
        goto after_0;
    // 0x800C1AB8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x800C1ABC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800C1AC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C1AC4: jal         0x800EFB24
    // 0x800C1AC8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x800C1AC8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_1:
    // 0x800C1ACC: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800C1AD0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800C1AD4: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800C1AD8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800C1ADC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C1AE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C1AE4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800C1AE8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800C1AEC: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800C1AF0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800C1AF4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800C1AF8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800C1AFC: nop

    // 0x800C1B00: bc1fl       L_800C1B18
    if (!c1cs) {
        // 0x800C1B04: lbu         $t6, 0x1D($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X1D);
            goto L_800C1B18;
    }
    goto skip_0;
    // 0x800C1B04: lbu         $t6, 0x1D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D);
    skip_0:
    // 0x800C1B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C1B0C: b           L_800C1CA0
    // 0x800C1B10: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
        goto L_800C1CA0;
    // 0x800C1B10: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x800C1B14: lbu         $t6, 0x1D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D);
L_800C1B18:
    // 0x800C1B18: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800C1B1C: bne         $t7, $zero, L_800C1C14
    if (ctx->r15 != 0) {
        // 0x800C1B20: sb          $t6, 0x1C($s0)
        MEM_B(0X1C, ctx->r16) = ctx->r14;
            goto L_800C1C14;
    }
    // 0x800C1B20: sb          $t6, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r14;
    // 0x800C1B24: jal         0x800E3A58
    // 0x800C1B28: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800E3A58(rdram, ctx);
        goto after_2;
    // 0x800C1B28: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x800C1B2C: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800C1B30: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800C1B34: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C1B38: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C1B3C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C1B40: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800C1B44: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x800C1B48: neg.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = -ctx->f8.fl;
    // 0x800C1B4C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x800C1B50: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x800C1B54: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800C1B58: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x800C1B5C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x800C1B60: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x800C1B64: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800C1B68: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800C1B6C: jal         0x800EF7B0
    // 0x800C1B70: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800EF7B0(rdram, ctx);
        goto after_3;
    // 0x800C1B70: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800C1B74: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800C1B78: jal         0x800F1EA4
    // 0x800C1B7C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800F1EA4(rdram, ctx);
        goto after_4;
    // 0x800C1B7C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x800C1B80: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C1B84: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C1B88: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C1B8C: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x800C1B90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C1B94: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x800C1B98: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800C1B9C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800C1BA0: nop

    // 0x800C1BA4: bc1fl       L_800C1BE0
    if (!c1cs) {
        // 0x800C1BA8: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_800C1BE0;
    }
    goto skip_1;
    // 0x800C1BA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_1:
    // 0x800C1BAC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x800C1BB0: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x800C1BB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C1BB8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C1BBC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800C1BC0: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x800C1BC4: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x800C1BC8: lbu         $t8, 0x1B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1B);
    // 0x800C1BCC: beql        $t8, $zero, L_800C1C18
    if (ctx->r24 == 0) {
        // 0x800C1BD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1C18;
    }
    goto skip_2;
    // 0x800C1BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800C1BD4: b           L_800C1C14
    // 0x800C1BD8: sb          $t9, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r25;
        goto L_800C1C14;
    // 0x800C1BD8: sb          $t9, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r25;
    // 0x800C1BDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_800C1BE0:
    // 0x800C1BE0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x800C1BE4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C1BE8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800C1BEC: nop

    // 0x800C1BF0: bc1fl       L_800C1C18
    if (!c1cs) {
        // 0x800C1BF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1C18;
    }
    goto skip_3;
    // 0x800C1BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x800C1BF8: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x800C1BFC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C1C00: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x800C1C04: lbu         $t0, 0x1B($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1B);
    // 0x800C1C08: beql        $t0, $zero, L_800C1C18
    if (ctx->r8 == 0) {
        // 0x800C1C0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1C18;
    }
    goto skip_4;
    // 0x800C1C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x800C1C10: sb          $t1, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r9;
L_800C1C14:
    // 0x800C1C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1C18:
    // 0x800C1C18: jal         0x800C13C4
    // 0x800C1C1C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13C4(rdram, ctx);
        goto after_5;
    // 0x800C1C1C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_5:
    // 0x800C1C20: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1C24: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    // 0x800C1C28: lbu         $a2, 0x1B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1B);
    // 0x800C1C2C: lbu         $a3, 0x1C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1C);
    // 0x800C1C30: jal         0x800C18C8
    // 0x800C1C34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800C18C8(rdram, ctx);
        goto after_6;
    // 0x800C1C34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x800C1C38: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1C3C: lwc1        $f8, 0x57D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57D4);
    // 0x800C1C40: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C1C44: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800C1C48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C1C4C: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800C1C50: lbu         $t3, 0x1A($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1A);
    // 0x800C1C54: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800C1C58: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800C1C5C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800C1C60: beql        $t3, $zero, L_800C1C94
    if (ctx->r11 == 0) {
        // 0x800C1C64: mtc1        $v0, $f8
        ctx->f8.u32l = ctx->r2;
            goto L_800C1C94;
    }
    goto skip_5;
    // 0x800C1C64: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    skip_5:
    // 0x800C1C68: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800C1C6C: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800C1C70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1C74: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C1C78: lwc1        $f10, 0x57D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X57D8);
    // 0x800C1C7C: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x800C1C80: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800C1C84: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x800C1C88: b           L_800C1CA0
    // 0x800C1C8C: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
        goto L_800C1CA0;
    // 0x800C1C8C: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x800C1C90: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_800C1C94:
    // 0x800C1C94: nop

    // 0x800C1C98: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C1C9C: swc1        $f16, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f16.u32l;
L_800C1CA0:
    // 0x800C1CA0: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800C1CA4: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1CA8: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C1CAC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800C1CB0: jal         0x800C191C
    // 0x800C1CB4: nop

    func_800C191C(rdram, ctx);
        goto after_7;
    // 0x800C1CB4: nop

    after_7:
    // 0x800C1CB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C1CBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C1CC0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800C1CC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C1CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1CCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C1CD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C1CD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C1CD8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C1CDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C1CE0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x800C1CE4: jal         0x800C13C4
    // 0x800C1CE8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_800C13C4(rdram, ctx);
        goto after_0;
    // 0x800C1CE8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x800C1CEC: beq         $v0, $zero, L_800C1D6C
    if (ctx->r2 == 0) {
        // 0x800C1CF0: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_800C1D6C;
    }
    // 0x800C1CF0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800C1CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1CF8: jal         0x800C1104
    // 0x800C1CFC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_800C1104(rdram, ctx);
        goto after_1;
    // 0x800C1CFC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x800C1D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1D04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x800C1D08: jal         0x800C13C4
    // 0x800C1D0C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800C13C4(rdram, ctx);
        goto after_2;
    // 0x800C1D0C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x800C1D10: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800C1D14: beq         $v0, $zero, L_800C1D48
    if (ctx->r2 == 0) {
        // 0x800C1D18: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_800C1D48;
    }
    // 0x800C1D18: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800C1D1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C1D20: bnel        $v1, $at, L_800C1D70
    if (ctx->r3 != ctx->r1) {
        // 0x800C1D24: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C1D70;
    }
    goto skip_0;
    // 0x800C1D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800C1D28: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800C1D2C: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x800C1D30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C1D34: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C1D38: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C1D3C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800C1D40: b           L_800C1D70
    // 0x800C1D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C1D70;
    // 0x800C1D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C1D48:
    // 0x800C1D48: bnel        $v1, $zero, L_800C1D70
    if (ctx->r3 != 0) {
        // 0x800C1D4C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C1D70;
    }
    goto skip_1;
    // 0x800C1D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800C1D50: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x800C1D54: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x800C1D58: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C1D5C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C1D60: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800C1D64: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800C1D68: nop

L_800C1D6C:
    // 0x800C1D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C1D70:
    // 0x800C1D70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C1D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C1D78: jr          $ra
    // 0x800C1D7C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x800C1D7C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_800C1D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1D80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C1D84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C1D88: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800C1D8C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C1D90: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C1D94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C1D98: jal         0x800C1414
    // 0x800C1D9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C1D9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x800C1DA0: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x800C1DA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C1DA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C1DAC: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x800C1DB0: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800C1DB4: bne         $t9, $at, L_800C1FD0
    if (ctx->r25 != ctx->r1) {
        // 0x800C1DB8: nop
    
            goto L_800C1FD0;
    }
    // 0x800C1DB8: nop

    // 0x800C1DBC: lbu         $t0, 0x79($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X79);
    // 0x800C1DC0: beq         $t0, $zero, L_800C1FD0
    if (ctx->r8 == 0) {
        // 0x800C1DC4: nop
    
            goto L_800C1FD0;
    }
    // 0x800C1DC4: nop

    // 0x800C1DC8: jal         0x800EA05C
    // 0x800C1DCC: nop

    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x800C1DCC: nop

    after_1:
    // 0x800C1DD0: lh          $t1, 0x5E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X5E);
    // 0x800C1DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1DD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C1DDC: xor         $t2, $v0, $t1
    ctx->r10 = ctx->r2 ^ ctx->r9;
    // 0x800C1DE0: sltu        $t2, $zero, $t2
    ctx->r10 = 0 < ctx->r10 ? 1 : 0;
    // 0x800C1DE4: jal         0x800C13C4
    // 0x800C1DE8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_800C13C4(rdram, ctx);
        goto after_2;
    // 0x800C1DE8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_2:
    // 0x800C1DEC: beql        $v0, $zero, L_800C1E04
    if (ctx->r2 == 0) {
        // 0x800C1DF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1E04;
    }
    goto skip_0;
    // 0x800C1DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800C1DF4: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1DF8: jal         0x800C1950
    // 0x800C1DFC: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    func_800C1950(rdram, ctx);
        goto after_3;
    // 0x800C1DFC: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    after_3:
    // 0x800C1E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1E04:
    // 0x800C1E04: jal         0x800C13C4
    // 0x800C1E08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800C13C4(rdram, ctx);
        goto after_4;
    // 0x800C1E08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x800C1E0C: beql        $v0, $zero, L_800C1E48
    if (ctx->r2 == 0) {
        // 0x800C1E10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1E48;
    }
    goto skip_1;
    // 0x800C1E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800C1E14: lbu         $t3, 0x1B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1B);
    // 0x800C1E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1E1C: bnel        $t3, $zero, L_800C1E48
    if (ctx->r11 != 0) {
        // 0x800C1E20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1E48;
    }
    goto skip_2;
    // 0x800C1E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800C1E24: jal         0x800C13C4
    // 0x800C1E28: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13C4(rdram, ctx);
        goto after_5;
    // 0x800C1E28: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_5:
    // 0x800C1E2C: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1E30: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    // 0x800C1E34: lbu         $a2, 0x1B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1B);
    // 0x800C1E38: lbu         $a3, 0x1C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1C);
    // 0x800C1E3C: jal         0x800C18C8
    // 0x800C1E40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800C18C8(rdram, ctx);
        goto after_6;
    // 0x800C1E40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x800C1E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1E48:
    // 0x800C1E48: jal         0x800C13C4
    // 0x800C1E4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13C4(rdram, ctx);
        goto after_7;
    // 0x800C1E4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x800C1E50: beq         $v0, $zero, L_800C1F0C
    if (ctx->r2 == 0) {
        // 0x800C1E54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1F0C;
    }
    // 0x800C1E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1E58: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800C1E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1E60: beql        $t4, $zero, L_800C1E8C
    if (ctx->r12 == 0) {
        // 0x800C1E64: lbu         $t5, 0x63($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X63);
            goto L_800C1E8C;
    }
    goto skip_3;
    // 0x800C1E64: lbu         $t5, 0x63($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X63);
    skip_3:
    // 0x800C1E68: jal         0x800C13C4
    // 0x800C1E6C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13C4(rdram, ctx);
        goto after_8;
    // 0x800C1E6C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_8:
    // 0x800C1E70: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1E74: lh          $a1, 0x5C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5C);
    // 0x800C1E78: jal         0x800C1984
    // 0x800C1E7C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800C1984(rdram, ctx);
        goto after_9;
    // 0x800C1E7C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_9:
    // 0x800C1E80: b           L_800C1FB0
    // 0x800C1E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_800C1FB0;
    // 0x800C1E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1E88: lbu         $t5, 0x63($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X63);
L_800C1E8C:
    // 0x800C1E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1E90: beql        $t5, $zero, L_800C1EAC
    if (ctx->r13 == 0) {
        // 0x800C1E94: lh          $a3, 0x5A($s0)
        ctx->r7 = MEM_H(ctx->r16, 0X5A);
            goto L_800C1EAC;
    }
    goto skip_4;
    // 0x800C1E94: lh          $a3, 0x5A($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X5A);
    skip_4:
    // 0x800C1E98: jal         0x800C19E4
    // 0x800C1E9C: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    func_800C19E4(rdram, ctx);
        goto after_10;
    // 0x800C1E9C: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    after_10:
    // 0x800C1EA0: b           L_800C1EAC
    // 0x800C1EA4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_800C1EAC;
    // 0x800C1EA4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800C1EA8: lh          $a3, 0x5A($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X5A);
L_800C1EAC:
    // 0x800C1EAC: slti        $at, $a3, 0x64
    ctx->r1 = SIGNED(ctx->r7) < 0X64 ? 1 : 0;
    // 0x800C1EB0: beq         $at, $zero, L_800C1EC0
    if (ctx->r1 == 0) {
        // 0x800C1EB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1EC0;
    }
    // 0x800C1EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1EB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C1EBC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_800C1EC0:
    // 0x800C1EC0: jal         0x800C1CCC
    // 0x800C1EC4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800C1CCC(rdram, ctx);
        goto after_11;
    // 0x800C1EC4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_11:
    // 0x800C1EC8: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    // 0x800C1ECC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800C1ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1ED4: jal         0x800C13C4
    // 0x800C1ED8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13C4(rdram, ctx);
        goto after_12;
    // 0x800C1ED8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_12:
    // 0x800C1EDC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800C1EE0: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1EE4: jal         0x800C1984
    // 0x800C1EE8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800C1984(rdram, ctx);
        goto after_13;
    // 0x800C1EE8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_13:
    // 0x800C1EEC: jal         0x800EA068
    // 0x800C1EF0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_14;
    // 0x800C1EF0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_14:
    // 0x800C1EF4: bnel        $v0, $zero, L_800C1FB0
    if (ctx->r2 != 0) {
        // 0x800C1EF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1FB0;
    }
    goto skip_5;
    // 0x800C1EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x800C1EFC: jal         0x800C1AA4
    // 0x800C1F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C1AA4(rdram, ctx);
        goto after_15;
    // 0x800C1F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x800C1F04: b           L_800C1FB0
    // 0x800C1F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_800C1FB0;
    // 0x800C1F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1F0C:
    // 0x800C1F0C: jal         0x800C13C4
    // 0x800C1F10: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_800C13C4(rdram, ctx);
        goto after_16;
    // 0x800C1F10: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_16:
    // 0x800C1F14: beql        $v0, $zero, L_800C1F2C
    if (ctx->r2 == 0) {
        // 0x800C1F18: lw          $t7, 0x28($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X28);
            goto L_800C1F2C;
    }
    goto skip_6;
    // 0x800C1F18: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    skip_6:
    // 0x800C1F1C: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1F20: jal         0x800C191C
    // 0x800C1F24: lbu         $a1, 0x61($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X61);
    func_800C191C(rdram, ctx);
        goto after_17;
    // 0x800C1F24: lbu         $a1, 0x61($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X61);
    after_17:
    // 0x800C1F28: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
L_800C1F2C:
    // 0x800C1F2C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x800C1F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1F34: beq         $t7, $zero, L_800C1F5C
    if (ctx->r15 == 0) {
        // 0x800C1F38: nop
    
            goto L_800C1F5C;
    }
    // 0x800C1F38: nop

    // 0x800C1F3C: jal         0x800C13C4
    // 0x800C1F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C13C4(rdram, ctx);
        goto after_18;
    // 0x800C1F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x800C1F44: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1F48: lh          $a1, 0x5C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5C);
    // 0x800C1F4C: jal         0x800C1984
    // 0x800C1F50: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800C1984(rdram, ctx);
        goto after_19;
    // 0x800C1F50: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_19:
    // 0x800C1F54: b           L_800C1FB0
    // 0x800C1F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_800C1FB0;
    // 0x800C1F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1F5C:
    // 0x800C1F5C: jal         0x800C13C4
    // 0x800C1F60: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13C4(rdram, ctx);
        goto after_20;
    // 0x800C1F60: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_20:
    // 0x800C1F64: beq         $v0, $zero, L_800C1FAC
    if (ctx->r2 == 0) {
        // 0x800C1F68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C1FAC;
    }
    // 0x800C1F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1F6C: jal         0x800C1CCC
    // 0x800C1F70: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    func_800C1CCC(rdram, ctx);
        goto after_21;
    // 0x800C1F70: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    after_21:
    // 0x800C1F74: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x800C1F78: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800C1F7C: beq         $at, $zero, L_800C1F8C
    if (ctx->r1 == 0) {
        // 0x800C1F80: sh          $v0, 0x5C($s0)
        MEM_H(0X5C, ctx->r16) = ctx->r2;
            goto L_800C1F8C;
    }
    // 0x800C1F80: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    // 0x800C1F84: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C1F88: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_800C1F8C:
    // 0x800C1F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1F90: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x800C1F94: jal         0x800C13C4
    // 0x800C1F98: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_800C13C4(rdram, ctx);
        goto after_22;
    // 0x800C1F98: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_22:
    // 0x800C1F9C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800C1FA0: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800C1FA4: jal         0x800C1984
    // 0x800C1FA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800C1984(rdram, ctx);
        goto after_23;
    // 0x800C1FA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_23:
L_800C1FAC:
    // 0x800C1FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C1FB0:
    // 0x800C1FB0: jal         0x800C13B0
    // 0x800C1FB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13B0(rdram, ctx);
        goto after_24;
    // 0x800C1FB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_24:
    // 0x800C1FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1FBC: jal         0x800C13B0
    // 0x800C1FC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13B0(rdram, ctx);
        goto after_25;
    // 0x800C1FC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_25:
    // 0x800C1FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C1FC8: jal         0x800C13B0
    // 0x800C1FCC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800C13B0(rdram, ctx);
        goto after_26;
    // 0x800C1FCC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_26:
L_800C1FD0:
    // 0x800C1FD0: jal         0x800A8184
    // 0x800C1FD4: nop

    func_800A8184(rdram, ctx);
        goto after_27;
    // 0x800C1FD4: nop

    after_27:
    // 0x800C1FD8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C1FDC: bne         $v0, $at, L_800C1FEC
    if (ctx->r2 != ctx->r1) {
        // 0x800C1FE0: lw          $t9, 0x34($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X34);
            goto L_800C1FEC;
    }
    // 0x800C1FE0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C1FE4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C1FE8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_800C1FEC:
    // 0x800C1FEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C1FF0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x800C1FF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C1FF8: jr          $ra
    // 0x800C1FFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C1FFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C2000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800C2004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C2008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C200C: jal         0x800D8FF8
    // 0x800C2010: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800C2010: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C2014: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x800C2018: jal         0x800C1414
    // 0x800C201C: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C1414(rdram, ctx);
        goto after_1;
    // 0x800C201C: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_1:
    // 0x800C2020: lwc1        $f4, 0x54($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X54);
    // 0x800C2024: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C2028: lw          $v1, 0x78($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X78);
    // 0x800C202C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C2030: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800C2034: sll         $t7, $v1, 26
    ctx->r15 = S32(ctx->r3 << 26);
    // 0x800C2038: sll         $t5, $v1, 28
    ctx->r13 = S32(ctx->r3 << 28);
    // 0x800C203C: bgez        $t7, L_800C2100
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800C2040: swc1        $f8, 0x54($v0)
        MEM_W(0X54, ctx->r2) = ctx->f8.u32l;
            goto L_800C2100;
    }
    // 0x800C2040: swc1        $f8, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f8.u32l;
    // 0x800C2044: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C2048: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x800C204C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800C2050: nop

    // 0x800C2054: bc1fl       L_800C2068
    if (!c1cs) {
        // 0x800C2058: lh          $t8, 0x4E($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X4E);
            goto L_800C2068;
    }
    goto skip_0;
    // 0x800C2058: lh          $t8, 0x4E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4E);
    skip_0:
    // 0x800C205C: b           L_800C20D0
    // 0x800C2060: sh          $zero, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = 0;
        goto L_800C20D0;
    // 0x800C2060: sh          $zero, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = 0;
    // 0x800C2064: lh          $t8, 0x4E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4E);
L_800C2068:
    // 0x800C2068: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800C206C: lh          $t9, 0x5A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X5A);
    // 0x800C2070: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800C2074: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C2078: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C207C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C2080: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800C2084: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C2088: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C208C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C2090: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x800C2094: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800C2098: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800C209C: nop

    // 0x800C20A0: sh          $t1, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r9;
    // 0x800C20A4: jal         0x800F0E28
    // 0x800C20A8: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    func_800F0E28(rdram, ctx);
        goto after_2;
    // 0x800C20A8: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    after_2:
    // 0x800C20AC: jal         0x800EA05C
    // 0x800C20B0: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_3;
    // 0x800C20B0: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    after_3:
    // 0x800C20B4: lh          $t2, 0x5E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X5E);
    // 0x800C20B8: beql        $v0, $t2, L_800C20D4
    if (ctx->r2 == ctx->r10) {
        // 0x800C20BC: lh          $t3, 0x5A($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X5A);
            goto L_800C20D4;
    }
    goto skip_1;
    // 0x800C20BC: lh          $t3, 0x5A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X5A);
    skip_1:
    // 0x800C20C0: lh          $a0, 0x5C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5C);
    // 0x800C20C4: jal         0x800F1418
    // 0x800C20C8: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    func_800F1418(rdram, ctx);
        goto after_4;
    // 0x800C20C8: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    after_4:
    // 0x800C20CC: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
L_800C20D0:
    // 0x800C20D0: lh          $t3, 0x5A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X5A);
L_800C20D4:
    // 0x800C20D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C20D8: bgtz        $t3, L_800C20F0
    if (SIGNED(ctx->r11) > 0) {
        // 0x800C20DC: nop
    
            goto L_800C20F0;
    }
    // 0x800C20DC: nop

    // 0x800C20E0: jal         0x800C2FDC
    // 0x800C20E4: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C2FDC(rdram, ctx);
        goto after_5;
    // 0x800C20E4: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_5:
    // 0x800C20E8: b           L_800C268C
    // 0x800C20EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C268C;
    // 0x800C20EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C20F0:
    // 0x800C20F0: jal         0x800C13A0
    // 0x800C20F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13A0(rdram, ctx);
        goto after_6;
    // 0x800C20F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x800C20F8: b           L_800C22BC
    // 0x800C20FC: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
        goto L_800C22BC;
    // 0x800C20FC: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
L_800C2100:
    // 0x800C2100: bgezl       $t5, L_800C22BC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800C2104: lw          $v0, 0x78($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X78);
            goto L_800C22BC;
    }
    goto skip_2;
    // 0x800C2104: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    skip_2:
    // 0x800C2108: lwc1        $f0, 0x54($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X54);
    // 0x800C210C: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x800C2110: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800C2114: nop

    // 0x800C2118: bc1fl       L_800C2160
    if (!c1cs) {
        // 0x800C211C: lwc1        $f12, 0x48($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
            goto L_800C2160;
    }
    goto skip_3;
    // 0x800C211C: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
    skip_3:
    // 0x800C2120: div.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800C2124: lh          $t6, 0x4C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4C);
    // 0x800C2128: lh          $t7, 0x4E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4E);
    // 0x800C212C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800C2130: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C2134: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800C2138: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800C213C: nop

    // 0x800C2140: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C2144: mul.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800C2148: div.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x800C214C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800C2150: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800C2154: b           L_800C2288
    // 0x800C2158: sh          $t0, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r8;
        goto L_800C2288;
    // 0x800C2158: sh          $t0, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r8;
    // 0x800C215C: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
L_800C2160:
    // 0x800C2160: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800C2164: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x800C2168: nop

    // 0x800C216C: bc1fl       L_800C223C
    if (!c1cs) {
        // 0x800C2170: sub.s       $f18, $f0, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_800C223C;
    }
    goto skip_4;
    // 0x800C2170: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
    // 0x800C2174: lh          $a0, 0x5A($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X5A);
    // 0x800C2178: lh          $v1, 0x4C($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4C);
    // 0x800C217C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800C2180: bnel        $at, $zero, L_800C219C
    if (ctx->r1 != 0) {
        // 0x800C2184: lh          $t2, 0x4E($v0)
        ctx->r10 = MEM_H(ctx->r2, 0X4E);
            goto L_800C219C;
    }
    goto skip_5;
    // 0x800C2184: lh          $t2, 0x4E($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4E);
    skip_5:
    // 0x800C2188: lh          $t1, 0x4E($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4E);
    // 0x800C218C: slt         $at, $t1, $a0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800C2190: beql        $at, $zero, L_800C21B8
    if (ctx->r1 == 0) {
        // 0x800C2194: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_800C21B8;
    }
    goto skip_6;
    // 0x800C2194: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_6:
    // 0x800C2198: lh          $t2, 0x4E($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4E);
L_800C219C:
    // 0x800C219C: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x800C21A0: bgez        $t3, L_800C21B0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800C21A4: sra         $t4, $t3, 1
        ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
            goto L_800C21B0;
    }
    // 0x800C21A4: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x800C21A8: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x800C21AC: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_800C21B0:
    // 0x800C21B0: sh          $t4, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r12;
    // 0x800C21B4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_800C21B8:
    // 0x800C21B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800C21BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C21C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C21C4: jal         0x800DC264
    // 0x800C21C8: nop

    func_800DC264(rdram, ctx);
        goto after_7;
    // 0x800C21C8: nop

    after_7:
    // 0x800C21CC: lh          $t5, 0x5A($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X5A);
    // 0x800C21D0: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x800C21D4: lh          $v1, 0x4E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4E);
    // 0x800C21D8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800C21DC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800C21E0: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C21E4: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800C21E8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C21EC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x800C21F0: nop

    // 0x800C21F4: sh          $t7, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r15;
    // 0x800C21F8: lh          $v0, 0x5A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X5A);
    // 0x800C21FC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800C2200: beql        $at, $zero, L_800C2214
    if (ctx->r1 == 0) {
        // 0x800C2204: sh          $v0, 0x5A($s0)
        MEM_H(0X5A, ctx->r16) = ctx->r2;
            goto L_800C2214;
    }
    goto skip_7;
    // 0x800C2204: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    skip_7:
    // 0x800C2208: b           L_800C2214
    // 0x800C220C: sh          $v1, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r3;
        goto L_800C2214;
    // 0x800C220C: sh          $v1, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r3;
    // 0x800C2210: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
L_800C2214:
    // 0x800C2214: lh          $v0, 0x5A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X5A);
    // 0x800C2218: lh          $v1, 0x4C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4C);
    // 0x800C221C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800C2220: beq         $at, $zero, L_800C2230
    if (ctx->r1 == 0) {
        // 0x800C2224: nop
    
            goto L_800C2230;
    }
    // 0x800C2224: nop

    // 0x800C2228: b           L_800C2288
    // 0x800C222C: sh          $v1, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r3;
        goto L_800C2288;
    // 0x800C222C: sh          $v1, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r3;
L_800C2230:
    // 0x800C2230: b           L_800C2288
    // 0x800C2234: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
        goto L_800C2288;
    // 0x800C2234: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    // 0x800C2238: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
L_800C223C:
    // 0x800C223C: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x800C2240: lh          $t8, 0x4C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4C);
    // 0x800C2244: lh          $t9, 0x4E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4E);
    // 0x800C2248: sub.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x800C224C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2250: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800C2254: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x800C2258: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800C225C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C2260: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800C2264: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C2268: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x800C226C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C2270: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C2274: div.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x800C2278: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800C227C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800C2280: nop

    // 0x800C2284: sh          $t2, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r10;
L_800C2288:
    // 0x800C2288: jal         0x800EA05C
    // 0x800C228C: nop

    func_800EA05C(rdram, ctx);
        goto after_8;
    // 0x800C228C: nop

    after_8:
    // 0x800C2290: lh          $t3, 0x5E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X5E);
    // 0x800C2294: beql        $v0, $t3, L_800C22B0
    if (ctx->r2 == ctx->r11) {
        // 0x800C2298: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C22B0;
    }
    goto skip_8;
    // 0x800C2298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_8:
    // 0x800C229C: lh          $a0, 0x5C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5C);
    // 0x800C22A0: jal         0x800F1418
    // 0x800C22A4: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    func_800F1418(rdram, ctx);
        goto after_9;
    // 0x800C22A4: lh          $a1, 0x5A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X5A);
    after_9:
    // 0x800C22A8: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    // 0x800C22AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C22B0:
    // 0x800C22B0: jal         0x800C13A0
    // 0x800C22B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13A0(rdram, ctx);
        goto after_10;
    // 0x800C22B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x800C22B8: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
L_800C22BC:
    // 0x800C22BC: sll         $t5, $v0, 27
    ctx->r13 = S32(ctx->r2 << 27);
    // 0x800C22C0: bgezl       $t5, L_800C2318
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800C22C4: lbu         $v0, 0x79($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X79);
            goto L_800C2318;
    }
    goto skip_9;
    // 0x800C22C4: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    skip_9:
    // 0x800C22C8: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x800C22CC: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800C22D0: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800C22D4: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x800C22D8: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800C22DC: sll         $t7, $v0, 30
    ctx->r15 = S32(ctx->r2 << 30);
    // 0x800C22E0: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800C22E4: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800C22E8: nop

    // 0x800C22EC: bc1fl       L_800C2318
    if (!c1cs) {
        // 0x800C22F0: lbu         $v0, 0x79($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X79);
            goto L_800C2318;
    }
    goto skip_10;
    // 0x800C22F0: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    skip_10:
    // 0x800C22F4: bgez        $t7, L_800C230C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800C22F8: nop
    
            goto L_800C230C;
    }
    // 0x800C22F8: nop

    // 0x800C22FC: jal         0x800C2FDC
    // 0x800C2300: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C2FDC(rdram, ctx);
        goto after_11;
    // 0x800C2300: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_11:
    // 0x800C2304: b           L_800C268C
    // 0x800C2308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C268C;
    // 0x800C2308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C230C:
    // 0x800C230C: jal         0x800C1860
    // 0x800C2310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C1860(rdram, ctx);
        goto after_12;
    // 0x800C2310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800C2314: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
L_800C2318:
    // 0x800C2318: beql        $v0, $zero, L_800C24EC
    if (ctx->r2 == 0) {
        // 0x800C231C: lhu         $v0, 0x7A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X7A);
            goto L_800C24EC;
    }
    goto skip_11;
    // 0x800C231C: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
    skip_11:
    // 0x800C2320: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
    // 0x800C2324: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C2328: sll         $t9, $t8, 19
    ctx->r25 = S32(ctx->r24 << 19);
    // 0x800C232C: srl         $t0, $t9, 29
    ctx->r8 = S32(U32(ctx->r25) >> 29);
    // 0x800C2330: bnel        $t0, $at, L_800C24EC
    if (ctx->r8 != ctx->r1) {
        // 0x800C2334: lhu         $v0, 0x7A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X7A);
            goto L_800C24EC;
    }
    goto skip_12;
    // 0x800C2334: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
    skip_12:
    // 0x800C2338: jal         0x800C1448
    // 0x800C233C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C1448(rdram, ctx);
        goto after_13;
    // 0x800C233C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x800C2340: beql        $v0, $zero, L_800C24EC
    if (ctx->r2 == 0) {
        // 0x800C2344: lhu         $v0, 0x7A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X7A);
            goto L_800C24EC;
    }
    goto skip_13;
    // 0x800C2344: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
    skip_13:
    // 0x800C2348: lw          $t1, 0x78($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X78);
    // 0x800C234C: sll         $t2, $t1, 22
    ctx->r10 = S32(ctx->r9 << 22);
    // 0x800C2350: srl         $t3, $t2, 28
    ctx->r11 = S32(U32(ctx->r10) >> 28);
    // 0x800C2354: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x800C2358: beq         $at, $zero, L_800C24E8
    if (ctx->r1 == 0) {
        // 0x800C235C: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_800C24E8;
    }
    // 0x800C235C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C2360: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C2364: addu        $at, $at, $t3
    gpr jr_addend_800C236C = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C2368: lw          $t3, 0x57DC($at)
    ctx->r11 = ADD32(ctx->r1, 0X57DC);
    // 0x800C236C: jr          $t3
    // 0x800C2370: nop

    switch (jr_addend_800C236C >> 2) {
        case 0: goto L_800C24E8; break;
        case 1: goto L_800C2374; break;
        case 2: goto L_800C23D0; break;
        case 3: goto L_800C2418; break;
        case 4: goto L_800C244C; break;
        default: switch_error(__func__, 0x800C236C, 0x801257DC);
    }
    // 0x800C2370: nop

L_800C2374:
    // 0x800C2374: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800C2378: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C237C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C2380: lwc1        $f6, 0x6C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x800C2384: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800C2388: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800C238C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800C2390: bc1f        L_800C23AC
    if (!c1cs) {
        // 0x800C2394: swc1        $f8, 0x6C($s0)
        MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
            goto L_800C23AC;
    }
    // 0x800C2394: swc1        $f8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
    // 0x800C2398: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x800C239C: jal         0x800F13F0
    // 0x800C23A0: lwc1        $f14, 0x2C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2C);
    func_800F13F0(rdram, ctx);
        goto after_14;
    // 0x800C23A0: lwc1        $f14, 0x2C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2C);
    after_14:
    // 0x800C23A4: b           L_800C23BC
    // 0x800C23A8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
        goto L_800C23BC;
    // 0x800C23A8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
L_800C23AC:
    // 0x800C23AC: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x800C23B0: jal         0x800F0E00
    // 0x800C23B4: lwc1        $f14, 0x2C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2C);
    func_800F0E00(rdram, ctx);
        goto after_15;
    // 0x800C23B4: lwc1        $f14, 0x2C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2C);
    after_15:
    // 0x800C23B8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
L_800C23BC:
    // 0x800C23BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C23C0: jal         0x800C13A0
    // 0x800C23C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_16;
    // 0x800C23C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_16:
    // 0x800C23C8: b           L_800C24EC
    // 0x800C23CC: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
        goto L_800C24EC;
    // 0x800C23CC: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
L_800C23D0:
    // 0x800C23D0: lwc1        $f14, 0x30($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800C23D4: jal         0x800DC264
    // 0x800C23D8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    func_800DC264(rdram, ctx);
        goto after_17;
    // 0x800C23D8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    after_17:
    // 0x800C23DC: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C23E0: lwc1        $f18, 0x6C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x800C23E4: lwc1        $f14, 0x2C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800C23E8: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800C23EC: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    // 0x800C23F0: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800C23F4: swc1        $f10, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f10.u32l;
    // 0x800C23F8: jal         0x800F0D50
    // 0x800C23FC: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    func_800F0D50(rdram, ctx);
        goto after_18;
    // 0x800C23FC: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    after_18:
    // 0x800C2400: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x800C2404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2408: jal         0x800C13A0
    // 0x800C240C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_19;
    // 0x800C240C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_19:
    // 0x800C2410: b           L_800C24EC
    // 0x800C2414: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
        goto L_800C24EC;
    // 0x800C2414: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
L_800C2418:
    // 0x800C2418: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x800C241C: lwc1        $f12, 0x54($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X54);
    // 0x800C2420: lwc1        $f14, 0x28($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800C2424: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x800C2428: lw          $a3, 0x30($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X30);
    // 0x800C242C: jal         0x800F10B4
    // 0x800C2430: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_20;
    // 0x800C2430: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x800C2434: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x800C2438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C243C: jal         0x800C13A0
    // 0x800C2440: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_21;
    // 0x800C2440: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_21:
    // 0x800C2444: b           L_800C24EC
    // 0x800C2448: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
        goto L_800C24EC;
    // 0x800C2448: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
L_800C244C:
    // 0x800C244C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x800C2450: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x800C2454: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C2458: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800C245C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800C2460: nop

    // 0x800C2464: bc1fl       L_800C2494
    if (!c1cs) {
        // 0x800C2468: lwc1        $f6, 0x2C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
            goto L_800C2494;
    }
    goto skip_14;
    // 0x800C2468: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    skip_14:
    // 0x800C246C: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800C2470: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800C2474: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800C2478: lw          $a3, 0x34($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X34);
    // 0x800C247C: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x800C2480: jal         0x800F10B4
    // 0x800C2484: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_22;
    // 0x800C2484: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_22:
    // 0x800C2488: b           L_800C24DC
    // 0x800C248C: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
        goto L_800C24DC;
    // 0x800C248C: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x800C2490: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
L_800C2494:
    // 0x800C2494: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C2498: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C249C: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x800C24A0: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x800C24A4: nop

    // 0x800C24A8: bc1fl       L_800C24C0
    if (!c1cs) {
        // 0x800C24AC: lwc1        $f16, 0x3C($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_800C24C0;
    }
    goto skip_15;
    // 0x800C24AC: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    skip_15:
    // 0x800C24B0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800C24B4: b           L_800C24DC
    // 0x800C24B8: swc1        $f8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
        goto L_800C24DC;
    // 0x800C24B8: swc1        $f8, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f8.u32l;
    // 0x800C24BC: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
L_800C24C0:
    // 0x800C24C0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800C24C4: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    // 0x800C24C8: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x800C24CC: sub.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x800C24D0: jal         0x800F10B4
    // 0x800C24D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_23;
    // 0x800C24D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x800C24D8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
L_800C24DC:
    // 0x800C24DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C24E0: jal         0x800C13A0
    // 0x800C24E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_24;
    // 0x800C24E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_24:
L_800C24E8:
    // 0x800C24E8: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
L_800C24EC:
    // 0x800C24EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C24F0: srl         $t4, $v0, 13
    ctx->r12 = S32(U32(ctx->r2) >> 13);
    // 0x800C24F4: beq         $t4, $at, L_800C2514
    if (ctx->r12 == ctx->r1) {
        // 0x800C24F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800C2514;
    }
    // 0x800C24F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C24FC: beq         $t4, $at, L_800C2550
    if (ctx->r12 == ctx->r1) {
        // 0x800C2500: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800C2550;
    }
    // 0x800C2500: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C2504: beq         $t4, $at, L_800C2598
    if (ctx->r12 == ctx->r1) {
        // 0x800C2508: nop
    
            goto L_800C2598;
    }
    // 0x800C2508: nop

    // 0x800C250C: b           L_800C2598
    // 0x800C2510: nop

        goto L_800C2598;
    // 0x800C2510: nop

L_800C2514:
    // 0x800C2514: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x800C2518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C251C: sll         $t5, $v0, 19
    ctx->r13 = S32(ctx->r2 << 19);
    // 0x800C2520: srl         $t6, $t5, 29
    ctx->r14 = S32(U32(ctx->r13) >> 29);
    // 0x800C2524: beq         $t6, $zero, L_800C2540
    if (ctx->r14 == 0) {
        // 0x800C2528: nop
    
            goto L_800C2540;
    }
    // 0x800C2528: nop

    // 0x800C252C: bne         $t6, $at, L_800C2598
    if (ctx->r14 != ctx->r1) {
        // 0x800C2530: nop
    
            goto L_800C2598;
    }
    // 0x800C2530: nop

    // 0x800C2534: lbu         $t7, 0x79($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X79);
    // 0x800C2538: bne         $t7, $zero, L_800C2598
    if (ctx->r15 != 0) {
        // 0x800C253C: nop
    
            goto L_800C2598;
    }
    // 0x800C253C: nop

L_800C2540:
    // 0x800C2540: jal         0x800C2FDC
    // 0x800C2544: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C2FDC(rdram, ctx);
        goto after_25;
    // 0x800C2544: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_25:
    // 0x800C2548: b           L_800C268C
    // 0x800C254C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C268C;
    // 0x800C254C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C2550:
    // 0x800C2550: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
    // 0x800C2554: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C2558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C255C: sll         $t9, $t8, 19
    ctx->r25 = S32(ctx->r24 << 19);
    // 0x800C2560: srl         $t0, $t9, 29
    ctx->r8 = S32(U32(ctx->r25) >> 29);
    // 0x800C2564: bnel        $t0, $at, L_800C2590
    if (ctx->r8 != ctx->r1) {
        // 0x800C2568: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C2590;
    }
    goto skip_16;
    // 0x800C2568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_16:
    // 0x800C256C: jal         0x800C13D0
    // 0x800C2570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C13D0(rdram, ctx);
        goto after_26;
    // 0x800C2570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x800C2574: beql        $v0, $zero, L_800C2590
    if (ctx->r2 == 0) {
        // 0x800C2578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C2590;
    }
    goto skip_17;
    // 0x800C2578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_17:
    // 0x800C257C: jal         0x800C3CE8
    // 0x800C2580: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C3CE8(rdram, ctx);
        goto after_27;
    // 0x800C2580: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_27:
    // 0x800C2584: b           L_800C2598
    // 0x800C2588: nop

        goto L_800C2598;
    // 0x800C2588: nop

    // 0x800C258C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C2590:
    // 0x800C2590: jal         0x800C13B0
    // 0x800C2594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C13B0(rdram, ctx);
        goto after_28;
    // 0x800C2594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
L_800C2598:
    // 0x800C2598: jal         0x800C1D80
    // 0x800C259C: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C1D80(rdram, ctx);
        goto after_29;
    // 0x800C259C: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_29:
    // 0x800C25A0: lw          $t1, 0x78($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X78);
    // 0x800C25A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C25A8: sll         $t2, $t1, 19
    ctx->r10 = S32(ctx->r9 << 19);
    // 0x800C25AC: srl         $t3, $t2, 29
    ctx->r11 = S32(U32(ctx->r10) >> 29);
    // 0x800C25B0: bnel        $t3, $at, L_800C2664
    if (ctx->r11 != ctx->r1) {
        // 0x800C25B4: lbu         $v0, 0x79($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X79);
            goto L_800C2664;
    }
    goto skip_18;
    // 0x800C25B4: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    skip_18:
    // 0x800C25B8: lh          $a0, 0x58($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X58);
    // 0x800C25BC: jal         0x800C42E0
    // 0x800C25C0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_800C42E0(rdram, ctx);
        goto after_30;
    // 0x800C25C0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_30:
    // 0x800C25C4: beq         $v0, $zero, L_800C2660
    if (ctx->r2 == 0) {
        // 0x800C25C8: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_800C2660;
    }
    // 0x800C25C8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800C25CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C25D0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x800C25D4: jal         0x800C13C4
    // 0x800C25D8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_800C13C4(rdram, ctx);
        goto after_31;
    // 0x800C25D8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_31:
    // 0x800C25DC: beq         $v0, $zero, L_800C2638
    if (ctx->r2 == 0) {
        // 0x800C25E0: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_800C2638;
    }
    // 0x800C25E0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800C25E4: bnel        $v1, $zero, L_800C2664
    if (ctx->r3 != 0) {
        // 0x800C25E8: lbu         $v0, 0x79($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X79);
            goto L_800C2664;
    }
    goto skip_19;
    // 0x800C25E8: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    skip_19:
    // 0x800C25EC: jal         0x800C15BC
    // 0x800C25F0: nop

    func_800C15BC(rdram, ctx);
        goto after_32;
    // 0x800C25F0: nop

    after_32:
    // 0x800C25F4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800C25F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C25FC: jal         0x8002EC20
    // 0x800C2600: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_33;
    // 0x800C2600: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_33:
    // 0x800C2604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2608: jal         0x800C16F8
    // 0x800C260C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800C16F8(rdram, ctx);
        goto after_34;
    // 0x800C260C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_34:
    // 0x800C2610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2614: jal         0x800C13B0
    // 0x800C2618: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_800C13B0(rdram, ctx);
        goto after_35;
    // 0x800C2618: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_35:
    // 0x800C261C: jal         0x800C1D80
    // 0x800C2620: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_800C1D80(rdram, ctx);
        goto after_36;
    // 0x800C2620: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_36:
    // 0x800C2624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C2628: jal         0x8002EC20
    // 0x800C262C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_37;
    // 0x800C262C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_37:
    // 0x800C2630: b           L_800C2664
    // 0x800C2634: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
        goto L_800C2664;
    // 0x800C2634: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
L_800C2638:
    // 0x800C2638: beql        $v1, $zero, L_800C2664
    if (ctx->r3 == 0) {
        // 0x800C263C: lbu         $v0, 0x79($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X79);
            goto L_800C2664;
    }
    goto skip_20;
    // 0x800C263C: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    skip_20:
    // 0x800C2640: jal         0x800C1860
    // 0x800C2644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C1860(rdram, ctx);
        goto after_38;
    // 0x800C2644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x800C2648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C264C: jal         0x800C1210
    // 0x800C2650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C1210(rdram, ctx);
        goto after_39;
    // 0x800C2650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_39:
    // 0x800C2654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2658: jal         0x800C13A0
    // 0x800C265C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_800C13A0(rdram, ctx);
        goto after_40;
    // 0x800C265C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_40:
L_800C2660:
    // 0x800C2660: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
L_800C2664:
    // 0x800C2664: beql        $v0, $zero, L_800C268C
    if (ctx->r2 == 0) {
        // 0x800C2668: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800C268C;
    }
    goto skip_21;
    // 0x800C2668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_21:
    // 0x800C266C: jal         0x800C1448
    // 0x800C2670: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C1448(rdram, ctx);
        goto after_41;
    // 0x800C2670: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_41:
    // 0x800C2674: bnel        $v0, $zero, L_800C268C
    if (ctx->r2 != 0) {
        // 0x800C2678: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800C268C;
    }
    goto skip_22;
    // 0x800C2678: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_22:
    // 0x800C267C: jal         0x800C1568
    // 0x800C2680: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    func_800C1568(rdram, ctx);
        goto after_42;
    // 0x800C2680: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    after_42:
    // 0x800C2684: sb          $zero, 0x79($s0)
    MEM_B(0X79, ctx->r16) = 0;
    // 0x800C2688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C268C:
    // 0x800C268C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C2690: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800C2694: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C269C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C269C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C26A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C26A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C26A8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C26AC: jal         0x800C1414
    // 0x800C26B0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C26B0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800C26B4: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x800C26B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C26BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C26C0: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x800C26C4: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800C26C8: beql        $t9, $at, L_800C26DC
    if (ctx->r25 == ctx->r1) {
        // 0x800C26CC: lbu         $t0, 0x79($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X79);
            goto L_800C26DC;
    }
    goto skip_0;
    // 0x800C26CC: lbu         $t0, 0x79($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X79);
    skip_0:
    // 0x800C26D0: b           L_800C2708
    // 0x800C26D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C2708;
    // 0x800C26D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C26D8: lbu         $t0, 0x79($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X79);
L_800C26DC:
    // 0x800C26DC: bne         $t0, $zero, L_800C26EC
    if (ctx->r8 != 0) {
        // 0x800C26E0: nop
    
            goto L_800C26EC;
    }
    // 0x800C26E0: nop

    // 0x800C26E4: b           L_800C2708
    // 0x800C26E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C2708;
    // 0x800C26E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C26EC:
    // 0x800C26EC: jal         0x800C1448
    // 0x800C26F0: lbu         $a0, 0x79($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X79);
    func_800C1448(rdram, ctx);
        goto after_1;
    // 0x800C26F0: lbu         $a0, 0x79($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X79);
    after_1:
    // 0x800C26F4: beql        $v0, $zero, L_800C2708
    if (ctx->r2 == 0) {
        // 0x800C26F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800C2708;
    }
    goto skip_1;
    // 0x800C26F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x800C26FC: b           L_800C2708
    // 0x800C2700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C2708;
    // 0x800C2700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C2704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C2708:
    // 0x800C2708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C270C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C2710: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2718: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C271C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C2720: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800C2724: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800C2728: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C272C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C2730: jal         0x800C0638
    // 0x800C2734: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800C0638(rdram, ctx);
        goto after_0;
    // 0x800C2734: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800C2738: beq         $v0, $zero, L_800C2780
    if (ctx->r2 == 0) {
        // 0x800C273C: nop
    
            goto L_800C2780;
    }
    // 0x800C273C: nop

    // 0x800C2740: jal         0x800D8FF8
    // 0x800C2744: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x800C2744: nop

    after_1:
    // 0x800C2748: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C274C: addiu       $v0, $v0, -0x5788
    ctx->r2 = ADD32(ctx->r2, -0X5788);
    // 0x800C2750: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800C2754: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C2758: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C275C: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x800C2760: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x800C2764: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800C2768: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x800C276C: nop

    // 0x800C2770: bc1f        L_800C27BC
    if (!c1cs) {
        // 0x800C2774: nop
    
            goto L_800C27BC;
    }
    // 0x800C2774: nop

    // 0x800C2778: b           L_800C27BC
    // 0x800C277C: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
        goto L_800C27BC;
    // 0x800C277C: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_800C2780:
    // 0x800C2780: jal         0x800D8FF8
    // 0x800C2784: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x800C2784: nop

    after_2:
    // 0x800C2788: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C278C: addiu       $v0, $v0, -0x5788
    ctx->r2 = ADD32(ctx->r2, -0X5788);
    // 0x800C2790: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800C2794: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2798: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C279C: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800C27A0: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x800C27A4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800C27A8: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x800C27AC: nop

    // 0x800C27B0: bc1f        L_800C27BC
    if (!c1cs) {
        // 0x800C27B4: nop
    
            goto L_800C27BC;
    }
    // 0x800C27B4: nop

    // 0x800C27B8: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_800C27BC:
    // 0x800C27BC: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800C27C0: addiu       $s2, $s2, -0x73F0
    ctx->r18 = ADD32(ctx->r18, -0X73F0);
    // 0x800C27C4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800C27C8: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
    // 0x800C27CC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_800C27D0:
    // 0x800C27D0: lbu         $t6, 0x78($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X78);
    // 0x800C27D4: beql        $t6, $zero, L_800C2818
    if (ctx->r14 == 0) {
        // 0x800C27D8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C2818;
    }
    goto skip_0;
    // 0x800C27D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800C27DC: lw          $t7, 0x78($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X78);
    // 0x800C27E0: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x800C27E4: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800C27E8: beql        $s3, $t9, L_800C27FC
    if (ctx->r19 == ctx->r25) {
        // 0x800C27EC: andi        $s0, $s1, 0xFF
        ctx->r16 = ctx->r17 & 0XFF;
            goto L_800C27FC;
    }
    goto skip_1;
    // 0x800C27EC: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    skip_1:
    // 0x800C27F0: jal         0x800C2000
    // 0x800C27F4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800C2000(rdram, ctx);
        goto after_3;
    // 0x800C27F4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x800C27F8: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
L_800C27FC:
    // 0x800C27FC: jal         0x800C269C
    // 0x800C2800: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C269C(rdram, ctx);
        goto after_4;
    // 0x800C2800: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x800C2804: beql        $v0, $zero, L_800C2818
    if (ctx->r2 == 0) {
        // 0x800C2808: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C2818;
    }
    goto skip_2;
    // 0x800C2808: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x800C280C: jal         0x800C16A4
    // 0x800C2810: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C16A4(rdram, ctx);
        goto after_5;
    // 0x800C2810: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_5:
    // 0x800C2814: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C2818:
    // 0x800C2818: bne         $s1, $s4, L_800C27D0
    if (ctx->r17 != ctx->r20) {
        // 0x800C281C: addiu       $s2, $s2, 0x80
        ctx->r18 = ADD32(ctx->r18, 0X80);
            goto L_800C27D0;
    }
    // 0x800C281C: addiu       $s2, $s2, 0x80
    ctx->r18 = ADD32(ctx->r18, 0X80);
    // 0x800C2820: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C2824: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C2828: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C282C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C2830: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800C2834: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800C2838: jr          $ra
    // 0x800C283C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C283C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C2840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C2844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2848: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C284C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C2850: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C2854: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C2858: jal         0x800C2E04
    // 0x800C285C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x800C285C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C2860: beq         $v0, $zero, L_800C28C4
    if (ctx->r2 == 0) {
        // 0x800C2864: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_800C28C4;
    }
    // 0x800C2864: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800C2868: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C286C: jal         0x800C301C
    // 0x800C2870: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800C301C(rdram, ctx);
        goto after_1;
    // 0x800C2870: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800C2874: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C2878: jal         0x800C3058
    // 0x800C287C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800C3058(rdram, ctx);
        goto after_2;
    // 0x800C287C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800C2880: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C2884: jal         0x800C31DC
    // 0x800C2888: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800C31DC(rdram, ctx);
        goto after_3;
    // 0x800C2888: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x800C288C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C2890: jal         0x800C32C4
    // 0x800C2894: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800C32C4(rdram, ctx);
        goto after_4;
    // 0x800C2894: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x800C2898: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C289C: jal         0x800C330C
    // 0x800C28A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C330C(rdram, ctx);
        goto after_5;
    // 0x800C28A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800C28A4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C28A8: jal         0x800C3418
    // 0x800C28AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800C3418(rdram, ctx);
        goto after_6;
    // 0x800C28AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x800C28B0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C28B4: jal         0x800C36F4
    // 0x800C28B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C36F4(rdram, ctx);
        goto after_7;
    // 0x800C28B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800C28BC: jal         0x800C3BDC
    // 0x800C28C0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_8;
    // 0x800C28C0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_8:
L_800C28C4:
    // 0x800C28C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C28C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C28CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C28D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C28D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C28D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C28DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C28E0: jal         0x800C157C
    // 0x800C28E4: nop

    func_800C157C(rdram, ctx);
        goto after_0;
    // 0x800C28E4: nop

    after_0:
    // 0x800C28E8: jal         0x800C13E4
    // 0x800C28EC: nop

    func_800C13E4(rdram, ctx);
        goto after_1;
    // 0x800C28EC: nop

    after_1:
    // 0x800C28F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C28F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C28F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2900: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2904: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C2908: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800C290C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C2910: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C2914: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C2918: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800C291C: addiu       $s0, $s0, -0x73F0
    ctx->r16 = ADD32(ctx->r16, -0X73F0);
    // 0x800C2920: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
    // 0x800C2924: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_800C2928:
    // 0x800C2928: lbu         $t6, 0x78($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X78);
    // 0x800C292C: beql        $t6, $zero, L_800C2940
    if (ctx->r14 == 0) {
        // 0x800C2930: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800C2940;
    }
    goto skip_0;
    // 0x800C2930: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800C2934: jal         0x800C2FDC
    // 0x800C2938: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x800C2938: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_0:
    // 0x800C293C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800C2940:
    // 0x800C2940: bne         $s2, $s1, L_800C2928
    if (ctx->r18 != ctx->r17) {
        // 0x800C2944: addiu       $s0, $s0, 0x80
        ctx->r16 = ADD32(ctx->r16, 0X80);
            goto L_800C2928;
    }
    // 0x800C2944: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x800C2948: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800C294C: addiu       $s3, $s3, -0x5670
    ctx->r19 = ADD32(ctx->r19, -0X5670);
L_800C2950:
    // 0x800C2950: jal         0x800C2718
    // 0x800C2954: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800C2718(rdram, ctx);
        goto after_1;
    // 0x800C2954: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x800C2958: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800C295C: lbu         $t7, -0x7378($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7378);
    // 0x800C2960: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800C2964: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800C2968: beq         $t7, $zero, L_800C2974
    if (ctx->r15 == 0) {
        // 0x800C296C: lui         $s0, 0x8013
        ctx->r16 = S32(0X8013 << 16);
            goto L_800C2974;
    }
    // 0x800C296C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C2970: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800C2974:
    // 0x800C2974: lbu         $t8, -0x72F8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X72F8);
    // 0x800C2978: addiu       $s0, $s0, -0x7270
    ctx->r16 = ADD32(ctx->r16, -0X7270);
    // 0x800C297C: beq         $t8, $zero, L_800C2988
    if (ctx->r24 == 0) {
        // 0x800C2980: nop
    
            goto L_800C2988;
    }
    // 0x800C2980: nop

    // 0x800C2984: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C2988:
    // 0x800C2988: lbu         $t9, -0x7278($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X7278);
    // 0x800C298C: beq         $t9, $zero, L_800C2998
    if (ctx->r25 == 0) {
        // 0x800C2990: nop
    
            goto L_800C2998;
    }
    // 0x800C2990: nop

    // 0x800C2994: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C2998:
    // 0x800C2998: lbu         $t0, 0x78($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X78);
L_800C299C:
    // 0x800C299C: beql        $t0, $zero, L_800C29AC
    if (ctx->r8 == 0) {
        // 0x800C29A0: lbu         $t1, 0xF8($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XF8);
            goto L_800C29AC;
    }
    goto skip_1;
    // 0x800C29A0: lbu         $t1, 0xF8($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF8);
    skip_1:
    // 0x800C29A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800C29A8: lbu         $t1, 0xF8($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF8);
L_800C29AC:
    // 0x800C29AC: beql        $t1, $zero, L_800C29BC
    if (ctx->r9 == 0) {
        // 0x800C29B0: lbu         $t2, 0x178($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X178);
            goto L_800C29BC;
    }
    goto skip_2;
    // 0x800C29B0: lbu         $t2, 0x178($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X178);
    skip_2:
    // 0x800C29B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800C29B8: lbu         $t2, 0x178($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X178);
L_800C29BC:
    // 0x800C29BC: beql        $t2, $zero, L_800C29CC
    if (ctx->r10 == 0) {
        // 0x800C29C0: lbu         $t3, 0x1F8($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X1F8);
            goto L_800C29CC;
    }
    goto skip_3;
    // 0x800C29C0: lbu         $t3, 0x1F8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1F8);
    skip_3:
    // 0x800C29C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800C29C8: lbu         $t3, 0x1F8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1F8);
L_800C29CC:
    // 0x800C29CC: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x800C29D0: beq         $t3, $zero, L_800C29DC
    if (ctx->r11 == 0) {
        // 0x800C29D4: nop
    
            goto L_800C29DC;
    }
    // 0x800C29D4: nop

    // 0x800C29D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C29DC:
    // 0x800C29DC: bnel        $s0, $s3, L_800C299C
    if (ctx->r16 != ctx->r19) {
        // 0x800C29E0: lbu         $t0, 0x78($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X78);
            goto L_800C299C;
    }
    goto skip_4;
    // 0x800C29E0: lbu         $t0, 0x78($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X78);
    skip_4:
    // 0x800C29E4: bne         $s1, $zero, L_800C2950
    if (ctx->r17 != 0) {
        // 0x800C29E8: nop
    
            goto L_800C2950;
    }
    // 0x800C29E8: nop

    // 0x800C29EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C29F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C29F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C29F8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800C29FC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800C2A00: jr          $ra
    // 0x800C2A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C2A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C2A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C2A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2A10: jal         0x800C28D8
    // 0x800C2A14: nop

    func_800C28D8(rdram, ctx);
        goto after_0;
    // 0x800C2A14: nop

    after_0:
    // 0x800C2A18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2A1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C2A20: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800C2A24: jal         0x800C4308
    // 0x800C2A28: nop

    func_800C4308(rdram, ctx);
        goto after_1;
    // 0x800C2A28: nop

    after_1:
    // 0x800C2A2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2A30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800C2A34: jal         0x800C4B64
    // 0x800C2A38: nop

    func_800C4B64(rdram, ctx);
        goto after_2;
    // 0x800C2A38: nop

    after_2:
    // 0x800C2A3C: jal         0x800C4B70
    // 0x800C2A40: addiu       $a0, $zero, 0x55F0
    ctx->r4 = ADD32(0, 0X55F0);
    func_800C4B70(rdram, ctx);
        goto after_3;
    // 0x800C2A40: addiu       $a0, $zero, 0x55F0
    ctx->r4 = ADD32(0, 0X55F0);
    after_3:
    // 0x800C2A44: jal         0x800C4B7C
    // 0x800C2A48: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_800C4B7C(rdram, ctx);
        goto after_4;
    // 0x800C2A48: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_4:
    // 0x800C2A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C2A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C2A54: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2A5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800C2A60: jr          $ra
    // 0x800C2A64: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x800C2A64: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_800C2A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C2A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2A70: jal         0x80017244
    // 0x800C2A74: nop

    func_80017244(rdram, ctx);
        goto after_0;
    // 0x800C2A74: nop

    after_0:
    // 0x800C2A78: jal         0x80016E7C
    // 0x800C2A7C: nop

    func_80016E7C(rdram, ctx);
        goto after_1;
    // 0x800C2A7C: nop

    after_1:
    // 0x800C2A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C2A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C2A88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C2A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2A98: jal         0x800C2900
    // 0x800C2A9C: nop

    func_800C2900(rdram, ctx);
        goto after_0;
    // 0x800C2A9C: nop

    after_0:
    // 0x800C2AA0: jal         0x800C2A68
    // 0x800C2AA4: nop

    func_800C2A68(rdram, ctx);
        goto after_1;
    // 0x800C2AA4: nop

    after_1:
    // 0x800C2AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C2AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C2AB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2AB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C2ABC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800C2AC0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800C2AC4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800C2AC8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800C2ACC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800C2AD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C2AD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C2AD8: jal         0x800C2B80
    // 0x800C2ADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800C2B80(rdram, ctx);
        goto after_0;
    // 0x800C2ADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800C2AE0: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x800C2AE4: addiu       $s6, $s6, -0x73F0
    ctx->r22 = ADD32(ctx->r22, -0X73F0);
    // 0x800C2AE8: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
    // 0x800C2AEC: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x800C2AF0: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
L_800C2AF4:
    // 0x800C2AF4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800C2AF8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_800C2AFC:
    // 0x800C2AFC: lbu         $t6, 0x78($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X78);
    // 0x800C2B00: beql        $t6, $zero, L_800C2B48
    if (ctx->r14 == 0) {
        // 0x800C2B04: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800C2B48;
    }
    goto skip_0;
    // 0x800C2B04: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800C2B08: lw          $t7, 0x78($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X78);
    // 0x800C2B0C: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x800C2B10: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x800C2B14: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800C2B18: bnel        $s4, $t9, L_800C2B48
    if (ctx->r20 != ctx->r25) {
        // 0x800C2B1C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800C2B48;
    }
    goto skip_1;
    // 0x800C2B1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x800C2B20: jal         0x800C269C
    // 0x800C2B24: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C269C(rdram, ctx);
        goto after_1;
    // 0x800C2B24: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    tooie_probe_gate(rdram, ctx);
    // 0x800C2B28: beql        $v0, $zero, L_800C2B44
    if (ctx->r2 == 0) {
        // 0x800C2B2C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_800C2B44;
    }
    goto skip_2;
    // 0x800C2B2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
    // 0x800C2B30: jal         0x800C16A4
    // 0x800C2B34: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C16A4(rdram, ctx);
        goto after_2;
    // 0x800C2B34: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x800C2B38: b           L_800C2B48
    // 0x800C2B3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800C2B48;
    // 0x800C2B3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800C2B40: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800C2B44:
    // 0x800C2B44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800C2B48:
    // 0x800C2B48: bne         $s2, $s5, L_800C2AFC
    if (ctx->r18 != ctx->r21) {
        // 0x800C2B4C: addiu       $s1, $s1, 0x80
        ctx->r17 = ADD32(ctx->r17, 0X80);
            goto L_800C2AFC;
    }
    // 0x800C2B4C: addiu       $s1, $s1, 0x80
    ctx->r17 = ADD32(ctx->r17, 0X80);
    tooie_yield_pending_sound(rdram, ctx);
    // 0x800C2B50: bnel        $s3, $zero, L_800C2AF4
    if (ctx->r19 != 0) {
        // 0x800C2B54: or          $s1, $s6, $zero
        ctx->r17 = ctx->r22 | 0;
            goto L_800C2AF4;
    }
    goto skip_3;
    // 0x800C2B54: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    skip_3:
    // 0x800C2B58: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800C2B5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C2B60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2B64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C2B68: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800C2B6C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800C2B70: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800C2B74: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800C2B78: jr          $ra
    // 0x800C2B7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C2B7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C2B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2B80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C2B84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C2B88: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800C2B8C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800C2B90: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800C2B94: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800C2B98: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800C2B9C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C2BA0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800C2BA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800C2BA8: addiu       $s0, $s0, -0x73F0
    ctx->r16 = ADD32(ctx->r16, -0X73F0);
    // 0x800C2BAC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800C2BB0: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x800C2BB4: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x800C2BB8: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_800C2BBC:
    // 0x800C2BBC: lbu         $t6, 0x78($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X78);
    // 0x800C2BC0: beql        $t6, $zero, L_800C2C20
    if (ctx->r14 == 0) {
        // 0x800C2BC4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C2C20;
    }
    goto skip_0;
    // 0x800C2BC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800C2BC8: lw          $t7, 0x78($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X78);
    // 0x800C2BCC: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x800C2BD0: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800C2BD4: beql        $s3, $t9, L_800C2C20
    if (ctx->r19 == ctx->r25) {
        // 0x800C2BD8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C2C20;
    }
    goto skip_1;
    // 0x800C2BD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x800C2BDC: lbu         $v0, 0x62($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X62);
    // 0x800C2BE0: beql        $s4, $v0, L_800C2C20
    if (ctx->r20 == ctx->r2) {
        // 0x800C2BE4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C2C20;
    }
    goto skip_2;
    // 0x800C2BE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x800C2BE8: bne         $v0, $zero, L_800C2C00
    if (ctx->r2 != 0) {
        // 0x800C2BEC: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_800C2C00;
    }
    // 0x800C2BEC: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x800C2BF0: jal         0x800C2FDC
    // 0x800C2BF4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x800C2BF4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x800C2BF8: b           L_800C2C20
    // 0x800C2BFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_800C2C20;
    // 0x800C2BFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C2C00:
    // 0x800C2C00: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800C2C04: bne         $t1, $zero, L_800C2C1C
    if (ctx->r9 != 0) {
        // 0x800C2C08: sb          $t0, 0x62($s0)
        MEM_B(0X62, ctx->r16) = ctx->r8;
            goto L_800C2C1C;
    }
    // 0x800C2C08: sb          $t0, 0x62($s0)
    MEM_B(0X62, ctx->r16) = ctx->r8;
    // 0x800C2C0C: lbu         $t3, 0x7B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X7B);
    // 0x800C2C10: swc1        $f20, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f20.u32l;
    // 0x800C2C14: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x800C2C18: sb          $t4, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r12;
L_800C2C1C:
    // 0x800C2C1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C2C20:
    // 0x800C2C20: bne         $s1, $s2, L_800C2BBC
    if (ctx->r17 != ctx->r18) {
        // 0x800C2C24: addiu       $s0, $s0, 0x80
        ctx->r16 = ADD32(ctx->r16, 0X80);
            goto L_800C2BBC;
    }
    // 0x800C2C24: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x800C2C28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800C2C2C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800C2C30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C2C34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800C2C38: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800C2C3C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800C2C40: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800C2C44: jr          $ra
    // 0x800C2C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C2C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C2C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2C4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C2C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2C54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C2C58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C2C5C: jal         0x800C1414
    // 0x800C2C60: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C2C60: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_0:
    // 0x800C2C64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C2C6C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800C2C70: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x800C2C74: addiu       $t8, $zero, 0x3F
    ctx->r24 = ADD32(0, 0X3F);
    // 0x800C2C78: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800C2C7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C2C80: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x800C2C84: sh          $t6, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r14;
    // 0x800C2C88: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    // 0x800C2C8C: sh          $t7, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r15;
    // 0x800C2C90: sb          $zero, 0x60($v0)
    MEM_B(0X60, ctx->r2) = 0;
    // 0x800C2C94: sb          $t8, 0x61($v0)
    MEM_B(0X61, ctx->r2) = ctx->r24;
    // 0x800C2C98: sb          $zero, 0x79($v0)
    MEM_B(0X79, ctx->r2) = 0;
    // 0x800C2C9C: sb          $t9, 0x62($v0)
    MEM_B(0X62, ctx->r2) = ctx->r25;
    // 0x800C2CA0: jal         0x800EA05C
    // 0x800C2CA4: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x800C2CA4: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x800C2CA8: lhu         $t1, 0x7A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7A);
    // 0x800C2CAC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800C2CB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2CB4: andi        $t2, $t1, 0xFC3F
    ctx->r10 = ctx->r9 & 0XFC3F;
    // 0x800C2CB8: sh          $t2, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r10;
    // 0x800C2CBC: lbu         $t3, 0x7B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X7B);
    // 0x800C2CC0: sb          $t0, 0x63($s0)
    MEM_B(0X63, ctx->r16) = ctx->r8;
    // 0x800C2CC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800C2CC8: andi        $t6, $t3, 0xFFEF
    ctx->r14 = ctx->r11 & 0XFFEF;
    // 0x800C2CCC: ori         $t8, $t6, 0x2
    ctx->r24 = ctx->r14 | 0X2;
    // 0x800C2CD0: sb          $t6, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r14;
    // 0x800C2CD4: andi        $t0, $t8, 0xF7
    ctx->r8 = ctx->r24 & 0XF7;
    // 0x800C2CD8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800C2CDC: sb          $t8, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r24;
    // 0x800C2CE0: andi        $t2, $t0, 0xDF
    ctx->r10 = ctx->r8 & 0XDF;
    // 0x800C2CE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C2CE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C2CEC: sb          $t0, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r8;
    // 0x800C2CF0: sb          $t2, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r10;
    // 0x800C2CF4: andi        $t3, $t2, 0xFB
    ctx->r11 = ctx->r10 & 0XFB;
    // 0x800C2CF8: sh          $v0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r2;
    // 0x800C2CFC: sb          $t3, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r11;
    // 0x800C2D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2D08: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x800C2D0C: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x800C2D10: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x800C2D14: jal         0x800C1210
    // 0x800C2D18: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    func_800C1210(rdram, ctx);
        goto after_2;
    // 0x800C2D18: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x800C2D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D20: jal         0x800C11F8
    // 0x800C2D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C11F8(rdram, ctx);
        goto after_3;
    // 0x800C2D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C2D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D2C: jal         0x800C13A0
    // 0x800C2D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C13A0(rdram, ctx);
        goto after_4;
    // 0x800C2D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x800C2D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D38: jal         0x800C13A0
    // 0x800C2D3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_5;
    // 0x800C2D3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x800C2D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D44: jal         0x800C13A0
    // 0x800C2D48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13A0(rdram, ctx);
        goto after_6;
    // 0x800C2D48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x800C2D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D50: jal         0x800C13A0
    // 0x800C2D54: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800C13A0(rdram, ctx);
        goto after_7;
    // 0x800C2D54: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x800C2D58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C2D5C: lwc1        $f10, 0x57F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X57F0);
    // 0x800C2D60: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C2D64: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800C2D68: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x800C2D6C: lwc1        $f16, 0x57F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57F4);
    // 0x800C2D70: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800C2D74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C2D78: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x800C2D7C: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x800C2D80: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x800C2D84: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x800C2D88: sb          $zero, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = 0;
    // 0x800C2D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2D90: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x800C2D94: jal         0x800EFD24
    // 0x800C2D98: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    func_800EFD24(rdram, ctx);
        goto after_8;
    // 0x800C2D98: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    after_8:
    // 0x800C2D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2DA0: jal         0x800C13B0
    // 0x800C2DA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13B0(rdram, ctx);
        goto after_9;
    // 0x800C2DA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x800C2DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2DAC: jal         0x800C13B0
    // 0x800C2DB0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_800C13B0(rdram, ctx);
        goto after_10;
    // 0x800C2DB0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_10:
    // 0x800C2DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2DB8: jal         0x800C13B0
    // 0x800C2DBC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13B0(rdram, ctx);
        goto after_11;
    // 0x800C2DBC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_11:
    // 0x800C2DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2DC4: jal         0x800C13B0
    // 0x800C2DC8: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13B0(rdram, ctx);
        goto after_12;
    // 0x800C2DC8: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_12:
    // 0x800C2DCC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800C2DD0: jal         0x800C3418
    // 0x800C2DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C3418(rdram, ctx);
        goto after_13;
    // 0x800C2DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x800C2DD8: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800C2DDC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x800C2DE0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x800C2DE4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x800C2DE8: jal         0x800C3798
    // 0x800C2DEC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C3798(rdram, ctx);
        goto after_14;
    // 0x800C2DEC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_14:
    // 0x800C2DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2DF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C2DF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C2DFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C2E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2E0C: jal         0x800C145C
    // 0x800C2E10: nop

    func_800C145C(rdram, ctx);
        goto after_0;
    // 0x800C2E10: nop

    after_0:
    // 0x800C2E14: bne         $v0, $zero, L_800C2E24
    if (ctx->r2 != 0) {
        // 0x800C2E18: andi        $a0, $v0, 0xFF
        ctx->r4 = ctx->r2 & 0XFF;
            goto L_800C2E24;
    }
    // 0x800C2E18: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x800C2E1C: b           L_800C2E30
    // 0x800C2E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C2E30;
    // 0x800C2E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C2E24:
    // 0x800C2E24: jal         0x800C2C4C
    // 0x800C2E28: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_800C2C4C(rdram, ctx);
        goto after_1;
    // 0x800C2E28: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_1:
    // 0x800C2E2C: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
L_800C2E30:
    // 0x800C2E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C2E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C2E38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2E40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C2E44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2E48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C2E4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C2E50: jal         0x800C3CE8
    // 0x800C2E54: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C3CE8(rdram, ctx);
        goto after_0;
    // 0x800C2E54: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_0:
    // 0x800C2E58: jal         0x800C1414
    // 0x800C2E5C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C1414(rdram, ctx);
        goto after_1;
    // 0x800C2E5C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x800C2E60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2E64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C2E68: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800C2E6C: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x800C2E70: addiu       $t8, $zero, 0x3F
    ctx->r24 = ADD32(0, 0X3F);
    // 0x800C2E74: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800C2E78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C2E7C: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x800C2E80: sh          $t6, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r14;
    // 0x800C2E84: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    // 0x800C2E88: sh          $t7, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r15;
    // 0x800C2E8C: sb          $zero, 0x60($v0)
    MEM_B(0X60, ctx->r2) = 0;
    // 0x800C2E90: sb          $t8, 0x61($v0)
    MEM_B(0X61, ctx->r2) = ctx->r24;
    // 0x800C2E94: sb          $t9, 0x62($v0)
    MEM_B(0X62, ctx->r2) = ctx->r25;
    // 0x800C2E98: jal         0x800EA05C
    // 0x800C2E9C: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    func_800EA05C(rdram, ctx);
        goto after_2;
    // 0x800C2E9C: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    after_2:
    // 0x800C2EA0: lhu         $t1, 0x7A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7A);
    // 0x800C2EA4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800C2EA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C2EAC: andi        $t2, $t1, 0xFC3F
    ctx->r10 = ctx->r9 & 0XFC3F;
    // 0x800C2EB0: sh          $t2, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r10;
    // 0x800C2EB4: lbu         $t3, 0x7B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X7B);
    // 0x800C2EB8: sb          $t0, 0x63($s0)
    MEM_B(0X63, ctx->r16) = ctx->r8;
    // 0x800C2EBC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800C2EC0: andi        $t6, $t3, 0xFFEF
    ctx->r14 = ctx->r11 & 0XFFEF;
    // 0x800C2EC4: ori         $t8, $t6, 0x2
    ctx->r24 = ctx->r14 | 0X2;
    // 0x800C2EC8: sb          $t6, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r14;
    // 0x800C2ECC: andi        $t0, $t8, 0xF7
    ctx->r8 = ctx->r24 & 0XF7;
    // 0x800C2ED0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800C2ED4: sb          $t8, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r24;
    // 0x800C2ED8: andi        $t2, $t0, 0xDF
    ctx->r10 = ctx->r8 & 0XDF;
    // 0x800C2EDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C2EE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C2EE4: sb          $t0, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r8;
    // 0x800C2EE8: sb          $t2, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r10;
    // 0x800C2EEC: andi        $t3, $t2, 0xFB
    ctx->r11 = ctx->r10 & 0XFB;
    // 0x800C2EF0: sh          $v0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r2;
    // 0x800C2EF4: sb          $t3, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r11;
    // 0x800C2EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2F00: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x800C2F04: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x800C2F08: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x800C2F0C: jal         0x800C1210
    // 0x800C2F10: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    func_800C1210(rdram, ctx);
        goto after_3;
    // 0x800C2F10: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x800C2F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F18: jal         0x800C11F8
    // 0x800C2F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C11F8(rdram, ctx);
        goto after_4;
    // 0x800C2F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800C2F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F24: jal         0x800C13A0
    // 0x800C2F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C13A0(rdram, ctx);
        goto after_5;
    // 0x800C2F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800C2F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F30: jal         0x800C13A0
    // 0x800C2F34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_6;
    // 0x800C2F34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x800C2F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F3C: jal         0x800C13A0
    // 0x800C2F40: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13A0(rdram, ctx);
        goto after_7;
    // 0x800C2F40: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x800C2F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F48: jal         0x800C13A0
    // 0x800C2F4C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800C13A0(rdram, ctx);
        goto after_8;
    // 0x800C2F4C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_8:
    // 0x800C2F50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C2F54: lwc1        $f10, 0x57F8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X57F8);
    // 0x800C2F58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C2F5C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800C2F60: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x800C2F64: lwc1        $f16, 0x57FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57FC);
    // 0x800C2F68: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800C2F6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C2F70: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x800C2F74: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x800C2F78: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x800C2F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F80: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x800C2F84: jal         0x800EFD24
    // 0x800C2F88: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    func_800EFD24(rdram, ctx);
        goto after_9;
    // 0x800C2F88: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    after_9:
    // 0x800C2F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F90: jal         0x800C13B0
    // 0x800C2F94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13B0(rdram, ctx);
        goto after_10;
    // 0x800C2F94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x800C2F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C2F9C: jal         0x800C13B0
    // 0x800C2FA0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_800C13B0(rdram, ctx);
        goto after_11;
    // 0x800C2FA0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_11:
    // 0x800C2FA4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800C2FA8: jal         0x800C3418
    // 0x800C2FAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C3418(rdram, ctx);
        goto after_12;
    // 0x800C2FAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x800C2FB0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800C2FB4: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x800C2FB8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x800C2FBC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x800C2FC0: jal         0x800C3798
    // 0x800C2FC4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C3798(rdram, ctx);
        goto after_13;
    // 0x800C2FC4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_13:
    // 0x800C2FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2FCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C2FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C2FD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C2FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C2FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2FE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C2FE8: jal         0x800C1414
    // 0x800C2FEC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C2FEC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_0:
    // 0x800C2FF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800C2FF4: jal         0x800C3CE8
    // 0x800C2FF8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C3CE8(rdram, ctx);
        goto after_1;
    // 0x800C2FF8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x800C2FFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3000: jal         0x800C1210
    // 0x800C3004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C1210(rdram, ctx);
        goto after_2;
    // 0x800C3004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800C3008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C300C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C3014: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C301C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C301C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3024: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3028: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C302C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3030: beq         $t6, $zero, L_800C3048
    if (ctx->r14 == 0) {
        // 0x800C3034: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3048;
    }
    // 0x800C3034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3038: jal         0x800C1414
    // 0x800C303C: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C303C: nop

    after_0:
    // 0x800C3040: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3044: sh          $t7, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r15;
L_800C3048:
    // 0x800C3048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C304C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3050: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C305C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3060: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3064: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3068: beq         $t6, $zero, L_800C30A8
    if (ctx->r14 == 0) {
        // 0x800C306C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C30A8;
    }
    // 0x800C306C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3070: jal         0x800C1414
    // 0x800C3074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C3078: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x800C307C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3084: sll         $t9, $t7, 28
    ctx->r25 = S32(ctx->r15 << 28);
    // 0x800C3088: bltz        $t9, L_800C30A0
    if (SIGNED(ctx->r25) < 0) {
        // 0x800C308C: sh          $a1, 0x5A($v0)
        MEM_H(0X5A, ctx->r2) = ctx->r5;
            goto L_800C30A0;
    }
    // 0x800C308C: sh          $a1, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r5;
    // 0x800C3090: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C3094: sh          $a1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r5;
    // 0x800C3098: sh          $a1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r5;
    // 0x800C309C: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
L_800C30A0:
    // 0x800C30A0: jal         0x800C13A0
    // 0x800C30A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C30A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
L_800C30A8:
    // 0x800C30A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C30AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C30B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C30B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C30B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C30BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C30C0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C30C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C30C8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800C30CC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800C30D0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800C30D4: jal         0x800C1070
    // 0x800C30D8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800C1070(rdram, ctx);
        goto after_0;
    // 0x800C30D8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800C30DC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C30E0: jal         0x800EEAD4
    // 0x800C30E4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EEAD4(rdram, ctx);
        goto after_1;
    // 0x800C30E4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x800C30E8: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800C30EC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C30F0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C30F4: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x800C30F8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800C30FC: bc1f        L_800C3110
    if (!c1cs) {
        // 0x800C3100: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800C3110;
    }
    // 0x800C3100: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C3104: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800C3108: b           L_800C3144
    // 0x800C310C: nop

        goto L_800C3144;
    // 0x800C310C: nop

L_800C3110:
    // 0x800C3110: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x800C3114: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C3118: bc1fl       L_800C3140
    if (!c1cs) {
        // 0x800C311C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_800C3140;
    }
    goto skip_0;
    // 0x800C311C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x800C3120: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x800C3124: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C3128: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C312C: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800C3130: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C3134: b           L_800C3144
    // 0x800C3138: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
        goto L_800C3144;
    // 0x800C3138: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x800C313C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_800C3140:
    // 0x800C3140: nop

L_800C3144:
    // 0x800C3144: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x800C3148: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x800C314C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800C3150: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800C3154: jal         0x800C3058
    // 0x800C3158: nop

    func_800C3058(rdram, ctx);
        goto after_2;
    // 0x800C3158: nop

    after_2:
    // 0x800C315C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3160: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C3164: jr          $ra
    // 0x800C3168: nop

    return;
    // 0x800C3168: nop

;}
RECOMP_FUNC void func_800C316C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C316C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3174: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3178: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C317C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3180: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3184: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C3188: beq         $t6, $zero, L_800C31CC
    if (ctx->r14 == 0) {
        // 0x800C318C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_800C31CC;
    }
    // 0x800C318C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C3190: jal         0x800C1414
    // 0x800C3194: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3194: nop

    after_0:
    // 0x800C3198: lbu         $t8, 0x7B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7B);
    // 0x800C319C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C31A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800C31A4: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x800C31A8: sb          $t9, 0x7B($v0)
    MEM_B(0X7B, ctx->r2) = ctx->r25;
    // 0x800C31AC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C31B0: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x800C31B4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800C31B8: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
    // 0x800C31BC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C31C0: sh          $zero, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = 0;
    // 0x800C31C4: jal         0x800C13A0
    // 0x800C31C8: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C31C8: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    after_1:
L_800C31CC:
    // 0x800C31CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C31D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C31D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C31DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C31DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C31E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C31E4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C31E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C31EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C31F0: beq         $t6, $zero, L_800C3214
    if (ctx->r14 == 0) {
        // 0x800C31F4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3214;
    }
    // 0x800C31F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C31F8: jal         0x800C1414
    // 0x800C31FC: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C31FC: nop

    after_0:
    // 0x800C3200: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C3204: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3208: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C320C: jal         0x800C13A0
    // 0x800C3210: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C3210: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    after_1:
L_800C3214:
    // 0x800C3214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C321C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3224: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3228: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800C322C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3230: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C3234: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800C3238: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C323C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C3240: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800C3244: jal         0x800C395C
    // 0x800C3248: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    func_800C395C(rdram, ctx);
        goto after_0;
    // 0x800C3248: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800C324C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C3250: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C3254: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800C3258: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800C325C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C3260: bc1fl       L_800C3274
    if (!c1cs) {
        // 0x800C3264: c.lt.s      $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
            goto L_800C3274;
    }
    goto skip_0;
    // 0x800C3264: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    skip_0:
    // 0x800C3268: b           L_800C32A4
    // 0x800C326C: add.s       $f20, $f0, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f14.fl;
        goto L_800C32A4;
    // 0x800C326C: add.s       $f20, $f0, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x800C3270: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
L_800C3274:
    // 0x800C3274: nop

    // 0x800C3278: bc1f        L_800C3288
    if (!c1cs) {
        // 0x800C327C: nop
    
            goto L_800C3288;
    }
    // 0x800C327C: nop

    // 0x800C3280: b           L_800C32A4
    // 0x800C3284: sub.s       $f20, $f0, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f14.fl;
        goto L_800C32A4;
    // 0x800C3284: sub.s       $f20, $f0, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f14.fl;
L_800C3288:
    // 0x800C3288: jal         0x800DC264
    // 0x800C328C: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    func_800DC264(rdram, ctx);
        goto after_1;
    // 0x800C328C: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    after_1:
    // 0x800C3290: add.s       $f12, $f20, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x800C3294: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C3298: jal         0x800F0D50
    // 0x800C329C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800F0D50(rdram, ctx);
        goto after_2;
    // 0x800C329C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800C32A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_800C32A4:
    // 0x800C32A4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800C32A8: jal         0x800C31DC
    // 0x800C32AC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800C31DC(rdram, ctx);
        goto after_3;
    // 0x800C32AC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_3:
    // 0x800C32B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C32B4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800C32B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C32BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C32C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C32C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C32C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C32CC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C32D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C32D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C32D8: beq         $t6, $zero, L_800C32FC
    if (ctx->r14 == 0) {
        // 0x800C32DC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C32FC;
    }
    // 0x800C32DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C32E0: jal         0x800C1414
    // 0x800C32E4: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C32E4: nop

    after_0:
    // 0x800C32E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C32EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C32F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800C32F4: jal         0x800C13A0
    // 0x800C32F8: sb          $t7, 0x60($v0)
    MEM_B(0X60, ctx->r2) = ctx->r15;
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C32F8: sb          $t7, 0x60($v0)
    MEM_B(0X60, ctx->r2) = ctx->r15;
    after_1:
L_800C32FC:
    // 0x800C32FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3304: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C330C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C330C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3314: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3318: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C331C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3320: beq         $t6, $zero, L_800C333C
    if (ctx->r14 == 0) {
        // 0x800C3324: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C333C;
    }
    // 0x800C3324: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3328: jal         0x800C1414
    // 0x800C332C: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C332C: nop

    after_0:
    // 0x800C3330: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3334: jal         0x800C11F8
    // 0x800C3338: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800C11F8(rdram, ctx);
        goto after_1;
    // 0x800C3338: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800C333C:
    // 0x800C333C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3344: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C334C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C334C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3350: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3354: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3358: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C335C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3360: beq         $t6, $zero, L_800C3384
    if (ctx->r14 == 0) {
        // 0x800C3364: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3384;
    }
    // 0x800C3364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3368: jal         0x800C1414
    // 0x800C336C: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C336C: nop

    after_0:
    // 0x800C3370: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3374: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3378: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800C337C: jal         0x800C13A0
    // 0x800C3380: sb          $t7, 0x61($v0)
    MEM_B(0X61, ctx->r2) = ctx->r15;
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C3380: sb          $t7, 0x61($v0)
    MEM_B(0X61, ctx->r2) = ctx->r15;
    after_1:
L_800C3384:
    // 0x800C3384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C338C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C339C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C33A0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C33A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C33A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C33AC: beq         $t6, $zero, L_800C33CC
    if (ctx->r14 == 0) {
        // 0x800C33B0: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800C33CC;
    }
    // 0x800C33B0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C33B4: jal         0x800C1414
    // 0x800C33B8: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C33B8: nop

    after_0:
    // 0x800C33BC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C33C0: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x800C33C4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800C33C8: sw          $t8, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r24;
L_800C33CC:
    // 0x800C33CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C33D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C33D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C33DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C33DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C33E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C33E4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C33E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C33EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C33F0: beq         $t6, $zero, L_800C3408
    if (ctx->r14 == 0) {
        // 0x800C33F4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3408;
    }
    // 0x800C33F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C33F8: jal         0x800C1414
    // 0x800C33FC: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C33FC: nop

    after_0:
    // 0x800C3400: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3404: sb          $t7, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r15;
L_800C3408:
    // 0x800C3408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C340C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3410: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C341C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C3420: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3424: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C342C: beq         $t6, $zero, L_800C34B8
    if (ctx->r14 == 0) {
        // 0x800C3430: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800C34B8;
    }
    // 0x800C3430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C3434: jal         0x800C1414
    // 0x800C3438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C343C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800C3440: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C3444: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3448: beq         $a1, $zero, L_800C346C
    if (ctx->r5 == 0) {
        // 0x800C344C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C346C;
    }
    // 0x800C344C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3450: beq         $a1, $at, L_800C3488
    if (ctx->r5 == ctx->r1) {
        // 0x800C3454: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C3488;
    }
    // 0x800C3454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C345C: beq         $a1, $at, L_800C34A4
    if (ctx->r5 == ctx->r1) {
        // 0x800C3460: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C34A4;
    }
    // 0x800C3460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3464: b           L_800C34BC
    // 0x800C3468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C34BC;
    // 0x800C3468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C346C:
    // 0x800C346C: jal         0x800C13B0
    // 0x800C3470: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_800C13B0(rdram, ctx);
        goto after_1;
    // 0x800C3470: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x800C3474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3478: jal         0x800C13B0
    // 0x800C347C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_800C13B0(rdram, ctx);
        goto after_2;
    // 0x800C347C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x800C3480: b           L_800C34BC
    // 0x800C3484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C34BC;
    // 0x800C3484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C3488:
    // 0x800C3488: jal         0x800C13A0
    // 0x800C348C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_800C13A0(rdram, ctx);
        goto after_3;
    // 0x800C348C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
    // 0x800C3490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3494: jal         0x800C13B0
    // 0x800C3498: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_800C13B0(rdram, ctx);
        goto after_4;
    // 0x800C3498: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_4:
    // 0x800C349C: b           L_800C34BC
    // 0x800C34A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C34BC;
    // 0x800C34A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C34A4:
    // 0x800C34A4: jal         0x800C13A0
    // 0x800C34A8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_800C13A0(rdram, ctx);
        goto after_5;
    // 0x800C34A8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_5:
    // 0x800C34AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C34B0: jal         0x800C13A0
    // 0x800C34B4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_800C13A0(rdram, ctx);
        goto after_6;
    // 0x800C34B4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
L_800C34B8:
    // 0x800C34B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C34BC:
    // 0x800C34BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C34C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C34C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C34CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C34CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C34D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C34D4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C34D8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C34DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C34E0: beq         $t6, $zero, L_800C3518
    if (ctx->r14 == 0) {
        // 0x800C34E4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3518;
    }
    // 0x800C34E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C34E8: jal         0x800C1414
    // 0x800C34EC: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C34EC: nop

    after_0:
    // 0x800C34F0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C34F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C34F8: beq         $t7, $zero, L_800C3510
    if (ctx->r15 == 0) {
        // 0x800C34FC: nop
    
            goto L_800C3510;
    }
    // 0x800C34FC: nop

    // 0x800C3500: jal         0x800C13B0
    // 0x800C3504: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13B0(rdram, ctx);
        goto after_1;
    // 0x800C3504: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_1:
    // 0x800C3508: b           L_800C351C
    // 0x800C350C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C351C;
    // 0x800C350C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C3510:
    // 0x800C3510: jal         0x800C13A0
    // 0x800C3514: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13A0(rdram, ctx);
        goto after_2;
    // 0x800C3514: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_2:
L_800C3518:
    // 0x800C3518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C351C:
    // 0x800C351C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3520: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C352C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3530: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3534: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C353C: beq         $t6, $zero, L_800C3574
    if (ctx->r14 == 0) {
        // 0x800C3540: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3574;
    }
    // 0x800C3540: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3544: jal         0x800C1414
    // 0x800C3548: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3548: nop

    after_0:
    // 0x800C354C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3550: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3554: beq         $t7, $zero, L_800C356C
    if (ctx->r15 == 0) {
        // 0x800C3558: nop
    
            goto L_800C356C;
    }
    // 0x800C3558: nop

    // 0x800C355C: jal         0x800C13A0
    // 0x800C3560: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C3560: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_1:
    // 0x800C3564: b           L_800C3578
    // 0x800C3568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C3578;
    // 0x800C3568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C356C:
    // 0x800C356C: jal         0x800C13B0
    // 0x800C3570: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13B0(rdram, ctx);
        goto after_2;
    // 0x800C3570: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_2:
L_800C3574:
    // 0x800C3574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C3578:
    // 0x800C3578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C357C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3588: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C358C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3590: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C3594: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C3598: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C359C: beq         $t6, $zero, L_800C35D8
    if (ctx->r14 == 0) {
        // 0x800C35A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C35D8;
    }
    // 0x800C35A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C35A4: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    // 0x800C35A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x800C35AC: jal         0x800C1414
    // 0x800C35B0: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C35B0: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800C35B4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C35B8: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C35BC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800C35C0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800C35C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C35C8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800C35CC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x800C35D0: jal         0x800C368C
    // 0x800C35D4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    func_800C368C(rdram, ctx);
        goto after_1;
    // 0x800C35D4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    after_1:
L_800C35D8:
    // 0x800C35D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C35DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C35E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C35E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C35E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C35EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C35F0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C35F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C35F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C35FC: beq         $t6, $zero, L_800C3638
    if (ctx->r14 == 0) {
        // 0x800C3600: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800C3638;
    }
    // 0x800C3600: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C3604: jal         0x800C1414
    // 0x800C3608: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3608: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C360C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800C3610: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3614: jal         0x800EE7F8
    // 0x800C3618: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800C3618: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800C361C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800C3620: jal         0x800C368C
    // 0x800C3624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C368C(rdram, ctx);
        goto after_2;
    // 0x800C3624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C3628: jal         0x800EA05C
    // 0x800C362C: nop

    func_800EA05C(rdram, ctx);
        goto after_3;
    // 0x800C362C: nop

    after_3:
    // 0x800C3630: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3634: sh          $v0, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r2;
L_800C3638:
    // 0x800C3638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C363C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3640: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C364C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C3650: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3654: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C365C: beq         $t6, $zero, L_800C367C
    if (ctx->r14 == 0) {
        // 0x800C3660: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800C367C;
    }
    // 0x800C3660: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C3664: jal         0x800C1414
    // 0x800C3668: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3668: nop

    after_0:
    // 0x800C366C: jal         0x800EA05C
    // 0x800C3670: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x800C3670: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C3674: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3678: sh          $v0, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r2;
L_800C367C:
    // 0x800C367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3684: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C368C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C368C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3694: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3698: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C369C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C36A0: beq         $t6, $zero, L_800C36E4
    if (ctx->r14 == 0) {
        // 0x800C36A4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C36E4;
    }
    // 0x800C36A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C36A8: jal         0x800C1414
    // 0x800C36AC: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C36AC: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C36B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C36B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C36B8: beq         $t7, $zero, L_800C36D0
    if (ctx->r15 == 0) {
        // 0x800C36BC: nop
    
            goto L_800C36D0;
    }
    // 0x800C36BC: nop

    // 0x800C36C0: jal         0x800C13A0
    // 0x800C36C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13A0(rdram, ctx);
        goto after_1;
    // 0x800C36C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800C36C8: b           L_800C36DC
    // 0x800C36CC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
        goto L_800C36DC;
    // 0x800C36CC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
L_800C36D0:
    // 0x800C36D0: jal         0x800C13B0
    // 0x800C36D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13B0(rdram, ctx);
        goto after_2;
    // 0x800C36D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x800C36D8: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
L_800C36DC:
    // 0x800C36DC: jal         0x800C33DC
    // 0x800C36E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800C33DC(rdram, ctx);
        goto after_3;
    // 0x800C36E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
L_800C36E4:
    // 0x800C36E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C36E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C36EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C36F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C36F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C36F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C36FC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3700: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3708: beq         $t6, $zero, L_800C3720
    if (ctx->r14 == 0) {
        // 0x800C370C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3720;
    }
    // 0x800C370C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3710: jal         0x800C1414
    // 0x800C3714: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3714: nop

    after_0:
    // 0x800C3718: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C371C: sb          $t7, 0x62($v0)
    MEM_B(0X62, ctx->r2) = ctx->r15;
L_800C3720:
    // 0x800C3720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3728: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3734: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3738: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C373C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3748: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C374C: beq         $t6, $zero, L_800C3788
    if (ctx->r14 == 0) {
        // 0x800C3750: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_800C3788;
    }
    // 0x800C3750: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C3754: jal         0x800C1414
    // 0x800C3758: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3758: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C375C: lhu         $t7, 0x7A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X7A);
    // 0x800C3760: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800C3764: andi        $t8, $t7, 0xFC3F
    ctx->r24 = ctx->r15 & 0XFC3F;
    // 0x800C3768: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x800C376C: sh          $t9, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r25;
    // 0x800C3770: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C3774: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x800C3778: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C377C: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x800C3780: jal         0x800C31DC
    // 0x800C3784: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800C31DC(rdram, ctx);
        goto after_1;
    // 0x800C3784: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800C3788:
    // 0x800C3788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C378C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3790: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C379C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C37A0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C37A4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C37A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C37AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C37B0: beq         $t6, $zero, L_800C37D0
    if (ctx->r14 == 0) {
        // 0x800C37B4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800C37D0;
    }
    // 0x800C37B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C37B8: jal         0x800C1414
    // 0x800C37BC: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C37BC: nop

    after_0:
    // 0x800C37C0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C37C4: swc1        $f4, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f4.u32l;
    // 0x800C37C8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C37CC: swc1        $f6, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f6.u32l;
L_800C37D0:
    // 0x800C37D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C37D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C37D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C37E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C37E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C37E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C37E8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C37EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C37F0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C37F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C37F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C37FC: beq         $t6, $zero, L_800C3858
    if (ctx->r14 == 0) {
        // 0x800C3800: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_800C3858;
    }
    // 0x800C3800: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C3804: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    // 0x800C3808: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x800C380C: jal         0x800C1414
    // 0x800C3810: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3810: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800C3814: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C3818: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C381C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C3820: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C3824: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x800C3828: lhu         $t7, 0x7A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X7A);
    // 0x800C382C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800C3830: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C3834: andi        $t8, $t7, 0xFC3F
    ctx->r24 = ctx->r15 & 0XFC3F;
    // 0x800C3838: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x800C383C: sh          $t9, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r25;
    // 0x800C3840: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C3844: swc1        $f12, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f12.u32l;
    // 0x800C3848: swc1        $f14, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f14.u32l;
    // 0x800C384C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800C3850: jal         0x800C31DC
    // 0x800C3854: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
    func_800C31DC(rdram, ctx);
        goto after_1;
    // 0x800C3854: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
    after_1:
L_800C3858:
    // 0x800C3858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C385C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3860: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C386C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3870: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3874: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800C3878: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C387C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3884: beq         $t6, $zero, L_800C38D4
    if (ctx->r14 == 0) {
        // 0x800C3888: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800C38D4;
    }
    // 0x800C3888: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C388C: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    // 0x800C3890: jal         0x800C1414
    // 0x800C3894: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3894: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800C3898: lhu         $t7, 0x7A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X7A);
    // 0x800C389C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C38A0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800C38A4: andi        $t8, $t7, 0xFC3F
    ctx->r24 = ctx->r15 & 0XFC3F;
    // 0x800C38A8: ori         $t9, $t8, 0xC0
    ctx->r25 = ctx->r24 | 0XC0;
    // 0x800C38AC: sh          $t9, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r25;
    // 0x800C38B0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C38B4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C38B8: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x800C38BC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C38C0: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x800C38C4: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x800C38C8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C38CC: jal         0x800C31DC
    // 0x800C38D0: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    func_800C31DC(rdram, ctx);
        goto after_1;
    // 0x800C38D0: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    after_1:
L_800C38D4:
    // 0x800C38D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C38D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C38DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C38E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C38E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C38E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C38EC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C38F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C38F4: bne         $t6, $zero, L_800C3904
    if (ctx->r14 != 0) {
        // 0x800C38F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C3904;
    }
    // 0x800C38F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C38FC: b           L_800C3910
    // 0x800C3900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C3910;
    // 0x800C3900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C3904:
    // 0x800C3904: jal         0x800C1414
    // 0x800C3908: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3908: nop

    after_0:
    // 0x800C390C: lh          $v0, 0x58($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X58);
L_800C3910:
    // 0x800C3910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3918: jr          $ra
    // 0x800C391C: nop

    return;
    // 0x800C391C: nop

;}
RECOMP_FUNC void func_800C3920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3928: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C392C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3930: bne         $t6, $zero, L_800C3940
    if (ctx->r14 != 0) {
        // 0x800C3934: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C3940;
    }
    // 0x800C3934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3938: b           L_800C394C
    // 0x800C393C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C394C;
    // 0x800C393C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C3940:
    // 0x800C3940: jal         0x800C1414
    // 0x800C3944: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3944: nop

    after_0:
    // 0x800C3948: lh          $v0, 0x5A($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5A);
L_800C394C:
    // 0x800C394C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3954: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C395C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C395C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3964: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3968: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C396C: bne         $t6, $zero, L_800C3984
    if (ctx->r14 != 0) {
        // 0x800C3970: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C3984;
    }
    // 0x800C3970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3974: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C3978: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800C397C: b           L_800C3994
    // 0x800C3980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C3994;
    // 0x800C3980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C3984:
    // 0x800C3984: jal         0x800C1414
    // 0x800C3988: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3988: nop

    after_0:
    // 0x800C398C: lwc1        $f0, 0x6C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x800C3990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C3994:
    // 0x800C3994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3998: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C39A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C39A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C39A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C39A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C39AC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C39B0: jal         0x800C1414
    // 0x800C39B4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C39B4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800C39B8: lhu         $v0, 0x7A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7A);
    // 0x800C39BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C39C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C39C4: srl         $t7, $v0, 13
    ctx->r15 = S32(U32(ctx->r2) >> 13);
    // 0x800C39C8: jr          $ra
    // 0x800C39CC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x800C39CC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void func_800C39D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C39D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C39D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C39D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C39DC: jal         0x800C13C4
    // 0x800C39E0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_800C13C4(rdram, ctx);
        goto after_0;
    // 0x800C39E0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_0:
    // 0x800C39E4: beq         $v0, $zero, L_800C39F4
    if (ctx->r2 == 0) {
        // 0x800C39E8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800C39F4;
    }
    // 0x800C39E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800C39EC: b           L_800C3A30
    // 0x800C39F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C3A30;
    // 0x800C39F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C39F4:
    // 0x800C39F4: lbu         $t6, 0x63($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X63);
    // 0x800C39F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800C39FC: beql        $t6, $zero, L_800C3A28
    if (ctx->r14 == 0) {
        // 0x800C3A00: lh          $v1, 0x5A($a0)
        ctx->r3 = MEM_H(ctx->r4, 0X5A);
            goto L_800C3A28;
    }
    goto skip_0;
    // 0x800C3A00: lh          $v1, 0x5A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X5A);
    skip_0:
    // 0x800C3A04: jal         0x800C13C4
    // 0x800C3A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800C13C4(rdram, ctx);
        goto after_1;
    // 0x800C3A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800C3A0C: beq         $v0, $zero, L_800C3A24
    if (ctx->r2 == 0) {
        // 0x800C3A10: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800C3A24;
    }
    // 0x800C3A10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800C3A14: jal         0x800C19E4
    // 0x800C3A18: lh          $a1, 0x5A($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X5A);
    func_800C19E4(rdram, ctx);
        goto after_2;
    // 0x800C3A18: lh          $a1, 0x5A($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X5A);
    after_2:
    // 0x800C3A1C: b           L_800C3A28
    // 0x800C3A20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C3A28;
    // 0x800C3A20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C3A24:
    // 0x800C3A24: lh          $v1, 0x5A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X5A);
L_800C3A28:
    // 0x800C3A28: slti        $v0, $v1, 0x65
    ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x800C3A2C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_800C3A30:
    // 0x800C3A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3A38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3A44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3A48: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3A4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3A54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3A58: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C3A5C: beq         $t6, $zero, L_800C3AD0
    if (ctx->r14 == 0) {
        // 0x800C3A60: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_800C3AD0;
    }
    // 0x800C3A60: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C3A64: jal         0x800C1414
    // 0x800C3A68: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3A68: nop

    after_0:
    // 0x800C3A6C: lbu         $t8, 0x7B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7B);
    // 0x800C3A70: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C3A74: ori         $t0, $t8, 0x10
    ctx->r8 = ctx->r24 | 0X10;
    // 0x800C3A78: andi        $t1, $t0, 0xFD
    ctx->r9 = ctx->r8 & 0XFD;
    // 0x800C3A7C: sb          $t0, 0x7B($v0)
    MEM_B(0X7B, ctx->r2) = ctx->r8;
    // 0x800C3A80: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x800C3A84: sb          $t2, 0x7B($v0)
    MEM_B(0X7B, ctx->r2) = ctx->r10;
    // 0x800C3A88: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C3A8C: lw          $t3, 0x78($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X78);
    // 0x800C3A90: ori         $t8, $t2, 0x8
    ctx->r24 = ctx->r10 | 0X8;
    // 0x800C3A94: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x800C3A98: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C3A9C: sll         $t5, $t3, 28
    ctx->r13 = S32(ctx->r11 << 28);
    // 0x800C3AA0: swc1        $f6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f6.u32l;
    // 0x800C3AA4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C3AA8: swc1        $f10, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f10.u32l;
    // 0x800C3AAC: bltz        $t5, L_800C3AD0
    if (SIGNED(ctx->r13) < 0) {
        // 0x800C3AB0: swc1        $f8, 0x48($v0)
        MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
            goto L_800C3AD0;
    }
    // 0x800C3AB0: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
    // 0x800C3AB4: lh          $v1, 0x5A($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X5A);
    // 0x800C3AB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C3ABC: sb          $t8, 0x7B($v0)
    MEM_B(0X7B, ctx->r2) = ctx->r24;
    // 0x800C3AC0: sh          $zero, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = 0;
    // 0x800C3AC4: sh          $v1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r3;
    // 0x800C3AC8: sh          $v1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r3;
    // 0x800C3ACC: swc1        $f16, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f16.u32l;
L_800C3AD0:
    // 0x800C3AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3AD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3AE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3AE8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3AEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C3AF0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3AF4: beq         $t6, $zero, L_800C3B7C
    if (ctx->r14 == 0) {
        // 0x800C3AF8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C3B7C;
    }
    // 0x800C3AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3AFC: jal         0x800C1414
    // 0x800C3B00: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3B00: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800C3B04: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x800C3B08: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C3B0C: sll         $t9, $t7, 28
    ctx->r25 = S32(ctx->r15 << 28);
    // 0x800C3B10: bgezl       $t9, L_800C3B5C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800C3B14: lh          $t6, 0x5A($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X5A);
            goto L_800C3B5C;
    }
    goto skip_0;
    // 0x800C3B14: lh          $t6, 0x5A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X5A);
    skip_0:
    // 0x800C3B18: lh          $t0, 0x4C($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4C);
    // 0x800C3B1C: lh          $t3, 0x4E($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4E);
    // 0x800C3B20: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800C3B24: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800C3B28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C3B2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C3B30: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800C3B34: nop

    // 0x800C3B38: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800C3B3C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800C3B40: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800C3B44: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x800C3B48: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800C3B4C: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    // 0x800C3B50: b           L_800C3B7C
    // 0x800C3B54: sh          $t5, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r13;
        goto L_800C3B7C;
    // 0x800C3B54: sh          $t5, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r13;
    // 0x800C3B58: lh          $t6, 0x5A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X5A);
L_800C3B5C:
    // 0x800C3B5C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800C3B60: nop

    // 0x800C3B64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C3B68: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800C3B6C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800C3B70: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800C3B74: nop

    // 0x800C3B78: sh          $t8, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r24;
L_800C3B7C:
    // 0x800C3B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3B84: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C3B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C3B94: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3B98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3BA0: beq         $t6, $zero, L_800C3BCC
    if (ctx->r14 == 0) {
        // 0x800C3BA4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C3BCC;
    }
    // 0x800C3BA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C3BA8: jal         0x800C1414
    // 0x800C3BAC: nop

    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3BAC: nop

    after_0:
    // 0x800C3BB0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3BB4: lbu         $t1, 0x7B($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X7B);
    // 0x800C3BB8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800C3BBC: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x800C3BC0: andi        $t2, $t1, 0xFFFD
    ctx->r10 = ctx->r9 & 0XFFFD;
    // 0x800C3BC4: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x800C3BC8: sb          $t3, 0x7B($v0)
    MEM_B(0X7B, ctx->r2) = ctx->r11;
L_800C3BCC:
    // 0x800C3BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C3BD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3BD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3BDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3BE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800C3BE4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3BE8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3BEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3BF0: beq         $t6, $zero, L_800C3CD4
    if (ctx->r14 == 0) {
        // 0x800C3BF4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800C3CD4;
    }
    // 0x800C3BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C3BF8: jal         0x800C1414
    // 0x800C3BFC: sb          $t6, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r14;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3BFC: sb          $t6, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C3C00: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x800C3C04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C3C08: sll         $t9, $t7, 29
    ctx->r25 = S32(ctx->r15 << 29);
    // 0x800C3C0C: bgez        $t9, L_800C3C1C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800C3C10: nop
    
            goto L_800C3C1C;
    }
    // 0x800C3C10: nop

    // 0x800C3C14: jal         0x800FEC60
    // 0x800C3C18: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800FEC60(rdram, ctx);
        goto after_1;
    // 0x800C3C18: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
L_800C3C1C:
    // 0x800C3C1C: jal         0x800C39D0
    // 0x800C3C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C39D0(rdram, ctx);
        goto after_2;
    // 0x800C3C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800C3C24: bnel        $v0, $zero, L_800C3C40
    if (ctx->r2 != 0) {
        // 0x800C3C28: lhu         $t0, 0x7A($s0)
        ctx->r8 = MEM_HU(ctx->r16, 0X7A);
            goto L_800C3C40;
    }
    goto skip_0;
    // 0x800C3C28: lhu         $t0, 0x7A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X7A);
    skip_0:
    // 0x800C3C2C: jal         0x800C42E0
    // 0x800C3C30: lh          $a0, 0x58($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X58);
    func_800C42E0(rdram, ctx);
        goto after_3;
    // 0x800C3C30: lh          $a0, 0x58($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X58);
    after_3:
    // 0x800C3C34: beql        $v0, $zero, L_800C3CD8
    if (ctx->r2 == 0) {
        // 0x800C3C38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C3CD8;
    }
    goto skip_1;
    // 0x800C3C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800C3C3C: lhu         $t0, 0x7A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X7A);
L_800C3C40:
    // 0x800C3C40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C3C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3C48: srl         $t1, $t0, 13
    ctx->r9 = S32(U32(ctx->r8) >> 13);
    // 0x800C3C4C: bnel        $t1, $at, L_800C3C80
    if (ctx->r9 != ctx->r1) {
        // 0x800C3C50: lw          $t5, 0x78($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X78);
            goto L_800C3C80;
    }
    goto skip_2;
    // 0x800C3C50: lw          $t5, 0x78($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X78);
    skip_2:
    // 0x800C3C54: jal         0x800C13A0
    // 0x800C3C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C13A0(rdram, ctx);
        goto after_4;
    // 0x800C3C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x800C3C5C: lw          $t2, 0x78($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X78);
    // 0x800C3C60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3C64: sll         $t3, $t2, 19
    ctx->r11 = S32(ctx->r10 << 19);
    // 0x800C3C68: srl         $t4, $t3, 29
    ctx->r12 = S32(U32(ctx->r11) >> 29);
    // 0x800C3C6C: bne         $t4, $at, L_800C3C9C
    if (ctx->r12 != ctx->r1) {
        // 0x800C3C70: nop
    
            goto L_800C3C9C;
    }
    // 0x800C3C70: nop

    // 0x800C3C74: b           L_800C3CD8
    // 0x800C3C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C3CD8;
    // 0x800C3C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3C7C: lw          $t5, 0x78($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X78);
L_800C3C80:
    // 0x800C3C80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3C84: sll         $t6, $t5, 19
    ctx->r14 = S32(ctx->r13 << 19);
    // 0x800C3C88: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x800C3C8C: bne         $t7, $at, L_800C3C9C
    if (ctx->r15 != ctx->r1) {
        // 0x800C3C90: nop
    
            goto L_800C3C9C;
    }
    // 0x800C3C90: nop

    // 0x800C3C94: jal         0x800C3CE8
    // 0x800C3C98: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    func_800C3CE8(rdram, ctx);
        goto after_5;
    // 0x800C3C98: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    after_5:
L_800C3C9C:
    // 0x800C3C9C: jal         0x800C15BC
    // 0x800C3CA0: nop

    func_800C15BC(rdram, ctx);
        goto after_6;
    // 0x800C3CA0: nop

    after_6:
    // 0x800C3CA4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800C3CA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C3CAC: jal         0x8002EC20
    // 0x800C3CB0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_7;
    // 0x800C3CB0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_7:
    // 0x800C3CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C3CB8: jal         0x800C16F8
    // 0x800C3CBC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800C16F8(rdram, ctx);
        goto after_8;
    // 0x800C3CBC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_8:
    // 0x800C3CC0: jal         0x800C1D80
    // 0x800C3CC4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    func_800C1D80(rdram, ctx);
        goto after_9;
    // 0x800C3CC4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    after_9:
    // 0x800C3CC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C3CCC: jal         0x8002EC20
    // 0x800C3CD0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_10;
    // 0x800C3CD0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_10:
L_800C3CD4:
    // 0x800C3CD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C3CD8:
    // 0x800C3CD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C3CDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C3CE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3CE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3CEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C3CF0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3CF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3CF8: beq         $t6, $zero, L_800C3D68
    if (ctx->r14 == 0) {
        // 0x800C3CFC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C3D68;
    }
    // 0x800C3CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3D00: jal         0x800C1414
    // 0x800C3D04: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3D04: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C3D08: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x800C3D0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3D10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3D14: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x800C3D18: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800C3D1C: bnel        $t9, $at, L_800C3D6C
    if (ctx->r25 != ctx->r1) {
        // 0x800C3D20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C3D6C;
    }
    goto skip_0;
    // 0x800C3D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C3D24: jal         0x800C1860
    // 0x800C3D28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800C1860(rdram, ctx);
        goto after_1;
    // 0x800C3D28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C3D2C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3D30: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800C3D34: lw          $t0, 0x78($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X78);
    // 0x800C3D38: sll         $t2, $t0, 29
    ctx->r10 = S32(ctx->r8 << 29);
    // 0x800C3D3C: bgezl       $t2, L_800C3D54
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800C3D40: lw          $v0, 0x64($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X64);
            goto L_800C3D54;
    }
    goto skip_1;
    // 0x800C3D40: lw          $v0, 0x64($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X64);
    skip_1:
    // 0x800C3D44: jal         0x800FECB8
    // 0x800C3D48: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800FECB8(rdram, ctx);
        goto after_2;
    // 0x800C3D48: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_2:
    // 0x800C3D4C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3D50: lw          $v0, 0x64($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X64);
L_800C3D54:
    // 0x800C3D54: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800C3D58: beql        $v0, $zero, L_800C3D6C
    if (ctx->r2 == 0) {
        // 0x800C3D5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C3D6C;
    }
    goto skip_2;
    // 0x800C3D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800C3D60: jalr        $v0
    // 0x800C3D64: lw          $a1, 0x68($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X68);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800C3D64: lw          $a1, 0x68($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X68);
    after_3:
L_800C3D68:
    // 0x800C3D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C3D6C:
    // 0x800C3D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3D70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3D7C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C3D80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C3D84: sltu        $v1, $zero, $t6
    ctx->r3 = 0 < ctx->r14 ? 1 : 0;
    // 0x800C3D88: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C3D8C: bne         $v1, $zero, L_800C3D9C
    if (ctx->r3 != 0) {
        // 0x800C3D90: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C3D9C;
    }
    // 0x800C3D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C3D94: b           L_800C3DF0
    // 0x800C3D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C3DF0;
    // 0x800C3D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C3D9C:
    // 0x800C3D9C: jal         0x800C1414
    // 0x800C3DA0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C3DA0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x800C3DA4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800C3DA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C3DAC: beq         $v1, $zero, L_800C3DF0
    if (ctx->r3 == 0) {
        // 0x800C3DB0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800C3DF0;
    }
    // 0x800C3DB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800C3DB4: lw          $v0, 0x78($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X78);
    // 0x800C3DB8: sll         $t7, $v0, 19
    ctx->r15 = S32(ctx->r2 << 19);
    // 0x800C3DBC: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x800C3DC0: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x800C3DC4: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x800C3DC8: beql        $v0, $zero, L_800C3DF4
    if (ctx->r2 == 0) {
        // 0x800C3DCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C3DF4;
    }
    goto skip_0;
    // 0x800C3DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C3DD0: lbu         $v1, 0x79($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X79);
    // 0x800C3DD4: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x800C3DD8: beql        $v0, $zero, L_800C3DF4
    if (ctx->r2 == 0) {
        // 0x800C3DDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C3DF4;
    }
    goto skip_1;
    // 0x800C3DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800C3DE0: jal         0x800C1448
    // 0x800C3DE4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    func_800C1448(rdram, ctx);
        goto after_1;
    // 0x800C3DE4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_1:
    // 0x800C3DE8: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x800C3DEC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_800C3DF0:
    // 0x800C3DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C3DF4:
    // 0x800C3DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3DF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3E00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3E04: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C3E08: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800C3E0C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800C3E10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C3E14: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C3E18: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800C3E1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C3E20: addiu       $s1, $s1, -0x73F0
    ctx->r17 = ADD32(ctx->r17, -0X73F0);
    // 0x800C3E24: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800C3E28: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
L_800C3E2C:
    // 0x800C3E2C: lbu         $t6, 0x78($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X78);
    // 0x800C3E30: beql        $t6, $zero, L_800C3E60
    if (ctx->r14 == 0) {
        // 0x800C3E34: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800C3E60;
    }
    goto skip_0;
    // 0x800C3E34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x800C3E38: jal         0x800C3D78
    // 0x800C3E3C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3D78(rdram, ctx);
        goto after_0;
    // 0x800C3E3C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x800C3E40: beql        $v0, $zero, L_800C3E60
    if (ctx->r2 == 0) {
        // 0x800C3E44: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800C3E60;
    }
    goto skip_1;
    // 0x800C3E44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800C3E48: lh          $t7, 0x58($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X58);
    // 0x800C3E4C: bnel        $s2, $t7, L_800C3E60
    if (ctx->r18 != ctx->r15) {
        // 0x800C3E50: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800C3E60;
    }
    goto skip_2;
    // 0x800C3E50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x800C3E54: b           L_800C3E6C
    // 0x800C3E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C3E6C;
    // 0x800C3E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C3E5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800C3E60:
    // 0x800C3E60: bne         $s0, $s3, L_800C3E2C
    if (ctx->r16 != ctx->r19) {
        // 0x800C3E64: addiu       $s1, $s1, 0x80
        ctx->r17 = ADD32(ctx->r17, 0X80);
            goto L_800C3E2C;
    }
    // 0x800C3E64: addiu       $s1, $s1, 0x80
    ctx->r17 = ADD32(ctx->r17, 0X80);
    // 0x800C3E68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C3E6C:
    // 0x800C3E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C3E70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C3E74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C3E78: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3E7C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800C3E80: jr          $ra
    // 0x800C3E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C3E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C3E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3E88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3E8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3E90: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C3E94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C3E98: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800C3E9C: addiu       $a2, $zero, 0x55F0
    ctx->r6 = ADD32(0, 0X55F0);
    // 0x800C3EA0: jal         0x800C2840
    // 0x800C3EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C3EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C3EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3EB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3EC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800C3EC4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800C3EC8: addiu       $a2, $zero, 0x55F0
    ctx->r6 = ADD32(0, 0X55F0);
    // 0x800C3ECC: jal         0x800C2840
    // 0x800C3ED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C3ED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C3ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3ED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3EDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3EEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C3EF0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C3EF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C3EF8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800C3EFC: jal         0x800C2840
    // 0x800C3F00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C3F00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C3F04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3F08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3F0C: jr          $ra
    // 0x800C3F10: nop

    return;
    // 0x800C3F10: nop

;}
RECOMP_FUNC void func_800C3F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3F14: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C3F18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3F1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3F20: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C3F24: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C3F28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C3F2C: addiu       $a2, $zero, 0x55F0
    ctx->r6 = ADD32(0, 0X55F0);
    // 0x800C3F30: jal         0x800C2840
    // 0x800C3F34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C3F34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C3F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3F3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3F40: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3F48: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800C3F4C: srl         $t7, $t6, 21
    ctx->r15 = S32(U32(ctx->r14) >> 21);
    // 0x800C3F50: andi        $t8, $t7, 0x7FF
    ctx->r24 = ctx->r15 & 0X7FF;
    // 0x800C3F54: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800C3F58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3F5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C3F60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3F64: andi        $a0, $a0, 0x7FF
    ctx->r4 = ctx->r4 & 0X7FF;
    // 0x800C3F68: bgez        $t8, L_800C3F80
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800C3F6C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800C3F80;
    }
    // 0x800C3F6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C3F70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C3F74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C3F78: nop

    // 0x800C3F7C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800C3F80:
    // 0x800C3F80: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x800C3F84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C3F88: srl         $a2, $t6, 6
    ctx->r6 = S32(U32(ctx->r14) >> 6);
    // 0x800C3F8C: andi        $t9, $a2, 0x7FE0
    ctx->r25 = ctx->r6 & 0X7FE0;
    // 0x800C3F90: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800C3F94: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800C3F98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800C3F9C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800C3FA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800C3FA4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800C3FA8: jal         0x800C2840
    // 0x800C3FAC: nop

    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C3FAC: nop

    after_0:
    // 0x800C3FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3FB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3FC0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C3FC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3FC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3FCC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C3FD0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C3FD4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C3FD8: jal         0x800C2840
    // 0x800C3FDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C3FDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C3FE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3FE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C3FE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C3FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3FF0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C3FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C3FF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3FFC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C4000: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800C4004: jal         0x800C2840
    // 0x800C4008: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C2840(rdram, ctx);
        goto after_0;
    // 0x800C4008: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C400C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C4014: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C401C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C401C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C4020: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C4024: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x800C4028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C402C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C4030: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C4034: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800C4038: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800C403C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800C4040: jal         0x800C1070
    // 0x800C4044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C1070(rdram, ctx);
        goto after_0;
    // 0x800C4044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800C4048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C404C: jal         0x800EEAD4
    // 0x800C4050: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800EEAD4(rdram, ctx);
        goto after_1;
    // 0x800C4050: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x800C4054: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C4058: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800C405C: nop

    // 0x800C4060: bc1tl       L_800C40F4
    if (c1cs) {
        // 0x800C4064: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C40F4;
    }
    goto skip_0;
    // 0x800C4064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800C4068: jal         0x800C2E04
    // 0x800C406C: nop

    func_800C2E04(rdram, ctx);
        goto after_2;
    // 0x800C406C: nop

    after_2:
    // 0x800C4070: beq         $v0, $zero, L_800C40F0
    if (ctx->r2 == 0) {
        // 0x800C4074: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_800C40F0;
    }
    // 0x800C4074: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800C4078: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C407C: jal         0x800C3418
    // 0x800C4080: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_800C3418(rdram, ctx);
        goto after_3;
    // 0x800C4080: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_3:
    // 0x800C4084: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C4088: jal         0x800C301C
    // 0x800C408C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800C301C(rdram, ctx);
        goto after_4;
    // 0x800C408C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x800C4090: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C4094: jal         0x800C3058
    // 0x800C4098: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800C3058(rdram, ctx);
        goto after_5;
    // 0x800C4098: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_5:
    // 0x800C409C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C40A0: jal         0x800C31DC
    // 0x800C40A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800C31DC(rdram, ctx);
        goto after_6;
    // 0x800C40A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x800C40A8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C40AC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800C40B0: jal         0x800C3584
    // 0x800C40B4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_800C3584(rdram, ctx);
        goto after_7;
    // 0x800C40B4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_7:
    // 0x800C40B8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C40BC: jal         0x800C35E8
    // 0x800C40C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800C35E8(rdram, ctx);
        goto after_8;
    // 0x800C40C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_8:
    // 0x800C40C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C40C8: jal         0x800C330C
    // 0x800C40CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C330C(rdram, ctx);
        goto after_9;
    // 0x800C40CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x800C40D0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C40D4: jal         0x800C33DC
    // 0x800C40D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C33DC(rdram, ctx);
        goto after_10;
    // 0x800C40D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800C40DC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C40E0: jal         0x800C36F4
    // 0x800C40E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C36F4(rdram, ctx);
        goto after_11;
    // 0x800C40E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800C40E8: jal         0x800C3BDC
    // 0x800C40EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_12;
    // 0x800C40EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_12:
L_800C40F0:
    // 0x800C40F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C40F4:
    // 0x800C40F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C40F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C40FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4104: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C4108: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C410C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C4110: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C4114: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C4118: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C411C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C4120: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800C4124: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C4128: jal         0x800C401C
    // 0x800C412C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800C401C(rdram, ctx);
        goto after_0;
    // 0x800C412C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C4130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C4138: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4140: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800C4144: srl         $t7, $t6, 21
    ctx->r15 = S32(U32(ctx->r14) >> 21);
    // 0x800C4148: andi        $t8, $t7, 0x7FF
    ctx->r24 = ctx->r15 & 0X7FF;
    // 0x800C414C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800C4150: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C4154: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800C4158: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C415C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800C4160: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800C4164: andi        $a0, $a0, 0x7FF
    ctx->r4 = ctx->r4 & 0X7FF;
    // 0x800C4168: bgez        $t8, L_800C4180
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800C416C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800C4180;
    }
    // 0x800C416C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4170: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C4174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C4178: nop

    // 0x800C417C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800C4180:
    // 0x800C4180: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x800C4184: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C4188: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800C418C: srl         $a2, $t6, 6
    ctx->r6 = S32(U32(ctx->r14) >> 6);
    // 0x800C4190: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800C4194: srl         $t2, $t0, 16
    ctx->r10 = S32(U32(ctx->r8) >> 16);
    // 0x800C4198: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x800C419C: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x800C41A0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800C41A4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800C41A8: andi        $t9, $a2, 0x7FE0
    ctx->r25 = ctx->r6 & 0X7FE0;
    // 0x800C41AC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800C41B0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C41B4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C41B8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800C41BC: bgez        $t1, L_800C41D0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800C41C0: lui         $at, 0x4F80
        ctx->r1 = S32(0X4F80 << 16);
            goto L_800C41D0;
    }
    // 0x800C41C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C41C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C41C8: nop

    // 0x800C41CC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_800C41D0:
    // 0x800C41D0: bgez        $t3, L_800C41E8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800C41D4: swc1        $f4, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
            goto L_800C41E8;
    }
    // 0x800C41D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C41D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C41DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C41E0: nop

    // 0x800C41E4: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_800C41E8:
    // 0x800C41E8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800C41EC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800C41F0: jal         0x800C401C
    // 0x800C41F4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800C401C(rdram, ctx);
        goto after_0;
    // 0x800C41F4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x800C41F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C41FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C4200: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C420C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C4210: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C4214: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C4218: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C421C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C4220: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C4224: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800C4228: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C422C: jal         0x800C401C
    // 0x800C4230: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800C401C(rdram, ctx);
        goto after_0;
    // 0x800C4230: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C4234: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C423C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4244: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C4248: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C424C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C4250: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C4254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C4258: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C425C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C4260: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C4264: jal         0x800C401C
    // 0x800C4268: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800C401C(rdram, ctx);
        goto after_0;
    // 0x800C4268: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C426C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C4274: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C427C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C427C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C4280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C4284: jal         0x800C2718
    // 0x800C4288: nop

    func_800C2718(rdram, ctx);
        goto after_0;
    // 0x800C4288: nop

    after_0:
    // 0x800C428C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C4290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C4294: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C429C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C429C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C42A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C42A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C42A8: jal         0x800C2E04
    // 0x800C42AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x800C42AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C42B0: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800C42B4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x800C42B8: jal         0x800C301C
    // 0x800C42BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800C301C(rdram, ctx);
        goto after_1;
    // 0x800C42BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800C42C0: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x800C42C4: jal         0x800C330C
    // 0x800C42C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x800C42C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800C42CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C42D0: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x800C42D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C42D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C42E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C42E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C42E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C42E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C42EC: addiu       $a1, $a2, -0x3E9
    ctx->r5 = ADD32(ctx->r6, -0X3E9);
    // 0x800C42F0: jal         0x800DC548
    // 0x800C42F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DC548(rdram, ctx);
        goto after_0;
    // 0x800C42F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800C42F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C42FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C4300: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4308: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C430C: swc1        $f12, -0x5790($at)
    MEM_W(-0X5790, ctx->r1) = ctx->f12.u32l;
    // 0x800C4310: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C4314: jr          $ra
    // 0x800C4318: swc1        $f14, -0x578C($at)
    MEM_W(-0X578C, ctx->r1) = ctx->f14.u32l;
    return;
    // 0x800C4318: swc1        $f14, -0x578C($at)
    MEM_W(-0X578C, ctx->r1) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800C431C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C431C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C4320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C4324: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C4328: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800C432C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800C4330: jal         0x800C1414
    // 0x800C4334: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800C1414(rdram, ctx);
        goto after_0;
    // 0x800C4334: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C4338: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C433C: sb          $t7, 0x63($v0)
    MEM_B(0X63, ctx->r2) = ctx->r15;
    // 0x800C4340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C4344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C4348: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4350: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C4354: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800C4358: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x800C435C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800C4360: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C4364: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800C4368: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800C436C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800C4370: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800C4374: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800C4378: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800C437C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800C4380: bne         $s2, $zero, L_800C43B0
    if (ctx->r18 != 0) {
        // 0x800C4384: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_800C43B0;
    }
    // 0x800C4384: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800C4388: jal         0x800C2E04
    // 0x800C438C: nop

    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x800C438C: nop

    after_0:
    // 0x800C4390: bne         $v0, $zero, L_800C43A0
    if (ctx->r2 != 0) {
        // 0x800C4394: andi        $s2, $v0, 0xFF
        ctx->r18 = ctx->r2 & 0XFF;
            goto L_800C43A0;
    }
    // 0x800C4394: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
    // 0x800C4398: b           L_800C4ACC
    // 0x800C439C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C4ACC;
    // 0x800C439C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C43A0:
    // 0x800C43A0: jal         0x800C1414
    // 0x800C43A4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C1414(rdram, ctx);
        goto after_1;
    // 0x800C43A4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_1:
    // 0x800C43A8: b           L_800C43BC
    // 0x800C43AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_800C43BC;
    // 0x800C43AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800C43B0:
    // 0x800C43B0: jal         0x800C1414
    // 0x800C43B4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C1414(rdram, ctx);
        goto after_2;
    // 0x800C43B4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_2:
    // 0x800C43B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800C43BC:
    // 0x800C43BC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C43C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C43C4: beq         $t6, $zero, L_800C43F0
    if (ctx->r14 == 0) {
        // 0x800C43C8: nop
    
            goto L_800C43F0;
    }
    // 0x800C43C8: nop

    // 0x800C43CC: jal         0x800EE7F8
    // 0x800C43D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800C43D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_3:
    // 0x800C43D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C43D8: jal         0x800C13A0
    // 0x800C43DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13A0(rdram, ctx);
        goto after_4;
    // 0x800C43DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x800C43E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C43E4: jal         0x800EA05C
    // 0x800C43E8: sb          $t7, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = ctx->r15;
    func_800EA05C(rdram, ctx);
        goto after_5;
    // 0x800C43E8: sb          $t7, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = ctx->r15;
    after_5:
    // 0x800C43EC: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
L_800C43F0:
    // 0x800C43F0: bnel        $s0, $zero, L_800C4414
    if (ctx->r16 != 0) {
        // 0x800C43F4: lh          $v1, 0x0($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X0);
            goto L_800C4414;
    }
    goto skip_0;
    // 0x800C43F4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    skip_0:
    // 0x800C43F8: beq         $s2, $zero, L_800C4408
    if (ctx->r18 == 0) {
        // 0x800C43FC: nop
    
            goto L_800C4408;
    }
    // 0x800C43FC: nop

    // 0x800C4400: jal         0x800C3BDC
    // 0x800C4404: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_6;
    // 0x800C4404: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_6:
L_800C4408:
    // 0x800C4408: b           L_800C4ACC
    // 0x800C440C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800C4ACC;
    // 0x800C440C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800C4410: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4414:
    // 0x800C4414: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800C4418: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x800C441C: beq         $v1, $zero, L_800C4AB8
    if (ctx->r3 == 0) {
        // 0x800C4420: lui         $s3, 0x8013
        ctx->r19 = S32(0X8013 << 16);
            goto L_800C4AB8;
    }
    // 0x800C4420: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800C4424: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800C4428: addiu       $s3, $s3, -0x5670
    ctx->r19 = ADD32(ctx->r19, -0X5670);
    // 0x800C442C: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
L_800C4430:
    // 0x800C4430: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C4434: sltiu       $at, $t9, 0x24
    ctx->r1 = ctx->r25 < 0X24 ? 1 : 0;
    // 0x800C4438: beq         $at, $zero, L_800C4AA8
    if (ctx->r1 == 0) {
        // 0x800C443C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_800C4AA8;
    }
    // 0x800C443C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C4440: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C4444: addu        $at, $at, $t9
    gpr jr_addend_800C444C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C4448: lw          $t9, 0x5800($at)
    ctx->r25 = ADD32(ctx->r1, 0X5800);
    // 0x800C444C: jr          $t9
    // 0x800C4450: nop

    switch (jr_addend_800C444C >> 2) {
        case 0: goto L_800C4454; break;
        case 1: goto L_800C44A0; break;
        case 2: goto L_800C454C; break;
        case 3: goto L_800C4554; break;
        case 4: goto L_800C4564; break;
        case 5: goto L_800C4584; break;
        case 6: goto L_800C45A0; break;
        case 7: goto L_800C45B0; break;
        case 8: goto L_800C45D0; break;
        case 9: goto L_800C45F4; break;
        case 10: goto L_800C4620; break;
        case 11: goto L_800C4684; break;
        case 12: goto L_800C4700; break;
        case 13: goto L_800C4764; break;
        case 14: goto L_800C47E0; break;
        case 15: goto L_800C47F8; break;
        case 16: goto L_800C4808; break;
        case 17: goto L_800C4810; break;
        case 18: goto L_800C4854; break;
        case 19: goto L_800C4864; break;
        case 20: goto L_800C48A8; break;
        case 21: goto L_800C4908; break;
        case 22: goto L_800C4920; break;
        case 23: goto L_800C4950; break;
        case 24: goto L_800C4964; break;
        case 25: goto L_800C4998; break;
        case 26: goto L_800C49CC; break;
        case 27: goto L_800C49E8; break;
        case 28: goto L_800C4748; break;
        case 29: goto L_800C4984; break;
        case 30: goto L_800C48FC; break;
        case 31: goto L_800C44B0; break;
        case 32: goto L_800C49F8; break;
        case 33: goto L_800C44E4; break;
        case 34: goto L_800C4A0C; break;
        case 35: goto L_800C4518; break;
        default: switch_error(__func__, 0x800C444C, 0x80125800);
    }
    // 0x800C4450: nop

L_800C4454:
    // 0x800C4454: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x800C4458: lh          $t1, 0x2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2);
    // 0x800C445C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4460: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800C4464: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800C4468: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C446C: beq         $t2, $zero, L_800C4498
    if (ctx->r10 == 0) {
        // 0x800C4470: cvt.s.w     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800C4498;
    }
    // 0x800C4470: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C4474: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800C4478: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C447C: sb          $t3, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = ctx->r11;
    // 0x800C4480: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800C4484: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4488: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800C448C: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x800C4490: jal         0x800C13A0
    // 0x800C4494: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    func_800C13A0(rdram, ctx);
        goto after_7;
    // 0x800C4494: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    after_7:
L_800C4498:
    // 0x800C4498: b           L_800C4AA8
    // 0x800C449C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
        goto L_800C4AA8;
    // 0x800C449C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C44A0:
    // 0x800C44A0: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x800C44A4: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x800C44A8: b           L_800C4AA8
    // 0x800C44AC: sb          $t5, 0x63($s1)
    MEM_B(0X63, ctx->r17) = ctx->r13;
        goto L_800C4AA8;
    // 0x800C44AC: sb          $t5, 0x63($s1)
    MEM_B(0X63, ctx->r17) = ctx->r13;
L_800C44B0:
    // 0x800C44B0: andi        $t6, $v1, 0xFF00
    ctx->r14 = ctx->r3 & 0XFF00;
    // 0x800C44B4: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800C44B8: beq         $t7, $zero, L_800C44D4
    if (ctx->r15 == 0) {
        // 0x800C44BC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800C44D4;
    }
    // 0x800C44BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C44C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C44C4: jal         0x800C13B0
    // 0x800C44C8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13B0(rdram, ctx);
        goto after_8;
    // 0x800C44C8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_8:
    // 0x800C44CC: b           L_800C4AAC
    // 0x800C44D0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C44D0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C44D4:
    // 0x800C44D4: jal         0x800C13A0
    // 0x800C44D8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_800C13A0(rdram, ctx);
        goto after_9;
    // 0x800C44D8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_9:
    // 0x800C44DC: b           L_800C4AAC
    // 0x800C44E0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C44E0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C44E4:
    // 0x800C44E4: andi        $t8, $v1, 0xFF00
    ctx->r24 = ctx->r3 & 0XFF00;
    // 0x800C44E8: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x800C44EC: beq         $t9, $zero, L_800C4508
    if (ctx->r25 == 0) {
        // 0x800C44F0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800C4508;
    }
    // 0x800C44F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C44F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C44F8: jal         0x800C13B0
    // 0x800C44FC: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13B0(rdram, ctx);
        goto after_10;
    // 0x800C44FC: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_10:
    // 0x800C4500: b           L_800C4AAC
    // 0x800C4504: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4504: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4508:
    // 0x800C4508: jal         0x800C13A0
    // 0x800C450C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_800C13A0(rdram, ctx);
        goto after_11;
    // 0x800C450C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_11:
    // 0x800C4510: b           L_800C4AAC
    // 0x800C4514: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4514: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4518:
    // 0x800C4518: andi        $t0, $v1, 0xFF00
    ctx->r8 = ctx->r3 & 0XFF00;
    // 0x800C451C: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x800C4520: beq         $t1, $zero, L_800C453C
    if (ctx->r9 == 0) {
        // 0x800C4524: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800C453C;
    }
    // 0x800C4524: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C452C: jal         0x800C13A0
    // 0x800C4530: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_800C13A0(rdram, ctx);
        goto after_12;
    // 0x800C4530: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_12:
    // 0x800C4534: b           L_800C4AAC
    // 0x800C4538: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4538: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C453C:
    // 0x800C453C: jal         0x800C13B0
    // 0x800C4540: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_800C13B0(rdram, ctx);
        goto after_13;
    // 0x800C4540: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_13:
    // 0x800C4544: b           L_800C4AAC
    // 0x800C4548: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4548: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C454C:
    // 0x800C454C: b           L_800C4ACC
    // 0x800C4550: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800C4ACC;
    // 0x800C4550: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800C4554:
    // 0x800C4554: jal         0x800C2FDC
    // 0x800C4558: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C2FDC(rdram, ctx);
        goto after_14;
    // 0x800C4558: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_14:
    // 0x800C455C: b           L_800C4ACC
    // 0x800C4560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C4ACC;
    // 0x800C4560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C4564:
    // 0x800C4564: andi        $t2, $v1, 0xFF00
    ctx->r10 = ctx->r3 & 0XFF00;
    // 0x800C4568: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x800C456C: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
    // 0x800C4570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4574: jal         0x800C13A0
    // 0x800C4578: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800C13A0(rdram, ctx);
        goto after_15;
    // 0x800C4578: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_15:
    // 0x800C457C: b           L_800C4AAC
    // 0x800C4580: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4580: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4584:
    // 0x800C4584: andi        $a1, $v1, 0xFF00
    ctx->r5 = ctx->r3 & 0XFF00;
    // 0x800C4588: sra         $t4, $a1, 8
    ctx->r12 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800C458C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800C4590: jal         0x800C11F8
    // 0x800C4594: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800C11F8(rdram, ctx);
        goto after_16;
    // 0x800C4594: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x800C4598: b           L_800C4AAC
    // 0x800C459C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C459C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C45A0:
    // 0x800C45A0: andi        $t5, $v1, 0xFF00
    ctx->r13 = ctx->r3 & 0XFF00;
    // 0x800C45A4: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x800C45A8: b           L_800C4AA8
    // 0x800C45AC: sb          $t6, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r14;
        goto L_800C4AA8;
    // 0x800C45AC: sb          $t6, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r14;
L_800C45B0:
    // 0x800C45B0: andi        $t7, $v1, 0xFF00
    ctx->r15 = ctx->r3 & 0XFF00;
    // 0x800C45B4: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x800C45B8: sb          $t8, 0x61($s1)
    MEM_B(0X61, ctx->r17) = ctx->r24;
    // 0x800C45BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C45C0: jal         0x800C13A0
    // 0x800C45C4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_800C13A0(rdram, ctx);
        goto after_17;
    // 0x800C45C4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_17:
    // 0x800C45C8: b           L_800C4AAC
    // 0x800C45CC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C45CC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C45D0:
    // 0x800C45D0: andi        $t9, $v1, 0xFF00
    ctx->r25 = ctx->r3 & 0XFF00;
    // 0x800C45D4: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x800C45D8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800C45DC: beq         $t1, $zero, L_800C45EC
    if (ctx->r9 == 0) {
        // 0x800C45E0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_800C45EC;
    }
    // 0x800C45E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C45E4: b           L_800C4AA8
    // 0x800C45E8: sb          $t2, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = ctx->r10;
        goto L_800C4AA8;
    // 0x800C45E8: sb          $t2, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = ctx->r10;
L_800C45EC:
    // 0x800C45EC: b           L_800C4AA8
    // 0x800C45F0: sb          $zero, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = 0;
        goto L_800C4AA8;
    // 0x800C45F0: sb          $zero, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = 0;
L_800C45F4:
    // 0x800C45F4: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800C45F8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800C45FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4600: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800C4604: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C4608: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C460C: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4610: jal         0x800C13A0
    // 0x800C4614: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    func_800C13A0(rdram, ctx);
        goto after_18;
    // 0x800C4614: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    after_18:
    // 0x800C4618: b           L_800C4AAC
    // 0x800C461C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C461C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4620:
    // 0x800C4620: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x800C4624: lh          $t5, 0x2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2);
    // 0x800C4628: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    // 0x800C462C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800C4630: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800C4634: lhu         $t7, 0x7A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X7A);
    // 0x800C4638: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C463C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800C4640: andi        $t8, $t7, 0xFC3F
    ctx->r24 = ctx->r15 & 0XFC3F;
    // 0x800C4644: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x800C4648: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800C464C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4650: mul.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C4654: sh          $t9, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r25;
    // 0x800C4658: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C465C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C4660: mul.s       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4664: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    // 0x800C4668: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C466C: swc1        $f2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f2.u32l;
    // 0x800C4670: mul.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C4674: jal         0x800C13A0
    // 0x800C4678: swc1        $f12, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f12.u32l;
    func_800C13A0(rdram, ctx);
        goto after_19;
    // 0x800C4678: swc1        $f12, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f12.u32l;
    after_19:
    // 0x800C467C: b           L_800C4AAC
    // 0x800C4680: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4680: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4684:
    // 0x800C4684: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x800C4688: lh          $t1, 0x2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2);
    // 0x800C468C: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x800C4690: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800C4694: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800C4698: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x800C469C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C46A0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800C46A4: lhu         $t4, 0x7A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X7A);
    // 0x800C46A8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800C46AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C46B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C46B4: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C46B8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800C46BC: andi        $t5, $t4, 0xFC3F
    ctx->r13 = ctx->r12 & 0XFC3F;
    // 0x800C46C0: ori         $t6, $t5, 0xC0
    ctx->r14 = ctx->r13 | 0XC0;
    // 0x800C46C4: sh          $t6, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r14;
    // 0x800C46C8: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C46CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C46D0: swc1        $f0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f0.u32l;
    // 0x800C46D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C46D8: swc1        $f2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f2.u32l;
    // 0x800C46DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C46E0: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C46E4: nop

    // 0x800C46E8: mul.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C46EC: swc1        $f12, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f12.u32l;
    // 0x800C46F0: jal         0x800C13A0
    // 0x800C46F4: swc1        $f14, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f14.u32l;
    func_800C13A0(rdram, ctx);
        goto after_20;
    // 0x800C46F4: swc1        $f14, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f14.u32l;
    after_20:
    // 0x800C46F8: b           L_800C4AAC
    // 0x800C46FC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C46FC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4700:
    // 0x800C4700: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x800C4704: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x800C4708: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800C470C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C4710: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800C4714: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4718: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C471C: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4720: nop

    // 0x800C4724: mul.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C4728: jal         0x800DC264
    // 0x800C472C: nop

    func_800DC264(rdram, ctx);
        goto after_21;
    // 0x800C472C: nop

    after_21:
    // 0x800C4730: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    // 0x800C4734: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4738: jal         0x800C13A0
    // 0x800C473C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C13A0(rdram, ctx);
        goto after_22;
    // 0x800C473C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_22:
    // 0x800C4740: b           L_800C4AAC
    // 0x800C4744: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4744: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4748:
    // 0x800C4748: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800C474C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4750: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C4754: jal         0x800C13A0
    // 0x800C4758: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    func_800C13A0(rdram, ctx);
        goto after_23;
    // 0x800C4758: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    after_23:
    // 0x800C475C: b           L_800C4AAC
    // 0x800C4760: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4760: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4764:
    // 0x800C4764: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x800C4768: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x800C476C: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x800C4770: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800C4774: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800C4778: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C477C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4780: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800C4784: lhu         $t2, 0x7A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X7A);
    // 0x800C4788: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800C478C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4790: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4794: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4798: andi        $t3, $t2, 0xFC3F
    ctx->r11 = ctx->r10 & 0XFC3F;
    // 0x800C479C: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x800C47A0: sh          $t4, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r12;
    // 0x800C47A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C47A8: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C47AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C47B0: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x800C47B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C47B8: swc1        $f2, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f2.u32l;
    // 0x800C47BC: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800C47C0: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C47C4: nop

    // 0x800C47C8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C47CC: swc1        $f12, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f12.u32l;
    // 0x800C47D0: jal         0x800C13A0
    // 0x800C47D4: swc1        $f4, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f4.u32l;
    func_800C13A0(rdram, ctx);
        goto after_24;
    // 0x800C47D4: swc1        $f4, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f4.u32l;
    after_24:
    // 0x800C47D8: b           L_800C4AAC
    // 0x800C47DC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C47DC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C47E0:
    // 0x800C47E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C47E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C47E8: jal         0x800C11F8
    // 0x800C47EC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    func_800C11F8(rdram, ctx);
        goto after_25;
    // 0x800C47EC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_25:
    // 0x800C47F0: b           L_800C4AA8
    // 0x800C47F4: sb          $zero, 0x62($s1)
    MEM_B(0X62, ctx->r17) = 0;
        goto L_800C4AA8;
    // 0x800C47F4: sb          $zero, 0x62($s1)
    MEM_B(0X62, ctx->r17) = 0;
L_800C47F8:
    // 0x800C47F8: jal         0x800C2E40
    // 0x800C47FC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C2E40(rdram, ctx);
        goto after_26;
    // 0x800C47FC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_26:
    // 0x800C4800: b           L_800C4AAC
    // 0x800C4804: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4804: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4808:
    // 0x800C4808: b           L_800C4AA8
    // 0x800C480C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
        goto L_800C4AA8;
    // 0x800C480C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_800C4810:
    // 0x800C4810: lw          $t5, 0x78($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X78);
    // 0x800C4814: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C4818: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800C481C: sll         $t6, $t5, 19
    ctx->r14 = S32(ctx->r13 << 19);
    // 0x800C4820: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x800C4824: bnel        $t7, $at, L_800C4AAC
    if (ctx->r15 != ctx->r1) {
        // 0x800C4828: lh          $v1, 0x0($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X0);
            goto L_800C4AAC;
    }
    goto skip_1;
    // 0x800C4828: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    skip_1:
    // 0x800C482C: jal         0x800C1860
    // 0x800C4830: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800C1860(rdram, ctx);
        goto after_27;
    // 0x800C4830: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_27:
    // 0x800C4834: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    // 0x800C4838: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C483C: beql        $v0, $zero, L_800C4AAC
    if (ctx->r2 == 0) {
        // 0x800C4840: lh          $v1, 0x0($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X0);
            goto L_800C4AAC;
    }
    goto skip_2;
    // 0x800C4840: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    skip_2:
    // 0x800C4844: jalr        $v0
    // 0x800C4848: lw          $a1, 0x68($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X68);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_28;
    // 0x800C4848: lw          $a1, 0x68($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X68);
    after_28:
    // 0x800C484C: b           L_800C4AAC
    // 0x800C4850: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4850: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4854:
    // 0x800C4854: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800C4858: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800C485C: b           L_800C4AA8
    // 0x800C4860: sh          $v0, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r2;
        goto L_800C4AA8;
    // 0x800C4860: sh          $v0, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r2;
L_800C4864:
    // 0x800C4864: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4868: andi        $v0, $v1, 0xFF00
    ctx->r2 = ctx->r3 & 0XFF00;
    // 0x800C486C: sra         $t9, $v0, 8
    ctx->r25 = S32(SIGNED(ctx->r2) >> 8);
    // 0x800C4870: beql        $t8, $zero, L_800C4AAC
    if (ctx->r24 == 0) {
        // 0x800C4874: lh          $v1, 0x0($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X0);
            goto L_800C4AAC;
    }
    goto skip_3;
    // 0x800C4874: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    skip_3:
    // 0x800C4878: beq         $t9, $zero, L_800C4894
    if (ctx->r25 == 0) {
        // 0x800C487C: sb          $t9, 0x1B($s1)
        MEM_B(0X1B, ctx->r17) = ctx->r25;
            goto L_800C4894;
    }
    // 0x800C487C: sb          $t9, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = ctx->r25;
    // 0x800C4880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4884: jal         0x800C13A0
    // 0x800C4888: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13A0(rdram, ctx);
        goto after_29;
    // 0x800C4888: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_29:
    // 0x800C488C: b           L_800C4AAC
    // 0x800C4890: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4890: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4894:
    // 0x800C4894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4898: jal         0x800C13B0
    // 0x800C489C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C13B0(rdram, ctx);
        goto after_30;
    // 0x800C489C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_30:
    // 0x800C48A0: b           L_800C4AAC
    // 0x800C48A4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C48A4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C48A8:
    // 0x800C48A8: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x800C48AC: lh          $t1, 0x2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2);
    // 0x800C48B0: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x800C48B4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800C48B8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800C48BC: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800C48C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C48C4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800C48C8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C48CC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C48D0: mul.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800C48D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C48D8: mul.s       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800C48DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800C48E0: mul.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800C48E4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x800C48E8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800C48EC: jal         0x800C3A40
    // 0x800C48F0: nop

    func_800C3A40(rdram, ctx);
        goto after_31;
    // 0x800C48F0: nop

    after_31:
    // 0x800C48F4: b           L_800C4AAC
    // 0x800C48F8: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C48F8: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C48FC:
    // 0x800C48FC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C4900: b           L_800C4AA8
    // 0x800C4904: sb          $t3, 0x1D($s1)
    MEM_B(0X1D, ctx->r17) = ctx->r11;
        goto L_800C4AA8;
    // 0x800C4904: sb          $t3, 0x1D($s1)
    MEM_B(0X1D, ctx->r17) = ctx->r11;
L_800C4908:
    // 0x800C4908: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C490C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800C4910: jal         0x800C3058
    // 0x800C4914: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_800C3058(rdram, ctx);
        goto after_32;
    // 0x800C4914: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_32:
    // 0x800C4918: b           L_800C4AAC
    // 0x800C491C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C491C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4920:
    // 0x800C4920: lh          $t4, 0x4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X4);
    // 0x800C4924: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800C4928: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x800C492C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800C4930: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x800C4934: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C4938: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C493C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800C4940: jal         0x800C316C
    // 0x800C4944: nop

    func_800C316C(rdram, ctx);
        goto after_33;
    // 0x800C4944: nop

    after_33:
    // 0x800C4948: b           L_800C4AAC
    // 0x800C494C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C494C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4950:
    // 0x800C4950: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C4954: jal         0x800C3058
    // 0x800C4958: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    func_800C3058(rdram, ctx);
        goto after_34;
    // 0x800C4958: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    after_34:
    // 0x800C495C: b           L_800C4AAC
    // 0x800C4960: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4960: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4964:
    // 0x800C4964: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x800C4968: jal         0x800DC214
    // 0x800C496C: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    func_800DC214(rdram, ctx);
        goto after_35;
    // 0x800C496C: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    after_35:
    // 0x800C4970: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C4974: jal         0x800C3058
    // 0x800C4978: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800C3058(rdram, ctx);
        goto after_36;
    // 0x800C4978: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_36:
    // 0x800C497C: b           L_800C4AA8
    // 0x800C4980: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
        goto L_800C4AA8;
    // 0x800C4980: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C4984:
    // 0x800C4984: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C4988: jal         0x800C3058
    // 0x800C498C: lh          $a1, 0x4($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X4);
    func_800C3058(rdram, ctx);
        goto after_37;
    // 0x800C498C: lh          $a1, 0x4($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X4);
    after_37:
    // 0x800C4990: b           L_800C4AAC
    // 0x800C4994: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4994: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4998:
    // 0x800C4998: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
    // 0x800C499C: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x800C49A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800C49A4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800C49A8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800C49AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C49B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C49B4: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C49B8: nop

    // 0x800C49BC: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C49C0: swc1        $f0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f0.u32l;
    // 0x800C49C4: b           L_800C4AA8
    // 0x800C49C8: swc1        $f2, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f2.u32l;
        goto L_800C4AA8;
    // 0x800C49C8: swc1        $f2, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f2.u32l;
L_800C49CC:
    // 0x800C49CC: andi        $a1, $v1, 0xFF00
    ctx->r5 = ctx->r3 & 0XFF00;
    // 0x800C49D0: sra         $t7, $a1, 8
    ctx->r15 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800C49D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x800C49D8: jal         0x800C3418
    // 0x800C49DC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C3418(rdram, ctx);
        goto after_38;
    // 0x800C49DC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_38:
    // 0x800C49E0: b           L_800C4AAC
    // 0x800C49E4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C49E4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C49E8:
    // 0x800C49E8: lbu         $t9, 0x7B($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X7B);
    // 0x800C49EC: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x800C49F0: b           L_800C4AA8
    // 0x800C49F4: sb          $t0, 0x7B($s1)
    MEM_B(0X7B, ctx->r17) = ctx->r8;
        goto L_800C4AA8;
    // 0x800C49F4: sb          $t0, 0x7B($s1)
    MEM_B(0X7B, ctx->r17) = ctx->r8;
L_800C49F8:
    // 0x800C49F8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800C49FC: jal         0x800C301C
    // 0x800C4A00: lh          $a1, 0x6($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X6);
    func_800C301C(rdram, ctx);
        goto after_39;
    // 0x800C4A00: lh          $a1, 0x6($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X6);
    after_39:
    // 0x800C4A04: b           L_800C4AAC
    // 0x800C4A08: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_800C4AAC;
    // 0x800C4A08: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4A0C:
    // 0x800C4A0C: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x800C4A10: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x800C4A14: lh          $t3, 0x4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X4);
    // 0x800C4A18: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800C4A1C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800C4A20: lh          $t4, 0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X6);
    // 0x800C4A24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4A28: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800C4A2C: lh          $t5, 0x8($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X8);
    // 0x800C4A30: lh          $t6, 0xA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA);
    // 0x800C4A34: lhu         $t7, 0x7A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X7A);
    // 0x800C4A38: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4A3C: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4A40: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800C4A44: andi        $t8, $t7, 0xFC3F
    ctx->r24 = ctx->r15 & 0XFC3F;
    // 0x800C4A48: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x800C4A4C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800C4A50: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C4A54: sh          $t9, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r25;
    // 0x800C4A58: swc1        $f0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f0.u32l;
    // 0x800C4A5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4A60: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C4A64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4A68: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800C4A6C: swc1        $f2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f2.u32l;
    // 0x800C4A70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4A74: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4A78: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800C4A7C: mul.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C4A80: swc1        $f12, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f12.u32l;
    // 0x800C4A84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4A88: swc1        $f14, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f14.u32l;
    // 0x800C4A8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4A90: mul.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800C4A94: nop

    // 0x800C4A98: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800C4A9C: swc1        $f16, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f16.u32l;
    // 0x800C4AA0: jal         0x800C13A0
    // 0x800C4AA4: swc1        $f18, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f18.u32l;
    func_800C13A0(rdram, ctx);
        goto after_40;
    // 0x800C4AA4: swc1        $f18, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f18.u32l;
    after_40:
L_800C4AA8:
    // 0x800C4AA8: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800C4AAC:
    // 0x800C4AAC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800C4AB0: bnel        $v1, $zero, L_800C4430
    if (ctx->r3 != 0) {
        // 0x800C4AB4: andi        $t8, $v1, 0xFF
        ctx->r24 = ctx->r3 & 0XFF;
            goto L_800C4430;
    }
    goto skip_4;
    // 0x800C4AB4: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    skip_4:
L_800C4AB8:
    // 0x800C4AB8: beql        $s4, $zero, L_800C4ACC
    if (ctx->r20 == 0) {
        // 0x800C4ABC: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_800C4ACC;
    }
    goto skip_5;
    // 0x800C4ABC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    skip_5:
    // 0x800C4AC0: jal         0x800C3BDC
    // 0x800C4AC4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_41;
    // 0x800C4AC4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_41:
    // 0x800C4AC8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800C4ACC:
    // 0x800C4ACC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800C4AD0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800C4AD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C4AD8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800C4ADC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800C4AE0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4AE4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800C4AE8: jr          $ra
    // 0x800C4AEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C4AEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C4AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4AF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C4AF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C4AF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C4AFC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C4B00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C4B04: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800C4B08: jal         0x800C4350
    // 0x800C4B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800C4350(rdram, ctx);
        goto after_0;
    // 0x800C4B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800C4B10: beq         $v0, $zero, L_800C4B50
    if (ctx->r2 == 0) {
        // 0x800C4B14: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_800C4B50;
    }
    // 0x800C4B14: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800C4B18: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800C4B1C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C4B20: bnel        $t6, $zero, L_800C4B34
    if (ctx->r14 != 0) {
        // 0x800C4B24: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_800C4B34;
    }
    goto skip_0;
    // 0x800C4B24: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    skip_0:
    // 0x800C4B28: jal         0x800C33DC
    // 0x800C4B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C33DC(rdram, ctx);
        goto after_1;
    // 0x800C4B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C4B30: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
L_800C4B34:
    // 0x800C4B34: jal         0x800C330C
    // 0x800C4B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x800C4B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C4B3C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800C4B40: jal         0x800C36F4
    // 0x800C4B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C36F4(rdram, ctx);
        goto after_3;
    // 0x800C4B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C4B48: jal         0x800C3BDC
    // 0x800C4B4C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_4;
    // 0x800C4B4C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
L_800C4B50:
    // 0x800C4B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C4B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C4B5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4B64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C4B68: jr          $ra
    // 0x800C4B6C: swc1        $f12, -0x5670($at)
    MEM_W(-0X5670, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800C4B6C: swc1        $f12, -0x5670($at)
    MEM_W(-0X5670, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800C4B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4B70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C4B74: jr          $ra
    // 0x800C4B78: sh          $a0, -0x566C($at)
    MEM_H(-0X566C, ctx->r1) = ctx->r4;
    return;
    // 0x800C4B78: sh          $a0, -0x566C($at)
    MEM_H(-0X566C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800C4B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4B7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C4B80: jr          $ra
    // 0x800C4B84: sh          $a0, -0x566A($at)
    MEM_H(-0X566A, ctx->r1) = ctx->r4;
    return;
    // 0x800C4B84: sh          $a0, -0x566A($at)
    MEM_H(-0X566A, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800C4B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4B90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C4B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C4B98: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800C4B9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C4BA0: jal         0x800A8984
    // 0x800C4BA4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_800A8984(rdram, ctx);
        goto after_0;
    // 0x800C4BA4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x800C4BA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800C4BAC: jal         0x800A89A0
    // 0x800C4BB0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A89A0(rdram, ctx);
        goto after_1;
    // 0x800C4BB0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800C4BB4: beq         $v0, $zero, L_800C4C24
    if (ctx->r2 == 0) {
        // 0x800C4BB8: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_800C4C24;
    }
    // 0x800C4BB8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4BBC: beq         $t6, $zero, L_800C4C24
    if (ctx->r14 == 0) {
        // 0x800C4BC0: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_800C4C24;
    }
    // 0x800C4BC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C4BC4: jal         0x800A8AD4
    // 0x800C4BC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800A8AD4(rdram, ctx);
        goto after_2;
    // 0x800C4BC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x800C4BCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800C4BD0: jal         0x80015D14
    // 0x800C4BD4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80015D14(rdram, ctx);
        goto after_3;
    // 0x800C4BD4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800C4BD8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C4BDC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C4BE0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800C4BE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C4BE8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C4BEC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C4BF0: addiu       $v0, $v0, -0x5660
    ctx->r2 = ADD32(ctx->r2, -0X5660);
    // 0x800C4BF4: lwc1        $f18, 0x7C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x800C4BF8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C4BFC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C4C00: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C4C04: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800C4C08: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800C4C0C: lwc1        $f16, 0x78($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X78);
    // 0x800C4C10: swc1        $f4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f4.u32l;
    // 0x800C4C14: lwc1        $f10, 0x5890($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5890);
    // 0x800C4C18: div.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C4C1C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800C4C20: swc1        $f4, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f4.u32l;
L_800C4C24:
    // 0x800C4C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C4C28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C4C2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4C34: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800C4C38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C4C3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C4C40: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800C4C44: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x800C4C48: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x800C4C4C: jal         0x800A8984
    // 0x800C4C50: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    func_800A8984(rdram, ctx);
        goto after_0;
    // 0x800C4C50: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C4C54: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800C4C58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C4C5C: jal         0x800CA7E4
    // 0x800C4C60: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_800CA7E4(rdram, ctx);
        goto after_1;
    // 0x800C4C60: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x800C4C64: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x800C4C68: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x800C4C6C: jal         0x800EFB24
    // 0x800C4C70: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x800C4C70: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x800C4C74: jal         0x800CA7AC
    // 0x800C4C78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800CA7AC(rdram, ctx);
        goto after_3;
    // 0x800C4C78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x800C4C7C: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x800C4C80: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C4C84: jal         0x800F23D0
    // 0x800C4C88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F23D0(rdram, ctx);
        goto after_4;
    // 0x800C4C88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800C4C8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C4C90: lwc1        $f6, 0x5894($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5894);
    // 0x800C4C94: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800C4C98: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x800C4C9C: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x800C4CA0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800C4CA4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x800C4CA8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800C4CAC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x800C4CB0: bc1f        L_800C4CBC
    if (!c1cs) {
        // 0x800C4CB4: addiu       $t8, $sp, 0x3C
        ctx->r24 = ADD32(ctx->r29, 0X3C);
            goto L_800C4CBC;
    }
    // 0x800C4CB4: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x800C4CB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_800C4CBC:
    // 0x800C4CBC: bne         $t6, $zero, L_800C4CD8
    if (ctx->r14 != 0) {
        // 0x800C4CC0: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_800C4CD8;
    }
    // 0x800C4CC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800C4CC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800C4CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C4CCC: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x800C4CD0: b           L_800C4E44
    // 0x800C4CD4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
        goto L_800C4E44;
    // 0x800C4CD4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_800C4CD8:
    // 0x800C4CD8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800C4CDC: jal         0x800A8A04
    // 0x800C4CE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_800A8A04(rdram, ctx);
        goto after_5;
    // 0x800C4CE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x800C4CE4: jal         0x800CA79C
    // 0x800C4CE8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800CA79C(rdram, ctx);
        goto after_6;
    // 0x800C4CE8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x800C4CEC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4CF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C4CF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C4CF8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C4CFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C4D00: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C4D04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4D08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C4D0C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800C4D10: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800C4D14: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C4D18: mul.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C4D1C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x800C4D20: jal         0x800CA6FC
    // 0x800C4D24: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    func_800CA6FC(rdram, ctx);
        goto after_7;
    // 0x800C4D24: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800C4D28: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800C4D2C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4D30: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800C4D34: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800C4D38: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800C4D3C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800C4D40: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4D44: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800C4D48: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800C4D4C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C4D50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C4D54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4D58: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800C4D5C: div.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800C4D60: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800C4D64: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800C4D68: nop

    // 0x800C4D6C: mul.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x800C4D70: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800C4D74: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x800C4D78: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800C4D7C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4D80: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800C4D84: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x800C4D88: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800C4D8C: nop

    // 0x800C4D90: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C4D94: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800C4D98: nop

    // 0x800C4D9C: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800C4DA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C4DA4: nop

    // 0x800C4DA8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800C4DAC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C4DB0: bc1t        L_800C4E10
    if (c1cs) {
        // 0x800C4DB4: swc1        $f10, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
            goto L_800C4E10;
    }
    // 0x800C4DB4: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x800C4DB8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800C4DBC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800C4DC0: nop

    // 0x800C4DC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C4DC8: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x800C4DCC: nop

    // 0x800C4DD0: bc1t        L_800C4E10
    if (c1cs) {
        // 0x800C4DD4: nop
    
            goto L_800C4E10;
    }
    // 0x800C4DD4: nop

    // 0x800C4DD8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800C4DDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C4DE0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4DE4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800C4DE8: nop

    // 0x800C4DEC: bc1t        L_800C4E10
    if (c1cs) {
        // 0x800C4DF0: nop
    
            goto L_800C4E10;
    }
    // 0x800C4DF0: nop

    // 0x800C4DF4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800C4DF8: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x800C4DFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4E00: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x800C4E04: nop

    // 0x800C4E08: bc1fl       L_800C4E1C
    if (!c1cs) {
        // 0x800C4E0C: mtc1        $t5, $f8
        ctx->f8.u32l = ctx->r13;
            goto L_800C4E1C;
    }
    goto skip_0;
    // 0x800C4E0C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    skip_0:
L_800C4E10:
    // 0x800C4E10: b           L_800C4E44
    // 0x800C4E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C4E44;
    // 0x800C4E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C4E18: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
L_800C4E1C:
    // 0x800C4E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C4E20: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4E24: add.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x800C4E28: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800C4E2C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800C4E30: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800C4E34: nop

    // 0x800C4E38: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C4E3C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x800C4E40: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_800C4E44:
    // 0x800C4E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4E48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C4E4C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800C4E50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C4E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4E58: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800C4E5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C4E60: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800C4E64: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800C4E68: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800C4E6C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x800C4E70: jal         0x800A8984
    // 0x800C4E74: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    func_800A8984(rdram, ctx);
        goto after_0;
    // 0x800C4E74: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C4E78: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x800C4E7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C4E80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C4E84: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800C4E88: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800C4E8C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x800C4E90: jal         0x800A8A04
    // 0x800C4E94: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_800A8A04(rdram, ctx);
        goto after_1;
    // 0x800C4E94: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x800C4E98: jal         0x800CA79C
    // 0x800C4E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CA79C(rdram, ctx);
        goto after_2;
    // 0x800C4E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800C4EA0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800C4EA4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C4EA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C4EAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C4EB0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C4EB4: lwc1        $f14, 0x5898($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5898);
    // 0x800C4EB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4EBC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800C4EC0: nop

    // 0x800C4EC4: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C4EC8: jal         0x800F214C
    // 0x800C4ECC: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_800F214C(rdram, ctx);
        goto after_3;
    // 0x800C4ECC: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x800C4ED0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C4ED4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C4ED8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800C4EDC: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x800C4EE0: nop

    // 0x800C4EE4: bc1fl       L_800C4F00
    if (!c1cs) {
        // 0x800C4EE8: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_800C4F00;
    }
    goto skip_0;
    // 0x800C4EE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_0:
    // 0x800C4EEC: jal         0x800EFD24
    // 0x800C4EF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x800C4EF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800C4EF4: b           L_800C4FF8
    // 0x800C4EF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C4FF8;
    // 0x800C4EF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4EFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_800C4F00:
    // 0x800C4F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C4F04: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800C4F08: jal         0x800CA6FC
    // 0x800C4F0C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_800CA6FC(rdram, ctx);
        goto after_5;
    // 0x800C4F0C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x800C4F10: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4F14: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800C4F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C4F1C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800C4F20: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800C4F24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4F28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C4F2C: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800C4F30: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800C4F34: jal         0x800CA7B4
    // 0x800C4F38: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    func_800CA7B4(rdram, ctx);
        goto after_6;
    // 0x800C4F38: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x800C4F3C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x800C4F40: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x800C4F44: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800C4F48: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800C4F4C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C4F50: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C4F54: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800C4F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C4F5C: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x800C4F60: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800C4F64: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800C4F68: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x800C4F6C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800C4F70: nop

    // 0x800C4F74: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4F78: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800C4F7C: sub.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x800C4F80: mul.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x800C4F84: nop

    // 0x800C4F88: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800C4F8C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x800C4F90: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C4F94: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800C4F98: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800C4F9C: nop

    // 0x800C4FA0: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C4FA4: mul.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800C4FA8: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x800C4FAC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800C4FB0: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x800C4FB4: mul.s       $f18, $f2, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800C4FB8: nop

    // 0x800C4FBC: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800C4FC0: div.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x800C4FC4: jal         0x800CA7A4
    // 0x800C4FC8: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    func_800CA7A4(rdram, ctx);
        goto after_7;
    // 0x800C4FC8: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    after_7:
    // 0x800C4FCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C4FD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C4FD4: jal         0x800F23D0
    // 0x800C4FD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800F23D0(rdram, ctx);
        goto after_8;
    // 0x800C4FD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x800C4FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C4FE0: jal         0x800CA7E4
    // 0x800C4FE4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800CA7E4(rdram, ctx);
        goto after_9;
    // 0x800C4FE4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_9:
    // 0x800C4FE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C4FEC: jal         0x800EF04C
    // 0x800C4FF0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x800C4FF0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_10:
    // 0x800C4FF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C4FF8:
    // 0x800C4FF8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4FFC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800C5000: jr          $ra
    // 0x800C5004: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800C5004: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800C5008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5008: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C500C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C5010: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C5014: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800C5018: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x800C501C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C5020: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800C5024: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800C5028: jal         0x800A8A04
    // 0x800C502C: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_800A8A04(rdram, ctx);
        goto after_0;
    // 0x800C502C: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800C5030: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C5034: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x800C5038: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C503C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C5040: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800C5044: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x800C5048: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C504C: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800C5050: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x800C5054: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C5058: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C505C: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x800C5060: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x800C5064: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800C5068: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800C506C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800C5070: nop

    // 0x800C5074: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C5078: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C507C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800C5080: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x800C5084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5088: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C508C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5094: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C5098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C509C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800C50A0: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x800C50A4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800C50A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C50AC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800C50B0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x800C50B4: jal         0x800A8A44
    // 0x800C50B8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_800A8A44(rdram, ctx);
        goto after_0;
    // 0x800C50B8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x800C50BC: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x800C50C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C50C4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C50C8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800C50CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x800C50D0: jal         0x800A8A04
    // 0x800C50D4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_800A8A04(rdram, ctx);
        goto after_1;
    // 0x800C50D4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x800C50D8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800C50DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C50E0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C50E4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C50E8: beql        $t8, $t9, L_800C5130
    if (ctx->r24 == ctx->r25) {
        // 0x800C50EC: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_800C5130;
    }
    goto skip_0;
    // 0x800C50EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x800C50F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C50F4: nop

    // 0x800C50F8: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800C50FC: jal         0x800139F8
    // 0x800C5100: nop

    func_800139F8(rdram, ctx);
        goto after_2;
    // 0x800C5100: nop

    after_2:
    // 0x800C5104: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800C5108: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C510C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800C5110: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800C5114: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C5118: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C511C: jal         0x80013B7C
    // 0x800C5120: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    func_80013B7C(rdram, ctx);
        goto after_3;
    // 0x800C5120: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    after_3:
    // 0x800C5124: add.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800C5128: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x800C512C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_800C5130:
    // 0x800C5130: jal         0x800A8A88
    // 0x800C5134: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800A8A88(rdram, ctx);
        goto after_4;
    // 0x800C5134: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_4:
    // 0x800C5138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C513C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800C5140: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5148: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C514C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5150: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C5154: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C5158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C515C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C5160: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C5164: jal         0x800C5094
    // 0x800C5168: swc1        $f12, -0x5610($at)
    MEM_W(-0X5610, ctx->r1) = ctx->f12.u32l;
    func_800C5094(rdram, ctx);
        goto after_0;
    // 0x800C5168: swc1        $f12, -0x5610($at)
    MEM_W(-0X5610, ctx->r1) = ctx->f12.u32l;
    after_0:
    // 0x800C516C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C5174: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C517C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C517C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C5180: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C5184: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C5188: jr          $ra
    // 0x800C518C: lwc1        $f0, -0x5610($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5610);
    return;
    // 0x800C518C: lwc1        $f0, -0x5610($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5610);
;}
RECOMP_FUNC void func_800C5190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5190: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C5194: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C5198: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C519C: jr          $ra
    // 0x800C51A0: lwc1        $f0, -0x55FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55FC);
    return;
    // 0x800C51A0: lwc1        $f0, -0x55FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55FC);
;}
RECOMP_FUNC void func_800C51A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C51A4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x800C51A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C51AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C51B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C51B4: swc1        $f14, -0x55FC($at)
    MEM_W(-0X55FC, ctx->r1) = ctx->f14.u32l;
    // 0x800C51B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C51BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C51C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C51C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C51C8: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x800C51CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C51D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C51D4: bc1t        L_800C5224
    if (c1cs) {
        // 0x800C51D8: nop
    
            goto L_800C5224;
    }
    // 0x800C51D8: nop

    // 0x800C51DC: jal         0x800C517C
    // 0x800C51E0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_800C517C(rdram, ctx);
        goto after_0;
    // 0x800C51E0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800C51E4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800C51E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C51EC: nop

    // 0x800C51F0: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800C51F4: jal         0x800139F8
    // 0x800C51F8: nop

    func_800139F8(rdram, ctx);
        goto after_1;
    // 0x800C51F8: nop

    after_1:
    // 0x800C51FC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C5200: jal         0x80013B7C
    // 0x800C5204: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013B7C(rdram, ctx);
        goto after_2;
    // 0x800C5204: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x800C5208: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800C520C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5210: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800C5214: jal         0x800C5094
    // 0x800C5218: nop

    func_800C5094(rdram, ctx);
        goto after_3;
    // 0x800C5218: nop

    after_3:
    // 0x800C521C: b           L_800C523C
    // 0x800C5220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C523C;
    // 0x800C5220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C5224:
    // 0x800C5224: jal         0x800C517C
    // 0x800C5228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C517C(rdram, ctx);
        goto after_4;
    // 0x800C5228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800C522C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800C5230: jal         0x800C5094
    // 0x800C5234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5094(rdram, ctx);
        goto after_5;
    // 0x800C5234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800C5238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C523C:
    // 0x800C523C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C5240: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C5244: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C524C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C524C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800C5250: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5254: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C5258: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C525C: jal         0x800A89A0
    // 0x800C5260: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_800A89A0(rdram, ctx);
        goto after_0;
    // 0x800C5260: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C5264: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800C5268: jal         0x800A8984
    // 0x800C526C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A8984(rdram, ctx);
        goto after_1;
    // 0x800C526C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800C5270: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x800C5274: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800C5278: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C527C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5280: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800C5284: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x800C5288: jal         0x800A8A44
    // 0x800C528C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_800A8A44(rdram, ctx);
        goto after_2;
    // 0x800C528C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x800C5290: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x800C5294: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800C5298: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800C529C: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x800C52A0: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x800C52A4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800C52A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C52AC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800C52B0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800C52B4: jal         0x80015B34
    // 0x800C52B8: addu        $a2, $t7, $v0
    ctx->r6 = ADD32(ctx->r15, ctx->r2);
    func_80015B34(rdram, ctx);
        goto after_3;
    // 0x800C52B8: addu        $a2, $t7, $v0
    ctx->r6 = ADD32(ctx->r15, ctx->r2);
    after_3:
    // 0x800C52BC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C52C0: jal         0x80015CE8
    // 0x800C52C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80015CE8(rdram, ctx);
        goto after_4;
    // 0x800C52C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x800C52C8: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x800C52CC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C52D0: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x800C52D4: lw          $a1, -0x5610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5610);
    // 0x800C52D8: jal         0x800C5148
    // 0x800C52DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5148(rdram, ctx);
        goto after_5;
    // 0x800C52DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800C52E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C52E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C52E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800C52EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C52F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C52F4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800C52F8: addiu       $t7, $t7, -0x5660
    ctx->r15 = ADD32(ctx->r15, -0X5660);
    // 0x800C52FC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800C5300: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800C5304: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x800C5308: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C530C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C5310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C5314: beq         $v1, $at, L_800C5328
    if (ctx->r3 == ctx->r1) {
        // 0x800C5318: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_800C5328;
    }
    // 0x800C5318: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800C531C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C5320: bne         $v1, $at, L_800C5330
    if (ctx->r3 != ctx->r1) {
        // 0x800C5324: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_800C5330;
    }
    // 0x800C5324: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_800C5328:
    // 0x800C5328: b           L_800C53DC
    // 0x800C532C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C53DC;
    // 0x800C532C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C5330:
    // 0x800C5330: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x800C5334: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800C5338: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800C533C: addiu       $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x800C5340: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800C5344: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800C5348: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800C534C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C5350: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800C5354: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800C5358: jal         0x800A8A44
    // 0x800C535C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800A8A44(rdram, ctx);
        goto after_0;
    // 0x800C535C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800C5360: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C5364: lui         $at, 0x3F10
    ctx->r1 = S32(0X3F10 << 16);
    // 0x800C5368: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C536C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800C5370: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800C5374: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5378: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C537C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800C5380: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C5384: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C5388: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x800C538C: nop

    // 0x800C5390: andi        $t3, $v1, 0x1
    ctx->r11 = ctx->r3 & 0X1;
    // 0x800C5394: beq         $t3, $zero, L_800C53A0
    if (ctx->r11 == 0) {
        // 0x800C5398: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_800C53A0;
    }
    // 0x800C5398: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800C539C: addiu       $a0, $v1, 0x1
    ctx->r4 = ADD32(ctx->r3, 0X1);
L_800C53A0:
    // 0x800C53A0: subu        $t5, $t4, $a0
    ctx->r13 = SUB32(ctx->r12, ctx->r4);
    // 0x800C53A4: bgez        $t5, L_800C53B4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800C53A8: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_800C53B4;
    }
    // 0x800C53A8: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x800C53AC: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x800C53B0: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_800C53B4:
    // 0x800C53B4: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x800C53B8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800C53BC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800C53C0: bnel        $t7, $zero, L_800C53DC
    if (ctx->r15 != 0) {
        // 0x800C53C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800C53DC;
    }
    goto skip_0;
    // 0x800C53C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x800C53C8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800C53CC: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x800C53D0: jal         0x800C524C
    // 0x800C53D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800C524C(rdram, ctx);
        goto after_1;
    // 0x800C53D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800C53D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C53DC:
    // 0x800C53DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C53E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800C53E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C53EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C53EC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800C53F0: addiu       $t7, $t7, -0x5660
    ctx->r15 = ADD32(ctx->r15, -0X5660);
    // 0x800C53F4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800C53F8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800C53FC: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x800C5400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C5404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5408: beq         $v1, $zero, L_800C541C
    if (ctx->r3 == 0) {
        // 0x800C540C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800C541C;
    }
    // 0x800C540C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C5410: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C5414: bne         $v1, $at, L_800C5424
    if (ctx->r3 != ctx->r1) {
        // 0x800C5418: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_800C5424;
    }
    // 0x800C5418: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
L_800C541C:
    // 0x800C541C: b           L_800C5454
    // 0x800C5420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800C5454;
    // 0x800C5420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C5424:
    // 0x800C5424: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x800C5428: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C542C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5430: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800C5434: jal         0x800C524C
    // 0x800C5438: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800C524C(rdram, ctx);
        goto after_0;
    // 0x800C5438: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x800C543C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C5440: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800C5444: bnel        $t0, $zero, L_800C5454
    if (ctx->r8 != 0) {
        // 0x800C5448: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800C5454;
    }
    goto skip_0;
    // 0x800C5448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x800C544C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800C5450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C5454:
    // 0x800C5454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C545C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5464: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C5468: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800C546C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C5470: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800C5474: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800C5478: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800C547C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800C5480: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800C5484: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800C5488: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C548C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800C5490: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x800C5494: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_800C5498:
    // 0x800C5498: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800C549C: jal         0x800C54CC
    // 0x800C54A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C54CC(rdram, ctx);
        goto after_0;
    // 0x800C54A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800C54A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800C54A8: bnel        $s0, $s1, L_800C5498
    if (ctx->r16 != ctx->r17) {
        // 0x800C54AC: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_800C5498;
    }
    goto skip_0;
    // 0x800C54AC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_0:
    // 0x800C54B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C54B4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800C54B8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800C54BC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800C54C0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800C54C4: jr          $ra
    // 0x800C54C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C54C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C54CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C54CC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800C54D0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C54D4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C54D8: addiu       $t7, $t7, -0x5660
    ctx->r15 = ADD32(ctx->r15, -0X5660);
    // 0x800C54DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C54E0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800C54E4: swc1        $f12, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f12.u32l;
    // 0x800C54E8: jr          $ra
    // 0x800C54EC: swc1        $f14, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f14.u32l;
    return;
    // 0x800C54EC: swc1        $f14, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800C54F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C54F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C54F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C54F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C54FC: jal         0x800A89A0
    // 0x800C5500: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_800A89A0(rdram, ctx);
        goto after_0;
    // 0x800C5500: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C5504: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800C5508: jal         0x800A8984
    // 0x800C550C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800A8984(rdram, ctx);
        goto after_1;
    // 0x800C550C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800C5510: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800C5514: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800C5518: addiu       $a2, $a2, -0x5660
    ctx->r6 = ADD32(ctx->r6, -0X5660);
    // 0x800C551C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800C5520: addu        $v1, $a2, $t7
    ctx->r3 = ADD32(ctx->r6, ctx->r15);
    // 0x800C5524: lbu         $a0, 0xC($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XC);
    // 0x800C5528: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C552C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C5530: beq         $a0, $at, L_800C5548
    if (ctx->r4 == ctx->r1) {
        // 0x800C5534: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800C5548;
    }
    // 0x800C5534: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C5538: beql        $a0, $at, L_800C5588
    if (ctx->r4 == ctx->r1) {
        // 0x800C553C: lw          $t3, 0x0($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X0);
            goto L_800C5588;
    }
    goto skip_0;
    // 0x800C553C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x800C5540: b           L_800C55A4
    // 0x800C5544: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
        goto L_800C55A4;
    // 0x800C5544: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_800C5548:
    // 0x800C5548: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800C554C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x800C5550: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x800C5554: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800C5558: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800C555C: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800C5560: bne         $at, $zero, L_800C55A0
    if (ctx->r1 != 0) {
        // 0x800C5564: sw          $t0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r8;
            goto L_800C55A0;
    }
    // 0x800C5564: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800C5568: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x800C556C: sb          $t2, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r10;
    // 0x800C5570: jal         0x800C524C
    // 0x800C5574: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800C524C(rdram, ctx);
        goto after_2;
    // 0x800C5574: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x800C5578: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800C557C: b           L_800C55A0
    // 0x800C5580: addiu       $a2, $a2, -0x5660
    ctx->r6 = ADD32(ctx->r6, -0X5660);
        goto L_800C55A0;
    // 0x800C5580: addiu       $a2, $a2, -0x5660
    ctx->r6 = ADD32(ctx->r6, -0X5660);
    // 0x800C5584: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
L_800C5588:
    // 0x800C5588: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x800C558C: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x800C5590: bgez        $t5, L_800C55A0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800C5594: sw          $t5, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r13;
            goto L_800C55A0;
    }
    // 0x800C5594: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800C5598: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800C559C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_800C55A0:
    // 0x800C55A0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_800C55A4:
    // 0x800C55A4: beql        $a0, $zero, L_800C564C
    if (ctx->r4 == 0) {
        // 0x800C55A8: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_800C564C;
    }
    goto skip_1;
    // 0x800C55A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_1:
    // 0x800C55AC: beql        $s0, $zero, L_800C564C
    if (ctx->r16 == 0) {
        // 0x800C55B0: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_800C564C;
    }
    goto skip_2;
    // 0x800C55B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_2:
    // 0x800C55B4: jal         0x80015CE8
    // 0x800C55B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80015CE8(rdram, ctx);
        goto after_3;
    // 0x800C55B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800C55BC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800C55C0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C55C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C55C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C55CC: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x800C55D0: jal         0x800CA6F0
    // 0x800C55D4: lw          $a1, -0x55FC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X55FC);
    func_800CA6F0(rdram, ctx);
        goto after_4;
    // 0x800C55D4: lw          $a1, -0x55FC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X55FC);
    after_4:
    // 0x800C55D8: jal         0x800A8AD4
    // 0x800C55DC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800A8AD4(rdram, ctx);
        goto after_5;
    // 0x800C55DC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_5:
    // 0x800C55E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C55E4: jal         0x800CA6FC
    // 0x800C55E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800CA6FC(rdram, ctx);
        goto after_6;
    // 0x800C55E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x800C55EC: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C55F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C55F4: lwc1        $f4, -0x55E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55E4);
    // 0x800C55F8: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800C55FC: lwc1        $f8, -0x55E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X55E8);
    // 0x800C5600: add.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800C5604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5608: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C560C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C5610: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x800C5614: jal         0x800CA558
    // 0x800C5618: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_800CA558(rdram, ctx);
        goto after_7;
    // 0x800C5618: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x800C561C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C5620: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C5624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5628: div.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800C562C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800C5630: jal         0x800CA510
    // 0x800C5634: nop

    func_800CA510(rdram, ctx);
        goto after_8;
    // 0x800C5634: nop

    after_8:
    // 0x800C5638: jal         0x800CAF34
    // 0x800C563C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CAF34(rdram, ctx);
        goto after_9;
    // 0x800C563C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800C5640: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800C5644: addiu       $a2, $a2, -0x5660
    ctx->r6 = ADD32(ctx->r6, -0X5660);
    // 0x800C5648: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_800C564C:
    // 0x800C564C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C5654: swc1        $f4, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f4.u32l;
    // 0x800C5658: lwc1        $f6, 0x7C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X7C);
    // 0x800C565C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800C5660: jr          $ra
    // 0x800C5664: swc1        $f6, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x800C5664: swc1        $f6, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800C5668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5668: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800C566C: addiu       $t7, $t7, -0x5660
    ctx->r15 = ADD32(ctx->r15, -0X5660);
    // 0x800C5670: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800C5674: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800C5678: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x800C567C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800C5680: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C5684: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5688: beq         $v0, $at, L_800C5698
    if (ctx->r2 == ctx->r1) {
        // 0x800C568C: sw          $a1, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r5;
            goto L_800C5698;
    }
    // 0x800C568C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800C5690: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C5694: bne         $v0, $at, L_800C5754
    if (ctx->r2 != ctx->r1) {
        // 0x800C5698: addiu       $t8, $sp, 0x38
        ctx->r24 = ADD32(ctx->r29, 0X38);
            goto L_800C5754;
    }
L_800C5698:
    // 0x800C5698: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x800C569C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C56A0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800C56A4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x800C56A8: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x800C56AC: jal         0x800A8A04
    // 0x800C56B0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_800A8A04(rdram, ctx);
        goto after_0;
    // 0x800C56B0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800C56B4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800C56B8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800C56BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C56C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800C56C4: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x800C56C8: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800C56CC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800C56D0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C56D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C56D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C56DC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800C56E0: addiu       $a2, $a2, -0x5780
    ctx->r6 = ADD32(ctx->r6, -0X5780);
    // 0x800C56E4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800C56E8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800C56EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C56F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800C56F4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800C56F8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C56FC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800C5700: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800C5704: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800C5708: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800C570C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800C5710: jal         0x800B9A24
    // 0x800C5714: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_800B9A24(rdram, ctx);
        goto after_1;
    // 0x800C5714: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_1:
    // 0x800C5718: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800C571C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800C5720: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C5724: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C5728: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800C572C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800C5730: subu        $t7, $t6, $t0
    ctx->r15 = SUB32(ctx->r14, ctx->r8);
    // 0x800C5734: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800C5738: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C573C: addiu       $a2, $a2, -0x5780
    ctx->r6 = ADD32(ctx->r6, -0X5780);
    // 0x800C5740: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800C5744: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800C5748: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800C574C: jal         0x800B9A24
    // 0x800C5750: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800B9A24(rdram, ctx);
        goto after_2;
    // 0x800C5750: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_2:
L_800C5754:
    // 0x800C5754: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C5758: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800C575C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5770: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5778: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C577C: addiu       $v1, $v1, -0x55E0
    ctx->r3 = ADD32(ctx->r3, -0X55E0);
    // 0x800C5780: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800C5784: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C5788: sb          $zero, 0x11($v1)
    MEM_B(0X11, ctx->r3) = 0;
    // 0x800C578C: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
    // 0x800C5790: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x800C5794: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800C5798: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x800C579C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x800C57A0: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x800C57A4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x800C57A8: sb          $v0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r2;
    // 0x800C57AC: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x800C57B0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x800C57B4: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x800C57B8: jr          $ra
    // 0x800C57BC: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    return;
    // 0x800C57BC: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800C57C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C57C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C57C4: addiu       $v0, $v0, -0x55E0
    ctx->r2 = ADD32(ctx->r2, -0X55E0);
    // 0x800C57C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C57CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C57D0: lbu         $a0, 0x8($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X8);
    // 0x800C57D4: lbu         $a1, 0x9($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X9);
    // 0x800C57D8: jal         0x800BF48C
    // 0x800C57DC: lbu         $a2, 0xA($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XA);
    func_800BF48C(rdram, ctx);
        goto after_0;
    // 0x800C57DC: lbu         $a2, 0xA($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XA);
    after_0:
    // 0x800C57E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C57E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C57E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C57F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C57F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C57F4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800C57F8: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C57FC: addiu       $s1, $s1, -0x55E0
    ctx->r17 = ADD32(ctx->r17, -0X55E0);
    // 0x800C5800: lbu         $t6, 0x11($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X11);
    // 0x800C5804: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800C5808: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800C580C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800C5810: beq         $t6, $zero, L_800C594C
    if (ctx->r14 == 0) {
        // 0x800C5814: sdc1        $f20, 0x20($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
            goto L_800C594C;
    }
    // 0x800C5814: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800C5818: jal         0x800D8FF8
    // 0x800C581C: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800C581C: nop

    after_0:
    // 0x800C5820: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800C5824: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800C5828: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800C582C: jal         0x800F0E00
    // 0x800C5830: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x800C5830: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
    after_1:
    // 0x800C5834: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C5838: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800C583C: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x800C5840: addiu       $s2, $s2, -0x55DD
    ctx->r18 = ADD32(ctx->r18, -0X55DD);
    // 0x800C5844: addiu       $s0, $s0, -0x55E0
    ctx->r16 = ADD32(ctx->r16, -0X55E0);
L_800C5848:
    // 0x800C5848: lbu         $t7, 0xE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE);
    // 0x800C584C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C5850: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800C5854: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800C5858: lwc1        $f14, 0x4($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800C585C: bgez        $t7, L_800C5874
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800C5860: cvt.s.w     $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800C5874;
    }
    // 0x800C5860: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C5864: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C5868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C586C: nop

    // 0x800C5870: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800C5874:
    // 0x800C5874: lbu         $t8, 0xB($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XB);
    // 0x800C5878: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C587C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C5880: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800C5884: bgez        $t8, L_800C5898
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800C5888: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800C5898;
    }
    // 0x800C5888: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C588C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C5890: nop

    // 0x800C5894: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_800C5898:
    // 0x800C5898: jal         0x800F10B4
    // 0x800C589C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x800C589C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800C58A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800C58A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800C58A8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800C58AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800C58B0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C58B4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800C58B8: nop

    // 0x800C58BC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x800C58C0: beql        $t0, $zero, L_800C5910
    if (ctx->r8 == 0) {
        // 0x800C58C4: mfc1        $t0, $f4
        ctx->r8 = (int32_t)ctx->f4.u32l;
            goto L_800C5910;
    }
    goto skip_0;
    // 0x800C58C4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x800C58C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C58CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800C58D0: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800C58D4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800C58D8: nop

    // 0x800C58DC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800C58E0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800C58E4: nop

    // 0x800C58E8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x800C58EC: bne         $t0, $zero, L_800C5904
    if (ctx->r8 != 0) {
        // 0x800C58F0: nop
    
            goto L_800C5904;
    }
    // 0x800C58F0: nop

    // 0x800C58F4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800C58F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800C58FC: b           L_800C591C
    // 0x800C5900: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_800C591C;
    // 0x800C5900: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_800C5904:
    // 0x800C5904: b           L_800C591C
    // 0x800C5908: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_800C591C;
    // 0x800C5908: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800C590C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
L_800C5910:
    // 0x800C5910: nop

    // 0x800C5914: bltz        $t0, L_800C5904
    if (SIGNED(ctx->r8) < 0) {
        // 0x800C5918: nop
    
            goto L_800C5904;
    }
    // 0x800C5918: nop

L_800C591C:
    // 0x800C591C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800C5920: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800C5924: bne         $s0, $s2, L_800C5848
    if (ctx->r16 != ctx->r18) {
        // 0x800C5928: sb          $t0, 0x7($s0)
        MEM_B(0X7, ctx->r16) = ctx->r8;
            goto L_800C5848;
    }
    // 0x800C5928: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x800C592C: jal         0x800C57C0
    // 0x800C5930: nop

    func_800C57C0(rdram, ctx);
        goto after_3;
    // 0x800C5930: nop

    after_3:
    // 0x800C5934: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800C5938: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x800C593C: nop

    // 0x800C5940: bc1fl       L_800C5950
    if (!c1cs) {
        // 0x800C5944: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_800C5950;
    }
    goto skip_1;
    // 0x800C5944: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x800C5948: sb          $zero, 0x11($s1)
    MEM_B(0X11, ctx->r17) = 0;
L_800C594C:
    // 0x800C594C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800C5950:
    // 0x800C5950: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800C5954: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800C5958: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800C595C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800C5960: jr          $ra
    // 0x800C5964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C5964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C5968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5968: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800C596C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C5970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5974: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C5978: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x800C597C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5980: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C5984: addiu       $v0, $v0, -0x55E0
    ctx->r2 = ADD32(ctx->r2, -0X55E0);
    // 0x800C5988: bc1tl       L_800C59D0
    if (c1cs) {
        // 0x800C598C: sb          $zero, 0x11($v0)
        MEM_B(0X11, ctx->r2) = 0;
            goto L_800C59D0;
    }
    goto skip_0;
    // 0x800C598C: sb          $zero, 0x11($v0)
    MEM_B(0X11, ctx->r2) = 0;
    skip_0:
    // 0x800C5990: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C5994: addiu       $v0, $v0, -0x55E0
    ctx->r2 = ADD32(ctx->r2, -0X55E0);
    // 0x800C5998: lbu         $t7, 0x8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8);
    // 0x800C599C: lbu         $t8, 0x9($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X9);
    // 0x800C59A0: lbu         $t9, 0xA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XA);
    // 0x800C59A4: sb          $t6, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r14;
    // 0x800C59A8: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x800C59AC: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x800C59B0: sb          $a0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r4;
    // 0x800C59B4: sb          $a1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r5;
    // 0x800C59B8: sb          $a2, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r6;
    // 0x800C59BC: sb          $t7, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r15;
    // 0x800C59C0: sb          $t8, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r24;
    // 0x800C59C4: b           L_800C59E0
    // 0x800C59C8: sb          $t9, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r25;
        goto L_800C59E0;
    // 0x800C59C8: sb          $t9, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r25;
    // 0x800C59CC: sb          $zero, 0x11($v0)
    MEM_B(0X11, ctx->r2) = 0;
L_800C59D0:
    // 0x800C59D0: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
    // 0x800C59D4: sb          $a1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r5;
    // 0x800C59D8: jal         0x800C57C0
    // 0x800C59DC: sb          $a2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r6;
    func_800C57C0(rdram, ctx);
        goto after_0;
    // 0x800C59DC: sb          $a2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r6;
    after_0:
L_800C59E0:
    // 0x800C59E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C59E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C59E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C59F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C59F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C59F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C59F8: jal         0x800C5968
    // 0x800C59FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800C5968(rdram, ctx);
        goto after_0;
    // 0x800C59FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x800C5A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C5A08: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5A10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C5A14: bne         $a1, $at, L_800C5A20
    if (ctx->r5 != ctx->r1) {
        // 0x800C5A18: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_800C5A20;
    }
    // 0x800C5A18: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800C5A1C: sb          $t6, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r14;
L_800C5A20:
    // 0x800C5A20: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C5A24: bne         $a1, $at, L_800C5A30
    if (ctx->r5 != ctx->r1) {
        // 0x800C5A28: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_800C5A30;
    }
    // 0x800C5A28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C5A2C: sb          $t7, 0x92($a0)
    MEM_B(0X92, ctx->r4) = ctx->r15;
L_800C5A30:
    // 0x800C5A30: jr          $ra
    // 0x800C5A34: sb          $a1, 0x94($a0)
    MEM_B(0X94, ctx->r4) = ctx->r5;
    return;
    // 0x800C5A34: sb          $a1, 0x94($a0)
    MEM_B(0X94, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800C5A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C5A3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5A40: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C5A44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C5A48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C5A4C: jal         0x8001ACCC
    // 0x800C5A50: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800C5A50: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    after_0:
    // 0x800C5A54: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800C5A58: jal         0x800EFD24
    // 0x800C5A5C: addiu       $a0, $v0, 0x4C
    ctx->r4 = ADD32(ctx->r2, 0X4C);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x800C5A5C: addiu       $a0, $v0, 0x4C
    ctx->r4 = ADD32(ctx->r2, 0X4C);
    after_1:
    // 0x800C5A60: jal         0x800EFD24
    // 0x800C5A64: addiu       $a0, $s2, 0x58
    ctx->r4 = ADD32(ctx->r18, 0X58);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x800C5A64: addiu       $a0, $s2, 0x58
    ctx->r4 = ADD32(ctx->r18, 0X58);
    after_2:
    // 0x800C5A68: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800C5A6C: addiu       $s1, $s2, 0x1C
    ctx->r17 = ADD32(ctx->r18, 0X1C);
L_800C5A70:
    // 0x800C5A70: jal         0x800EFD24
    // 0x800C5A74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x800C5A74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800C5A78: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800C5A7C: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x800C5A80: bne         $at, $zero, L_800C5A70
    if (ctx->r1 != 0) {
        // 0x800C5A84: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800C5A70;
    }
    // 0x800C5A84: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800C5A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C5A8C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800C5A90: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_800C5A94:
    // 0x800C5A94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800C5A98: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x800C5A9C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800C5AA0: sb          $v1, 0x3D($v0)
    MEM_B(0X3D, ctx->r2) = ctx->r3;
    // 0x800C5AA4: sb          $v1, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = ctx->r3;
    // 0x800C5AA8: sb          $v1, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r3;
    // 0x800C5AAC: bne         $at, $zero, L_800C5A94
    if (ctx->r1 != 0) {
        // 0x800C5AB0: sb          $v1, 0x3C($v0)
        MEM_B(0X3C, ctx->r2) = ctx->r3;
            goto L_800C5A94;
    }
    // 0x800C5AB0: sb          $v1, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r3;
    // 0x800C5AB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C5AB8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800C5ABC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_800C5AC0:
    // 0x800C5AC0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800C5AC4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800C5AC8: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x800C5ACC: bne         $a0, $v1, L_800C5AC0
    if (ctx->r4 != ctx->r3) {
        // 0x800C5AD0: sh          $zero, 0xE($v0)
        MEM_H(0XE, ctx->r2) = 0;
            goto L_800C5AC0;
    }
    // 0x800C5AD0: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x800C5AD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800C5AD8: sh          $zero, 0x16($s2)
    MEM_H(0X16, ctx->r18) = 0;
    // 0x800C5ADC: lh          $t6, 0x16($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X16);
    // 0x800C5AE0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800C5AE4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800C5AE8: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x800C5AEC: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x800C5AF0: addiu       $a0, $s2, 0x64
    ctx->r4 = ADD32(ctx->r18, 0X64);
    // 0x800C5AF4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800C5AF8: jal         0x800EFA4C
    // 0x800C5AFC: sh          $t6, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r14;
    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x800C5AFC: sh          $t6, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r14;
    after_4:
    // 0x800C5B00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C5B04: lwc1        $f4, 0x58A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X58A0);
    // 0x800C5B08: sw          $zero, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = 0;
    // 0x800C5B0C: sh          $zero, 0x8C($s2)
    MEM_H(0X8C, ctx->r18) = 0;
    // 0x800C5B10: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C5B14: swc1        $f4, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f4.u32l;
    // 0x800C5B18: lwc1        $f6, 0x58A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X58A4);
    // 0x800C5B1C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800C5B20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C5B24: addiu       $t9, $zero, 0x1F00
    ctx->r25 = ADD32(0, 0X1F00);
    // 0x800C5B28: sw          $zero, 0x80($s2)
    MEM_W(0X80, ctx->r18) = 0;
    // 0x800C5B2C: sb          $zero, 0x8E($s2)
    MEM_B(0X8E, ctx->r18) = 0;
    // 0x800C5B30: sb          $zero, 0x90($s2)
    MEM_B(0X90, ctx->r18) = 0;
    // 0x800C5B34: sb          $zero, 0x8F($s2)
    MEM_B(0X8F, ctx->r18) = 0;
    // 0x800C5B38: sb          $zero, 0x91($s2)
    MEM_B(0X91, ctx->r18) = 0;
    // 0x800C5B3C: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    // 0x800C5B40: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x800C5B44: sw          $t9, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r25;
    // 0x800C5B48: sb          $zero, 0x95($s2)
    MEM_B(0X95, ctx->r18) = 0;
    // 0x800C5B4C: sb          $zero, 0x9C($s2)
    MEM_B(0X9C, ctx->r18) = 0;
    // 0x800C5B50: sb          $zero, 0x94($s2)
    MEM_B(0X94, ctx->r18) = 0;
    // 0x800C5B54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800C5B58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C5B5C: swc1        $f6, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f6.u32l;
    // 0x800C5B60: jal         0x800C5A10
    // 0x800C5B64: swc1        $f8, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f8.u32l;
    func_800C5A10(rdram, ctx);
        goto after_5;
    // 0x800C5B64: swc1        $f8, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f8.u32l;
    after_5:
    // 0x800C5B68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C5B6C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800C5B70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C5B74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C5B78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5B7C: jr          $ra
    // 0x800C5B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C5B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C5B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5B84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5B88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5B8C: jal         0x800C5A10
    // 0x800C5B90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C5A10(rdram, ctx);
        goto after_0;
    // 0x800C5B90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800C5B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C5B9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5BAC: jal         0x8001B084
    // 0x800C5BB0: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800C5BB0: nop

    after_0:
    // 0x800C5BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C5BBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5BCC: jal         0x8001BAFC
    // 0x800C5BD0: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800C5BD0: nop

    after_0:
    // 0x800C5BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C5BDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5BE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C5BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C5BEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C5BF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C5BF4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800C5BF8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800C5BFC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800C5C00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C5C04: jal         0x800EE7F8
    // 0x800C5C08: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C5C08: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x800C5C0C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C5C10: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C5C14: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800C5C18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800C5C1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800C5C20: jal         0x800EE7F8
    // 0x800C5C24: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800C5C24: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800C5C28: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C5C2C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800C5C30: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x800C5C34: addiu       $at, $zero, 0x1F00
    ctx->r1 = ADD32(0, 0X1F00);
    // 0x800C5C38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800C5C3C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800C5C40: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800C5C44: bne         $a3, $at, L_800C5C64
    if (ctx->r7 != ctx->r1) {
        // 0x800C5C48: swc1        $f18, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
            goto L_800C5C64;
    }
    // 0x800C5C48: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x800C5C4C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800C5C50: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800C5C54: jal         0x800BEF00
    // 0x800C5C58: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800BEF00(rdram, ctx);
        goto after_2;
    // 0x800C5C58: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x800C5C5C: b           L_800C5C74
    // 0x800C5C60: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C5C74;
    // 0x800C5C60: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C5C64:
    // 0x800C5C64: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800C5C68: jal         0x800C6A7C
    // 0x800C5C6C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C6A7C(rdram, ctx);
        goto after_3;
    // 0x800C5C6C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x800C5C70: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C5C74:
    // 0x800C5C74: beql        $v0, $zero, L_800C5C90
    if (ctx->r2 == 0) {
        // 0x800C5C78: sw          $zero, 0x10($s0)
        MEM_W(0X10, ctx->r16) = 0;
            goto L_800C5C90;
    }
    goto skip_0;
    // 0x800C5C78: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    skip_0:
    // 0x800C5C7C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x800C5C80: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x800C5C84: b           L_800C5C94
    // 0x800C5C88: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
        goto L_800C5C94;
    // 0x800C5C88: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
    // 0x800C5C8C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
L_800C5C90:
    // 0x800C5C90: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
L_800C5C94:
    // 0x800C5C94: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C5C98: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x800C5C9C: jal         0x800C69FC
    // 0x800C5CA0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800C69FC(rdram, ctx);
        goto after_4;
    // 0x800C5CA0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x800C5CA4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800C5CA8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x800C5CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5CB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C5CB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800C5CB8: jr          $ra
    // 0x800C5CBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800C5CBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800C5CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5CC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C5CC4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x800C5CC8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800C5CCC: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800C5CD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C5CD4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800C5CD8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800C5CDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C5CE0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x800C5CE4: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x800C5CE8: jal         0x800F2100
    // 0x800C5CEC: sub.s       $f12, $f20, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f14.fl;
    func_800F2100(rdram, ctx);
        goto after_0;
    // 0x800C5CEC: sub.s       $f12, $f20, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f14.fl;
    after_0:
    // 0x800C5CF0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800C5CF4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C5CF8: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C5CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5D00: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800C5D04: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800C5D08: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800C5D0C: bc1fl       L_800C5DE8
    if (!c1cs) {
        // 0x800C5D10: mfc1        $a1, $f14
        ctx->r5 = (int32_t)ctx->f14.u32l;
            goto L_800C5DE8;
    }
    goto skip_0;
    // 0x800C5D10: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    skip_0:
    // 0x800C5D14: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x800C5D18: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800C5D1C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800C5D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5D24: bc1f        L_800C5D88
    if (!c1cs) {
        // 0x800C5D28: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_800C5D88;
    }
    // 0x800C5D28: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800C5D2C: add.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x800C5D30: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x800C5D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5D38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C5D3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800C5D40: jal         0x800C5BE4
    // 0x800C5D44: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800C5BE4(rdram, ctx);
        goto after_1;
    // 0x800C5D44: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800C5D48: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C5D4C: bne         $v0, $zero, L_800C5DF8
    if (ctx->r2 != 0) {
        // 0x800C5D50: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800C5DF8;
    }
    // 0x800C5D50: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C5D54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C5D58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C5D5C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x800C5D60: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C5D64: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800C5D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5D6C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800C5D70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C5D74: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800C5D78: jal         0x800C5BE4
    // 0x800C5D7C: nop

    func_800C5BE4(rdram, ctx);
        goto after_2;
    // 0x800C5D7C: nop

    after_2:
    // 0x800C5D80: b           L_800C5DF8
    // 0x800C5D84: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C5DF8;
    // 0x800C5D84: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C5D88:
    // 0x800C5D88: sub.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x800C5D8C: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x800C5D90: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800C5D94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C5D98: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800C5D9C: jal         0x800C5BE4
    // 0x800C5DA0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800C5BE4(rdram, ctx);
        goto after_3;
    // 0x800C5DA0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800C5DA4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C5DA8: bne         $v0, $zero, L_800C5DF8
    if (ctx->r2 != 0) {
        // 0x800C5DAC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800C5DF8;
    }
    // 0x800C5DAC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C5DB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C5DB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C5DB8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800C5DBC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C5DC0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x800C5DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C5DC8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800C5DCC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C5DD0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800C5DD4: jal         0x800C5BE4
    // 0x800C5DD8: nop

    func_800C5BE4(rdram, ctx);
        goto after_4;
    // 0x800C5DD8: nop

    after_4:
    // 0x800C5DDC: b           L_800C5DF8
    // 0x800C5DE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800C5DF8;
    // 0x800C5DE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C5DE4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
L_800C5DE8:
    // 0x800C5DE8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C5DEC: jal         0x800C5BE4
    // 0x800C5DF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_800C5BE4(rdram, ctx);
        goto after_5;
    // 0x800C5DF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x800C5DF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800C5DF8:
    // 0x800C5DF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5DFC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800C5E00: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800C5E04: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800C5E08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800C5E0C: jr          $ra
    // 0x800C5E10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800C5E10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800C5E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E14: lbu         $v0, 0x8F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8F);
    // 0x800C5E18: bne         $v0, $zero, L_800C5E28
    if (ctx->r2 != 0) {
            // 0x800C5E1C: nop

    func_800C5E28(rdram, ctx);
    return;
    }
    // 0x800C5E1C: nop

    // 0x800C5E20: jr          $ra
    // 0x800C5E24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800C5E24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800C5E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E28: beql        $v0, $zero, L_800C5E48
    if (ctx->r2 == 0) {
            // 0x800C5E2C: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    static_3_800C5E48(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C5E2C: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    skip_0:
    // 0x800C5E30: lbu         $t6, 0x8E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8E);
    // 0x800C5E34: bnel        $t6, $zero, L_800C5E48
    if (ctx->r14 != 0) {
            // 0x800C5E38: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    static_3_800C5E48(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800C5E38: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    skip_1:
    // 0x800C5E3C: jr          $ra
    // 0x800C5E40: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800C5E40: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_800C5E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E44: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    // 0x800C5E48: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800C5E4C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800C5E50: nop

    // 0x800C5E54: bc1fl       L_800C5E68
    if (!c1cs) {
            // 0x800C5E58: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    static_3_800C5E68(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C5E58: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    skip_0:
    // 0x800C5E5C: jr          $ra
    // 0x800C5E60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800C5E60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800C5E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E64: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x800C5E68: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x800C5E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C5E70: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x800C5E74: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800C5E78: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x800C5E7C: nop

    // 0x800C5E80: bc1fl       L_800C5E94
    if (!c1cs) {
            // 0x800C5E84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    static_3_800C5E94(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C5E84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x800C5E88: jr          $ra
    // 0x800C5E8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800C5E8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800C5E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C5E94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800C5E98: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x800C5E9C: nop

    // 0x800C5EA0: bc1f        L_800C5EB0
    if (!c1cs) {
            // 0x800C5EA4: nop

    func_800C5EB0(rdram, ctx);
    return;
    }
    // 0x800C5EA4: nop

    // 0x800C5EA8: jr          $ra
    // 0x800C5EAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800C5EAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_800C5EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5EB0: jr          $ra
    // 0x800C5EB4: nop

    return;
    // 0x800C5EB4: nop

;}
RECOMP_FUNC void func_800C5EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C5EBC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C5EC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C5EC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C5EC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C5ECC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C5ED0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C5ED4: beq         $t6, $zero, L_800C5EF8
    if (ctx->r14 == 0) {
        // 0x800C5ED8: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_800C5EF8;
    }
    // 0x800C5ED8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800C5EDC: jal         0x800AAD28
    // 0x800C5EE0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800AAD28(rdram, ctx);
        goto after_0;
    // 0x800C5EE0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x800C5EE4: jal         0x800AAAE0
    // 0x800C5EE8: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    func_800AAAE0(rdram, ctx);
        goto after_1;
    // 0x800C5EE8: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    after_1:
    // 0x800C5EEC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x800C5EF0: jal         0x800FB508
    // 0x800C5EF4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800FB508(rdram, ctx);
        goto after_2;
    // 0x800C5EF4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_2:
L_800C5EF8:
    // 0x800C5EF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C5EFC: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x800C5F00: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800C5F04: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    // 0x800C5F08: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x800C5F0C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5F10: sh          $t9, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r25;
    // 0x800C5F14: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C5F18: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
    // 0x800C5F1C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C5F20: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x800C5F24: jal         0x800EE7F8
    // 0x800C5F28: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800C5F28: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x800C5F2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5F30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C5F34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C5F38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5F40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C5F44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800C5F48: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800C5F4C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C5F50: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800C5F54: lh          $a3, 0x14($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X14);
    // 0x800C5F58: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x800C5F5C: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    // 0x800C5F60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800C5F64: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x800C5F68: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800C5F6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800C5F70: jal         0x800C5EB8
    // 0x800C5F74: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_800C5EB8(rdram, ctx);
        goto after_0;
    // 0x800C5F74: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x800C5F78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5F7C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800C5F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C5F84: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5F8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C5F90: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C5F94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5F98: addiu       $t6, $t6, -0x5770
    ctx->r14 = ADD32(ctx->r14, -0X5770);
    // 0x800C5F9C: lui         $a1, 0xC68C
    ctx->r5 = S32(0XC68C << 16);
    // 0x800C5FA0: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x800C5FA4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C5FA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800C5FAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C5FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C5FB4: jal         0x800C5EB8
    // 0x800C5FB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C5EB8(rdram, ctx);
        goto after_0;
    // 0x800C5FB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C5FBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C5FC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C5FC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C5FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5FD4: lbu         $t6, 0x9C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9C);
    // 0x800C5FD8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C5FDC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800C5FE0: beq         $t6, $zero, L_800C5FEC
    if (ctx->r14 == 0) {
        // 0x800C5FE4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800C5FEC;
    }
    // 0x800C5FE4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800C5FE8: lwc1        $f12, 0x98($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X98);
L_800C5FEC:
    // 0x800C5FEC: beq         $a1, $zero, L_800C6010
    if (ctx->r5 == 0) {
        // 0x800C5FF0: addiu       $a0, $a3, 0x10
        ctx->r4 = ADD32(ctx->r7, 0X10);
            goto L_800C6010;
    }
    // 0x800C5FF0: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    // 0x800C5FF4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x800C5FF8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x800C5FFC: jal         0x800FB508
    // 0x800C6000: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800FB508(rdram, ctx);
        goto after_0;
    // 0x800C6000: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800C6004: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800C6008: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800C600C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
L_800C6010:
    // 0x800C6010: beq         $a1, $zero, L_800C6020
    if (ctx->r5 == 0) {
        // 0x800C6014: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_800C6020;
    }
    // 0x800C6014: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C6018: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x800C601C: sw          $t7, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->r15;
L_800C6020:
    // 0x800C6020: sb          $t8, 0x8F($a3)
    MEM_B(0X8F, ctx->r7) = ctx->r24;
    // 0x800C6024: swc1        $f12, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f12.u32l;
    // 0x800C6028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C602C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C6030: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C603C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6040: lui         $a1, 0xC694
    ctx->r5 = S32(0XC694 << 16);
    // 0x800C6044: ori         $a1, $a1, 0x7000
    ctx->r5 = ctx->r5 | 0X7000;
    // 0x800C6048: jal         0x800C5FCC
    // 0x800C604C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800C5FCC(rdram, ctx);
        goto after_0;
    // 0x800C604C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800C6050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C6054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C6058: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6060: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800C6064: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C6068: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C606C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6070: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x800C6074: addiu       $a1, $s0, 0x4C
    ctx->r5 = ADD32(ctx->r16, 0X4C);
    // 0x800C6078: jal         0x800EE7F8
    // 0x800C607C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C607C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x800C6080: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x800C6084: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    // 0x800C6088: jal         0x800DA298
    // 0x800C608C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800C608C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800C6090: beq         $v0, $zero, L_800C60FC
    if (ctx->r2 == 0) {
        // 0x800C6094: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_800C60FC;
    }
    // 0x800C6094: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800C6098: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x800C609C: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x800C60A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C60A4: jal         0x800F0E00
    // 0x800C60A8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_800F0E00(rdram, ctx);
        goto after_2;
    // 0x800C60A8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_2:
    // 0x800C60AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C60B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C60B4: lw          $a3, 0x88($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X88);
    // 0x800C60B8: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800C60BC: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x800C60C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C60C4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800C60C8: lui         $a2, 0xC0A0
    ctx->r6 = S32(0XC0A0 << 16);
    // 0x800C60CC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800C60D0: jal         0x800C5CC0
    // 0x800C60D4: nop

    func_800C5CC0(rdram, ctx);
        goto after_3;
    // 0x800C60D4: nop

    after_3:
    // 0x800C60D8: bne         $v0, $zero, L_800C60E8
    if (ctx->r2 != 0) {
        // 0x800C60DC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C60E8;
    }
    // 0x800C60DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C60E0: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    // 0x800C60E4: beq         $t7, $zero, L_800C60FC
    if (ctx->r15 == 0) {
        // 0x800C60E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C60FC;
    }
L_800C60E8:
    // 0x800C60E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C60EC: jal         0x800C5FCC
    // 0x800C60F0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800C5FCC(rdram, ctx);
        goto after_4;
    // 0x800C60F0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_4:
    // 0x800C60F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C60F8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_800C60FC:
    // 0x800C60FC: lui         $a2, 0xC4A2
    ctx->r6 = S32(0XC4A2 << 16);
    // 0x800C6100: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    // 0x800C6104: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x800C6108: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C610C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x800C6110: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800C6114: jal         0x800C5CC0
    // 0x800C6118: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    func_800C5CC0(rdram, ctx);
        goto after_5;
    // 0x800C6118: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_5:
    // 0x800C611C: bne         $v0, $zero, L_800C6174
    if (ctx->r2 != 0) {
        // 0x800C6120: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C6174;
    }
    // 0x800C6120: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C6124: jal         0x800C5F8C
    // 0x800C6128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5F8C(rdram, ctx);
        goto after_6;
    // 0x800C6128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800C612C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800C6130: bnel        $t0, $zero, L_800C614C
    if (ctx->r8 != 0) {
        // 0x800C6134: lwc1        $f18, 0x50($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
            goto L_800C614C;
    }
    goto skip_0;
    // 0x800C6134: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    skip_0:
    // 0x800C6138: jal         0x800C6038
    // 0x800C613C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C6038(rdram, ctx);
        goto after_7;
    // 0x800C613C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800C6140: b           L_800C6310
    // 0x800C6144: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C6144: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C6148: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
L_800C614C:
    // 0x800C614C: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x800C6150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6154: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800C6158: nop

    // 0x800C615C: bc1fl       L_800C6310
    if (!c1cs) {
        // 0x800C6160: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800C6310;
    }
    goto skip_1;
    // 0x800C6160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800C6164: jal         0x800C5A10
    // 0x800C6168: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C5A10(rdram, ctx);
        goto after_8;
    // 0x800C6168: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x800C616C: b           L_800C6310
    // 0x800C6170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C6170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C6174:
    // 0x800C6174: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800C6178: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800C617C: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x800C6180: and         $t1, $v1, $at
    ctx->r9 = ctx->r3 & ctx->r1;
    // 0x800C6184: beq         $t1, $zero, L_800C6240
    if (ctx->r9 == 0) {
        // 0x800C6188: lwc1        $f18, 0x4C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_800C6240;
    }
    // 0x800C6188: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800C618C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6190: jal         0x800C5FCC
    // 0x800C6194: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800C5FCC(rdram, ctx);
        goto after_9;
    // 0x800C6194: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_9:
    // 0x800C6198: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x800C619C: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x800C61A0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x800C61A4: nop

    // 0x800C61A8: bc1fl       L_800C61D4
    if (!c1cs) {
        // 0x800C61AC: lw          $a3, 0x84($s0)
        ctx->r7 = MEM_W(ctx->r16, 0X84);
            goto L_800C61D4;
    }
    goto skip_2;
    // 0x800C61AC: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    skip_2:
    // 0x800C61B0: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x800C61B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C61B8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800C61BC: nop

    // 0x800C61C0: bc1fl       L_800C61D4
    if (!c1cs) {
        // 0x800C61C4: lw          $a3, 0x84($s0)
        ctx->r7 = MEM_W(ctx->r16, 0X84);
            goto L_800C61D4;
    }
    goto skip_3;
    // 0x800C61C4: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    skip_3:
    // 0x800C61C8: jal         0x800C5A10
    // 0x800C61CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C5A10(rdram, ctx);
        goto after_10;
    // 0x800C61CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x800C61D0: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
L_800C61D4:
    // 0x800C61D4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800C61D8: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x800C61DC: addiu       $t3, $sp, 0x48
    ctx->r11 = ADD32(ctx->r29, 0X48);
    // 0x800C61E0: or          $t2, $a3, $at
    ctx->r10 = ctx->r7 | ctx->r1;
    // 0x800C61E4: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800C61E8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C61EC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800C61F0: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800C61F4: jal         0x800C5CC0
    // 0x800C61F8: lui         $a2, 0xC3E1
    ctx->r6 = S32(0XC3E1 << 16);
    func_800C5CC0(rdram, ctx);
        goto after_11;
    // 0x800C61F8: lui         $a2, 0xC3E1
    ctx->r6 = S32(0XC3E1 << 16);
    after_11:
    // 0x800C61FC: bne         $v0, $zero, L_800C6214
    if (ctx->r2 != 0) {
        // 0x800C6200: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C6214;
    }
    // 0x800C6200: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C6204: jal         0x800C5F8C
    // 0x800C6208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5F8C(rdram, ctx);
        goto after_12;
    // 0x800C6208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800C620C: b           L_800C6310
    // 0x800C6210: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C6210: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C6214:
    // 0x800C6214: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800C6218: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C621C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6220: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x800C6224: nop

    // 0x800C6228: bc1fl       L_800C6310
    if (!c1cs) {
        // 0x800C622C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800C6310;
    }
    goto skip_4;
    // 0x800C622C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x800C6230: jal         0x800C5F40
    // 0x800C6234: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800C5F40(rdram, ctx);
        goto after_13;
    // 0x800C6234: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_13:
    // 0x800C6238: b           L_800C6310
    // 0x800C623C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C623C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C6240:
    // 0x800C6240: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C6244: sll         $t4, $v1, 15
    ctx->r12 = S32(ctx->r3 << 15);
    // 0x800C6248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C624C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800C6250: nop

    // 0x800C6254: bc1f        L_800C62DC
    if (!c1cs) {
        // 0x800C6258: nop
    
            goto L_800C62DC;
    }
    // 0x800C6258: nop

    // 0x800C625C: bltz        $t4, L_800C62DC
    if (SIGNED(ctx->r12) < 0) {
        // 0x800C6260: lwc1        $f6, 0x54($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
            goto L_800C62DC;
    }
    // 0x800C6260: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800C6264: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800C6268: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C626C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C6270: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800C6274: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C6278: lwc1        $f18, 0x58A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X58A8);
    // 0x800C627C: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    // 0x800C6280: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800C6284: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800C6288: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x800C628C: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x800C6290: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800C6294: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800C6298: or          $t5, $a3, $at
    ctx->r13 = ctx->r7 | ctx->r1;
    // 0x800C629C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C62A0: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x800C62A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C62A8: jal         0x800C5CC0
    // 0x800C62AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800C5CC0(rdram, ctx);
        goto after_14;
    // 0x800C62AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x800C62B0: beq         $v0, $zero, L_800C62CC
    if (ctx->r2 == 0) {
        // 0x800C62B4: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C62CC;
    }
    // 0x800C62B4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C62B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C62BC: jal         0x800C5F40
    // 0x800C62C0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800C5F40(rdram, ctx);
        goto after_15;
    // 0x800C62C0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_15:
    // 0x800C62C4: b           L_800C6310
    // 0x800C62C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C62C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C62CC:
    // 0x800C62CC: jal         0x800C5F8C
    // 0x800C62D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5F8C(rdram, ctx);
        goto after_16;
    // 0x800C62D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x800C62D4: b           L_800C6310
    // 0x800C62D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C62D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C62DC:
    // 0x800C62DC: jal         0x800C5F40
    // 0x800C62E0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800C5F40(rdram, ctx);
        goto after_17;
    // 0x800C62E0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_17:
    // 0x800C62E4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800C62E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C62EC: beq         $t7, $zero, L_800C6304
    if (ctx->r15 == 0) {
        // 0x800C62F0: nop
    
            goto L_800C6304;
    }
    // 0x800C62F0: nop

    // 0x800C62F4: jal         0x800C5A10
    // 0x800C62F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C5A10(rdram, ctx);
        goto after_18;
    // 0x800C62F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_18:
    // 0x800C62FC: b           L_800C6310
    // 0x800C6300: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C6310;
    // 0x800C6300: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C6304:
    // 0x800C6304: jal         0x800C6038
    // 0x800C6308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C6038(rdram, ctx);
        goto after_19;
    // 0x800C6308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x800C630C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C6310:
    // 0x800C6310: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C6314: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800C6318: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6320: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800C6324: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C6328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C632C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6330: addiu       $a1, $s0, 0x4C
    ctx->r5 = ADD32(ctx->r16, 0X4C);
    // 0x800C6334: jal         0x800EE7F8
    // 0x800C6338: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C6338: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800C633C: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    // 0x800C6340: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800C6344: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x800C6348: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x800C634C: lui         $a2, 0xC4A2
    ctx->r6 = S32(0XC4A2 << 16);
    // 0x800C6350: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x800C6354: or          $t6, $a3, $at
    ctx->r14 = ctx->r7 | ctx->r1;
    // 0x800C6358: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800C635C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C6360: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x800C6364: jal         0x800C5CC0
    // 0x800C6368: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800C5CC0(rdram, ctx);
        goto after_1;
    // 0x800C6368: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800C636C: beq         $v0, $zero, L_800C6398
    if (ctx->r2 == 0) {
        // 0x800C6370: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C6398;
    }
    // 0x800C6370: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C6374: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800C6378: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C637C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6380: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800C6384: nop

    // 0x800C6388: bc1fl       L_800C639C
    if (!c1cs) {
        // 0x800C638C: lwc1        $f8, 0x74($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
            goto L_800C639C;
    }
    goto skip_0;
    // 0x800C638C: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    skip_0:
    // 0x800C6390: jal         0x800C5F40
    // 0x800C6394: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800C5F40(rdram, ctx);
        goto after_2;
    // 0x800C6394: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_2:
L_800C6398:
    // 0x800C6398: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
L_800C639C:
    // 0x800C639C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C63A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800C63A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C63A8: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800C63AC: lw          $a3, 0x88($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X88);
    // 0x800C63B0: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x800C63B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C63B8: add.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800C63BC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800C63C0: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800C63C4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800C63C8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800C63CC: jal         0x800C5CC0
    // 0x800C63D0: nop

    func_800C5CC0(rdram, ctx);
        goto after_3;
    // 0x800C63D0: nop

    after_3:
    // 0x800C63D4: bne         $v0, $zero, L_800C63E4
    if (ctx->r2 != 0) {
        // 0x800C63D8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C63E4;
    }
    // 0x800C63D8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C63DC: lbu         $t9, 0x9C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X9C);
    // 0x800C63E0: beq         $t9, $zero, L_800C63F0
    if (ctx->r25 == 0) {
        // 0x800C63E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C63F0;
    }
L_800C63E4:
    // 0x800C63E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C63E8: jal         0x800C5FCC
    // 0x800C63EC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800C5FCC(rdram, ctx);
        goto after_4;
    // 0x800C63EC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_4:
L_800C63F0:
    // 0x800C63F0: jal         0x800C5E14
    // 0x800C63F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5E14(rdram, ctx);
        goto after_5;
    // 0x800C63F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800C63F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C63FC: beq         $v0, $at, L_800C640C
    if (ctx->r2 == ctx->r1) {
        // 0x800C6400: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800C640C;
    }
    // 0x800C6400: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800C6404: jal         0x800C5A10
    // 0x800C6408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5A10(rdram, ctx);
        goto after_6;
    // 0x800C6408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_800C640C:
    // 0x800C640C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C6410: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C6414: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800C6418: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6420: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800C6424: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C6428: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C642C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6430: addiu       $a1, $s0, 0x4C
    ctx->r5 = ADD32(ctx->r16, 0X4C);
    // 0x800C6434: jal         0x800EE7F8
    // 0x800C6438: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C6438: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800C643C: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x800C6440: lwc1        $f8, 0x70($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X70);
    // 0x800C6444: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800C6448: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C644C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800C6450: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C6454: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C6458: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x800C645C: nop

    // 0x800C6460: bc1f        L_800C6470
    if (!c1cs) {
        // 0x800C6464: nop
    
            goto L_800C6470;
    }
    // 0x800C6464: nop

    // 0x800C6468: b           L_800C6470
    // 0x800C646C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800C6470;
    // 0x800C646C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800C6470:
    // 0x800C6470: jal         0x8001210C
    // 0x800C6474: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_8001210C(rdram, ctx);
        goto after_1;
    // 0x800C6474: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_1:
    // 0x800C6478: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x800C647C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800C6480: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800C6484: beq         $v1, $zero, L_800C6494
    if (ctx->r3 == 0) {
        // 0x800C6488: lui         $a2, 0xC3C3
        ctx->r6 = S32(0XC3C3 << 16);
            goto L_800C6494;
    }
    // 0x800C6488: lui         $a2, 0xC3C3
    ctx->r6 = S32(0XC3C3 << 16);
    // 0x800C648C: beq         $v0, $zero, L_800C6514
    if (ctx->r2 == 0) {
        // 0x800C6490: nop
    
            goto L_800C6514;
    }
    // 0x800C6490: nop

L_800C6494:
    // 0x800C6494: beq         $v1, $zero, L_800C64A4
    if (ctx->r3 == 0) {
        // 0x800C6498: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_800C64A4;
    }
    // 0x800C6498: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800C649C: lbu         $t6, 0x91($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X91);
    // 0x800C64A0: sb          $t6, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r14;
L_800C64A4:
    // 0x800C64A4: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    // 0x800C64A8: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x800C64AC: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x800C64B0: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x800C64B4: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x800C64B8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800C64BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C64C0: jal         0x800C5CC0
    // 0x800C64C4: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_800C5CC0(rdram, ctx);
        goto after_2;
    // 0x800C64C4: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_2:
    // 0x800C64C8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x800C64CC: beq         $v0, $zero, L_800C6504
    if (ctx->r2 == 0) {
        // 0x800C64D0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C6504;
    }
    // 0x800C64D0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C64D4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800C64D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C64DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C64E0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800C64E4: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800C64E8: nop

    // 0x800C64EC: bc1f        L_800C6514
    if (!c1cs) {
        // 0x800C64F0: nop
    
            goto L_800C6514;
    }
    // 0x800C64F0: nop

    // 0x800C64F4: jal         0x800C5F40
    // 0x800C64F8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_800C5F40(rdram, ctx);
        goto after_3;
    // 0x800C64F8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_3:
    // 0x800C64FC: b           L_800C6514
    // 0x800C6500: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
        goto L_800C6514;
    // 0x800C6500: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
L_800C6504:
    // 0x800C6504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6508: jal         0x800C5F8C
    // 0x800C650C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_800C5F8C(rdram, ctx);
        goto after_4;
    // 0x800C650C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_4:
    // 0x800C6510: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
L_800C6514:
    // 0x800C6514: beq         $v1, $zero, L_800C6524
    if (ctx->r3 == 0) {
        // 0x800C6518: lw          $t9, 0x40($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X40);
            goto L_800C6524;
    }
    // 0x800C6518: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800C651C: bne         $t9, $zero, L_800C65B0
    if (ctx->r25 != 0) {
        // 0x800C6520: nop
    
            goto L_800C65B0;
    }
    // 0x800C6520: nop

L_800C6524:
    // 0x800C6524: beql        $v1, $zero, L_800C6538
    if (ctx->r3 == 0) {
        // 0x800C6528: lwc1        $f6, 0x74($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
            goto L_800C6538;
    }
    goto skip_0;
    // 0x800C6528: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    skip_0:
    // 0x800C652C: lbu         $t0, 0x90($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X90);
    // 0x800C6530: sb          $t0, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r8;
    // 0x800C6534: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
L_800C6538:
    // 0x800C6538: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C653C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800C6540: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C6544: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800C6548: lw          $a3, 0x88($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X88);
    // 0x800C654C: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x800C6550: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800C6554: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800C6558: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800C655C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800C6560: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800C6564: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800C6568: jal         0x800C5CC0
    // 0x800C656C: nop

    func_800C5CC0(rdram, ctx);
        goto after_5;
    // 0x800C656C: nop

    after_5:
    // 0x800C6570: bne         $v0, $zero, L_800C6580
    if (ctx->r2 != 0) {
        // 0x800C6574: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C6580;
    }
    // 0x800C6574: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C6578: lbu         $t2, 0x9C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X9C);
    // 0x800C657C: beq         $t2, $zero, L_800C6598
    if (ctx->r10 == 0) {
        // 0x800C6580: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C6598;
    }
L_800C6580:
    // 0x800C6580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6584: jal         0x800C5FCC
    // 0x800C6588: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800C5FCC(rdram, ctx);
        goto after_6;
    // 0x800C6588: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_6:
    // 0x800C658C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C6590: b           L_800C65B0
    // 0x800C6594: sb          $t3, 0x92($s0)
    MEM_B(0X92, ctx->r16) = ctx->r11;
        goto L_800C65B0;
    // 0x800C6594: sb          $t3, 0x92($s0)
    MEM_B(0X92, ctx->r16) = ctx->r11;
L_800C6598:
    // 0x800C6598: lbu         $t4, 0x92($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X92);
    // 0x800C659C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800C65A0: beq         $t4, $zero, L_800C65B0
    if (ctx->r12 == 0) {
        // 0x800C65A4: nop
    
            goto L_800C65B0;
    }
    // 0x800C65A4: nop

    // 0x800C65A8: sb          $zero, 0x92($s0)
    MEM_B(0X92, ctx->r16) = 0;
    // 0x800C65AC: sb          $t5, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r13;
L_800C65B0:
    // 0x800C65B0: jal         0x800C5E14
    // 0x800C65B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5E14(rdram, ctx);
        goto after_7;
    // 0x800C65B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800C65B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C65BC: beq         $v0, $at, L_800C65CC
    if (ctx->r2 == ctx->r1) {
        // 0x800C65C0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800C65CC;
    }
    // 0x800C65C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800C65C4: jal         0x800C5A10
    // 0x800C65C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C5A10(rdram, ctx);
        goto after_8;
    // 0x800C65C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_800C65CC:
    // 0x800C65CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C65D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C65D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800C65D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C65E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C65E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800C65E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C65E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C65EC: lbu         $v1, 0x94($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X94);
    // 0x800C65F0: lbu         $t6, 0x8E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8E);
    // 0x800C65F4: lbu         $t7, 0x8F($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8F);
    // 0x800C65F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C65FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C6600: sb          $zero, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = 0;
    // 0x800C6604: sb          $zero, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = 0;
    // 0x800C6608: sb          $t6, 0x90($a0)
    MEM_B(0X90, ctx->r4) = ctx->r14;
    // 0x800C660C: beq         $v1, $at, L_800C6620
    if (ctx->r3 == ctx->r1) {
        // 0x800C6610: sb          $t7, 0x91($a0)
        MEM_B(0X91, ctx->r4) = ctx->r15;
            goto L_800C6620;
    }
    // 0x800C6610: sb          $t7, 0x91($a0)
    MEM_B(0X91, ctx->r4) = ctx->r15;
    // 0x800C6614: lbu         $t9, 0x93($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X93);
    // 0x800C6618: beql        $t9, $zero, L_800C6694
    if (ctx->r25 == 0) {
        // 0x800C661C: addiu       $t3, $s0, 0x4C
        ctx->r11 = ADD32(ctx->r16, 0X4C);
            goto L_800C6694;
    }
    goto skip_0;
    // 0x800C661C: addiu       $t3, $s0, 0x4C
    ctx->r11 = ADD32(ctx->r16, 0X4C);
    skip_0:
L_800C6620:
    // 0x800C6620: lbu         $t0, 0x93($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X93);
    // 0x800C6624: lui         $a2, 0x45DA
    ctx->r6 = S32(0X45DA << 16);
    // 0x800C6628: lw          $a3, 0x88($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X88);
    // 0x800C662C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800C6630: sb          $t1, 0x93($s0)
    MEM_B(0X93, ctx->r16) = ctx->r9;
    // 0x800C6634: addiu       $t2, $sp, 0x3C
    ctx->r10 = ADD32(ctx->r29, 0X3C);
    // 0x800C6638: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C663C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x800C6640: addiu       $a0, $s0, 0x4C
    ctx->r4 = ADD32(ctx->r16, 0X4C);
    // 0x800C6644: jal         0x800C5BE4
    // 0x800C6648: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    func_800C5BE4(rdram, ctx);
        goto after_0;
    // 0x800C6648: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_0:
    // 0x800C664C: beq         $v0, $zero, L_800C6668
    if (ctx->r2 == 0) {
        // 0x800C6650: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C6668;
    }
    // 0x800C6650: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C6654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6658: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800C665C: jal         0x800C5FCC
    // 0x800C6660: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_800C5FCC(rdram, ctx);
        goto after_1;
    // 0x800C6660: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C6664: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
L_800C6668:
    // 0x800C6668: beq         $a2, $zero, L_800C6684
    if (ctx->r6 == 0) {
        // 0x800C666C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C6684;
    }
    // 0x800C666C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C6674: jal         0x800C5A10
    // 0x800C6678: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C5A10(rdram, ctx);
        goto after_2;
    // 0x800C6678: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800C667C: b           L_800C6690
    // 0x800C6680: lbu         $v1, 0x94($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X94);
        goto L_800C6690;
    // 0x800C6680: lbu         $v1, 0x94($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X94);
L_800C6684:
    // 0x800C6684: jal         0x800C5A10
    // 0x800C6688: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C5A10(rdram, ctx);
        goto after_3;
    // 0x800C6688: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x800C668C: lbu         $v1, 0x94($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X94);
L_800C6690:
    // 0x800C6690: addiu       $t3, $s0, 0x4C
    ctx->r11 = ADD32(ctx->r16, 0X4C);
L_800C6694:
    // 0x800C6694: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C6698: beq         $v1, $at, L_800C66BC
    if (ctx->r3 == ctx->r1) {
        // 0x800C669C: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_800C66BC;
    }
    // 0x800C669C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x800C66A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C66A4: beq         $v1, $at, L_800C66CC
    if (ctx->r3 == ctx->r1) {
        // 0x800C66A8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800C66CC;
    }
    // 0x800C66A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C66AC: beq         $v1, $at, L_800C66DC
    if (ctx->r3 == ctx->r1) {
        // 0x800C66B0: nop
    
            goto L_800C66DC;
    }
    // 0x800C66B0: nop

    // 0x800C66B4: b           L_800C66E8
    // 0x800C66B8: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
        goto L_800C66E8;
    // 0x800C66B8: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
L_800C66BC:
    // 0x800C66BC: jal         0x800C6060
    // 0x800C66C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C6060(rdram, ctx);
        goto after_4;
    // 0x800C66C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800C66C4: b           L_800C66E8
    // 0x800C66C8: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
        goto L_800C66E8;
    // 0x800C66C8: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
L_800C66CC:
    // 0x800C66CC: jal         0x800C6320
    // 0x800C66D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C6320(rdram, ctx);
        goto after_5;
    // 0x800C66D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800C66D4: b           L_800C66E8
    // 0x800C66D8: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
        goto L_800C66E8;
    // 0x800C66D8: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
L_800C66DC:
    // 0x800C66DC: jal         0x800C6420
    // 0x800C66E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C6420(rdram, ctx);
        goto after_6;
    // 0x800C66E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800C66E4: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
L_800C66E8:
    // 0x800C66E8: jal         0x800EE7F8
    // 0x800C66EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x800C66EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x800C66F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C66F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C66F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800C66FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6704: jr          $ra
    // 0x800C6708: lbu         $v0, 0x8E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8E);
    return;
    // 0x800C6708: lbu         $v0, 0x8E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8E);
;}
RECOMP_FUNC void func_800C670C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C670C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C6710: lwc1        $f4, 0x58AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X58AC);
    // 0x800C6714: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x800C6718: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800C671C: nop

    // 0x800C6720: bc1fl       L_800C6734
    if (!c1cs) {
        // 0x800C6724: lbu         $v0, 0x8F($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X8F);
            goto L_800C6734;
    }
    goto skip_0;
    // 0x800C6724: lbu         $v0, 0x8F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8F);
    skip_0:
    // 0x800C6728: jr          $ra
    // 0x800C672C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800C672C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C6730: lbu         $v0, 0x8F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8F);
L_800C6734:
    // 0x800C6734: jr          $ra
    // 0x800C6738: nop

    return;
    // 0x800C6738: nop

;}
RECOMP_FUNC void func_800C673C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C673C: jr          $ra
    // 0x800C6740: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    return;
    // 0x800C6740: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
;}
RECOMP_FUNC void func_800C6744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6744: jr          $ra
    // 0x800C6748: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    return;
    // 0x800C6748: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
;}
RECOMP_FUNC void func_800C674C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C674C: jr          $ra
    // 0x800C6750: lh          $v0, 0x8C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8C);
    return;
    // 0x800C6750: lh          $v0, 0x8C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8C);
;}
RECOMP_FUNC void func_800C6754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6754: jr          $ra
    // 0x800C6758: lbu         $v0, 0x95($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X95);
    return;
    // 0x800C6758: lbu         $v0, 0x95($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X95);
;}
RECOMP_FUNC void func_800C675C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C675C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C6760: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800C6764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6768: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800C676C: jal         0x800EE7F8
    // 0x800C6770: addiu       $a1, $a3, 0x64
    ctx->r5 = ADD32(ctx->r7, 0X64);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C6770: addiu       $a1, $a3, 0x64
    ctx->r5 = ADD32(ctx->r7, 0X64);
    after_0:
    // 0x800C6774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C6778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C677C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6784: lbu         $t6, 0x95($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X95);
    // 0x800C6788: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800C678C: beql        $t6, $zero, L_800C67C0
    if (ctx->r14 == 0) {
        // 0x800C6790: lwc1        $f0, 0x70($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
            goto L_800C67C0;
    }
    goto skip_0;
    // 0x800C6790: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    skip_0:
    // 0x800C6794: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x800C6798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C679C: lwc1        $f8, 0x70($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X70);
    // 0x800C67A0: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800C67A4: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x800C67A8: nop

    // 0x800C67AC: bc1fl       L_800C67C0
    if (!c1cs) {
        // 0x800C67B0: lwc1        $f0, 0x70($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
            goto L_800C67C0;
    }
    goto skip_1;
    // 0x800C67B0: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    skip_1:
    // 0x800C67B4: jr          $ra
    // 0x800C67B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x800C67B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800C67BC: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
L_800C67C0:
    // 0x800C67C0: jr          $ra
    // 0x800C67C4: nop

    return;
    // 0x800C67C4: nop

;}
RECOMP_FUNC void func_800C67C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67C8: jr          $ra
    // 0x800C67CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    return;
    // 0x800C67CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_800C67D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67D0: jr          $ra
    // 0x800C67D4: lbu         $v0, 0x9C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9C);
    return;
    // 0x800C67D4: lbu         $v0, 0x9C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9C);
;}
RECOMP_FUNC void func_800C67D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67D8: jr          $ra
    // 0x800C67DC: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    return;
    // 0x800C67DC: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
;}
RECOMP_FUNC void func_800C67E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67E0: jr          $ra
    // 0x800C67E4: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    return;
    // 0x800C67E4: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
;}
RECOMP_FUNC void func_800C67E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67E8: jr          $ra
    // 0x800C67EC: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    return;
    // 0x800C67EC: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
;}
RECOMP_FUNC void func_800C67F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67F0: jr          $ra
    // 0x800C67F4: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    return;
    // 0x800C67F4: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_800C67F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C67F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C67FC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800C6800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C6804: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_800C6808:
    // 0x800C6808: lbu         $t6, 0x40($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X40);
    // 0x800C680C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C6810: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800C6814: sb          $t6, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r14;
    // 0x800C6818: lbu         $t7, 0x41($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X41);
    // 0x800C681C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800C6820: sb          $t7, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r15;
    // 0x800C6824: lbu         $t8, 0x3E($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3E);
    // 0x800C6828: sb          $t8, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r24;
    // 0x800C682C: lbu         $t9, 0x3F($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X3F);
    // 0x800C6830: bne         $v0, $a0, L_800C6808
    if (ctx->r2 != ctx->r4) {
        // 0x800C6834: sb          $t9, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r25;
            goto L_800C6808;
    }
    // 0x800C6834: sb          $t9, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r25;
    // 0x800C6838: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C6844: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800C6848: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800C684C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C6850: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C6854: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6858: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800C685C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800C6860: addiu       $s2, $a0, 0x1C
    ctx->r18 = ADD32(ctx->r4, 0X1C);
    // 0x800C6864: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
L_800C6868:
    // 0x800C6868: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C686C: jal         0x800EE7F8
    // 0x800C6870: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C6870: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x800C6874: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800C6878: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800C687C: bne         $s0, $s3, L_800C6868
    if (ctx->r16 != ctx->r19) {
        // 0x800C6880: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_800C6868;
    }
    // 0x800C6880: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x800C6884: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C6888: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C688C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C6890: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800C6894: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800C6898: jr          $ra
    // 0x800C689C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C689C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C68A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C68A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C68A4: jr          $ra
    // 0x800C68A8: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800C68A8: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800C68AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C68AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C68B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C68B4: jal         0x800EE7F8
    // 0x800C68B8: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C68B8: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    after_0:
    // 0x800C68BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C68C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C68C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C68CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C68CC: jr          $ra
    // 0x800C68D0: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
    return;
    // 0x800C68D0: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800C68D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C68D4: jr          $ra
    // 0x800C68D8: sb          $a1, 0x95($a0)
    MEM_B(0X95, ctx->r4) = ctx->r5;
    return;
    // 0x800C68D8: sb          $a1, 0x95($a0)
    MEM_B(0X95, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800C68DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C68DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C68E0: jr          $ra
    // 0x800C68E4: sb          $t6, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r14;
    return;
    // 0x800C68E4: sb          $t6, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800C68E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C68E8: lbu         $t6, 0x9C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9C);
    // 0x800C68EC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800C68F0: beq         $t6, $zero, L_800C6904
    if (ctx->r14 == 0) {
        // 0x800C68F4: nop
    
            goto L_800C6904;
    }
    // 0x800C68F4: nop

    // 0x800C68F8: bne         $a1, $zero, L_800C6904
    if (ctx->r5 != 0) {
        // 0x800C68FC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_800C6904;
    }
    // 0x800C68FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C6900: sb          $t7, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r15;
L_800C6904:
    // 0x800C6904: beq         $a1, $zero, L_800C6910
    if (ctx->r5 == 0) {
        // 0x800C6908: nop
    
            goto L_800C6910;
    }
    // 0x800C6908: nop

    // 0x800C690C: swc1        $f12, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f12.u32l;
L_800C6910:
    // 0x800C6910: jr          $ra
    // 0x800C6914: sb          $a1, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r5;
    return;
    // 0x800C6914: sb          $a1, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800C6920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6920: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C6924: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C6928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C692C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C6930: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x800C6934: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C6938: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800C693C: jal         0x800C696C
    // 0x800C6940: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800C696C(rdram, ctx);
        goto after_0;
    // 0x800C6940: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C6944: bne         $v0, $zero, L_800C6958
    if (ctx->r2 != 0) {
        // 0x800C6948: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_800C6958;
    }
    // 0x800C6948: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800C694C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C6950: nop

    // 0x800C6954: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_800C6958:
    // 0x800C6958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C695C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C6960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C6964: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C696C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C696C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C6970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6974: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800C6978: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800C697C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800C6980: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800C6984: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800C6988: jal         0x800EE7F8
    // 0x800C698C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C698C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x800C6990: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C6994: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800C6998: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800C699C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800C69A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800C69A4: jal         0x800EE7F8
    // 0x800C69A8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800C69A8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800C69AC: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C69B0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800C69B4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800C69B8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800C69BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800C69C0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800C69C4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x800C69C8: jal         0x800C6A7C
    // 0x800C69CC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    func_800C6A7C(rdram, ctx);
        goto after_2;
    // 0x800C69CC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800C69D0: beq         $v0, $zero, L_800C69E8
    if (ctx->r2 == 0) {
        // 0x800C69D4: lwc1        $f4, 0x2C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_800C69E8;
    }
    // 0x800C69D4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C69D8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800C69DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C69E0: b           L_800C69EC
    // 0x800C69E4: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
        goto L_800C69EC;
    // 0x800C69E4: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_800C69E8:
    // 0x800C69E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C69EC:
    // 0x800C69EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C69F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800C69F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C69FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C69FC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C6A00: jr          $ra
    // 0x800C6A04: lw          $v0, -0x553C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X553C);
    return;
    // 0x800C6A04: lw          $v0, -0x553C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X553C);
;}
RECOMP_FUNC void func_800C6A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C6A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6A10: jal         0x800C6A28
    // 0x800C6A14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C6A28(rdram, ctx);
        goto after_0;
    // 0x800C6A14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C6A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C6A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C6A20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6A28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C6A2C: addiu       $v0, $v0, -0x55C0
    ctx->r2 = ADD32(ctx->r2, -0X55C0);
    // 0x800C6A30: lw          $t6, 0x80($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X80);
    // 0x800C6A34: sw          $a0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r4;
    // 0x800C6A38: lw          $t7, 0x80($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X80);
    // 0x800C6A3C: sw          $a1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r5;
    // 0x800C6A40: lw          $t8, 0x80($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X80);
    // 0x800C6A44: sw          $a2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r6;
    // 0x800C6A48: lw          $t9, 0x80($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X80);
    // 0x800C6A4C: sw          $a3, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r7;
    // 0x800C6A50: lw          $t0, 0x80($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X80);
    // 0x800C6A54: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800C6A58: jr          $ra
    // 0x800C6A5C: sw          $t1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r9;
    return;
    // 0x800C6A5C: sw          $t1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_800C6A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6A60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6A68: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C6A6C: addiu       $v0, $v0, -0x55C0
    ctx->r2 = ADD32(ctx->r2, -0X55C0);
    // 0x800C6A70: sw          $v0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r2;
    // 0x800C6A74: jr          $ra
    // 0x800C6A78: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
    return;
    // 0x800C6A78: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800C6A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6A7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C6A80: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800C6A84: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800C6A88: addiu       $s2, $s2, -0x55C0
    ctx->r18 = ADD32(ctx->r18, -0X55C0);
    // 0x800C6A8C: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    // 0x800C6A90: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C6A94: addiu       $t6, $t6, -0x55BF
    ctx->r14 = ADD32(ctx->r14, -0X55BF);
    // 0x800C6A98: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800C6A9C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800C6AA0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800C6AA4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800C6AA8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800C6AAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C6AB0: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x800C6AB4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800C6AB8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800C6ABC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x800C6AC0: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x800C6AC4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800C6AC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C6ACC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800C6AD0: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    // 0x800C6AD4: bne         $at, $zero, L_800C6B48
    if (ctx->r1 != 0) {
        // 0x800C6AD8: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_800C6B48;
    }
    // 0x800C6AD8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x800C6ADC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_800C6AE0:
    // 0x800C6AE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800C6AE4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800C6AE8: beq         $v0, $zero, L_800C6B38
    if (ctx->r2 == 0) {
        // 0x800C6AEC: or          $a2, $s5, $zero
        ctx->r6 = ctx->r21 | 0;
            goto L_800C6B38;
    }
    // 0x800C6AEC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800C6AF0: jalr        $v0
    // 0x800C6AF4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800C6AF4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_0:
    // 0x800C6AF8: beq         $v0, $zero, L_800C6B20
    if (ctx->r2 == 0) {
        // 0x800C6AFC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800C6B20;
    }
    // 0x800C6AFC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800C6B00: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800C6B04: beql        $v0, $zero, L_800C6B20
    if (ctx->r2 == 0) {
        // 0x800C6B08: sw          $zero, 0x84($s2)
        MEM_W(0X84, ctx->r18) = 0;
            goto L_800C6B20;
    }
    goto skip_0;
    // 0x800C6B08: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    skip_0:
    // 0x800C6B0C: jalr        $v0
    // 0x800C6B10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800C6B10: nop

    after_1:
    // 0x800C6B14: b           L_800C6B20
    // 0x800C6B18: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
        goto L_800C6B20;
    // 0x800C6B18: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
    // 0x800C6B1C: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
L_800C6B20:
    // 0x800C6B20: beql        $s1, $zero, L_800C6B38
    if (ctx->r17 == 0) {
        // 0x800C6B24: lw          $v1, 0x80($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X80);
            goto L_800C6B38;
    }
    goto skip_1;
    // 0x800C6B24: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    skip_1:
    // 0x800C6B28: or          $s7, $s1, $zero
    ctx->r23 = ctx->r17 | 0;
    // 0x800C6B2C: b           L_800C6B38
    // 0x800C6B30: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
        goto L_800C6B38;
    // 0x800C6B30: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    // 0x800C6B34: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
L_800C6B38:
    // 0x800C6B38: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800C6B3C: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x800C6B40: bnel        $at, $zero, L_800C6AE0
    if (ctx->r1 != 0) {
        // 0x800C6B44: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_800C6AE0;
    }
    goto skip_2;
    // 0x800C6B44: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_2:
L_800C6B48:
    // 0x800C6B48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800C6B4C: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x800C6B50: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800C6B54: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C6B58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C6B5C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800C6B60: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800C6B64: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800C6B68: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800C6B6C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6B70: jr          $ra
    // 0x800C6B74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C6B74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C6B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6B78: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800C6B7C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800C6B80: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800C6B84: addiu       $s2, $s2, -0x55C0
    ctx->r18 = ADD32(ctx->r18, -0X55C0);
    // 0x800C6B88: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    // 0x800C6B8C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C6B90: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800C6B94: addiu       $t6, $t6, -0x55BF
    ctx->r14 = ADD32(ctx->r14, -0X55BF);
    // 0x800C6B98: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800C6B9C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800C6BA0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800C6BA4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800C6BA8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800C6BAC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800C6BB0: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x800C6BB4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800C6BB8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800C6BBC: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x800C6BC0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800C6BC4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800C6BC8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800C6BCC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800C6BD0: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x800C6BD4: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    // 0x800C6BD8: bne         $at, $zero, L_800C6C5C
    if (ctx->r1 != 0) {
        // 0x800C6BDC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_800C6C5C;
    }
    // 0x800C6BDC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x800C6BE0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800C6BE4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800C6BE8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
L_800C6BEC:
    // 0x800C6BEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800C6BF0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800C6BF4: beq         $v0, $zero, L_800C6C4C
    if (ctx->r2 == 0) {
        // 0x800C6BF8: or          $a3, $s5, $zero
        ctx->r7 = ctx->r21 | 0;
            goto L_800C6C4C;
    }
    // 0x800C6BF8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x800C6BFC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C6C00: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x800C6C04: jalr        $v0
    // 0x800C6C08: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800C6C08: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    after_0:
    // 0x800C6C0C: beq         $v0, $zero, L_800C6C34
    if (ctx->r2 == 0) {
        // 0x800C6C10: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800C6C34;
    }
    // 0x800C6C10: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800C6C14: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800C6C18: beql        $v0, $zero, L_800C6C34
    if (ctx->r2 == 0) {
        // 0x800C6C1C: sw          $zero, 0x84($s2)
        MEM_W(0X84, ctx->r18) = 0;
            goto L_800C6C34;
    }
    goto skip_0;
    // 0x800C6C1C: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    skip_0:
    // 0x800C6C20: jalr        $v0
    // 0x800C6C24: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800C6C24: nop

    after_1:
    // 0x800C6C28: b           L_800C6C34
    // 0x800C6C2C: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
        goto L_800C6C34;
    // 0x800C6C2C: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
    // 0x800C6C30: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
L_800C6C34:
    // 0x800C6C34: beql        $s1, $zero, L_800C6C4C
    if (ctx->r17 == 0) {
        // 0x800C6C38: lw          $v1, 0x80($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X80);
            goto L_800C6C4C;
    }
    goto skip_1;
    // 0x800C6C38: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    skip_1:
    // 0x800C6C3C: or          $fp, $s1, $zero
    ctx->r30 = ctx->r17 | 0;
    // 0x800C6C40: b           L_800C6C4C
    // 0x800C6C44: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
        goto L_800C6C4C;
    // 0x800C6C44: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    // 0x800C6C48: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
L_800C6C4C:
    // 0x800C6C4C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800C6C50: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x800C6C54: bnel        $at, $zero, L_800C6BEC
    if (ctx->r1 != 0) {
        // 0x800C6C58: lw          $v0, 0x4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X4);
            goto L_800C6BEC;
    }
    goto skip_2;
    // 0x800C6C58: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    skip_2:
L_800C6C5C:
    // 0x800C6C5C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800C6C60: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x800C6C64: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800C6C68: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800C6C6C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800C6C70: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6C74: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800C6C78: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800C6C7C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800C6C80: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800C6C84: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800C6C88: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800C6C8C: jr          $ra
    // 0x800C6C90: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800C6C90: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800C6C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6C94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C6C98: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800C6C9C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800C6CA0: addiu       $s2, $s2, -0x55C0
    ctx->r18 = ADD32(ctx->r18, -0X55C0);
    // 0x800C6CA4: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    // 0x800C6CA8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C6CAC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800C6CB0: addiu       $t6, $t6, -0x55BF
    ctx->r14 = ADD32(ctx->r14, -0X55BF);
    // 0x800C6CB4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x800C6CB8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800C6CBC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800C6CC0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800C6CC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800C6CC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C6CCC: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x800C6CD0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800C6CD4: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x800C6CD8: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x800C6CDC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800C6CE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800C6CE4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800C6CE8: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    // 0x800C6CEC: bne         $at, $zero, L_800C6D64
    if (ctx->r1 != 0) {
        // 0x800C6CF0: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_800C6D64;
    }
    // 0x800C6CF0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x800C6CF4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_800C6CF8:
    // 0x800C6CF8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800C6CFC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800C6D00: beql        $v0, $zero, L_800C6D58
    if (ctx->r2 == 0) {
        // 0x800C6D04: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_800C6D58;
    }
    goto skip_0;
    // 0x800C6D04: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_0:
    // 0x800C6D08: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800C6D0C: jalr        $v0
    // 0x800C6D10: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800C6D10: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_0:
    // 0x800C6D14: beq         $v0, $zero, L_800C6D3C
    if (ctx->r2 == 0) {
        // 0x800C6D18: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800C6D3C;
    }
    // 0x800C6D18: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800C6D1C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800C6D20: beql        $v0, $zero, L_800C6D3C
    if (ctx->r2 == 0) {
        // 0x800C6D24: sw          $zero, 0x84($s2)
        MEM_W(0X84, ctx->r18) = 0;
            goto L_800C6D3C;
    }
    goto skip_1;
    // 0x800C6D24: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
    skip_1:
    // 0x800C6D28: jalr        $v0
    // 0x800C6D2C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800C6D2C: nop

    after_1:
    // 0x800C6D30: b           L_800C6D3C
    // 0x800C6D34: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
        goto L_800C6D3C;
    // 0x800C6D34: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
    // 0x800C6D38: sw          $zero, 0x84($s2)
    MEM_W(0X84, ctx->r18) = 0;
L_800C6D3C:
    // 0x800C6D3C: beql        $s1, $zero, L_800C6D54
    if (ctx->r17 == 0) {
        // 0x800C6D40: lw          $v1, 0x80($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X80);
            goto L_800C6D54;
    }
    goto skip_2;
    // 0x800C6D40: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    skip_2:
    // 0x800C6D44: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x800C6D48: b           L_800C6D54
    // 0x800C6D4C: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
        goto L_800C6D54;
    // 0x800C6D4C: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
    // 0x800C6D50: lw          $v1, 0x80($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X80);
L_800C6D54:
    // 0x800C6D54: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_800C6D58:
    // 0x800C6D58: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x800C6D5C: bnel        $at, $zero, L_800C6CF8
    if (ctx->r1 != 0) {
        // 0x800C6D60: lw          $v0, 0x8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X8);
            goto L_800C6CF8;
    }
    goto skip_3;
    // 0x800C6D60: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    skip_3:
L_800C6D64:
    // 0x800C6D64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800C6D68: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x800C6D6C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800C6D70: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800C6D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C6D78: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800C6D7C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800C6D80: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6D84: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800C6D88: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800C6D8C: jr          $ra
    // 0x800C6D90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800C6D90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800C6DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6DA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C6DA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6DA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800C6DAC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C6DB0: jal         0x800C6E18
    // 0x800C6DB4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_800C6E18(rdram, ctx);
        goto after_0;
    // 0x800C6DB4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x800C6DB8: bne         $v0, $zero, L_800C6E08
    if (ctx->r2 != 0) {
        // 0x800C6DBC: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_800C6E08;
    }
    // 0x800C6DBC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x800C6DC0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800C6DC4: addiu       $t7, $t6, -0x3C
    ctx->r15 = ADD32(ctx->r14, -0X3C);
    // 0x800C6DC8: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x800C6DCC: beq         $at, $zero, L_800C6DEC
    if (ctx->r1 == 0) {
        // 0x800C6DD0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800C6DEC;
    }
    // 0x800C6DD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C6DD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C6DD8: addu        $at, $at, $t7
    gpr jr_addend_800C6DE0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C6DDC: lw          $t7, 0x58B0($at)
    ctx->r15 = ADD32(ctx->r1, 0X58B0);
    // 0x800C6DE0: jr          $t7
    // 0x800C6DE4: nop

    switch (jr_addend_800C6DE0 >> 2) {
        case 0: goto L_800C6DEC; break;
        case 1: goto L_800C6DEC; break;
        case 2: goto L_800C6DEC; break;
        case 3: goto L_800C6DEC; break;
        case 4: goto L_800C6DEC; break;
        case 5: goto L_800C6DEC; break;
        case 6: goto L_800C6DE8; break;
        case 7: goto L_800C6DEC; break;
        case 8: goto L_800C6DEC; break;
        case 9: goto L_800C6DEC; break;
        default: switch_error(__func__, 0x800C6DE0, 0x801258B0);
    }
    // 0x800C6DE4: nop

L_800C6DE8:
    // 0x800C6DE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C6DEC:
    // 0x800C6DEC: beql        $v1, $zero, L_800C6E00
    if (ctx->r3 == 0) {
        // 0x800C6DF0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_800C6E00;
    }
    goto skip_0;
    // 0x800C6DF0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_0:
    // 0x800C6DF4: jal         0x800FC6B0
    // 0x800C6DF8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800FC6B0(rdram, ctx);
        goto after_1;
    // 0x800C6DF8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
    // 0x800C6DFC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_800C6E00:
    // 0x800C6E00: jal         0x800C70D0
    // 0x800C6E04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_2;
    // 0x800C6E04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800C6E08:
    // 0x800C6E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C6E0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C6E10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C6E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6E20: jal         0x800DA298
    // 0x800C6E24: addiu       $a0, $a0, 0xEE
    ctx->r4 = ADD32(ctx->r4, 0XEE);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800C6E24: addiu       $a0, $a0, 0xEE
    ctx->r4 = ADD32(ctx->r4, 0XEE);
    after_0:
    // 0x800C6E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C6E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C6E30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6E38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C6E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6E40: jal         0x800DA298
    // 0x800C6E44: addiu       $a0, $a0, 0xED
    ctx->r4 = ADD32(ctx->r4, 0XED);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x800C6E44: addiu       $a0, $a0, 0xED
    ctx->r4 = ADD32(ctx->r4, 0XED);
    after_0:
    // 0x800C6E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C6E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C6E50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6E58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C6E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C6E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C6E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C6E6C: jal         0x800C70B0
    // 0x800C6E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_0;
    // 0x800C6E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800C6E74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C6E78: jal         0x800C70B0
    // 0x800C6E7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_1;
    // 0x800C6E7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C6E80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800C6E84: jal         0x800C70B0
    // 0x800C6E88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_2;
    // 0x800C6E88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C6E8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800C6E90: jal         0x800C70B0
    // 0x800C6E94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_3;
    // 0x800C6E94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800C6E98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800C6E9C: jal         0x800C70B0
    // 0x800C6EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_4;
    // 0x800C6EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x800C6EA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800C6EA8: jal         0x800C70B0
    // 0x800C6EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_5;
    // 0x800C6EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800C6EB0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800C6EB4: jal         0x800C70B0
    // 0x800C6EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_6;
    // 0x800C6EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800C6EBC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x800C6EC0: jal         0x800C70B0
    // 0x800C6EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_7;
    // 0x800C6EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x800C6EC8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800C6ECC: jal         0x800C70B0
    // 0x800C6ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_8;
    // 0x800C6ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800C6ED4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x800C6ED8: jal         0x800C70B0
    // 0x800C6EDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_9;
    // 0x800C6EDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x800C6EE0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x800C6EE4: jal         0x800C70B0
    // 0x800C6EE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_10;
    // 0x800C6EE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800C6EEC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x800C6EF0: jal         0x800C70B0
    // 0x800C6EF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_11;
    // 0x800C6EF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800C6EF8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x800C6EFC: jal         0x800C70B0
    // 0x800C6F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_12;
    // 0x800C6F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x800C6F04: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x800C6F08: jal         0x800C70B0
    // 0x800C6F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_13;
    // 0x800C6F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x800C6F10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x800C6F14: jal         0x800C70B0
    // 0x800C6F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_14;
    // 0x800C6F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x800C6F1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x800C6F20: jal         0x800C70B0
    // 0x800C6F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_15;
    // 0x800C6F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x800C6F28: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x800C6F2C: jal         0x800C70B0
    // 0x800C6F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_16;
    // 0x800C6F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x800C6F34: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x800C6F38: jal         0x800C70B0
    // 0x800C6F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_17;
    // 0x800C6F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x800C6F40: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x800C6F44: jal         0x800C70B0
    // 0x800C6F48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_18;
    // 0x800C6F48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x800C6F4C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x800C6F50: jal         0x800C70B0
    // 0x800C6F54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_19;
    // 0x800C6F54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x800C6F58: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x800C6F5C: jal         0x800C70B0
    // 0x800C6F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_20;
    // 0x800C6F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x800C6F64: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x800C6F68: jal         0x800C70D0
    // 0x800C6F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_21;
    // 0x800C6F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x800C6F70: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x800C6F74: jal         0x800C70D0
    // 0x800C6F78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_22;
    // 0x800C6F78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x800C6F7C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    // 0x800C6F80: jal         0x800C70D0
    // 0x800C6F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_23;
    // 0x800C6F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x800C6F88: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    // 0x800C6F8C: jal         0x800C70D0
    // 0x800C6F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_24;
    // 0x800C6F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x800C6F94: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800C6F98: jal         0x800C70D0
    // 0x800C6F9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_25;
    // 0x800C6F9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x800C6FA0: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x800C6FA4: jal         0x800C70D0
    // 0x800C6FA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_26;
    // 0x800C6FA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x800C6FAC: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    // 0x800C6FB0: jal         0x800C70D0
    // 0x800C6FB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_27;
    // 0x800C6FB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x800C6FB8: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    // 0x800C6FBC: jal         0x800C70D0
    // 0x800C6FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_28;
    // 0x800C6FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
    // 0x800C6FC4: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x800C6FC8: jal         0x800C70D0
    // 0x800C6FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_29;
    // 0x800C6FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_29:
    // 0x800C6FD0: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    // 0x800C6FD4: jal         0x800C70D0
    // 0x800C6FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_30;
    // 0x800C6FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x800C6FDC: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x800C6FE0: jal         0x800C70D0
    // 0x800C6FE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_31;
    // 0x800C6FE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x800C6FE8: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x800C6FEC: jal         0x800C70D0
    // 0x800C6FF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_32;
    // 0x800C6FF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
    // 0x800C6FF4: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x800C6FF8: jal         0x800C70D0
    // 0x800C6FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_33;
    // 0x800C6FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
    // 0x800C7000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7008: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7010: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C7014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C7018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C701C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C7020: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800C7024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C7028:
    // 0x800C7028: jal         0x800C70B0
    // 0x800C702C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70B0(rdram, ctx);
        goto after_0;
    // 0x800C702C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800C7030: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800C7034: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x800C7038: bnel        $at, $zero, L_800C7028
    if (ctx->r1 != 0) {
        // 0x800C703C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C7028;
    }
    goto skip_0;
    // 0x800C703C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800C7040: addiu       $s0, $zero, 0x3C
    ctx->r16 = ADD32(0, 0X3C);
    // 0x800C7044: addiu       $s1, $zero, 0x50
    ctx->r17 = ADD32(0, 0X50);
    // 0x800C7048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800C704C:
    // 0x800C704C: jal         0x800C70D0
    // 0x800C7050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C70D0(rdram, ctx);
        goto after_1;
    // 0x800C7050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C7054: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800C7058: bnel        $s0, $s1, L_800C704C
    if (ctx->r16 != ctx->r17) {
        // 0x800C705C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C704C;
    }
    goto skip_1;
    // 0x800C705C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800C7060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7064: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C7068: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C706C: jr          $ra
    // 0x800C7070: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C7070: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C7074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C707C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C7080: jal         0x800C70B0
    // 0x800C7084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800C70B0(rdram, ctx);
        goto after_0;
    // 0x800C7084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C7088: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800C708C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x800C7090: beql        $t6, $zero, L_800C70A4
    if (ctx->r14 == 0) {
        // 0x800C7094: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C70A4;
    }
    goto skip_0;
    // 0x800C7094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C7098: jal         0x80101238
    // 0x800C709C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_80101238(rdram, ctx);
        goto after_1;
    // 0x800C709C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800C70A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C70A4:
    // 0x800C70A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C70A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C70B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C70B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C70B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C70B8: jal         0x800DA3B8
    // 0x800C70BC: addiu       $a0, $a0, 0xED
    ctx->r4 = ADD32(ctx->r4, 0XED);
    func_800DA3B8(rdram, ctx);
        goto after_0;
    // 0x800C70BC: addiu       $a0, $a0, 0xED
    ctx->r4 = ADD32(ctx->r4, 0XED);
    after_0:
    // 0x800C70C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C70C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C70C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C70D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C70D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C70D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C70D8: jal         0x800DA3B8
    // 0x800C70DC: addiu       $a0, $a0, 0xEE
    ctx->r4 = ADD32(ctx->r4, 0XEE);
    func_800DA3B8(rdram, ctx);
        goto after_0;
    // 0x800C70DC: addiu       $a0, $a0, 0xEE
    ctx->r4 = ADD32(ctx->r4, 0XEE);
    after_0:
    // 0x800C70E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C70E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C70E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C70F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C70F0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C70F4: lw          $t6, -0x5520($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5520);
    // 0x800C70F8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800C70FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C7100: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C7104: jr          $ra
    // 0x800C7108: sw          $t6, -0x5530($at)
    MEM_W(-0X5530, ctx->r1) = ctx->r14;
    return;
    // 0x800C7108: sw          $t6, -0x5530($at)
    MEM_W(-0X5530, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800C710C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C710C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800C7110: addiu       $t7, $t7, -0x5530
    ctx->r15 = ADD32(ctx->r15, -0X5530);
    // 0x800C7114: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C7118: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800C711C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800C7120: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C7124: lw          $a1, -0x5520($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5520);
    // 0x800C7128: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x800C712C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C7130: sltu        $at, $t9, $a1
    ctx->r1 = ctx->r25 < ctx->r5 ? 1 : 0;
    // 0x800C7134: beql        $at, $zero, L_800C7148
    if (ctx->r1 == 0) {
            // 0x800C7138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    static_3_800C7148(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C7138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800C713C: jr          $ra
    // 0x800C7140: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    return;
    // 0x800C7140: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_800C7144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C7148: jr          $ra
    // 0x800C714C: nop

    return;
    // 0x800C714C: nop

;}
RECOMP_FUNC void func_800C7150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7158: jal         0x8001BAFC
    // 0x800C715C: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800C715C: nop

    after_0:
    // 0x800C7160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7168: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7170: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C7174: sw          $zero, -0x552C($at)
    MEM_W(-0X552C, ctx->r1) = 0;
    // 0x800C7178: sw          $zero, -0x5530($at)
    MEM_W(-0X5530, ctx->r1) = 0;
    // 0x800C717C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C7180: sw          $zero, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = 0;
    // 0x800C7184: jr          $ra
    // 0x800C7188: sw          $zero, -0x5524($at)
    MEM_W(-0X5524, ctx->r1) = 0;
    return;
    // 0x800C7188: sw          $zero, -0x5524($at)
    MEM_W(-0X5524, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800C718C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C718C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C7190: addiu       $v0, $v0, -0x5520
    ctx->r2 = ADD32(ctx->r2, -0X5520);
    // 0x800C7194: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800C7198: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800C719C: jr          $ra
    // 0x800C71A0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x800C71A0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800C71B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C71B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C71B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C71B8: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800C71BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C71C0: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x800C71C4: lhu         $v0, 0x6($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X6);
    // 0x800C71C8: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x800C71CC: srl         $t7, $v0, 7
    ctx->r15 = S32(U32(ctx->r2) >> 7);
    // 0x800C71D0: bne         $t7, $at, L_800C71E0
    if (ctx->r15 != ctx->r1) {
        // 0x800C71D4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800C71E0;
    }
    // 0x800C71D4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800C71D8: b           L_800C721C
    // 0x800C71DC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C721C;
    // 0x800C71DC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_800C71E0:
    // 0x800C71E0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800C71E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800C71E8: bgez        $v0, L_800C71FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800C71EC: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800C71FC;
    }
    // 0x800C71EC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C71F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C71F4: nop

    // 0x800C71F8: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_800C71FC:
    // 0x800C71FC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800C7200: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C7204: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C7208: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C720C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C7210: jal         0x800F10B4
    // 0x800C7214: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x800C7214: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x800C7218: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C721C:
    // 0x800C721C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C7224: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800C7228: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7238: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800C723C: jal         0x800C71B0
    // 0x800C7240: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_800C71B0(rdram, ctx);
        goto after_0;
    // 0x800C7240: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x800C7244: jal         0x800FF01C
    // 0x800C7248: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800FF01C(rdram, ctx);
        goto after_1;
    // 0x800C7248: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x800C724C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7254: jr          $ra
    // 0x800C7258: nop

    return;
    // 0x800C7258: nop

;}
RECOMP_FUNC void func_800C725C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C725C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7264: lui         $a1, 0x3F02
    ctx->r5 = S32(0X3F02 << 16);
    // 0x800C7268: jal         0x800C71B0
    // 0x800C726C: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    func_800C71B0(rdram, ctx);
        goto after_0;
    // 0x800C726C: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    after_0:
    // 0x800C7270: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C7274: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C7278: jal         0x800C4308
    // 0x800C727C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800C4308(rdram, ctx);
        goto after_1;
    // 0x800C727C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x800C7280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7288: jr          $ra
    // 0x800C728C: nop

    return;
    // 0x800C728C: nop

;}
RECOMP_FUNC void func_800C7290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7298: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800C729C: jal         0x800C71B0
    // 0x800C72A0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_800C71B0(rdram, ctx);
        goto after_0;
    // 0x800C72A0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x800C72A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800C72A8: jal         0x800FC9B4
    // 0x800C72AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800FC9B4(rdram, ctx);
        goto after_1;
    // 0x800C72AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800C72B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C72B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C72B8: jr          $ra
    // 0x800C72BC: nop

    return;
    // 0x800C72BC: nop

;}
RECOMP_FUNC void func_800C72C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C72C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C72C4: addiu       $v0, $v0, -0x56FC
    ctx->r2 = ADD32(ctx->r2, -0X56FC);
    // 0x800C72C8: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800C72CC: beq         $t6, $zero, L_800C72DC
    if (ctx->r14 == 0) {
        // 0x800C72D0: nop
    
            goto L_800C72DC;
    }
    // 0x800C72D0: nop

    // 0x800C72D4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800C72D8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_800C72DC:
    // 0x800C72DC: jr          $ra
    // 0x800C72E0: nop

    return;
    // 0x800C72E0: nop

;}
RECOMP_FUNC void func_800C72E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C72E4: jr          $ra
    // 0x800C72E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800C72E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800C72EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C72EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C72F0: addiu       $v0, $v0, -0x56FC
    ctx->r2 = ADD32(ctx->r2, -0X56FC);
    // 0x800C72F4: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800C72F8: beq         $t6, $zero, L_800C7308
    if (ctx->r14 == 0) {
        // 0x800C72FC: nop
    
            goto L_800C7308;
    }
    // 0x800C72FC: nop

    // 0x800C7300: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800C7304: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_800C7308:
    // 0x800C7308: jr          $ra
    // 0x800C730C: nop

    return;
    // 0x800C730C: nop

;}
RECOMP_FUNC void func_800C7310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C731C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C7320: jal         0x80087A90
    // 0x800C7324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gcgoto_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x800C7324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C7328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C732C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7330: jr          $ra
    // 0x800C7334: nop

    return;
    // 0x800C7334: nop

;}
RECOMP_FUNC void func_800C7338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7338: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C733C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7340: jal         0x80088290
    // 0x800C7344: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    _gccubesearch_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800C7344: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800C7348: beq         $v0, $zero, L_800C7358
    if (ctx->r2 == 0) {
        // 0x800C734C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C7358;
    }
    // 0x800C734C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7350: b           L_800C735C
    // 0x800C7354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C735C;
    // 0x800C7354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C7358:
    // 0x800C7358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C735C:
    // 0x800C735C: jr          $ra
    // 0x800C7360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C7360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C7364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C736C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C7370: jal         0x800C7338
    // 0x800C7374: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800C7338(rdram, ctx);
        goto after_0;
    // 0x800C7374: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800C7378: beq         $v0, $zero, L_800C7394
    if (ctx->r2 == 0) {
        // 0x800C737C: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_800C7394;
    }
    // 0x800C737C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800C7380: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800C7384: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7388: bnel        $t6, $zero, L_800C7398
    if (ctx->r14 != 0) {
        // 0x800C738C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C7398;
    }
    goto skip_0;
    // 0x800C738C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C7390: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_800C7394:
    // 0x800C7394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C7398:
    // 0x800C7398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C739C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C73A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C73A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C73A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C73AC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800C73B0: addiu       $s1, $s1, -0x5760
    ctx->r17 = ADD32(ctx->r17, -0X5760);
    // 0x800C73B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C73B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C73BC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800C73C0: jal         0x800FF000
    // 0x800C73C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800FF000(rdram, ctx);
        goto after_0;
    // 0x800C73C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800C73C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800C73CC: jal         0x800FC9B4
    // 0x800C73D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800FC9B4(rdram, ctx);
        goto after_1;
    // 0x800C73D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x800C73D4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
L_800C73D8:
    // 0x800C73D8: jal         0x800882E8
    // 0x800C73DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gccubesearch_entrypoint_14(rdram, ctx);
        goto after_2;
    // 0x800C73DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800C73E0: beq         $v0, $zero, L_800C73FC
    if (ctx->r2 == 0) {
        // 0x800C73E4: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_800C73FC;
    }
    // 0x800C73E4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800C73E8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800C73EC: beql        $v0, $zero, L_800C7400
    if (ctx->r2 == 0) {
        // 0x800C73F0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800C7400;
    }
    goto skip_0;
    // 0x800C73F0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x800C73F4: jalr        $v0
    // 0x800C73F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800C73F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_800C73FC:
    // 0x800C73FC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800C7400:
    // 0x800C7400: addiu       $t6, $s1, 0x64
    ctx->r14 = ADD32(ctx->r17, 0X64);
    // 0x800C7404: bnel        $s0, $t6, L_800C73D8
    if (ctx->r16 != ctx->r14) {
        // 0x800C7408: lh          $a0, 0x0($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X0);
            goto L_800C73D8;
    }
    goto skip_1;
    // 0x800C7408: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    skip_1:
    // 0x800C740C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x800C7410: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800C7414: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    // 0x800C7418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C741C: jal         0x800C7364
    // 0x800C7420: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_800C7364(rdram, ctx);
        goto after_4;
    // 0x800C7420: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_4:
    // 0x800C7424: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    // 0x800C7428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800C742C: jal         0x800C7364
    // 0x800C7430: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7364(rdram, ctx);
        goto after_5;
    // 0x800C7430: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x800C7434: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    // 0x800C7438: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800C743C: jal         0x800C7364
    // 0x800C7440: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7364(rdram, ctx);
        goto after_6;
    // 0x800C7440: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x800C7444: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x800C7448: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C744C: jal         0x800C7364
    // 0x800C7450: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7364(rdram, ctx);
        goto after_7;
    // 0x800C7450: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x800C7454: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    // 0x800C7458: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800C745C: jal         0x800C7364
    // 0x800C7460: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7364(rdram, ctx);
        goto after_8;
    // 0x800C7460: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x800C7464: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C7468: bnel        $a3, $zero, L_800C7478
    if (ctx->r7 != 0) {
        // 0x800C746C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_800C7478;
    }
    goto skip_2;
    // 0x800C746C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_2:
    // 0x800C7470: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x800C7474: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_800C7478:
    // 0x800C7478: jal         0x80015178
    // 0x800C747C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80015178(rdram, ctx);
        goto after_9;
    // 0x800C747C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_9:
    // 0x800C7480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7484: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C7488: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C748C: jr          $ra
    // 0x800C7490: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C7490: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C7494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7494: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C7498: lbu         $t6, -0x5510($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5510);
    // 0x800C749C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C74A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C74A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C74A8: beq         $t6, $zero, L_800C74EC
    if (ctx->r14 == 0) {
        // 0x800C74AC: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800C74EC;
    }
    // 0x800C74AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C74B0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800C74B4: addiu       $s1, $s1, -0x5760
    ctx->r17 = ADD32(ctx->r17, -0X5760);
    // 0x800C74B8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800C74BC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
L_800C74C0:
    // 0x800C74C0: beql        $t7, $zero, L_800C74E0
    if (ctx->r15 == 0) {
        // 0x800C74C4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800C74E0;
    }
    goto skip_0;
    // 0x800C74C4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x800C74C8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800C74CC: beql        $v0, $zero, L_800C74E0
    if (ctx->r2 == 0) {
        // 0x800C74D0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800C74E0;
    }
    goto skip_1;
    // 0x800C74D0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_1:
    // 0x800C74D4: jalr        $v0
    // 0x800C74D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800C74D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800C74DC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800C74E0:
    // 0x800C74E0: addiu       $t8, $s1, 0x64
    ctx->r24 = ADD32(ctx->r17, 0X64);
    // 0x800C74E4: bnel        $s0, $t8, L_800C74C0
    if (ctx->r16 != ctx->r24) {
        // 0x800C74E8: lw          $t7, 0x4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X4);
            goto L_800C74C0;
    }
    goto skip_2;
    // 0x800C74E8: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    skip_2:
L_800C74EC:
    // 0x800C74EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C74F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C74F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C74F8: jr          $ra
    // 0x800C74FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C74FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C7500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C7504: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C7508: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800C750C: addiu       $s1, $s1, -0x5760
    ctx->r17 = ADD32(ctx->r17, -0X5760);
    // 0x800C7510: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C7514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7518: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800C751C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
L_800C7520:
    // 0x800C7520: beql        $t6, $zero, L_800C7540
    if (ctx->r14 == 0) {
        // 0x800C7524: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800C7540;
    }
    goto skip_0;
    // 0x800C7524: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x800C7528: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x800C752C: beql        $v0, $zero, L_800C7540
    if (ctx->r2 == 0) {
        // 0x800C7530: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800C7540;
    }
    goto skip_1;
    // 0x800C7530: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_1:
    // 0x800C7534: jalr        $v0
    // 0x800C7538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800C7538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800C753C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800C7540:
    // 0x800C7540: addiu       $t7, $s1, 0x64
    ctx->r15 = ADD32(ctx->r17, 0X64);
    // 0x800C7544: bnel        $s0, $t7, L_800C7520
    if (ctx->r16 != ctx->r15) {
        // 0x800C7548: lw          $t6, 0x4($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X4);
            goto L_800C7520;
    }
    goto skip_2;
    // 0x800C7548: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x800C754C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C7550: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C7554: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800C7558: jal         0x800C4308
    // 0x800C755C: nop

    func_800C4308(rdram, ctx);
        goto after_1;
    // 0x800C755C: nop

    after_1:
    // 0x800C7560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7564: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C7568: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C756C: jr          $ra
    // 0x800C7570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C7570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C7574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7574: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C7578: bne         $a1, $at, L_800C7590
    if (ctx->r5 != ctx->r1) {
            // 0x800C757C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    func_800C7590(rdram, ctx);
    return;
    }
    // 0x800C757C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800C7580: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C7584: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C7588: jr          $ra
    // 0x800C758C: sb          $t6, -0x5510($at)
    MEM_B(-0X5510, ctx->r1) = ctx->r14;
    return;
    // 0x800C758C: sb          $t6, -0x5510($at)
    MEM_B(-0X5510, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800C7590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7590: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C7594: sb          $zero, -0x5510($at)
    MEM_B(-0X5510, ctx->r1) = 0;
    // 0x800C7598: jr          $ra
    // 0x800C759C: nop

    return;
    // 0x800C759C: nop

;}
RECOMP_FUNC void func_800C75A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C75A0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800C75A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C75A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800C75AC: jr          $ra
    // 0x800C75B0: lh          $v0, -0x56F0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X56F0);
    return;
    // 0x800C75B0: lh          $v0, -0x56F0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X56F0);
;}
RECOMP_FUNC void func_800C75B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C75B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C75B8: jr          $ra
    // 0x800C75BC: lbu         $v0, 0x760C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X760C);
    return;
    // 0x800C75BC: lbu         $v0, 0x760C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X760C);
;}
RECOMP_FUNC void func_800C75C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C75C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C75C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C75C8: jal         0x800C77DC
    // 0x800C75CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_0;
    // 0x800C75CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800C75D0: jal         0x800FC81C
    // 0x800C75D4: nop

    func_800FC81C(rdram, ctx);
        goto after_1;
    // 0x800C75D4: nop

    after_1:
    // 0x800C75D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C75DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C75E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C75E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C75E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C75EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C75F0: addiu       $v0, $v0, 0x760C
    ctx->r2 = ADD32(ctx->r2, 0X760C);
    // 0x800C75F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C75F8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800C75FC: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800C7600: jal         0x800C77DC
    // 0x800C7604: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_0;
    // 0x800C7604: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800C7608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C760C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7610: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7618: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C761C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C7620: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C7624: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7628: beq         $a1, $zero, L_800C76B0
    if (ctx->r5 == 0) {
        // 0x800C762C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_800C76B0;
    }
    // 0x800C762C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800C7630: jal         0x800FCCD4
    // 0x800C7634: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800FCCD4(rdram, ctx);
        goto after_0;
    // 0x800C7634: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C7638: beq         $v0, $zero, L_800C7694
    if (ctx->r2 == 0) {
        // 0x800C763C: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_800C7694;
    }
    // 0x800C763C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800C7640: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C7644: bne         $a3, $at, L_800C7668
    if (ctx->r7 != ctx->r1) {
        // 0x800C7648: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800C7668;
    }
    // 0x800C7648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C764C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C7650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C7654: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x800C7658: jal         0x800FCDE0
    // 0x800C765C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800FCDE0(rdram, ctx);
        goto after_1;
    // 0x800C765C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x800C7660: b           L_800C767C
    // 0x800C7664: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
        goto L_800C767C;
    // 0x800C7664: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
L_800C7668:
    // 0x800C7668: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800C766C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x800C7670: jal         0x800FCDE0
    // 0x800C7674: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800FCDE0(rdram, ctx);
        goto after_2;
    // 0x800C7674: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x800C7678: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
L_800C767C:
    // 0x800C767C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C7680: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800C7684: jal         0x800FCAE0
    // 0x800C7688: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    func_800FCAE0(rdram, ctx);
        goto after_3;
    // 0x800C7688: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    after_3:
    // 0x800C768C: b           L_800C76D8
    // 0x800C7690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C76D8;
    // 0x800C7690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C7694:
    // 0x800C7694: jal         0x800FC660
    // 0x800C7698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FC660(rdram, ctx);
        goto after_4;
    // 0x800C7698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800C769C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C76A0: jal         0x800FC788
    // 0x800C76A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800FC788(rdram, ctx);
        goto after_5;
    // 0x800C76A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800C76A8: b           L_800C76D8
    // 0x800C76AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800C76D8;
    // 0x800C76AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C76B0:
    // 0x800C76B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C76B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800C76B8: jal         0x800FCAE0
    // 0x800C76BC: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    func_800FCAE0(rdram, ctx);
        goto after_6;
    // 0x800C76BC: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    after_6:
    // 0x800C76C0: jal         0x800FCA90
    // 0x800C76C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FCA90(rdram, ctx);
        goto after_7;
    // 0x800C76C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800C76C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C76CC: jal         0x800FC788
    // 0x800C76D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800FC788(rdram, ctx);
        goto after_8;
    // 0x800C76D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800C76D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C76D8:
    // 0x800C76D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C76DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C76E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C76E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C76E8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C76EC: addiu       $a1, $a1, 0x760C
    ctx->r5 = ADD32(ctx->r5, 0X760C);
    // 0x800C76F0: lb          $v1, 0x1($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X1);
    // 0x800C76F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C76F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C76FC: bnel        $v1, $zero, L_800C774C
    if (ctx->r3 != 0) {
        // 0x800C7700: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C774C;
    }
    goto skip_0;
    // 0x800C7700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C7704: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x800C7708: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C770C: beql        $a0, $zero, L_800C774C
    if (ctx->r4 == 0) {
        // 0x800C7710: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C774C;
    }
    goto skip_1;
    // 0x800C7710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800C7714: beql        $a0, $at, L_800C774C
    if (ctx->r4 == ctx->r1) {
        // 0x800C7718: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C774C;
    }
    goto skip_2;
    // 0x800C7718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800C771C: jal         0x800C75A0
    // 0x800C7720: nop

    func_800C75A0(rdram, ctx);
        goto after_0;
    // 0x800C7720: nop

    after_0:
    // 0x800C7724: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C7728: jal         0x800C7618
    // 0x800C772C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C7618(rdram, ctx);
        goto after_1;
    // 0x800C772C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C7730: jal         0x800FECB8
    // 0x800C7734: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800FECB8(rdram, ctx);
        goto after_2;
    // 0x800C7734: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x800C7738: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C773C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C7740: addiu       $a1, $a1, 0x760C
    ctx->r5 = ADD32(ctx->r5, 0X760C);
    // 0x800C7744: lb          $v1, 0x760D($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X760D);
    // 0x800C7748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C774C:
    // 0x800C774C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x800C7750: sb          $t6, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r14;
    // 0x800C7754: jr          $ra
    // 0x800C7758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800C7758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800C775C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C775C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800C7760: addiu       $a2, $a2, 0x760C
    ctx->r6 = ADD32(ctx->r6, 0X760C);
    // 0x800C7764: lb          $v1, 0x1($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X1);
    // 0x800C7768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C776C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C7770: bne         $a1, $v1, L_800C77B4
    if (ctx->r5 != ctx->r3) {
        // 0x800C7774: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C77B4;
    }
    // 0x800C7774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7778: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x800C777C: beql        $a0, $zero, L_800C77B8
    if (ctx->r4 == 0) {
        // 0x800C7780: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_800C77B8;
    }
    goto skip_0;
    // 0x800C7780: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x800C7784: beql        $a0, $a1, L_800C77B8
    if (ctx->r4 == ctx->r5) {
        // 0x800C7788: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_800C77B8;
    }
    goto skip_1;
    // 0x800C7788: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    skip_1:
    // 0x800C778C: jal         0x800C75A0
    // 0x800C7790: nop

    func_800C75A0(rdram, ctx);
        goto after_0;
    // 0x800C7790: nop

    after_0:
    // 0x800C7794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C7798: jal         0x800C7618
    // 0x800C779C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800C7618(rdram, ctx);
        goto after_1;
    // 0x800C779C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x800C77A0: jal         0x800FEC60
    // 0x800C77A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800FEC60(rdram, ctx);
        goto after_2;
    // 0x800C77A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x800C77A8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800C77AC: addiu       $a2, $a2, 0x760C
    ctx->r6 = ADD32(ctx->r6, 0X760C);
    // 0x800C77B0: lb          $v1, 0x1($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X1);
L_800C77B4:
    // 0x800C77B4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
L_800C77B8:
    // 0x800C77B8: sb          $t6, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r14;
    // 0x800C77BC: lb          $t7, 0x1($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X1);
    // 0x800C77C0: bgezl       $t7, L_800C77D0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800C77C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C77D0;
    }
    goto skip_2;
    // 0x800C77C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800C77C8: sb          $zero, 0x1($a2)
    MEM_B(0X1, ctx->r6) = 0;
    // 0x800C77CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C77D0:
    // 0x800C77D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C77D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C77DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C77DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C77E0: addiu       $v1, $v1, 0x760C
    ctx->r3 = ADD32(ctx->r3, 0X760C);
    // 0x800C77E4: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x800C77E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C77EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C77F0: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x800C77F4: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x800C77F8: beq         $at, $zero, L_800C7840
    if (ctx->r1 == 0) {
        // 0x800C77FC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800C7840;
    }
    // 0x800C77FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C7800: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C7804: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C7808: addu        $at, $at, $t6
    gpr jr_addend_800C7810 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C780C: lw          $t6, 0x58E0($at)
    ctx->r14 = ADD32(ctx->r1, 0X58E0);
    // 0x800C7810: jr          $t6
    // 0x800C7814: nop

    switch (jr_addend_800C7810 >> 2) {
        case 0: goto L_800C7840; break;
        case 1: goto L_800C7818; break;
        case 2: goto L_800C7818; break;
        case 3: goto L_800C7818; break;
        case 4: goto L_800C7818; break;
        case 5: goto L_800C7818; break;
        case 6: goto L_800C7818; break;
        case 7: goto L_800C7818; break;
        default: switch_error(__func__, 0x800C7810, 0x801258E0);
    }
    // 0x800C7814: nop

L_800C7818:
    // 0x800C7818: jal         0x800C75A0
    // 0x800C781C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800C75A0(rdram, ctx);
        goto after_0;
    // 0x800C781C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800C7820: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C7824: jal         0x800C7618
    // 0x800C7828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C7618(rdram, ctx);
        goto after_1;
    // 0x800C7828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C782C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C7830: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C7834: addiu       $v1, $v1, 0x760C
    ctx->r3 = ADD32(ctx->r3, 0X760C);
    // 0x800C7838: b           L_800C7864
    // 0x800C783C: lb          $v0, 0x760D($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X760D);
        goto L_800C7864;
    // 0x800C783C: lb          $v0, 0x760D($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X760D);
L_800C7840:
    // 0x800C7840: lb          $v0, 0x1($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X1);
    // 0x800C7844: bnel        $v0, $zero, L_800C7868
    if (ctx->r2 != 0) {
        // 0x800C7848: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_800C7868;
    }
    goto skip_0;
    // 0x800C7848: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x800C784C: jal         0x800FEC60
    // 0x800C7850: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800FEC60(rdram, ctx);
        goto after_2;
    // 0x800C7850: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x800C7854: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C7858: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C785C: addiu       $v1, $v1, 0x760C
    ctx->r3 = ADD32(ctx->r3, 0X760C);
    // 0x800C7860: lb          $v0, 0x760D($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X760D);
L_800C7864:
    // 0x800C7864: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_800C7868:
    // 0x800C7868: bne         $v0, $zero, L_800C78BC
    if (ctx->r2 != 0) {
        // 0x800C786C: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_800C78BC;
    }
    // 0x800C786C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x800C7870: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x800C7874: addiu       $t8, $a1, -0x1
    ctx->r24 = ADD32(ctx->r5, -0X1);
    // 0x800C7878: sltiu       $at, $t8, 0x8
    ctx->r1 = ctx->r24 < 0X8 ? 1 : 0;
    // 0x800C787C: beq         $at, $zero, L_800C78B4
    if (ctx->r1 == 0) {
        // 0x800C7880: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_800C78B4;
    }
    // 0x800C7880: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C7884: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C7888: addu        $at, $at, $t8
    gpr jr_addend_800C7890 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C788C: lw          $t8, 0x5900($at)
    ctx->r24 = ADD32(ctx->r1, 0X5900);
    // 0x800C7890: jr          $t8
    // 0x800C7894: nop

    switch (jr_addend_800C7890 >> 2) {
        case 0: goto L_800C78B4; break;
        case 1: goto L_800C7898; break;
        case 2: goto L_800C7898; break;
        case 3: goto L_800C7898; break;
        case 4: goto L_800C7898; break;
        case 5: goto L_800C7898; break;
        case 6: goto L_800C7898; break;
        case 7: goto L_800C7898; break;
        default: switch_error(__func__, 0x800C7890, 0x80125900);
    }
    // 0x800C7894: nop

L_800C7898:
    // 0x800C7898: jal         0x800C75A0
    // 0x800C789C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800C75A0(rdram, ctx);
        goto after_3;
    // 0x800C789C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x800C78A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C78A4: jal         0x800C7618
    // 0x800C78A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800C7618(rdram, ctx);
        goto after_4;
    // 0x800C78A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
    // 0x800C78AC: b           L_800C78C0
    // 0x800C78B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C78C0;
    // 0x800C78B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C78B4:
    // 0x800C78B4: jal         0x800FECB8
    // 0x800C78B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800FECB8(rdram, ctx);
        goto after_5;
    // 0x800C78B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
L_800C78BC:
    // 0x800C78BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C78C0:
    // 0x800C78C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C78C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C78CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C78CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C78D0: beq         $a0, $zero, L_800C78E8
    if (ctx->r4 == 0) {
        // 0x800C78D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C78E8;
    }
    // 0x800C78D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C78D8: jal         0x800C76E8
    // 0x800C78DC: nop

    func_800C76E8(rdram, ctx);
        goto after_0;
    // 0x800C78DC: nop

    after_0:
    // 0x800C78E0: b           L_800C78F4
    // 0x800C78E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C78F4;
    // 0x800C78E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C78E8:
    // 0x800C78E8: jal         0x800C775C
    // 0x800C78EC: nop

    func_800C775C(rdram, ctx);
        goto after_1;
    // 0x800C78EC: nop

    after_1:
    // 0x800C78F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C78F4:
    // 0x800C78F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C78F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7900: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C7904: addiu       $v1, $v1, 0x760C
    ctx->r3 = ADD32(ctx->r3, 0X760C);
    // 0x800C7908: lb          $t6, 0x1($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X1);
    // 0x800C790C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C7910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7914: bnel        $t6, $zero, L_800C7968
    if (ctx->r14 != 0) {
        // 0x800C7918: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C7968;
    }
    goto skip_0;
    // 0x800C7918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C791C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x800C7920: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x800C7924: bnel        $at, $zero, L_800C7968
    if (ctx->r1 != 0) {
        // 0x800C7928: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C7968;
    }
    goto skip_1;
    // 0x800C7928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800C792C: jal         0x8001210C
    // 0x800C7930: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001210C(rdram, ctx);
        goto after_0;
    // 0x800C7930: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x800C7934: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C7938: beq         $v0, $zero, L_800C7964
    if (ctx->r2 == 0) {
        // 0x800C793C: addiu       $v1, $v1, 0x760C
        ctx->r3 = ADD32(ctx->r3, 0X760C);
            goto L_800C7964;
    }
    // 0x800C793C: addiu       $v1, $v1, 0x760C
    ctx->r3 = ADD32(ctx->r3, 0X760C);
    // 0x800C7940: jal         0x800C75A0
    // 0x800C7944: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    func_800C75A0(rdram, ctx);
        goto after_1;
    // 0x800C7944: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    after_1:
    // 0x800C7948: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800C794C: jal         0x800FCCD4
    // 0x800C7950: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800FCCD4(rdram, ctx);
        goto after_2;
    // 0x800C7950: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800C7954: bne         $v0, $zero, L_800C7964
    if (ctx->r2 != 0) {
        // 0x800C7958: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800C7964;
    }
    // 0x800C7958: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C795C: jal         0x800C7618
    // 0x800C7960: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800C7618(rdram, ctx);
        goto after_3;
    // 0x800C7960: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
L_800C7964:
    // 0x800C7964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C7968:
    // 0x800C7968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C796C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7980: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x800C7984: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x800C7988: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800C798C: beql        $at, $zero, L_800C79A0
    if (ctx->r1 == 0) {
            // 0x800C7990: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    static_3_800C79A0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C7990: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x800C7994: jr          $ra
    // 0x800C7998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800C7998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800C799C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C799C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C79A0: bnel        $v0, $at, L_800C79B8
    if (ctx->r2 != ctx->r1) {
            // 0x800C79A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    static_3_800C79B8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C79A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x800C79A8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C79AC: jr          $ra
    // 0x800C79B0: addiu       $v0, $v0, -0x6EF8
    ctx->r2 = ADD32(ctx->r2, -0X6EF8);
    return;
    // 0x800C79B0: addiu       $v0, $v0, -0x6EF8
    ctx->r2 = ADD32(ctx->r2, -0X6EF8);
;}
RECOMP_FUNC void func_800C79B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C79B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C79B8: bne         $v0, $at, L_800C79C8
    if (ctx->r2 != ctx->r1) {
            // 0x800C79BC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    func_800C79C8(rdram, ctx);
    return;
    }
    // 0x800C79BC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C79C0: jr          $ra
    // 0x800C79C4: addiu       $v0, $v0, -0x6EF0
    ctx->r2 = ADD32(ctx->r2, -0X6EF0);
    return;
    // 0x800C79C4: addiu       $v0, $v0, -0x6EF0
    ctx->r2 = ADD32(ctx->r2, -0X6EF0);
;}
RECOMP_FUNC void func_800C79C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C79C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C79CC: bne         $v1, $at, L_800C79E0
    if (ctx->r3 != ctx->r1) {
            // 0x800C79D0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    func_800C79E0(rdram, ctx);
    return;
    }
    // 0x800C79D0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C79D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C79D8: jr          $ra
    // 0x800C79DC: addiu       $v0, $v0, -0x6ED8
    ctx->r2 = ADD32(ctx->r2, -0X6ED8);
    return;
    // 0x800C79DC: addiu       $v0, $v0, -0x6ED8
    ctx->r2 = ADD32(ctx->r2, -0X6ED8);
;}
RECOMP_FUNC void func_800C79E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C79E0: addiu       $v0, $v0, -0x6EE8
    ctx->r2 = ADD32(ctx->r2, -0X6EE8);
    // 0x800C79E4: jr          $ra
    // 0x800C79E8: nop

    return;
    // 0x800C79E8: nop

;}
RECOMP_FUNC void func_800C79EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C79EC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x800C79F0: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x800C79F4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800C79F8: beql        $at, $zero, L_800C7A0C
    if (ctx->r1 == 0) {
            // 0x800C79FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    static_3_800C7A0C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C79FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x800C7A00: jr          $ra
    // 0x800C7A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800C7A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800C7A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C7A0C: bnel        $v0, $at, L_800C7A24
    if (ctx->r2 != ctx->r1) {
            // 0x800C7A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    static_3_800C7A24(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C7A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x800C7A14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C7A18: jr          $ra
    // 0x800C7A1C: addiu       $v0, $v0, -0x6F28
    ctx->r2 = ADD32(ctx->r2, -0X6F28);
    return;
    // 0x800C7A1C: addiu       $v0, $v0, -0x6F28
    ctx->r2 = ADD32(ctx->r2, -0X6F28);
;}
RECOMP_FUNC void func_800C7A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C7A24: bne         $v0, $at, L_800C7A34
    if (ctx->r2 != ctx->r1) {
            // 0x800C7A28: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    func_800C7A34(rdram, ctx);
    return;
    }
    // 0x800C7A28: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C7A2C: jr          $ra
    // 0x800C7A30: addiu       $v0, $v0, -0x6F18
    ctx->r2 = ADD32(ctx->r2, -0X6F18);
    return;
    // 0x800C7A30: addiu       $v0, $v0, -0x6F18
    ctx->r2 = ADD32(ctx->r2, -0X6F18);
;}
RECOMP_FUNC void func_800C7A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C7A38: bne         $v1, $at, L_800C7A4C
    if (ctx->r3 != ctx->r1) {
            // 0x800C7A3C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    func_800C7A4C(rdram, ctx);
    return;
    }
    // 0x800C7A3C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C7A40: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C7A44: jr          $ra
    // 0x800C7A48: addiu       $v0, $v0, -0x6F00
    ctx->r2 = ADD32(ctx->r2, -0X6F00);
    return;
    // 0x800C7A48: addiu       $v0, $v0, -0x6F00
    ctx->r2 = ADD32(ctx->r2, -0X6F00);
;}
RECOMP_FUNC void func_800C7A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A4C: addiu       $v0, $v0, -0x6F08
    ctx->r2 = ADD32(ctx->r2, -0X6F08);
    // 0x800C7A50: jr          $ra
    // 0x800C7A54: nop

    return;
    // 0x800C7A54: nop

;}
RECOMP_FUNC void func_800C7A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A68: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C7A6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800C7A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7A78: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800C7A7C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C7A80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C7A84: bc1fl       L_800C7A98
    if (!c1cs) {
        // 0x800C7A88: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800C7A98;
    }
    goto skip_0;
    // 0x800C7A88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x800C7A8C: b           L_800C7AB0
    // 0x800C7A90: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_800C7AB0;
    // 0x800C7A90: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800C7A94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800C7A98:
    // 0x800C7A98: nop

    // 0x800C7A9C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800C7AA0: nop

    // 0x800C7AA4: bc1fl       L_800C7AB4
    if (!c1cs) {
        // 0x800C7AA8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800C7AB4;
    }
    goto skip_1;
    // 0x800C7AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_1:
    // 0x800C7AAC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_800C7AB0:
    // 0x800C7AB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_800C7AB4:
    // 0x800C7AB4: jal         0x800C79EC
    // 0x800C7AB8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800C79EC(rdram, ctx);
        goto after_0;
    // 0x800C7AB8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800C7ABC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800C7AC0: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C7AC4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800C7AC8: lbu         $a1, 0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2);
    // 0x800C7ACC: jalr        $v0
    // 0x800C7AD0: addiu       $a2, $a0, 0x14
    ctx->r6 = ADD32(ctx->r4, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800C7AD0: addiu       $a2, $a0, 0x14
    ctx->r6 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x800C7AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7ADC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7AE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C7AE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7AEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C7AF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C7AF4: jal         0x800C7980
    // 0x800C7AF8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800C7980(rdram, ctx);
        goto after_0;
    // 0x800C7AF8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800C7AFC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800C7B00: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C7B04: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C7B08: lbu         $a0, 0x2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2);
    // 0x800C7B0C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800C7B10: jal         0x80089130
    // 0x800C7B14: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    _mlspline_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x800C7B14: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    after_1:
    // 0x800C7B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7B1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C7B20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7B28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C7B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7B30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C7B34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C7B38: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C7B3C: jal         0x800C7980
    // 0x800C7B40: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800C7980(rdram, ctx);
        goto after_0;
    // 0x800C7B40: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C7B44: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800C7B48: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7B4C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C7B50: lbu         $a0, 0x2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2);
    // 0x800C7B54: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800C7B58: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C7B5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800C7B60: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C7B64: jal         0x80089138
    // 0x800C7B68: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    _mlspline_entrypoint_12(rdram, ctx);
        goto after_1;
    // 0x800C7B68: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    after_1:
    // 0x800C7B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C7B74: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7B7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C7B80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7B84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C7B88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C7B8C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C7B90: jal         0x800C7980
    // 0x800C7B94: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800C7980(rdram, ctx);
        goto after_0;
    // 0x800C7B94: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C7B98: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800C7B9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C7BA0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C7BA4: lbu         $a0, 0x2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2);
    // 0x800C7BA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800C7BAC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C7BB0: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x800C7BB4: jal         0x80089140
    // 0x800C7BB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    _mlspline_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x800C7BB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800C7BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C7BC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C7BC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C7BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7BCC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x800C7BD0: addiu       $a2, $a0, 0x14
    ctx->r6 = ADD32(ctx->r4, 0X14);
    // 0x800C7BD4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x800C7BD8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800C7BDC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x800C7BE0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C7BE4: addu        $t0, $t6, $a0
    ctx->r8 = ADD32(ctx->r14, ctx->r4);
    // 0x800C7BE8: addiu       $t1, $t0, 0x14
    ctx->r9 = ADD32(ctx->r8, 0X14);
    // 0x800C7BEC: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800C7BF0: beq         $a0, $t0, L_800C7E14
    if (ctx->r4 == ctx->r8) {
        // 0x800C7BF4: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_800C7E14;
    }
    // 0x800C7BF4: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x800C7BF8: subu        $t0, $t1, $a2
    ctx->r8 = SUB32(ctx->r9, ctx->r6);
    // 0x800C7BFC: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x800C7C00: divu        $zero, $t0, $at
    lo = S32(U32(ctx->r8) / U32(ctx->r1)); hi = S32(U32(ctx->r8) % U32(ctx->r1));
    // 0x800C7C04: mfhi        $t7
    ctx->r15 = hi;
    // 0x800C7C08: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    // 0x800C7C0C: beql        $t7, $zero, L_800C7C8C
    if (ctx->r15 == 0) {
        // 0x800C7C10: lwc1        $f0, 0x0($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
            goto L_800C7C8C;
    }
    goto skip_0;
    // 0x800C7C10: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x800C7C14: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
L_800C7C18:
    // 0x800C7C18: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800C7C1C: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800C7C20: nop

    // 0x800C7C24: bc1fl       L_800C7C78
    if (!c1cs) {
        // 0x800C7C28: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_800C7C78;
    }
    goto skip_1;
    // 0x800C7C28: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    skip_1:
    // 0x800C7C2C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800C7C30: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800C7C34: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800C7C38: nop

    // 0x800C7C3C: bc1fl       L_800C7C78
    if (!c1cs) {
        // 0x800C7C40: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_800C7C78;
    }
    goto skip_2;
    // 0x800C7C40: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    skip_2:
    // 0x800C7C44: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800C7C48: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800C7C4C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800C7C50: nop

    // 0x800C7C54: bc1f        L_800C7C74
    if (!c1cs) {
        // 0x800C7C58: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_800C7C74;
    }
    // 0x800C7C58: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800C7C5C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C7C60: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800C7C64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C7C68: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C7C6C: jr          $ra
    // 0x800C7C70: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    return;
    // 0x800C7C70: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
L_800C7C74:
    // 0x800C7C74: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_800C7C78:
    // 0x800C7C78: bne         $a0, $v1, L_800C7C18
    if (ctx->r4 != ctx->r3) {
        // 0x800C7C7C: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_800C7C18;
    }
    // 0x800C7C7C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800C7C80: beql        $v1, $t1, L_800C7E18
    if (ctx->r3 == ctx->r9) {
        // 0x800C7C84: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_800C7E18;
    }
    goto skip_3;
    // 0x800C7C84: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_3:
    // 0x800C7C88: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
L_800C7C8C:
    // 0x800C7C8C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800C7C90: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x800C7C94: nop

    // 0x800C7C98: bc1fl       L_800C7CEC
    if (!c1cs) {
        // 0x800C7C9C: lwc1        $f6, 0xC($v1)
        ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
            goto L_800C7CEC;
    }
    goto skip_4;
    // 0x800C7C9C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    skip_4:
    // 0x800C7CA0: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800C7CA4: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800C7CA8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800C7CAC: nop

    // 0x800C7CB0: bc1fl       L_800C7CEC
    if (!c1cs) {
        // 0x800C7CB4: lwc1        $f6, 0xC($v1)
        ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
            goto L_800C7CEC;
    }
    goto skip_5;
    // 0x800C7CB4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    skip_5:
    // 0x800C7CB8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800C7CBC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800C7CC0: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x800C7CC4: nop

    // 0x800C7CC8: bc1f        L_800C7CE8
    if (!c1cs) {
        // 0x800C7CCC: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_800C7CE8;
    }
    // 0x800C7CCC: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x800C7CD0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800C7CD4: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800C7CD8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C7CDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C7CE0: jr          $ra
    // 0x800C7CE4: div.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    return;
    // 0x800C7CE4: div.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
L_800C7CE8:
    // 0x800C7CE8: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
L_800C7CEC:
    // 0x800C7CEC: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800C7CF0: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x800C7CF4: nop

    // 0x800C7CF8: bc1fl       L_800C7D4C
    if (!c1cs) {
        // 0x800C7CFC: lwc1        $f16, 0x18($v1)
        ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
            goto L_800C7D4C;
    }
    goto skip_6;
    // 0x800C7CFC: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    skip_6:
    // 0x800C7D00: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x800C7D04: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800C7D08: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x800C7D0C: nop

    // 0x800C7D10: bc1fl       L_800C7D4C
    if (!c1cs) {
        // 0x800C7D14: lwc1        $f16, 0x18($v1)
        ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
            goto L_800C7D4C;
    }
    goto skip_7;
    // 0x800C7D14: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    skip_7:
    // 0x800C7D18: lwc1        $f16, 0x14($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X14);
    // 0x800C7D1C: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800C7D20: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x800C7D24: nop

    // 0x800C7D28: bc1f        L_800C7D48
    if (!c1cs) {
        // 0x800C7D2C: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_800C7D48;
    }
    // 0x800C7D2C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x800C7D30: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800C7D34: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800C7D38: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C7D3C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C7D40: jr          $ra
    // 0x800C7D44: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x800C7D44: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
L_800C7D48:
    // 0x800C7D48: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
L_800C7D4C:
    // 0x800C7D4C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800C7D50: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x800C7D54: nop

    // 0x800C7D58: bc1fl       L_800C7DAC
    if (!c1cs) {
        // 0x800C7D5C: lwc1        $f4, 0x24($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
            goto L_800C7DAC;
    }
    goto skip_8;
    // 0x800C7D5C: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    skip_8:
    // 0x800C7D60: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x800C7D64: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800C7D68: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x800C7D6C: nop

    // 0x800C7D70: bc1fl       L_800C7DAC
    if (!c1cs) {
        // 0x800C7D74: lwc1        $f4, 0x24($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
            goto L_800C7DAC;
    }
    goto skip_9;
    // 0x800C7D74: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    skip_9:
    // 0x800C7D78: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x800C7D7C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800C7D80: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800C7D84: nop

    // 0x800C7D88: bc1f        L_800C7DA8
    if (!c1cs) {
        // 0x800C7D8C: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_800C7DA8;
    }
    // 0x800C7D8C: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x800C7D90: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800C7D94: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800C7D98: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C7D9C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C7DA0: jr          $ra
    // 0x800C7DA4: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    return;
    // 0x800C7DA4: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
L_800C7DA8:
    // 0x800C7DA8: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
L_800C7DAC:
    // 0x800C7DAC: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800C7DB0: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800C7DB4: nop

    // 0x800C7DB8: bc1fl       L_800C7E0C
    if (!c1cs) {
        // 0x800C7DBC: addiu       $v1, $v1, 0x30
        ctx->r3 = ADD32(ctx->r3, 0X30);
            goto L_800C7E0C;
    }
    goto skip_10;
    // 0x800C7DBC: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    skip_10:
    // 0x800C7DC0: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x800C7DC4: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800C7DC8: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800C7DCC: nop

    // 0x800C7DD0: bc1fl       L_800C7E0C
    if (!c1cs) {
        // 0x800C7DD4: addiu       $v1, $v1, 0x30
        ctx->r3 = ADD32(ctx->r3, 0X30);
            goto L_800C7E0C;
    }
    goto skip_11;
    // 0x800C7DD4: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    skip_11:
    // 0x800C7DD8: lwc1        $f10, 0x2C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x800C7DDC: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800C7DE0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800C7DE4: nop

    // 0x800C7DE8: bc1f        L_800C7E08
    if (!c1cs) {
        // 0x800C7DEC: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_800C7E08;
    }
    // 0x800C7DEC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x800C7DF0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800C7DF4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800C7DF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C7DFC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C7E00: jr          $ra
    // 0x800C7E04: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    return;
    // 0x800C7E04: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
L_800C7E08:
    // 0x800C7E08: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
L_800C7E0C:
    // 0x800C7E0C: bne         $v1, $a3, L_800C7C8C
    if (ctx->r3 != ctx->r7) {
        // 0x800C7E10: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_800C7C8C;
    }
    // 0x800C7E10: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_800C7E14:
    // 0x800C7E14: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_800C7E18:
    // 0x800C7E18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800C7E1C: nop

    // 0x800C7E20: jr          $ra
    // 0x800C7E24: nop

    return;
    // 0x800C7E24: nop

;}
RECOMP_FUNC void func_800C7E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7E28: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x800C7E2C: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x800C7E30: addiu       $t7, $a0, 0xC
    ctx->r15 = ADD32(ctx->r4, 0XC);
    // 0x800C7E34: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800C7E38: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x800C7E3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C7E40: addu        $a3, $t6, $a0
    ctx->r7 = ADD32(ctx->r14, ctx->r4);
    // 0x800C7E44: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x800C7E48: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800C7E4C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800C7E50: beq         $t7, $a3, L_800C7FB8
    if (ctx->r15 == ctx->r7) {
        // 0x800C7E54: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_800C7FB8;
    }
    // 0x800C7E54: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x800C7E58: subu        $a3, $t0, $a1
    ctx->r7 = SUB32(ctx->r8, ctx->r5);
    // 0x800C7E5C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800C7E60: divu        $zero, $a3, $at
    lo = S32(U32(ctx->r7) / U32(ctx->r1)); hi = S32(U32(ctx->r7) % U32(ctx->r1));
    // 0x800C7E64: mfhi        $t8
    ctx->r24 = hi;
    // 0x800C7E68: beql        $t8, $zero, L_800C7EE8
    if (ctx->r24 == 0) {
        // 0x800C7E6C: lwc1        $f0, 0x0($t0)
        ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
            goto L_800C7EE8;
    }
    goto skip_0;
    // 0x800C7E6C: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    skip_0:
    // 0x800C7E70: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800C7E74: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800C7E78: addiu       $v1, $a1, 0xC
    ctx->r3 = ADD32(ctx->r5, 0XC);
    // 0x800C7E7C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800C7E80: nop

    // 0x800C7E84: bc1f        L_800C7EDC
    if (!c1cs) {
        // 0x800C7E88: nop
    
            goto L_800C7EDC;
    }
    // 0x800C7E88: nop

    // 0x800C7E8C: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800C7E90: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800C7E94: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800C7E98: nop

    // 0x800C7E9C: bc1f        L_800C7EDC
    if (!c1cs) {
        // 0x800C7EA0: nop
    
            goto L_800C7EDC;
    }
    // 0x800C7EA0: nop

    // 0x800C7EA4: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800C7EA8: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800C7EAC: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x800C7EB0: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800C7EB4: nop

    // 0x800C7EB8: bc1f        L_800C7EDC
    if (!c1cs) {
        // 0x800C7EBC: nop
    
            goto L_800C7EDC;
    }
    // 0x800C7EBC: nop

    // 0x800C7EC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C7EC4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C7EC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C7ECC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C7ED0: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800C7ED4: jr          $ra
    // 0x800C7ED8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x800C7ED8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
L_800C7EDC:
    // 0x800C7EDC: beq         $v1, $t0, L_800C7FB8
    if (ctx->r3 == ctx->r8) {
        // 0x800C7EE0: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_800C7FB8;
    }
    // 0x800C7EE0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C7EE4: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
L_800C7EE8:
    // 0x800C7EE8: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800C7EEC: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x800C7EF0: nop

    // 0x800C7EF4: bc1fl       L_800C7F4C
    if (!c1cs) {
        // 0x800C7EF8: lwc1        $f8, 0xC($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
            goto L_800C7F4C;
    }
    goto skip_1;
    // 0x800C7EF8: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    skip_1:
    // 0x800C7EFC: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800C7F00: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800C7F04: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800C7F08: nop

    // 0x800C7F0C: bc1fl       L_800C7F4C
    if (!c1cs) {
        // 0x800C7F10: lwc1        $f8, 0xC($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
            goto L_800C7F4C;
    }
    goto skip_2;
    // 0x800C7F10: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    skip_2:
    // 0x800C7F14: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x800C7F18: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800C7F1C: c.eq.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl == ctx->f6.fl;
    // 0x800C7F20: nop

    // 0x800C7F24: bc1f        L_800C7F48
    if (!c1cs) {
        // 0x800C7F28: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_800C7F48;
    }
    // 0x800C7F28: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x800C7F2C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800C7F30: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800C7F34: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C7F38: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C7F3C: div.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x800C7F40: jr          $ra
    // 0x800C7F44: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x800C7F44: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
L_800C7F48:
    // 0x800C7F48: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
L_800C7F4C:
    // 0x800C7F4C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800C7F50: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x800C7F54: nop

    // 0x800C7F58: bc1fl       L_800C7FB0
    if (!c1cs) {
        // 0x800C7F5C: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_800C7FB0;
    }
    goto skip_3;
    // 0x800C7F5C: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    skip_3:
    // 0x800C7F60: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x800C7F64: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800C7F68: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x800C7F6C: nop

    // 0x800C7F70: bc1fl       L_800C7FB0
    if (!c1cs) {
        // 0x800C7F74: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_800C7FB0;
    }
    goto skip_4;
    // 0x800C7F74: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    skip_4:
    // 0x800C7F78: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x800C7F7C: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800C7F80: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x800C7F84: nop

    // 0x800C7F88: bc1f        L_800C7FAC
    if (!c1cs) {
        // 0x800C7F8C: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_800C7FAC;
    }
    // 0x800C7F8C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x800C7F90: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800C7F94: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800C7F98: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C7F9C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C7FA0: div.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800C7FA4: jr          $ra
    // 0x800C7FA8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x800C7FA8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
L_800C7FAC:
    // 0x800C7FAC: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
L_800C7FB0:
    // 0x800C7FB0: bne         $v1, $a2, L_800C7EE8
    if (ctx->r3 != ctx->r6) {
        // 0x800C7FB4: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_800C7EE8;
    }
    // 0x800C7FB4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_800C7FB8:
    // 0x800C7FB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C7FBC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800C7FC0: nop

    // 0x800C7FC4: swc1        $f2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f2.u32l;
    // 0x800C7FC8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800C7FCC: jr          $ra
    // 0x800C7FD0: nop

    return;
    // 0x800C7FD0: nop

;}
RECOMP_FUNC void func_800C7FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7FD4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C7FD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C7FDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C7FE0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800C7FE4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800C7FE8: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x800C7FEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C7FF0: beq         $t6, $zero, L_800C8008
    if (ctx->r14 == 0) {
        // 0x800C7FF4: nop
    
            goto L_800C8008;
    }
    // 0x800C7FF4: nop

    // 0x800C7FF8: jal         0x800885F8
    // 0x800C7FFC: nop

    _glintrosyncDll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800C7FFC: nop

    after_0:
    // 0x800C8000: b           L_800C8014
    // 0x800C8004: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_800C8014;
    // 0x800C8004: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C8008:
    // 0x800C8008: jal         0x800D8FF8
    // 0x800C800C: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x800C800C: nop

    after_1:
    // 0x800C8010: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C8014:
    // 0x800C8014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C8018: jal         0x800C7E28
    // 0x800C801C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_800C7E28(rdram, ctx);
        goto after_2;
    // 0x800C801C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x800C8020: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800C8024: jal         0x800C7980
    // 0x800C8028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C7980(rdram, ctx);
        goto after_3;
    // 0x800C8028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800C802C: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C8030: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800C8034: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C8038: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x800C803C: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800C8040: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800C8044: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x800C8048: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800C804C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800C8050: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C8054: jal         0x80089140
    // 0x800C8058: nop

    _mlspline_entrypoint_13(rdram, ctx);
        goto after_4;
    // 0x800C8058: nop

    after_4:
    // 0x800C805C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C8060: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C8064: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800C8068: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8070: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C8074: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C8078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C807C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8080: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800C8084: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800C8088: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C808C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x800C8090: jal         0x800C7FD4
    // 0x800C8094: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_800C7FD4(rdram, ctx);
        goto after_0;
    // 0x800C8094: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800C8098: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C809C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C80A0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800C80A4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C80A8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x800C80AC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800C80B0: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x800C80B4: bc1fl       L_800C80D8
    if (!c1cs) {
        // 0x800C80B8: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_800C80D8;
    }
    goto skip_0;
    // 0x800C80B8: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_0:
    // 0x800C80BC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800C80C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C80C4: bc1fl       L_800C80FC
    if (!c1cs) {
        // 0x800C80C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C80FC;
    }
    goto skip_1;
    // 0x800C80C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800C80CC: b           L_800C80F8
    // 0x800C80D0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
        goto L_800C80F8;
    // 0x800C80D0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800C80D4: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_800C80D8:
    // 0x800C80D8: nop

    // 0x800C80DC: bc1fl       L_800C80FC
    if (!c1cs) {
        // 0x800C80E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C80FC;
    }
    goto skip_2;
    // 0x800C80E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800C80E4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800C80E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C80EC: bc1fl       L_800C80FC
    if (!c1cs) {
        // 0x800C80F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C80FC;
    }
    goto skip_3;
    // 0x800C80F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x800C80F4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_800C80F8:
    // 0x800C80F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C80FC:
    // 0x800C80FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8100: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800C8104: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C810C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C810C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C8114: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C8118: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800C811C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C8120: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C8124: jal         0x800C7980
    // 0x800C8128: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800C7980(rdram, ctx);
        goto after_0;
    // 0x800C8128: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C812C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C8130: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C8134: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C8138: lbu         $a1, 0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2);
    // 0x800C813C: jalr        $v0
    // 0x800C8140: addiu       $a2, $a0, 0x14
    ctx->r6 = ADD32(ctx->r4, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800C8140: addiu       $a2, $a0, 0x14
    ctx->r6 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x800C8144: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C8148: jal         0x800F1A88
    // 0x800C814C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800F1A88(rdram, ctx);
        goto after_2;
    // 0x800C814C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800C8150: jal         0x800136E4
    // 0x800C8154: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x800C8154: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x800C8158: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C815C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C8160: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800C8164: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x800C8168: jal         0x800136E4
    // 0x800C816C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_4;
    // 0x800C816C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_4:
    // 0x800C8170: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C8174: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x800C8178: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x800C817C: jal         0x800EF2A0
    // 0x800C8180: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800EF2A0(rdram, ctx);
        goto after_5;
    // 0x800C8180: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x800C8184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C818C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8190: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8198: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800C819C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800C81A0: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x800C81A4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800C81A8: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x800C81AC: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x800C81B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C81B4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800C81B8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800C81BC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800C81C0: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x800C81C4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x800C81C8: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x800C81CC: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x800C81D0: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800C81D4: jal         0x800F0E00
    // 0x800C81D8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800F0E00(rdram, ctx);
        goto after_0;
    // 0x800C81D8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x800C81DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C81E0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800C81E4: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x800C81E8: jal         0x800F13F0
    // 0x800C81EC: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_800F13F0(rdram, ctx);
        goto after_1;
    // 0x800C81EC: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_1:
    // 0x800C81F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C81F4: mov.s       $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    ctx->f28.fl = ctx->f26.fl;
    // 0x800C81F8: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
    // 0x800C81FC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800C8200: lwc1        $f24, 0x5920($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5920);
    // 0x800C8204: lwc1        $f26, 0x90($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800C8208: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
    // 0x800C820C: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
L_800C8210:
    // 0x800C8210: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_800C8214:
    // 0x800C8214: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800C8218: jal         0x800C7A68
    // 0x800C821C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800C7A68(rdram, ctx);
        goto after_2;
    // 0x800C821C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x800C8220: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C8224: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800C8228: jal         0x800EFB24
    // 0x800C822C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x800C822C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x800C8230: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800C8234: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800C8238: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800C823C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800C8240: nop

    // 0x800C8244: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800C8248: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800C824C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800C8250: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800C8254: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x800C8258: nop

    // 0x800C825C: bc1f        L_800C826C
    if (!c1cs) {
        // 0x800C8260: nop
    
            goto L_800C826C;
    }
    // 0x800C8260: nop

    // 0x800C8264: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
    // 0x800C8268: mov.s       $f28, $f20
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    ctx->f28.fl = ctx->f20.fl;
L_800C826C:
    // 0x800C826C: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x800C8270: nop

    // 0x800C8274: bc1tl       L_800C829C
    if (c1cs) {
        // 0x800C8278: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_800C829C;
    }
    goto skip_0;
    // 0x800C8278: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x800C827C: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x800C8280: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x800C8284: nop

    // 0x800C8288: bc1fl       L_800C8214
    if (!c1cs) {
        // 0x800C828C: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_800C8214;
    }
    goto skip_1;
    // 0x800C828C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_1:
    // 0x800C8290: b           L_800C8210
    // 0x800C8294: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
        goto L_800C8210;
    // 0x800C8294: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800C8298: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_800C829C:
    // 0x800C829C: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
    // 0x800C82A0: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x800C82A4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800C82A8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800C82AC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800C82B0: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x800C82B4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x800C82B8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800C82BC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x800C82C0: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x800C82C4: jr          $ra
    // 0x800C82C8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x800C82C8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_800C82CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C82CC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800C82D0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800C82D4: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x800C82D8: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x800C82DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C82E0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800C82E4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x800C82E8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x800C82EC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800C82F0: jal         0x800C7BCC
    // 0x800C82F4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800C7BCC(rdram, ctx);
        goto after_0;
    // 0x800C82F4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x800C82F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C82FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C8300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C8304: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800C8308: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C830C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C8310: bc1f        L_800C8320
    if (!c1cs) {
        // 0x800C8314: nop
    
            goto L_800C8320;
    }
    // 0x800C8314: nop

    // 0x800C8318: b           L_800C8484
    // 0x800C831C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_800C8484;
    // 0x800C831C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_800C8320:
    // 0x800C8320: lwc1        $f22, 0x5924($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5924);
    // 0x800C8324: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800C8328: jal         0x800C8198
    // 0x800C832C: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    func_800C8198(rdram, ctx);
        goto after_1;
    // 0x800C832C: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    after_1:
    // 0x800C8330: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C8334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C8338: sub.s       $f24, $f0, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x800C833C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C8340: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C8344: div.s       $f2, $f22, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f22.fl, ctx->f6.fl);
    // 0x800C8348: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800C834C: add.s       $f26, $f0, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x800C8350: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x800C8354: add.s       $f20, $f2, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800C8358: jal         0x800C8198
    // 0x800C835C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800C8198(rdram, ctx);
        goto after_2;
    // 0x800C835C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x800C8360: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C8364: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C8368: sub.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800C836C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C8370: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C8374: div.s       $f22, $f20, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x800C8378: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800C837C: add.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x800C8380: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x800C8384: add.s       $f20, $f22, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x800C8388: jal         0x800C8198
    // 0x800C838C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800C8198(rdram, ctx);
        goto after_3;
    // 0x800C838C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x800C8390: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C8394: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C8398: sub.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800C839C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C83A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C83A4: div.s       $f22, $f20, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f10.fl);
    // 0x800C83A8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800C83AC: add.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x800C83B0: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x800C83B4: add.s       $f20, $f22, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x800C83B8: jal         0x800C8198
    // 0x800C83BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800C8198(rdram, ctx);
        goto after_4;
    // 0x800C83BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x800C83C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C83C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C83C8: sub.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800C83CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C83D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C83D4: div.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f16.fl);
    // 0x800C83D8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800C83DC: add.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x800C83E0: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x800C83E4: add.s       $f20, $f22, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x800C83E8: jal         0x800C8198
    // 0x800C83EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800C8198(rdram, ctx);
        goto after_5;
    // 0x800C83EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x800C83F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C83F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C83F8: sub.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800C83FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C8400: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800C8404: div.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f18.fl);
    // 0x800C8408: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800C840C: add.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x800C8410: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x800C8414: add.s       $f20, $f22, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x800C8418: jal         0x800C8198
    // 0x800C841C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800C8198(rdram, ctx);
        goto after_6;
    // 0x800C841C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x800C8420: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800C8424: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800C8428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C842C: jal         0x800C7A68
    // 0x800C8430: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800C7A68(rdram, ctx);
        goto after_7;
    // 0x800C8430: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_7:
    // 0x800C8434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C8438: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800C843C: jal         0x800C7A68
    // 0x800C8440: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_800C7A68(rdram, ctx);
        goto after_8;
    // 0x800C8440: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_8:
    // 0x800C8444: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C8448: jal         0x800EEB40
    // 0x800C844C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800EEB40(rdram, ctx);
        goto after_9;
    // 0x800C844C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_9:
    // 0x800C8450: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800C8454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800C8458: jal         0x800EEB40
    // 0x800C845C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_800EEB40(rdram, ctx);
        goto after_10;
    // 0x800C845C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_10:
    // 0x800C8460: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x800C8464: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C8468: bc1fl       L_800C847C
    if (!c1cs) {
        // 0x800C846C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800C847C;
    }
    goto skip_0;
    // 0x800C846C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x800C8470: b           L_800C8480
    // 0x800C8474: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
        goto L_800C8480;
    // 0x800C8474: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x800C8478: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800C847C:
    // 0x800C847C: nop

L_800C8480:
    // 0x800C8480: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_800C8484:
    // 0x800C8484: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800C8488: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800C848C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800C8490: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x800C8494: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8498: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800C849C: jr          $ra
    // 0x800C84A0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800C84A0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800C84A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C84A4: jr          $ra
    // 0x800C84A8: sb          $a1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r5;
    return;
    // 0x800C84A8: sb          $a1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r5;
;}
