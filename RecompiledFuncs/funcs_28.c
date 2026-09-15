#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800C84B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C84B0: sll         $t6, $a0, 14
    ctx->r14 = S32(ctx->r4 << 14);
    // 0x800C84B4: bgez        $t6, L_800C84C4
    if (SIGNED(ctx->r14) >= 0) {
            // 0x800C84B8: andi        $v0, $a0, 0x1F00
    ctx->r2 = ctx->r4 & 0X1F00;
    func_800C84C4(rdram, ctx);
    return;
    }
    // 0x800C84B8: andi        $v0, $a0, 0x1F00
    ctx->r2 = ctx->r4 & 0X1F00;
    // 0x800C84BC: jr          $ra
    // 0x800C84C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800C84C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_800C84C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C84C4: bne         $v0, $zero, L_800C84D4
    if (ctx->r2 != 0) {
            // 0x800C84C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    func_800C84D4(rdram, ctx);
    return;
    }
    // 0x800C84C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800C84CC: jr          $ra
    // 0x800C84D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800C84D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800C84D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C84D4: lw          $t7, -0x56D0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X56D0);
    // 0x800C84D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800C84DC: addiu       $a0, $a0, -0x56C8
    ctx->r4 = ADD32(ctx->r4, -0X56C8);
    // 0x800C84E0: bne         $v0, $t7, L_800C84F4
    if (ctx->r2 != ctx->r15) {
            // 0x800C84E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    func_800C84F4(rdram, ctx);
    return;
    }
    // 0x800C84E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800C84E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800C84EC: jr          $ra
    // 0x800C84F0: lw          $v0, -0x56CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X56CC);
    return;
    // 0x800C84F0: lw          $v0, -0x56CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X56CC);
;}
RECOMP_FUNC void func_800C84F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C84F4: addiu       $v1, $v1, -0x5648
    ctx->r3 = ADD32(ctx->r3, -0X5648);
    // 0x800C84F8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800C84FC: bnel        $v0, $t8, L_800C8510
    if (ctx->r2 != ctx->r24) {
            // 0x800C8500: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    static_3_800C8510(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8500: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x800C8504: jr          $ra
    // 0x800C8508: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x800C8508: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_800C850C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C850C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800C8510: bnel        $v0, $t9, L_800C8524
    if (ctx->r2 != ctx->r25) {
            // 0x800C8514: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    static_3_800C8524(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8514: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    skip_0:
    // 0x800C8518: jr          $ra
    // 0x800C851C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x800C851C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void func_800C8520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8520: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x800C8524: bnel        $v0, $t0, L_800C8538
    if (ctx->r2 != ctx->r8) {
            // 0x800C8528: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    static_3_800C8538(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8528: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    skip_0:
    // 0x800C852C: jr          $ra
    // 0x800C8530: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    return;
    // 0x800C8530: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
;}
RECOMP_FUNC void func_800C8534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8534: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x800C8538: bnel        $v0, $t1, L_800C854C
    if (ctx->r2 != ctx->r9) {
            // 0x800C853C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_800C854C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C853C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    skip_0:
    // 0x800C8540: jr          $ra
    // 0x800C8544: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    return;
    // 0x800C8544: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
;}
RECOMP_FUNC void func_800C8548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800C84FC:
    // 0x800C8548: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x800C854C: bnel        $a0, $v1, L_800C84FC
    if (ctx->r4 != ctx->r3) {
            // 0x800C8550: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    static_3_800C84FC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8550: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800C8554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C8558: jr          $ra
    // 0x800C855C: nop

    return;
    // 0x800C855C: nop

;}
RECOMP_FUNC void func_800C8560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8560: lbu         $v0, 0x16($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X16);
    // 0x800C8564: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800C8568: beq         $t6, $zero, L_800C8580
    if (ctx->r14 == 0) {
        // 0x800C856C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800C8580;
    }
    // 0x800C856C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800C8570: lbu         $t7, 0x15($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X15);
    // 0x800C8574: and         $v0, $t7, $a1
    ctx->r2 = ctx->r15 & ctx->r5;
    // 0x800C8578: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800C857C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800C8580:
    // 0x800C8580: jr          $ra
    // 0x800C8584: nop

    return;
    // 0x800C8584: nop

;}
RECOMP_FUNC void func_800C8588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8588: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800C858C: jr          $ra
    // 0x800C8590: lbu         $v0, 0x14($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X14);
    return;
    // 0x800C8590: lbu         $v0, 0x14($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X14);
;}
RECOMP_FUNC void func_800C8594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8594: lbu         $t6, 0x15($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15);
    // 0x800C8598: jr          $ra
    // 0x800C859C: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
    return;
    // 0x800C859C: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
;}
RECOMP_FUNC void func_800C85A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C85A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C85A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C85A8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C85AC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800C85B0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800C85B4: addiu       $s0, $s0, -0x5500
    ctx->r16 = ADD32(ctx->r16, -0X5500);
    // 0x800C85B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C85BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800C85C0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800C85C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C85C8: jal         0x800B28C4
    // 0x800C85CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800C85CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x800C85D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800C85D4: jal         0x800B296C
    // 0x800C85D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800C85D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800C85DC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800C85E0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800C85E4: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800C85E8: beql        $at, $zero, L_800C865C
    if (ctx->r1 == 0) {
        // 0x800C85EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800C865C;
    }
    goto skip_0;
    // 0x800C85EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800C85F0: lbu         $t7, 0x15($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15);
L_800C85F4:
    // 0x800C85F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C85F8: beql        $t7, $zero, L_800C864C
    if (ctx->r15 == 0) {
        // 0x800C85FC: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800C864C;
    }
    goto skip_1;
    // 0x800C85FC: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_1:
    // 0x800C8600: jalr        $s3
    // 0x800C8604: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x800C8604: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x800C8608: beql        $v0, $zero, L_800C864C
    if (ctx->r2 == 0) {
        // 0x800C860C: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800C864C;
    }
    goto skip_2;
    // 0x800C860C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_2:
    // 0x800C8610: lbu         $t8, 0x17($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X17);
    // 0x800C8614: bnel        $t8, $zero, L_800C862C
    if (ctx->r24 != 0) {
        // 0x800C8618: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_800C862C;
    }
    goto skip_3;
    // 0x800C8618: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_3:
    // 0x800C861C: lbu         $t9, 0x18($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X18);
    // 0x800C8620: beql        $t9, $zero, L_800C864C
    if (ctx->r25 == 0) {
        // 0x800C8624: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800C864C;
    }
    goto skip_4;
    // 0x800C8624: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_4:
    // 0x800C8628: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_800C862C:
    // 0x800C862C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800C8630: subu        $v0, $s0, $t0
    ctx->r2 = SUB32(ctx->r16, ctx->r8);
    // 0x800C8634: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800C8638: mflo        $t1
    ctx->r9 = lo;
    // 0x800C863C: addiu       $v0, $t1, 0x1
    ctx->r2 = ADD32(ctx->r9, 0X1);
    // 0x800C8640: b           L_800C8660
    // 0x800C8644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C8660;
    // 0x800C8644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C8648: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_800C864C:
    // 0x800C864C: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800C8650: bnel        $at, $zero, L_800C85F4
    if (ctx->r1 != 0) {
        // 0x800C8654: lbu         $t7, 0x15($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X15);
            goto L_800C85F4;
    }
    goto skip_5;
    // 0x800C8654: lbu         $t7, 0x15($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15);
    skip_5:
    // 0x800C8658: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C865C:
    // 0x800C865C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C8660:
    // 0x800C8660: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C8664: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C8668: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800C866C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800C8670: jr          $ra
    // 0x800C8674: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C8674: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C8678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8678: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C867C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C8680: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800C8684: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C8688: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C868C: addiu       $s1, $s1, -0x5500
    ctx->r17 = ADD32(ctx->r17, -0X5500);
    // 0x800C8690: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C8694: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800C8698: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800C869C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x800C86A0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800C86A4: jal         0x800B28C4
    // 0x800C86A8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800C86A8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_0:
    // 0x800C86AC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800C86B0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800C86B4: jal         0x800B28CC
    // 0x800C86B8: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_1;
    // 0x800C86B8: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    after_1:
    // 0x800C86BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C86C0: jal         0x800B296C
    // 0x800C86C4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800B296C(rdram, ctx);
        goto after_2;
    // 0x800C86C4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x800C86C8: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x800C86CC: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800C86D0: beq         $at, $zero, L_800C8740
    if (ctx->r1 == 0) {
        // 0x800C86D4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800C8740;
    }
    // 0x800C86D4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800C86D8: lbu         $t6, 0x15($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15);
L_800C86DC:
    // 0x800C86DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C86E0: beql        $t6, $zero, L_800C8734
    if (ctx->r14 == 0) {
        // 0x800C86E4: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800C8734;
    }
    goto skip_0;
    // 0x800C86E4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x800C86E8: jalr        $s3
    // 0x800C86EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x800C86EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x800C86F0: beql        $v0, $zero, L_800C8734
    if (ctx->r2 == 0) {
        // 0x800C86F4: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800C8734;
    }
    goto skip_1;
    // 0x800C86F4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_1:
    // 0x800C86F8: lbu         $t7, 0x17($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X17);
    // 0x800C86FC: bnel        $t7, $zero, L_800C8714
    if (ctx->r15 != 0) {
        // 0x800C8700: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_800C8714;
    }
    goto skip_2;
    // 0x800C8700: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x800C8704: lbu         $t8, 0x18($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X18);
    // 0x800C8708: beql        $t8, $zero, L_800C8734
    if (ctx->r24 == 0) {
        // 0x800C870C: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_800C8734;
    }
    goto skip_3;
    // 0x800C870C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_3:
    // 0x800C8710: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_800C8714:
    // 0x800C8714: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800C8718: subu        $v0, $s0, $t9
    ctx->r2 = SUB32(ctx->r16, ctx->r25);
    // 0x800C871C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800C8720: mflo        $t0
    ctx->r8 = lo;
    // 0x800C8724: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x800C8728: b           L_800C8748
    // 0x800C872C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C8748;
    // 0x800C872C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C8730: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_800C8734:
    // 0x800C8734: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800C8738: bnel        $at, $zero, L_800C86DC
    if (ctx->r1 != 0) {
        // 0x800C873C: lbu         $t6, 0x15($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X15);
            goto L_800C86DC;
    }
    goto skip_4;
    // 0x800C873C: lbu         $t6, 0x15($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15);
    skip_4:
L_800C8740:
    // 0x800C8740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C8744: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C8748:
    // 0x800C8748: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C874C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C8750: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8754: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800C8758: jr          $ra
    // 0x800C875C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C875C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C8760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8760: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C8764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8768: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800C876C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8770: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800C8774: jal         0x800C85A0
    // 0x800C8778: lw          $a0, -0x5640($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5640);
    func_800C85A0(rdram, ctx);
        goto after_0;
    // 0x800C8778: lw          $a0, -0x5640($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5640);
    after_0:
    // 0x800C877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8784: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C878C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C878C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800C8790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8794: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C879C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x800C87A0: jal         0x800C8678
    // 0x800C87A4: lw          $a1, -0x5640($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5640);
    func_800C8678(rdram, ctx);
        goto after_0;
    // 0x800C87A4: lw          $a1, -0x5640($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5640);
    after_0:
    // 0x800C87A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C87AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C87B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C87B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C87B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C87BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C87C0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C87C4: jal         0x800EE830
    // 0x800C87C8: addiu       $a1, $a1, -0x54FC
    ctx->r5 = ADD32(ctx->r5, -0X54FC);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800C87C8: addiu       $a1, $a1, -0x54FC
    ctx->r5 = ADD32(ctx->r5, -0X54FC);
    after_0:
    // 0x800C87CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C87D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C87D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C87DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C87DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C87E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C87E4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C87E8: jal         0x800EE830
    // 0x800C87EC: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800C87EC: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    after_0:
    // 0x800C87F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C87F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C87F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8804: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C880C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C8810: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8814: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8818: jal         0x800B28CC
    // 0x800C881C: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C881C: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C8820: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8824: jal         0x800EE88C
    // 0x800C8828: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800EE88C(rdram, ctx);
        goto after_1;
    // 0x800C8828: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800C882C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8834: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C883C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C883C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8840: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C884C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8850: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8854: jal         0x800B28CC
    // 0x800C8858: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C8858: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C885C: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x800C8860: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8864: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800C8868: nop

    // 0x800C886C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C8870: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x800C8874: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x800C8878: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800C887C: nop

    // 0x800C8880: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C8884: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x800C8888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C888C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8890: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C889C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800C88A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C88A4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C88A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C88AC: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C88B0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x800C88B4: jal         0x800B28CC
    // 0x800C88B8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C88B8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    after_0:
    // 0x800C88BC: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x800C88C0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800C88C4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800C88C8: nop

    // 0x800C88CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C88D0: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x800C88D4: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x800C88D8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800C88DC: nop

    // 0x800C88E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C88E4: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x800C88E8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800C88EC: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    // 0x800C88F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C88F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C88F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8904: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C890C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C8910: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8914: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8918: jal         0x800B28CC
    // 0x800C891C: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C891C: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C8920: lbu         $t6, 0x17($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X17);
    // 0x800C8924: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8928: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C892C: bne         $t6, $zero, L_800C8948
    if (ctx->r14 != 0) {
        // 0x800C8930: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800C8948;
    }
    // 0x800C8930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C8934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C8938: jal         0x800EFA88
    // 0x800C893C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800EFA88(rdram, ctx);
        goto after_1;
    // 0x800C893C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800C8940: b           L_800C8954
    // 0x800C8944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C8954;
    // 0x800C8944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C8948:
    // 0x800C8948: jal         0x800F2EE0
    // 0x800C894C: addiu       $a1, $v1, 0xA
    ctx->r5 = ADD32(ctx->r3, 0XA);
    func_800F2EE0(rdram, ctx);
        goto after_2;
    // 0x800C894C: addiu       $a1, $v1, 0xA
    ctx->r5 = ADD32(ctx->r3, 0XA);
    after_2:
    // 0x800C8950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C8954:
    // 0x800C8954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8958: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8968: beq         $a0, $zero, L_800C8984
    if (ctx->r4 == 0) {
        // 0x800C896C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800C8984;
    }
    // 0x800C896C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C8970: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C8974: addiu       $a1, $a1, -0x54E4
    ctx->r5 = ADD32(ctx->r5, -0X54E4);
    // 0x800C8978: jal         0x800EE830
    // 0x800C897C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800C897C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x800C8980: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_800C8984:
    // 0x800C8984: beq         $a2, $zero, L_800C8998
    if (ctx->r6 == 0) {
        // 0x800C8988: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800C8998;
    }
    // 0x800C8988: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800C898C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C8990: jal         0x800EE7F8
    // 0x800C8994: addiu       $a1, $a1, -0x54D8
    ctx->r5 = ADD32(ctx->r5, -0X54D8);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800C8994: addiu       $a1, $a1, -0x54D8
    ctx->r5 = ADD32(ctx->r5, -0X54D8);
    after_1:
L_800C8998:
    // 0x800C8998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C899C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C89A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C89A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C89A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C89AC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C89B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C89B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C89B8: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C89BC: jal         0x800B28CC
    // 0x800C89C0: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C89C0: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C89C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C89C8: lbu         $v0, 0x15($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X15);
    // 0x800C89CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C89D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C89D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C89D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C89DC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C89E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C89E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C89E8: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C89EC: jal         0x800B28CC
    // 0x800C89F0: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C89F0: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C89F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C89F8: lbu         $v0, 0x19($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X19);
    // 0x800C89FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8A00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8A08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8A10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8A14: jal         0x800B28C4
    // 0x800C8A18: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800C8A18: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    after_0:
    // 0x800C8A1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8A20: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8A24: jal         0x800B296C
    // 0x800C8A28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800C8A28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C8A2C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8A30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C8A34: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800C8A38: beq         $at, $zero, L_800C8A88
    if (ctx->r1 == 0) {
        // 0x800C8A3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800C8A88;
    }
    // 0x800C8A3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800C8A40: lbu         $t6, 0x15($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X15);
L_800C8A44:
    // 0x800C8A44: beql        $t6, $zero, L_800C8A7C
    if (ctx->r14 == 0) {
        // 0x800C8A48: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_800C8A7C;
    }
    goto skip_0;
    // 0x800C8A48: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    skip_0:
    // 0x800C8A4C: lbu         $t7, 0x16($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X16);
    // 0x800C8A50: bnel        $v0, $t7, L_800C8A64
    if (ctx->r2 != ctx->r15) {
        // 0x800C8A54: sb          $zero, 0x16($v1)
        MEM_B(0X16, ctx->r3) = 0;
            goto L_800C8A64;
    }
    goto skip_1;
    // 0x800C8A54: sb          $zero, 0x16($v1)
    MEM_B(0X16, ctx->r3) = 0;
    skip_1:
    // 0x800C8A58: b           L_800C8A64
    // 0x800C8A5C: sb          $zero, 0x15($v1)
    MEM_B(0X15, ctx->r3) = 0;
        goto L_800C8A64;
    // 0x800C8A5C: sb          $zero, 0x15($v1)
    MEM_B(0X15, ctx->r3) = 0;
    // 0x800C8A60: sb          $zero, 0x16($v1)
    MEM_B(0X16, ctx->r3) = 0;
L_800C8A64:
    // 0x800C8A64: lbu         $t8, 0x18($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X18);
    // 0x800C8A68: beql        $t8, $zero, L_800C8A78
    if (ctx->r24 == 0) {
        // 0x800C8A6C: sb          $zero, 0x19($v1)
        MEM_B(0X19, ctx->r3) = 0;
            goto L_800C8A78;
    }
    goto skip_2;
    // 0x800C8A6C: sb          $zero, 0x19($v1)
    MEM_B(0X19, ctx->r3) = 0;
    skip_2:
    // 0x800C8A70: sb          $zero, 0x18($v1)
    MEM_B(0X18, ctx->r3) = 0;
    // 0x800C8A74: sb          $zero, 0x19($v1)
    MEM_B(0X19, ctx->r3) = 0;
L_800C8A78:
    // 0x800C8A78: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
L_800C8A7C:
    // 0x800C8A7C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800C8A80: bnel        $at, $zero, L_800C8A44
    if (ctx->r1 != 0) {
        // 0x800C8A84: lbu         $t6, 0x15($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X15);
            goto L_800C8A44;
    }
    goto skip_3;
    // 0x800C8A84: lbu         $t6, 0x15($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X15);
    skip_3:
L_800C8A88:
    // 0x800C8A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8A90: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8A98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C8A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8AA0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8AA4: jal         0x800B28C4
    // 0x800C8AA8: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800C8AA8: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    after_0:
    // 0x800C8AAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8AB0: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8AB4: jal         0x800B296C
    // 0x800C8AB8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800C8AB8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C8ABC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C8AC0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C8AC4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8AC8: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x800C8ACC: beq         $at, $zero, L_800C8AF0
    if (ctx->r1 == 0) {
        // 0x800C8AD0: nop
    
            goto L_800C8AF0;
    }
    // 0x800C8AD0: nop

    // 0x800C8AD4: lbu         $t6, 0x15($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X15);
L_800C8AD8:
    // 0x800C8AD8: beq         $t6, $zero, L_800C8AF0
    if (ctx->r14 == 0) {
        // 0x800C8ADC: nop
    
            goto L_800C8AF0;
    }
    // 0x800C8ADC: nop

    // 0x800C8AE0: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
    // 0x800C8AE4: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x800C8AE8: bnel        $at, $zero, L_800C8AD8
    if (ctx->r1 != 0) {
        // 0x800C8AEC: lbu         $t6, 0x15($a2)
        ctx->r14 = MEM_BU(ctx->r6, 0X15);
            goto L_800C8AD8;
    }
    goto skip_0;
    // 0x800C8AEC: lbu         $t6, 0x15($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X15);
    skip_0:
L_800C8AF0:
    // 0x800C8AF0: bne         $a2, $v0, L_800C8B04
    if (ctx->r6 != ctx->r2) {
        // 0x800C8AF4: nop
    
            goto L_800C8B04;
    }
    // 0x800C8AF4: nop

    // 0x800C8AF8: jal         0x800B2974
    // 0x800C8AFC: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    func_800B2974(rdram, ctx);
        goto after_2;
    // 0x800C8AFC: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    after_2:
    // 0x800C8B00: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_800C8B04:
    // 0x800C8B04: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8B08: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8B0C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800C8B10: jal         0x800B28E8
    // 0x800C8B14: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800B28E8(rdram, ctx);
        goto after_3;
    // 0x800C8B14: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_3:
    // 0x800C8B18: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8B1C: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x800C8B20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C8B24: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x800C8B28: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800C8B2C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8B30: addiu       $a1, $a1, -0x5634
    ctx->r5 = ADD32(ctx->r5, -0X5634);
    // 0x800C8B34: sb          $t7, 0x15($a2)
    MEM_B(0X15, ctx->r6) = ctx->r15;
    // 0x800C8B38: sb          $t9, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r25;
    // 0x800C8B3C: sb          $t9, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r25;
    // 0x800C8B40: sb          $zero, 0x14($a2)
    MEM_B(0X14, ctx->r6) = 0;
    // 0x800C8B44: sb          $zero, 0x18($a2)
    MEM_B(0X18, ctx->r6) = 0;
    // 0x800C8B48: jal         0x800C8CB8
    // 0x800C8B4C: sb          $zero, 0x19($a2)
    MEM_B(0X19, ctx->r6) = 0;
    func_800C8CB8(rdram, ctx);
        goto after_4;
    // 0x800C8B4C: sb          $zero, 0x19($a2)
    MEM_B(0X19, ctx->r6) = 0;
    after_4:
    // 0x800C8B50: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8B54: addiu       $a1, $a1, -0x5628
    ctx->r5 = ADD32(ctx->r5, -0X5628);
    // 0x800C8B58: jal         0x800C8D4C
    // 0x800C8B5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C8D4C(rdram, ctx);
        goto after_5;
    // 0x800C8B5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x800C8B60: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8B64: addiu       $a1, $a1, -0x5620
    ctx->r5 = ADD32(ctx->r5, -0X5620);
    // 0x800C8B68: jal         0x800C8E84
    // 0x800C8B6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C8E84(rdram, ctx);
        goto after_6;
    // 0x800C8B6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_6:
    // 0x800C8B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8B74: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800C8B78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C8B7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8B88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C8B8C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800C8B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8B94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8B98: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8B9C: jal         0x800B28CC
    // 0x800C8BA0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C8BA0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_0:
    // 0x800C8BA4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8BA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800C8BAC: addiu       $a1, $a1, -0x5614
    ctx->r5 = ADD32(ctx->r5, -0X5614);
    // 0x800C8BB0: jal         0x800C8CB8
    // 0x800C8BB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C8CB8(rdram, ctx);
        goto after_1;
    // 0x800C8BB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800C8BB8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8BBC: addiu       $a1, $a1, -0x5608
    ctx->r5 = ADD32(ctx->r5, -0X5608);
    // 0x800C8BC0: jal         0x800C8D4C
    // 0x800C8BC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C8D4C(rdram, ctx);
        goto after_2;
    // 0x800C8BC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800C8BC8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800C8BCC: addiu       $a1, $a1, -0x5600
    ctx->r5 = ADD32(ctx->r5, -0X5600);
    // 0x800C8BD0: jal         0x800C8E84
    // 0x800C8BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C8E84(rdram, ctx);
        goto after_3;
    // 0x800C8BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x800C8BD8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8BDC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C8BE0: sb          $t6, 0x16($t7)
    MEM_B(0X16, ctx->r15) = ctx->r14;
    // 0x800C8BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8BEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8BFC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8C00: jal         0x800B2928
    // 0x800C8C04: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x800C8C04: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    after_0:
    // 0x800C8C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8C10: jr          $ra
    // 0x800C8C14: nop

    return;
    // 0x800C8C14: nop

;}
RECOMP_FUNC void func_800C8C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8C18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C8C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8C20: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8C24: jal         0x800B296C
    // 0x800C8C28: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    func_800B296C(rdram, ctx);
        goto after_0;
    // 0x800C8C28: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    after_0:
    // 0x800C8C2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8C30: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8C34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C8C38: jal         0x800B28C4
    // 0x800C8C3C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800C8C3C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C8C40: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C8C44: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8C48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800C8C4C: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x800C8C50: beq         $at, $zero, L_800C8C84
    if (ctx->r1 == 0) {
        // 0x800C8C54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C8C84;
    }
    // 0x800C8C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8C58: lbu         $t6, 0x15($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X15);
L_800C8C5C:
    // 0x800C8C5C: beql        $t6, $zero, L_800C8C78
    if (ctx->r14 == 0) {
        // 0x800C8C60: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_800C8C78;
    }
    goto skip_0;
    // 0x800C8C60: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    skip_0:
    // 0x800C8C64: lbu         $t7, 0x14($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X14);
    // 0x800C8C68: beql        $t7, $zero, L_800C8C78
    if (ctx->r15 == 0) {
        // 0x800C8C6C: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_800C8C78;
    }
    goto skip_1;
    // 0x800C8C6C: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    skip_1:
    // 0x800C8C70: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800C8C74: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
L_800C8C78:
    // 0x800C8C78: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x800C8C7C: bnel        $at, $zero, L_800C8C5C
    if (ctx->r1 != 0) {
        // 0x800C8C80: lbu         $t6, 0x15($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X15);
            goto L_800C8C5C;
    }
    goto skip_2;
    // 0x800C8C80: lbu         $t6, 0x15($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X15);
    skip_2:
L_800C8C84:
    // 0x800C8C84: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800C8C88: jr          $ra
    // 0x800C8C8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C8C8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C8C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8C94: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800C8C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8C9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8CA0: jal         0x800EE830
    // 0x800C8CA4: addiu       $a0, $a0, -0x54FC
    ctx->r4 = ADD32(ctx->r4, -0X54FC);
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800C8CA4: addiu       $a0, $a0, -0x54FC
    ctx->r4 = ADD32(ctx->r4, -0X54FC);
    after_0:
    // 0x800C8CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8CB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8CB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C8CBC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8CC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C8CC8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8CCC: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8CD0: jal         0x800B28CC
    // 0x800C8CD4: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C8CD4: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C8CD8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800C8CDC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800C8CE0: jal         0x800EE940
    // 0x800C8CE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800EE940(rdram, ctx);
        goto after_1;
    // 0x800C8CE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800C8CE8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C8CEC: lh          $t7, 0x1C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1C);
    // 0x800C8CF0: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x800C8CF4: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x800C8CF8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800C8CFC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800C8D00: bne         $t6, $t7, L_800C8D24
    if (ctx->r14 != ctx->r15) {
        // 0x800C8D04: nop
    
            goto L_800C8D24;
    }
    // 0x800C8D04: nop

    // 0x800C8D08: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x800C8D0C: lh          $t1, 0x20($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X20);
    // 0x800C8D10: bne         $t8, $t9, L_800C8D24
    if (ctx->r24 != ctx->r25) {
        // 0x800C8D14: nop
    
            goto L_800C8D24;
    }
    // 0x800C8D14: nop

    // 0x800C8D18: lh          $t0, 0x4($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X4);
    // 0x800C8D1C: beql        $t0, $t1, L_800C8D40
    if (ctx->r8 == ctx->r9) {
        // 0x800C8D20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C8D40;
    }
    goto skip_0;
    // 0x800C8D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_800C8D24:
    // 0x800C8D24: jal         0x800EE814
    // 0x800C8D28: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_800EE814(rdram, ctx);
        goto after_2;
    // 0x800C8D28: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x800C8D2C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C8D30: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C8D34: sb          $t3, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r11;
    // 0x800C8D38: sb          $t3, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r11;
    // 0x800C8D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C8D40:
    // 0x800C8D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C8D44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8D4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8D50: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8D58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C8D5C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8D60: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8D64: jal         0x800B28CC
    // 0x800C8D68: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C8D68: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C8D6C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800C8D70: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800C8D74: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800C8D78: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800C8D7C: nop

    // 0x800C8D80: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x800C8D84: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800C8D88: lh          $t1, 0x18($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X18);
    // 0x800C8D8C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800C8D90: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800C8D94: nop

    // 0x800C8D98: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    // 0x800C8D9C: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x800C8DA0: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800C8DA4: beql        $at, $zero, L_800C8DB4
    if (ctx->r1 == 0) {
        // 0x800C8DA8: lh          $v1, 0x1A($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X1A);
            goto L_800C8DB4;
    }
    goto skip_0;
    // 0x800C8DA8: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    skip_0:
    // 0x800C8DAC: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    // 0x800C8DB0: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
L_800C8DB4:
    // 0x800C8DB4: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x800C8DB8: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x800C8DBC: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800C8DC0: beql        $at, $zero, L_800C8DD8
    if (ctx->r1 == 0) {
        // 0x800C8DC4: sh          $v1, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r3;
            goto L_800C8DD8;
    }
    goto skip_1;
    // 0x800C8DC4: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    skip_1:
    // 0x800C8DC8: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x800C8DCC: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800C8DD0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800C8DD4: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
L_800C8DD8:
    // 0x800C8DD8: bne         $a0, $v1, L_800C8DE4
    if (ctx->r4 != ctx->r3) {
        // 0x800C8DDC: sh          $a0, 0x18($sp)
        MEM_H(0X18, ctx->r29) = ctx->r4;
            goto L_800C8DE4;
    }
    // 0x800C8DDC: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    // 0x800C8DE0: sh          $t5, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r13;
L_800C8DE4:
    // 0x800C8DE4: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x800C8DE8: lh          $t7, 0x18($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X18);
    // 0x800C8DEC: lh          $t9, 0x1A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1A);
    // 0x800C8DF0: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x800C8DF4: bnel        $t6, $t7, L_800C8E0C
    if (ctx->r14 != ctx->r15) {
        // 0x800C8DF8: sh          $t0, 0x6($v0)
        MEM_H(0X6, ctx->r2) = ctx->r8;
            goto L_800C8E0C;
    }
    goto skip_2;
    // 0x800C8DF8: sh          $t0, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r8;
    skip_2:
    // 0x800C8DFC: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    // 0x800C8E00: beql        $t8, $t9, L_800C8E48
    if (ctx->r24 == ctx->r25) {
        // 0x800C8E04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C8E48;
    }
    goto skip_3;
    // 0x800C8E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x800C8E08: sh          $t0, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r8;
L_800C8E0C:
    // 0x800C8E0C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x800C8E10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800C8E14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C8E18: sh          $t1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r9;
    // 0x800C8E1C: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x800C8E20: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x800C8E24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C8E28: sb          $t6, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r14;
    // 0x800C8E2C: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x800C8E30: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800C8E34: sb          $t6, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r14;
    // 0x800C8E38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C8E3C: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800C8E40: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x800C8E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C8E48:
    // 0x800C8E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8E4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8E58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800C8E5C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C8E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8E64: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800C8E68: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x800C8E6C: jal         0x800C8D4C
    // 0x800C8E70: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_800C8D4C(rdram, ctx);
        goto after_0;
    // 0x800C8E70: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800C8E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8E78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8E7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8E88: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800C8E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8E90: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C8E94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8E98: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8E9C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x800C8EA0: jal         0x800B28CC
    // 0x800C8EA4: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C8EA4: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    after_0:
    // 0x800C8EA8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8EAC: lbu         $t6, 0xA($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XA);
    // 0x800C8EB0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x800C8EB4: bnel        $t6, $v1, L_800C8EE0
    if (ctx->r14 != ctx->r3) {
        // 0x800C8EB8: sb          $v1, 0xA($v0)
        MEM_B(0XA, ctx->r2) = ctx->r3;
            goto L_800C8EE0;
    }
    goto skip_0;
    // 0x800C8EB8: sb          $v1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r3;
    skip_0:
    // 0x800C8EBC: lbu         $t7, 0xB($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XB);
    // 0x800C8EC0: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x800C8EC4: bnel        $t7, $t8, L_800C8EE0
    if (ctx->r15 != ctx->r24) {
        // 0x800C8EC8: sb          $v1, 0xA($v0)
        MEM_B(0XA, ctx->r2) = ctx->r3;
            goto L_800C8EE0;
    }
    goto skip_1;
    // 0x800C8EC8: sb          $v1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r3;
    skip_1:
    // 0x800C8ECC: lbu         $t9, 0xC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XC);
    // 0x800C8ED0: lw          $t0, 0x8($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X8);
    // 0x800C8ED4: beql        $t9, $t0, L_800C8EFC
    if (ctx->r25 == ctx->r8) {
        // 0x800C8ED8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C8EFC;
    }
    goto skip_2;
    // 0x800C8ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800C8EDC: sb          $v1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r3;
L_800C8EE0:
    // 0x800C8EE0: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x800C8EE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C8EE8: sb          $t1, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r9;
    // 0x800C8EEC: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x800C8EF0: sb          $t3, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r11;
    // 0x800C8EF4: sb          $t2, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r10;
    // 0x800C8EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C8EFC:
    // 0x800C8EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8F00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8F10: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8F14: beq         $a0, $zero, L_800C8F34
    if (ctx->r4 == 0) {
        // 0x800C8F18: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_800C8F34;
    }
    // 0x800C8F18: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800C8F1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8F20: addiu       $a0, $a0, -0x54E4
    ctx->r4 = ADD32(ctx->r4, -0X54E4);
    // 0x800C8F24: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800C8F28: jal         0x800EE830
    // 0x800C8F2C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_800EE830(rdram, ctx);
        goto after_0;
    // 0x800C8F2C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C8F30: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_800C8F34:
    // 0x800C8F34: beq         $a3, $zero, L_800C8F54
    if (ctx->r7 == 0) {
        // 0x800C8F38: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800C8F54;
    }
    // 0x800C8F38: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8F3C: addiu       $a0, $a0, -0x54D8
    ctx->r4 = ADD32(ctx->r4, -0X54D8);
    // 0x800C8F40: jal         0x800EE7F8
    // 0x800C8F44: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800C8F44: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x800C8F48: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8F4C: jal         0x800EF2A0
    // 0x800C8F50: addiu       $a0, $a0, -0x54D8
    ctx->r4 = ADD32(ctx->r4, -0X54D8);
    func_800EF2A0(rdram, ctx);
        goto after_2;
    // 0x800C8F50: addiu       $a0, $a0, -0x54D8
    ctx->r4 = ADD32(ctx->r4, -0X54D8);
    after_2:
L_800C8F54:
    // 0x800C8F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8F5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8F68: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C8F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8F70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C8F74: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8F78: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8F7C: jal         0x800B28CC
    // 0x800C8F80: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C8F80: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C8F84: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8F88: lbu         $t6, 0x15($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X15);
    // 0x800C8F8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C8F90: beql        $v1, $t6, L_800C8FA4
    if (ctx->r3 == ctx->r14) {
        // 0x800C8F94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C8FA4;
    }
    goto skip_0;
    // 0x800C8F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C8F98: sb          $v1, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r3;
    // 0x800C8F9C: sb          $t7, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r15;
    // 0x800C8FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C8FA4:
    // 0x800C8FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C8FA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8FB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C8FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8FB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C8FBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C8FC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C8FC4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C8FC8: jal         0x800C8E84
    // 0x800C8FCC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800C8E84(rdram, ctx);
        goto after_0;
    // 0x800C8FCC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800C8FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C8FD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C8FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8FE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C8FE4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800C8FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8FEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C8FF0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C8FF4: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C8FF8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x800C8FFC: jal         0x800B28CC
    // 0x800C9000: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C9000: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    after_0:
    // 0x800C9004: lbu         $t6, 0x16($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X16);
    // 0x800C9008: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800C900C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800C9010: bne         $t6, $zero, L_800C9028
    if (ctx->r14 != 0) {
        // 0x800C9014: nop
    
            goto L_800C9028;
    }
    // 0x800C9014: nop

    // 0x800C9018: lbu         $t7, 0x17($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X17);
    // 0x800C901C: xor         $t8, $a2, $t7
    ctx->r24 = ctx->r6 ^ ctx->r15;
    // 0x800C9020: sltu        $t8, $zero, $t8
    ctx->r24 = 0 < ctx->r24 ? 1 : 0;
    // 0x800C9024: sb          $t8, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r24;
L_800C9028:
    // 0x800C9028: bne         $a2, $zero, L_800C9034
    if (ctx->r6 != 0) {
        // 0x800C902C: sb          $a2, 0x17($v0)
        MEM_B(0X17, ctx->r2) = ctx->r6;
            goto L_800C9034;
    }
    // 0x800C902C: sb          $a2, 0x17($v0)
    MEM_B(0X17, ctx->r2) = ctx->r6;
    // 0x800C9030: sb          $t9, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r25;
L_800C9034:
    // 0x800C9034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C903C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9048: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C904C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9050: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9054: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C9058: jal         0x800B28CC
    // 0x800C905C: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x800C905C: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x800C9060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9064: lbu         $v0, 0x17($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X17);
    // 0x800C9068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C906C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9074: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9078: lw          $a0, -0x5500($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5500);
    // 0x800C907C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9084: beql        $a0, $zero, L_800C90A0
    if (ctx->r4 == 0) {
        // 0x800C9088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C90A0;
    }
    goto skip_0;
    // 0x800C9088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C908C: jal         0x800B2F58
    // 0x800C9090: nop

    func_800B2F58(rdram, ctx);
        goto after_0;
    // 0x800C9090: nop

    after_0:
    // 0x800C9094: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C9098: sw          $v0, -0x5500($at)
    MEM_W(-0X5500, ctx->r1) = ctx->r2;
    // 0x800C909C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C90A0:
    // 0x800C90A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C90A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C90AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C90AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C90B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C90B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C90B8: jal         0x80087E88
    // 0x800C90BC: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    _gclightsDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800C90BC: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    after_0:
    // 0x800C90C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C90C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C90C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C90D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C90D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C90D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C90D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C90DC: jal         0x80087E90
    // 0x800C90E0: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    _gclightsDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800C90E0: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    after_0:
    // 0x800C90E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C90E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C90EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C90F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C90F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C90F8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800C90FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9100: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9104: jal         0x80087E98
    // 0x800C9108: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    _gclightsDll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800C9108: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    after_0:
    // 0x800C910C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9114: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C911C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C911C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C9120: jr          $ra
    // 0x800C9124: addiu       $v0, $v0, -0x5500
    ctx->r2 = ADD32(ctx->r2, -0X5500);
    return;
    // 0x800C9124: addiu       $v0, $v0, -0x5500
    ctx->r2 = ADD32(ctx->r2, -0X5500);
;}
RECOMP_FUNC void func_800C9128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C912C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800C9130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9134: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9138: jal         0x80087EA0
    // 0x800C913C: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    _gclightsDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800C913C: addiu       $a0, $a0, -0x5500
    ctx->r4 = ADD32(ctx->r4, -0X5500);
    after_0:
    // 0x800C9140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9148: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9158: jal         0x800C91C8
    // 0x800C915C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C915C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C9160: bne         $v0, $zero, L_800C91B4
    if (ctx->r2 != 0) {
        // 0x800C9164: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800C91B4;
    }
    // 0x800C9164: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800C9168: jal         0x8001ACCC
    // 0x800C916C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x800C916C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_1:
    // 0x800C9170: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C9174: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x800C9178: jal         0x8002D6E0
    // 0x800C917C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x800C917C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x800C9180: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C9184: addiu       $v0, $v0, -0x54C0
    ctx->r2 = ADD32(ctx->r2, -0X54C0);
    // 0x800C9188: lbu         $t6, 0x14($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14);
    // 0x800C918C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9190: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9194: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800C9198: sw          $a0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r4;
    // 0x800C919C: lbu         $t9, 0x14($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X14);
    // 0x800C91A0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800C91A4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C91A8: jal         0x800881E8
    // 0x800C91AC: sb          $t0, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r8;
    _gctransitionDll_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x800C91AC: sb          $t0, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r8;
    after_3:
    // 0x800C91B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_800C91B4:
    // 0x800C91B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C91B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C91BC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800C91C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C91C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C91C8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C91CC: lbu         $v1, -0x54AC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54AC);
    // 0x800C91D0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800C91D4: addiu       $a1, $a1, -0x54C0
    ctx->r5 = ADD32(ctx->r5, -0X54C0);
    // 0x800C91D8: blez        $v1, L_800C9208
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800C91DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800C9208;
    }
    // 0x800C91DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C91E0:
    // 0x800C91E0: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x800C91E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C91E8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800C91EC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800C91F0: bne         $a0, $t6, L_800C9200
    if (ctx->r4 != ctx->r14) {
        // 0x800C91F4: nop
    
            goto L_800C9200;
    }
    // 0x800C91F4: nop

    // 0x800C91F8: jr          $ra
    // 0x800C91FC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x800C91FC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_800C9200:
    // 0x800C9200: bne         $at, $zero, L_800C91E0
    if (ctx->r1 != 0) {
        // 0x800C9204: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800C91E0;
    }
    // 0x800C9204: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_800C9208:
    // 0x800C9208: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C920C: jr          $ra
    // 0x800C9210: nop

    return;
    // 0x800C9210: nop

;}
RECOMP_FUNC void func_800C9214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9214: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9218: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C921C: addiu       $t6, $t6, -0x54C0
    ctx->r14 = ADD32(ctx->r14, -0X54C0);
    // 0x800C9220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9224: lbu         $a1, 0x14($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X14);
    // 0x800C9228: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800C922C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800C9230: blez        $a1, L_800C928C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800C9234: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800C928C;
    }
    // 0x800C9234: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800C9238:
    // 0x800C9238: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800C923C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800C9240: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800C9244: bne         $a2, $a0, L_800C9284
    if (ctx->r6 != ctx->r4) {
        // 0x800C9248: nop
    
            goto L_800C9284;
    }
    // 0x800C9248: nop

    // 0x800C924C: jal         0x8001B084
    // 0x800C9250: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800C9250: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x800C9254: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800C9258: addiu       $a3, $a3, -0x54C0
    ctx->r7 = ADD32(ctx->r7, -0X54C0);
    // 0x800C925C: lbu         $v1, 0x14($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X14);
    // 0x800C9260: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800C9264: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800C9268: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x800C926C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C9270: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x800C9274: sb          $t7, 0x14($a3)
    MEM_B(0X14, ctx->r7) = ctx->r15;
    // 0x800C9278: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800C927C: b           L_800C928C
    // 0x800C9280: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_800C928C;
    // 0x800C9280: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_800C9284:
    // 0x800C9284: bne         $at, $zero, L_800C9238
    if (ctx->r1 != 0) {
        // 0x800C9288: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800C9238;
    }
    // 0x800C9288: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800C928C:
    // 0x800C928C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9294: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C929C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C929C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800C92A0: jr          $ra
    // 0x800C92A4: sb          $zero, -0x54AC($at)
    MEM_B(-0X54AC, ctx->r1) = 0;
    return;
    // 0x800C92A4: sb          $zero, -0x54AC($at)
    MEM_B(-0X54AC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800C92A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C92A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C92AC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800C92B0: addiu       $t6, $t6, -0x54C0
    ctx->r14 = ADD32(ctx->r14, -0X54C0);
    // 0x800C92B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C92B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C92BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C92C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C92C4: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x800C92C8: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x800C92CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800C92D0: blez        $t7, L_800C92F8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800C92D4: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_800C92F8;
    }
    // 0x800C92D4: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
L_800C92D8:
    // 0x800C92D8: jal         0x800881F0
    // 0x800C92DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    _gctransitionDll_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x800C92DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_0:
    // 0x800C92E0: lbu         $t8, 0x14($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X14);
    // 0x800C92E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800C92E8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800C92EC: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800C92F0: bne         $at, $zero, L_800C92D8
    if (ctx->r1 != 0) {
        // 0x800C92F4: nop
    
            goto L_800C92D8;
    }
    // 0x800C92F4: nop

L_800C92F8:
    // 0x800C92F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C92FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C9300: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9304: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C9308: jr          $ra
    // 0x800C930C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C930C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C9310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9314: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C9318: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C931C: addiu       $s0, $s0, -0x54C0
    ctx->r16 = ADD32(ctx->r16, -0X54C0);
    // 0x800C9320: lbu         $t6, 0x14($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X14);
    // 0x800C9324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9328: beql        $t6, $zero, L_800C9348
    if (ctx->r14 == 0) {
        // 0x800C932C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800C9348;
    }
    goto skip_0;
    // 0x800C932C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_800C9330:
    // 0x800C9330: jal         0x800881D0
    // 0x800C9334: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    _gctransitionDll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800C9334: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x800C9338: lbu         $t7, 0x14($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X14);
    // 0x800C933C: bne         $t7, $zero, L_800C9330
    if (ctx->r15 != 0) {
        // 0x800C9340: nop
    
            goto L_800C9330;
    }
    // 0x800C9340: nop

    // 0x800C9344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800C9348:
    // 0x800C9348: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C934C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C9350: jr          $ra
    // 0x800C9354: nop

    return;
    // 0x800C9354: nop

;}
RECOMP_FUNC void func_800C9358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9358: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C935C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C9360: lbu         $v1, -0x54AC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54AC);
    // 0x800C9364: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800C9368: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800C936C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800C9370: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800C9374: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C9378: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800C937C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800C9380: beq         $v1, $zero, L_800C93EC
    if (ctx->r3 == 0) {
        // 0x800C9384: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800C93EC;
    }
    // 0x800C9384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C9388: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800C938C: blez        $v1, L_800C93E0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800C9390: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800C93E0;
    }
    // 0x800C9390: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800C9394: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C9398: addiu       $s0, $s0, -0x54C0
    ctx->r16 = ADD32(ctx->r16, -0X54C0);
    // 0x800C939C: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_800C93A0:
    // 0x800C93A0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800C93A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800C93A8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x800C93AC: beql        $a1, $s3, L_800C93D4
    if (ctx->r5 == ctx->r19) {
        // 0x800C93B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C93D4;
    }
    goto skip_0;
    // 0x800C93B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800C93B4: jal         0x800A8BD4
    // 0x800C93B8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800A8BD4(rdram, ctx);
        goto after_0;
    // 0x800C93B8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x800C93BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C93C0: jal         0x800881A8
    // 0x800C93C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    _gctransitionDll_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x800C93C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800C93C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C93CC: lbu         $v0, -0x54AC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54AC);
    // 0x800C93D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C93D4:
    // 0x800C93D4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800C93D8: bne         $at, $zero, L_800C93A0
    if (ctx->r1 != 0) {
        // 0x800C93DC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800C93A0;
    }
    // 0x800C93DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C93E0:
    // 0x800C93E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800C93E4: jal         0x800A8CCC
    // 0x800C93E8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800A8CCC(rdram, ctx);
        goto after_2;
    // 0x800C93E8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
L_800C93EC:
    // 0x800C93EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C93F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C93F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800C93F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800C93FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800C9400: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800C9404: jr          $ra
    // 0x800C9408: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C9408: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C940C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C940C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800C9410: lbu         $v0, -0x54AC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54AC);
    // 0x800C9414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C941C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C9420: beq         $v0, $zero, L_800C9474
    if (ctx->r2 == 0) {
        // 0x800C9424: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800C9474;
    }
    // 0x800C9424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C9428: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C942C: blez        $v0, L_800C9474
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800C9430: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800C9474;
    }
    // 0x800C9430: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800C9434: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9438: addiu       $a0, $a0, -0x54C0
    ctx->r4 = ADD32(ctx->r4, -0X54C0);
    // 0x800C943C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_800C9440:
    // 0x800C9440: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x800C9444: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800C9448: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800C944C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800C9450: bne         $v0, $a3, L_800C946C
    if (ctx->r2 != ctx->r7) {
        // 0x800C9454: nop
    
            goto L_800C946C;
    }
    // 0x800C9454: nop

    // 0x800C9458: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800C945C: jal         0x800881A8
    // 0x800C9460: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _gctransitionDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800C9460: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x800C9464: b           L_800C9478
    // 0x800C9468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9478;
    // 0x800C9468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C946C:
    // 0x800C946C: bne         $at, $zero, L_800C9440
    if (ctx->r1 != 0) {
        // 0x800C9470: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_800C9440;
    }
    // 0x800C9470: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_800C9474:
    // 0x800C9474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9478:
    // 0x800C9478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C947C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9484: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C9488: lbu         $v1, -0x54AC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54AC);
    // 0x800C948C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9490: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C9494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9498: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C949C: blez        $v1, L_800C94FC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800C94A0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_800C94FC;
    }
    // 0x800C94A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800C94A4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C94A8: addiu       $s0, $s0, -0x54C0
    ctx->r16 = ADD32(ctx->r16, -0X54C0);
L_800C94AC:
    // 0x800C94AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C94B0: beql        $a0, $zero, L_800C94F0
    if (ctx->r4 == 0) {
        // 0x800C94B4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800C94F0;
    }
    goto skip_0;
    // 0x800C94B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800C94B8: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x800C94BC: beq         $a1, $zero, L_800C94D8
    if (ctx->r5 == 0) {
        // 0x800C94C0: nop
    
            goto L_800C94D8;
    }
    // 0x800C94C0: nop

    // 0x800C94C4: jal         0x8008AEB4
    // 0x800C94C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8008AEB4(rdram, ctx);
        goto after_0;
    // 0x800C94C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800C94CC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800C94D0: sw          $v0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r2;
    // 0x800C94D4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800C94D8:
    // 0x800C94D8: jal         0x8001BAFC
    // 0x800C94DC: nop

    defrag(rdram, ctx);
        goto after_1;
    // 0x800C94DC: nop

    after_1:
    // 0x800C94E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800C94E4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800C94E8: lbu         $v1, -0x54AC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54AC);
    // 0x800C94EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800C94F0:
    // 0x800C94F0: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800C94F4: bne         $at, $zero, L_800C94AC
    if (ctx->r1 != 0) {
        // 0x800C94F8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800C94AC;
    }
    // 0x800C94F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800C94FC:
    // 0x800C94FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9500: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800C9504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800C9508: jr          $ra
    // 0x800C950C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800C950C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800C9510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9518: jal         0x800C91C8
    // 0x800C951C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C951C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800C9520: beq         $v0, $zero, L_800C9538
    if (ctx->r2 == 0) {
        // 0x800C9524: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C9538;
    }
    // 0x800C9524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C9528: jal         0x800881C8
    // 0x800C952C: nop

    _gctransitionDll_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x800C952C: nop

    after_1:
    // 0x800C9530: b           L_800C9540
    // 0x800C9534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9540;
    // 0x800C9534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9538:
    // 0x800C9538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C953C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9540:
    // 0x800C9540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9544: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C954C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C954C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9554: jal         0x800C91C8
    // 0x800C9558: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C9558: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800C955C: beq         $v0, $zero, L_800C9574
    if (ctx->r2 == 0) {
        // 0x800C9560: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C9574;
    }
    // 0x800C9560: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C9564: jal         0x800881C0
    // 0x800C9568: nop

    _gctransitionDll_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800C9568: nop

    after_1:
    // 0x800C956C: b           L_800C957C
    // 0x800C9570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C957C;
    // 0x800C9570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9574:
    // 0x800C9574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C9578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C957C:
    // 0x800C957C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9580: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9588: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800C958C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800C9590: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C959C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C95A0: jal         0x800C91C8
    // 0x800C95A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C95A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800C95A8: bne         $v0, $zero, L_800C95BC
    if (ctx->r2 != 0) {
        // 0x800C95AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C95BC;
    }
    // 0x800C95AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C95B0: jal         0x800C9150
    // 0x800C95B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C9150(rdram, ctx);
        goto after_1;
    // 0x800C95B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x800C95B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800C95BC:
    // 0x800C95BC: jal         0x800881B0
    // 0x800C95C0: nop

    _gctransitionDll_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800C95C0: nop

    after_2:
    // 0x800C95C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C95C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C95CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C95D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C95D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C95D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C95DC: jal         0x800C91C8
    // 0x800C95E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C95E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800C95E4: beq         $v0, $zero, L_800C95FC
    if (ctx->r2 == 0) {
        // 0x800C95E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C95FC;
    }
    // 0x800C95E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C95EC: jal         0x800881B8
    // 0x800C95F0: nop

    _gctransitionDll_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800C95F0: nop

    after_1:
    // 0x800C95F4: b           L_800C9604
    // 0x800C95F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9604;
    // 0x800C95F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C95FC:
    // 0x800C95FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C9600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9604:
    // 0x800C9604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9608: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9618: jal         0x800C91C8
    // 0x800C961C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C961C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800C9620: bne         $v0, $zero, L_800C9634
    if (ctx->r2 != 0) {
        // 0x800C9624: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C9634;
    }
    // 0x800C9624: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C9628: jal         0x800C9150
    // 0x800C962C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C9150(rdram, ctx);
        goto after_1;
    // 0x800C962C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x800C9630: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800C9634:
    // 0x800C9634: jal         0x800881D8
    // 0x800C9638: nop

    _gctransitionDll_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x800C9638: nop

    after_2:
    // 0x800C963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9644: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C964C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C964C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9654: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C9658: jal         0x800C91C8
    // 0x800C965C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C965C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800C9660: bne         $v0, $zero, L_800C9674
    if (ctx->r2 != 0) {
        // 0x800C9664: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C9674;
    }
    // 0x800C9664: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C9668: jal         0x800C9150
    // 0x800C966C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C9150(rdram, ctx);
        goto after_1;
    // 0x800C966C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x800C9670: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800C9674:
    // 0x800C9674: jal         0x800881E0
    // 0x800C9678: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _gctransitionDll_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x800C9678: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800C967C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9684: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C968C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C968C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800C9698: jal         0x800C91C8
    // 0x800C969C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C969C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800C96A0: bne         $v0, $zero, L_800C96B4
    if (ctx->r2 != 0) {
        // 0x800C96A4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C96B4;
    }
    // 0x800C96A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C96A8: jal         0x800C9150
    // 0x800C96AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C9150(rdram, ctx);
        goto after_1;
    // 0x800C96AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800C96B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800C96B4:
    // 0x800C96B4: jal         0x800881E0
    // 0x800C96B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _gctransitionDll_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x800C96B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800C96BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C96C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C96C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C96CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C96CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C96D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C96D4: jal         0x800C91C8
    // 0x800C96D8: nop

    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C96D8: nop

    after_0:
    // 0x800C96DC: beq         $v0, $zero, L_800C9708
    if (ctx->r2 == 0) {
        // 0x800C96E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C9708;
    }
    // 0x800C96E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C96E4: lbu         $t6, 0xA($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XA);
    // 0x800C96E8: lbu         $t7, 0x1C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1C);
    // 0x800C96EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800C96F0: bne         $t6, $t7, L_800C9700
    if (ctx->r14 != ctx->r15) {
        // 0x800C96F4: nop
    
            goto L_800C9700;
    }
    // 0x800C96F4: nop

    // 0x800C96F8: b           L_800C970C
    // 0x800C96FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800C970C;
    // 0x800C96FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800C9700:
    // 0x800C9700: b           L_800C970C
    // 0x800C9704: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800C970C;
    // 0x800C9704: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800C9708:
    // 0x800C9708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800C970C:
    // 0x800C970C: jr          $ra
    // 0x800C9710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800C9710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800C9714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C971C: jal         0x800C91C8
    // 0x800C9720: nop

    func_800C91C8(rdram, ctx);
        goto after_0;
    // 0x800C9720: nop

    after_0:
    // 0x800C9724: beq         $v0, $zero, L_800C973C
    if (ctx->r2 == 0) {
        // 0x800C9728: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800C973C;
    }
    // 0x800C9728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C972C: jal         0x800881C0
    // 0x800C9730: nop

    _gctransitionDll_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800C9730: nop

    after_1:
    // 0x800C9734: b           L_800C9744
    // 0x800C9738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9744;
    // 0x800C9738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C973C:
    // 0x800C973C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C9740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9744:
    // 0x800C9744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9748: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9750: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9754: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C9758: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C975C: addiu       $s0, $s0, -0x54A0
    ctx->r16 = ADD32(ctx->r16, -0X54A0);
    // 0x800C9760: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C9764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9768: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C976C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800C9770: bne         $a0, $zero, L_800C9794
    if (ctx->r4 != 0) {
        // 0x800C9774: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_800C9794;
    }
    // 0x800C9774: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800C9778: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x800C977C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800C9780: jal         0x800B2D70
    // 0x800C9784: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_800B2D70(rdram, ctx);
        goto after_0;
    // 0x800C9784: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800C9788: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C978C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800C9790: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800C9794:
    // 0x800C9794: jal         0x800B28C4
    // 0x800C9798: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800C9798: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x800C979C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C97A0: jal         0x800B296C
    // 0x800C97A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_2;
    // 0x800C97A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x800C97A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800C97AC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C97B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800C97B4: bne         $v0, $a2, L_800C97C8
    if (ctx->r2 != ctx->r6) {
        // 0x800C97B8: sltu        $at, $a2, $v0
        ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
            goto L_800C97C8;
    }
    // 0x800C97B8: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x800C97BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C97C0: b           L_800C97D0
    // 0x800C97C4: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
        goto L_800C97D0;
    // 0x800C97C4: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_800C97C8:
    // 0x800C97C8: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800C97CC: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_800C97D0:
    // 0x800C97D0: beq         $at, $zero, L_800C97FC
    if (ctx->r1 == 0) {
        // 0x800C97D4: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_800C97FC;
    }
    // 0x800C97D4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x800C97D8: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
L_800C97DC:
    // 0x800C97DC: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x800C97E0: nop

    // 0x800C97E4: bc1tl       L_800C9800
    if (c1cs) {
        // 0x800C97E8: subu        $a1, $v1, $a2
        ctx->r5 = SUB32(ctx->r3, ctx->r6);
            goto L_800C9800;
    }
    goto skip_0;
    // 0x800C97E8: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    skip_0:
    // 0x800C97EC: addiu       $v1, $v1, 0x70
    ctx->r3 = ADD32(ctx->r3, 0X70);
    // 0x800C97F0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800C97F4: bnel        $at, $zero, L_800C97DC
    if (ctx->r1 != 0) {
        // 0x800C97F8: lwc1        $f8, 0x0($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
            goto L_800C97DC;
    }
    goto skip_1;
    // 0x800C97F8: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    skip_1:
L_800C97FC:
    // 0x800C97FC: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
L_800C9800:
    // 0x800C9800: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x800C9804: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x800C9808: mflo        $a1
    ctx->r5 = lo;
    // 0x800C980C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800C9810: jal         0x800B2B38
    // 0x800C9814: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_800B2B38(rdram, ctx);
        goto after_3;
    // 0x800C9814: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x800C9818: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C981C: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x800C9820: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C9824: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x800C9828: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C982C: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x800C9830: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C9834: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x800C9838: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800C983C: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x800C9840: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C9844: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x800C9848: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800C984C: sw          $t2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r10;
    // 0x800C9850: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C9854: sw          $t3, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r11;
    // 0x800C9858: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C985C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C9860: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9864: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C986C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C986C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9870: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9874: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C9878: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x800C987C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C9880: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x800C9884: beq         $at, $zero, L_800C9960
    if (ctx->r1 == 0) {
        // 0x800C9888: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800C9960;
    }
    // 0x800C9888: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C988C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C9890: addu        $at, $at, $t6
    gpr jr_addend_800C9898 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C9894: lw          $t6, 0x5930($at)
    ctx->r14 = ADD32(ctx->r1, 0X5930);
    // 0x800C9898: jr          $t6
    // 0x800C989C: nop

    switch (jr_addend_800C9898 >> 2) {
        case 0: goto L_800C98A0; break;
        case 1: goto L_800C98B4; break;
        case 2: goto L_800C98CC; break;
        case 3: goto L_800C98E8; break;
        case 4: goto L_800C9904; break;
        case 5: goto L_800C9924; break;
        case 6: goto L_800C9950; break;
        default: switch_error(__func__, 0x800C9898, 0x80125930);
    }
    // 0x800C989C: nop

L_800C98A0:
    // 0x800C98A0: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C98A4: jalr        $t9
    // 0x800C98A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800C98A8: nop

    after_0:
    // 0x800C98AC: b           L_800C9964
    // 0x800C98B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9964;
    // 0x800C98B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C98B4:
    // 0x800C98B4: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C98B8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800C98BC: jalr        $t9
    // 0x800C98C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800C98C0: nop

    after_1:
    // 0x800C98C4: b           L_800C9964
    // 0x800C98C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9964;
    // 0x800C98C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C98CC:
    // 0x800C98CC: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C98D0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800C98D4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x800C98D8: jalr        $t9
    // 0x800C98DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800C98DC: nop

    after_2:
    // 0x800C98E0: b           L_800C9964
    // 0x800C98E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9964;
    // 0x800C98E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C98E8:
    // 0x800C98E8: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C98EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800C98F0: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x800C98F4: jalr        $t9
    // 0x800C98F8: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800C98F8: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x800C98FC: b           L_800C9964
    // 0x800C9900: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9964;
    // 0x800C9900: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C9904:
    // 0x800C9904: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C9908: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800C990C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x800C9910: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x800C9914: jalr        $t9
    // 0x800C9918: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x800C9918: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    after_4:
    // 0x800C991C: b           L_800C9964
    // 0x800C9920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9964;
    // 0x800C9920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C9924:
    // 0x800C9924: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x800C9928: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800C992C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x800C9930: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x800C9934: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x800C9938: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C993C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C9940: jalr        $t9
    // 0x800C9944: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x800C9944: nop

    after_5:
    // 0x800C9948: b           L_800C9964
    // 0x800C994C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9964;
    // 0x800C994C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C9950:
    // 0x800C9950: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800C9954: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x800C9958: jalr        $t9
    // 0x800C995C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x800C995C: nop

    after_6:
L_800C9960:
    // 0x800C9960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C9964:
    // 0x800C9964: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C9968: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C996C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C997C: jal         0x800FC63C
    // 0x800C9980: nop

    func_800FC63C(rdram, ctx);
        goto after_0;
    // 0x800C9980: nop

    after_0:
    // 0x800C9984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C998C: jr          $ra
    // 0x800C9990: nop

    return;
    // 0x800C9990: nop

;}
RECOMP_FUNC void func_800C9994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C999C: jal         0x800FCAE0
    // 0x800C99A0: nop

    func_800FCAE0(rdram, ctx);
        goto after_0;
    // 0x800C99A0: nop

    after_0:
    // 0x800C99A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C99A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C99AC: jr          $ra
    // 0x800C99B0: nop

    return;
    // 0x800C99B0: nop

;}
RECOMP_FUNC void func_800C99B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C99B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800C99B8: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x800C99BC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800C99C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C99C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C99C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C99CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C99D0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800C99D4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800C99D8: jal         0x800C3FF0
    // 0x800C99DC: nop

    func_800C3FF0(rdram, ctx);
        goto after_0;
    // 0x800C99DC: nop

    after_0:
    // 0x800C99E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C99E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C99E8: jr          $ra
    // 0x800C99EC: nop

    return;
    // 0x800C99EC: nop

;}
RECOMP_FUNC void func_800C99F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C99F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C99F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C99F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C99FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9A00: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800C9A04: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800C9A08: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x800C9A0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x800C9A10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C9A14: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800C9A18: addiu       $a3, $s0, 0xC
    ctx->r7 = ADD32(ctx->r16, 0XC);
    // 0x800C9A1C: jal         0x800C4244
    // 0x800C9A20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800C4244(rdram, ctx);
        goto after_0;
    // 0x800C9A20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C9A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9A28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C9A2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9A30: jr          $ra
    // 0x800C9A34: nop

    return;
    // 0x800C9A34: nop

;}
RECOMP_FUNC void func_800C9A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9A38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C9A3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C9A40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800C9A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9A48: addiu       $a3, $a0, 0xC
    ctx->r7 = ADD32(ctx->r4, 0XC);
    // 0x800C9A4C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800C9A50: jal         0x800EEEA8
    // 0x800C9A54: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800EEEA8(rdram, ctx);
        goto after_0;
    // 0x800C9A54: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x800C9A58: beq         $v0, $zero, L_800C9A84
    if (ctx->r2 == 0) {
        // 0x800C9A5C: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_800C9A84;
    }
    // 0x800C9A5C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C9A60: lh          $t6, 0x18($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X18);
    // 0x800C9A64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C9A68: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x800C9A6C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800C9A70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800C9A74: jal         0x8008A208
    // 0x800C9A78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    _subaddiedialog_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x800C9A78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x800C9A7C: b           L_800C9AA0
    // 0x800C9A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800C9AA0;
    // 0x800C9A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C9A84:
    // 0x800C9A84: lh          $t7, 0x18($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X18);
    // 0x800C9A88: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C9A8C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x800C9A90: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800C9A94: jal         0x8008A208
    // 0x800C9A98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    _subaddiedialog_entrypoint_11(rdram, ctx);
        goto after_2;
    // 0x800C9A98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x800C9A9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800C9AA0:
    // 0x800C9AA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C9AA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C9AA8: jr          $ra
    // 0x800C9AAC: nop

    return;
    // 0x800C9AAC: nop

;}
RECOMP_FUNC void func_800C9AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9AB4: sltiu       $at, $a0, 0x6
    ctx->r1 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x800C9AB8: beq         $at, $zero, L_800C9B20
    if (ctx->r1 == 0) {
        // 0x800C9ABC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800C9B20;
    }
    // 0x800C9ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9AC0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800C9AC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C9AC8: addu        $at, $at, $t6
    gpr jr_addend_800C9AD0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C9ACC: lw          $t6, 0x594C($at)
    ctx->r14 = ADD32(ctx->r1, 0X594C);
    // 0x800C9AD0: jr          $t6
    // 0x800C9AD4: nop

    switch (jr_addend_800C9AD0 >> 2) {
        case 0: goto L_800C9B08; break;
        case 1: goto L_800C9AD8; break;
        case 2: goto L_800C9AE8; break;
        case 3: goto L_800C9AF8; break;
        case 4: goto L_800C9B20; break;
        case 5: goto L_800C9B18; break;
        default: switch_error(__func__, 0x800C9AD0, 0x8012594C);
    }
    // 0x800C9AD4: nop

L_800C9AD8:
    // 0x800C9AD8: jal         0x80090708
    // 0x800C9ADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80090708(rdram, ctx);
        goto after_0;
    // 0x800C9ADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800C9AE0: b           L_800C9B24
    // 0x800C9AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9B24;
    // 0x800C9AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9AE8:
    // 0x800C9AE8: jal         0x80090708
    // 0x800C9AEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80090708(rdram, ctx);
        goto after_1;
    // 0x800C9AEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x800C9AF0: b           L_800C9B24
    // 0x800C9AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9B24;
    // 0x800C9AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9AF8:
    // 0x800C9AF8: jal         0x80090708
    // 0x800C9AFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80090708(rdram, ctx);
        goto after_2;
    // 0x800C9AFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x800C9B00: b           L_800C9B24
    // 0x800C9B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9B24;
    // 0x800C9B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9B08:
    // 0x800C9B08: jal         0x80090708
    // 0x800C9B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80090708(rdram, ctx);
        goto after_3;
    // 0x800C9B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800C9B10: b           L_800C9B24
    // 0x800C9B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800C9B24;
    // 0x800C9B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9B18:
    // 0x800C9B18: jal         0x800A51C0
    // 0x800C9B1C: nop

    func_800A51C0(rdram, ctx);
        goto after_4;
    // 0x800C9B1C: nop

    after_4:
L_800C9B20:
    // 0x800C9B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9B24:
    // 0x800C9B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9B28: jr          $ra
    // 0x800C9B2C: nop

    return;
    // 0x800C9B2C: nop

;}
RECOMP_FUNC void func_800C9B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9B38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800C9B3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C9B40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C9B44: jal         0x801069A4
    // 0x800C9B48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_801069A4(rdram, ctx);
        goto after_0;
    // 0x800C9B48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C9B4C: beq         $v0, $zero, L_800C9B74
    if (ctx->r2 == 0) {
        // 0x800C9B50: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800C9B74;
    }
    // 0x800C9B50: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9B54: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x800C9B58: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C9B5C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x800C9B60: srl         $t8, $t7, 1
    ctx->r24 = S32(U32(ctx->r15) >> 1);
    // 0x800C9B64: bnel        $t6, $t8, L_800C9B78
    if (ctx->r14 != ctx->r24) {
        // 0x800C9B68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C9B78;
    }
    goto skip_0;
    // 0x800C9B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C9B6C: jal         0x8010114C
    // 0x800C9B70: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_8010114C(rdram, ctx);
        goto after_1;
    // 0x800C9B70: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_1:
L_800C9B74:
    // 0x800C9B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9B78:
    // 0x800C9B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C9B7C: jr          $ra
    // 0x800C9B80: nop

    return;
    // 0x800C9B80: nop

;}
RECOMP_FUNC void func_800C9B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9B84: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9B88: lw          $a0, -0x54A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X54A0);
    // 0x800C9B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9B94: beql        $a0, $zero, L_800C9BA8
    if (ctx->r4 == 0) {
        // 0x800C9B98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C9BA8;
    }
    goto skip_0;
    // 0x800C9B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C9B9C: jal         0x800B28B8
    // 0x800C9BA0: nop

    func_800B28B8(rdram, ctx);
        goto after_0;
    // 0x800C9BA0: nop

    after_0:
    // 0x800C9BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9BA8:
    // 0x800C9BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9BAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9BB4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800C9BB8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C9BBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C9BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9BC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C9BC8: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x800C9BCC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9BD0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800C9BD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9BD8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800C9BDC: addiu       $a1, $a1, -0x664C
    ctx->r5 = ADD32(ctx->r5, -0X664C);
    // 0x800C9BE0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800C9BE4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800C9BE8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800C9BEC: jal         0x800C9E64
    // 0x800C9BF0: nop

    func_800C9E64(rdram, ctx);
        goto after_0;
    // 0x800C9BF0: nop

    after_0:
    // 0x800C9BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C9BFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9C08: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800C9C0C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9C10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C9C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9C18: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800C9C1C: jal         0x800C9E20
    // 0x800C9C20: addiu       $a1, $a1, -0x668C
    ctx->r5 = ADD32(ctx->r5, -0X668C);
    func_800C9E20(rdram, ctx);
        goto after_0;
    // 0x800C9C20: addiu       $a1, $a1, -0x668C
    ctx->r5 = ADD32(ctx->r5, -0X668C);
    after_0:
    // 0x800C9C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9C2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9C34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9C38: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800C9C3C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9C40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800C9C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9C48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800C9C4C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800C9C50: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800C9C54: addiu       $a1, $a1, -0x666C
    ctx->r5 = ADD32(ctx->r5, -0X666C);
    // 0x800C9C58: jal         0x800C9E64
    // 0x800C9C5C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    func_800C9E64(rdram, ctx);
        goto after_0;
    // 0x800C9C5C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    after_0:
    // 0x800C9C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C9C68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9C70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C9C74: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800C9C78: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800C9C7C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800C9C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9C84: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800C9C88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x800C9C8C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800C9C90: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x800C9C94: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800C9C98: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800C9C9C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x800C9CA0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x800C9CA4: jal         0x800EE7F8
    // 0x800C9CA8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C9CA8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C9CAC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800C9CB0: addiu       $a1, $a1, -0x6610
    ctx->r5 = ADD32(ctx->r5, -0X6610);
    // 0x800C9CB4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C9CB8: jal         0x800C9EF8
    // 0x800C9CBC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_800C9EF8(rdram, ctx);
        goto after_1;
    // 0x800C9CBC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x800C9CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800C9CC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9CD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C9CD4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x800C9CD8: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x800C9CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9CE0: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800C9CE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800C9CE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800C9CEC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800C9CF0: beq         $t7, $zero, L_800C9D0C
    if (ctx->r15 == 0) {
        // 0x800C9CF4: sh          $t6, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r14;
            goto L_800C9D0C;
    }
    // 0x800C9CF4: sh          $t6, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r14;
    // 0x800C9CF8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800C9CFC: jal         0x800EE7F8
    // 0x800C9D00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800C9D00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x800C9D04: b           L_800C9D14
    // 0x800C9D08: nop

        goto L_800C9D14;
    // 0x800C9D08: nop

L_800C9D0C:
    // 0x800C9D0C: jal         0x800EFD24
    // 0x800C9D10: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x800C9D10: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_1:
L_800C9D14:
    // 0x800C9D14: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800C9D18: addiu       $a1, $a1, -0x65C8
    ctx->r5 = ADD32(ctx->r5, -0X65C8);
    // 0x800C9D1C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C9D20: jal         0x800C9EF8
    // 0x800C9D24: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800C9EF8(rdram, ctx);
        goto after_2;
    // 0x800C9D24: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x800C9D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9D2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800C9D30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9D3C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9D44: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800C9D48: jal         0x800C9DE4
    // 0x800C9D4C: addiu       $a1, $a1, -0x6550
    ctx->r5 = ADD32(ctx->r5, -0X6550);
    func_800C9DE4(rdram, ctx);
        goto after_0;
    // 0x800C9D4C: addiu       $a1, $a1, -0x6550
    ctx->r5 = ADD32(ctx->r5, -0X6550);
    after_0:
    // 0x800C9D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9D58: jr          $ra
    // 0x800C9D5C: nop

    return;
    // 0x800C9D5C: nop

;}
RECOMP_FUNC void func_800C9D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9D64: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9D6C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800C9D70: jal         0x800C9DE4
    // 0x800C9D74: addiu       $a1, $a1, 0x54F8
    ctx->r5 = ADD32(ctx->r5, 0X54F8);
    func_800C9DE4(rdram, ctx);
        goto after_0;
    // 0x800C9D74: addiu       $a1, $a1, 0x54F8
    ctx->r5 = ADD32(ctx->r5, 0X54F8);
    after_0:
    // 0x800C9D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9D80: jr          $ra
    // 0x800C9D84: nop

    return;
    // 0x800C9D84: nop

;}
RECOMP_FUNC void func_800C9D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9D90: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800C9D94: jal         0x800C9DAC
    // 0x800C9D98: addiu       $a1, $a1, 0x5524
    ctx->r5 = ADD32(ctx->r5, 0X5524);
    func_800C9DAC(rdram, ctx);
        goto after_0;
    // 0x800C9D98: addiu       $a1, $a1, 0x5524
    ctx->r5 = ADD32(ctx->r5, 0X5524);
    after_0:
    // 0x800C9D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9DA4: jr          $ra
    // 0x800C9DA8: nop

    return;
    // 0x800C9DA8: nop

;}
RECOMP_FUNC void func_800C9DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9DB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9DB4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C9DBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800C9DC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800C9DC4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C9DC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C9DCC: jal         0x800C9750
    // 0x800C9DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C9DD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9DD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9DDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9DE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9DE8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800C9DEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9DF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9DF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C9DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C9DFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800C9E00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800C9E04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C9E08: jal         0x800C9750
    // 0x800C9E0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9E0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x800C9E10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9E14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9E18: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9E20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9E24: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800C9E28: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9E2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9E30: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C9E34: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800C9E38: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800C9E3C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800C9E40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800C9E44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800C9E48: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C9E4C: jal         0x800C9750
    // 0x800C9E50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9E50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x800C9E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9E58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9E5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9E64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9E68: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C9E6C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800C9E70: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9E74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9E78: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C9E7C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800C9E80: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800C9E84: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800C9E88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800C9E8C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C9E90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C9E94: jal         0x800C9750
    // 0x800C9E98: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9E98: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x800C9E9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9EA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9EA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9EAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9EB0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C9EB4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C9EB8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800C9EBC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9EC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9EC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C9EC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800C9ECC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800C9ED0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800C9ED4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C9ED8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C9EDC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800C9EE0: jal         0x800C9750
    // 0x800C9EE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9EE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x800C9EE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9EF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9EFC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800C9F00: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800C9F04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9F08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C9F0C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x800C9F10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800C9F14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800C9F18: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C9F1C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C9F20: jal         0x800C9750
    // 0x800C9F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800C9F28: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    // 0x800C9F2C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800C9F30: jal         0x8001BBA0
    // 0x800C9F34: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    rare_memcpy(rdram, ctx);
        goto after_1;
    // 0x800C9F34: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_1:
    // 0x800C9F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9F40: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9F48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9F4C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800C9F50: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800C9F54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9F58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800C9F5C: lhu         $t7, 0x12($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X12);
    // 0x800C9F60: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800C9F64: addiu       $a2, $a2, -0x64D0
    ctx->r6 = ADD32(ctx->r6, -0X64D0);
    // 0x800C9F68: srl         $t8, $t7, 1
    ctx->r24 = S32(U32(ctx->r15) >> 1);
    // 0x800C9F6C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C9F70: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800C9F74: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800C9F78: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x800C9F7C: jal         0x800C9750
    // 0x800C9F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C9750(rdram, ctx);
        goto after_0;
    // 0x800C9F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x800C9F84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9F8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9F94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C9F98: lw          $a0, -0x54A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X54A0);
    // 0x800C9F9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9FA4: sltiu       $v0, $a0, 0x1
    ctx->r2 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x800C9FA8: bnel        $v0, $zero, L_800C9FC4
    if (ctx->r2 != 0) {
        // 0x800C9FAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800C9FC4;
    }
    goto skip_0;
    // 0x800C9FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800C9FB0: jal         0x800B2928
    // 0x800C9FB4: nop

    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x800C9FB4: nop

    after_0:
    // 0x800C9FB8: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800C9FBC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800C9FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800C9FC4:
    // 0x800C9FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9FC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800C9FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9FD0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800C9FD4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800C9FD8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800C9FDC: addiu       $s0, $s0, -0x54A0
    ctx->r16 = ADD32(ctx->r16, -0X54A0);
    // 0x800C9FE0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800C9FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9FE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800C9FEC: beql        $a0, $zero, L_800CA050
    if (ctx->r4 == 0) {
        // 0x800C9FF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800CA050;
    }
    goto skip_0;
    // 0x800C9FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800C9FF4: jal         0x800B2928
    // 0x800C9FF8: nop

    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x800C9FF8: nop

    after_0:
    // 0x800C9FFC: blez        $v0, L_800CA040
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800CA000: addiu       $s1, $sp, 0x24
        ctx->r17 = ADD32(ctx->r29, 0X24);
            goto L_800CA040;
    }
    // 0x800CA000: addiu       $s1, $sp, 0x24
    ctx->r17 = ADD32(ctx->r29, 0X24);
L_800CA004:
    // 0x800CA004: jal         0x800B28C4
    // 0x800CA008: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800CA008: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800CA00C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CA010: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800CA014: jal         0x8001BBA0
    // 0x800CA018: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    rare_memcpy(rdram, ctx);
        goto after_2;
    // 0x800CA018: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_2:
    // 0x800CA01C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800CA020: jal         0x800B2E30
    // 0x800CA024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800B2E30(rdram, ctx);
        goto after_3;
    // 0x800CA024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800CA028: jal         0x800C986C
    // 0x800CA02C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800C986C(rdram, ctx);
        goto after_4;
    // 0x800CA02C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800CA030: jal         0x800B2928
    // 0x800CA034: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B2928(rdram, ctx);
        goto after_5;
    // 0x800CA034: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x800CA038: bgtz        $v0, L_800CA004
    if (SIGNED(ctx->r2) > 0) {
        // 0x800CA03C: nop
    
            goto L_800CA004;
    }
    // 0x800CA03C: nop

L_800CA040:
    // 0x800CA040: jal         0x800B2D28
    // 0x800CA044: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B2D28(rdram, ctx);
        goto after_6;
    // 0x800CA044: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_6:
    // 0x800CA048: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800CA04C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CA050:
    // 0x800CA050: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800CA054: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800CA058: jr          $ra
    // 0x800CA05C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800CA05C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800CA060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA060: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CA064: lw          $a0, -0x54A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X54A0);
    // 0x800CA068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA070: beql        $a0, $zero, L_800CA08C
    if (ctx->r4 == 0) {
        // 0x800CA074: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CA08C;
    }
    goto skip_0;
    // 0x800CA074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CA078: jal         0x800B2D28
    // 0x800CA07C: nop

    func_800B2D28(rdram, ctx);
        goto after_0;
    // 0x800CA07C: nop

    after_0:
    // 0x800CA080: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CA084: sw          $zero, -0x54A0($at)
    MEM_W(-0X54A0, ctx->r1) = 0;
    // 0x800CA088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CA08C:
    // 0x800CA08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA090: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA098: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CA09C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CA0A0: jr          $ra
    // 0x800CA0A4: swc1        $f4, -0x549C($at)
    MEM_W(-0X549C, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x800CA0A4: swc1        $f4, -0x549C($at)
    MEM_W(-0X549C, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800CA0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA0A8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800CA0AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA0B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800CA0B4: jal         0x800C9F94
    // 0x800CA0B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800C9F94(rdram, ctx);
        goto after_0;
    // 0x800CA0B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800CA0BC: bnel        $v0, $zero, L_800CA164
    if (ctx->r2 != 0) {
        // 0x800CA0C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800CA164;
    }
    goto skip_0;
    // 0x800CA0C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800CA0C4: jal         0x800D8FF8
    // 0x800CA0C8: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x800CA0C8: nop

    after_1:
    // 0x800CA0CC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800CA0D0: addiu       $s0, $s0, -0x54A0
    ctx->r16 = ADD32(ctx->r16, -0X54A0);
    // 0x800CA0D4: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CA0D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800CA0DC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800CA0E0: jal         0x800B2928
    // 0x800CA0E4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    func_800B2928(rdram, ctx);
        goto after_2;
    // 0x800CA0E4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x800CA0E8: blez        $v0, L_800CA144
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800CA0EC: addiu       $s1, $sp, 0x24
        ctx->r17 = ADD32(ctx->r29, 0X24);
            goto L_800CA144;
    }
    // 0x800CA0EC: addiu       $s1, $sp, 0x24
    ctx->r17 = ADD32(ctx->r29, 0X24);
L_800CA0F0:
    // 0x800CA0F0: jal         0x800B28C4
    // 0x800CA0F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_3;
    // 0x800CA0F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x800CA0F8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CA0FC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800CA100: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800CA104: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CA108: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800CA10C: nop

    // 0x800CA110: bc1t        L_800CA144
    if (c1cs) {
        // 0x800CA114: nop
    
            goto L_800CA144;
    }
    // 0x800CA114: nop

    // 0x800CA118: jal         0x8001BBA0
    // 0x800CA11C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    rare_memcpy(rdram, ctx);
        goto after_4;
    // 0x800CA11C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_4:
    // 0x800CA120: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800CA124: jal         0x800B2E30
    // 0x800CA128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800B2E30(rdram, ctx);
        goto after_5;
    // 0x800CA128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800CA12C: jal         0x800C986C
    // 0x800CA130: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800C986C(rdram, ctx);
        goto after_6;
    // 0x800CA130: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800CA134: jal         0x800B2928
    // 0x800CA138: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B2928(rdram, ctx);
        goto after_7;
    // 0x800CA138: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_7:
    // 0x800CA13C: bgtz        $v0, L_800CA0F0
    if (SIGNED(ctx->r2) > 0) {
        // 0x800CA140: nop
    
            goto L_800CA0F0;
    }
    // 0x800CA140: nop

L_800CA144:
    // 0x800CA144: jal         0x800B2928
    // 0x800CA148: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B2928(rdram, ctx);
        goto after_8;
    // 0x800CA148: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_8:
    // 0x800CA14C: bnel        $v0, $zero, L_800CA164
    if (ctx->r2 != 0) {
        // 0x800CA150: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800CA164;
    }
    goto skip_1;
    // 0x800CA150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800CA154: jal         0x800B2D28
    // 0x800CA158: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B2D28(rdram, ctx);
        goto after_9;
    // 0x800CA158: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_9:
    // 0x800CA15C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800CA160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CA164:
    // 0x800CA164: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800CA168: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800CA16C: jr          $ra
    // 0x800CA170: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800CA170: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800CA174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA174: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CA178: lw          $a0, -0x54A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X54A0);
    // 0x800CA17C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA184: beql        $a0, $zero, L_800CA1A0
    if (ctx->r4 == 0) {
        // 0x800CA188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CA1A0;
    }
    goto skip_0;
    // 0x800CA188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CA18C: jal         0x800B2F58
    // 0x800CA190: nop

    func_800B2F58(rdram, ctx);
        goto after_0;
    // 0x800CA190: nop

    after_0:
    // 0x800CA194: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CA198: sw          $v0, -0x54A0($at)
    MEM_W(-0X54A0, ctx->r1) = ctx->r2;
    // 0x800CA19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CA1A0:
    // 0x800CA1A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA1A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA1B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CA1B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CA1B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CA1BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA1C0: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    // 0x800CA1C4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800CA1C8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CA1CC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x800CA1D0: jal         0x800EFA4C
    // 0x800CA1D4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800CA1D4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_0:
    // 0x800CA1D8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800CA1DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CA1E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CA1E4: lwc1        $f4, 0xE4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XE4);
    // 0x800CA1E8: lwc1        $f10, 0xE8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XE8);
    // 0x800CA1EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA1F0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800CA1F4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CA1F8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800CA1FC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800CA200: jal         0x800EF934
    // 0x800CA204: nop

    func_800EF934(rdram, ctx);
        goto after_1;
    // 0x800CA204: nop

    after_1:
    // 0x800CA208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA20C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CA210: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA218: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CA21C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CA220: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CA224: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CA228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA22C: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    // 0x800CA230: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800CA234: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CA238: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x800CA23C: jal         0x800EFA4C
    // 0x800CA240: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800CA240: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x800CA244: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA248: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800CA24C: jal         0x800EF8BC
    // 0x800CA250: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800EF8BC(rdram, ctx);
        goto after_1;
    // 0x800CA250: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x800CA254: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CA258: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CA25C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x800CA260: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800CA264: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    // 0x800CA268: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CA26C: jal         0x800EFA4C
    // 0x800CA270: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x800CA270: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x800CA274: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800CA278: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800CA27C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA280: lwc1        $f4, 0xE8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XE8);
    // 0x800CA284: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CA288: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800CA28C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800CA290: jal         0x800EF934
    // 0x800CA294: nop

    func_800EF934(rdram, ctx);
        goto after_3;
    // 0x800CA294: nop

    after_3:
    // 0x800CA298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA29C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CA2A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA2A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CA2AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA2B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CA2B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA2BC: swc1        $f4, 0x110($a0)
    MEM_W(0X110, ctx->r4) = ctx->f4.u32l;
    // 0x800CA2C0: jal         0x800137F4
    // 0x800CA2C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800137F4(rdram, ctx);
        goto after_0;
    // 0x800CA2C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CA2C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800CA2CC: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x800CA2D0: swc1        $f0, 0x120($a1)
    MEM_W(0X120, ctx->r5) = ctx->f0.u32l;
    // 0x800CA2D4: jal         0x80013788
    // 0x800CA2D8: swc1        $f6, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->f6.u32l;
    func_80013788(rdram, ctx);
        goto after_1;
    // 0x800CA2D8: swc1        $f6, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->f6.u32l;
    after_1:
    // 0x800CA2DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800CA2E0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x800CA2E4: lwc1        $f8, 0x120($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X120);
    // 0x800CA2E8: lwc1        $f10, 0xE8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XE8);
    // 0x800CA2EC: swc1        $f2, 0x124($a1)
    MEM_W(0X124, ctx->r5) = ctx->f2.u32l;
    // 0x800CA2F0: swc1        $f2, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->f2.u32l;
    // 0x800CA2F4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800CA2F8: addiu       $a0, $a1, 0x11C
    ctx->r4 = ADD32(ctx->r5, 0X11C);
    // 0x800CA2FC: jal         0x800EF2A0
    // 0x800CA300: swc1        $f16, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = ctx->f16.u32l;
    func_800EF2A0(rdram, ctx);
        goto after_2;
    // 0x800CA300: swc1        $f16, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = ctx->f16.u32l;
    after_2:
    // 0x800CA304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA30C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA31C: jal         0x8001BBC8
    // 0x800CA320: addiu       $a2, $zero, 0x168
    ctx->r6 = ADD32(0, 0X168);
    aligned4_memcpy(rdram, ctx);
        goto after_0;
    // 0x800CA320: addiu       $a2, $zero, 0x168
    ctx->r6 = ADD32(0, 0X168);
    after_0:
    // 0x800CA324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA32C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA334: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CA338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA33C: jal         0x8001ACCC
    // 0x800CA340: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800CA340: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800CA344: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800CA348: jal         0x800CA440
    // 0x800CA34C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CA440(rdram, ctx);
        goto after_1;
    // 0x800CA34C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800CA350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA354: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CA35C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA36C: jal         0x8001B084
    // 0x800CA370: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800CA370: nop

    after_0:
    // 0x800CA374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA37C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA38C: jal         0x8001BAFC
    // 0x800CA390: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800CA390: nop

    after_0:
    // 0x800CA394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA39C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA3A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CA3A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800CA3AC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800CA3B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CA3B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA3B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA3BC: lw          $a2, 0x1C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X1C);
    // 0x800CA3C0: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x800CA3C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CA3C8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800CA3CC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x800CA3D0: jal         0x800EF4E4
    // 0x800CA3D4: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_0;
    // 0x800CA3D4: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800CA3D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CA3DC: jal         0x800EF04C
    // 0x800CA3E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EF04C(rdram, ctx);
        goto after_1;
    // 0x800CA3E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x800CA3E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA3E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800CA3EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA3F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CA3F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800CA3FC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CA400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA404: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800CA408: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800CA40C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA410: jal         0x800EFB24
    // 0x800CA414: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800CA414: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800CA418: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800CA41C: jal         0x800EF368
    // 0x800CA420: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800EF368(rdram, ctx);
        goto after_1;
    // 0x800CA420: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x800CA424: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA428: jal         0x800EF04C
    // 0x800CA42C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x800CA42C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x800CA430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA434: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CA438: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CA444: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CA448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA44C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CA450: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800CA454: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800CA458: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CA45C: jal         0x800CA5F8
    // 0x800CA460: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800CA5F8(rdram, ctx);
        goto after_0;
    // 0x800CA460: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800CA464: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CA468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CA46C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800CA470: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800CA474: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CA478: jal         0x800CA688
    // 0x800CA47C: nop

    func_800CA688(rdram, ctx);
        goto after_1;
    // 0x800CA47C: nop

    after_1:
    // 0x800CA480: lui         $a2, 0x461C
    ctx->r6 = S32(0X461C << 16);
    // 0x800CA484: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x800CA488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CA48C: jal         0x800CA6C0
    // 0x800CA490: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800CA6C0(rdram, ctx);
        goto after_2;
    // 0x800CA490: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x800CA494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CA498: jal         0x800CA6F0
    // 0x800CA49C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800CA6F0(rdram, ctx);
        goto after_3;
    // 0x800CA49C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x800CA4A0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800CA4A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800CA4A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CA4AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CA4B0: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x800CA4B4: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800CA4B8: jal         0x800139F8
    // 0x800CA4BC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_800139F8(rdram, ctx);
        goto after_4;
    // 0x800CA4BC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x800CA4C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CA4C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CA4C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CA4CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CA4D0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800CA4D4: swc1        $f8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f8.u32l;
    // 0x800CA4D8: lwc1        $f10, 0x5970($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5970);
    // 0x800CA4DC: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
    // 0x800CA4E0: jal         0x800CA218
    // 0x800CA4E4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800CA218(rdram, ctx);
        goto after_5;
    // 0x800CA4E4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x800CA4E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CA4EC: jal         0x800CA2A8
    // 0x800CA4F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800CA2A8(rdram, ctx);
        goto after_6;
    // 0x800CA4F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x800CA4F4: jal         0x800CAF34
    // 0x800CA4F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CAF34(rdram, ctx);
        goto after_7;
    // 0x800CA4F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800CA4FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CA504: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CA508: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA510: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA51C: swc1        $f12, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f12.u32l;
    // 0x800CA520: jal         0x800CA1B0
    // 0x800CA524: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CA1B0(rdram, ctx);
        goto after_0;
    // 0x800CA524: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CA528: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CA52C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CA530: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CA534: lwc1        $f4, 0xE4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x800CA538: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800CA53C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800CA540: jal         0x800CA2A8
    // 0x800CA544: nop

    func_800CA2A8(rdram, ctx);
        goto after_1;
    // 0x800CA544: nop

    after_1:
    // 0x800CA548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA550: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA558: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CA55C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x800CA560: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CA564: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CA568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA56C: mul.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x800CA570: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CA574: swc1        $f14, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f14.u32l;
    // 0x800CA578: jal         0x800139F8
    // 0x800CA57C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_800139F8(rdram, ctx);
        goto after_0;
    // 0x800CA57C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800CA580: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CA584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CA588: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CA58C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800CA590: swc1        $f8, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f8.u32l;
    // 0x800CA594: jal         0x800CA218
    // 0x800CA598: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800CA218(rdram, ctx);
        goto after_1;
    // 0x800CA598: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800CA59C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CA5A0: jal         0x800CA2A8
    // 0x800CA5A4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800CA2A8(rdram, ctx);
        goto after_2;
    // 0x800CA5A4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800CA5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA5AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CA5B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA5BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA5C0: jal         0x800EE7F8
    // 0x800CA5C4: nop

    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CA5C4: nop

    after_0:
    // 0x800CA5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA5D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA5E0: jal         0x800EE84C
    // 0x800CA5E4: nop

    func_800EE84C(rdram, ctx);
        goto after_0;
    // 0x800CA5E4: nop

    after_0:
    // 0x800CA5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA5F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA5F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA5FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800CA600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA608: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800CA60C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800CA610: jal         0x800EFA4C
    // 0x800CA614: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800CA614: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x800CA618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA61C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA620: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA628: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800CA62C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800CA630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CA634: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800CA638: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
L_800CA63C:
    // 0x800CA63C: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800CA640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800CA644: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CA648: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x800CA64C: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800CA650: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800CA654: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800CA658: bne         $v0, $a0, L_800CA63C
    if (ctx->r2 != ctx->r4) {
        // 0x800CA65C: swc1        $f6, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
            goto L_800CA63C;
    }
    // 0x800CA65C: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x800CA660: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA66C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA670: jal         0x800EE7F8
    // 0x800CA674: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CA674: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x800CA678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA67C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA680: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA688: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA68C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800CA690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CA69C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800CA6A0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800CA6A4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800CA6A8: jal         0x800EFA4C
    // 0x800CA6AC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800CA6AC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x800CA6B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA6B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA6C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA6C4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800CA6C8: swc1        $f12, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->f12.u32l;
    // 0x800CA6CC: jr          $ra
    // 0x800CA6D0: swc1        $f14, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x800CA6D0: swc1        $f14, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800CA6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA6D4: lwc1        $f4, 0xEC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XEC);
    // 0x800CA6D8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800CA6DC: lwc1        $f6, 0xF0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x800CA6E0: jr          $ra
    // 0x800CA6E4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x800CA6E4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800CA6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA6E8: jr          $ra
    // 0x800CA6EC: lwc1        $f0, 0x164($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X164);
    return;
    // 0x800CA6EC: lwc1        $f0, 0x164($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X164);
;}
RECOMP_FUNC void func_800CA6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA6F0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CA6F4: jr          $ra
    // 0x800CA6F8: swc1        $f12, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800CA6F8: swc1        $f12, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800CA6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA6FC: jr          $ra
    // 0x800CA700: lwc1        $f0, 0xE8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE8);
    return;
    // 0x800CA700: lwc1        $f0, 0xE8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE8);
;}
RECOMP_FUNC void func_800CA704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA708: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CA70C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA710: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CA714: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800CA718: jal         0x800EFB24
    // 0x800CA71C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800CA71C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x800CA720: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CA724: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800CA728: jal         0x800EEAA4
    // 0x800CA72C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EEAA4(rdram, ctx);
        goto after_1;
    // 0x800CA72C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x800CA730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA738: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA744: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CA748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA74C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800CA750: jal         0x800EE7F8
    // 0x800CA754: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CA754: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    after_0:
    // 0x800CA758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA75C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA760: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA76C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800CA770: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CA774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CA77C: jal         0x800EEAD4
    // 0x800CA780: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_0;
    // 0x800CA780: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800CA784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA78C: jr          $ra
    // 0x800CA790: nop

    return;
    // 0x800CA790: nop

;}
RECOMP_FUNC void func_800CA794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA794: jr          $ra
    // 0x800CA798: lwc1        $f0, 0xE4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE4);
    return;
    // 0x800CA798: lwc1        $f0, 0xE4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE4);
;}
RECOMP_FUNC void func_800CA79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA79C: jr          $ra
    // 0x800CA7A0: lwc1        $f0, 0xF4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XF4);
    return;
    // 0x800CA7A0: lwc1        $f0, 0xF4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XF4);
;}
RECOMP_FUNC void func_800CA7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA7A4: jr          $ra
    // 0x800CA7A8: addiu       $v0, $a0, 0x64
    ctx->r2 = ADD32(ctx->r4, 0X64);
    return;
    // 0x800CA7A8: addiu       $v0, $a0, 0x64
    ctx->r2 = ADD32(ctx->r4, 0X64);
;}
RECOMP_FUNC void func_800CA7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA7AC: jr          $ra
    // 0x800CA7B0: addiu       $v0, $a0, 0xA4
    ctx->r2 = ADD32(ctx->r4, 0XA4);
    return;
    // 0x800CA7B0: addiu       $v0, $a0, 0xA4
    ctx->r2 = ADD32(ctx->r4, 0XA4);
;}
RECOMP_FUNC void func_800CA7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA7B4: jr          $ra
    // 0x800CA7B8: lwc1        $f0, 0xEC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XEC);
    return;
    // 0x800CA7B8: lwc1        $f0, 0xEC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XEC);
;}
RECOMP_FUNC void func_800CA7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA7BC: lwc1        $f4, 0xE4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x800CA7C0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800CA7C4: lwc1        $f6, 0xE8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XE8);
    // 0x800CA7C8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x800CA7CC: lwc1        $f8, 0xEC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XEC);
    // 0x800CA7D0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x800CA7D4: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800CA7D8: lwc1        $f10, 0xF0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x800CA7DC: jr          $ra
    // 0x800CA7E0: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    return;
    // 0x800CA7E0: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_800CA7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA7E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA7E8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800CA7EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CA7F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA7F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CA7F8: jal         0x800EE7F8
    // 0x800CA7FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CA7FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800CA800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA808: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA810: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800CA814: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800CA818: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800CA81C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800CA820: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800CA824: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800CA828: nop

    // 0x800CA82C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800CA830: nop

    // 0x800CA834: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CA838: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800CA83C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800CA840: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800CA844: nop

    // 0x800CA848: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800CA84C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CA850: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800CA854: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800CA858: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800CA85C: nop

    // 0x800CA860: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800CA864: nop

    // 0x800CA868: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CA86C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800CA870: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800CA874: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800CA878: nop

    // 0x800CA87C: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x800CA880: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800CA884: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800CA888: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800CA88C: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x800CA890: nop

    // 0x800CA894: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800CA898: nop

    // 0x800CA89C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CA8A0: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800CA8A4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800CA8A8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800CA8AC: jr          $ra
    // 0x800CA8B0: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    return;
    // 0x800CA8B0: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_800CA8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA8B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CA8B8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800CA8BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CA8C0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800CA8C4: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
L_800CA8C8:
    // 0x800CA8C8: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800CA8CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800CA8D0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CA8D4: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x800CA8D8: lwc1        $f6, 0x18($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X18);
    // 0x800CA8DC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800CA8E0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800CA8E4: bne         $v0, $a0, L_800CA8C8
    if (ctx->r2 != ctx->r4) {
        // 0x800CA8E8: swc1        $f6, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->f6.u32l;
            goto L_800CA8C8;
    }
    // 0x800CA8E8: swc1        $f6, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->f6.u32l;
    // 0x800CA8EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA8F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CA8F8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800CA8FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CA900: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800CA904: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
L_800CA908:
    // 0x800CA908: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800CA90C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800CA910: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800CA914: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x800CA918: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x800CA91C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800CA920: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800CA924: bne         $v0, $a0, L_800CA908
    if (ctx->r2 != ctx->r4) {
        // 0x800CA928: swc1        $f6, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->f6.u32l;
            goto L_800CA908;
    }
    // 0x800CA928: swc1        $f6, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->f6.u32l;
    // 0x800CA92C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CA934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA934: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800CA938: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800CA93C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800CA940: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800CA944: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800CA948: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800CA94C: nop

    // 0x800CA950: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800CA954: nop

    // 0x800CA958: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CA95C: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800CA960: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800CA964: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800CA968: nop

    // 0x800CA96C: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x800CA970: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CA974: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800CA978: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800CA97C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800CA980: nop

    // 0x800CA984: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800CA988: nop

    // 0x800CA98C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CA990: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800CA994: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800CA998: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800CA99C: nop

    // 0x800CA9A0: sh          $t3, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r11;
    // 0x800CA9A4: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800CA9A8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800CA9AC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800CA9B0: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x800CA9B4: nop

    // 0x800CA9B8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800CA9BC: nop

    // 0x800CA9C0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CA9C4: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800CA9C8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800CA9CC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800CA9D0: jr          $ra
    // 0x800CA9D4: sh          $t7, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r15;
    return;
    // 0x800CA9D4: sh          $t7, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_800CA9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA9DC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CA9E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA9E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800CA9E8: jal         0x800EE7F8
    // 0x800CA9EC: addiu       $a1, $a3, 0x18
    ctx->r5 = ADD32(ctx->r7, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CA9EC: addiu       $a1, $a3, 0x18
    ctx->r5 = ADD32(ctx->r7, 0X18);
    after_0:
    // 0x800CA9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA9F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA9F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CAA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAA00: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800CAA04: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800CAA08: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800CAA0C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x800CAA10: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800CAA14: jr          $ra
    // 0x800CAA18: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    return;
    // 0x800CAA18: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800CAA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAA1C: jr          $ra
    // 0x800CAA20: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    return;
    // 0x800CAA20: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
;}
RECOMP_FUNC void func_800CAA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAA24: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CAA28: addiu       $t0, $a0, 0x24
    ctx->r8 = ADD32(ctx->r4, 0X24);
    // 0x800CAA2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CAA30: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800CAA34: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800CAA38: lwc1        $f2, 0x24($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X24);
    // 0x800CAA3C: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800CAA40: lwc1        $f14, 0x2C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x800CAA44: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800CAA48: nop

    // 0x800CAA4C: bc1fl       L_800CAA60
    if (!c1cs) {
        // 0x800CAA50: lwc1        $f16, 0x0($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
            goto L_800CAA60;
    }
    goto skip_0;
    // 0x800CAA50: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x800CAA54: b           L_800CAA60
    // 0x800CAA58: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
        goto L_800CAA60;
    // 0x800CAA58: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800CAA5C: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
L_800CAA60:
    // 0x800CAA60: lwc1        $f12, 0x28($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X28);
    // 0x800CAA64: mul.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x800CAA68: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CAA6C: nop

    // 0x800CAA70: bc1fl       L_800CAA84
    if (!c1cs) {
        // 0x800CAA74: lwc1        $f16, 0x4($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
            goto L_800CAA84;
    }
    goto skip_1;
    // 0x800CAA74: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    skip_1:
    // 0x800CAA78: b           L_800CAA84
    // 0x800CAA7C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
        goto L_800CAA84;
    // 0x800CAA7C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800CAA80: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
L_800CAA84:
    // 0x800CAA84: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x800CAA88: mul.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800CAA8C: bc1fl       L_800CAAA0
    if (!c1cs) {
        // 0x800CAA90: lwc1        $f16, 0x8($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
            goto L_800CAAA0;
    }
    goto skip_2;
    // 0x800CAA90: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    skip_2:
    // 0x800CAA94: b           L_800CAAA0
    // 0x800CAA98: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
        goto L_800CAAA0;
    // 0x800CAA98: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800CAA9C: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
L_800CAAA0:
    // 0x800CAAA0: mul.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x800CAAA4: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CAAA8: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800CAAAC: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x800CAAB0: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x800CAAB4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800CAAB8: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800CAABC: nop

    // 0x800CAAC0: bc1fl       L_800CAAD4
    if (!c1cs) {
        // 0x800CAAC4: lwc1        $f0, 0x34($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
            goto L_800CAAD4;
    }
    goto skip_3;
    // 0x800CAAC4: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
    skip_3:
    // 0x800CAAC8: jr          $ra
    // 0x800CAACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CAACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CAAD0: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
L_800CAAD4:
    // 0x800CAAD4: lwc1        $f2, 0x38($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X38);
    // 0x800CAAD8: lwc1        $f12, 0x3C($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x800CAADC: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAAE0: addiu       $v0, $a3, 0x34
    ctx->r2 = ADD32(ctx->r7, 0X34);
    // 0x800CAAE4: bc1fl       L_800CAAF8
    if (!c1cs) {
        // 0x800CAAE8: lwc1        $f16, 0x0($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
            goto L_800CAAF8;
    }
    goto skip_4;
    // 0x800CAAE8: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    skip_4:
    // 0x800CAAEC: b           L_800CAAF8
    // 0x800CAAF0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
        goto L_800CAAF8;
    // 0x800CAAF0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800CAAF4: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
L_800CAAF8:
    // 0x800CAAF8: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800CAAFC: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800CAB00: bc1fl       L_800CAB14
    if (!c1cs) {
        // 0x800CAB04: lwc1        $f16, 0x4($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
            goto L_800CAB14;
    }
    goto skip_5;
    // 0x800CAB04: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    skip_5:
    // 0x800CAB08: b           L_800CAB14
    // 0x800CAB0C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
        goto L_800CAB14;
    // 0x800CAB0C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800CAB10: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
L_800CAB14:
    // 0x800CAB14: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CAB18: mul.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x800CAB1C: bc1fl       L_800CAB30
    if (!c1cs) {
        // 0x800CAB20: lwc1        $f16, 0x8($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
            goto L_800CAB30;
    }
    goto skip_6;
    // 0x800CAB20: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    skip_6:
    // 0x800CAB24: b           L_800CAB30
    // 0x800CAB28: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
        goto L_800CAB30;
    // 0x800CAB28: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800CAB2C: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
L_800CAB30:
    // 0x800CAB30: mul.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800CAB34: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CAB38: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800CAB3C: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x800CAB40: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800CAB44: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800CAB48: nop

    // 0x800CAB4C: bc1f        L_800CAB5C
    if (!c1cs) {
            // 0x800CAB50: nop

    func_800CAB5C(rdram, ctx);
    return;
    }
    // 0x800CAB50: nop

    // 0x800CAB54: jr          $ra
    // 0x800CAB58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CAB58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CAB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CAA38:
    // 0x800CAB5C: bne         $v1, $a0, L_800CAA38
    if (ctx->r3 != ctx->r4) {
            // 0x800CAB60: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    static_3_800CAA38(rdram, ctx);
    return;
    }
    // 0x800CAB60: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800CAB64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CAB68: jr          $ra
    // 0x800CAB6C: nop

    return;
    // 0x800CAB6C: nop

;}
RECOMP_FUNC void func_800CAB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAB70: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CAB74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800CAB78: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800CAB7C: addiu       $t0, $a0, 0x24
    ctx->r8 = ADD32(ctx->r4, 0X24);
    // 0x800CAB80: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x800CAB84: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
    // 0x800CAB88: lwc1        $f12, 0x28($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X28);
    // 0x800CAB8C: lwc1        $f16, 0x2C($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x800CAB90: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAB94: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800CAB98: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800CAB9C: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x800CABA0: bc1fl       L_800CABB4
    if (!c1cs) {
        // 0x800CABA4: lh          $v0, 0x0($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X0);
            goto L_800CABB4;
    }
    goto skip_0;
    // 0x800CABA4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    skip_0:
    // 0x800CABA8: b           L_800CABB4
    // 0x800CABAC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
        goto L_800CABB4;
    // 0x800CABAC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800CABB0: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
L_800CABB4:
    // 0x800CABB4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CABB8: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CABBC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CABC0: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800CABC4: bc1fl       L_800CABD8
    if (!c1cs) {
        // 0x800CABC8: lh          $v0, 0x2($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X2);
            goto L_800CABD8;
    }
    goto skip_1;
    // 0x800CABC8: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    skip_1:
    // 0x800CABCC: b           L_800CABD8
    // 0x800CABD0: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
        goto L_800CABD8;
    // 0x800CABD0: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x800CABD4: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
L_800CABD8:
    // 0x800CABD8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800CABDC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800CABE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CABE4: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x800CABE8: bc1fl       L_800CABFC
    if (!c1cs) {
        // 0x800CABEC: lh          $v0, 0x4($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X4);
            goto L_800CABFC;
    }
    goto skip_2;
    // 0x800CABEC: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    skip_2:
    // 0x800CABF0: b           L_800CABFC
    // 0x800CABF4: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
        goto L_800CABFC;
    // 0x800CABF4: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x800CABF8: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
L_800CABFC:
    // 0x800CABFC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CAC00: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CAC04: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800CAC08: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x800CAC0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CAC10: mul.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x800CAC14: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x800CAC18: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800CAC1C: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x800CAC20: nop

    // 0x800CAC24: bc1fl       L_800CAC38
    if (!c1cs) {
        // 0x800CAC28: lwc1        $f0, 0x34($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
            goto L_800CAC38;
    }
    goto skip_3;
    // 0x800CAC28: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
    skip_3:
    // 0x800CAC2C: jr          $ra
    // 0x800CAC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CAC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CAC34: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
L_800CAC38:
    // 0x800CAC38: lwc1        $f2, 0x38($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X38);
    // 0x800CAC3C: lwc1        $f14, 0x3C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x800CAC40: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAC44: addiu       $a0, $a3, 0x34
    ctx->r4 = ADD32(ctx->r7, 0X34);
    // 0x800CAC48: bc1fl       L_800CAC5C
    if (!c1cs) {
        // 0x800CAC4C: lh          $v0, 0x0($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X0);
            goto L_800CAC5C;
    }
    goto skip_4;
    // 0x800CAC4C: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    skip_4:
    // 0x800CAC50: b           L_800CAC5C
    // 0x800CAC54: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
        goto L_800CAC5C;
    // 0x800CAC54: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800CAC58: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
L_800CAC5C:
    // 0x800CAC5C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800CAC60: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800CAC64: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CAC68: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800CAC6C: bc1fl       L_800CAC80
    if (!c1cs) {
        // 0x800CAC70: lh          $v0, 0x2($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X2);
            goto L_800CAC80;
    }
    goto skip_5;
    // 0x800CAC70: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    skip_5:
    // 0x800CAC74: b           L_800CAC80
    // 0x800CAC78: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
        goto L_800CAC80;
    // 0x800CAC78: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x800CAC7C: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
L_800CAC80:
    // 0x800CAC80: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CAC84: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x800CAC88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CAC8C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800CAC90: bc1fl       L_800CACA4
    if (!c1cs) {
        // 0x800CAC94: lh          $v0, 0x4($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X4);
            goto L_800CACA4;
    }
    goto skip_6;
    // 0x800CAC94: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    skip_6:
    // 0x800CAC98: b           L_800CACA4
    // 0x800CAC9C: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
        goto L_800CACA4;
    // 0x800CAC9C: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x800CACA0: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
L_800CACA4:
    // 0x800CACA4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800CACA8: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CACAC: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x800CACB0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CACB4: mul.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x800CACB8: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x800CACBC: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800CACC0: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x800CACC4: nop

    // 0x800CACC8: bc1f        L_800CACD8
    if (!c1cs) {
            // 0x800CACCC: nop

    func_800CACD8(rdram, ctx);
    return;
    }
    // 0x800CACCC: nop

    // 0x800CACD0: jr          $ra
    // 0x800CACD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CACD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CACD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CAB84:
    // 0x800CACD8: bne         $v1, $t1, L_800CAB84
    if (ctx->r3 != ctx->r9) {
            // 0x800CACDC: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    static_3_800CAB84(rdram, ctx);
    return;
    }
    // 0x800CACDC: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800CACE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CACE4: jr          $ra
    // 0x800CACE8: nop

    return;
    // 0x800CACE8: nop

;}
RECOMP_FUNC void func_800CACEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CACEC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800CACF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800CACF4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800CACF8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800CACFC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800CAD00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800CAD04: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800CAD08: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800CAD0C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800CAD10: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800CAD14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800CAD18: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800CAD1C: addiu       $s1, $a0, 0x24
    ctx->r17 = ADD32(ctx->r4, 0X24);
    // 0x800CAD20: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    // 0x800CAD24: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x800CAD28: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x800CAD2C: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CAD30: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800CAD34: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800CAD38: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x800CAD3C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800CAD40: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800CAD44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800CAD48: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
L_800CAD4C:
    // 0x800CAD4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CAD50: jal         0x800EEAA4
    // 0x800CAD54: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_0;
    // 0x800CAD54: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800CAD58: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x800CAD5C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800CAD60: bc1f        L_800CAD70
    if (!c1cs) {
        // 0x800CAD64: nop
    
            goto L_800CAD70;
    }
    // 0x800CAD64: nop

    // 0x800CAD68: b           L_800CAD7C
    // 0x800CAD6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CAD7C;
    // 0x800CAD6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CAD70:
    // 0x800CAD70: bne         $s0, $s3, L_800CAD4C
    if (ctx->r16 != ctx->r19) {
        // 0x800CAD74: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_800CAD4C;
    }
    // 0x800CAD74: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800CAD78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CAD7C:
    // 0x800CAD7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800CAD80: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800CAD84: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800CAD88: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800CAD8C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800CAD90: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800CAD94: jr          $ra
    // 0x800CAD98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800CAD98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800CAD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAD9C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800CADA0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CADA4: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800CADA8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800CADAC: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800CADB0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800CADB4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800CADB8: lwc1        $f18, 0x2C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x800CADBC: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800CADC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CADC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CADC8: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800CADCC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800CADD0: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x800CADD4: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800CADD8: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800CADDC: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CADE0: nop

    // 0x800CADE4: bc1f        L_800CAE9C
    if (!c1cs) {
            // 0x800CADE8: nop

    func_800CAE9C(rdram, ctx);
    return;
    }
    // 0x800CADE8: nop

    // 0x800CADEC: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x800CADF0: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x800CADF4: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800CADF8: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x800CADFC: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800CAE00: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800CAE04: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x800CAE08: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x800CAE0C: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x800CAE10: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800CAE14: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x800CAE18: nop

    // 0x800CAE1C: bc1f        L_800CAE9C
    if (!c1cs) {
            // 0x800CAE20: nop

    func_800CAE9C(rdram, ctx);
    return;
    }
    // 0x800CAE20: nop

    // 0x800CAE24: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800CAE28: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x800CAE2C: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800CAE30: lwc1        $f18, 0x4C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x800CAE34: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800CAE38: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800CAE3C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800CAE40: lwc1        $f8, 0x50($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800CAE44: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800CAE48: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800CAE4C: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAE50: nop

    // 0x800CAE54: bc1f        L_800CAE9C
    if (!c1cs) {
            // 0x800CAE58: nop

    func_800CAE9C(rdram, ctx);
    return;
    }
    // 0x800CAE58: nop

    // 0x800CAE5C: lwc1        $f16, 0x54($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X54);
    // 0x800CAE60: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x800CAE64: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800CAE68: lwc1        $f16, 0x5C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x800CAE6C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800CAE70: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800CAE74: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x800CAE78: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x800CAE7C: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800CAE80: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800CAE84: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x800CAE88: nop

    // 0x800CAE8C: bc1f        L_800CAE9C
    if (!c1cs) {
            // 0x800CAE90: nop

    func_800CAE9C(rdram, ctx);
    return;
    }
    // 0x800CAE90: nop

    // 0x800CAE94: jr          $ra
    // 0x800CAE98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800CAE98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800CAE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAE9C: jr          $ra
    // 0x800CAEA0: nop

    return;
    // 0x800CAEA0: nop

;}
RECOMP_FUNC void func_800CAEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAEA4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800CAEA8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CAEAC: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800CAEB0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800CAEB4: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x800CAEB8: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800CAEBC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800CAEC0: lwc1        $f18, 0x4C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x800CAEC4: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800CAEC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CAECC: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800CAED0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CAED4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800CAED8: lwc1        $f10, 0x50($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800CAEDC: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800CAEE0: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800CAEE4: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800CAEE8: nop

    // 0x800CAEEC: bc1f        L_800CAEF8
    if (!c1cs) {
        // 0x800CAEF0: nop
    
            goto L_800CAEF8;
    }
    // 0x800CAEF0: nop

    // 0x800CAEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CAEF8:
    // 0x800CAEF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CAF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAF00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CAF04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CAF08: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x800CAF0C: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800CAF10: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800CAF14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CAF18: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x800CAF1C: jal         0x800136E4
    // 0x800CAF20: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x800CAF20: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x800CAF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CAF28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CAF2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CAF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAF34: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800CAF38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CAF3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800CAF40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CAF44: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x800CAF48: jal         0x800D93A0
    // 0x800CAF4C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_800D93A0(rdram, ctx);
        goto after_0;
    // 0x800CAF4C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x800CAF50: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x800CAF54: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800CAF58: jal         0x800D965C
    // 0x800CAF5C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_800D965C(rdram, ctx);
        goto after_1;
    // 0x800CAF5C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x800CAF60: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800CAF64: jal         0x800D9624
    // 0x800CAF68: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800D9624(rdram, ctx);
        goto after_2;
    // 0x800CAF68: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x800CAF6C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800CAF70: jal         0x800D965C
    // 0x800CAF74: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    func_800D965C(rdram, ctx);
        goto after_3;
    // 0x800CAF74: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    after_3:
    // 0x800CAF78: jal         0x80018EFC
    // 0x800CAF7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80018EFC(rdram, ctx);
        goto after_4;
    // 0x800CAF7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x800CAF80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800CAF84: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x800CAF88: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x800CAF8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800CAF90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800CAF94: jal         0x800EFA4C
    // 0x800CAF98: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_5;
    // 0x800CAF98: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    after_5:
    // 0x800CAF9C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800CAFA0: jal         0x80019224
    // 0x800CAFA4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80019224(rdram, ctx);
        goto after_6;
    // 0x800CAFA4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_6:
    // 0x800CAFA8: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x800CAFAC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x800CAFB0: jal         0x80019224
    // 0x800CAFB4: addiu       $a1, $s0, 0xF8
    ctx->r5 = ADD32(ctx->r16, 0XF8);
    func_80019224(rdram, ctx);
        goto after_7;
    // 0x800CAFB4: addiu       $a1, $s0, 0xF8
    ctx->r5 = ADD32(ctx->r16, 0XF8);
    after_7:
    // 0x800CAFB8: lwc1        $f4, 0xF8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x800CAFBC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x800CAFC0: lw          $a2, 0xFC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XFC);
    // 0x800CAFC4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800CAFC8: lw          $a3, 0x100($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X100);
    // 0x800CAFCC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800CAFD0: jal         0x80019480
    // 0x800CAFD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80019480(rdram, ctx);
        goto after_8;
    // 0x800CAFD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_8:
    // 0x800CAFD8: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x800CAFDC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x800CAFE0: jal         0x80019224
    // 0x800CAFE4: addiu       $a1, $s0, 0x104
    ctx->r5 = ADD32(ctx->r16, 0X104);
    func_80019224(rdram, ctx);
        goto after_9;
    // 0x800CAFE4: addiu       $a1, $s0, 0x104
    ctx->r5 = ADD32(ctx->r16, 0X104);
    after_9:
    // 0x800CAFE8: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    // 0x800CAFEC: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x800CAFF0: lw          $a1, 0x104($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X104);
    // 0x800CAFF4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800CAFF8: lw          $a3, 0x10C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10C);
    // 0x800CAFFC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800CB000: jal         0x80019480
    // 0x800CB004: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80019480(rdram, ctx);
        goto after_10;
    // 0x800CB004: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_10:
    // 0x800CB008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CB00C: jal         0x800EEAA4
    // 0x800CB010: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EEAA4(rdram, ctx);
        goto after_11;
    // 0x800CB010: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x800CB014: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x800CB018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CB01C: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
    // 0x800CB020: jal         0x800EEAA4
    // 0x800CB024: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800EEAA4(rdram, ctx);
        goto after_12;
    // 0x800CB024: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_12:
    // 0x800CB028: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x800CB02C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CB030: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    // 0x800CB034: jal         0x800EEAA4
    // 0x800CB038: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800EEAA4(rdram, ctx);
        goto after_13;
    // 0x800CB038: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x800CB03C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x800CB040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CB044: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x800CB048: jal         0x800EEAA4
    // 0x800CB04C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800EEAA4(rdram, ctx);
        goto after_14;
    // 0x800CB04C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_14:
    // 0x800CB050: lwc1        $f8, 0x11C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x800CB054: lwc1        $f16, 0x120($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X120);
    // 0x800CB058: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x800CB05C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800CB060: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x800CB064: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800CB068: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800CB06C: swc1        $f6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f6.u32l;
    // 0x800CB070: addiu       $a0, $s0, 0x128
    ctx->r4 = ADD32(ctx->r16, 0X128);
    // 0x800CB074: jal         0x80019480
    // 0x800CB078: lw          $a3, 0x124($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X124);
    func_80019480(rdram, ctx);
        goto after_15;
    // 0x800CB078: lw          $a3, 0x124($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X124);
    after_15:
    // 0x800CB07C: addiu       $a0, $s0, 0x134
    ctx->r4 = ADD32(ctx->r16, 0X134);
    // 0x800CB080: jal         0x80019224
    // 0x800CB084: addiu       $a1, $s0, 0x11C
    ctx->r5 = ADD32(ctx->r16, 0X11C);
    func_80019224(rdram, ctx);
        goto after_16;
    // 0x800CB084: addiu       $a1, $s0, 0x11C
    ctx->r5 = ADD32(ctx->r16, 0X11C);
    after_16:
    // 0x800CB088: addiu       $a0, $s0, 0x140
    ctx->r4 = ADD32(ctx->r16, 0X140);
    // 0x800CB08C: jal         0x80019224
    // 0x800CB090: addiu       $a1, $s0, 0x110
    ctx->r5 = ADD32(ctx->r16, 0X110);
    func_80019224(rdram, ctx);
        goto after_17;
    // 0x800CB090: addiu       $a1, $s0, 0x110
    ctx->r5 = ADD32(ctx->r16, 0X110);
    after_17:
    // 0x800CB094: lwc1        $f4, 0x11C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x800CB098: addiu       $a0, $s0, 0x14C
    ctx->r4 = ADD32(ctx->r16, 0X14C);
    // 0x800CB09C: lw          $a2, 0x120($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X120);
    // 0x800CB0A0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800CB0A4: lw          $a3, 0x124($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X124);
    // 0x800CB0A8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800CB0AC: jal         0x80019480
    // 0x800CB0B0: nop

    func_80019480(rdram, ctx);
        goto after_18;
    // 0x800CB0B0: nop

    after_18:
    // 0x800CB0B4: lwc1        $f8, 0x120($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X120);
    // 0x800CB0B8: addiu       $a0, $s0, 0x158
    ctx->r4 = ADD32(ctx->r16, 0X158);
    // 0x800CB0BC: lw          $a1, 0x11C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X11C);
    // 0x800CB0C0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800CB0C4: lw          $a3, 0x124($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X124);
    // 0x800CB0C8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800CB0CC: jal         0x80019480
    // 0x800CB0D0: nop

    func_80019480(rdram, ctx);
        goto after_19;
    // 0x800CB0D0: nop

    after_19:
    // 0x800CB0D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB0D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CB0DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800CB0E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB0E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB0EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CB0F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800CB0F4: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x800CB0F8: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x800CB0FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CB100: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800CB104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB108: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x800CB10C: jal         0x800EE7F8
    // 0x800CB110: addiu       $a1, $a1, 0x128
    ctx->r5 = ADD32(ctx->r5, 0X128);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CB110: addiu       $a1, $a1, 0x128
    ctx->r5 = ADD32(ctx->r5, 0X128);
    after_0:
    // 0x800CB114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB11C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB124: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CB128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB12C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CB130: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800CB134: lwc1        $f2, 0xEC($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XEC);
    // 0x800CB138: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800CB13C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800CB140: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800CB144: lwc1        $f14, 0xF0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x800CB148: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CB14C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CB150: bc1f        L_800CB15C
    if (!c1cs) {
        // 0x800CB154: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800CB15C;
    }
    // 0x800CB154: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800CB158: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800CB15C:
    // 0x800CB15C: add.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800CB160: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x800CB164: nop

    // 0x800CB168: bc1fl       L_800CB178
    if (!c1cs) {
        // 0x800CB16C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800CB178;
    }
    goto skip_0;
    // 0x800CB16C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x800CB170: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x800CB174: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800CB178:
    // 0x800CB178: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CB17C: lwc1        $f18, 0x5974($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5974);
    // 0x800CB180: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CB184: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CB188: sub.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x800CB18C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CB190: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800CB194: nop

    // 0x800CB198: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800CB19C: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800CB1A0: mul.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800CB1A4: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x800CB1A8: nop

    // 0x800CB1AC: bc1t        L_800CB1C8
    if (c1cs) {
        // 0x800CB1B0: nop
    
            goto L_800CB1C8;
    }
    // 0x800CB1B0: nop

    // 0x800CB1B4: lwc1        $f6, 0x5978($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5978);
    // 0x800CB1B8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x800CB1BC: nop

    // 0x800CB1C0: bc1fl       L_800CB214
    if (!c1cs) {
        // 0x800CB1C4: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_800CB214;
    }
    goto skip_1;
    // 0x800CB1C4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    skip_1:
L_800CB1C8:
    // 0x800CB1C8: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x800CB1CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CB1D0: bc1f        L_800CB1E4
    if (!c1cs) {
        // 0x800CB1D4: nop
    
            goto L_800CB1E4;
    }
    // 0x800CB1D4: nop

    // 0x800CB1D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CB1DC: b           L_800CB1E8
    // 0x800CB1E0: lwc1        $f18, 0x597C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X597C);
        goto L_800CB1E8;
    // 0x800CB1E0: lwc1        $f18, 0x597C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X597C);
L_800CB1E4:
    // 0x800CB1E4: lwc1        $f18, 0x5980($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5980);
L_800CB1E8:
    // 0x800CB1E8: div.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800CB1EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CB1F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CB1F4: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x800CB1F8: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800CB1FC: nop

    // 0x800CB200: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x800CB204: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x800CB208: div.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800CB20C: sub.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x800CB210: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
L_800CB214:
    // 0x800CB214: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800CB218: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x800CB21C: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x800CB220: jal         0x800F274C
    // 0x800CB224: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_800F274C(rdram, ctx);
        goto after_0;
    // 0x800CB224: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800CB228: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800CB22C: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800CB230: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800CB234: lwc1        $f4, 0xF4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XF4);
    // 0x800CB238: lwc1        $f6, 0xE8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XE8);
    // 0x800CB23C: add.s       $f12, $f2, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x800CB240: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CB244: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800CB248: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800CB24C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CB250: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800CB254: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800CB258: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CB25C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800CB260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800CB264: div.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800CB268: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x800CB26C: lwc1        $f8, 0xF4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XF4);
    // 0x800CB270: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x800CB274: add.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800CB278: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x800CB27C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CB280: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800CB284: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x800CB288: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x800CB28C: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800CB290: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x800CB294: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800CB298: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800CB29C: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800CB2A0: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800CB2A4: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800CB2A8: beq         $v1, $a0, L_800CB2EC
    if (ctx->r3 == ctx->r4) {
        // 0x800CB2AC: lwc1        $f16, 0xC($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
            goto L_800CB2EC;
    }
    // 0x800CB2AC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
L_800CB2B0:
    // 0x800CB2B0: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800CB2B4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800CB2B8: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800CB2BC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800CB2C0: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800CB2C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800CB2C8: mul.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800CB2CC: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x800CB2D0: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
    // 0x800CB2D4: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800CB2D8: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x800CB2DC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x800CB2E0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800CB2E4: bne         $v1, $a0, L_800CB2B0
    if (ctx->r3 != ctx->r4) {
        // 0x800CB2E8: swc1        $f2, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
            goto L_800CB2B0;
    }
    // 0x800CB2E8: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
L_800CB2EC:
    // 0x800CB2EC: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800CB2F0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800CB2F4: swc1        $f14, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f14.u32l;
    // 0x800CB2F8: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800CB2FC: nop

    // 0x800CB300: mul.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800CB304: swc1        $f8, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f8.u32l;
    // 0x800CB308: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x800CB30C: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
    // 0x800CB310: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CB314: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CB318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB31C: lui         $at, 0x4800
    ctx->r1 = S32(0X4800 << 16);
    // 0x800CB320: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x800CB324: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800CB328: bc1fl       L_800CB33C
    if (!c1cs) {
        // 0x800CB32C: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_800CB33C;
    }
    goto skip_2;
    // 0x800CB32C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_2:
    // 0x800CB330: b           L_800CB3D4
    // 0x800CB334: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
        goto L_800CB3D4;
    // 0x800CB334: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x800CB338: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_800CB33C:
    // 0x800CB33C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CB340: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800CB344: div.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800CB348: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800CB34C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800CB350: nop

    // 0x800CB354: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800CB358: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800CB35C: nop

    // 0x800CB360: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800CB364: beql        $v0, $zero, L_800CB3B4
    if (ctx->r2 == 0) {
        // 0x800CB368: mfc1        $v0, $f6
        ctx->r2 = (int32_t)ctx->f6.u32l;
            goto L_800CB3B4;
    }
    goto skip_3;
    // 0x800CB368: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x800CB36C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CB370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CB374: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800CB378: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800CB37C: nop

    // 0x800CB380: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800CB384: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800CB388: nop

    // 0x800CB38C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800CB390: bne         $v0, $zero, L_800CB3A8
    if (ctx->r2 != 0) {
        // 0x800CB394: nop
    
            goto L_800CB3A8;
    }
    // 0x800CB394: nop

    // 0x800CB398: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800CB39C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800CB3A0: b           L_800CB3C0
    // 0x800CB3A4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_800CB3C0;
    // 0x800CB3A4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_800CB3A8:
    // 0x800CB3A8: b           L_800CB3C0
    // 0x800CB3AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CB3C0;
    // 0x800CB3AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CB3B0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_800CB3B4:
    // 0x800CB3B4: nop

    // 0x800CB3B8: bltz        $v0, L_800CB3A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800CB3BC: nop
    
            goto L_800CB3A8;
    }
    // 0x800CB3BC: nop

L_800CB3C0:
    // 0x800CB3C0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800CB3C4: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x800CB3C8: bgtz        $t7, L_800CB3D4
    if (SIGNED(ctx->r15) > 0) {
        // 0x800CB3CC: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_800CB3D4;
    }
    // 0x800CB3CC: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x800CB3D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800CB3D4:
    // 0x800CB3D4: jr          $ra
    // 0x800CB3D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800CB3D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800CB3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB3E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB3E4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB3E8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB3EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CB3F0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800CB3F4: jr          $ra
    // 0x800CB3F8: lbu         $v0, -0x548F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X548F);
    return;
    // 0x800CB3F8: lbu         $v0, -0x548F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X548F);
;}
RECOMP_FUNC void func_800CB3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB3FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB400: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CB404: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800CB408: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800CB40C: addiu       $t8, $t8, -0x5490
    ctx->r24 = ADD32(ctx->r24, -0X5490);
    // 0x800CB410: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB414: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800CB418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB420: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800CB424: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800CB428: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CB42C: addiu       $a1, $v0, 0x1C
    ctx->r5 = ADD32(ctx->r2, 0X1C);
    // 0x800CB430: jal         0x800EE7F8
    // 0x800CB434: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CB434: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800CB438: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB43C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800CB440: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x800CB444: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800CB448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB44C: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x800CB450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB454: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB45C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB460: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CB464: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800CB468: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800CB46C: addiu       $t8, $t8, -0x5490
    ctx->r24 = ADD32(ctx->r24, -0X5490);
    // 0x800CB470: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB474: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800CB478: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB47C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB480: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CB484: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800CB488: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800CB48C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CB490: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800CB494: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x800CB498: jal         0x800EE7F8
    // 0x800CB49C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CB49C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800CB4A0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB4A4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800CB4A8: lh          $t9, 0x18($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X18);
    // 0x800CB4AC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800CB4B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CB4B4: lh          $t1, 0x1A($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X1A);
    // 0x800CB4B8: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x800CB4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB4C0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800CB4C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB4C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB4D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB4D4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB4D8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CB4DC: addiu       $t7, $t7, -0x5490
    ctx->r15 = ADD32(ctx->r15, -0X5490);
    // 0x800CB4E0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB4E4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800CB4E8: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x800CB4EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800CB4F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CB4F4: bnel        $t8, $zero, L_800CB510
    if (ctx->r24 != 0) {
            // 0x800CB4F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    static_3_800CB510(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CB4F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800CB4FC: sb          $t9, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r25;
    // 0x800CB500: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x800CB504: jr          $ra
    // 0x800CB508: sh          $a2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r6;
    return;
    // 0x800CB508: sh          $a2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r6;
;}
RECOMP_FUNC void func_800CB50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB50C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CB510: jr          $ra
    // 0x800CB514: nop

    return;
    // 0x800CB514: nop

;}
RECOMP_FUNC void func_800CB518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB518: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB51C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB520: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB524: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CB528: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800CB52C: jr          $ra
    // 0x800CB530: lh          $v0, -0x548E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X548E);
    return;
    // 0x800CB530: lh          $v0, -0x548E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X548E);
;}
RECOMP_FUNC void func_800CB534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB534: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800CB538: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800CB53C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800CB540: addiu       $t8, $t8, -0x5490
    ctx->r24 = ADD32(ctx->r24, -0X5490);
    // 0x800CB544: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB54C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800CB550: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x800CB554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB558: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CB55C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CB560: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CB564: jalr        $t9
    // 0x800CB568: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800CB568: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x800CB56C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800CB570: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800CB574: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CB578: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800CB57C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800CB580: jalr        $t9
    // 0x800CB584: lh          $a3, 0x1A($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X1A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800CB584: lh          $a3, 0x1A($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X1A);
    after_1:
    // 0x800CB588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB58C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB590: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB59C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB5A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CB5A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CB5A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CB5AC: jal         0x800CB698
    // 0x800CB5B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800CB698(rdram, ctx);
        goto after_0;
    // 0x800CB5B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x800CB5B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CB5B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB5BC: jal         0x800CB534
    // 0x800CB5C0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_800CB534(rdram, ctx);
        goto after_1;
    // 0x800CB5C0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800CB5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB5CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB5D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB5D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB5DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CB5E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CB5E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CB5E8: jal         0x800CB698
    // 0x800CB5EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800CB698(rdram, ctx);
        goto after_0;
    // 0x800CB5EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x800CB5F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800CB5F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB5F8: jal         0x800CB534
    // 0x800CB5FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_800CB534(rdram, ctx);
        goto after_1;
    // 0x800CB5FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800CB600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB608: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB610: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB618: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CB61C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800CB620: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800CB624: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800CB628: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800CB62C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800CB630: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800CB634: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800CB638: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800CB63C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800CB640: addiu       $s2, $s2, -0x5488
    ctx->r18 = ADD32(ctx->r18, -0X5488);
    // 0x800CB644: addiu       $s0, $s0, -0x5490
    ctx->r16 = ADD32(ctx->r16, -0X5490);
    // 0x800CB648: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800CB64C: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_800CB650:
    // 0x800CB650: sb          $s1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r17;
    // 0x800CB654: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x800CB658: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800CB65C: swc1        $f20, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f20.u32l;
    // 0x800CB660: jal         0x800EFD24
    // 0x800CB664: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x800CB664: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x800CB668: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800CB66C: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x800CB670: bne         $s1, $s3, L_800CB650
    if (ctx->r17 != ctx->r19) {
        // 0x800CB674: addiu       $s2, $s2, 0x30
        ctx->r18 = ADD32(ctx->r18, 0X30);
            goto L_800CB650;
    }
    // 0x800CB674: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
    // 0x800CB678: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800CB67C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800CB680: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB684: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800CB688: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800CB68C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800CB690: jr          $ra
    // 0x800CB694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800CB694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CB698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB698: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB69C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB6A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB6A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CB6A8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CB6AC: jr          $ra
    // 0x800CB6B0: sb          $a1, -0x548F($at)
    MEM_B(-0X548F, ctx->r1) = ctx->r5;
    return;
    // 0x800CB6B0: sb          $a1, -0x548F($at)
    MEM_B(-0X548F, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_800CB6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB6B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB6B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB6BC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB6C0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CB6C4: addiu       $t7, $t7, -0x5490
    ctx->r15 = ADD32(ctx->r15, -0X5490);
    // 0x800CB6C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB6CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB6D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CB6D4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800CB6D8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CB6DC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800CB6E0: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x800CB6E4: jal         0x800EE7F8
    // 0x800CB6E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CB6E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800CB6EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB6F4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800CB6F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800CB6FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB700: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x800CB704: jr          $ra
    // 0x800CB708: sh          $t8, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r24;
    return;
    // 0x800CB708: sh          $t8, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_800CB70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB70C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB710: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB714: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CB718: addiu       $t7, $t7, -0x5490
    ctx->r15 = ADD32(ctx->r15, -0X5490);
    // 0x800CB71C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB724: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800CB728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB72C: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x800CB730: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x800CB734: jal         0x800EE7F8
    // 0x800CB738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CB738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800CB73C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB744: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800CB748: lh          $t8, 0x18($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X18);
    // 0x800CB74C: lh          $t9, 0x1A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X1A);
    // 0x800CB750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB754: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x800CB758: sh          $t8, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r24;
    // 0x800CB75C: jr          $ra
    // 0x800CB760: sh          $t9, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r25;
    return;
    // 0x800CB760: sh          $t9, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800CB764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB764: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB768: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CB76C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CB770: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CB774: addiu       $t7, $t7, -0x5490
    ctx->r15 = ADD32(ctx->r15, -0X5490);
    // 0x800CB778: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CB77C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB780: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CB784: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800CB788: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CB78C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800CB790: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x800CB794: jal         0x800EE7F8
    // 0x800CB798: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800CB798: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800CB79C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB7A4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800CB7A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800CB7AC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800CB7B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB7B4: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x800CB7B8: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
    // 0x800CB7BC: jr          $ra
    // 0x800CB7C0: sh          $t9, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r25;
    return;
    // 0x800CB7C0: sh          $t9, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800CB7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB7C4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800CB7C8: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800CB7CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB7D0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800CB7D4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CB7D8: lw          $t9, -0x548C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X548C);
    // 0x800CB7DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB7E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB7E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CB7E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CB7EC: jalr        $t9
    // 0x800CB7F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800CB7F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800CB7F4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800CB7F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CB7FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800CB800: jalr        $t9
    // 0x800CB804: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800CB804: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800CB808: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CB80C: bne         $v0, $at, L_800CB828
    if (ctx->r2 != ctx->r1) {
        // 0x800CB810: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800CB828;
    }
    // 0x800CB810: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800CB814: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x800CB818: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x800CB81C: jal         0x800FC63C
    // 0x800CB820: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800FC63C(rdram, ctx);
        goto after_2;
    // 0x800CB820: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x800CB824: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_800CB828:
    // 0x800CB828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB82C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB830: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800CB834: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB840: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CB844: addiu       $v0, $v0, -0x5190
    ctx->r2 = ADD32(ctx->r2, -0X5190);
    // 0x800CB848: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x800CB84C: jr          $ra
    // 0x800CB850: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    return;
    // 0x800CB850: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800CB854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB854: beq         $a0, $zero, L_800CB868
    if (ctx->r4 == 0) {
        // 0x800CB858: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_800CB868;
    }
    // 0x800CB858: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CB85C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800CB860: lw          $t6, -0x518C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X518C);
    // 0x800CB864: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_800CB868:
    // 0x800CB868: jr          $ra
    // 0x800CB86C: lh          $v0, -0x5190($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5190);
    return;
    // 0x800CB86C: lh          $v0, -0x5190($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5190);
;}
RECOMP_FUNC void func_800CB870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB870: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CB874: addiu       $v0, $v0, -0x5190
    ctx->r2 = ADD32(ctx->r2, -0X5190);
    // 0x800CB878: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x800CB87C: jr          $ra
    // 0x800CB880: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    return;
    // 0x800CB880: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800CB890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB894: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800CB898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB89C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CB8A0: lw          $a0, -0x50A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X50A0);
    // 0x800CB8A4: jal         0x800B42A0
    // 0x800CB8A8: addiu       $a1, $a2, 0x18
    ctx->r5 = ADD32(ctx->r6, 0X18);
    func_800B42A0(rdram, ctx);
        goto after_0;
    // 0x800CB8A8: addiu       $a1, $a2, 0x18
    ctx->r5 = ADD32(ctx->r6, 0X18);
    after_0:
    // 0x800CB8AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB8B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB8B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB8C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB8C4: jal         0x800CB890
    // 0x800CB8C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CB890(rdram, ctx);
        goto after_0;
    // 0x800CB8C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CB8CC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800CB8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB8D4: lh          $t7, 0x1A($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X1A);
    // 0x800CB8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB8DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CB8E0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800CB8E4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800CB8E8: jr          $ra
    // 0x800CB8EC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    return;
    // 0x800CB8EC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
;}
RECOMP_FUNC void func_800CB8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB8F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB8F8: jal         0x800CB890
    // 0x800CB8FC: nop

    func_800CB890(rdram, ctx);
        goto after_0;
    // 0x800CB8FC: nop

    after_0:
    // 0x800CB900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB908: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB918: jal         0x800CB8F0
    // 0x800CB91C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CB8F0(rdram, ctx);
        goto after_0;
    // 0x800CB91C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CB920: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800CB924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB928: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800CB92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB930: srl         $t8, $t7, 9
    ctx->r24 = S32(U32(ctx->r15) >> 9);
    // 0x800CB934: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CB938: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800CB93C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800CB940: jr          $ra
    // 0x800CB944: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    return;
    // 0x800CB944: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
;}
RECOMP_FUNC void func_800CB948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB94C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB950: jal         0x800CB910
    // 0x800CB954: nop

    func_800CB910(rdram, ctx);
        goto after_0;
    // 0x800CB954: nop

    after_0:
    // 0x800CB958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB960: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB96C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB970: jal         0x800CB8BC
    // 0x800CB974: nop

    func_800CB8BC(rdram, ctx);
        goto after_0;
    // 0x800CB974: nop

    after_0:
    // 0x800CB978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB980: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB98C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB990: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CB994: jal         0x80087EB8
    // 0x800CB998: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    _gcboundDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800CB998: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    after_0:
    // 0x800CB99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB9A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB9AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB9B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB9B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB9BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CB9C0: jal         0x80087EC0
    // 0x800CB9C4: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    _gcboundDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800CB9C4: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    after_0:
    // 0x800CB9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB9D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB9DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB9E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CB9E4: jal         0x80087EC8
    // 0x800CB9E8: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    _gcboundDll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800CB9E8: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    after_0:
    // 0x800CB9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB9F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CB9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB9FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CBA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CBA04: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CBA08: jal         0x80087EE8
    // 0x800CBA0C: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    _gcboundDll_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800CBA0C: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    after_0:
    // 0x800CBA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CBA14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CBA18: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBA20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CBA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CBA28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CBA2C: jal         0x80087EF0
    // 0x800CBA30: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    _gcboundDll_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x800CBA30: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    after_0:
    // 0x800CBA34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CBA38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CBA3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBA44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CBA48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CBA4C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CBA50: jal         0x80087EF8
    // 0x800CBA54: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    _gcboundDll_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x800CBA54: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    after_0:
    // 0x800CBA58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CBA5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CBA60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBA68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CBA6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800CBA70: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800CBA74: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CBA78: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800CBA7C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800CBA80: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800CBA84: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CBA88: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800CBA8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CBA90: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800CBA94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CBA98: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800CBA9C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800CBAA0: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    // 0x800CBAA4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800CBAA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800CBAAC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800CBAB0: jal         0x80087ED0
    // 0x800CBAB4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    _gcboundDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800CBAB4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x800CBAB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CBABC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CBAC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBAC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CBACC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CBAD0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800CBAD4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CBAD8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800CBADC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CBAE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CBAE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CBAE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CBAEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CBAF0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800CBAF4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800CBAF8: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    // 0x800CBAFC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800CBB00: jal         0x80087ED8
    // 0x800CBB04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    _gcboundDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800CBB04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x800CBB08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CBB0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CBB10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBB18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CBB1C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800CBB20: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800CBB24: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CBB28: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800CBB2C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800CBB30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800CBB34: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800CBB38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CBB3C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800CBB40: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CBB44: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800CBB48: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800CBB4C: addiu       $a0, $a0, -0x5180
    ctx->r4 = ADD32(ctx->r4, -0X5180);
    // 0x800CBB50: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800CBB54: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800CBB58: jal         0x80087EE0
    // 0x800CBB5C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    _gcboundDll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800CBB5C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x800CBB60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CBB64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CBB68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBB70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CBB74: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800CBB78: jr          $ra
    // 0x800CBB7C: sb          $a1, -0x5168($at)
    MEM_B(-0X5168, ctx->r1) = ctx->r5;
    return;
    // 0x800CBB7C: sb          $a1, -0x5168($at)
    MEM_B(-0X5168, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_800CBB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBB80: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CBB84: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CBB88: lw          $t7, -0x5174($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5174);
    // 0x800CBB8C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CBB90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CBB94: beq         $a1, $zero, L_800CBBAC
    if (ctx->r5 == 0) {
            // 0x800CBB98: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    func_800CBBAC(rdram, ctx);
    return;
    }
    // 0x800CBB98: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800CBB9C: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x800CBBA0: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x800CBBA4: jr          $ra
    // 0x800CBBA8: sb          $t0, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r8;
    return;
    // 0x800CBBA8: sb          $t0, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_800CBBAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBBAC: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x800CBBB0: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x800CBBB4: sb          $t2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r10;
    // 0x800CBBB8: jr          $ra
    // 0x800CBBBC: nop

    return;
    // 0x800CBBBC: nop

;}
RECOMP_FUNC void func_800CBBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBBC0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CBBC4: lw          $t7, -0x5174($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5174);
    // 0x800CBBC8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CBBCC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CBBD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CBBD4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800CBBD8: jr          $ra
    // 0x800CBBDC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    return;
    // 0x800CBBDC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
;}
RECOMP_FUNC void func_800CBBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBBE0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CBBE4: lw          $t7, -0x516C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X516C);
    // 0x800CBBE8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CBBEC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CBBF0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CBBF4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800CBBF8: jr          $ra
    // 0x800CBBFC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    return;
    // 0x800CBBFC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
;}
RECOMP_FUNC void func_800CBC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBC00: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CBC04: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CBC08: lw          $t7, -0x516C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X516C);
    // 0x800CBC0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CBC10: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CBC14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CBC18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CBC1C: jal         0x800CB8F0
    // 0x800CBC20: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_800CB8F0(rdram, ctx);
        goto after_0;
    // 0x800CBC20: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800CBC24: lhu         $v0, 0x14($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X14);
    // 0x800CBC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CBC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CBC30: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800CBC34: jr          $ra
    // 0x800CBC38: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x800CBC38: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_800CBC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBC3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CBC40: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800CBC44: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800CBC48: addiu       $s4, $s4, -0x5180
    ctx->r20 = ADD32(ctx->r20, -0X5180);
    // 0x800CBC4C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800CBC50: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800CBC54: addiu       $s5, $zero, 0x1C
    ctx->r21 = ADD32(0, 0X1C);
    // 0x800CBC58: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CBC5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800CBC60: lw          $s3, 0x4($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X4);
    // 0x800CBC64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800CBC68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CBC6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800CBC70: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800CBC74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800CBC78: mflo        $t7
    ctx->r15 = lo;
    // 0x800CBC7C: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x800CBC80: sltu        $at, $s3, $t8
    ctx->r1 = ctx->r19 < ctx->r24 ? 1 : 0;
    // 0x800CBC84: beql        $at, $zero, L_800CBD60
    if (ctx->r1 == 0) {
        // 0x800CBC88: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800CBD60;
    }
    goto skip_0;
    // 0x800CBC88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
L_800CBC8C:
    // 0x800CBC8C: jal         0x800CB910
    // 0x800CBC90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800CB910(rdram, ctx);
        goto after_0;
    // 0x800CBC90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x800CBC94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800CBC98: jal         0x800CB8F0
    // 0x800CBC9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_1;
    // 0x800CBC9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x800CBCA0: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x800CBCA4: beq         $at, $zero, L_800CBD38
    if (ctx->r1 == 0) {
        // 0x800CBCA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800CBD38;
    }
    // 0x800CBCA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CBCAC: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
L_800CBCB0:
    // 0x800CBCB0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CBCB4: lwc1        $f12, 0x4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CBCB8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800CBCBC: nop

    // 0x800CBCC0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CBCC4: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800CBCC8: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x800CBCCC: nop

    // 0x800CBCD0: bc1fl       L_800CBD2C
    if (!c1cs) {
        // 0x800CBCD4: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBD2C;
    }
    goto skip_1;
    // 0x800CBCD4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_1:
    // 0x800CBCD8: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CBCDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CBCE0: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x800CBCE4: nop

    // 0x800CBCE8: bc1fl       L_800CBD2C
    if (!c1cs) {
        // 0x800CBCEC: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBD2C;
    }
    goto skip_2;
    // 0x800CBCEC: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_2:
    // 0x800CBCF0: jal         0x800EFC7C
    // 0x800CBCF4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_2;
    // 0x800CBCF4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800CBCF8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CBCFC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CBD00: nop

    // 0x800CBD04: bc1fl       L_800CBD2C
    if (!c1cs) {
        // 0x800CBD08: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBD2C;
    }
    goto skip_3;
    // 0x800CBD08: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_3:
    // 0x800CBD0C: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x800CBD10: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CBD14: subu        $v0, $s3, $t0
    ctx->r2 = SUB32(ctx->r19, ctx->r8);
    // 0x800CBD18: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CBD1C: mflo        $v0
    ctx->r2 = lo;
    // 0x800CBD20: b           L_800CBD64
    // 0x800CBD24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800CBD64;
    // 0x800CBD24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800CBD28: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CBD2C:
    // 0x800CBD2C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800CBD30: bnel        $at, $zero, L_800CBCB0
    if (ctx->r1 != 0) {
        // 0x800CBD34: lh          $t9, 0xE($s0)
        ctx->r25 = MEM_H(ctx->r16, 0XE);
            goto L_800CBCB0;
    }
    goto skip_4;
    // 0x800CBD34: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    skip_4:
L_800CBD38:
    // 0x800CBD38: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x800CBD3C: lw          $t4, 0x4($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X4);
    // 0x800CBD40: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
    // 0x800CBD44: multu       $t2, $s5
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CBD48: mflo        $t3
    ctx->r11 = lo;
    // 0x800CBD4C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800CBD50: sltu        $at, $s3, $t5
    ctx->r1 = ctx->r19 < ctx->r13 ? 1 : 0;
    // 0x800CBD54: bne         $at, $zero, L_800CBC8C
    if (ctx->r1 != 0) {
        // 0x800CBD58: nop
    
            goto L_800CBC8C;
    }
    // 0x800CBD58: nop

    // 0x800CBD5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CBD60:
    // 0x800CBD60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800CBD64:
    // 0x800CBD64: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800CBD68: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800CBD6C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800CBD70: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800CBD74: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800CBD78: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800CBD7C: jr          $ra
    // 0x800CBD80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800CBD80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CBD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBD84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CBD88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CBD8C: jal         0x800CBC3C
    // 0x800CBD90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800CBC3C(rdram, ctx);
        goto after_0;
    // 0x800CBD90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CBD94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CBD98: beq         $v0, $at, L_800CBDC0
    if (ctx->r2 == ctx->r1) {
        // 0x800CBD9C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800CBDC0;
    }
    // 0x800CBD9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800CBDA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CBDA4: jal         0x800CC4D4
    // 0x800CBDA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800CC4D4(rdram, ctx);
        goto after_1;
    // 0x800CBDA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800CBDAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CBDB0: beq         $v0, $at, L_800CBDC0
    if (ctx->r2 == ctx->r1) {
        // 0x800CBDB4: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_800CBDC0;
    }
    // 0x800CBDB4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CBDB8: b           L_800CBDC4
    // 0x800CBDBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CBDC4;
    // 0x800CBDBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CBDC0:
    // 0x800CBDC0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_800CBDC4:
    // 0x800CBDC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CBDC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CBDCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CBDD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBDD4: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x800CBDD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800CBDDC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800CBDE0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CBDE4: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800CBDE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CBDEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CBDF0: addiu       $s5, $s5, -0x5180
    ctx->r21 = ADD32(ctx->r21, -0X5180);
    // 0x800CBDF4: lw          $t6, 0x8($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X8);
    // 0x800CBDF8: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800CBDFC: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800CBE00: lw          $s4, 0xC($s5)
    ctx->r20 = MEM_W(ctx->r21, 0XC);
    // 0x800CBE04: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800CBE08: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800CBE0C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800CBE10: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800CBE14: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800CBE18: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800CBE1C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800CBE20: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CBE24: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800CBE28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800CBE2C: add.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800CBE30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CBE34: addu        $v0, $t7, $s4
    ctx->r2 = ADD32(ctx->r15, ctx->r20);
    // 0x800CBE38: sub.s       $f22, $f18, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800CBE3C: sltu        $at, $s4, $v0
    ctx->r1 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x800CBE40: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800CBE44: beq         $at, $zero, L_800CC048
    if (ctx->r1 == 0) {
        // 0x800CBE48: or          $s3, $a2, $zero
        ctx->r19 = ctx->r6 | 0;
            goto L_800CC048;
    }
    // 0x800CBE48: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x800CBE4C: lbu         $t8, 0x2($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X2);
L_800CBE50:
    // 0x800CBE50: addiu       $a0, $s4, 0x4
    ctx->r4 = ADD32(ctx->r20, 0X4);
    // 0x800CBE54: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800CBE58: beql        $t9, $zero, L_800CC03C
    if (ctx->r25 == 0) {
        // 0x800CBE5C: addiu       $s4, $s4, 0x1C
        ctx->r20 = ADD32(ctx->r20, 0X1C);
            goto L_800CC03C;
    }
    goto skip_0;
    // 0x800CBE5C: addiu       $s4, $s4, 0x1C
    ctx->r20 = ADD32(ctx->r20, 0X1C);
    skip_0:
    // 0x800CBE60: jal         0x800EFC7C
    // 0x800CBE64: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_0;
    // 0x800CBE64: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x800CBE68: lwc1        $f10, 0x10($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X10);
    // 0x800CBE6C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CBE70: nop

    // 0x800CBE74: bc1fl       L_800CC024
    if (!c1cs) {
        // 0x800CBE78: lw          $t0, 0x8($s5)
        ctx->r8 = MEM_W(ctx->r21, 0X8);
            goto L_800CC024;
    }
    goto skip_1;
    // 0x800CBE78: lw          $t0, 0x8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X8);
    skip_1:
    // 0x800CBE7C: jal         0x800CB910
    // 0x800CBE80: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800CB910(rdram, ctx);
        goto after_1;
    // 0x800CBE80: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x800CBE84: lw          $t0, 0x14($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X14);
    // 0x800CBE88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CBE8C: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
    // 0x800CBE90: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x800CBE94: lbu         $t2, 0x18($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X18);
    // 0x800CBE98: bne         $t2, $zero, L_800CBEBC
    if (ctx->r10 != 0) {
        // 0x800CBE9C: nop
    
            goto L_800CBEBC;
    }
    // 0x800CBE9C: nop

    // 0x800CBEA0: lw          $t3, 0x8($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X8);
    // 0x800CBEA4: lw          $t5, 0xC($s5)
    ctx->r13 = MEM_W(ctx->r21, 0XC);
    // 0x800CBEA8: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800CBEAC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800CBEB0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CBEB4: b           L_800CC038
    // 0x800CBEB8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
        goto L_800CC038;
    // 0x800CBEB8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_800CBEBC:
    // 0x800CBEBC: beq         $t6, $zero, L_800CBF64
    if (ctx->r14 == 0) {
        // 0x800CBEC0: nop
    
            goto L_800CBF64;
    }
    // 0x800CBEC0: nop

    // 0x800CBEC4: jal         0x800CB8F0
    // 0x800CBEC8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_2;
    // 0x800CBEC8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x800CBECC: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x800CBED0: beq         $at, $zero, L_800CC020
    if (ctx->r1 == 0) {
        // 0x800CBED4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800CC020;
    }
    // 0x800CBED4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CBED8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
L_800CBEDC:
    // 0x800CBEDC: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800CBEE0: srl         $t9, $t8, 29
    ctx->r25 = S32(U32(ctx->r24) >> 29);
    // 0x800CBEE4: and         $t0, $t9, $s3
    ctx->r8 = ctx->r25 & ctx->r19;
    // 0x800CBEE8: beql        $t0, $zero, L_800CBF50
    if (ctx->r8 == 0) {
        // 0x800CBEEC: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBF50;
    }
    goto skip_2;
    // 0x800CBEEC: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_2:
    // 0x800CBEF0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CBEF4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x800CBEF8: nop

    // 0x800CBEFC: bc1fl       L_800CBF50
    if (!c1cs) {
        // 0x800CBF00: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBF50;
    }
    goto skip_3;
    // 0x800CBF00: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_3:
    // 0x800CBF04: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x800CBF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CBF0C: bc1fl       L_800CBF50
    if (!c1cs) {
        // 0x800CBF10: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBF50;
    }
    goto skip_4;
    // 0x800CBF10: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_4:
    // 0x800CBF14: jal         0x800EFC7C
    // 0x800CBF18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_3;
    // 0x800CBF18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x800CBF1C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CBF20: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800CBF24: nop

    // 0x800CBF28: bc1fl       L_800CBF50
    if (!c1cs) {
        // 0x800CBF2C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CBF50;
    }
    goto skip_5;
    // 0x800CBF2C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_5:
    // 0x800CBF30: lw          $t1, 0xC($s5)
    ctx->r9 = MEM_W(ctx->r21, 0XC);
    // 0x800CBF34: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CBF38: subu        $v0, $s4, $t1
    ctx->r2 = SUB32(ctx->r20, ctx->r9);
    // 0x800CBF3C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CBF40: mflo        $v0
    ctx->r2 = lo;
    // 0x800CBF44: b           L_800CC050
    // 0x800CBF48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800CC050;
    // 0x800CBF48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800CBF4C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CBF50:
    // 0x800CBF50: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800CBF54: bnel        $at, $zero, L_800CBEDC
    if (ctx->r1 != 0) {
        // 0x800CBF58: lw          $t7, 0x14($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X14);
            goto L_800CBEDC;
    }
    goto skip_6;
    // 0x800CBF58: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    skip_6:
    // 0x800CBF5C: b           L_800CC024
    // 0x800CBF60: lw          $t0, 0x8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X8);
        goto L_800CC024;
    // 0x800CBF60: lw          $t0, 0x8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X8);
L_800CBF64:
    // 0x800CBF64: jal         0x800CB8F0
    // 0x800CBF68: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_4;
    // 0x800CBF68: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x800CBF6C: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x800CBF70: beq         $at, $zero, L_800CC020
    if (ctx->r1 == 0) {
        // 0x800CBF74: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800CC020;
    }
    // 0x800CBF74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CBF78: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_800CBF7C:
    // 0x800CBF7C: sll         $t3, $v0, 12
    ctx->r11 = S32(ctx->r2 << 12);
    // 0x800CBF80: srl         $t4, $t3, 29
    ctx->r12 = S32(U32(ctx->r11) >> 29);
    // 0x800CBF84: and         $t5, $t4, $s3
    ctx->r13 = ctx->r12 & ctx->r19;
    // 0x800CBF88: beq         $t5, $zero, L_800CC010
    if (ctx->r13 == 0) {
        // 0x800CBF8C: andi        $t6, $t4, 0x2
        ctx->r14 = ctx->r12 & 0X2;
            goto L_800CC010;
    }
    // 0x800CBF8C: andi        $t6, $t4, 0x2
    ctx->r14 = ctx->r12 & 0X2;
    // 0x800CBF90: bne         $t6, $zero, L_800CBFD8
    if (ctx->r14 != 0) {
        // 0x800CBF94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CBFD8;
    }
    // 0x800CBF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CBF98: lh          $t7, 0xE($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE);
    // 0x800CBF9C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CBFA0: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x800CBFA4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800CBFA8: nop

    // 0x800CBFAC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CBFB0: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x800CBFB4: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x800CBFB8: nop

    // 0x800CBFBC: bc1fl       L_800CC014
    if (!c1cs) {
        // 0x800CBFC0: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC014;
    }
    goto skip_7;
    // 0x800CBFC0: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_7:
    // 0x800CBFC4: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x800CBFC8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x800CBFCC: nop

    // 0x800CBFD0: bc1fl       L_800CC014
    if (!c1cs) {
        // 0x800CBFD4: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC014;
    }
    goto skip_8;
    // 0x800CBFD4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_8:
L_800CBFD8:
    // 0x800CBFD8: jal         0x800EFC7C
    // 0x800CBFDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_5;
    // 0x800CBFDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x800CBFE0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CBFE4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800CBFE8: nop

    // 0x800CBFEC: bc1fl       L_800CC014
    if (!c1cs) {
        // 0x800CBFF0: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC014;
    }
    goto skip_9;
    // 0x800CBFF0: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_9:
    // 0x800CBFF4: lw          $t8, 0xC($s5)
    ctx->r24 = MEM_W(ctx->r21, 0XC);
    // 0x800CBFF8: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CBFFC: subu        $v0, $s4, $t8
    ctx->r2 = SUB32(ctx->r20, ctx->r24);
    // 0x800CC000: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC004: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC008: b           L_800CC050
    // 0x800CC00C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800CC050;
    // 0x800CC00C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800CC010:
    // 0x800CC010: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CC014:
    // 0x800CC014: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800CC018: bnel        $at, $zero, L_800CBF7C
    if (ctx->r1 != 0) {
        // 0x800CC01C: lw          $v0, 0x14($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X14);
            goto L_800CBF7C;
    }
    goto skip_10;
    // 0x800CC01C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    skip_10:
L_800CC020:
    // 0x800CC020: lw          $t0, 0x8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X8);
L_800CC024:
    // 0x800CC024: lw          $t2, 0xC($s5)
    ctx->r10 = MEM_W(ctx->r21, 0XC);
    // 0x800CC028: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800CC02C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800CC030: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CC034: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
L_800CC038:
    // 0x800CC038: addiu       $s4, $s4, 0x1C
    ctx->r20 = ADD32(ctx->r20, 0X1C);
L_800CC03C:
    // 0x800CC03C: sltu        $at, $s4, $v0
    ctx->r1 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x800CC040: bnel        $at, $zero, L_800CBE50
    if (ctx->r1 != 0) {
        // 0x800CC044: lbu         $t8, 0x2($s4)
        ctx->r24 = MEM_BU(ctx->r20, 0X2);
            goto L_800CBE50;
    }
    goto skip_11;
    // 0x800CC044: lbu         $t8, 0x2($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X2);
    skip_11:
L_800CC048:
    // 0x800CC048: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CC04C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800CC050:
    // 0x800CC050: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800CC054: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800CC058: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800CC05C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800CC060: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC064: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800CC068: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800CC06C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800CC070: jr          $ra
    // 0x800CC074: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800CC074: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800CC078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC078: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800CC07C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800CC080: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x800CC084: addiu       $s7, $s7, -0x5180
    ctx->r23 = ADD32(ctx->r23, -0X5180);
    // 0x800CC088: lw          $t6, 0x10($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X10);
    // 0x800CC08C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800CC090: addiu       $fp, $zero, 0x1C
    ctx->r30 = ADD32(0, 0X1C);
    // 0x800CC094: multu       $t6, $fp
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CC098: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800CC09C: lw          $s6, 0x14($s7)
    ctx->r22 = MEM_W(ctx->r23, 0X14);
    // 0x800CC0A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800CC0A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CC0A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800CC0AC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800CC0B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800CC0B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800CC0B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800CC0BC: mflo        $t7
    ctx->r15 = lo;
    // 0x800CC0C0: addu        $t8, $t7, $s6
    ctx->r24 = ADD32(ctx->r15, ctx->r22);
    // 0x800CC0C4: sltu        $at, $s6, $t8
    ctx->r1 = ctx->r22 < ctx->r24 ? 1 : 0;
    // 0x800CC0C8: beq         $at, $zero, L_800CC304
    if (ctx->r1 == 0) {
        // 0x800CC0CC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800CC304;
    }
    // 0x800CC0CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CC0D0: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x800CC0D4: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800CC0D8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800CC0DC: addiu       $a0, $s6, 0x4
    ctx->r4 = ADD32(ctx->r22, 0X4);
L_800CC0E0:
    // 0x800CC0E0: jal         0x800EFC7C
    // 0x800CC0E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_0;
    // 0x800CC0E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800CC0E8: lwc1        $f4, 0x10($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X10);
    // 0x800CC0EC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CC0F0: nop

    // 0x800CC0F4: bc1fl       L_800CC2E4
    if (!c1cs) {
        // 0x800CC0F8: lw          $t2, 0x10($s7)
        ctx->r10 = MEM_W(ctx->r23, 0X10);
            goto L_800CC2E4;
    }
    goto skip_0;
    // 0x800CC0F8: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
    skip_0:
    // 0x800CC0FC: jal         0x800CB910
    // 0x800CC100: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800CB910(rdram, ctx);
        goto after_1;
    // 0x800CC100: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x800CC104: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800CC108: jal         0x800CB8F0
    // 0x800CC10C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_2;
    // 0x800CC10C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x800CC110: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x800CC114: beq         $at, $zero, L_800CC2E0
    if (ctx->r1 == 0) {
        // 0x800CC118: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800CC2E0;
    }
    // 0x800CC118: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CC11C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_800CC120:
    // 0x800CC120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC124: sll         $t9, $v0, 12
    ctx->r25 = S32(ctx->r2 << 12);
    // 0x800CC128: srl         $t0, $t9, 29
    ctx->r8 = S32(U32(ctx->r25) >> 29);
    // 0x800CC12C: beq         $t0, $zero, L_800CC154
    if (ctx->r8 == 0) {
        // 0x800CC130: nop
    
            goto L_800CC154;
    }
    // 0x800CC130: nop

    // 0x800CC134: beql        $t0, $s3, L_800CC190
    if (ctx->r8 == ctx->r19) {
        // 0x800CC138: lh          $t3, 0xE($s0)
        ctx->r11 = MEM_H(ctx->r16, 0XE);
            goto L_800CC190;
    }
    goto skip_1;
    // 0x800CC138: lh          $t3, 0xE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE);
    skip_1:
    // 0x800CC13C: beql        $t0, $s4, L_800CC20C
    if (ctx->r8 == ctx->r20) {
        // 0x800CC140: lh          $t6, 0xE($s0)
        ctx->r14 = MEM_H(ctx->r16, 0XE);
            goto L_800CC20C;
    }
    goto skip_2;
    // 0x800CC140: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
    skip_2:
    // 0x800CC144: beql        $t0, $s5, L_800CC270
    if (ctx->r8 == ctx->r21) {
        // 0x800CC148: lh          $t9, 0xE($s0)
        ctx->r25 = MEM_H(ctx->r16, 0XE);
            goto L_800CC270;
    }
    goto skip_3;
    // 0x800CC148: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    skip_3:
    // 0x800CC14C: b           L_800CC2D4
    // 0x800CC150: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
        goto L_800CC2D4;
    // 0x800CC150: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CC154:
    // 0x800CC154: jal         0x800EFC7C
    // 0x800CC158: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_3;
    // 0x800CC158: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800CC15C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC160: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800CC164: nop

    // 0x800CC168: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC16C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_4;
    // 0x800CC16C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_4:
    // 0x800CC170: lw          $t1, 0x14($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X14);
    // 0x800CC174: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CC178: subu        $v0, $s6, $t1
    ctx->r2 = SUB32(ctx->r22, ctx->r9);
    // 0x800CC17C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC180: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC184: b           L_800CC30C
    // 0x800CC188: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800CC30C;
    // 0x800CC188: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC18C: lh          $t3, 0xE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE);
L_800CC190:
    // 0x800CC190: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC194: lwc1        $f12, 0x4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC198: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800CC19C: nop

    // 0x800CC1A0: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CC1A4: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800CC1A8: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x800CC1AC: nop

    // 0x800CC1B0: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC1B4: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_5;
    // 0x800CC1B4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_5:
    // 0x800CC1B8: add.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CC1BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC1C0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x800CC1C4: nop

    // 0x800CC1C8: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC1CC: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_6;
    // 0x800CC1CC: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_6:
    // 0x800CC1D0: jal         0x800EFC7C
    // 0x800CC1D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_4;
    // 0x800CC1D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800CC1D8: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC1DC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800CC1E0: nop

    // 0x800CC1E4: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC1E8: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_7;
    // 0x800CC1E8: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_7:
    // 0x800CC1EC: lw          $t4, 0x14($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X14);
    // 0x800CC1F0: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CC1F4: subu        $v0, $s6, $t4
    ctx->r2 = SUB32(ctx->r22, ctx->r12);
    // 0x800CC1F8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC1FC: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC200: b           L_800CC30C
    // 0x800CC204: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800CC30C;
    // 0x800CC204: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC208: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
L_800CC20C:
    // 0x800CC20C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC210: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC214: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800CC218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC21C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CC220: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800CC224: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800CC228: nop

    // 0x800CC22C: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC230: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_8;
    // 0x800CC230: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_8:
    // 0x800CC234: jal         0x800EFC7C
    // 0x800CC238: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_5;
    // 0x800CC238: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x800CC23C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC240: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800CC244: nop

    // 0x800CC248: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC24C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_9;
    // 0x800CC24C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_9:
    // 0x800CC250: lw          $t7, 0x14($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X14);
    // 0x800CC254: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CC258: subu        $v0, $s6, $t7
    ctx->r2 = SUB32(ctx->r22, ctx->r15);
    // 0x800CC25C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC260: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC264: b           L_800CC30C
    // 0x800CC268: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800CC30C;
    // 0x800CC268: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC26C: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
L_800CC270:
    // 0x800CC270: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC274: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC278: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CC27C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC280: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CC284: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800CC288: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800CC28C: nop

    // 0x800CC290: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC294: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_10;
    // 0x800CC294: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_10:
    // 0x800CC298: jal         0x800EFC7C
    // 0x800CC29C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_6;
    // 0x800CC29C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800CC2A0: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC2A4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800CC2A8: nop

    // 0x800CC2AC: bc1fl       L_800CC2D4
    if (!c1cs) {
        // 0x800CC2B0: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC2D4;
    }
    goto skip_11;
    // 0x800CC2B0: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_11:
    // 0x800CC2B4: lw          $t0, 0x14($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X14);
    // 0x800CC2B8: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800CC2BC: subu        $v0, $s6, $t0
    ctx->r2 = SUB32(ctx->r22, ctx->r8);
    // 0x800CC2C0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC2C4: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC2C8: b           L_800CC30C
    // 0x800CC2CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800CC30C;
    // 0x800CC2CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC2D0: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CC2D4:
    // 0x800CC2D4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800CC2D8: bnel        $at, $zero, L_800CC120
    if (ctx->r1 != 0) {
        // 0x800CC2DC: lw          $v0, 0x14($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X14);
            goto L_800CC120;
    }
    goto skip_12;
    // 0x800CC2DC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    skip_12:
L_800CC2E0:
    // 0x800CC2E0: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
L_800CC2E4:
    // 0x800CC2E4: lw          $t4, 0x14($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X14);
    // 0x800CC2E8: addiu       $s6, $s6, 0x1C
    ctx->r22 = ADD32(ctx->r22, 0X1C);
    // 0x800CC2EC: multu       $t2, $fp
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CC2F0: mflo        $t3
    ctx->r11 = lo;
    // 0x800CC2F4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800CC2F8: sltu        $at, $s6, $t5
    ctx->r1 = ctx->r22 < ctx->r13 ? 1 : 0;
    // 0x800CC2FC: bnel        $at, $zero, L_800CC0E0
    if (ctx->r1 != 0) {
        // 0x800CC300: addiu       $a0, $s6, 0x4
        ctx->r4 = ADD32(ctx->r22, 0X4);
            goto L_800CC0E0;
    }
    goto skip_13;
    // 0x800CC300: addiu       $a0, $s6, 0x4
    ctx->r4 = ADD32(ctx->r22, 0X4);
    skip_13:
L_800CC304:
    // 0x800CC304: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CC308: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800CC30C:
    // 0x800CC30C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CC310: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC314: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800CC318: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800CC31C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800CC320: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC324: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800CC328: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800CC32C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800CC330: jr          $ra
    // 0x800CC334: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800CC334: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800CC338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC338: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CC33C: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800CC340: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC344: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CC348: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800CC34C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CC350: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800CC354: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800CC358: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC35C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CC360: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CC364: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800CC368: jal         0x800CC4D4
    // 0x800CC36C: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    func_800CC4D4(rdram, ctx);
        goto after_0;
    // 0x800CC36C: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800CC370: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CC374: beq         $v0, $at, L_800CC384
    if (ctx->r2 == ctx->r1) {
        // 0x800CC378: nop
    
            goto L_800CC384;
    }
    // 0x800CC378: nop

    // 0x800CC37C: b           L_800CC4BC
    // 0x800CC380: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CC4BC;
    // 0x800CC380: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CC384:
    // 0x800CC384: jal         0x800CB8F0
    // 0x800CC388: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_1;
    // 0x800CC388: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800CC38C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800CC390: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800CC394: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC398: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CC39C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800CC3A0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800CC3A4: addu        $v1, $t9, $v0
    ctx->r3 = ADD32(ctx->r25, ctx->r2);
    // 0x800CC3A8: lh          $t0, 0xE($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XE);
    // 0x800CC3AC: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800CC3B0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800CC3B4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800CC3B8: nop

    // 0x800CC3BC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CC3C0: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800CC3C4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x800CC3C8: nop

    // 0x800CC3CC: bc1f        L_800CC410
    if (!c1cs) {
        // 0x800CC3D0: nop
    
            goto L_800CC410;
    }
    // 0x800CC3D0: nop

    // 0x800CC3D4: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800CC3D8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800CC3DC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800CC3E0: nop

    // 0x800CC3E4: bc1f        L_800CC410
    if (!c1cs) {
        // 0x800CC3E8: nop
    
            goto L_800CC410;
    }
    // 0x800CC3E8: nop

    // 0x800CC3EC: jal         0x800EFC7C
    // 0x800CC3F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_2;
    // 0x800CC3F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800CC3F4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC3F8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CC3FC: nop

    // 0x800CC400: bc1f        L_800CC410
    if (!c1cs) {
        // 0x800CC404: nop
    
            goto L_800CC410;
    }
    // 0x800CC404: nop

    // 0x800CC408: b           L_800CC4BC
    // 0x800CC40C: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
        goto L_800CC4BC;
    // 0x800CC40C: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_800CC410:
    // 0x800CC410: jal         0x800CB910
    // 0x800CC414: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800CB910(rdram, ctx);
        goto after_3;
    // 0x800CC414: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x800CC418: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC41C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800CC420: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800CC424: beql        $at, $zero, L_800CC4BC
    if (ctx->r1 == 0) {
        // 0x800CC428: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800CC4BC;
    }
    goto skip_0;
    // 0x800CC428: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800CC42C: lh          $t2, 0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE);
L_800CC430:
    // 0x800CC430: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC434: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC438: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800CC43C: nop

    // 0x800CC440: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CC444: sub.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800CC448: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800CC44C: nop

    // 0x800CC450: bc1fl       L_800CC4AC
    if (!c1cs) {
        // 0x800CC454: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC4AC;
    }
    goto skip_1;
    // 0x800CC454: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_1:
    // 0x800CC458: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800CC45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC460: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CC464: nop

    // 0x800CC468: bc1fl       L_800CC4AC
    if (!c1cs) {
        // 0x800CC46C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC4AC;
    }
    goto skip_2;
    // 0x800CC46C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_2:
    // 0x800CC470: jal         0x800EFC7C
    // 0x800CC474: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_4;
    // 0x800CC474: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800CC478: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC47C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800CC480: nop

    // 0x800CC484: bc1fl       L_800CC4AC
    if (!c1cs) {
        // 0x800CC488: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC4AC;
    }
    goto skip_3;
    // 0x800CC488: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_3:
    // 0x800CC48C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC490: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CC494: subu        $v0, $s0, $t3
    ctx->r2 = SUB32(ctx->r16, ctx->r11);
    // 0x800CC498: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC49C: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC4A0: b           L_800CC4C0
    // 0x800CC4A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800CC4C0;
    // 0x800CC4A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CC4A8: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CC4AC:
    // 0x800CC4AC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800CC4B0: bnel        $at, $zero, L_800CC430
    if (ctx->r1 != 0) {
        // 0x800CC4B4: lh          $t2, 0xE($s0)
        ctx->r10 = MEM_H(ctx->r16, 0XE);
            goto L_800CC430;
    }
    goto skip_4;
    // 0x800CC4B4: lh          $t2, 0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE);
    skip_4:
    // 0x800CC4B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CC4BC:
    // 0x800CC4BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800CC4C0:
    // 0x800CC4C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CC4C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC4C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800CC4CC: jr          $ra
    // 0x800CC4D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CC4D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CC4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC4D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CC4D8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC4DC: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CC4E0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800CC4E4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800CC4E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CC4EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC4F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CC4F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800CC4F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800CC4FC: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800CC500: lbu         $t8, 0x3($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3);
    // 0x800CC504: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CC508: bne         $t8, $zero, L_800CC518
    if (ctx->r24 != 0) {
        // 0x800CC50C: nop
    
            goto L_800CC518;
    }
    // 0x800CC50C: nop

    // 0x800CC510: b           L_800CC5D0
    // 0x800CC514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CC5D0;
    // 0x800CC514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CC518:
    // 0x800CC518: jal         0x800CB948
    // 0x800CC51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CB948(rdram, ctx);
        goto after_0;
    // 0x800CC51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800CC520: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800CC524: jal         0x800CB968
    // 0x800CC528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CB968(rdram, ctx);
        goto after_1;
    // 0x800CC528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800CC52C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800CC530: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800CC534: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800CC538: beql        $at, $zero, L_800CC5D0
    if (ctx->r1 == 0) {
        // 0x800CC53C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800CC5D0;
    }
    goto skip_0;
    // 0x800CC53C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800CC540: lh          $t0, 0xE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE);
L_800CC544:
    // 0x800CC544: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC548: lwc1        $f12, 0x4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC54C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800CC550: nop

    // 0x800CC554: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CC558: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800CC55C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x800CC560: nop

    // 0x800CC564: bc1fl       L_800CC5C0
    if (!c1cs) {
        // 0x800CC568: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC5C0;
    }
    goto skip_1;
    // 0x800CC568: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_1:
    // 0x800CC56C: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CC570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC574: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x800CC578: nop

    // 0x800CC57C: bc1fl       L_800CC5C0
    if (!c1cs) {
        // 0x800CC580: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC5C0;
    }
    goto skip_2;
    // 0x800CC580: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_2:
    // 0x800CC584: jal         0x800EFC7C
    // 0x800CC588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_2;
    // 0x800CC588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800CC58C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC590: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CC594: nop

    // 0x800CC598: bc1fl       L_800CC5C0
    if (!c1cs) {
        // 0x800CC59C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CC5C0;
    }
    goto skip_3;
    // 0x800CC59C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_3:
    // 0x800CC5A0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800CC5A4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CC5A8: subu        $v0, $s0, $t1
    ctx->r2 = SUB32(ctx->r16, ctx->r9);
    // 0x800CC5AC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC5B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC5B4: b           L_800CC5D4
    // 0x800CC5B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800CC5D4;
    // 0x800CC5B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CC5BC: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CC5C0:
    // 0x800CC5C0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800CC5C4: bnel        $at, $zero, L_800CC544
    if (ctx->r1 != 0) {
        // 0x800CC5C8: lh          $t0, 0xE($s0)
        ctx->r8 = MEM_H(ctx->r16, 0XE);
            goto L_800CC544;
    }
    goto skip_4;
    // 0x800CC5C8: lh          $t0, 0xE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE);
    skip_4:
    // 0x800CC5CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CC5D0:
    // 0x800CC5D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800CC5D4:
    // 0x800CC5D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CC5D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC5DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800CC5E0: jr          $ra
    // 0x800CC5E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CC5E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CC5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC5E8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CC5EC: jr          $ra
    // 0x800CC5F0: lw          $v0, -0x5180($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5180);
    return;
    // 0x800CC5F0: lw          $v0, -0x5180($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5180);
;}
RECOMP_FUNC void func_800CC5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC5F4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC5F8: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CC5FC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CC600: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CC604: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC608: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800CC60C: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x800CC610: srl         $t9, $v0, 9
    ctx->r25 = S32(U32(ctx->r2) >> 9);
    // 0x800CC614: jr          $ra
    // 0x800CC618: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x800CC618: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void func_800CC61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC61C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC620: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CC624: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CC628: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CC62C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC630: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800CC634: jr          $ra
    // 0x800CC638: lbu         $v0, 0x3($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X3);
    return;
    // 0x800CC638: lbu         $v0, 0x3($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X3);
;}
RECOMP_FUNC void func_800CC63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC63C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CC640: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC644: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CC648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CC64C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CC650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CC654: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC658: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CC65C: jal         0x800CB8F0
    // 0x800CC660: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_800CB8F0(rdram, ctx);
        goto after_0;
    // 0x800CC660: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800CC664: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CC66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CC670: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CC674: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800CC678: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800CC67C: jr          $ra
    // 0x800CC680: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    return;
    // 0x800CC680: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
;}
RECOMP_FUNC void func_800CC684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC684: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CC688: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC68C: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CC690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CC694: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CC698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CC69C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC6A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CC6A4: jal         0x800CB948
    // 0x800CC6A8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_800CB948(rdram, ctx);
        goto after_0;
    // 0x800CC6A8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800CC6AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC6B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CC6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CC6B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CC6BC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800CC6C0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800CC6C4: jr          $ra
    // 0x800CC6C8: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    return;
    // 0x800CC6C8: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
;}
RECOMP_FUNC void func_800CC6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC6CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CC6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CC6D4: jal         0x800CC63C
    // 0x800CC6D8: nop

    func_800CC63C(rdram, ctx);
        goto after_0;
    // 0x800CC6D8: nop

    after_0:
    // 0x800CC6DC: lhu         $v0, 0x14($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X14);
    // 0x800CC6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CC6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CC6E8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x800CC6EC: jr          $ra
    // 0x800CC6F0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800CC6F0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_800CC6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC6F4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CC6F8: lw          $t7, -0x516C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X516C);
    // 0x800CC6FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CC700: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800CC704: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800CC708: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800CC70C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CC710: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CC718: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800CC71C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800CC720: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800CC724: jal         0x800CB8F0
    // 0x800CC728: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_800CB8F0(rdram, ctx);
        goto after_0;
    // 0x800CC728: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800CC72C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800CC730: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CC734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CC738: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CC73C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800CC740: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800CC744: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x800CC748: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800CC74C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800CC750: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CC754: sll         $t0, $v1, 12
    ctx->r8 = S32(ctx->r3 << 12);
    // 0x800CC758: srl         $t1, $t0, 29
    ctx->r9 = S32(U32(ctx->r8) >> 29);
    // 0x800CC75C: beq         $t1, $zero, L_800CC784
    if (ctx->r9 == 0) {
        // 0x800CC760: nop
    
            goto L_800CC784;
    }
    // 0x800CC760: nop

    // 0x800CC764: beq         $t1, $at, L_800CC7A8
    if (ctx->r9 == ctx->r1) {
        // 0x800CC768: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800CC7A8;
    }
    // 0x800CC768: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CC76C: beq         $t1, $at, L_800CC810
    if (ctx->r9 == ctx->r1) {
        // 0x800CC770: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800CC810;
    }
    // 0x800CC770: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CC774: beql        $t1, $at, L_800CC864
    if (ctx->r9 == ctx->r1) {
        // 0x800CC778: lh          $t4, 0xE($a0)
        ctx->r12 = MEM_H(ctx->r4, 0XE);
            goto L_800CC864;
    }
    goto skip_0;
    // 0x800CC778: lh          $t4, 0xE($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XE);
    skip_0:
    // 0x800CC77C: b           L_800CC8B0
    // 0x800CC780: nop

        goto L_800CC8B0;
    // 0x800CC780: nop

L_800CC784:
    // 0x800CC784: jal         0x800EFC7C
    // 0x800CC788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_1;
    // 0x800CC788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800CC78C: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC790: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CC794: nop

    // 0x800CC798: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC79C: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC79C: nop

    // 0x800CC7A0: b           L_800CCA9C
    // 0x800CC7A4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_800CCA9C;
    // 0x800CC7A4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_800CC7A8:
    // 0x800CC7A8: lh          $t2, 0xE($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XE);
    // 0x800CC7AC: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CC7B0: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC7B4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800CC7B8: nop

    // 0x800CC7BC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CC7C0: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800CC7C4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800CC7C8: nop

    // 0x800CC7CC: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC7D0: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC7D0: nop

    // 0x800CC7D4: add.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800CC7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC7DC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CC7E0: nop

    // 0x800CC7E4: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC7E8: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC7E8: nop

    // 0x800CC7EC: jal         0x800EFC7C
    // 0x800CC7F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_2;
    // 0x800CC7F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800CC7F4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC7F8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800CC7FC: nop

    // 0x800CC800: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC804: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC804: nop

    // 0x800CC808: b           L_800CCA9C
    // 0x800CC80C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_800CCA9C;
    // 0x800CC80C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_800CC810:
    // 0x800CC810: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
    // 0x800CC814: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CC818: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC81C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800CC820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC824: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CC828: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800CC82C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800CC830: nop

    // 0x800CC834: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC838: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC838: nop

    // 0x800CC83C: jal         0x800EFC7C
    // 0x800CC840: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_3;
    // 0x800CC840: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800CC844: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC848: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800CC84C: nop

    // 0x800CC850: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC854: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC854: nop

    // 0x800CC858: b           L_800CCA9C
    // 0x800CC85C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_800CCA9C;
    // 0x800CC85C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x800CC860: lh          $t4, 0xE($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XE);
L_800CC864:
    // 0x800CC864: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CC868: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC86C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800CC870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC874: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CC878: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800CC87C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x800CC880: nop

    // 0x800CC884: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC888: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC888: nop

    // 0x800CC88C: jal         0x800EFC7C
    // 0x800CC890: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_4;
    // 0x800CC890: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800CC894: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC898: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800CC89C: nop

    // 0x800CC8A0: bc1f        L_800CC8B0
    if (!c1cs) {
        // 0x800CC8A4: nop
    
            goto L_800CC8B0;
    }
    // 0x800CC8A4: nop

    // 0x800CC8A8: b           L_800CCA9C
    // 0x800CC8AC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_800CCA9C;
    // 0x800CC8AC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_800CC8B0:
    // 0x800CC8B0: jal         0x800CB910
    // 0x800CC8B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800CB910(rdram, ctx);
        goto after_5;
    // 0x800CC8B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x800CC8B8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800CC8BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800CC8C0: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800CC8C4: beql        $at, $zero, L_800CCA9C
    if (ctx->r1 == 0) {
        // 0x800CC8C8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800CCA9C;
    }
    goto skip_1;
    // 0x800CC8C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x800CC8CC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
L_800CC8D0:
    // 0x800CC8D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CC8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC8D8: sll         $t6, $v1, 12
    ctx->r14 = S32(ctx->r3 << 12);
    // 0x800CC8DC: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x800CC8E0: beq         $t7, $zero, L_800CC908
    if (ctx->r15 == 0) {
        // 0x800CC8E4: nop
    
            goto L_800CC908;
    }
    // 0x800CC8E4: nop

    // 0x800CC8E8: beq         $t7, $at, L_800CC940
    if (ctx->r15 == ctx->r1) {
        // 0x800CC8EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800CC940;
    }
    // 0x800CC8EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CC8F0: beq         $t7, $at, L_800CC9BC
    if (ctx->r15 == ctx->r1) {
        // 0x800CC8F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800CC9BC;
    }
    // 0x800CC8F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CC8F8: beql        $t7, $at, L_800CCA24
    if (ctx->r15 == ctx->r1) {
        // 0x800CC8FC: lh          $t6, 0xE($s0)
        ctx->r14 = MEM_H(ctx->r16, 0XE);
            goto L_800CCA24;
    }
    goto skip_2;
    // 0x800CC8FC: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
    skip_2:
    // 0x800CC900: b           L_800CCA88
    // 0x800CC904: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
        goto L_800CCA88;
    // 0x800CC904: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_800CC908:
    // 0x800CC908: jal         0x800EFC7C
    // 0x800CC90C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_6;
    // 0x800CC90C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800CC910: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC914: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800CC918: nop

    // 0x800CC91C: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CC920: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_3;
    // 0x800CC920: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_3:
    // 0x800CC924: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CC928: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CC92C: subu        $v0, $s0, $t8
    ctx->r2 = SUB32(ctx->r16, ctx->r24);
    // 0x800CC930: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC934: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC938: b           L_800CCAA0
    // 0x800CC93C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800CCAA0;
    // 0x800CC93C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CC940:
    // 0x800CC940: lh          $t0, 0xE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE);
    // 0x800CC944: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC948: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC94C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x800CC950: nop

    // 0x800CC954: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CC958: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800CC95C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800CC960: nop

    // 0x800CC964: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CC968: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_4;
    // 0x800CC968: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x800CC96C: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800CC970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC974: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CC978: nop

    // 0x800CC97C: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CC980: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_5;
    // 0x800CC980: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_5:
    // 0x800CC984: jal         0x800EFC7C
    // 0x800CC988: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_7;
    // 0x800CC988: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x800CC98C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC990: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CC994: nop

    // 0x800CC998: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CC99C: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_6;
    // 0x800CC99C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_6:
    // 0x800CC9A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CC9A4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CC9A8: subu        $v0, $s0, $t1
    ctx->r2 = SUB32(ctx->r16, ctx->r9);
    // 0x800CC9AC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CC9B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800CC9B4: b           L_800CCAA0
    // 0x800CC9B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800CCAA0;
    // 0x800CC9B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CC9BC:
    // 0x800CC9BC: lh          $t3, 0xE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE);
    // 0x800CC9C0: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CC9C4: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CC9C8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800CC9CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CC9D0: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CC9D4: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800CC9D8: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x800CC9DC: nop

    // 0x800CC9E0: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CC9E4: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_7;
    // 0x800CC9E4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_7:
    // 0x800CC9E8: jal         0x800EFC7C
    // 0x800CC9EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_8;
    // 0x800CC9EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x800CC9F0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CC9F4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CC9F8: nop

    // 0x800CC9FC: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CCA00: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_8;
    // 0x800CCA00: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_8:
    // 0x800CCA04: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CCA08: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CCA0C: subu        $v0, $s0, $t4
    ctx->r2 = SUB32(ctx->r16, ctx->r12);
    // 0x800CCA10: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CCA14: mflo        $v0
    ctx->r2 = lo;
    // 0x800CCA18: b           L_800CCAA0
    // 0x800CCA1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800CCAA0;
    // 0x800CCA1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCA20: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
L_800CCA24:
    // 0x800CCA24: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CCA28: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CCA2C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x800CCA30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CCA34: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CCA38: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800CCA3C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800CCA40: nop

    // 0x800CCA44: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CCA48: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_9;
    // 0x800CCA48: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_9:
    // 0x800CCA4C: jal         0x800EFC7C
    // 0x800CCA50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_9;
    // 0x800CCA50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x800CCA54: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CCA58: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CCA5C: nop

    // 0x800CCA60: bc1fl       L_800CCA88
    if (!c1cs) {
        // 0x800CCA64: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_800CCA88;
    }
    goto skip_10;
    // 0x800CCA64: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_10:
    // 0x800CCA68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CCA6C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CCA70: subu        $v0, $s0, $t7
    ctx->r2 = SUB32(ctx->r16, ctx->r15);
    // 0x800CCA74: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CCA78: mflo        $v0
    ctx->r2 = lo;
    // 0x800CCA7C: b           L_800CCAA0
    // 0x800CCA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800CCAA0;
    // 0x800CCA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCA84: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_800CCA88:
    // 0x800CCA88: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x800CCA8C: sltu        $at, $s0, $t9
    ctx->r1 = ctx->r16 < ctx->r25 ? 1 : 0;
    // 0x800CCA90: bnel        $at, $zero, L_800CC8D0
    if (ctx->r1 != 0) {
        // 0x800CCA94: lw          $v1, 0x14($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X14);
            goto L_800CC8D0;
    }
    goto skip_11;
    // 0x800CCA94: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    skip_11:
    // 0x800CCA98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CCA9C:
    // 0x800CCA9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CCAA0:
    // 0x800CCAA0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800CCAA4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800CCAA8: jr          $ra
    // 0x800CCAAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800CCAAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CCAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCAB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800CCAB4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CCAB8: addiu       $v0, $v0, -0x5180
    ctx->r2 = ADD32(ctx->r2, -0X5180);
    // 0x800CCABC: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x800CCAC0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800CCAC4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800CCAC8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800CCACC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CCAD0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800CCAD4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800CCAD8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800CCADC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800CCAE0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800CCAE4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800CCAE8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x800CCAEC: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x800CCAF0: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x800CCAF4: lbu         $t8, 0x2($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X2);
    // 0x800CCAF8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800CCAFC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800CCB00: bnel        $t9, $zero, L_800CCB14
    if (ctx->r25 != 0) {
        // 0x800CCB04: lw          $t0, 0x14($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X14);
            goto L_800CCB14;
    }
    goto skip_0;
    // 0x800CCB04: lw          $t0, 0x14($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X14);
    skip_0:
    // 0x800CCB08: b           L_800CCDD0
    // 0x800CCB0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CCDD0;
    // 0x800CCB0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CCB10: lw          $t0, 0x14($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X14);
L_800CCB14:
    // 0x800CCB14: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x800CCB18: lbu         $t2, 0x18($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X18);
    // 0x800CCB1C: bne         $t2, $zero, L_800CCB2C
    if (ctx->r10 != 0) {
        // 0x800CCB20: nop
    
            goto L_800CCB2C;
    }
    // 0x800CCB20: nop

    // 0x800CCB24: b           L_800CCDD0
    // 0x800CCB28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CCDD0;
    // 0x800CCB28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CCB2C:
    // 0x800CCB2C: jal         0x800CB8F0
    // 0x800CCB30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_0;
    // 0x800CCB30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800CCB34: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x800CCB38: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CCB3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CCB40: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800CCB44: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x800CCB48: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x800CCB4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CCB50: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800CCB54: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CCB58: lwc1        $f12, 0x4($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X4);
    // 0x800CCB5C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800CCB60: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800CCB64: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800CCB68: addu        $v1, $t4, $v0
    ctx->r3 = ADD32(ctx->r12, ctx->r2);
    // 0x800CCB6C: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
    // 0x800CCB70: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800CCB74: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x800CCB78: add.s       $f20, $f12, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x800CCB7C: beq         $t6, $zero, L_800CCBE4
    if (ctx->r14 == 0) {
        // 0x800CCB80: sub.s       $f22, $f12, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_800CCBE4;
    }
    // 0x800CCB80: sub.s       $f22, $f12, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800CCB84: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x800CCB88: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800CCB8C: srl         $t0, $t9, 29
    ctx->r8 = S32(U32(ctx->r25) >> 29);
    // 0x800CCB90: and         $t1, $t0, $s3
    ctx->r9 = ctx->r8 & ctx->r19;
    // 0x800CCB94: beq         $t1, $zero, L_800CCC64
    if (ctx->r9 == 0) {
        // 0x800CCB98: nop
    
            goto L_800CCC64;
    }
    // 0x800CCB98: nop

    // 0x800CCB9C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800CCBA0: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x800CCBA4: nop

    // 0x800CCBA8: bc1f        L_800CCC64
    if (!c1cs) {
        // 0x800CCBAC: nop
    
            goto L_800CCC64;
    }
    // 0x800CCBAC: nop

    // 0x800CCBB0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x800CCBB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CCBB8: bc1f        L_800CCC64
    if (!c1cs) {
        // 0x800CCBBC: nop
    
            goto L_800CCC64;
    }
    // 0x800CCBBC: nop

    // 0x800CCBC0: jal         0x800EFC7C
    // 0x800CCBC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_1;
    // 0x800CCBC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800CCBC8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CCBCC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CCBD0: nop

    // 0x800CCBD4: bc1f        L_800CCC64
    if (!c1cs) {
        // 0x800CCBD8: nop
    
            goto L_800CCC64;
    }
    // 0x800CCBD8: nop

    // 0x800CCBDC: b           L_800CCDD0
    // 0x800CCBE0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
        goto L_800CCDD0;
    // 0x800CCBE0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_800CCBE4:
    // 0x800CCBE4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x800CCBE8: sll         $t2, $v0, 12
    ctx->r10 = S32(ctx->r2 << 12);
    // 0x800CCBEC: srl         $t3, $t2, 29
    ctx->r11 = S32(U32(ctx->r10) >> 29);
    // 0x800CCBF0: and         $t4, $t3, $s3
    ctx->r12 = ctx->r11 & ctx->r19;
    // 0x800CCBF4: beq         $t4, $zero, L_800CCC64
    if (ctx->r12 == 0) {
        // 0x800CCBF8: andi        $t5, $t3, 0x2
        ctx->r13 = ctx->r11 & 0X2;
            goto L_800CCC64;
    }
    // 0x800CCBF8: andi        $t5, $t3, 0x2
    ctx->r13 = ctx->r11 & 0X2;
    // 0x800CCBFC: bne         $t5, $zero, L_800CCC40
    if (ctx->r13 != 0) {
        // 0x800CCC00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CCC40;
    }
    // 0x800CCC00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CCC04: lh          $t6, 0xE($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XE);
    // 0x800CCC08: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800CCC0C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800CCC10: nop

    // 0x800CCC14: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CCC18: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800CCC1C: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CCC20: nop

    // 0x800CCC24: bc1f        L_800CCC64
    if (!c1cs) {
        // 0x800CCC28: nop
    
            goto L_800CCC64;
    }
    // 0x800CCC28: nop

    // 0x800CCC2C: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CCC30: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800CCC34: nop

    // 0x800CCC38: bc1f        L_800CCC64
    if (!c1cs) {
        // 0x800CCC3C: nop
    
            goto L_800CCC64;
    }
    // 0x800CCC3C: nop

L_800CCC40:
    // 0x800CCC40: jal         0x800EFC7C
    // 0x800CCC44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_2;
    // 0x800CCC44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x800CCC48: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CCC4C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800CCC50: nop

    // 0x800CCC54: bc1f        L_800CCC64
    if (!c1cs) {
        // 0x800CCC58: nop
    
            goto L_800CCC64;
    }
    // 0x800CCC58: nop

    // 0x800CCC5C: b           L_800CCDD0
    // 0x800CCC60: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
        goto L_800CCDD0;
    // 0x800CCC60: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_800CCC64:
    // 0x800CCC64: jal         0x800CB910
    // 0x800CCC68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800CB910(rdram, ctx);
        goto after_3;
    // 0x800CCC68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800CCC6C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCC70: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x800CCC74: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CCC78: beq         $t7, $zero, L_800CCD1C
    if (ctx->r15 == 0) {
        // 0x800CCC7C: sltu        $at, $s0, $v0
        ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
            goto L_800CCD1C;
    }
    // 0x800CCC7C: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800CCC80: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x800CCC84: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800CCC88: beql        $at, $zero, L_800CCDD0
    if (ctx->r1 == 0) {
        // 0x800CCC8C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800CCDD0;
    }
    goto skip_1;
    // 0x800CCC8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x800CCC90: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
L_800CCC94:
    // 0x800CCC94: sll         $t0, $t9, 12
    ctx->r8 = S32(ctx->r25 << 12);
    // 0x800CCC98: srl         $t1, $t0, 29
    ctx->r9 = S32(U32(ctx->r8) >> 29);
    // 0x800CCC9C: and         $t2, $t1, $s3
    ctx->r10 = ctx->r9 & ctx->r19;
    // 0x800CCCA0: beql        $t2, $zero, L_800CCD08
    if (ctx->r10 == 0) {
        // 0x800CCCA4: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCD08;
    }
    goto skip_2;
    // 0x800CCCA4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_2:
    // 0x800CCCA8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CCCAC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x800CCCB0: nop

    // 0x800CCCB4: bc1fl       L_800CCD08
    if (!c1cs) {
        // 0x800CCCB8: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCD08;
    }
    goto skip_3;
    // 0x800CCCB8: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_3:
    // 0x800CCCBC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x800CCCC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CCCC4: bc1fl       L_800CCD08
    if (!c1cs) {
        // 0x800CCCC8: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCD08;
    }
    goto skip_4;
    // 0x800CCCC8: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_4:
    // 0x800CCCCC: jal         0x800EFC7C
    // 0x800CCCD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_4;
    // 0x800CCCD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x800CCCD4: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CCCD8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800CCCDC: nop

    // 0x800CCCE0: bc1fl       L_800CCD08
    if (!c1cs) {
        // 0x800CCCE4: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCD08;
    }
    goto skip_5;
    // 0x800CCCE4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_5:
    // 0x800CCCE8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800CCCEC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CCCF0: subu        $v0, $s0, $t3
    ctx->r2 = SUB32(ctx->r16, ctx->r11);
    // 0x800CCCF4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CCCF8: mflo        $v0
    ctx->r2 = lo;
    // 0x800CCCFC: b           L_800CCDD4
    // 0x800CCD00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_800CCDD4;
    // 0x800CCD00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800CCD04: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CCD08:
    // 0x800CCD08: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800CCD0C: bnel        $at, $zero, L_800CCC94
    if (ctx->r1 != 0) {
        // 0x800CCD10: lw          $t9, 0x14($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X14);
            goto L_800CCC94;
    }
    goto skip_6;
    // 0x800CCD10: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    skip_6:
    // 0x800CCD14: b           L_800CCDD0
    // 0x800CCD18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800CCDD0;
    // 0x800CCD18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CCD1C:
    // 0x800CCD1C: beql        $at, $zero, L_800CCDD0
    if (ctx->r1 == 0) {
        // 0x800CCD20: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800CCDD0;
    }
    goto skip_7;
    // 0x800CCD20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_7:
    // 0x800CCD24: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_800CCD28:
    // 0x800CCD28: sll         $t6, $v0, 12
    ctx->r14 = S32(ctx->r2 << 12);
    // 0x800CCD2C: srl         $t7, $t6, 29
    ctx->r15 = S32(U32(ctx->r14) >> 29);
    // 0x800CCD30: and         $t8, $t7, $s3
    ctx->r24 = ctx->r15 & ctx->r19;
    // 0x800CCD34: beq         $t8, $zero, L_800CCDBC
    if (ctx->r24 == 0) {
        // 0x800CCD38: andi        $t9, $t7, 0x2
        ctx->r25 = ctx->r15 & 0X2;
            goto L_800CCDBC;
    }
    // 0x800CCD38: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x800CCD3C: bne         $t9, $zero, L_800CCD84
    if (ctx->r25 != 0) {
        // 0x800CCD40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CCD84;
    }
    // 0x800CCD40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CCD44: lh          $t0, 0xE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE);
    // 0x800CCD48: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800CCD4C: lwc1        $f12, 0x4($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X4);
    // 0x800CCD50: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800CCD54: nop

    // 0x800CCD58: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CCD5C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800CCD60: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x800CCD64: nop

    // 0x800CCD68: bc1fl       L_800CCDC0
    if (!c1cs) {
        // 0x800CCD6C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCDC0;
    }
    goto skip_8;
    // 0x800CCD6C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_8:
    // 0x800CCD70: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CCD74: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x800CCD78: nop

    // 0x800CCD7C: bc1fl       L_800CCDC0
    if (!c1cs) {
        // 0x800CCD80: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCDC0;
    }
    goto skip_9;
    // 0x800CCD80: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_9:
L_800CCD84:
    // 0x800CCD84: jal         0x800EFC7C
    // 0x800CCD88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_5;
    // 0x800CCD88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x800CCD8C: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800CCD90: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CCD94: nop

    // 0x800CCD98: bc1fl       L_800CCDC0
    if (!c1cs) {
        // 0x800CCD9C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800CCDC0;
    }
    goto skip_10;
    // 0x800CCD9C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    skip_10:
    // 0x800CCDA0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800CCDA4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800CCDA8: subu        $v0, $s0, $t1
    ctx->r2 = SUB32(ctx->r16, ctx->r9);
    // 0x800CCDAC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800CCDB0: mflo        $v0
    ctx->r2 = lo;
    // 0x800CCDB4: b           L_800CCDD4
    // 0x800CCDB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_800CCDD4;
    // 0x800CCDB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800CCDBC:
    // 0x800CCDBC: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_800CCDC0:
    // 0x800CCDC0: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800CCDC4: bnel        $at, $zero, L_800CCD28
    if (ctx->r1 != 0) {
        // 0x800CCDC8: lw          $v0, 0x14($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X14);
            goto L_800CCD28;
    }
    goto skip_11;
    // 0x800CCDC8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    skip_11:
    // 0x800CCDCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800CCDD0:
    // 0x800CCDD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800CCDD4:
    // 0x800CCDD4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800CCDD8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800CCDDC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800CCDE0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800CCDE4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800CCDE8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800CCDEC: jr          $ra
    // 0x800CCDF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800CCDF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800CCDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCDF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CCDF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CCDFC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800CCE00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800CCE04: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800CCE08: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800CCE0C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800CCE10: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCE14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800CCE18: bne         $v1, $t6, L_800CCE44
    if (ctx->r3 != ctx->r14) {
        // 0x800CCE1C: or          $s1, $a2, $zero
        ctx->r17 = ctx->r6 | 0;
            goto L_800CCE44;
    }
    // 0x800CCE1C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800CCE20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800CCE24: jal         0x800CBDD4
    // 0x800CCE28: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_800CBDD4(rdram, ctx);
        goto after_0;
    // 0x800CCE28: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x800CCE2C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCE30: bne         $v0, $v1, L_800CCE44
    if (ctx->r2 != ctx->r3) {
        // 0x800CCE34: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_800CCE44;
    }
    // 0x800CCE34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800CCE38: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x800CCE3C: b           L_800CCEE0
    // 0x800CCE40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CCEE0;
    // 0x800CCE40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CCE44:
    // 0x800CCE44: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800CCE48: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800CCE4C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800CCE50: bne         $v1, $v0, L_800CCE60
    if (ctx->r3 != ctx->r2) {
        // 0x800CCE54: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_800CCE60;
    }
    // 0x800CCE54: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800CCE58: b           L_800CCE64
    // 0x800CCE5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_800CCE64;
    // 0x800CCE5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800CCE60:
    // 0x800CCE60: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_800CCE64:
    // 0x800CCE64: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800CCE68: jal         0x800CCAB0
    // 0x800CCE6C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_800CCAB0(rdram, ctx);
        goto after_1;
    // 0x800CCE6C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x800CCE70: bltz        $v0, L_800CCE80
    if (SIGNED(ctx->r2) < 0) {
        // 0x800CCE74: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_800CCE80;
    }
    // 0x800CCE74: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800CCE78: b           L_800CCEE0
    // 0x800CCE7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CCEE0;
    // 0x800CCE7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CCE80:
    // 0x800CCE80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800CCE84: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800CCE88: jal         0x800CBDD4
    // 0x800CCE8C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_800CBDD4(rdram, ctx);
        goto after_2;
    // 0x800CCE8C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x800CCE90: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCE94: bne         $v0, $v1, L_800CCEA8
    if (ctx->r2 != ctx->r3) {
        // 0x800CCE98: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_800CCEA8;
    }
    // 0x800CCE98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800CCE9C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x800CCEA0: b           L_800CCEE0
    // 0x800CCEA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CCEE0;
    // 0x800CCEA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CCEA8:
    // 0x800CCEA8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800CCEAC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800CCEB0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800CCEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CCEB8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800CCEBC: jal         0x800CCAB0
    // 0x800CCEC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_800CCAB0(rdram, ctx);
        goto after_3;
    // 0x800CCEC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x800CCEC4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCEC8: bltz        $v0, L_800CCED8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800CCECC: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_800CCED8;
    }
    // 0x800CCECC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800CCED0: b           L_800CCEE0
    // 0x800CCED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CCEE0;
    // 0x800CCED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CCED8:
    // 0x800CCED8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x800CCEDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CCEE0:
    // 0x800CCEE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CCEE4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCEE8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800CCEEC: jr          $ra
    // 0x800CCEF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CCEF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CCEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCEF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CCEF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CCEFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CCF00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CCF04: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CCF08: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800CCF0C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800CCF10: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCF14: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800CCF18: bne         $v1, $t6, L_800CCF44
    if (ctx->r3 != ctx->r14) {
        // 0x800CCF1C: or          $s0, $a1, $zero
        ctx->r16 = ctx->r5 | 0;
            goto L_800CCF44;
    }
    // 0x800CCF1C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800CCF20: jal         0x800CC078
    // 0x800CCF24: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800CC078(rdram, ctx);
        goto after_0;
    // 0x800CCF24: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800CCF28: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCF2C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800CCF30: bne         $v0, $v1, L_800CCF44
    if (ctx->r2 != ctx->r3) {
        // 0x800CCF34: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_800CCF44;
    }
    // 0x800CCF34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800CCF38: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x800CCF3C: b           L_800CCFD8
    // 0x800CCF40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CCFD8;
    // 0x800CCF40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CCF44:
    // 0x800CCF44: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800CCF48: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800CCF4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CCF50: bne         $v1, $v0, L_800CCF60
    if (ctx->r3 != ctx->r2) {
        // 0x800CCF54: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800CCF60;
    }
    // 0x800CCF54: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800CCF58: b           L_800CCF60
    // 0x800CCF5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_800CCF60;
    // 0x800CCF5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800CCF60:
    // 0x800CCF60: jal         0x800CC6F4
    // 0x800CCF64: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800CC6F4(rdram, ctx);
        goto after_1;
    // 0x800CCF64: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x800CCF68: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800CCF6C: bltz        $v0, L_800CCF7C
    if (SIGNED(ctx->r2) < 0) {
        // 0x800CCF70: sw          $v0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r2;
            goto L_800CCF7C;
    }
    // 0x800CCF70: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x800CCF74: b           L_800CCFD8
    // 0x800CCF78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CCFD8;
    // 0x800CCF78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CCF7C:
    // 0x800CCF7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CCF80: jal         0x800CC078
    // 0x800CCF84: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800CC078(rdram, ctx);
        goto after_2;
    // 0x800CCF84: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_2:
    // 0x800CCF88: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCF8C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800CCF90: bne         $v0, $v1, L_800CCFA4
    if (ctx->r2 != ctx->r3) {
        // 0x800CCF94: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_800CCFA4;
    }
    // 0x800CCF94: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800CCF98: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x800CCF9C: b           L_800CCFD8
    // 0x800CCFA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800CCFD8;
    // 0x800CCFA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CCFA4:
    // 0x800CCFA4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800CCFA8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x800CCFAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CCFB0: jal         0x800CC6F4
    // 0x800CCFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800CC6F4(rdram, ctx);
        goto after_3;
    // 0x800CCFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800CCFB8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800CCFBC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800CCFC0: bltz        $v0, L_800CCFD0
    if (SIGNED(ctx->r2) < 0) {
        // 0x800CCFC4: sw          $v0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r2;
            goto L_800CCFD0;
    }
    // 0x800CCFC4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x800CCFC8: b           L_800CCFD8
    // 0x800CCFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CCFD8;
    // 0x800CCFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CCFD0:
    // 0x800CCFD0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x800CCFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CCFD8:
    // 0x800CCFD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCFDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CCFE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CCFE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CCFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCFEC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CCFF0: addiu       $v1, $v1, -0x5180
    ctx->r3 = ADD32(ctx->r3, -0X5180);
    // 0x800CCFF4: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x800CCFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CCFFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CD000: beql        $a0, $zero, L_800CD020
    if (ctx->r4 == 0) {
        // 0x800CD004: lw          $a0, 0xC($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XC);
            goto L_800CD020;
    }
    goto skip_0;
    // 0x800CD004: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    skip_0:
    // 0x800CD008: jal         0x8001BAFC
    // 0x800CD00C: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800CD00C: nop

    after_0:
    // 0x800CD010: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CD014: addiu       $v1, $v1, -0x5180
    ctx->r3 = ADD32(ctx->r3, -0X5180);
    // 0x800CD018: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800CD01C: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
L_800CD020:
    // 0x800CD020: beql        $a0, $zero, L_800CD040
    if (ctx->r4 == 0) {
        // 0x800CD024: lw          $a0, 0x14($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X14);
            goto L_800CD040;
    }
    goto skip_1;
    // 0x800CD024: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    skip_1:
    // 0x800CD028: jal         0x8001BAFC
    // 0x800CD02C: nop

    defrag(rdram, ctx);
        goto after_1;
    // 0x800CD02C: nop

    after_1:
    // 0x800CD030: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CD034: addiu       $v1, $v1, -0x5180
    ctx->r3 = ADD32(ctx->r3, -0X5180);
    // 0x800CD038: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x800CD03C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
L_800CD040:
    // 0x800CD040: beql        $a0, $zero, L_800CD060
    if (ctx->r4 == 0) {
        // 0x800CD044: lw          $a0, 0xE0($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XE0);
            goto L_800CD060;
    }
    goto skip_2;
    // 0x800CD044: lw          $a0, 0xE0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XE0);
    skip_2:
    // 0x800CD048: jal         0x8001BAFC
    // 0x800CD04C: nop

    defrag(rdram, ctx);
        goto after_2;
    // 0x800CD04C: nop

    after_2:
    // 0x800CD050: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CD054: addiu       $v1, $v1, -0x5180
    ctx->r3 = ADD32(ctx->r3, -0X5180);
    // 0x800CD058: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x800CD05C: lw          $a0, 0xE0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XE0);
L_800CD060:
    // 0x800CD060: beql        $a0, $zero, L_800CD080
    if (ctx->r4 == 0) {
        // 0x800CD064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CD080;
    }
    goto skip_3;
    // 0x800CD064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x800CD068: jal         0x8001BAFC
    // 0x800CD06C: nop

    defrag(rdram, ctx);
        goto after_3;
    // 0x800CD06C: nop

    after_3:
    // 0x800CD070: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CD074: addiu       $v1, $v1, -0x5180
    ctx->r3 = ADD32(ctx->r3, -0X5180);
    // 0x800CD078: sw          $v0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r2;
    // 0x800CD07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CD080:
    // 0x800CD080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CD084: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CD08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD08C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800CD090: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CD094: lw          $t7, -0x517C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X517C);
    // 0x800CD098: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800CD09C: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800CD0A0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CD0A4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800CD0A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CD0AC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800CD0B0: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x800CD0B4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800CD0B8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800CD0BC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800CD0C0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800CD0C4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800CD0C8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800CD0CC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800CD0D0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800CD0D4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800CD0D8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800CD0DC: lw          $s7, 0x0($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X0);
    // 0x800CD0E0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800CD0E4: srl         $t8, $s7, 9
    ctx->r24 = S32(U32(ctx->r23) >> 9);
    // 0x800CD0E8: jal         0x800CB8F0
    // 0x800CD0EC: or          $s7, $t8, $zero
    ctx->r23 = ctx->r24 | 0;
    func_800CB8F0(rdram, ctx);
        goto after_0;
    // 0x800CD0EC: or          $s7, $t8, $zero
    ctx->r23 = ctx->r24 | 0;
    after_0:
    // 0x800CD0F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CD0F4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800CD0F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800CD0FC: lwc1        $f24, 0x5990($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5990);
    // 0x800CD100: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x800CD104: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x800CD108: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x800CD10C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800CD110:
    // 0x800CD110: jal         0x800DC128
    // 0x800CD114: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800DC128(rdram, ctx);
        goto after_1;
    // 0x800CD114: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_1:
    // 0x800CD118: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CD11C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CD120: mflo        $t9
    ctx->r25 = lo;
    // 0x800CD124: addu        $a1, $t9, $s2
    ctx->r5 = ADD32(ctx->r25, ctx->r18);
    // 0x800CD128: jal         0x800EE7F8
    // 0x800CD12C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800CD12C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    after_2:
    // 0x800CD130: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800CD134: jal         0x800DC178
    // 0x800CD138: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x800CD138: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    after_3:
    // 0x800CD13C: lh          $t0, 0xC($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XC);
    // 0x800CD140: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800CD144: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800CD148: addiu       $t1, $t0, -0x5
    ctx->r9 = ADD32(ctx->r8, -0X5);
    // 0x800CD14C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800CD150: jal         0x800DC178
    // 0x800CD154: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    func_800DC178(rdram, ctx);
        goto after_4;
    // 0x800CD154: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x800CD158: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800CD15C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800CD160: jal         0x800EF1B8
    // 0x800CD164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EF1B8(rdram, ctx);
        goto after_5;
    // 0x800CD164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800CD168: lh          $v0, 0xE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE);
    // 0x800CD16C: subu        $t2, $s4, $v0
    ctx->r10 = SUB32(ctx->r20, ctx->r2);
    // 0x800CD170: addiu       $t3, $v0, -0x5
    ctx->r11 = ADD32(ctx->r2, -0X5);
    // 0x800CD174: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800CD178: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800CD17C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CD180: jal         0x800DC178
    // 0x800CD184: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_800DC178(rdram, ctx);
        goto after_6;
    // 0x800CD184: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_6:
    // 0x800CD188: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800CD18C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CD190: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800CD194: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800CD198: jal         0x800CC4D4
    // 0x800CD19C: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    func_800CC4D4(rdram, ctx);
        goto after_7;
    // 0x800CD19C: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    after_7:
    // 0x800CD1A0: bnel        $v0, $s5, L_800CD110
    if (ctx->r2 != ctx->r21) {
        // 0x800CD1A4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800CD110;
    }
    goto skip_0;
    // 0x800CD1A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x800CD1A8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800CD1AC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800CD1B0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800CD1B4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800CD1B8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800CD1BC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800CD1C0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800CD1C4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800CD1C8: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD1CC: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800CD1D0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x800CD1D4: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x800CD1D8: jr          $ra
    // 0x800CD1DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800CD1DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800CD1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CD1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CD1E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CD1EC: jal         0x800CD08C
    // 0x800CD1F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CD08C(rdram, ctx);
        goto after_0;
    // 0x800CD1F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CD1F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD1F8: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800CD1FC: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800CD200: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800CD204: nop

    // 0x800CD208: bc1fl       L_800CD218
    if (!c1cs) {
        // 0x800CD20C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CD218;
    }
    goto skip_0;
    // 0x800CD20C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800CD210: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x800CD214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CD218:
    // 0x800CD218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CD21C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CD230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD230: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CD234: jr          $ra
    // 0x800CD238: swc1        $f12, -0x4FF0($at)
    MEM_W(-0X4FF0, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800CD238: swc1        $f12, -0x4FF0($at)
    MEM_W(-0X4FF0, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800CD23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD23C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800CD240: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CD244: lwc1        $f4, -0x4FF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4FF0);
    // 0x800CD248: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800CD24C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800CD250: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800CD254: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800CD258: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CD25C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800CD260: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x800CD264: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x800CD268: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800CD26C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800CD270: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800CD274: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800CD278: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x800CD27C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800CD280: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800CD284: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800CD288: jal         0x800BD708
    // 0x800CD28C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800BD708(rdram, ctx);
        goto after_0;
    // 0x800CD28C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800CD290: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x800CD294: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800CD298: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800CD29C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800CD2A0: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x800CD2A4: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800CD2A8: bne         $at, $zero, L_800CD358
    if (ctx->r1 != 0) {
        // 0x800CD2AC: sw          $t8, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r24;
            goto L_800CD358;
    }
    // 0x800CD2AC: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x800CD2B0: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x800CD2B4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800CD2B8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_800CD2BC:
    // 0x800CD2BC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800CD2C0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CD2C4: bne         $at, $zero, L_800CD340
    if (ctx->r1 != 0) {
        // 0x800CD2C8: sw          $a0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r4;
            goto L_800CD340;
    }
    // 0x800CD2C8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x800CD2CC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
L_800CD2D0:
    // 0x800CD2D0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CD2D4: bne         $at, $zero, L_800CD32C
    if (ctx->r1 != 0) {
        // 0x800CD2D8: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_800CD32C;
    }
    // 0x800CD2D8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x800CD2DC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
L_800CD2E0:
    // 0x800CD2E0: jal         0x800BDAD4
    // 0x800CD2E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BDAD4(rdram, ctx);
        goto after_1;
    // 0x800CD2E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800CD2E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CD2EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CD2F0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800CD2F4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x800CD2F8: jal         0x800EA628
    // 0x800CD2FC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_800EA628(rdram, ctx);
        goto after_2;
    // 0x800CD2FC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_2:
    // 0x800CD300: beql        $v0, $zero, L_800CD310
    if (ctx->r2 == 0) {
        // 0x800CD304: lw          $v0, 0x5C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X5C);
            goto L_800CD310;
    }
    goto skip_0;
    // 0x800CD304: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x800CD308: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800CD30C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_800CD310:
    // 0x800CD310: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x800CD314: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800CD318: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CD31C: beq         $at, $zero, L_800CD2E0
    if (ctx->r1 == 0) {
        // 0x800CD320: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_800CD2E0;
    }
    // 0x800CD320: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x800CD324: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800CD328: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
L_800CD32C:
    // 0x800CD32C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800CD330: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CD334: beql        $at, $zero, L_800CD2D0
    if (ctx->r1 == 0) {
        // 0x800CD338: lw          $v0, 0x50($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X50);
            goto L_800CD2D0;
    }
    goto skip_1;
    // 0x800CD338: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    skip_1:
    // 0x800CD33C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
L_800CD340:
    // 0x800CD340: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x800CD344: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800CD348: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800CD34C: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800CD350: beq         $at, $zero, L_800CD2BC
    if (ctx->r1 == 0) {
        // 0x800CD354: sw          $t1, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r9;
            goto L_800CD2BC;
    }
    // 0x800CD354: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
L_800CD358:
    // 0x800CD358: jal         0x800BDC44
    // 0x800CD35C: nop

    func_800BDC44(rdram, ctx);
        goto after_3;
    // 0x800CD35C: nop

    after_3:
    // 0x800CD360: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CD364: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CD368: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800CD36C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x800CD370: jal         0x800EA628
    // 0x800CD374: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_800EA628(rdram, ctx);
        goto after_4;
    // 0x800CD374: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_4:
    // 0x800CD378: beq         $v0, $zero, L_800CD384
    if (ctx->r2 == 0) {
        // 0x800CD37C: lw          $s0, 0x1C($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X1C);
            goto L_800CD384;
    }
    // 0x800CD37C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD380: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
L_800CD384:
    // 0x800CD384: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800CD388: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x800CD38C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800CD390: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800CD394: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800CD398: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800CD39C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800CD3A0: jr          $ra
    // 0x800CD3A4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800CD3A4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800CD3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD3A8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800CD3AC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x800CD3B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CD3B4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800CD3B8: lwc1        $f4, -0x4FF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4FF0);
    // 0x800CD3BC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800CD3C0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800CD3C4: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x800CD3C8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800CD3CC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800CD3D0: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800CD3D4: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x800CD3D8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800CD3DC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800CD3E0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800CD3E4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800CD3E8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800CD3EC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800CD3F0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x800CD3F4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x800CD3F8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800CD3FC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x800CD400: jal         0x800BD708
    // 0x800CD404: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800BD708(rdram, ctx);
        goto after_0;
    // 0x800CD404: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800CD408: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x800CD40C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x800CD410: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x800CD414: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800CD418: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x800CD41C: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800CD420: bne         $at, $zero, L_800CD4E0
    if (ctx->r1 != 0) {
        // 0x800CD424: sw          $t8, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r24;
            goto L_800CD4E0;
    }
    // 0x800CD424: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x800CD428: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x800CD42C: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x800CD430: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x800CD434: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800CD438: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
L_800CD43C:
    // 0x800CD43C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800CD440: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CD444: bne         $at, $zero, L_800CD4C8
    if (ctx->r1 != 0) {
        // 0x800CD448: sw          $a0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r4;
            goto L_800CD4C8;
    }
    // 0x800CD448: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x800CD44C: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_800CD450:
    // 0x800CD450: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CD454: bne         $at, $zero, L_800CD4B4
    if (ctx->r1 != 0) {
        // 0x800CD458: sw          $v0, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r2;
            goto L_800CD4B4;
    }
    // 0x800CD458: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x800CD45C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
L_800CD460:
    // 0x800CD460: jal         0x800BDAD4
    // 0x800CD464: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800BDAD4(rdram, ctx);
        goto after_1;
    // 0x800CD464: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800CD468: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800CD46C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CD470: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800CD474: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800CD478: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x800CD47C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800CD480: jal         0x800EAA2C
    // 0x800CD484: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_800EAA2C(rdram, ctx);
        goto after_2;
    // 0x800CD484: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_2:
    // 0x800CD488: beql        $v0, $zero, L_800CD498
    if (ctx->r2 == 0) {
        // 0x800CD48C: lw          $v0, 0x84($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X84);
            goto L_800CD498;
    }
    goto skip_0;
    // 0x800CD48C: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x800CD490: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800CD494: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
L_800CD498:
    // 0x800CD498: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x800CD49C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800CD4A0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CD4A4: beq         $at, $zero, L_800CD460
    if (ctx->r1 == 0) {
        // 0x800CD4A8: sw          $v0, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r2;
            goto L_800CD460;
    }
    // 0x800CD4A8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x800CD4AC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800CD4B0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
L_800CD4B4:
    // 0x800CD4B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800CD4B8: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CD4BC: beql        $at, $zero, L_800CD450
    if (ctx->r1 == 0) {
        // 0x800CD4C0: lw          $v0, 0x78($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X78);
            goto L_800CD450;
    }
    goto skip_1;
    // 0x800CD4C0: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    skip_1:
    // 0x800CD4C4: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
L_800CD4C8:
    // 0x800CD4C8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x800CD4CC: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x800CD4D0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800CD4D4: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800CD4D8: beq         $at, $zero, L_800CD43C
    if (ctx->r1 == 0) {
        // 0x800CD4DC: sw          $t1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r9;
            goto L_800CD43C;
    }
    // 0x800CD4DC: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
L_800CD4E0:
    // 0x800CD4E0: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x800CD4E4: jal         0x800BDC44
    // 0x800CD4E8: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    func_800BDC44(rdram, ctx);
        goto after_3;
    // 0x800CD4E8: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    after_3:
    // 0x800CD4EC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800CD4F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CD4F4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800CD4F8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800CD4FC: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x800CD500: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800CD504: jal         0x800EAA2C
    // 0x800CD508: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_800EAA2C(rdram, ctx);
        goto after_4;
    // 0x800CD508: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_4:
    // 0x800CD50C: beq         $v0, $zero, L_800CD518
    if (ctx->r2 == 0) {
        // 0x800CD510: ldc1        $f20, 0x28($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
            goto L_800CD518;
    }
    // 0x800CD510: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x800CD514: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
L_800CD518:
    // 0x800CD518: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800CD51C: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x800CD520: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800CD524: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800CD528: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800CD52C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800CD530: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD534: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800CD538: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800CD53C: jr          $ra
    // 0x800CD540: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x800CD540: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800CD544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD544: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800CD548: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800CD54C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CD550: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x800CD554: lwc1        $f4, -0x4FF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4FF0);
    // 0x800CD558: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800CD55C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800CD560: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x800CD564: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800CD568: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800CD56C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x800CD570: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x800CD574: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800CD578: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800CD57C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800CD580: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800CD584: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800CD588: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800CD58C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800CD590: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800CD594: jal         0x800BD708
    // 0x800CD598: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800BD708(rdram, ctx);
        goto after_0;
    // 0x800CD598: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x800CD59C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800CD5A0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800CD5A4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800CD5A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800CD5AC: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x800CD5B0: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800CD5B4: bne         $at, $zero, L_800CD664
    if (ctx->r1 != 0) {
        // 0x800CD5B8: sw          $t8, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r24;
            goto L_800CD664;
    }
    // 0x800CD5B8: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x800CD5BC: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x800CD5C0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800CD5C4: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
L_800CD5C8:
    // 0x800CD5C8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x800CD5CC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CD5D0: bne         $at, $zero, L_800CD64C
    if (ctx->r1 != 0) {
        // 0x800CD5D4: sw          $a0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r4;
            goto L_800CD64C;
    }
    // 0x800CD5D4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x800CD5D8: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_800CD5DC:
    // 0x800CD5DC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CD5E0: bne         $at, $zero, L_800CD638
    if (ctx->r1 != 0) {
        // 0x800CD5E4: sw          $v0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r2;
            goto L_800CD638;
    }
    // 0x800CD5E4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x800CD5E8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
L_800CD5EC:
    // 0x800CD5EC: jal         0x800BDAD4
    // 0x800CD5F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BDAD4(rdram, ctx);
        goto after_1;
    // 0x800CD5F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800CD5F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800CD5F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CD5FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CD600: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x800CD604: jal         0x800EADFC
    // 0x800CD608: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_800EADFC(rdram, ctx);
        goto after_2;
    // 0x800CD608: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_2:
    // 0x800CD60C: beql        $v0, $zero, L_800CD61C
    if (ctx->r2 == 0) {
        // 0x800CD610: lw          $v0, 0x74($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X74);
            goto L_800CD61C;
    }
    goto skip_0;
    // 0x800CD610: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x800CD614: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800CD618: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
L_800CD61C:
    // 0x800CD61C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD620: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800CD624: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CD628: beq         $at, $zero, L_800CD5EC
    if (ctx->r1 == 0) {
        // 0x800CD62C: sw          $v0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r2;
            goto L_800CD5EC;
    }
    // 0x800CD62C: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x800CD630: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800CD634: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
L_800CD638:
    // 0x800CD638: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800CD63C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CD640: beql        $at, $zero, L_800CD5DC
    if (ctx->r1 == 0) {
        // 0x800CD644: lw          $v0, 0x68($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X68);
            goto L_800CD5DC;
    }
    goto skip_1;
    // 0x800CD644: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    skip_1:
    // 0x800CD648: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
L_800CD64C:
    // 0x800CD64C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x800CD650: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800CD654: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800CD658: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800CD65C: beq         $at, $zero, L_800CD5C8
    if (ctx->r1 == 0) {
        // 0x800CD660: sw          $t1, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r9;
            goto L_800CD5C8;
    }
    // 0x800CD660: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
L_800CD664:
    // 0x800CD664: jal         0x800BDC44
    // 0x800CD668: nop

    func_800BDC44(rdram, ctx);
        goto after_3;
    // 0x800CD668: nop

    after_3:
    // 0x800CD66C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800CD670: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CD674: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CD678: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x800CD67C: jal         0x800EADFC
    // 0x800CD680: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_800EADFC(rdram, ctx);
        goto after_4;
    // 0x800CD680: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_4:
    // 0x800CD684: beq         $v0, $zero, L_800CD690
    if (ctx->r2 == 0) {
        // 0x800CD688: ldc1        $f20, 0x20($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
            goto L_800CD690;
    }
    // 0x800CD688: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800CD68C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_800CD690:
    // 0x800CD690: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD694: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x800CD698: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800CD69C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800CD6A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800CD6A4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800CD6A8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800CD6AC: jr          $ra
    // 0x800CD6B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800CD6B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800CD6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD6B4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800CD6B8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800CD6BC: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x800CD6C0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800CD6C4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800CD6C8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800CD6CC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800CD6D0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800CD6D4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800CD6D8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800CD6DC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800CD6E0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800CD6E4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800CD6E8: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x800CD6EC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800CD6F0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800CD6F4: beq         $v0, $zero, L_800CD70C
    if (ctx->r2 == 0) {
        // 0x800CD6F8: or          $s7, $a3, $zero
        ctx->r23 = ctx->r7 | 0;
            goto L_800CD70C;
    }
    // 0x800CD6F8: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x800CD6FC: jalr        $v0
    // 0x800CD700: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800CD700: nop

    after_0:
    // 0x800CD704: b           L_800CD710
    // 0x800CD708: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
        goto L_800CD710;
    // 0x800CD708: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_800CD70C:
    // 0x800CD70C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_800CD710:
    // 0x800CD710: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x800CD714: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CD718: jal         0x800EE7F8
    // 0x800CD71C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800CD71C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800CD720: lw          $s5, 0x98($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X98);
    // 0x800CD724: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800CD728: addiu       $s6, $sp, 0x68
    ctx->r22 = ADD32(ctx->r29, 0X68);
    // 0x800CD72C: blez        $s5, L_800CD7E8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x800CD730: addiu       $s3, $sp, 0x54
        ctx->r19 = ADD32(ctx->r29, 0X54);
            goto L_800CD7E8;
    }
    // 0x800CD730: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
L_800CD734:
    // 0x800CD734: beq         $s4, $zero, L_800CD798
    if (ctx->r20 == 0) {
        // 0x800CD738: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800CD798;
    }
    // 0x800CD738: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CD73C: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x800CD740: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CD744: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x800CD748: beq         $v0, $zero, L_800CD798
    if (ctx->r2 == 0) {
        // 0x800CD74C: nop
    
            goto L_800CD798;
    }
    // 0x800CD74C: nop

    // 0x800CD750: lw          $t6, 0x18($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X18);
    // 0x800CD754: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800CD758: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CD75C: sll         $t7, $t6, 27
    ctx->r15 = S32(ctx->r14 << 27);
    // 0x800CD760: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x800CD764: jalr        $v0
    // 0x800CD768: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x800CD768: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x800CD76C: beql        $v0, $zero, L_800CD7D4
    if (ctx->r2 == 0) {
        // 0x800CD770: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800CD7D4;
    }
    goto skip_0;
    // 0x800CD770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x800CD774: lbu         $t2, 0x19($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X19);
    // 0x800CD778: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x800CD77C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800CD780: andi        $t1, $t0, 0x1E
    ctx->r9 = ctx->r8 & 0X1E;
    // 0x800CD784: andi        $t3, $t2, 0xFFE1
    ctx->r11 = ctx->r10 & 0XFFE1;
    // 0x800CD788: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x800CD78C: sb          $t4, 0x19($s2)
    MEM_B(0X19, ctx->r18) = ctx->r12;
    // 0x800CD790: b           L_800CD7EC
    // 0x800CD794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CD7EC;
    // 0x800CD794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CD798:
    // 0x800CD798: jal         0x800EC75C
    // 0x800CD79C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EC75C(rdram, ctx);
        goto after_3;
    // 0x800CD79C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x800CD7A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800CD7A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CD7A8: jal         0x800EEB40
    // 0x800CD7AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EEB40(rdram, ctx);
        goto after_4;
    // 0x800CD7AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x800CD7B0: add.s       $f2, $f20, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x800CD7B4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800CD7B8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800CD7BC: nop

    // 0x800CD7C0: bc1fl       L_800CD7D4
    if (!c1cs) {
        // 0x800CD7C4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800CD7D4;
    }
    goto skip_1;
    // 0x800CD7C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x800CD7C8: b           L_800CD7EC
    // 0x800CD7CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800CD7EC;
    // 0x800CD7CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CD7D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800CD7D4:
    // 0x800CD7D4: jal         0x800EF04C
    // 0x800CD7D8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x800CD7D8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_5:
    // 0x800CD7DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800CD7E0: bne         $s0, $s5, L_800CD734
    if (ctx->r16 != ctx->r21) {
        // 0x800CD7E4: nop
    
            goto L_800CD734;
    }
    // 0x800CD7E4: nop

L_800CD7E8:
    // 0x800CD7E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800CD7EC:
    // 0x800CD7EC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800CD7F0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800CD7F4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800CD7F8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800CD7FC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800CD800: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800CD804: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800CD808: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD80C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800CD810: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x800CD814: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x800CD818: jr          $ra
    // 0x800CD81C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x800CD81C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800CD820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD820: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x800CD824: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x800CD828: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x800CD82C: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x800CD830: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800CD834: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800CD838: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800CD83C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800CD840: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800CD844: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x800CD848: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x800CD84C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x800CD850: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x800CD854: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x800CD858: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800CD85C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800CD860: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x800CD864: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800CD868: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800CD86C: jal         0x800CB854
    // 0x800CD870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_0;
    // 0x800CD870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800CD874: beql        $v0, $zero, L_800CD89C
    if (ctx->r2 == 0) {
        // 0x800CD878: sw          $zero, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = 0;
            goto L_800CD89C;
    }
    goto skip_0;
    // 0x800CD878: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    skip_0:
    // 0x800CD87C: jal         0x800CB854
    // 0x800CD880: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_1;
    // 0x800CD880: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800CD884: addiu       $t6, $v0, 0x1F
    ctx->r14 = ADD32(ctx->r2, 0X1F);
    // 0x800CD888: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800CD88C: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x800CD890: b           L_800CD89C
    // 0x800CD894: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
        goto L_800CD89C;
    // 0x800CD894: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x800CD898: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
L_800CD89C:
    // 0x800CD89C: addiu       $s0, $sp, 0x100
    ctx->r16 = ADD32(ctx->r29, 0X100);
    // 0x800CD8A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CD8A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800CD8A8: jal         0x800EFB24
    // 0x800CD8AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x800CD8AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x800CD8B0: jal         0x800EEF94
    // 0x800CD8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x800CD8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800CD8B8: addiu       $s3, $sp, 0xF4
    ctx->r19 = ADD32(ctx->r29, 0XF4);
    // 0x800CD8BC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800CD8C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CD8C4: jal         0x800EF410
    // 0x800CD8C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF410(rdram, ctx);
        goto after_4;
    // 0x800CD8C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800CD8CC: add.s       $f20, $f26, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f26.fl + ctx->f26.fl;
    // 0x800CD8D0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x800CD8D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CD8D8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800CD8DC: div.s       $f22, $f24, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = DIV_S(ctx->f24.fl, ctx->f20.fl);
    // 0x800CD8E0: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x800CD8E4: trunc.w.s   $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    ctx->f4.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x800CD8E8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800CD8EC: nop

    // 0x800CD8F0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800CD8F4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800CD8F8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CD8FC: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x800CD900: nop

    // 0x800CD904: bc1f        L_800CD910
    if (!c1cs) {
        // 0x800CD908: nop
    
            goto L_800CD910;
    }
    // 0x800CD908: nop

    // 0x800CD90C: addiu       $s4, $v0, 0x1
    ctx->r20 = ADD32(ctx->r2, 0X1);
L_800CD910:
    // 0x800CD910: jal         0x800EFE50
    // 0x800CD914: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_800EFE50(rdram, ctx);
        goto after_5;
    // 0x800CD914: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x800CD918: jal         0x800BE444
    // 0x800CD91C: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    func_800BE444(rdram, ctx);
        goto after_6;
    // 0x800CD91C: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    after_6:
    // 0x800CD920: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x800CD924: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800CD928: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800CD92C: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    // 0x800CD930: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800CD934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CD938: jal         0x800EFA20
    // 0x800CD93C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EFA20(rdram, ctx);
        goto after_7;
    // 0x800CD93C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_7:
    // 0x800CD940: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800CD944: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800CD948: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CD94C: sub.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x800CD950: addiu       $s2, $sp, 0xE8
    ctx->r18 = ADD32(ctx->r29, 0XE8);
    // 0x800CD954: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CD958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800CD95C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800CD960: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800CD964: jal         0x800EFA20
    // 0x800CD968: nop

    func_800EFA20(rdram, ctx);
        goto after_8;
    // 0x800CD968: nop

    after_8:
    // 0x800CD96C: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x800CD970: jal         0x800EE7F8
    // 0x800CD974: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x800CD974: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x800CD978: addiu       $s3, $sp, 0xC0
    ctx->r19 = ADD32(ctx->r29, 0XC0);
    // 0x800CD97C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CD980: jal         0x800EE88C
    // 0x800CD984: addiu       $a1, $s6, 0x1E
    ctx->r5 = ADD32(ctx->r22, 0X1E);
    func_800EE88C(rdram, ctx);
        goto after_10;
    // 0x800CD984: addiu       $a1, $s6, 0x1E
    ctx->r5 = ADD32(ctx->r22, 0X1E);
    after_10:
    // 0x800CD988: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CD98C: jal         0x800EF04C
    // 0x800CD990: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EF04C(rdram, ctx);
        goto after_11;
    // 0x800CD990: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
    // 0x800CD994: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CD998: jal         0x800EF04C
    // 0x800CD99C: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    func_800EF04C(rdram, ctx);
        goto after_12;
    // 0x800CD99C: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    after_12:
    // 0x800CD9A0: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x800CD9A4: jal         0x800EE7F8
    // 0x800CD9A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_13;
    // 0x800CD9A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800CD9AC: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x800CD9B0: ori         $fp, $zero, 0xFFFF
    ctx->r30 = 0 | 0XFFFF;
    // 0x800CD9B4: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x800CD9B8: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800CD9BC: beql        $a0, $zero, L_800CDB68
    if (ctx->r4 == 0) {
        // 0x800CD9C0: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_800CDB68;
    }
    goto skip_1;
    // 0x800CD9C0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_1:
L_800CD9C4:
    // 0x800CD9C4: jal         0x800E9E88
    // 0x800CD9C8: nop

    func_800E9E88(rdram, ctx);
        goto after_14;
    // 0x800CD9C8: nop

    after_14:
    // 0x800CD9CC: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x800CD9D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CD9D4: jal         0x800E9EB4
    // 0x800CD9D8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_15;
    // 0x800CD9D8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_15:
    // 0x800CD9DC: sltu        $at, $s1, $v0
    ctx->r1 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x800CD9E0: beq         $at, $zero, L_800CDB4C
    if (ctx->r1 == 0) {
        // 0x800CD9E4: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_800CDB4C;
    }
    // 0x800CD9E4: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x800CD9E8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_800CD9EC:
    // 0x800CD9EC: sll         $t3, $v0, 27
    ctx->r11 = S32(ctx->r2 << 27);
    // 0x800CD9F0: bgez        $t3, L_800CDB3C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800CD9F4: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_800CDB3C;
    }
    // 0x800CD9F4: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x800CD9F8: beql        $t4, $zero, L_800CDB40
    if (ctx->r12 == 0) {
        // 0x800CD9FC: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_2;
    // 0x800CD9FC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_2:
    // 0x800CDA00: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x800CDA04: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x800CDA08: sll         $t6, $t5, 22
    ctx->r14 = S32(ctx->r13 << 22);
    // 0x800CDA0C: bgezl       $t6, L_800CDB40
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800CDA10: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_3;
    // 0x800CDA10: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_3:
    // 0x800CDA14: beql        $s6, $s0, L_800CDB40
    if (ctx->r22 == ctx->r16) {
        // 0x800CDA18: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_4;
    // 0x800CDA18: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_4:
    // 0x800CDA1C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x800CDA20: beql        $v0, $zero, L_800CDB40
    if (ctx->r2 == 0) {
        // 0x800CDA24: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_5;
    // 0x800CDA24: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_5:
    // 0x800CDA28: beql        $fp, $v0, L_800CDB40
    if (ctx->r30 == ctx->r2) {
        // 0x800CDA2C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_6;
    // 0x800CDA2C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_6:
    // 0x800CDA30: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x800CDA34: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800CDA38: beql        $t9, $zero, L_800CDB40
    if (ctx->r25 == 0) {
        // 0x800CDA3C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_7;
    // 0x800CDA3C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_7:
    // 0x800CDA40: jal         0x80106790
    // 0x800CDA44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106790(rdram, ctx);
        goto after_16;
    // 0x800CDA44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x800CDA48: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x800CDA4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CDA50: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x800CDA54: sll         $t2, $t0, 14
    ctx->r10 = S32(ctx->r8 << 14);
    // 0x800CDA58: bltzl       $t2, L_800CDB40
    if (SIGNED(ctx->r10) < 0) {
        // 0x800CDA5C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_8;
    // 0x800CDA5C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_8:
    // 0x800CDA60: lhu         $t3, 0x66($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X66);
    // 0x800CDA64: and         $t5, $t3, $t4
    ctx->r13 = ctx->r11 & ctx->r12;
    // 0x800CDA68: bnel        $t5, $zero, L_800CDB40
    if (ctx->r13 != 0) {
        // 0x800CDA6C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_9;
    // 0x800CDA6C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_9:
    // 0x800CDA70: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x800CDA74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CDA78: lwc1        $f10, 0x59A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X59A0);
    // 0x800CDA7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CDA80: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800CDA84: mul.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x800CDA88: nop

    // 0x800CDA8C: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800CDA90: jal         0x8008A018
    // 0x800CDA94: nop

    _subaddiecustomhits_entrypoint_5(rdram, ctx);
        goto after_17;
    // 0x800CDA94: nop

    after_17:
    // 0x800CDA98: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800CDA9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CDAA0: jal         0x800EEB40
    // 0x800CDAA4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    func_800EEB40(rdram, ctx);
        goto after_18;
    // 0x800CDAA4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    after_18:
    // 0x800CDAA8: add.s       $f2, $f22, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x800CDAAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CDAB0: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800CDAB4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800CDAB8: nop

    // 0x800CDABC: bc1tl       L_800CDB40
    if (c1cs) {
        // 0x800CDAC0: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_10;
    // 0x800CDAC0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_10:
    // 0x800CDAC4: jal         0x800EEB40
    // 0x800CDAC8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EEB40(rdram, ctx);
        goto after_19;
    // 0x800CDAC8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_19:
    // 0x800CDACC: beq         $s5, $zero, L_800CDAE4
    if (ctx->r21 == 0) {
        // 0x800CDAD0: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_800CDAE4;
    }
    // 0x800CDAD0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800CDAD4: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x800CDAD8: nop

    // 0x800CDADC: bc1tl       L_800CDB40
    if (c1cs) {
        // 0x800CDAE0: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_11;
    // 0x800CDAE0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_11:
L_800CDAE4:
    // 0x800CDAE4: jal         0x800EC3C4
    // 0x800CDAE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EC3C4(rdram, ctx);
        goto after_20;
    // 0x800CDAE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x800CDAEC: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x800CDAF0: beql        $t7, $zero, L_800CDB18
    if (ctx->r15 == 0) {
        // 0x800CDAF4: mfc1        $a2, $f26
        ctx->r6 = (int32_t)ctx->f26.u32l;
            goto L_800CDB18;
    }
    goto skip_12;
    // 0x800CDAF4: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    skip_12:
    // 0x800CDAF8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x800CDAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CDB00: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800CDB04: jalr        $t9
    // 0x800CDB08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x800CDB08: nop

    after_21:
    // 0x800CDB0C: beql        $v0, $zero, L_800CDB40
    if (ctx->r2 == 0) {
        // 0x800CDB10: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_13;
    // 0x800CDB10: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_13:
    // 0x800CDB14: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
L_800CDB18:
    // 0x800CDB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CDB1C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800CDB20: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    // 0x800CDB24: jal         0x800CD6B4
    // 0x800CDB28: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_800CD6B4(rdram, ctx);
        goto after_22;
    // 0x800CDB28: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_22:
    // 0x800CDB2C: beql        $v0, $zero, L_800CDB40
    if (ctx->r2 == 0) {
        // 0x800CDB30: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDB40;
    }
    goto skip_14;
    // 0x800CDB30: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_14:
    // 0x800CDB34: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x800CDB38: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
L_800CDB3C:
    // 0x800CDB3C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_800CDB40:
    // 0x800CDB40: sltu        $at, $s1, $s7
    ctx->r1 = ctx->r17 < ctx->r23 ? 1 : 0;
    // 0x800CDB44: bnel        $at, $zero, L_800CD9EC
    if (ctx->r1 != 0) {
        // 0x800CDB48: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_800CD9EC;
    }
    goto skip_15;
    // 0x800CDB48: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_15:
L_800CDB4C:
    // 0x800CDB4C: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x800CDB50: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800CDB54: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800CDB58: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    // 0x800CDB5C: bne         $a0, $zero, L_800CD9C4
    if (ctx->r4 != 0) {
        // 0x800CDB60: nop
    
            goto L_800CD9C4;
    }
    // 0x800CDB60: nop

    // 0x800CDB64: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_800CDB68:
    // 0x800CDB68: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x800CDB6C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800CDB70: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800CDB74: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x800CDB78: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x800CDB7C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x800CDB80: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800CDB84: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800CDB88: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800CDB8C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800CDB90: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800CDB94: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800CDB98: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDB9C: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800CDBA0: jr          $ra
    // 0x800CDBA4: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x800CDBA4: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_800CDBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CDBA8: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x800CDBAC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800CDBB0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800CDBB4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800CDBB8: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x800CDBBC: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x800CDBC0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800CDBC4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800CDBC8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800CDBCC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800CDBD0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800CDBD4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800CDBD8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800CDBDC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800CDBE0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800CDBE4: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x800CDBE8: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x800CDBEC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x800CDBF0: jal         0x800CB854
    // 0x800CDBF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_0;
    // 0x800CDBF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800CDBF8: beql        $v0, $zero, L_800CDC20
    if (ctx->r2 == 0) {
        // 0x800CDBFC: sw          $zero, 0x98($sp)
        MEM_W(0X98, ctx->r29) = 0;
            goto L_800CDC20;
    }
    goto skip_0;
    // 0x800CDBFC: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    skip_0:
    // 0x800CDC00: jal         0x800CB854
    // 0x800CDC04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_1;
    // 0x800CDC04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800CDC08: addiu       $t6, $v0, 0x1F
    ctx->r14 = ADD32(ctx->r2, 0X1F);
    // 0x800CDC0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800CDC10: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x800CDC14: b           L_800CDC20
    // 0x800CDC18: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
        goto L_800CDC20;
    // 0x800CDC18: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x800CDC1C: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
L_800CDC20:
    // 0x800CDC20: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x800CDC24: jal         0x800EE7F8
    // 0x800CDC28: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800CDC28: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    after_2:
    // 0x800CDC2C: slti        $at, $s7, 0x2
    ctx->r1 = SIGNED(ctx->r23) < 0X2 ? 1 : 0;
    // 0x800CDC30: bne         $at, $zero, L_800CDC5C
    if (ctx->r1 != 0) {
        // 0x800CDC34: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_800CDC5C;
    }
    // 0x800CDC34: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x800CDC38: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x800CDC3C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_800CDC40:
    // 0x800CDC40: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x800CDC44: jal         0x800EF04C
    // 0x800CDC48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x800CDC48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800CDC4C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800CDC50: bne         $s4, $s7, L_800CDC40
    if (ctx->r20 != ctx->r23) {
        // 0x800CDC54: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_800CDC40;
    }
    // 0x800CDC54: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800CDC58: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_800CDC5C:
    // 0x800CDC5C: mtc1        $s7, $f6
    ctx->f6.u32l = ctx->r23;
    // 0x800CDC60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CDC64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CDC68: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CDC6C: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x800CDC70: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800CDC74: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800CDC78: jal         0x800EF334
    // 0x800CDC7C: nop

    func_800EF334(rdram, ctx);
        goto after_4;
    // 0x800CDC7C: nop

    after_4:
    // 0x800CDC80: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x800CDC84: jal         0x800EEAD4
    // 0x800CDC88: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    func_800EEAD4(rdram, ctx);
        goto after_5;
    // 0x800CDC88: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    after_5:
    // 0x800CDC8C: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x800CDC90: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x800CDC94: slti        $at, $s7, 0x2
    ctx->r1 = SIGNED(ctx->r23) < 0X2 ? 1 : 0;
    // 0x800CDC98: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800CDC9C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800CDCA0: bne         $at, $zero, L_800CDCE4
    if (ctx->r1 != 0) {
        // 0x800CDCA4: add.s       $f22, $f0, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f16.fl;
            goto L_800CDCE4;
    }
    // 0x800CDCA4: add.s       $f22, $f0, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x800CDCA8: addiu       $s0, $t9, 0x4
    ctx->r16 = ADD32(ctx->r25, 0X4);
L_800CDCAC:
    // 0x800CDCAC: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x800CDCB0: jal         0x800EEAD4
    // 0x800CDCB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_6;
    // 0x800CDCB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800CDCB8: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800CDCBC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800CDCC0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800CDCC4: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800CDCC8: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x800CDCCC: nop

    // 0x800CDCD0: bc1f        L_800CDCDC
    if (!c1cs) {
        // 0x800CDCD4: nop
    
            goto L_800CDCDC;
    }
    // 0x800CDCD4: nop

    // 0x800CDCD8: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_800CDCDC:
    // 0x800CDCDC: bne         $s4, $s7, L_800CDCAC
    if (ctx->r20 != ctx->r23) {
        // 0x800CDCE0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800CDCAC;
    }
    // 0x800CDCE0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800CDCE4:
    // 0x800CDCE4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CDCE8: lwc1        $f6, 0x59A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X59A4);
    // 0x800CDCEC: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x800CDCF0: mul.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x800CDCF4: jal         0x800BE444
    // 0x800CDCF8: nop

    func_800BE444(rdram, ctx);
        goto after_7;
    // 0x800CDCF8: nop

    after_7:
    // 0x800CDCFC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800CDD00: addiu       $s6, $sp, 0x70
    ctx->r22 = ADD32(ctx->r29, 0X70);
    // 0x800CDD04: addiu       $s5, $sp, 0xA0
    ctx->r21 = ADD32(ctx->r29, 0XA0);
    // 0x800CDD08: beq         $t0, $zero, L_800CDF6C
    if (ctx->r8 == 0) {
        // 0x800CDD0C: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_800CDF6C;
    }
    // 0x800CDD0C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800CDD10: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
L_800CDD14:
    // 0x800CDD14: jal         0x800E9E88
    // 0x800CDD18: nop

    func_800E9E88(rdram, ctx);
        goto after_8;
    // 0x800CDD18: nop

    after_8:
    // 0x800CDD1C: lw          $t1, 0xC0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC0);
    // 0x800CDD20: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x800CDD24: jal         0x800E9EB4
    // 0x800CDD28: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_9;
    // 0x800CDD28: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_9:
    // 0x800CDD2C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x800CDD30: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x800CDD34: sltu        $at, $t2, $v0
    ctx->r1 = ctx->r10 < ctx->r2 ? 1 : 0;
    // 0x800CDD38: beql        $at, $zero, L_800CDF58
    if (ctx->r1 == 0) {
        // 0x800CDD3C: lw          $v0, 0xC0($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC0);
            goto L_800CDF58;
    }
    goto skip_1;
    // 0x800CDD3C: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    skip_1:
L_800CDD40:
    // 0x800CDD40: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x800CDD44: lw          $v0, 0x8($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X8);
    // 0x800CDD48: sll         $t5, $v0, 27
    ctx->r13 = S32(ctx->r2 << 27);
    // 0x800CDD4C: bgez        $t5, L_800CDF3C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800CDD50: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_800CDF3C;
    }
    // 0x800CDD50: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x800CDD54: beql        $t7, $zero, L_800CDF40
    if (ctx->r15 == 0) {
        // 0x800CDD58: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_2;
    // 0x800CDD58: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_2:
    // 0x800CDD5C: lw          $s3, 0x0($t3)
    ctx->r19 = MEM_W(ctx->r11, 0X0);
    // 0x800CDD60: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x800CDD64: lw          $t8, 0x28($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X28);
    // 0x800CDD68: sll         $t0, $t8, 22
    ctx->r8 = S32(ctx->r24 << 22);
    // 0x800CDD6C: bgezl       $t0, L_800CDF40
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800CDD70: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_3;
    // 0x800CDD70: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_3:
    // 0x800CDD74: beql        $t1, $s3, L_800CDF40
    if (ctx->r9 == ctx->r19) {
        // 0x800CDD78: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_4;
    // 0x800CDD78: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_4:
    // 0x800CDD7C: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x800CDD80: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800CDD84: beql        $v0, $zero, L_800CDF40
    if (ctx->r2 == 0) {
        // 0x800CDD88: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_5;
    // 0x800CDD88: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_5:
    // 0x800CDD8C: beql        $v0, $at, L_800CDF40
    if (ctx->r2 == ctx->r1) {
        // 0x800CDD90: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_6;
    // 0x800CDD90: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_6:
    // 0x800CDD94: lhu         $t2, 0x18($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X18);
    // 0x800CDD98: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800CDD9C: beql        $t3, $zero, L_800CDF40
    if (ctx->r11 == 0) {
        // 0x800CDDA0: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_7;
    // 0x800CDDA0: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_7:
    // 0x800CDDA4: jal         0x80106790
    // 0x800CDDA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80106790(rdram, ctx);
        goto after_10;
    // 0x800CDDA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x800CDDAC: lw          $t4, 0x64($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X64);
    // 0x800CDDB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CDDB4: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800CDDB8: sll         $t7, $t4, 14
    ctx->r15 = S32(ctx->r12 << 14);
    // 0x800CDDBC: bltzl       $t7, L_800CDF40
    if (SIGNED(ctx->r15) < 0) {
        // 0x800CDDC0: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_8;
    // 0x800CDDC0: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_8:
    // 0x800CDDC4: lhu         $t6, 0x66($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X66);
    // 0x800CDDC8: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x800CDDCC: bnel        $t9, $zero, L_800CDF40
    if (ctx->r25 != 0) {
        // 0x800CDDD0: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_9;
    // 0x800CDDD0: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_9:
    // 0x800CDDD4: jal         0x8008A018
    // 0x800CDDD8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    _subaddiecustomhits_entrypoint_5(rdram, ctx);
        goto after_11;
    // 0x800CDDD8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_11:
    // 0x800CDDDC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800CDDE0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800CDDE4: jal         0x800EEB40
    // 0x800CDDE8: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    func_800EEB40(rdram, ctx);
        goto after_12;
    // 0x800CDDE8: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    after_12:
    // 0x800CDDEC: add.s       $f2, $f20, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x800CDDF0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800CDDF4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800CDDF8: nop

    // 0x800CDDFC: bc1tl       L_800CDF40
    if (c1cs) {
        // 0x800CDE00: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_10;
    // 0x800CDE00: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_10:
    // 0x800CDE04: jal         0x800EC3C4
    // 0x800CDE08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EC3C4(rdram, ctx);
        goto after_13;
    // 0x800CDE08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_13:
    // 0x800CDE0C: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x800CDE10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CDE14: beql        $t0, $zero, L_800CDE30
    if (ctx->r8 == 0) {
        // 0x800CDE18: lw          $v0, 0xC($s3)
        ctx->r2 = MEM_W(ctx->r19, 0XC);
            goto L_800CDE30;
    }
    goto skip_11;
    // 0x800CDE18: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    skip_11:
    // 0x800CDE1C: jalr        $t0
    // 0x800CDE20: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_14;
    // 0x800CDE20: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_14:
    // 0x800CDE24: beql        $v0, $zero, L_800CDF40
    if (ctx->r2 == 0) {
        // 0x800CDE28: lw          $t4, 0x88($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X88);
            goto L_800CDF40;
    }
    goto skip_12;
    // 0x800CDE28: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    skip_12:
    // 0x800CDE2C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
L_800CDE30:
    // 0x800CDE30: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800CDE34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800CDE38: beq         $v0, $zero, L_800CDE50
    if (ctx->r2 == 0) {
        // 0x800CDE3C: nop
    
            goto L_800CDE50;
    }
    // 0x800CDE3C: nop

    // 0x800CDE40: jalr        $v0
    // 0x800CDE44: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_15;
    // 0x800CDE44: nop

    after_15:
    // 0x800CDE48: b           L_800CDE50
    // 0x800CDE4C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_800CDE50;
    // 0x800CDE4C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800CDE50:
    // 0x800CDE50: blez        $s7, L_800CDF3C
    if (SIGNED(ctx->r23) <= 0) {
        // 0x800CDE54: lw          $s1, 0xCC($sp)
        ctx->r17 = MEM_W(ctx->r29, 0XCC);
            goto L_800CDF3C;
    }
    // 0x800CDE54: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x800CDE58: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
L_800CDE5C:
    // 0x800CDE5C: beq         $s2, $zero, L_800CDED4
    if (ctx->r18 == 0) {
        // 0x800CDE60: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800CDED4;
    }
    // 0x800CDE60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CDE64: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x800CDE68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CDE6C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x800CDE70: beq         $v0, $zero, L_800CDED4
    if (ctx->r2 == 0) {
        // 0x800CDE74: nop
    
            goto L_800CDED4;
    }
    // 0x800CDE74: nop

    // 0x800CDE78: lw          $t1, 0x18($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X18);
    // 0x800CDE7C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x800CDE80: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800CDE84: sll         $t2, $t1, 27
    ctx->r10 = S32(ctx->r9 << 27);
    // 0x800CDE88: srl         $t3, $t2, 28
    ctx->r11 = S32(U32(ctx->r10) >> 28);
    // 0x800CDE8C: jalr        $v0
    // 0x800CDE90: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_16;
    // 0x800CDE90: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_16:
    // 0x800CDE94: beq         $v0, $zero, L_800CDF2C
    if (ctx->r2 == 0) {
        // 0x800CDE98: sll         $t5, $v0, 1
        ctx->r13 = S32(ctx->r2 << 1);
            goto L_800CDF2C;
    }
    // 0x800CDE98: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x800CDE9C: lbu         $t6, 0x19($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X19);
    // 0x800CDEA0: andi        $t7, $t5, 0x1E
    ctx->r15 = ctx->r13 & 0X1E;
    // 0x800CDEA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CDEA8: andi        $t8, $t6, 0xFFE1
    ctx->r24 = ctx->r14 & 0XFFE1;
    // 0x800CDEAC: or          $t0, $t7, $t8
    ctx->r8 = ctx->r15 | ctx->r24;
    // 0x800CDEB0: sb          $t0, 0x19($s3)
    MEM_B(0X19, ctx->r19) = ctx->r8;
    // 0x800CDEB4: addu        $at, $at, $fp
    ctx->r1 = ADD32(ctx->r1, ctx->r30);
    // 0x800CDEB8: sb          $s4, -0x5010($at)
    MEM_B(-0X5010, ctx->r1) = ctx->r20;
    // 0x800CDEBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800CDEC0: sll         $t9, $fp, 2
    ctx->r25 = S32(ctx->r30 << 2);
    // 0x800CDEC4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CDEC8: sw          $s3, -0x5090($at)
    MEM_W(-0X5090, ctx->r1) = ctx->r19;
    // 0x800CDECC: b           L_800CDF3C
    // 0x800CDED0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
        goto L_800CDF3C;
    // 0x800CDED0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_800CDED4:
    // 0x800CDED4: jal         0x800EC75C
    // 0x800CDED8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EC75C(rdram, ctx);
        goto after_17;
    // 0x800CDED8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_17:
    // 0x800CDEDC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800CDEE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CDEE4: jal         0x800EEB40
    // 0x800CDEE8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EEB40(rdram, ctx);
        goto after_18;
    // 0x800CDEE8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_18:
    // 0x800CDEEC: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800CDEF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CDEF4: addiu       $v0, $v0, -0x5090
    ctx->r2 = ADD32(ctx->r2, -0X5090);
    // 0x800CDEF8: add.s       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x800CDEFC: sll         $t2, $fp, 2
    ctx->r10 = S32(ctx->r30 << 2);
    // 0x800CDF00: addu        $t1, $v0, $fp
    ctx->r9 = ADD32(ctx->r2, ctx->r30);
    // 0x800CDF04: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x800CDF08: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800CDF0C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800CDF10: nop

    // 0x800CDF14: bc1fl       L_800CDF30
    if (!c1cs) {
        // 0x800CDF18: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_800CDF30;
    }
    goto skip_13;
    // 0x800CDF18: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_13:
    // 0x800CDF1C: sb          $s4, 0x80($t1)
    MEM_B(0X80, ctx->r9) = ctx->r20;
    // 0x800CDF20: sw          $s3, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r19;
    // 0x800CDF24: b           L_800CDF3C
    // 0x800CDF28: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
        goto L_800CDF3C;
    // 0x800CDF28: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_800CDF2C:
    // 0x800CDF2C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_800CDF30:
    // 0x800CDF30: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800CDF34: bne         $s4, $s7, L_800CDE5C
    if (ctx->r20 != ctx->r23) {
        // 0x800CDF38: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800CDE5C;
    }
    // 0x800CDF38: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800CDF3C:
    // 0x800CDF3C: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
L_800CDF40:
    // 0x800CDF40: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x800CDF44: addiu       $t5, $t4, 0xC
    ctx->r13 = ADD32(ctx->r12, 0XC);
    // 0x800CDF48: sltu        $at, $t5, $t6
    ctx->r1 = ctx->r13 < ctx->r14 ? 1 : 0;
    // 0x800CDF4C: bne         $at, $zero, L_800CDD40
    if (ctx->r1 != 0) {
        // 0x800CDF50: sw          $t5, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r13;
            goto L_800CDD40;
    }
    // 0x800CDF50: sw          $t5, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r13;
    // 0x800CDF54: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
L_800CDF58:
    // 0x800CDF58: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800CDF5C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800CDF60: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    // 0x800CDF64: bne         $a0, $zero, L_800CDD14
    if (ctx->r4 != 0) {
        // 0x800CDF68: nop
    
            goto L_800CDD14;
    }
    // 0x800CDF68: nop

L_800CDF6C:
    // 0x800CDF6C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x800CDF70: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x800CDF74: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800CDF78: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800CDF7C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x800CDF80: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800CDF84: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800CDF88: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800CDF8C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800CDF90: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800CDF94: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800CDF98: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800CDF9C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x800CDFA0: jr          $ra
    // 0x800CDFA4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x800CDFA4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_800CDFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CDFA8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800CDFAC: addiu       $v1, $v1, -0x5090
    ctx->r3 = ADD32(ctx->r3, -0X5090);
    // 0x800CDFB0: addu        $t6, $v1, $a0
    ctx->r14 = ADD32(ctx->r3, ctx->r4);
    // 0x800CDFB4: lbu         $t7, 0x80($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X80);
    // 0x800CDFB8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800CDFBC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x800CDFC0: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800CDFC4: jr          $ra
    // 0x800CDFC8: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    return;
    // 0x800CDFC8: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
;}
RECOMP_FUNC void func_800CDFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CDFD0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800CDFD4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800CDFD8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800CDFDC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800CDFE0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800CDFE4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800CDFE8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800CDFEC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800CDFF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800CDFF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800CDFF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800CDFFC: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x800CE000: srl         $t6, $a0, 22
    ctx->r14 = S32(U32(ctx->r4) >> 22);
    // 0x800CE004: jal         0x800CE21C
    // 0x800CE008: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800CE21C(rdram, ctx);
        goto after_0;
    // 0x800CE008: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800CE00C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CE010: beq         $v0, $at, L_800CE17C
    if (ctx->r2 == ctx->r1) {
        // 0x800CE014: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_800CE17C;
    }
    // 0x800CE014: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800CE018: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CE01C: addiu       $a0, $a0, -0x4FE0
    ctx->r4 = ADD32(ctx->r4, -0X4FE0);
    // 0x800CE020: jal         0x800DAB54
    // 0x800CE024: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800DAB54(rdram, ctx);
        goto after_1;
    // 0x800CE024: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800CE028: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CE02C: bne         $v0, $at, L_800CE17C
    if (ctx->r2 != ctx->r1) {
        // 0x800CE030: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800CE17C;
    }
    // 0x800CE030: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CE034: jal         0x800EC370
    // 0x800CE038: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800EC370(rdram, ctx);
        goto after_2;
    // 0x800CE038: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x800CE03C: lh          $t7, 0x4C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4C);
    // 0x800CE040: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x800CE044: lh          $t9, 0x50($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X50);
    // 0x800CE048: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
    // 0x800CE04C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800CE050: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x800CE054: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x800CE058: jal         0x800BDD24
    // 0x800CE05C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    func_800BDD24(rdram, ctx);
        goto after_3;
    // 0x800CE05C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    after_3:
    // 0x800CE060: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800CE064: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800CE068: addiu       $s7, $zero, 0x14
    ctx->r23 = ADD32(0, 0X14);
    // 0x800CE06C: beq         $t0, $zero, L_800CE17C
    if (ctx->r8 == 0) {
        // 0x800CE070: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_800CE17C;
    }
    // 0x800CE070: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800CE074: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
L_800CE078:
    // 0x800CE078: jal         0x800E9D68
    // 0x800CE07C: nop

    func_800E9D68(rdram, ctx);
        goto after_4;
    // 0x800CE07C: nop

    after_4:
    // 0x800CE080: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CE084: jal         0x800E9DD4
    // 0x800CE088: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    func_800E9DD4(rdram, ctx);
        goto after_5;
    // 0x800CE088: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    after_5:
    // 0x800CE08C: multu       $v0, $s7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800CE090: mflo        $t1
    ctx->r9 = lo;
    // 0x800CE094: addu        $s3, $t1, $s0
    ctx->r19 = ADD32(ctx->r9, ctx->r16);
    // 0x800CE098: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800CE09C: beql        $at, $zero, L_800CE170
    if (ctx->r1 == 0) {
        // 0x800CE0A0: lw          $a0, 0x4($s6)
        ctx->r4 = MEM_W(ctx->r22, 0X4);
            goto L_800CE170;
    }
    goto skip_0;
    // 0x800CE0A0: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
    skip_0:
L_800CE0A4:
    // 0x800CE0A4: jal         0x80088BA8
    // 0x800CE0A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gspropctrl_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x800CE0A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800CE0AC: bne         $v0, $s5, L_800CE15C
    if (ctx->r2 != ctx->r21) {
        // 0x800CE0B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CE15C;
    }
    // 0x800CE0B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CE0B4: jal         0x80088BB0
    // 0x800CE0B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _gspropctrl_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x800CE0B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x800CE0BC: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x800CE0C0: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x800CE0C4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800CE0C8: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x800CE0CC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800CE0D0: beq         $at, $zero, L_800CE15C
    if (ctx->r1 == 0) {
        // 0x800CE0D4: addu        $t4, $v1, $v0
        ctx->r12 = ADD32(ctx->r3, ctx->r2);
            goto L_800CE15C;
    }
    // 0x800CE0D4: addu        $t4, $v1, $v0
    ctx->r12 = ADD32(ctx->r3, ctx->r2);
    // 0x800CE0D8: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800CE0DC: beql        $at, $zero, L_800CE160
    if (ctx->r1 == 0) {
        // 0x800CE0E0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800CE160;
    }
    goto skip_1;
    // 0x800CE0E0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_1:
    // 0x800CE0E4: lb          $t6, 0x13($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X13);
    // 0x800CE0E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800CE0EC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE0F0: bgez        $t6, L_800CE118
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800CE0F4: lw          $t8, 0x68($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X68);
            goto L_800CE118;
    }
    // 0x800CE0F4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x800CE0F8: jal         0x800CE1A8
    // 0x800CE0FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800CE1A8(rdram, ctx);
        goto after_8;
    // 0x800CE0FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x800CE100: beq         $v0, $zero, L_800CE15C
    if (ctx->r2 == 0) {
        // 0x800CE104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CE15C;
    }
    // 0x800CE104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CE108: jal         0x800D5318
    // 0x800CE10C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800D5318(rdram, ctx);
        goto after_9;
    // 0x800CE10C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x800CE110: b           L_800CE160
    // 0x800CE114: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
        goto L_800CE160;
    // 0x800CE114: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800CE118:
    // 0x800CE118: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x800CE11C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800CE120: beq         $at, $zero, L_800CE15C
    if (ctx->r1 == 0) {
        // 0x800CE124: addu        $t9, $v1, $v0
        ctx->r25 = ADD32(ctx->r3, ctx->r2);
            goto L_800CE15C;
    }
    // 0x800CE124: addu        $t9, $v1, $v0
    ctx->r25 = ADD32(ctx->r3, ctx->r2);
    // 0x800CE128: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800CE12C: beq         $at, $zero, L_800CE15C
    if (ctx->r1 == 0) {
        // 0x800CE130: lw          $v1, 0x64($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X64);
            goto L_800CE15C;
    }
    // 0x800CE130: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x800CE134: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800CE138: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x800CE13C: addu        $t2, $v1, $v0
    ctx->r10 = ADD32(ctx->r3, ctx->r2);
    // 0x800CE140: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800CE144: beq         $at, $zero, L_800CE15C
    if (ctx->r1 == 0) {
        // 0x800CE148: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_800CE15C;
    }
    // 0x800CE148: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800CE14C: beq         $at, $zero, L_800CE15C
    if (ctx->r1 == 0) {
        // 0x800CE150: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CE15C;
    }
    // 0x800CE150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CE154: jal         0x800D5318
    // 0x800CE158: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800D5318(rdram, ctx);
        goto after_10;
    // 0x800CE158: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
L_800CE15C:
    // 0x800CE15C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800CE160:
    // 0x800CE160: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800CE164: bne         $at, $zero, L_800CE0A4
    if (ctx->r1 != 0) {
        // 0x800CE168: nop
    
            goto L_800CE0A4;
    }
    // 0x800CE168: nop

    // 0x800CE16C: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
L_800CE170:
    // 0x800CE170: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x800CE174: bne         $a0, $zero, L_800CE078
    if (ctx->r4 != 0) {
        // 0x800CE178: nop
    
            goto L_800CE078;
    }
    // 0x800CE178: nop

L_800CE17C:
    // 0x800CE17C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800CE180: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800CE184: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800CE188: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE18C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800CE190: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800CE194: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800CE198: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE19C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800CE1A0: jr          $ra
    // 0x800CE1A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800CE1A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800CE1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE1A8: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800CE1AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CE1B0: lwc1        $f8, 0x59B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X59B0);
    // 0x800CE1B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CE1B8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800CE1BC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x800CE1C0: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x800CE1C4: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x800CE1C8: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x800CE1CC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800CE1D0: subu        $a3, $t1, $t2
    ctx->r7 = SUB32(ctx->r9, ctx->r10);
    // 0x800CE1D4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800CE1D8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x800CE1DC: nop

    // 0x800CE1E0: addu        $v1, $t9, $v0
    ctx->r3 = ADD32(ctx->r25, ctx->r2);
    // 0x800CE1E4: addu        $t0, $v1, $a3
    ctx->r8 = ADD32(ctx->r3, ctx->r7);
    // 0x800CE1E8: bltz        $t0, L_800CE1FC
    if (SIGNED(ctx->r8) < 0) {
        // 0x800CE1EC: sll         $a1, $v0, 1
        ctx->r5 = S32(ctx->r2 << 1);
            goto L_800CE1FC;
    }
    // 0x800CE1EC: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x800CE1F0: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800CE1F4: beq         $at, $zero, L_800CE204
    if (ctx->r1 == 0) {
            // 0x800CE1F8: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
    func_800CE204(rdram, ctx);
    return;
    }
    // 0x800CE1F8: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
L_800CE1FC:
    // 0x800CE1FC: jr          $ra
    // 0x800CE200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CE200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CE204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE204: slt         $v0, $zero, $a0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800CE208: beq         $v0, $zero, L_800CE214
    if (ctx->r2 == 0) {
        // 0x800CE20C: nop
    
            goto L_800CE214;
    }
    // 0x800CE20C: nop

    // 0x800CE210: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
L_800CE214:
    // 0x800CE214: jr          $ra
    // 0x800CE218: nop

    return;
    // 0x800CE218: nop

;}
RECOMP_FUNC void func_800CE21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE21C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800CE220: lhu         $t6, -0x55F0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X55F0);
    // 0x800CE224: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CE228: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CE22C: bne         $a0, $t6, L_800CE23C
    if (ctx->r4 != ctx->r14) {
            // 0x800CE230: nop

    func_800CE23C(rdram, ctx);
    return;
    }
    // 0x800CE230: nop

    // 0x800CE234: jr          $ra
    // 0x800CE238: lhu         $v0, -0x55EE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55EE);
    return;
    // 0x800CE238: lhu         $v0, -0x55EE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55EE);
;}
RECOMP_FUNC void func_800CE23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE23C: lhu         $t7, -0x55EC($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X55EC);
    // 0x800CE240: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800CE244: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CE248: bne         $a0, $t7, L_800CE258
    if (ctx->r4 != ctx->r15) {
            // 0x800CE24C: nop

    func_800CE258(rdram, ctx);
    return;
    }
    // 0x800CE24C: nop

    // 0x800CE250: jr          $ra
    // 0x800CE254: lhu         $v0, -0x55EA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55EA);
    return;
    // 0x800CE254: lhu         $v0, -0x55EA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55EA);
;}
RECOMP_FUNC void func_800CE258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE258: lhu         $t8, -0x55E8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X55E8);
    // 0x800CE25C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800CE260: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800CE264: bne         $a0, $t8, L_800CE278
    if (ctx->r4 != ctx->r24) {
            // 0x800CE268: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    func_800CE278(rdram, ctx);
    return;
    }
    // 0x800CE268: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800CE26C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CE270: jr          $ra
    // 0x800CE274: lhu         $v0, -0x55E6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55E6);
    return;
    // 0x800CE274: lhu         $v0, -0x55E6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55E6);
;}
RECOMP_FUNC void func_800CE278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE278: addiu       $t0, $t0, -0x55F0
    ctx->r8 = ADD32(ctx->r8, -0X55F0);
    // 0x800CE27C: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x800CE280: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x800CE284: bnel        $a0, $t1, L_800CE298
    if (ctx->r4 != ctx->r9) {
            // 0x800CE288: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    static_3_800CE298(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE288: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    skip_0:
    // 0x800CE28C: jr          $ra
    // 0x800CE290: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    return;
    // 0x800CE290: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
;}
RECOMP_FUNC void func_800CE294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE294: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    // 0x800CE298: bnel        $a0, $t2, L_800CE2AC
    if (ctx->r4 != ctx->r10) {
            // 0x800CE29C: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    static_3_800CE2AC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE29C: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    skip_0:
    // 0x800CE2A0: jr          $ra
    // 0x800CE2A4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    return;
    // 0x800CE2A4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
;}
RECOMP_FUNC void func_800CE2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2A8: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    // 0x800CE2AC: bnel        $a0, $t3, L_800CE2C0
    if (ctx->r4 != ctx->r11) {
            // 0x800CE2B0: lhu         $t4, 0xC($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC);
    static_3_800CE2C0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE2B0: lhu         $t4, 0xC($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC);
    skip_0:
    // 0x800CE2B4: jr          $ra
    // 0x800CE2B8: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    return;
    // 0x800CE2B8: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
;}
RECOMP_FUNC void func_800CE2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2BC: lhu         $t4, 0xC($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC);
    // 0x800CE2C0: bnel        $a0, $t4, L_800CE2D4
    if (ctx->r4 != ctx->r12) {
            // 0x800CE2C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    static_3_800CE2D4(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE2C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800CE2C8: jr          $ra
    // 0x800CE2CC: lhu         $v0, 0xE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XE);
    return;
    // 0x800CE2CC: lhu         $v0, 0xE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XE);
;}
RECOMP_FUNC void func_800CE2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CE2D4: jr          $ra
    // 0x800CE2D8: nop

    return;
    // 0x800CE2D8: nop

;}
RECOMP_FUNC void func_800CE2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE2E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE2E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800CE2E8: addiu       $a0, $a0, -0x4FE0
    ctx->r4 = ADD32(ctx->r4, -0X4FE0);
    // 0x800CE2EC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x800CE2F0: jal         0x800DAA8C
    // 0x800CE2F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800DAA8C(rdram, ctx);
        goto after_0;
    // 0x800CE2F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x800CE2F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE300: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE308: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CE30C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800CE310: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800CE314: addiu       $s2, $s2, -0x4FE0
    ctx->r18 = ADD32(ctx->r18, -0X4FE0);
    // 0x800CE318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CE31C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800CE320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CE324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CE328: jal         0x800DAB8C
    // 0x800CE32C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800DAB8C(rdram, ctx);
        goto after_0;
    // 0x800CE32C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800CE330: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800CE334: jal         0x800BE52C
    // 0x800CE338: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800BE52C(rdram, ctx);
        goto after_1;
    // 0x800CE338: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800CE33C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800CE340: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800CE344: sltu        $at, $s1, $t6
    ctx->r1 = ctx->r17 < ctx->r14 ? 1 : 0;
    // 0x800CE348: beq         $at, $zero, L_800CE3C8
    if (ctx->r1 == 0) {
        // 0x800CE34C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800CE3C8;
    }
    // 0x800CE34C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800CE350:
    // 0x800CE350: jal         0x800E9DD4
    // 0x800CE354: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_800E9DD4(rdram, ctx);
        goto after_2;
    // 0x800CE354: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_2:
    // 0x800CE358: beql        $v0, $zero, L_800CE3B4
    if (ctx->r2 == 0) {
        // 0x800CE35C: lw          $s1, 0x34($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X34);
            goto L_800CE3B4;
    }
    goto skip_0;
    // 0x800CE35C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x800CE360: jal         0x800E9D68
    // 0x800CE364: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800E9D68(rdram, ctx);
        goto after_3;
    // 0x800CE364: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x800CE368: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800CE36C: jal         0x800E9D90
    // 0x800CE370: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_800E9D90(rdram, ctx);
        goto after_4;
    // 0x800CE370: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_4:
    // 0x800CE374: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800CE378: beq         $at, $zero, L_800CE3B0
    if (ctx->r1 == 0) {
        // 0x800CE37C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800CE3B0;
    }
    // 0x800CE37C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800CE380: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
L_800CE384:
    // 0x800CE384: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800CE388: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CE38C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800CE390: bnel        $t8, $zero, L_800CE3A4
    if (ctx->r24 != 0) {
        // 0x800CE394: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800CE3A4;
    }
    goto skip_1;
    // 0x800CE394: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_1:
    // 0x800CE398: jal         0x800DAAF8
    // 0x800CE39C: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    func_800DAAF8(rdram, ctx);
        goto after_5;
    // 0x800CE39C: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    after_5:
    // 0x800CE3A0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800CE3A4:
    // 0x800CE3A4: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800CE3A8: bnel        $at, $zero, L_800CE384
    if (ctx->r1 != 0) {
        // 0x800CE3AC: lw          $t7, 0x4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X4);
            goto L_800CE384;
    }
    goto skip_2;
    // 0x800CE3AC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    skip_2:
L_800CE3B0:
    // 0x800CE3B0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
L_800CE3B4:
    // 0x800CE3B4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800CE3B8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800CE3BC: sltu        $at, $s1, $t9
    ctx->r1 = ctx->r17 < ctx->r25 ? 1 : 0;
    // 0x800CE3C0: bnel        $at, $zero, L_800CE350
    if (ctx->r1 != 0) {
        // 0x800CE3C4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800CE350;
    }
    goto skip_3;
    // 0x800CE3C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_3:
L_800CE3C8:
    // 0x800CE3C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CE3CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CE3D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE3D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800CE3D8: jr          $ra
    // 0x800CE3DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CE3DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CE3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE3E0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800CE3E4: addiu       $t7, $t7, -0x4FD0
    ctx->r15 = ADD32(ctx->r15, -0X4FD0);
    // 0x800CE3E8: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800CE3EC: jr          $ra
    // 0x800CE3F0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    return;
    // 0x800CE3F0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
;}
RECOMP_FUNC void func_800CE3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE3F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE3F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CE3FC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800CE400: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800CE404: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800CE408: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800CE40C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800CE410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE414: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800CE418: lh          $a0, -0x55D0($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X55D0);
    // 0x800CE41C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CE420: jal         0x800D2498
    // 0x800CE424: lh          $a1, 0xA($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XA);
    func_800D2498(rdram, ctx);
        goto after_0;
    // 0x800CE424: lh          $a1, 0xA($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XA);
    after_0:
    // 0x800CE428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE430: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CE43C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CE440: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CE444: lh          $t7, 0x10($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X10);
    // 0x800CE448: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x800CE44C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800CE450: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800CE454: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x800CE458: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800CE45C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CE460: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x800CE464: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CE468: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800CE46C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CE470: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800CE474: jal         0x800F10B4
    // 0x800CE478: nop

    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x800CE478: nop

    after_0:
    // 0x800CE47C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CE480: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x800CE484: jal         0x800CE3F4
    // 0x800CE488: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800CE3F4(rdram, ctx);
        goto after_1;
    // 0x800CE488: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800CE48C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CE494: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE49C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CE4A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CE4A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800CE4A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800CE4AC: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x800CE4B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CE4B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800CE4B8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800CE4BC: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x800CE4C0: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800CE4C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CE4C8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800CE4CC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800CE4D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800CE4D4: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x800CE4D8: jal         0x800F10B4
    // 0x800CE4DC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x800CE4DC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x800CE4E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800CE4E4: lwc1        $f10, 0x59C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X59C0);
    // 0x800CE4E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CE4EC: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800CE4F0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800CE4F4: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800CE4F8: nop

    // 0x800CE4FC: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
    // 0x800CE500: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800CE504: beql        $t9, $zero, L_800CE518
    if (ctx->r25 == 0) {
        // 0x800CE508: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800CE518;
    }
    goto skip_0;
    // 0x800CE508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800CE50C: jal         0x800CE3F4
    // 0x800CE510: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800CE3F4(rdram, ctx);
        goto after_1;
    // 0x800CE510: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800CE514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800CE518:
    // 0x800CE518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CE51C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CE528: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800CE52C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800CE530: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800CE534: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800CE538: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CE53C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800CE540: addiu       $s1, $zero, 0x9
    ctx->r17 = ADD32(0, 0X9);
L_800CE544:
    // 0x800CE544: jal         0x800CE3E0
    // 0x800CE548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800CE54C: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x800CE550: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x800CE554: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800CE558: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
    // 0x800CE55C: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x800CE560: sb          $zero, 0x16($v0)
    MEM_B(0X16, ctx->r2) = 0;
    // 0x800CE564: sb          $zero, 0x15($v0)
    MEM_B(0X15, ctx->r2) = 0;
    // 0x800CE568: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
    // 0x800CE56C: sb          $zero, 0x12($v0)
    MEM_B(0X12, ctx->r2) = 0;
    // 0x800CE570: sb          $zero, 0x13($v0)
    MEM_B(0X13, ctx->r2) = 0;
    // 0x800CE574: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x800CE578: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x800CE57C: bne         $s0, $s1, L_800CE544
    if (ctx->r16 != ctx->r17) {
        // 0x800CE580: sh          $t6, 0xA($v0)
        MEM_H(0XA, ctx->r2) = ctx->r14;
            goto L_800CE544;
    }
    // 0x800CE580: sh          $t6, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r14;
    // 0x800CE584: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CE588: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800CE58C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE590: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800CE594: jr          $ra
    // 0x800CE598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CE598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CE59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE59C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800CE5A0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800CE5A4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800CE5A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800CE5AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800CE5B0: beq         $a1, $zero, L_800CE5CC
    if (ctx->r5 == 0) {
            // 0x800CE5B4: lhu         $v0, -0x55CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55CC);
    func_800CE5CC(rdram, ctx);
    return;
    }
    // 0x800CE5B4: lhu         $v0, -0x55CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55CC);
    // 0x800CE5B8: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x800CE5BC: beq         $t7, $zero, L_800CE5CC
    if (ctx->r15 == 0) {
            // 0x800CE5C0: nop

    func_800CE5CC(rdram, ctx);
    return;
    }
    // 0x800CE5C0: nop

    // 0x800CE5C4: jr          $ra
    // 0x800CE5C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CE5C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CE5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE5CC: beq         $a2, $zero, L_800CE5E4
    if (ctx->r6 == 0) {
            // 0x800CE5D0: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    func_800CE5E4(rdram, ctx);
    return;
    }
    // 0x800CE5D0: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800CE5D4: beq         $t8, $zero, L_800CE5E4
    if (ctx->r24 == 0) {
            // 0x800CE5D8: nop

    func_800CE5E4(rdram, ctx);
    return;
    }
    // 0x800CE5D8: nop

    // 0x800CE5DC: jr          $ra
    // 0x800CE5E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CE5E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CE5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE5E4: beq         $a3, $zero, L_800CE5FC
    if (ctx->r7 == 0) {
            // 0x800CE5E8: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    func_800CE5FC(rdram, ctx);
    return;
    }
    // 0x800CE5E8: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x800CE5EC: beql        $t9, $zero, L_800CE600
    if (ctx->r25 == 0) {
            // 0x800CE5F0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    static_3_800CE600(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE5F0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    skip_0:
    // 0x800CE5F4: jr          $ra
    // 0x800CE5F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CE5F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CE5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE5FC: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x800CE600: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
    // 0x800CE604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CE608: beq         $t0, $zero, L_800CE620
    if (ctx->r8 == 0) {
            // 0x800CE60C: nop

    func_800CE620(rdram, ctx);
    return;
    }
    // 0x800CE60C: nop

    // 0x800CE610: beq         $t1, $zero, L_800CE620
    if (ctx->r9 == 0) {
            // 0x800CE614: nop

    func_800CE620(rdram, ctx);
    return;
    }
    // 0x800CE614: nop

    // 0x800CE618: jr          $ra
    // 0x800CE61C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CE61C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800CE620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE620: jr          $ra
    // 0x800CE624: nop

    return;
    // 0x800CE624: nop

;}
RECOMP_FUNC void func_800CE628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE628: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800CE62C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800CE630: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800CE634: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800CE638: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800CE63C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800CE640: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800CE644: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800CE648: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800CE64C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800CE650: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800CE654: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800CE658: jal         0x800EA09C
    // 0x800CE65C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    func_800EA09C(rdram, ctx);
        goto after_0;
    // 0x800CE65C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    after_0:
    // 0x800CE660: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CE664: bnel        $v0, $at, L_800CE7A8
    if (ctx->r2 != ctx->r1) {
        // 0x800CE668: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_800CE7A8;
    }
    goto skip_0;
    // 0x800CE668: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x800CE66C: jal         0x800F54E4
    // 0x800CE670: nop

    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x800CE670: nop

    after_1:
    // 0x800CE674: jal         0x800D9004
    // 0x800CE678: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_800D9004(rdram, ctx);
        goto after_2;
    // 0x800CE678: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_2:
    // 0x800CE67C: jal         0x800DB9B0
    // 0x800CE680: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_800DB9B0(rdram, ctx);
        goto after_3;
    // 0x800CE680: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_3:
    // 0x800CE684: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800CE688: jal         0x800F6D24
    // 0x800CE68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6D24(rdram, ctx);
        goto after_4;
    // 0x800CE68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800CE690: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800CE694: jal         0x800F8004
    // 0x800CE698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F8004(rdram, ctx);
        goto after_5;
    // 0x800CE698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800CE69C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x800CE6A0: jal         0x800F68B8
    // 0x800CE6A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F68B8(rdram, ctx);
        goto after_6;
    // 0x800CE6A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800CE6A8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800CE6AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800CE6B0: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x800CE6B4: addiu       $s2, $s2, -0x55D0
    ctx->r18 = ADD32(ctx->r18, -0X55D0);
    // 0x800CE6B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800CE6BC: addiu       $s4, $zero, 0x9
    ctx->r20 = ADD32(0, 0X9);
L_800CE6C0:
    // 0x800CE6C0: jal         0x800CE3E0
    // 0x800CE6C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800CE3E0(rdram, ctx);
        goto after_7;
    // 0x800CE6C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800CE6C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CE6CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CE6D0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800CE6D4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800CE6D8: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x800CE6DC: jal         0x800CE59C
    // 0x800CE6E0: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    func_800CE59C(rdram, ctx);
        goto after_8;
    // 0x800CE6E0: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    after_8:
    // 0x800CE6E4: lb          $t6, 0x12($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X12);
    // 0x800CE6E8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800CE6EC: blezl       $t6, L_800CE77C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800CE6F0: lh          $t0, 0x2($s2)
        ctx->r8 = MEM_H(ctx->r18, 0X2);
            goto L_800CE77C;
    }
    goto skip_1;
    // 0x800CE6F0: lh          $t0, 0x2($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X2);
    skip_1:
    // 0x800CE6F4: lbu         $t7, 0x13($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X13);
    // 0x800CE6F8: bnel        $t7, $zero, L_800CE77C
    if (ctx->r15 != 0) {
        // 0x800CE6FC: lh          $t0, 0x2($s2)
        ctx->r8 = MEM_H(ctx->r18, 0X2);
            goto L_800CE77C;
    }
    goto skip_2;
    // 0x800CE6FC: lh          $t0, 0x2($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X2);
    skip_2:
    // 0x800CE700: lbu         $t8, 0x14($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X14);
    // 0x800CE704: bnel        $t8, $zero, L_800CE77C
    if (ctx->r24 != 0) {
        // 0x800CE708: lh          $t0, 0x2($s2)
        ctx->r8 = MEM_H(ctx->r18, 0X2);
            goto L_800CE77C;
    }
    goto skip_3;
    // 0x800CE708: lh          $t0, 0x2($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X2);
    skip_3:
    // 0x800CE70C: beql        $v0, $zero, L_800CE77C
    if (ctx->r2 == 0) {
        // 0x800CE710: lh          $t0, 0x2($s2)
        ctx->r8 = MEM_H(ctx->r18, 0X2);
            goto L_800CE77C;
    }
    goto skip_4;
    // 0x800CE710: lh          $t0, 0x2($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X2);
    skip_4:
    // 0x800CE714: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800CE718: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x800CE71C: sub.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x800CE720: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x800CE724: sh          $t9, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r25;
    // 0x800CE728: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800CE72C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800CE730: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x800CE734: nop

    // 0x800CE738: bc1fl       L_800CE76C
    if (!c1cs) {
        // 0x800CE73C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800CE76C;
    }
    goto skip_5;
    // 0x800CE73C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x800CE740: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x800CE744: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x800CE748: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800CE74C: beql        $v1, $zero, L_800CE768
    if (ctx->r3 == 0) {
        // 0x800CE750: sb          $zero, 0x12($s0)
        MEM_B(0X12, ctx->r16) = 0;
            goto L_800CE768;
    }
    goto skip_6;
    // 0x800CE750: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    skip_6:
    // 0x800CE754: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x800CE758: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x800CE75C: jalr        $v1
    // 0x800CE760: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_9;
    // 0x800CE760: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    after_9:
    // 0x800CE764: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
L_800CE768:
    // 0x800CE768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800CE76C:
    // 0x800CE76C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CE770: jal         0x800CE49C
    // 0x800CE774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800CE49C(rdram, ctx);
        goto after_10;
    // 0x800CE774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x800CE778: lh          $t0, 0x2($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X2);
L_800CE77C:
    // 0x800CE77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800CE780: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800CE784: beql        $t0, $zero, L_800CE798
    if (ctx->r8 == 0) {
        // 0x800CE788: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800CE798;
    }
    goto skip_7;
    // 0x800CE788: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x800CE78C: jal         0x800CEC94
    // 0x800CE790: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800CEC94(rdram, ctx);
        goto after_11;
    // 0x800CE790: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_11:
    // 0x800CE794: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800CE798:
    // 0x800CE798: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x800CE79C: bne         $s1, $s4, L_800CE6C0
    if (ctx->r17 != ctx->r20) {
        // 0x800CE7A0: sb          $zero, 0x14($s0)
        MEM_B(0X14, ctx->r16) = 0;
            goto L_800CE6C0;
    }
    // 0x800CE7A0: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x800CE7A4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_800CE7A8:
    // 0x800CE7A8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800CE7AC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x800CE7B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800CE7B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800CE7B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800CE7BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800CE7C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800CE7C4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800CE7C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800CE7CC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x800CE7D0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800CE7D4: jr          $ra
    // 0x800CE7D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800CE7D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800CE7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE7DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CE7E0: addiu       $v0, $v0, -0x4FD0
    ctx->r2 = ADD32(ctx->r2, -0X4FD0);
    // 0x800CE7E4: lbu         $a0, 0x120($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X120);
    // 0x800CE7E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE7EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE7F0: beql        $a0, $zero, L_800CE810
    if (ctx->r4 == 0) {
        // 0x800CE7F4: lbu         $t6, 0x121($v0)
        ctx->r14 = MEM_BU(ctx->r2, 0X121);
            goto L_800CE810;
    }
    goto skip_0;
    // 0x800CE7F4: lbu         $t6, 0x121($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X121);
    skip_0:
    // 0x800CE7F8: jal         0x800C2FDC
    // 0x800CE7FC: nop

    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x800CE7FC: nop

    after_0:
    // 0x800CE800: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CE804: addiu       $v0, $v0, -0x4FD0
    ctx->r2 = ADD32(ctx->r2, -0X4FD0);
    // 0x800CE808: sb          $zero, 0x120($v0)
    MEM_B(0X120, ctx->r2) = 0;
    // 0x800CE80C: lbu         $t6, 0x121($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X121);
L_800CE810:
    // 0x800CE810: beql        $t6, $zero, L_800CE830
    if (ctx->r14 == 0) {
        // 0x800CE814: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800CE830;
    }
    goto skip_1;
    // 0x800CE814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800CE818: jal         0x800FC74C
    // 0x800CE81C: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    func_800FC74C(rdram, ctx);
        goto after_1;
    // 0x800CE81C: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_1:
    // 0x800CE820: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800CE824: addiu       $v0, $v0, -0x4FD0
    ctx->r2 = ADD32(ctx->r2, -0X4FD0);
    // 0x800CE828: sb          $zero, 0x121($v0)
    MEM_B(0X121, ctx->r2) = 0;
    // 0x800CE82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800CE830:
    // 0x800CE830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE834: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE844: jal         0x800CE3E0
    // 0x800CE848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CE84C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE850: sb          $t6, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r14;
    // 0x800CE854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE85C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE86C: jal         0x800CE3E0
    // 0x800CE870: nop

    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE870: nop

    after_0:
    // 0x800CE874: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800CE878: sb          $t6, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r14;
    // 0x800CE87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE884: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE894: jal         0x800CE3E0
    // 0x800CE898: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE898: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CE89C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE8A0: beql        $t6, $zero, L_800CE8BC
    if (ctx->r14 == 0) {
        // 0x800CE8A4: lb          $v1, 0x12($v0)
        ctx->r3 = MEM_B(ctx->r2, 0X12);
            goto L_800CE8BC;
    }
    goto skip_0;
    // 0x800CE8A4: lb          $v1, 0x12($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X12);
    skip_0:
    // 0x800CE8A8: lb          $t7, 0x12($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X12);
    // 0x800CE8AC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800CE8B0: b           L_800CE8C8
    // 0x800CE8B4: sb          $t8, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r24;
        goto L_800CE8C8;
    // 0x800CE8B4: sb          $t8, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r24;
    // 0x800CE8B8: lb          $v1, 0x12($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X12);
L_800CE8BC:
    // 0x800CE8BC: beq         $v1, $zero, L_800CE8C8
    if (ctx->r3 == 0) {
        // 0x800CE8C0: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_800CE8C8;
    }
    // 0x800CE8C0: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x800CE8C4: sb          $t9, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r25;
L_800CE8C8:
    // 0x800CE8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE8D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE8D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CE8DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE8E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE8E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CE8E8: jal         0x800CE3E0
    // 0x800CE8EC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE8EC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800CE8F0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800CE8F4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CE8F8: sb          $zero, 0x15($v0)
    MEM_B(0X15, ctx->r2) = 0;
    // 0x800CE8FC: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x800CE900: sh          $a2, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r6;
    // 0x800CE904: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
    // 0x800CE908: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
    // 0x800CE90C: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x800CE910: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x800CE914: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x800CE918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE91C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE920: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE92C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE930: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800CE934: jal         0x800CE3E0
    // 0x800CE938: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE938: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800CE93C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE940: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    // 0x800CE944: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800CE948: sw          $t7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r15;
    // 0x800CE94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE954: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE95C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE964: jal         0x800CE3E0
    // 0x800CE968: nop

    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE968: nop

    after_0:
    // 0x800CE96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE970: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x800CE974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE978: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE984: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CE988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE98C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CE990: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800CE994: jal         0x800CE3E0
    // 0x800CE998: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE998: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800CE99C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CE9A0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800CE9A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CE9A8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x800CE9AC: nop

    // 0x800CE9B0: bc1fl       L_800CE9C0
    if (!c1cs) {
        // 0x800CE9B4: swc1        $f12, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
            goto L_800CE9C0;
    }
    goto skip_0;
    // 0x800CE9B4: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    skip_0:
    // 0x800CE9B8: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x800CE9BC: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
L_800CE9C0:
    // 0x800CE9C0: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x800CE9C4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800CE9C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800CE9CC: sltiu       $t6, $a2, 0x1
    ctx->r14 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x800CE9D0: jal         0x800CE49C
    // 0x800CE9D4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_800CE49C(rdram, ctx);
        goto after_1;
    // 0x800CE9D4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_1:
    // 0x800CE9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CE9DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CE9E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CE9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE9E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CE9EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CE9F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800CE9F4: jal         0x800CE3E0
    // 0x800CE9F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CE9F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CE9FC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800CEA00: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x800CEA04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CEA08: slt         $at, $t6, $a2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800CEA0C: beql        $at, $zero, L_800CEA1C
    if (ctx->r1 == 0) {
        // 0x800CEA10: sh          $a2, 0x8($a0)
        MEM_H(0X8, ctx->r4) = ctx->r6;
            goto L_800CEA1C;
    }
    goto skip_0;
    // 0x800CEA10: sh          $a2, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r6;
    skip_0:
    // 0x800CEA14: sh          $a2, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r6;
    // 0x800CEA18: sh          $a2, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r6;
L_800CEA1C:
    // 0x800CEA1C: sh          $a2, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r6;
    // 0x800CEA20: jal         0x800CE438
    // 0x800CEA24: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800CE438(rdram, ctx);
        goto after_1;
    // 0x800CEA24: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800CEA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEA2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEA30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEA38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEA3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEA40: jal         0x800CE3E0
    // 0x800CEA44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CEA44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CEA48: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800CEA4C: sb          $t6, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r14;
    // 0x800CEA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEA58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEA60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEA68: jal         0x800CE3E0
    // 0x800CEA6C: nop

    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CEA6C: nop

    after_0:
    // 0x800CEA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEA74: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800CEA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEA7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEA84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEA88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEA8C: jal         0x800CE3E0
    // 0x800CEA90: nop

    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CEA90: nop

    after_0:
    // 0x800CEA94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEA98: lh          $v0, 0xA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XA);
    // 0x800CEA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEAA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800CEAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEAB0: jal         0x800CE3E0
    // 0x800CEAB4: nop

    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CEAB4: nop

    after_0:
    // 0x800CEAB8: lb          $v0, 0x12($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X12);
    // 0x800CEABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEAC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEAC4: slt         $t6, $zero, $v0
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800CEAC8: jr          $ra
    // 0x800CEACC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800CEACC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_800CEAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEAD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEAD8: jal         0x800CEA60
    // 0x800CEADC: nop

    func_800CEA60(rdram, ctx);
        goto after_0;
    // 0x800CEADC: nop

    after_0:
    // 0x800CEAE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CEAE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CEAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEAEC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800CEAF0: nop

    // 0x800CEAF4: bc1f        L_800CEB00
    if (!c1cs) {
        // 0x800CEAF8: nop
    
            goto L_800CEB00;
    }
    // 0x800CEAF8: nop

    // 0x800CEAFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800CEB00:
    // 0x800CEB00: jr          $ra
    // 0x800CEB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800CEB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800CEB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEB08: lb          $t6, 0x12($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X12);
    // 0x800CEB0C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800CEB10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CEB14: beq         $t6, $zero, L_800CEB4C
    if (ctx->r14 == 0) {
            // 0x800CEB18: nop

    func_800CEB4C(rdram, ctx);
    return;
    }
    // 0x800CEB18: nop

    // 0x800CEB1C: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800CEB20: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x800CEB24: nop

    // 0x800CEB28: bc1f        L_800CEB4C
    if (!c1cs) {
            // 0x800CEB2C: nop

    func_800CEB4C(rdram, ctx);
    return;
    }
    // 0x800CEB2C: nop

    // 0x800CEB30: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800CEB34: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x800CEB38: nop

    // 0x800CEB3C: bc1f        L_800CEB4C
    if (!c1cs) {
            // 0x800CEB40: nop

    func_800CEB4C(rdram, ctx);
    return;
    }
    // 0x800CEB40: nop

    // 0x800CEB44: jr          $ra
    // 0x800CEB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800CEB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800CEB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEB4C: jr          $ra
    // 0x800CEB50: nop

    return;
    // 0x800CEB50: nop

;}
RECOMP_FUNC void func_800CEB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CEB54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CEB58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CEB5C: jal         0x800CE3E0
    // 0x800CEB60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CE3E0(rdram, ctx);
        goto after_0;
    // 0x800CEB60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800CEB64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800CEB68: jal         0x800CEB08
    // 0x800CEB6C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800CEB08(rdram, ctx);
        goto after_1;
    // 0x800CEB6C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800CEB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CEB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CEB78: jr          $ra
    return;
;}
