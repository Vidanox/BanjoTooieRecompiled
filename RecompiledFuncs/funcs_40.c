#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80800000_bamovegoto(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: beq         $a1, $zero, L_80800020
    if (ctx->r5 == 0) {
        // 0x80800010: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80800020;
    }
    // 0x80800010: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800014: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800018: bnel        $a1, $at, L_80800044
    if (ctx->r5 != ctx->r1) {
        // 0x8080001C: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_80800044;
    }
    goto skip_0;
    // 0x8080001C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    skip_0:
L_80800020:
    // 0x80800020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800028: jal         0x8009B9B0
    // 0x8080002C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8009B9B0(rdram, ctx);
        goto after_0;
    // 0x8080002C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800034: jal         0x8009BA9C
    // 0x80800038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_1;
    // 0x80800038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080003C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800040: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
L_80800044:
    // 0x80800044: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80800048: sb          $a2, 0x54($t7)
    MEM_B(0X54, ctx->r15) = ctx->r6;
    // 0x8080004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800054: jr          $ra
    // 0x80800058: nop

    return;
    // 0x80800058: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080005C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800064: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800068: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080006C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800070: sw          $zero, 0x80($t6)
    MEM_W(0X80, ctx->r14) = 0;
    // 0x80800074: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80800078: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080007C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800080: sw          $zero, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = 0;
    // 0x80800084: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80800088: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080008C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80800090: swc1        $f4, 0x78($t8)
    MEM_W(0X78, ctx->r24) = ctx->f4.u32l;
    // 0x80800094: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x80800098: sb          $t9, 0x55($t0)
    MEM_B(0X55, ctx->r8) = ctx->r25;
    // 0x8080009C: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x808000A0: sb          $zero, 0x56($t1)
    MEM_B(0X56, ctx->r9) = 0;
    // 0x808000A4: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x808000A8: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
    // 0x808000AC: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x808000B0: swc1        $f6, 0x70($t3)
    MEM_W(0X70, ctx->r11) = ctx->f6.u32l;
    // 0x808000B4: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x808000B8: swc1        $f8, 0x74($t4)
    MEM_W(0X74, ctx->r12) = ctx->f8.u32l;
    // 0x808000BC: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x808000C0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x808000C4: jal         0x800EFD24
    // 0x808000C8: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x808000C8: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    after_0:
    // 0x808000CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808000D0: lw          $a0, 0xC8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC8);
    // 0x808000D4: jal         0x800EFD24
    // 0x808000D8: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, 0X64);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x808000D8: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, 0X64);
    after_1:
    // 0x808000DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E4: jr          $ra
    // 0x808000E8: nop

    return;
    // 0x808000E8: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000F8: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x808000FC: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80800100: jal         0x800EE7F8
    // 0x80800104: addiu       $a1, $v0, 0x64
    ctx->r5 = ADD32(ctx->r2, 0X64);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800104: addiu       $a1, $v0, 0x64
    ctx->r5 = ADD32(ctx->r2, 0X64);
    after_0:
    // 0x80800108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080010C: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x80800110: jal         0x8009C0F8
    // 0x80800114: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    func_8009C0F8(rdram, ctx);
        goto after_1;
    // 0x80800114: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    after_1:
    // 0x80800118: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080011C: jal         0x80000000
    // 0x80800120: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_2;
    // 0x80800120: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x80800124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080012C: jr          $ra
    // 0x80800130: nop

    return;
    // 0x80800130: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800134: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800138: jr          $ra
    // 0x8080013C: lwc1        $f0, 0x74($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X74);
    return;
    // 0x8080013C: lwc1        $f0, 0x74($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X74);
;}
RECOMP_FUNC void bamovegoto_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800148: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8080014C: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x80800150: jal         0x800EEAD4
    // 0x80800154: addiu       $a1, $v0, 0x64
    ctx->r5 = ADD32(ctx->r2, 0X64);
    func_800EEAD4(rdram, ctx);
        goto after_0;
    // 0x80800154: addiu       $a1, $v0, 0x64
    ctx->r5 = ADD32(ctx->r2, 0X64);
    after_0:
    // 0x80800158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8080016C: lbu         $v0, 0x54($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X54);
    // 0x80800170: xori        $t7, $v0, 0x6
    ctx->r15 = ctx->r2 ^ 0X6;
    // 0x80800174: jr          $ra
    // 0x80800178: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x80800178: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void bamovegoto_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080017C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800184: jal         0x80000000
    // 0x80800188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bamovegoto(rdram, ctx);
        goto after_0;
    // 0x80800188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080018C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800194: jr          $ra
    // 0x80800198: nop

    return;
    // 0x80800198: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080019C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001A0: jr          $ra
    // 0x808001A4: sb          $zero, 0x54($t6)
    MEM_B(0X54, ctx->r14) = 0;
    return;
    // 0x808001A4: sb          $zero, 0x54($t6)
    MEM_B(0X54, ctx->r14) = 0;
;}
RECOMP_FUNC void bamovegoto_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808001AC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001B0: jr          $ra
    // 0x808001B4: swc1        $f12, 0x70($t6)
    MEM_W(0X70, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808001B4: swc1        $f12, 0x70($t6)
    MEM_W(0X70, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bamovegoto_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808001BC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001C0: jr          $ra
    // 0x808001C4: swc1        $f12, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808001C4: swc1        $f12, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bamovegoto_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001CC: jr          $ra
    // 0x808001D0: sb          $a1, 0x55($t6)
    MEM_B(0X55, ctx->r14) = ctx->r5;
    return;
    // 0x808001D0: sb          $a1, 0x55($t6)
    MEM_B(0X55, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bamovegoto_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001D8: jr          $ra
    // 0x808001DC: sb          $a1, 0x56($t6)
    MEM_B(0X56, ctx->r14) = ctx->r5;
    return;
    // 0x808001DC: sb          $a1, 0x56($t6)
    MEM_B(0X56, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bamovegoto_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001E4: sw          $a1, 0x80($t6)
    MEM_W(0X80, ctx->r14) = ctx->r5;
    // 0x808001E8: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x808001EC: jr          $ra
    // 0x808001F0: sw          $a2, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r6;
    return;
    // 0x808001F0: sw          $a2, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void bamovegoto_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001FC: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x80800200: jal         0x800EE7F8
    // 0x80800204: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, 0X64);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800204: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, 0X64);
    after_0:
    // 0x80800208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080020C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800210: jr          $ra
    // 0x80800214: nop

    return;
    // 0x80800214: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080021C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800224: jal         0x8009B800
    // 0x80800228: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009B800(rdram, ctx);
        goto after_0;
    // 0x80800228: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x8080022C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800234: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800238: lbu         $t7, 0x55($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X55);
    // 0x8080023C: bne         $t7, $at, L_80800254
    if (ctx->r15 != ctx->r1) {
        // 0x80800240: nop
    
            goto L_80800254;
    }
    // 0x80800240: nop

    // 0x80800244: jal         0x80000000
    // 0x80800248: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_1;
    // 0x80800248: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8080024C: b           L_80800260
    // 0x80800250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800260;
    // 0x80800250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800254:
    // 0x80800254: jal         0x80000000
    // 0x80800258: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_2;
    // 0x80800258: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x8080025C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800260:
    // 0x80800260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800264: jr          $ra
    // 0x80800268: nop

    return;
    // 0x80800268: nop

;}
RECOMP_FUNC void bamovegoto_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080026C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800270: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800274: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800278: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080027C: lw          $s0, 0xC8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC8);
    // 0x80800280: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800284: lbu         $t6, 0x54($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X54);
    // 0x80800288: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x8080028C: beq         $at, $zero, L_808005CC
    if (ctx->r1 == 0) {
        // 0x80800290: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_808005CC;
    }
    // 0x80800290: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800294: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(35, 0X5E0) << 16);
    // 0x80800298: addu        $at, $at, $t6
    gpr jr_addend_808002A0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8080029C: lw          $t6, 0x5E0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(35, 0X5E0));
    // 0x808002A0: jr          $t6
    // 0x808002A4: nop

    switch (jr_addend_808002A0 >> 2) {
        case 0: goto L_808005CC; break;
        case 1: goto L_808005CC; break;
        case 2: goto L_808002A8; break;
        case 3: goto L_80800330; break;
        case 4: goto L_8080049C; break;
        case 5: goto L_808004BC; break;
        case 6: goto L_808005CC; break;
        default: switch_error(__func__, 0x808002A0, 0x808005E0);
    }
    // 0x808002A4: nop

L_808002A8:
    // 0x808002A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002AC: jal         0x8009C128
    // 0x808002B0: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808002B0: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    after_0:
    // 0x808002B4: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808002B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808002BC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x808002C0: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x808002C4: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x808002C8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x808002CC: nop

    // 0x808002D0: bc1tl       L_80800300
    if (c1cs) {
        // 0x808002D4: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_80800300;
    }
    goto skip_0;
    // 0x808002D4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_0:
    // 0x808002D8: jal         0x800EFB24
    // 0x808002DC: addiu       $a2, $s0, 0x58
    ctx->r6 = ADD32(ctx->r16, 0X58);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x808002DC: addiu       $a2, $s0, 0x58
    ctx->r6 = ADD32(ctx->r16, 0X58);
    after_1:
    // 0x808002E0: jal         0x800EEFFC
    // 0x808002E4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    func_800EEFFC(rdram, ctx);
        goto after_2;
    // 0x808002E4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x808002E8: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808002EC: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x808002F0: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x808002F4: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x808002F8: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808002FC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_80800300:
    // 0x80800300: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800308: jal         0x8009BA9C
    // 0x8080030C: swc1        $f14, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f14.u32l;
    func_8009BA9C(rdram, ctx);
        goto after_3;
    // 0x8080030C: swc1        $f14, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f14.u32l;
    after_3:
    // 0x80800310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800314: jal         0x8009B9B0
    // 0x80800318: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800318: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x8080031C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800320: jal         0x80000000
    // 0x80800324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_5;
    // 0x80800324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800328: b           L_808005D0
    // 0x8080032C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808005D0;
    // 0x8080032C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800330:
    // 0x80800330: jal         0x800D8FF8
    // 0x80800334: nop

    func_800D8FF8(rdram, ctx);
        goto after_6;
    // 0x80800334: nop

    after_6:
    // 0x80800338: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x8080033C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800340: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800344: lwc1        $f16, 0x74($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80800348: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080034C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800350: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80800354: swc1        $f18, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f18.u32l;
    // 0x80800358: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x8080035C: lwc1        $f12, 0x74($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80800360: lw          $a2, 0x70($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X70);
    // 0x80800364: jal         0x800F10B4
    // 0x80800368: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x80800368: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x8080036C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80800370: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x80800374: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x80800378: beq         $v0, $zero, L_80800394
    if (ctx->r2 == 0) {
        // 0x8080037C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800394;
    }
    // 0x8080037C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800380: jalr        $v0
    // 0x80800384: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80800384: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_8:
    // 0x80800388: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x8080038C: b           L_80800398
    // 0x80800390: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
        goto L_80800398;
    // 0x80800390: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
L_80800394:
    // 0x80800394: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
L_80800398:
    // 0x80800398: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8080039C: jal         0x800EE7F8
    // 0x808003A0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x808003A0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_9:
    // 0x808003A4: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808003A8: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808003AC: lwc1        $f14, 0x58($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X58);
    // 0x808003B0: jal         0x800F1214
    // 0x808003B4: lw          $a2, 0x64($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X64);
    func_800F1214(rdram, ctx);
        goto after_10;
    // 0x808003B4: lw          $a2, 0x64($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X64);
    after_10:
    // 0x808003B8: lw          $t7, 0xC8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC8);
    // 0x808003BC: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x808003C0: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808003C4: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808003C8: lwc1        $f14, 0x5C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x808003CC: jal         0x800F1214
    // 0x808003D0: lw          $a2, 0x68($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X68);
    func_800F1214(rdram, ctx);
        goto after_11;
    // 0x808003D0: lw          $a2, 0x68($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X68);
    after_11:
    // 0x808003D4: lw          $t8, 0xC8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC8);
    // 0x808003D8: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x808003DC: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808003E0: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808003E4: lwc1        $f14, 0x60($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X60);
    // 0x808003E8: jal         0x800F1214
    // 0x808003EC: lw          $a2, 0x6C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6C);
    func_800F1214(rdram, ctx);
        goto after_12;
    // 0x808003EC: lw          $a2, 0x6C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6C);
    after_12:
    // 0x808003F0: lw          $t9, 0xC8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC8);
    // 0x808003F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003F8: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
    // 0x808003FC: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x80800400: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x80800404: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80800408: beql        $v0, $zero, L_80800420
    if (ctx->r2 == 0) {
        // 0x8080040C: addiu       $a0, $s0, 0x10
        ctx->r4 = ADD32(ctx->r16, 0X10);
            goto L_80800420;
    }
    goto skip_1;
    // 0x8080040C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    skip_1:
    // 0x80800410: jalr        $v0
    // 0x80800414: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x80800414: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    after_13:
    // 0x80800418: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x8080041C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
L_80800420:
    // 0x80800420: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80800424: jal         0x800EFB24
    // 0x80800428: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800EFB24(rdram, ctx);
        goto after_14;
    // 0x80800428: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_14:
    // 0x8080042C: jal         0x800D8FF8
    // 0x80800430: nop

    func_800D8FF8(rdram, ctx);
        goto after_15;
    // 0x80800430: nop

    after_15:
    // 0x80800434: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800438: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080043C: lw          $a0, 0xC8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC8);
    // 0x80800440: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800444: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80800448: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8080044C: jal         0x800EF334
    // 0x80800450: nop

    func_800EF334(rdram, ctx);
        goto after_16;
    // 0x80800450: nop

    after_16:
    // 0x80800454: lw          $a0, 0xC8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC8);
    // 0x80800458: jal         0x800EEF94
    // 0x8080045C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EEF94(rdram, ctx);
        goto after_17;
    // 0x8080045C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_17:
    // 0x80800460: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800464: jal         0x8009B9B0
    // 0x80800468: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_18;
    // 0x80800468: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x8080046C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800470: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800474: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80800478: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080047C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80800480: nop

    // 0x80800484: bc1fl       L_808005D0
    if (!c1cs) {
        // 0x80800488: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808005D0;
    }
    goto skip_2;
    // 0x80800488: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8080048C: jal         0x80000000
    // 0x80800490: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_19;
    // 0x80800490: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_19:
    // 0x80800494: b           L_808005D0
    // 0x80800498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808005D0;
    // 0x80800498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080049C:
    // 0x8080049C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808004A0: jal         0x8009C128
    // 0x808004A4: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    func_8009C128(rdram, ctx);
        goto after_20;
    // 0x808004A4: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    after_20:
    // 0x808004A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808004AC: jal         0x80000000
    // 0x808004B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_21;
    // 0x808004B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_21:
    // 0x808004B4: b           L_808005D0
    // 0x808004B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808005D0;
    // 0x808004B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808004BC:
    // 0x808004BC: jal         0x800D8FF8
    // 0x808004C0: nop

    func_800D8FF8(rdram, ctx);
        goto after_22;
    // 0x808004C0: nop

    after_22:
    // 0x808004C4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x808004C8: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808004CC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x808004D0: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x808004D4: jal         0x800EFB24
    // 0x808004D8: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    func_800EFB24(rdram, ctx);
        goto after_23;
    // 0x808004D8: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_23:
    // 0x808004DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x808004E0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: jal         0x800EEFFC
    // 0x808004EC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    func_800EEFFC(rdram, ctx);
        goto after_24;
    // 0x808004EC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_24:
    // 0x808004F0: lw          $t0, 0xC8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC8);
    // 0x808004F4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808004F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808004FC: lwc1        $f2, 0x78($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X78);
    // 0x80800500: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80800504: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80800508: nop

    // 0x8080050C: bc1fl       L_80800528
    if (!c1cs) {
        // 0x80800510: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_80800528;
    }
    goto skip_3;
    // 0x80800510: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_3:
    // 0x80800514: jal         0x80000000
    // 0x80800518: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80800000_bamovegoto(rdram, ctx);
        goto after_25;
    // 0x80800518: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_25:
    // 0x8080051C: b           L_80800534
    // 0x80800520: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
        goto L_80800534;
    // 0x80800520: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800524: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_80800528:
    // 0x80800528: jal         0x800EF368
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EF368(rdram, ctx);
        goto after_26;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800530: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
L_80800534:
    // 0x80800534: lw          $t1, 0xC8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC8);
    // 0x80800538: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
    // 0x8080053C: lw          $t2, 0xC8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC8);
    // 0x80800540: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800544: swc1        $f10, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f10.u32l;
    // 0x80800548: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x8080054C: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800550: lbu         $t3, 0x56($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X56);
    // 0x80800554: beql        $t3, $zero, L_80800598
    if (ctx->r11 == 0) {
        // 0x80800558: addiu       $a0, $s0, 0x28
        ctx->r4 = ADD32(ctx->r16, 0X28);
            goto L_80800598;
    }
    goto skip_4;
    // 0x80800558: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    skip_4:
    // 0x8080055C: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80800560: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80800564: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800568: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8080056C: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    // 0x80800570: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x80800574: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80800578: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8080057C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80800580: nop

    // 0x80800584: bc1fl       L_80800598
    if (!c1cs) {
        // 0x80800588: addiu       $a0, $s0, 0x28
        ctx->r4 = ADD32(ctx->r16, 0X28);
            goto L_80800598;
    }
    goto skip_5;
    // 0x80800588: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    skip_5:
    // 0x8080058C: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x80800590: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x80800594: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
L_80800598:
    // 0x80800598: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8080059C: jal         0x800EFA20
    // 0x808005A0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_800EFA20(rdram, ctx);
        goto after_27;
    // 0x808005A0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_27:
    // 0x808005A4: lw          $a0, 0xC8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC8);
    // 0x808005A8: jal         0x800EEF94
    // 0x808005AC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EEF94(rdram, ctx);
        goto after_28;
    // 0x808005AC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_28:
    // 0x808005B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005B4: jal         0x8009B9B0
    // 0x808005B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_29;
    // 0x808005B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_29:
    // 0x808005BC: lw          $s0, 0xC8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC8);
    // 0x808005C0: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x808005C4: jal         0x800EF04C
    // 0x808005C8: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_30;
    // 0x808005C8: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    after_30:
L_808005CC:
    // 0x808005CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808005D0:
    // 0x808005D0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808005D4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808005D8: jr          $ra
    // 0x808005DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x808005DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void bamovehover_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bamovehover_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x80800018: jal         0x800EFD24
    // 0x8080001C: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    after_0:
    // 0x80800020: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: lw          $a0, 0xC8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC8);
    // 0x80800028: jal         0x800EFD24
    // 0x8080002C: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8080002C: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    after_1:
    // 0x80800030: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800034: lui         $a1, 0x4185
    ctx->r5 = S32(0X4185 << 16);
    // 0x80800038: lui         $a2, 0x4205
    ctx->r6 = S32(0X4205 << 16);
    // 0x8080003C: lw          $a0, 0xC8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC8);
    // 0x80800040: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x80800044: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    // 0x80800048: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x8080004C: jal         0x800EFA4C
    // 0x80800050: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80800050: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void bamovehover_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80800068: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x80800070: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800074: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x80800078: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x8080007C: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x80800080: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x80800084: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x80800088: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8080008C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80800090: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800094: jal         0x800D8FF8
    // 0x80800098: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800098: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x8080009C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x808000A0: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x808000A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000A8: addiu       $a0, $v0, 0xAC
    ctx->r4 = ADD32(ctx->r2, 0XAC);
    // 0x808000AC: jal         0x800EF174
    // 0x808000B0: addiu       $a1, $v0, 0xB8
    ctx->r5 = ADD32(ctx->r2, 0XB8);
    func_800EF174(rdram, ctx);
        goto after_1;
    // 0x808000B0: addiu       $a1, $v0, 0xB8
    ctx->r5 = ADD32(ctx->r2, 0XB8);
    after_1:
    // 0x808000B4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x808000B8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x808000BC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808000C0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x808000C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x808000C8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808000CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x808000D0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808000D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808000D8: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x808000DC: lw          $t6, 0xC8($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XC8);
L_808000E0:
    // 0x808000E0: addu        $v0, $t6, $s1
    ctx->r2 = ADD32(ctx->r14, ctx->r17);
    // 0x808000E4: lwc1        $f4, 0xAC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x808000E8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808000EC: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x808000F0: jal         0x800F2100
    // 0x808000F4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x808000F4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x808000F8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x808000FC: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x80800100: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800104: addu        $s0, $s1, $t7
    ctx->r16 = ADD32(ctx->r17, ctx->r15);
    // 0x80800108: bc1f        L_8080017C
    if (!c1cs) {
        // 0x8080010C: lui         $at, 0x435C
        ctx->r1 = S32(0X435C << 16);
            goto L_8080017C;
    }
    // 0x8080010C: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80800110: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800114: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80800118: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x8080011C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x80800120: mul.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800124: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80800128: jal         0x800F10B4
    // 0x8080012C: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x8080012C: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    after_3:
    // 0x80800130: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800134: nop

    // 0x80800138: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x8080013C: nop

    // 0x80800140: bc1fl       L_80800154
    if (!c1cs) {
        // 0x80800144: neg.s       $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
            goto L_80800154;
    }
    goto skip_0;
    // 0x80800144: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    skip_0:
    // 0x80800148: b           L_80800158
    // 0x8080014C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
        goto L_80800158;
    // 0x8080014C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x80800150: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
L_80800154:
    // 0x80800154: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
L_80800158:
    // 0x80800158: lw          $t8, 0xC8($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XC8);
    // 0x8080015C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800160: lwc1        $f14, 0x0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80800164: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x80800168: jal         0x800F15F8
    // 0x8080016C: lwc1        $f12, 0x10($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X10);
    func_800F15F8(rdram, ctx);
        goto after_4;
    // 0x8080016C: lwc1        $f12, 0x10($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X10);
    after_4:
    // 0x80800170: lw          $t0, 0xC8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XC8);
    // 0x80800174: addu        $t1, $t0, $s1
    ctx->r9 = ADD32(ctx->r8, ctx->r17);
    // 0x80800178: swc1        $f0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f0.u32l;
L_8080017C:
    // 0x8080017C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80800180: bnel        $s1, $s3, L_808000E0
    if (ctx->r17 != ctx->r19) {
        // 0x80800184: lw          $t6, 0xC8($s2)
        ctx->r14 = MEM_W(ctx->r18, 0XC8);
            goto L_808000E0;
    }
    goto skip_1;
    // 0x80800184: lw          $t6, 0xC8($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XC8);
    skip_1:
    // 0x80800188: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x8080018C: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x80800190: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80800194: jal         0x800EF174
    // 0x80800198: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    func_800EF174(rdram, ctx);
        goto after_5;
    // 0x80800198: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    after_5:
    // 0x8080019C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x808001A0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808001A4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808001A8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x808001AC: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x808001B0: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x808001B4: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x808001B8: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x808001BC: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x808001C0: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x808001C4: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x808001C8: jr          $ra
    // 0x808001CC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x808001CC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void bamovehover_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D8: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x808001DC: jal         0x800EE7F8
    // 0x808001E0: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808001E0: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    after_0:
    // 0x808001E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001EC: jr          $ra
    // 0x808001F0: nop

    return;
    // 0x808001F0: nop

;}
RECOMP_FUNC void bamovehover_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001FC: bne         $a1, $zero, L_80800218
    if (ctx->r5 != 0) {
        // 0x80800200: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80800218;
    }
    // 0x80800200: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800204: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x80800208: jal         0x800EFD24
    // 0x8080020C: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8080020C: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    after_0:
    // 0x80800210: b           L_80800228
    // 0x80800214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800228;
    // 0x80800214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800218:
    // 0x80800218: lw          $a0, 0xC8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC8);
    // 0x8080021C: jal         0x800EE7F8
    // 0x80800220: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800220: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    after_1:
    // 0x80800224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800228:
    // 0x80800228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080022C: jr          $ra
    // 0x80800230: nop

    return;
    // 0x80800230: nop

    // 0x80800234: nop

    // 0x80800238: nop

    // 0x8080023C: nop

;}
RECOMP_FUNC void bamoveledge_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void bamoveledge_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: jr          $ra
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bamoveledge_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800010: jr          $ra
    // 0x80800014: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800014: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bamoveledge_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800018: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080001C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800020: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80800024: jal         0x8009BC08
    // 0x80800028: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009BC08(rdram, ctx);
        goto after_0;
    // 0x80800028: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8080002C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800030: jal         0x8009BB24
    // 0x80800034: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x80800034: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80800038: jal         0x800D8FF8
    // 0x8080003C: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x8080003C: nop

    after_2:
    // 0x80800040: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800044: jal         0x800EF334
    // 0x80800048: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EF334(rdram, ctx);
        goto after_3;
    // 0x80800048: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x8080004C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80800050: jal         0x800EF04C
    // 0x80800054: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x80800054: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80800058: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8080005C: jal         0x8009B98C
    // 0x80800060: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009B98C(rdram, ctx);
        goto after_5;
    // 0x80800060: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x80800064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800068: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080006C: jr          $ra
    // 0x80800070: nop

    return;
    // 0x80800070: nop

    // 0x80800074: nop

    // 0x80800078: nop

    // 0x8080007C: nop

;}
RECOMP_FUNC void func_80800000_bamovespline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x80800018: lw          $a1, 0x40($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X40);
    // 0x8080001C: jal         0x800EEB9C
    // 0x80800020: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    func_800EEB9C(rdram, ctx);
        goto after_0;
    // 0x80800020: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    after_0:
    // 0x80800024: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80800028: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8080002C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80800030: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x80800034: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80800038: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8080003C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x80800040: lwc1        $f8, 0x18($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X18);
    // 0x80800044: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x80800048: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x8080004C: jal         0x800EE7F8
    // 0x80800050: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800050: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_1:
    // 0x80800054: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800058: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8080005C: jal         0x800D8840
    // 0x80800060: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_800D8840(rdram, ctx);
        goto after_2;
    // 0x80800060: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80800064: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800068: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8080006C: jal         0x800EFA20
    // 0x80800070: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EFA20(rdram, ctx);
        goto after_3;
    // 0x80800070: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x80800074: jal         0x800D8840
    // 0x80800078: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800D8840(rdram, ctx);
        goto after_4;
    // 0x80800078: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8080007C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800080: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80800084: jal         0x800EFA20
    // 0x80800088: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EFA20(rdram, ctx);
        goto after_5;
    // 0x80800088: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x8080008C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800090: jal         0x800EF3DC
    // 0x80800094: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800EF3DC(rdram, ctx);
        goto after_6;
    // 0x80800094: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x80800098: jal         0x800D8FF8
    // 0x8080009C: nop

    func_800D8FF8(rdram, ctx);
        goto after_7;
    // 0x8080009C: nop

    after_7:
    // 0x808000A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808000A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808000A8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808000AC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x808000B0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x808000B4: jal         0x800EF334
    // 0x808000B8: nop

    func_800EF334(rdram, ctx);
        goto after_8;
    // 0x808000B8: nop

    after_8:
    // 0x808000BC: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x808000C0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x808000C4: jal         0x800EF04C
    // 0x808000C8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EF04C(rdram, ctx);
        goto after_9;
    // 0x808000C8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_9:
    // 0x808000CC: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x808000D0: lui         $a1, 0x38D1
    ctx->r5 = S32(0X38D1 << 16);
    // 0x808000D4: ori         $a1, $a1, 0xB717
    ctx->r5 = ctx->r5 | 0XB717;
    // 0x808000D8: jal         0x800F2168
    // 0x808000DC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800F2168(rdram, ctx);
        goto after_10;
    // 0x808000DC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_10:
    // 0x808000E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x808000EC: jr          $ra
    // 0x808000F0: nop

    return;
    // 0x808000F0: nop

;}
RECOMP_FUNC void func_808000F4_bamovespline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800100: beq         $a1, $at, L_8080012C
    if (ctx->r5 == ctx->r1) {
        // 0x80800104: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_8080012C;
    }
    // 0x80800104: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800108: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080010C: beq         $a1, $at, L_80800168
    if (ctx->r5 == ctx->r1) {
        // 0x80800110: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800168;
    }
    // 0x80800110: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800114: beq         $a1, $at, L_8080014C
    if (ctx->r5 == ctx->r1) {
        // 0x80800118: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080014C;
    }
    // 0x80800118: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080011C: beql        $a1, $at, L_8080016C
    if (ctx->r5 == ctx->r1) {
        // 0x80800120: lw          $t9, 0xC8($a0)
        ctx->r25 = MEM_W(ctx->r4, 0XC8);
            goto L_8080016C;
    }
    goto skip_0;
    // 0x80800120: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    skip_0:
    // 0x80800124: b           L_8080016C
    // 0x80800128: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
        goto L_8080016C;
    // 0x80800128: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
L_8080012C:
    // 0x8080012C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800130: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800134: sb          $zero, 0x91($t6)
    MEM_B(0X91, ctx->r14) = 0;
    // 0x80800138: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8080013C: sb          $zero, 0x92($t7)
    MEM_B(0X92, ctx->r15) = 0;
    // 0x80800140: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80800144: b           L_80800168
    // 0x80800148: swc1        $f4, 0xA8($t8)
    MEM_W(0XA8, ctx->r24) = ctx->f4.u32l;
        goto L_80800168;
    // 0x80800148: swc1        $f4, 0xA8($t8)
    MEM_W(0XA8, ctx->r24) = ctx->f4.u32l;
L_8080014C:
    // 0x8080014C: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x80800150: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80800154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800158: jal         0x8009C128
    // 0x8080015C: addiu       $a1, $a1, 0x9C
    ctx->r5 = ADD32(ctx->r5, 0X9C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080015C: addiu       $a1, $a1, 0x9C
    ctx->r5 = ADD32(ctx->r5, 0X9C);
    after_0:
    // 0x80800160: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800164: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_80800168:
    // 0x80800168: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
L_8080016C:
    // 0x8080016C: sb          $a2, 0x90($t9)
    MEM_B(0X90, ctx->r25) = ctx->r6;
    // 0x80800170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void bamovespline_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8080018C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800190: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80800194: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800198: lbu         $t7, 0x90($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X90);
    // 0x8080019C: bnel        $t7, $at, L_808001D4
    if (ctx->r15 != ctx->r1) {
        // 0x808001A0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_808001D4;
    }
    goto skip_0;
    // 0x808001A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x808001A4: jal         0x800D7520
    // 0x808001A8: lh          $a0, 0x94($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X94);
    func_800D7520(rdram, ctx);
        goto after_0;
    // 0x808001A8: lh          $a0, 0x94($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X94);
    after_0:
    // 0x808001AC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x808001B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001B4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x808001B8: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x808001BC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x808001C0: jal         0x800C810C
    // 0x808001C4: lw          $a1, 0x98($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X98);
    func_800C810C(rdram, ctx);
        goto after_1;
    // 0x808001C4: lw          $a1, 0x98($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X98);
    after_1:
    // 0x808001C8: b           L_808001F0
    // 0x808001CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001F0;
    // 0x808001CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_808001D4:
    // 0x808001D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808001D8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808001DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808001E4: jal         0x800EFA4C
    // 0x808001E8: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x808001E8: nop

    after_2:
    // 0x808001EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001F0:
    // 0x808001F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

;}
RECOMP_FUNC void bamovespline_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800204: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80800208: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8080020C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800210: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80800214: lbu         $t6, 0x90($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X90);
    // 0x80800218: beql        $t6, $at, L_8080022C
    if (ctx->r14 == ctx->r1) {
        // 0x8080021C: lwc1        $f4, 0xA8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0XA8);
            goto L_8080022C;
    }
    goto skip_0;
    // 0x8080021C: lwc1        $f4, 0xA8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA8);
    skip_0:
    // 0x80800220: b           L_808002B0
    // 0x80800224: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808002B0;
    // 0x80800224: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800228: lwc1        $f4, 0xA8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA8);
L_8080022C:
    // 0x8080022C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800230: nop

    // 0x80800234: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80800238: nop

    // 0x8080023C: bc1fl       L_80800250
    if (!c1cs) {
        // 0x80800240: lh          $a0, 0x94($v0)
        ctx->r4 = MEM_H(ctx->r2, 0X94);
            goto L_80800250;
    }
    goto skip_1;
    // 0x80800240: lh          $a0, 0x94($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X94);
    skip_1:
    // 0x80800244: b           L_808002B0
    // 0x80800248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808002B0;
    // 0x80800248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080024C: lh          $a0, 0x94($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X94);
L_80800250:
    // 0x80800250: jal         0x800D7520
    // 0x80800254: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800D7520(rdram, ctx);
        goto after_0;
    // 0x80800254: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800258: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8080025C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800264: lw          $t7, 0xC8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC8);
    // 0x80800268: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8080026C: jal         0x800C7A68
    // 0x80800270: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    func_800C7A68(rdram, ctx);
        goto after_1;
    // 0x80800270: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    after_1:
    // 0x80800274: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800278: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8080027C: jal         0x800C7A68
    // 0x80800280: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800C7A68(rdram, ctx);
        goto after_2;
    // 0x80800280: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80800284: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80800288: jal         0x800EEB40
    // 0x8080028C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800EEB40(rdram, ctx);
        goto after_3;
    // 0x8080028C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x80800290: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800294: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800298: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8080029C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x808002A0: nop

    // 0x808002A4: bc1fl       L_808002B4
    if (!c1cs) {
        // 0x808002A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002B4;
    }
    goto skip_2;
    // 0x808002A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x808002AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002B0:
    // 0x808002B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002B4:
    // 0x808002B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808002B8: jr          $ra
    // 0x808002BC: nop

    return;
    // 0x808002BC: nop

;}
RECOMP_FUNC void bamovespline_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808002C4: jr          $ra
    // 0x808002C8: lbu         $v0, 0x91($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X91);
    return;
    // 0x808002C8: lbu         $v0, 0x91($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X91);
;}
RECOMP_FUNC void bamovespline_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002CC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808002D0: jr          $ra
    // 0x808002D4: lbu         $v0, 0x92($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X92);
    return;
    // 0x808002D4: lbu         $v0, 0x92($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X92);
;}
RECOMP_FUNC void bamovespline_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808002DC: lbu         $v0, 0x90($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X90);
    // 0x808002E0: xori        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 ^ 0X4;
    // 0x808002E4: jr          $ra
    // 0x808002E8: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x808002E8: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void bamovespline_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002EC: jr          $ra
    // 0x808002F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808002F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bamovespline_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002FC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800304: jal         0x800000F4
    // 0x80800308: sb          $zero, 0x90($t6)
    MEM_B(0X90, ctx->r14) = 0;
    func_808000F4_bamovespline(rdram, ctx);
        goto after_0;
    // 0x80800308: sb          $zero, 0x90($t6)
    MEM_B(0X90, ctx->r14) = 0;
    after_0:
    // 0x8080030C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800314: jr          $ra
    // 0x80800318: nop

    return;
    // 0x80800318: nop

;}
RECOMP_FUNC void bamovespline_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080031C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800320: jr          $ra
    // 0x80800324: sh          $a1, 0x94($t6)
    MEM_H(0X94, ctx->r14) = ctx->r5;
    return;
    // 0x80800324: sh          $a1, 0x94($t6)
    MEM_H(0X94, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bamovespline_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080032C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800330: jal         0x800000F4
    // 0x80800334: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808000F4_bamovespline(rdram, ctx);
        goto after_0;
    // 0x80800334: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080033C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800340: jr          $ra
    // 0x80800344: nop

    return;
    // 0x80800344: nop

;}
RECOMP_FUNC void bamovespline_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080034C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800350: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800354: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800358: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8080035C: jal         0x800000F4
    // 0x80800360: swc1        $f12, 0x98($t6)
    MEM_W(0X98, ctx->r14) = ctx->f12.u32l;
    func_808000F4_bamovespline(rdram, ctx);
        goto after_0;
    // 0x80800360: swc1        $f12, 0x98($t6)
    MEM_W(0X98, ctx->r14) = ctx->f12.u32l;
    after_0:
    // 0x80800364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080036C: jr          $ra
    // 0x80800370: nop

    return;
    // 0x80800370: nop

;}
RECOMP_FUNC void func_80800374_bamovespline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800374: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080037C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800380: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80800384: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800388: jal         0x800D7520
    // 0x8080038C: lh          $a0, 0x94($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X94);
    func_800D7520(rdram, ctx);
        goto after_0;
    // 0x8080038C: lh          $a0, 0x94($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X94);
    after_0:
    // 0x80800390: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800394: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x80800398: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8080039C: jal         0x800EE7F8
    // 0x808003A0: addiu       $a1, $a1, 0x9C
    ctx->r5 = ADD32(ctx->r5, 0X9C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808003A0: addiu       $a1, $a1, 0x9C
    ctx->r5 = ADD32(ctx->r5, 0X9C);
    after_1:
    // 0x808003A4: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x808003A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808003AC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x808003B0: jal         0x800C7A68
    // 0x808003B4: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    func_800C7A68(rdram, ctx);
        goto after_2;
    // 0x808003B4: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    after_2:
    // 0x808003B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x808003BC: jal         0x800F1DF4
    // 0x808003C0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F1DF4(rdram, ctx);
        goto after_3;
    // 0x808003C0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x808003C4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x808003C8: jal         0x8009EF04
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_4;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808003D4: nop

    // 0x808003D8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808003DC: nop

    // 0x808003E0: bc1t        L_8080044C
    if (c1cs) {
        // 0x808003E4: nop
    
            goto L_8080044C;
    }
    // 0x808003E4: nop

    // 0x808003E8: jal         0x8009EEB8
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_5;
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808003F0: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x808003F4: jal         0x800F1DCC
    // 0x808003F8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_6;
    // 0x808003F8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_6:
    // 0x808003FC: jal         0x800F2100
    // 0x80800400: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_7;
    // 0x80800400: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x80800404: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800408: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800410: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800414: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800418: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8080041C: bc1fl       L_80800438
    if (!c1cs) {
        // 0x80800420: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_80800438;
    }
    goto skip_0;
    // 0x80800420: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x80800424: jal         0x8009B9C0
    // 0x80800428: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_8;
    // 0x80800428: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_8:
    // 0x8080042C: b           L_8080044C
    // 0x80800430: nop

        goto L_8080044C;
    // 0x80800430: nop

    // 0x80800434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_80800438:
    // 0x80800438: jal         0x800136E4
    // 0x8080043C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_800136E4(rdram, ctx);
        goto after_9;
    // 0x8080043C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_9:
    // 0x80800440: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800444: jal         0x8009B9C0
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_8080044C:
    // 0x8080044C: jal         0x80000000
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bamovespline(rdram, ctx);
        goto after_11;
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800454: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80800458: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8080045C: jal         0x800F1DCC
    // 0x80800460: lwc1        $f14, 0x40($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X40);
    func_800F1DCC(rdram, ctx);
        goto after_12;
    // 0x80800460: lwc1        $f14, 0x40($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X40);
    after_12:
    // 0x80800464: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x80800468: jal         0x800F2100
    // 0x8080046C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_13;
    // 0x8080046C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_13:
    // 0x80800470: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800474: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800478: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x8080047C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80800480: nop

    // 0x80800484: bc1fl       L_80800494
    if (!c1cs) {
        // 0x80800488: lw          $t0, 0xC8($s0)
        ctx->r8 = MEM_W(ctx->r16, 0XC8);
            goto L_80800494;
    }
    goto skip_1;
    // 0x80800488: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    skip_1:
    // 0x8080048C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800490: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
L_80800494:
    // 0x80800494: sb          $t9, 0x92($t0)
    MEM_B(0X92, ctx->r8) = ctx->r25;
    // 0x80800498: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8080049C: jal         0x800EEFFC
    // 0x808004A0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EEFFC(rdram, ctx);
        goto after_14;
    // 0x808004A0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_14:
    // 0x808004A4: jal         0x800D8FF8
    // 0x808004A8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_15;
    // 0x808004A8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_15:
    // 0x808004AC: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808004B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x808004B4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x808004B8: mul.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x808004BC: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x808004C0: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x808004C4: swc1        $f2, 0xA8($t1)
    MEM_W(0XA8, ctx->r9) = ctx->f2.u32l;
    // 0x808004C8: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x808004CC: jal         0x800EFB24
    // 0x808004D0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EFB24(rdram, ctx);
        goto after_16;
    // 0x808004D0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_16:
    // 0x808004D4: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x808004D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x808004DC: jal         0x800EF368
    // 0x808004E0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EF368(rdram, ctx);
        goto after_17;
    // 0x808004E0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_17:
    // 0x808004E4: jal         0x800F2100
    // 0x808004E8: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    func_800F2100(rdram, ctx);
        goto after_18;
    // 0x808004E8: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    after_18:
    // 0x808004EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808004F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004F4: nop

    // 0x808004F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808004FC: nop

    // 0x80800500: bc1fl       L_8080051C
    if (!c1cs) {
        // 0x80800504: lw          $v0, 0xC8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC8);
            goto L_8080051C;
    }
    goto skip_2;
    // 0x80800504: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    skip_2:
    // 0x80800508: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8080050C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x80800510: jal         0x800EF334
    // 0x80800514: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EF334(rdram, ctx);
        goto after_19;
    // 0x80800514: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_19:
    // 0x80800518: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8080051C:
    // 0x8080051C: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80800520: jal         0x800EF04C
    // 0x80800524: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_20;
    // 0x80800524: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_20:
    // 0x80800528: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8080052C: jal         0x800EEAD4
    // 0x80800530: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EEAD4(rdram, ctx);
        goto after_21;
    // 0x80800530: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_21:
    // 0x80800534: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800538: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8080053C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800540: jal         0x800EEAD4
    // 0x80800544: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EEAD4(rdram, ctx);
        goto after_22;
    // 0x80800544: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_22:
    // 0x80800548: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800554: nop

    // 0x80800558: bc1fl       L_8080056C
    if (!c1cs) {
        // 0x8080055C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080056C;
    }
    goto skip_3;
    // 0x8080055C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80800560: jal         0x800000F4
    // 0x80800564: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_808000F4_bamovespline(rdram, ctx);
        goto after_23;
    // 0x80800564: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_23:
    // 0x80800568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080056C:
    // 0x8080056C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800570: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800574: jr          $ra
    // 0x80800578: nop

    return;
    // 0x80800578: nop

;}
RECOMP_FUNC void func_8080057C_bamovespline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080057C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800588: jal         0x8009EF04
    // 0x8080058C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x8080058C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800594: nop

    // 0x80800598: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080059C: nop

    // 0x808005A0: bc1t        L_808005BC
    if (c1cs) {
        // 0x808005A4: nop
    
            goto L_808005BC;
    }
    // 0x808005A4: nop

    // 0x808005A8: jal         0x8009EEAC
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEAC(rdram, ctx);
        goto after_1;
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808005B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005B4: jal         0x8009B9C0
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_2;
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_808005BC:
    // 0x808005BC: jal         0x80000000
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bamovespline(rdram, ctx);
        goto after_3;
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808005C4: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x808005C8: jal         0x800D7520
    // 0x808005CC: lh          $a0, 0x94($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X94);
    func_800D7520(rdram, ctx);
        goto after_4;
    // 0x808005CC: lh          $a0, 0x94($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X94);
    after_4:
    // 0x808005D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808005D4: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x808005D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808005DC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x808005E0: jal         0x800C7A68
    // 0x808005E4: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    func_800C7A68(rdram, ctx);
        goto after_5;
    // 0x808005E4: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    after_5:
    // 0x808005E8: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x808005EC: jal         0x800EEFFC
    // 0x808005F0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EEFFC(rdram, ctx);
        goto after_6;
    // 0x808005F0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_6:
    // 0x808005F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F8: jal         0x8009BB18
    // 0x808005FC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_8009BB18(rdram, ctx);
        goto after_7;
    // 0x808005FC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80800600: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800604: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800608: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080060C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800610: nop

    // 0x80800614: bc1fl       L_80800624
    if (!c1cs) {
        // 0x80800618: lw          $t8, 0xC8($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC8);
            goto L_80800624;
    }
    goto skip_0;
    // 0x80800618: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    skip_0:
    // 0x8080061C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80800620: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
L_80800624:
    // 0x80800624: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800628: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8080062C: lw          $a1, 0x98($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X98);
    // 0x80800630: jal         0x800C7FD4
    // 0x80800634: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_800C7FD4(rdram, ctx);
        goto after_8;
    // 0x80800634: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x80800638: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080063C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800640: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x80800644: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800648: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8080064C: swc1        $f0, 0x98($t9)
    MEM_W(0X98, ctx->r25) = ctx->f0.u32l;
    // 0x80800650: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x80800654: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800658: bc1f        L_80800664
    if (!c1cs) {
        // 0x8080065C: swc1        $f2, 0xA8($t0)
        MEM_W(0XA8, ctx->r8) = ctx->f2.u32l;
            goto L_80800664;
    }
    // 0x8080065C: swc1        $f2, 0xA8($t0)
    MEM_W(0XA8, ctx->r8) = ctx->f2.u32l;
    // 0x80800660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800664:
    // 0x80800664: beq         $v0, $zero, L_80800694
    if (ctx->r2 == 0) {
        // 0x80800668: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800694;
    }
    // 0x80800668: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8080066C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80800670: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800674: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800678: lwc1        $f16, 0x98($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X98);
    // 0x8080067C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800680: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80800684: nop

    // 0x80800688: bc1fl       L_80800698
    if (!c1cs) {
        // 0x8080068C: c.lt.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_80800698;
    }
    goto skip_1;
    // 0x8080068C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    skip_1:
    // 0x80800690: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80800694:
    // 0x80800694: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
L_80800698:
    // 0x80800698: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8080069C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808006A0: bc1f        L_808006AC
    if (!c1cs) {
        // 0x808006A4: sb          $v1, 0x91($t2)
        MEM_B(0X91, ctx->r10) = ctx->r3;
            goto L_808006AC;
    }
    // 0x808006A4: sb          $v1, 0x91($t2)
    MEM_B(0X91, ctx->r10) = ctx->r3;
    // 0x808006A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808006AC:
    // 0x808006AC: beq         $v0, $zero, L_808006D8
    if (ctx->r2 == 0) {
        // 0x808006B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808006D8;
    }
    // 0x808006B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808006B4: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x808006B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808006BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x808006C0: lwc1        $f6, 0x98($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X98);
    // 0x808006C4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x808006C8: nop

    // 0x808006CC: bc1fl       L_808006DC
    if (!c1cs) {
        // 0x808006D0: lw          $t4, 0xC8($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XC8);
            goto L_808006DC;
    }
    goto skip_2;
    // 0x808006D0: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    skip_2:
    // 0x808006D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_808006D8:
    // 0x808006D8: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
L_808006DC:
    // 0x808006DC: sb          $v1, 0x92($t4)
    MEM_B(0X92, ctx->r12) = ctx->r3;
    // 0x808006E0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x808006E4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808006E8: lw          $a1, 0x98($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X98);
    // 0x808006EC: jal         0x800C7A68
    // 0x808006F0: addiu       $a2, $v0, 0x4
    ctx->r6 = ADD32(ctx->r2, 0X4);
    func_800C7A68(rdram, ctx);
        goto after_9;
    // 0x808006F0: addiu       $a2, $v0, 0x4
    ctx->r6 = ADD32(ctx->r2, 0X4);
    after_9:
    // 0x808006F4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x808006F8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x808006FC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x80800700: jal         0x800EFB24
    // 0x80800704: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_800EFB24(rdram, ctx);
        goto after_10;
    // 0x80800704: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_10:
    // 0x80800708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080070C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800710: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800714: jr          $ra
    // 0x80800718: nop

    return;
    // 0x80800718: nop

;}
RECOMP_FUNC void bamovespline_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080071C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800728: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8080072C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800730: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800734: lbu         $v0, 0x90($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X90);
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080073C: beq         $v0, $at, L_8080075C
    if (ctx->r2 == ctx->r1) {
        // 0x80800740: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080075C;
    }
    // 0x80800740: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800744: beq         $v0, $at, L_80800798
    if (ctx->r2 == ctx->r1) {
        // 0x80800748: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800798;
    }
    // 0x80800748: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080074C: beq         $v0, $at, L_808007A8
    if (ctx->r2 == ctx->r1) {
        // 0x80800750: nop
    
            goto L_808007A8;
    }
    // 0x80800750: nop

    // 0x80800754: b           L_808007B4
    // 0x80800758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808007B4;
    // 0x80800758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080075C:
    // 0x8080075C: jal         0x8009C128
    // 0x80800760: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800760: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80800764: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x80800768: jal         0x800D7520
    // 0x8080076C: lh          $a0, 0x94($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X94);
    func_800D7520(rdram, ctx);
        goto after_1;
    // 0x8080076C: lh          $a0, 0x94($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X94);
    after_1:
    // 0x80800770: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800774: jal         0x800C82CC
    // 0x80800778: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800C82CC(rdram, ctx);
        goto after_2;
    // 0x80800778: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x8080077C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800784: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800788: jal         0x800000F4
    // 0x8080078C: swc1        $f0, 0x98($t8)
    MEM_W(0X98, ctx->r24) = ctx->f0.u32l;
    func_808000F4_bamovespline(rdram, ctx);
        goto after_3;
    // 0x8080078C: swc1        $f0, 0x98($t8)
    MEM_W(0X98, ctx->r24) = ctx->f0.u32l;
    after_3:
    // 0x80800790: b           L_808007B4
    // 0x80800794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808007B4;
    // 0x80800794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800798:
    // 0x80800798: jal         0x80000374
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800374_bamovespline(rdram, ctx);
        goto after_4;
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808007A0: b           L_808007B4
    // 0x808007A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808007B4;
    // 0x808007A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808007A8:
    // 0x808007A8: jal         0x8000057C
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080057C_bamovespline(rdram, ctx);
        goto after_5;
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808007B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808007B4:
    // 0x808007B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808007BC: jr          $ra
    // 0x808007C0: nop

    return;
    // 0x808007C0: nop

    // 0x808007C4: nop

    // 0x808007C8: nop

    // 0x808007CC: nop

;}
RECOMP_FUNC void func_80800000_bamovethrust(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8080000C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800010: jal         0x8009BFCC
    // 0x80800014: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_8009BFCC(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800018: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8080001C: jal         0x8009C984
    // 0x80800020: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x80800020: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80800024: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800028: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080002C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800030: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800034: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800038: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8080003C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80800040: jal         0x800EF4E4
    // 0x80800044: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_2;
    // 0x80800044: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80800048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080004C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void bamovethrust_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: jr          $ra
    // 0x8080005C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080005C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bamovethrust_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800064: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800068: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8080006C: swc1        $f0, 0x8C($t6)
    MEM_W(0X8C, ctx->r14) = ctx->f0.u32l;
    // 0x80800070: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80800074: swc1        $f0, 0x84($t7)
    MEM_W(0X84, ctx->r15) = ctx->f0.u32l;
    // 0x80800078: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x8080007C: jr          $ra
    // 0x80800080: swc1        $f0, 0x88($t8)
    MEM_W(0X88, ctx->r24) = ctx->f0.u32l;
    return;
    // 0x80800080: swc1        $f0, 0x88($t8)
    MEM_W(0X88, ctx->r24) = ctx->f0.u32l;
;}
RECOMP_FUNC void bamovethrust_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080008C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800090: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x80800094: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80800098: jal         0x80000000
    // 0x8080009C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_80800000_bamovethrust(rdram, ctx);
        goto after_0;
    // 0x8080009C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x808000A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void bamovethrust_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000B4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808000B8: jr          $ra
    // 0x808000BC: swc1        $f12, 0x8C($t6)
    MEM_W(0X8C, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808000BC: swc1        $f12, 0x8C($t6)
    MEM_W(0X8C, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bamovethrust_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000C4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808000C8: jr          $ra
    // 0x808000CC: swc1        $f12, 0x84($t6)
    MEM_W(0X84, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808000CC: swc1        $f12, 0x84($t6)
    MEM_W(0X84, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bamovethrust_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808000D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000E0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x808000E4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808000E8: jal         0x80000000
    // 0x808000EC: lw          $a2, 0x8C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8C);
    func_80800000_bamovethrust(rdram, ctx);
        goto after_0;
    // 0x808000EC: lw          $a2, 0x8C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8C);
    after_0:
    // 0x808000F0: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x808000F4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808000F8: jal         0x800EE7F8
    // 0x808000FC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808000FC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_1:
    // 0x80800100: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x80800104: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800108: jal         0x800EF334
    // 0x8080010C: lw          $a1, 0x84($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X84);
    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x8080010C: lw          $a1, 0x84($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X84);
    after_2:
    // 0x80800110: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x80800114: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800118: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8080011C: jal         0x800EE780
    // 0x80800120: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE780(rdram, ctx);
        goto after_3;
    // 0x80800120: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x80800124: jal         0x800D8FF8
    // 0x80800128: nop

    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x80800128: nop

    after_4:
    // 0x8080012C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80800130: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800134: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80800138: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8080013C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80800140: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800144: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80800148: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x8080014C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80800150: lwc1        $f2, 0x38($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80800154: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80800158: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8080015C: nop

    // 0x80800160: bc1fl       L_80800174
    if (!c1cs) {
        // 0x80800164: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_80800174;
    }
    goto skip_0;
    // 0x80800164: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    skip_0:
    // 0x80800168: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8080016C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80800170: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
L_80800174:
    // 0x80800174: jal         0x800EFA20
    // 0x80800178: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    func_800EFA20(rdram, ctx);
        goto after_5;
    // 0x80800178: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    after_5:
    // 0x8080017C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80800180: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80800184: jal         0x800EF04C
    // 0x80800188: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x80800188: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_6:
    // 0x8080018C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800190: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800194: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800198: jr          $ra
    // 0x8080019C: nop

    return;
    // 0x8080019C: nop

;}
RECOMP_FUNC void bamovethrust_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x808001A4: jr          $ra
    // 0x808001A8: lwc1        $f0, 0x8C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8C);
    return;
    // 0x808001A8: lwc1        $f0, 0x8C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x808001AC: nop

;}
RECOMP_FUNC void bamum_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void func_80800008_bamum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080000C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x80800010: jr          $ra
    // 0x80800014: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    return;
    // 0x80800014: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80800018_bamum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800018: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8080001C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800020: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800024: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800028: jal         0x800B5BE4
    // 0x8080002C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x8080002C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x80800030: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800034: lw          $t6, 0xD0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD0);
    // 0x80800038: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80800044: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800048: nop

    // 0x8080004C: bc1tl       L_808001B4
    if (c1cs) {
        // 0x80800050: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_808001B4;
    }
    goto skip_0;
    // 0x80800050: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80800054: jal         0x8009C128
    // 0x80800058: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800058: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800060: jal         0x8009C15C
    // 0x80800064: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_8009C15C(rdram, ctx);
        goto after_2;
    // 0x80800064: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x80800068: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x8080006C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80800070: jal         0x800EFB24
    // 0x80800074: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x80800074: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_3:
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080007C: jal         0x80092C6C
    // 0x80800080: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80092C6C(rdram, ctx);
        goto after_4;
    // 0x80800080: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_4:
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: jal         0x80092C48
    // 0x8080008C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80092C48(rdram, ctx);
        goto after_5;
    // 0x8080008C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x80800090: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80800094: jal         0x800EF04C
    // 0x80800098: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x80800098: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_6:
    // 0x8080009C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808000A0: jal         0x800EF04C
    // 0x808000A4: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x808000A4: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_7:
    // 0x808000A8: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x808000AC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x808000B0: jal         0x800EFB24
    // 0x808000B4: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x808000B4: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_8:
    // 0x808000B8: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x808000BC: jal         0x800F1A88
    // 0x808000C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800F1A88(rdram, ctx);
        goto after_9;
    // 0x808000C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_9:
    // 0x808000C4: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808000C8: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x808000CC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x808000D0: jal         0x800EFD24
    // 0x808000D4: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    func_800EFD24(rdram, ctx);
        goto after_10;
    // 0x808000D4: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    after_10:
    // 0x808000D8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x808000DC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x808000E0: jal         0x800EE780
    // 0x808000E4: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x808000E4: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_11:
    // 0x808000E8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x808000EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808000F0: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808000F4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x808000F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808000FC: sub.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x80800100: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800104: addiu       $t7, $zero, 0x190
    ctx->r15 = ADD32(0, 0X190);
    // 0x80800108: add.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8080010C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80800110: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800114: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800118: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    // 0x8080011C: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80800120: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80800124: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80800128: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8080012C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80800130: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80800134: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800138: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8080013C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800140: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80800144: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x80800148: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8080014C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80800150: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80800154: jal         0x800BA994
    // 0x80800158: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_800BA994(rdram, ctx);
        goto after_12;
    // 0x80800158: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_12:
    // 0x8080015C: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(40, 0X280) << 16);
    // 0x80800160: addiu       $t8, $t8, 0x280
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(40, 0X280));
    // 0x80800164: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800168: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080016C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800174: jal         0x800BABB8
    // 0x80800178: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_13;
    // 0x80800178: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_13:
    // 0x8080017C: lw          $t9, 0xD0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XD0);
    // 0x80800180: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80800184: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800188: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8080018C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800194: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800198: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080019C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808001A0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x808001A4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808001A8: jal         0x800BA22C
    // 0x808001AC: nop

    func_800BA22C(rdram, ctx);
        goto after_14;
    // 0x808001AC: nop

    after_14:
    // 0x808001B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808001B4:
    // 0x808001B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808001B8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void bamum_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: jr          $ra
    // 0x808001C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808001C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bamum_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D4: jal         0x80000008
    // 0x808001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800008_bamum(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808001E4: jal         0x8009ADF0
    // 0x808001E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x808001E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808001EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

;}
RECOMP_FUNC void bamum_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800204: jal         0x80000018
    // 0x80800208: nop

    func_80800018_bamum(rdram, ctx);
        goto after_0;
    // 0x80800208: nop

    after_0:
    // 0x8080020C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800214: jr          $ra
    // 0x80800218: nop

    return;
    // 0x80800218: nop

;}
RECOMP_FUNC void bamum_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080021C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800220: beq         $a1, $zero, L_80800248
    if (ctx->r5 == 0) {
        // 0x80800224: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80800248;
    }
    // 0x80800224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800228: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8080022C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800230: jal         0x8009ADF0
    // 0x80800234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80800234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800238: jal         0x80000008
    // 0x8080023C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800008_bamum(rdram, ctx);
        goto after_1;
    // 0x8080023C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800240: b           L_80800258
    // 0x80800244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800258;
    // 0x80800244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800248:
    // 0x80800248: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8080024C: jal         0x8009ADF0
    // 0x80800250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_2;
    // 0x80800250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80800254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800258:
    // 0x80800258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080025C: jr          $ra
    // 0x80800260: nop

    return;
    // 0x80800260: nop

;}
RECOMP_FUNC void bamum_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800264: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800268: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x8080026C: jr          $ra
    // 0x80800270: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800270: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    // 0x80800274: nop

    // 0x80800278: nop

    // 0x8080027C: nop

;}
RECOMP_FUNC void bapackctrl_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_80800008_bapackctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80000080
    // 0x80800014: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    bapackctrl_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800018: beq         $v0, $zero, L_80800048
    if (ctx->r2 == 0) {
        // 0x8080001C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80800048;
    }
    // 0x8080001C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800020: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(41, 0X380) << 16);
    // 0x80800024: lwc1        $f0, 0x380($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0X380));
    // 0x80800028: lui         $a3, 0x4026
    ctx->r7 = S32(0X4026 << 16);
    // 0x8080002C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800030: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800034: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800038: jal         0x800EFA4C
    // 0x8080003C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x8080003C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x80800040: b           L_80800068
    // 0x80800044: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_80800068;
    // 0x80800044: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80800048:
    // 0x80800048: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080004C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80800050: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800054: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800058: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8080005C: jal         0x800EFA4C
    // 0x80800060: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80800060: nop

    after_2:
    // 0x80800064: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80800068:
    // 0x80800068: jal         0x800984F0
    // 0x8080006C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800984F0(rdram, ctx);
        goto after_3;
    // 0x8080006C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800074: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800078: jr          $ra
    // 0x8080007C: nop

    return;
    // 0x8080007C: nop

;}
RECOMP_FUNC void bapackctrl_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800088: jal         0x8009EA58
    // 0x8080008C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009EA58(rdram, ctx);
        goto after_0;
    // 0x8080008C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800098: jr          $ra
    // 0x8080009C: nop

    return;
    // 0x8080009C: nop

;}
RECOMP_FUNC void bapackctrl_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000A8: jal         0x80000150
    // 0x808000AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    bapackctrl_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808000AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
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
RECOMP_FUNC void bapackctrl_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x808000CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808000D0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x808000D4: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x808000D8: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x808000DC: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x808000E0: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x808000E4: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x808000E8: lw          $a0, 0xD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD8);
    // 0x808000EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x808000F0: jal         0x800EFD24
    // 0x808000F4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x808000F4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x808000F8: jal         0x80000008
    // 0x808000FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800008_bapackctrl(rdram, ctx);
        goto after_1;
    // 0x808000FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800108: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x8080010C: jal         0x80000150
    // 0x80800110: sb          $zero, 0x1C($t8)
    MEM_B(0X1C, ctx->r24) = 0;
    bapackctrl_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800110: sb          $zero, 0x1C($t8)
    MEM_B(0X1C, ctx->r24) = 0;
    after_2:
    // 0x80800114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080011C: jr          $ra
    // 0x80800120: nop

    return;
    // 0x80800120: nop

;}
RECOMP_FUNC void bapackctrl_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080012C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800130: jal         0x8009EADC
    // 0x80800134: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8009EADC(rdram, ctx);
        goto after_0;
    // 0x80800134: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800138: jal         0x80000008
    // 0x8080013C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800008_bapackctrl(rdram, ctx);
        goto after_1;
    // 0x8080013C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800148: jr          $ra
    // 0x8080014C: nop

    return;
    // 0x8080014C: nop

;}
RECOMP_FUNC void bapackctrl_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800150: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800154: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800158: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080015C: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80800160: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x80800164: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800168: beq         $at, $zero, L_80800338
    if (ctx->r1 == 0) {
        // 0x8080016C: sb          $a1, 0x1C($t6)
        MEM_B(0X1C, ctx->r14) = ctx->r5;
            goto L_80800338;
    }
    // 0x8080016C: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
    // 0x80800170: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800174: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(41, 0X384) << 16);
    // 0x80800178: addu        $at, $at, $t7
    gpr jr_addend_80800180 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8080017C: lw          $t7, 0x384($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(41, 0X384));
    // 0x80800180: jr          $t7
    // 0x80800184: nop

    switch (jr_addend_80800180 >> 2) {
        case 0: goto L_80800188; break;
        case 1: goto L_808001A0; break;
        case 2: goto L_808001B8; break;
        case 3: goto L_8080020C; break;
        case 4: goto L_80800284; break;
        case 5: goto L_808002F4; break;
        default: switch_error(__func__, 0x80800180, 0x80800384);
    }
    // 0x80800184: nop

L_80800188:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800190: jal         0x80098480
    // 0x80800194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098480(rdram, ctx);
        goto after_0;
    // 0x80800194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80800198: b           L_8080033C
    // 0x8080019C: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
        goto L_8080033C;
    // 0x8080019C: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_808001A0:
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808001A8: jal         0x80098480
    // 0x808001AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098480(rdram, ctx);
        goto after_1;
    // 0x808001AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808001B0: b           L_8080033C
    // 0x808001B4: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
        goto L_8080033C;
    // 0x808001B4: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_808001B8:
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001C0: jal         0x80098480
    // 0x808001C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098480(rdram, ctx);
        goto after_2;
    // 0x808001C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x808001C8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808001CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808001D0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808001D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001D8: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x808001DC: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x808001E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001E4: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x808001E8: lw          $t9, 0xD8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XD8);
    // 0x808001EC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x808001F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001F4: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x808001F8: lw          $t0, 0xD8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD8);
    // 0x808001FC: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x80800200: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80800204: b           L_80800338
    // 0x80800208: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
        goto L_80800338;
    // 0x80800208: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
L_8080020C:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800214: jal         0x80098480
    // 0x80800218: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098480(rdram, ctx);
        goto after_3;
    // 0x80800218: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8080021C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800220: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800224: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800228: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080022C: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x80800230: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x80800234: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800238: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
    // 0x8080023C: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x80800240: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800244: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800248: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x8080024C: lw          $t4, 0xD8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD8);
    // 0x80800250: lui         $a2, 0xBE4C
    ctx->r6 = S32(0XBE4C << 16);
    // 0x80800254: lui         $a3, 0xBECC
    ctx->r7 = S32(0XBECC << 16);
    // 0x80800258: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    // 0x8080025C: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x80800260: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800264: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800268: swc1        $f18, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f18.u32l;
    // 0x8080026C: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    // 0x80800270: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800274: jal         0x800EFA4C
    // 0x80800278: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x80800278: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_4:
    // 0x8080027C: b           L_8080033C
    // 0x80800280: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
        goto L_8080033C;
    // 0x80800280: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_80800284:
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080028C: jal         0x80098480
    // 0x80800290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098480(rdram, ctx);
        goto after_5;
    // 0x80800290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80800294: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800298: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080029C: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x808002A0: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x808002A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002A8: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x808002AC: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x808002B0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x808002B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002B8: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x808002BC: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x808002C0: lui         $a2, 0xBE4C
    ctx->r6 = S32(0XBE4C << 16);
    // 0x808002C4: lui         $a3, 0xBECC
    ctx->r7 = S32(0XBECC << 16);
    // 0x808002C8: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x808002CC: lw          $t9, 0xD8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XD8);
    // 0x808002D0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808002D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808002D8: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
    // 0x808002DC: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    // 0x808002E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808002E4: jal         0x800EFA4C
    // 0x808002E8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFA4C(rdram, ctx);
        goto after_6;
    // 0x808002E8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_6:
    // 0x808002EC: b           L_8080033C
    // 0x808002F0: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
        goto L_8080033C;
    // 0x808002F0: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_808002F4:
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002FC: jal         0x80098480
    // 0x80800300: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098480(rdram, ctx);
        goto after_7;
    // 0x80800300: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80800304: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800308: lw          $t0, 0xD8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD8);
    // 0x8080030C: swc1        $f8, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f8.u32l;
    // 0x80800310: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x80800314: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800318: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8080031C: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80800320: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x80800324: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x80800328: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x8080032C: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    // 0x80800330: jal         0x800EFD24
    // 0x80800334: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFD24(rdram, ctx);
        goto after_8;
    // 0x80800334: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_8:
L_80800338:
    // 0x80800338: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_8080033C:
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800344: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80800348: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x8080034C: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80800350: jal         0x80098494
    // 0x80800354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80098494(rdram, ctx);
        goto after_9;
    // 0x80800354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x80800358: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800360: jal         0x800984CC
    // 0x80800364: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800984CC(rdram, ctx);
        goto after_10;
    // 0x80800364: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_10:
    // 0x80800368: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080036C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800374: jr          $ra
    // 0x80800378: nop

    return;
    // 0x80800378: nop

    // 0x8080037C: nop

;}
RECOMP_FUNC void func_80800000_bapreload(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80800000:
    // 0x80800000: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x80800004: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800008: sltiu       $at, $t6, 0x11
    ctx->r1 = ctx->r14 < 0X11 ? 1 : 0;
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: beq         $at, $zero, L_80800070
    if (ctx->r1 == 0) {
        // 0x80800014: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80800070;
    }
    // 0x80800014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800018: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080001C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(42, 0X250) << 16);
    // 0x80800020: addu        $at, $at, $t6
    gpr jr_addend_80800028 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800024: lw          $t6, 0x250($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(42, 0X250));
    // 0x80800028: jr          $t6
    // 0x8080002C: nop

    switch (jr_addend_80800028 >> 2) {
        case 0: goto L_80800054; break;
        case 1: goto L_80800070; break;
        case 2: goto L_80800070; break;
        case 3: goto L_80800070; break;
        case 4: goto L_80800070; break;
        case 5: goto L_80800030; break;
        case 6: goto L_80800070; break;
        case 7: goto L_80800070; break;
        case 8: goto L_80800070; break;
        case 9: goto L_80800070; break;
        case 10: goto L_80800048; break;
        case 11: goto L_8080003C; break;
        case 12: goto L_80800070; break;
        case 13: goto L_80800070; break;
        case 14: goto L_80800070; break;
        case 15: goto L_80800070; break;
        case 16: goto L_80800060; break;
        case 17: goto L_80800000; break;
        case 18: goto L_80800000; break;
        case 19: goto L_80800000; break;
        default: switch_error(__func__, 0x80800028, 0x80800250);
    }
    // 0x8080002C: nop

L_80800030:
    // 0x80800030: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(42, 0X310) << 16);
    // 0x80800034: b           L_80800080
    // 0x80800038: addiu       $v1, $v1, 0x310
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X310));
        goto L_80800080;
    // 0x80800038: addiu       $v1, $v1, 0x310
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X310));
L_8080003C:
    // 0x8080003C: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(42, 0X320) << 16);
    // 0x80800040: b           L_80800080
    // 0x80800044: addiu       $v1, $v1, 0x320
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X320));
        goto L_80800080;
    // 0x80800044: addiu       $v1, $v1, 0x320
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X320));
L_80800048:
    // 0x80800048: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(42, 0X300) << 16);
    // 0x8080004C: b           L_80800080
    // 0x80800050: addiu       $v1, $v1, 0x300
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X300));
        goto L_80800080;
    // 0x80800050: addiu       $v1, $v1, 0x300
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X300));
L_80800054:
    // 0x80800054: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(42, 0X2F0) << 16);
    // 0x80800058: b           L_80800080
    // 0x8080005C: addiu       $v1, $v1, 0x2F0
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X2F0));
        goto L_80800080;
    // 0x8080005C: addiu       $v1, $v1, 0x2F0
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(42, 0X2F0));
L_80800060:
    // 0x80800060: addiu       $t7, $zero, 0x60E
    ctx->r15 = ADD32(0, 0X60E);
    // 0x80800064: sh          $t7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r15;
    // 0x80800068: b           L_808000EC
    // 0x8080006C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_808000EC;
    // 0x8080006C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_80800070:
    // 0x80800070: addiu       $t8, $zero, 0x607
    ctx->r24 = ADD32(0, 0X607);
    // 0x80800074: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x80800078: b           L_808000EC
    // 0x8080007C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_808000EC;
    // 0x8080007C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_80800080:
    // 0x80800080: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80800084: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80800088: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080008C: jal         0x800EA068
    // 0x80800090: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x80800090: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800094: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800098: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8080009C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x808000A0: beq         $v0, $zero, L_808000D0
    if (ctx->r2 == 0) {
        // 0x808000A4: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_808000D0;
    }
    // 0x808000A4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x808000A8: lw          $a0, 0x184($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X184);
    // 0x808000AC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x808000B0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x808000B4: jal         0x800A940C
    // 0x808000B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800A940C(rdram, ctx);
        goto after_1;
    // 0x808000B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x808000BC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000C0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x808000C4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x808000C8: b           L_808000D4
    // 0x808000CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_808000D4;
    // 0x808000CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_808000D0:
    // 0x808000D0: lw          $a0, 0x184($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X184);
L_808000D4:
    // 0x808000D4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x808000D8: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x808000DC: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x808000E0: sh          $t0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r8;
    // 0x808000E4: lh          $t1, 0x2($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2);
    // 0x808000E8: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
L_808000EC:
    // 0x808000EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000F4: jr          $ra
    // 0x808000F8: nop

    return;
    // 0x808000F8: nop

;}
RECOMP_FUNC void bapreload_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800104: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800108: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8080010C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800110: jal         0x800D3948
    // 0x80800114: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x80800114: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800118: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080011C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800120: beq         $v0, $zero, L_80800138
    if (ctx->r2 == 0) {
        // 0x80800124: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_80800138;
    }
    // 0x80800124: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80800128: jal         0x80000000
    // 0x8080012C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bapreload(rdram, ctx);
        goto after_1;
    // 0x8080012C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800130: b           L_808001BC
    // 0x80800134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001BC;
    // 0x80800134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800138:
    // 0x80800138: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8080013C: bne         $a1, $at, L_80800174
    if (ctx->r5 != ctx->r1) {
        // 0x80800140: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_80800174;
    }
    // 0x80800140: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80800144: jal         0x8009EA2C
    // 0x80800148: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8009EA2C(rdram, ctx);
        goto after_2;
    // 0x80800148: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x8080014C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800150: beq         $v0, $zero, L_80800164
    if (ctx->r2 == 0) {
        // 0x80800154: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_80800164;
    }
    // 0x80800154: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80800158: addiu       $t6, $zero, 0x83A
    ctx->r14 = ADD32(0, 0X83A);
    // 0x8080015C: b           L_8080016C
    // 0x80800160: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
        goto L_8080016C;
    // 0x80800160: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
L_80800164:
    // 0x80800164: addiu       $t7, $zero, 0x61C
    ctx->r15 = ADD32(0, 0X61C);
    // 0x80800168: sh          $t7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r15;
L_8080016C:
    // 0x8080016C: b           L_808001B8
    // 0x80800170: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_808001B8;
    // 0x80800170: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_80800174:
    // 0x80800174: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(42, 0X2A0) << 16);
    // 0x80800178: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8080017C: lh          $t9, 0x2A0($t9)
    ctx->r25 = MEM_H(ctx->r25, (int16_t)RELOC_LO16(42, 0X2A0));
    // 0x80800180: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80800184: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x80800188: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x8080018C: lh          $t0, 0x0($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X0);
    // 0x80800190: bnel        $t0, $zero, L_808001BC
    if (ctx->r8 != 0) {
        // 0x80800194: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808001BC;
    }
    goto skip_0;
    // 0x80800194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800198: lbu         $t1, 0x762C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X762C);
    // 0x8080019C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x808001A0: addiu       $t2, $zero, 0x607
    ctx->r10 = ADD32(0, 0X607);
    // 0x808001A4: bnel        $t1, $at, L_808001B8
    if (ctx->r9 != ctx->r1) {
        // 0x808001A8: sh          $t2, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r10;
            goto L_808001B8;
    }
    goto skip_1;
    // 0x808001A8: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    skip_1:
    // 0x808001AC: b           L_808001B8
    // 0x808001B0: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
        goto L_808001B8;
    // 0x808001B0: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x808001B4: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
L_808001B8:
    // 0x808001B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001BC:
    // 0x808001BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C0: jr          $ra
    // 0x808001C4: nop

    return;
    // 0x808001C4: nop

;}
RECOMP_FUNC void bapreload_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808001CC: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(42, 0X2A2) << 16);
    // 0x808001D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001D4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x808001D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001DC: lh          $v1, 0x2A2($v1)
    ctx->r3 = MEM_H(ctx->r3, (int16_t)RELOC_LO16(42, 0X2A2));
    // 0x808001E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001E4: beq         $a0, $at, L_80800218
    if (ctx->r4 == ctx->r1) {
        // 0x808001E8: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_80800218;
    }
    // 0x808001E8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x808001EC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x808001F0: beq         $a0, $at, L_80800218
    if (ctx->r4 == ctx->r1) {
        // 0x808001F4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80800218;
    }
    // 0x808001F4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x808001F8: bnel        $a0, $at, L_8080023C
    if (ctx->r4 != ctx->r1) {
        // 0x808001FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080023C;
    }
    goto skip_0;
    // 0x808001FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800200: jal         0x8009EA2C
    // 0x80800204: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8009EA2C(rdram, ctx);
        goto after_0;
    // 0x80800204: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80800208: beq         $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x8080020C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    // 0x8080020C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800210: b           L_80800238
    // 0x80800214: addiu       $v1, $zero, 0x62E
    ctx->r3 = ADD32(0, 0X62E);
        goto L_80800238;
    // 0x80800214: addiu       $v1, $zero, 0x62E
    ctx->r3 = ADD32(0, 0X62E);
L_80800218:
    // 0x80800218: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8080021C: jal         0x8009EA2C
    // 0x80800220: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8009EA2C(rdram, ctx);
        goto after_1;
    // 0x80800220: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_1:
    // 0x80800224: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800228: beq         $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x8080022C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80800238;
    }
    // 0x8080022C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800230: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800234: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_80800238:
    // 0x80800238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080023C:
    // 0x8080023C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800240: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800244: jr          $ra
    // 0x80800248: nop

    return;
    // 0x80800248: nop

    // 0x8080024C: nop

;}
RECOMP_FUNC void bapulse_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void bapulse_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x80800014: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800018: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080001C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800020: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800024: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x80800028: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8080002C: jal         0x800F10B4
    // 0x80800030: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x80800030: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80800034: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080003C: jr          $ra
    // 0x80800040: nop

    return;
    // 0x80800040: nop

;}
RECOMP_FUNC void bapulse_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: jr          $ra
    // 0x80800048: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800048: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bapulse_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: lw          $t6, 0xE8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE8);
    // 0x80800050: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800054: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800058: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8080005C: lw          $t7, 0xE8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XE8);
    // 0x80800060: swc1        $f12, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f12.u32l;
    // 0x80800064: lw          $t8, 0xE8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XE8);
    // 0x80800068: jr          $ra
    // 0x8080006C: swc1        $f14, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f14.u32l;
    return;
    // 0x8080006C: swc1        $f14, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f14.u32l;
;}
RECOMP_FUNC void bapulse_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800078: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8080007C: jal         0x800D8FF8
    // 0x80800080: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800080: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800084: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800088: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x8080008C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80800090: bnel        $t6, $zero, L_808000F4
    if (ctx->r14 != 0) {
        // 0x80800094: lwc1        $f16, 0x8($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
            goto L_808000F4;
    }
    goto skip_0;
    // 0x80800094: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80800098: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8080009C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x808000A0: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x808000A4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x808000A8: lwc1        $f20, 0x8($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X8);
    // 0x808000AC: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808000B0: c.le.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl <= ctx->f20.fl;
    // 0x808000B4: nop

    // 0x808000B8: bc1fl       L_80800140
    if (!c1cs) {
        // 0x808000BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800140;
    }
    goto skip_1;
    // 0x808000BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x808000C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808000C4: jal         0x800F13C4
    // 0x808000C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800F13C4(rdram, ctx);
        goto after_1;
    // 0x808000C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x808000CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808000D4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x808000D8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808000DC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x808000E0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x808000E4: lw          $t8, 0xE8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XE8);
    // 0x808000E8: b           L_8080013C
    // 0x808000EC: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
        goto L_8080013C;
    // 0x808000EC: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x808000F0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
L_808000F4:
    // 0x808000F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000F8: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x808000FC: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x80800100: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x80800104: lwc1        $f20, 0x8($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800108: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x8080010C: nop

    // 0x80800110: bc1fl       L_80800140
    if (!c1cs) {
        // 0x80800114: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800140;
    }
    goto skip_2;
    // 0x80800114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80800118: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8080011C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800120: jal         0x800F13C4
    // 0x80800124: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    func_800F13C4(rdram, ctx);
        goto after_2;
    // 0x80800124: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    after_2:
    // 0x80800128: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080012C: lw          $t9, 0xE8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XE8);
    // 0x80800130: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x80800134: lw          $t0, 0xE8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XE8);
    // 0x80800138: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
L_8080013C:
    // 0x8080013C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800140:
    // 0x80800140: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80800144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800148: jr          $ra
    // 0x8080014C: nop

    return;
    // 0x8080014C: nop

;}
RECOMP_FUNC void bareact_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void bareact_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(44, 0XB0) << 16);
    // 0x8080000C: addiu       $a3, $a3, 0xB0
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(44, 0XB0));
    // 0x80800010: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x80800014: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080001C: beq         $t6, $zero, L_8080005C
    if (ctx->r14 == 0) {
        // 0x80800020: lui         $t7, 0x0
        ctx->r15 = S32(RELOC_HI16(44, 0XB0) << 16);
            goto L_8080005C;
    }
    // 0x80800020: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(44, 0XB0) << 16);
    // 0x80800024: addiu       $v1, $t7, 0xB0
    ctx->r3 = ADD32(ctx->r15, (int16_t)RELOC_LO16(44, 0XB0));
    // 0x80800028: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_8080002C:
    // 0x8080002C: bnel        $a1, $a0, L_8080004C
    if (ctx->r5 != ctx->r4) {
        // 0x80800030: lbu         $a0, 0x10($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X10);
            goto L_8080004C;
    }
    goto skip_0;
    // 0x80800030: lbu         $a0, 0x10($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X10);
    skip_0:
    // 0x80800034: lw          $t0, 0xEC($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XEC);
    // 0x80800038: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x8080003C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80800040: jr          $ra
    // 0x80800044: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    return;
    // 0x80800044: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80800048: lbu         $a0, 0x10($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X10);
L_8080004C:
    // 0x8080004C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80800050: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80800054: bne         $a0, $zero, L_8080002C
    if (ctx->r4 != 0) {
        // 0x80800058: nop
    
            goto L_8080002C;
    }
    // 0x80800058: nop

L_8080005C:
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void bareact_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x80800068: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8080006C: jr          $ra
    // 0x80800070: lbu         $v0, 0x1($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X1);
    return;
    // 0x80800070: lbu         $v0, 0x1($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X1);
;}
RECOMP_FUNC void bareact_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800074: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x80800078: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8080007C: jr          $ra
    // 0x80800080: lwc1        $f0, 0x4($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X4);
    return;
    // 0x80800080: lwc1        $f0, 0x4($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X4);
;}
RECOMP_FUNC void bareact_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x80800088: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8080008C: jr          $ra
    // 0x80800090: lwc1        $f0, 0xC($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XC);
    return;
    // 0x80800090: lwc1        $f0, 0xC($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XC);
;}
RECOMP_FUNC void bareact_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800094: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x80800098: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8080009C: jr          $ra
    // 0x808000A0: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    return;
    // 0x808000A0: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    // 0x808000A4: nop

    // 0x808000A8: nop

    // 0x808000AC: nop

;}
RECOMP_FUNC void basetup_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800008_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x800EA05C
    // 0x80800014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800018: jal         0x800EA090
    // 0x8080001C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EA090(rdram, ctx);
        goto after_1;
    // 0x8080001C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800020: jal         0x800DB9B0
    // 0x80800024: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800DB9B0(rdram, ctx);
        goto after_2;
    // 0x80800024: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80800028: bne         $v0, $zero, L_80800070
    if (ctx->r2 != 0) {
        // 0x8080002C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_80800070;
    }
    // 0x8080002C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80800030: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80800034: addiu       $at, $zero, 0x13A
    ctx->r1 = ADD32(0, 0X13A);
    // 0x80800038: bne         $v0, $at, L_80800044
    if (ctx->r2 != ctx->r1) {
        // 0x8080003C: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80800044;
    }
    // 0x8080003C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80800040: beq         $v1, $at, L_80800058
    if (ctx->r3 == ctx->r1) {
        // 0x80800044: addiu       $at, $zero, 0x136
        ctx->r1 = ADD32(0, 0X136);
            goto L_80800058;
    }
L_80800044:
    // 0x80800044: addiu       $at, $zero, 0x136
    ctx->r1 = ADD32(0, 0X136);
    // 0x80800048: bne         $v0, $at, L_80800070
    if (ctx->r2 != ctx->r1) {
        // 0x8080004C: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_80800070;
    }
    // 0x8080004C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80800050: bnel        $v1, $at, L_80800074
    if (ctx->r3 != ctx->r1) {
        // 0x80800054: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800074;
    }
    goto skip_0;
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_80800058:
    // 0x80800058: jal         0x800DA298
    // 0x8080005C: addiu       $a0, $zero, 0x327
    ctx->r4 = ADD32(0, 0X327);
    func_800DA298(rdram, ctx);
        goto after_3;
    // 0x8080005C: addiu       $a0, $zero, 0x327
    ctx->r4 = ADD32(0, 0X327);
    after_3:
    // 0x80800060: beql        $v0, $zero, L_80800074
    if (ctx->r2 == 0) {
        // 0x80800064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800074;
    }
    goto skip_1;
    // 0x80800064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800068: jal         0x800A0FF0
    // 0x8080006C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A0FF0(rdram, ctx);
        goto after_4;
    // 0x8080006C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
L_80800070:
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800074:
    // 0x80800074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800078: jr          $ra
    // 0x8080007C: nop

    return;
    // 0x8080007C: nop

;}
RECOMP_FUNC void func_80800080_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800088: jal         0x80084FE0
    // 0x8080008C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080008C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800090: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800094: jal         0x800F40EC
    // 0x80800098: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800F40EC(rdram, ctx);
        goto after_1;
    // 0x80800098: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8080009C: beq         $v0, $zero, L_80800130
    if (ctx->r2 == 0) {
        // 0x808000A0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800130;
    }
    // 0x808000A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000A8: jal         0x800A3274
    // 0x808000AC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800A3274(rdram, ctx);
        goto after_2;
    // 0x808000AC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x808000B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000B4: beq         $v0, $at, L_808000D0
    if (ctx->r2 == ctx->r1) {
        // 0x808000B8: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000D0;
    }
    // 0x808000B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000BC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x808000C0: beql        $v0, $at, L_8080010C
    if (ctx->r2 == ctx->r1) {
        // 0x808000C4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080010C;
    }
    goto skip_0;
    // 0x808000C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x808000C8: b           L_80800134
    // 0x808000CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800134;
    // 0x808000CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000D0:
    // 0x808000D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000D4: beq         $v1, $at, L_808000F8
    if (ctx->r3 == ctx->r1) {
        // 0x808000D8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808000F8;
    }
    // 0x808000D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808000E0: beq         $v1, $at, L_808000F8
    if (ctx->r3 == ctx->r1) {
        // 0x808000E4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808000F8;
    }
    // 0x808000E4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808000E8: beq         $v1, $at, L_808000F8
    if (ctx->r3 == ctx->r1) {
        // 0x808000EC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_808000F8;
    }
    // 0x808000EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808000F0: bnel        $v1, $at, L_80800134
    if (ctx->r3 != ctx->r1) {
        // 0x808000F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800134;
    }
    goto skip_1;
    // 0x808000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_808000F8:
    // 0x808000F8: jal         0x80085008
    // 0x808000FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x808000FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800100: b           L_80800134
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800134;
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800108: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8080010C:
    // 0x8080010C: beq         $v1, $at, L_80800128
    if (ctx->r3 == ctx->r1) {
        // 0x80800110: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800128;
    }
    // 0x80800110: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800114: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800118: beq         $v1, $at, L_80800128
    if (ctx->r3 == ctx->r1) {
        // 0x8080011C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80800128;
    }
    // 0x8080011C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800120: bnel        $v1, $at, L_80800134
    if (ctx->r3 != ctx->r1) {
        // 0x80800124: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800134;
    }
    goto skip_2;
    // 0x80800124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_80800128:
    // 0x80800128: jal         0x80085008
    // 0x8080012C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x8080012C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_80800130:
    // 0x80800130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800134:
    // 0x80800134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800138: jr          $ra
    // 0x8080013C: nop

    return;
    // 0x8080013C: nop

;}
RECOMP_FUNC void func_80800140_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800140: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800148: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080014C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x80800150: jal         0x800EE7F8
    // 0x80800154: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800154: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80800158: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8080015C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80800160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800164: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80800168: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x8080016C: ori         $a3, $a3, 0x25
    ctx->r7 = ctx->r7 | 0X25;
    // 0x80800170: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800174: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80800178: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8080017C: jal         0x800C6A7C
    // 0x80800180: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    func_800C6A7C(rdram, ctx);
        goto after_1;
    // 0x80800180: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    after_1:
    // 0x80800184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800188: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080018C: jr          $ra
    // 0x80800190: nop

    return;
    // 0x80800190: nop

;}
RECOMP_FUNC void func_80800194_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800194: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080019C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808001A0: jal         0x800A3274
    // 0x808001A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x808001A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x808001A8: jal         0x800EA05C
    // 0x808001AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x808001AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x808001B0: jal         0x800EA090
    // 0x808001B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_800EA090(rdram, ctx);
        goto after_2;
    // 0x808001B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x808001B8: jal         0x800DB9B0
    // 0x808001BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800DB9B0(rdram, ctx);
        goto after_3;
    // 0x808001BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x808001C0: bne         $v0, $zero, L_80800210
    if (ctx->r2 != 0) {
        // 0x808001C4: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800210;
    }
    // 0x808001C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001C8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x808001CC: addiu       $at, $zero, 0x112
    ctx->r1 = ADD32(0, 0X112);
    // 0x808001D0: bne         $v0, $at, L_808001DC
    if (ctx->r2 != ctx->r1) {
        // 0x808001D4: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_808001DC;
    }
    // 0x808001D4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x808001D8: beq         $v1, $at, L_808001F0
    if (ctx->r3 == ctx->r1) {
        // 0x808001DC: addiu       $at, $zero, 0x116
        ctx->r1 = ADD32(0, 0X116);
            goto L_808001F0;
    }
L_808001DC:
    // 0x808001DC: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x808001E0: bne         $v0, $at, L_80800210
    if (ctx->r2 != ctx->r1) {
        // 0x808001E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800210;
    }
    // 0x808001E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001E8: bnel        $v1, $at, L_80800214
    if (ctx->r3 != ctx->r1) {
        // 0x808001EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800214;
    }
    goto skip_0;
    // 0x808001EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_808001F0:
    // 0x808001F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x808001F4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x808001F8: bnel        $t6, $at, L_80800214
    if (ctx->r14 != ctx->r1) {
        // 0x808001FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800214;
    }
    goto skip_1;
    // 0x808001FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800200: jal         0x80000140
    // 0x80800204: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80800140_basetup(rdram, ctx);
        goto after_4;
    // 0x80800204: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80800208: jal         0x80000140
    // 0x8080020C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80800140_basetup(rdram, ctx);
        goto after_5;
    // 0x8080020C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
L_80800210:
    // 0x80800210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800214:
    // 0x80800214: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800218: jr          $ra
    // 0x8080021C: nop

    return;
    // 0x8080021C: nop

;}
RECOMP_FUNC void basetup_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800220: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800228: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8080022C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800230: jal         0x800F53D0
    // 0x80800234: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80800234: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800238: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8080023C: jal         0x80084758
    // 0x80800240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _badata_entrypoint_35(rdram, ctx);
        goto after_1;
    // 0x80800240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800244: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800248: jal         0x800EA068
    // 0x8080024C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800EA068(rdram, ctx);
        goto after_2;
    // 0x8080024C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x80800250: jal         0x8009E958
    // 0x80800254: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8009E958(rdram, ctx);
        goto after_3;
    // 0x80800254: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x80800258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080025C: beq         $v0, $at, L_80800278
    if (ctx->r2 == ctx->r1) {
        // 0x80800260: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_80800278;
    }
    // 0x80800260: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80800264: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80800268: beq         $v0, $at, L_80800298
    if (ctx->r2 == ctx->r1) {
        // 0x8080026C: nop
    
            goto L_80800298;
    }
    // 0x8080026C: nop

    // 0x80800270: b           L_808002AC
    // 0x80800274: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
        goto L_808002AC;
    // 0x80800274: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_80800278:
    // 0x80800278: beql        $v1, $zero, L_808002AC
    if (ctx->r3 == 0) {
        // 0x8080027C: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_808002AC;
    }
    goto skip_0;
    // 0x8080027C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80800280: jal         0x800C6E38
    // 0x80800284: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_800C6E38(rdram, ctx);
        goto after_4;
    // 0x80800284: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_4:
    // 0x80800288: beql        $v0, $zero, L_808002AC
    if (ctx->r2 == 0) {
        // 0x8080028C: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_808002AC;
    }
    goto skip_1;
    // 0x8080028C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x80800290: b           L_808002A8
    // 0x80800294: addiu       $s0, $zero, 0xC8
    ctx->r16 = ADD32(0, 0XC8);
        goto L_808002A8;
    // 0x80800294: addiu       $s0, $zero, 0xC8
    ctx->r16 = ADD32(0, 0XC8);
L_80800298:
    // 0x80800298: beq         $v1, $zero, L_808002A8
    if (ctx->r3 == 0) {
        // 0x8080029C: addiu       $s0, $zero, 0xC9
        ctx->r16 = ADD32(0, 0XC9);
            goto L_808002A8;
    }
    // 0x8080029C: addiu       $s0, $zero, 0xC9
    ctx->r16 = ADD32(0, 0XC9);
    // 0x808002A0: b           L_808002A8
    // 0x808002A4: addiu       $s0, $zero, 0xCB
    ctx->r16 = ADD32(0, 0XCB);
        goto L_808002A8;
    // 0x808002A4: addiu       $s0, $zero, 0xCB
    ctx->r16 = ADD32(0, 0XCB);
L_808002A8:
    // 0x808002A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_808002AC:
    // 0x808002AC: jal         0x800A3544
    // 0x808002B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A3544(rdram, ctx);
        goto after_5;
    // 0x808002B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x808002B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808002B8: jal         0x8009E5C8
    // 0x808002BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808002BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x808002C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002CC: jr          $ra
    // 0x808002D0: nop

    return;
    // 0x808002D0: nop

;}
RECOMP_FUNC void func_808002D4_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002E0: jal         0x8009E97C
    // 0x808002E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E97C(rdram, ctx);
        goto after_0;
    // 0x808002E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F0: jal         0x800917A8
    // 0x808002F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800917A8(rdram, ctx);
        goto after_1;
    // 0x808002F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808002F8: jal         0x8009E988
    // 0x808002FC: nop

    func_8009E988(rdram, ctx);
        goto after_2;
    // 0x808002FC: nop

    after_2:
    // 0x80800300: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: jal         0x800917A8
    // 0x8080030C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800917A8(rdram, ctx);
        goto after_3;
    // 0x8080030C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80800310: jal         0x8009EA64
    // 0x80800314: nop

    func_8009EA64(rdram, ctx);
        goto after_4;
    // 0x80800314: nop

    after_4:
    // 0x80800318: beq         $v0, $zero, L_8080033C
    if (ctx->r2 == 0) {
        // 0x8080031C: nop
    
            goto L_8080033C;
    }
    // 0x8080031C: nop

    // 0x80800320: jal         0x80084748
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_33(rdram, ctx);
        goto after_5;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x8009E5C8
    // 0x80800330: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80800330: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x80800334: b           L_80800378
    // 0x80800338: nop

        goto L_80800378;
    // 0x80800338: nop

L_8080033C:
    // 0x8080033C: jal         0x8009EA20
    // 0x80800340: nop

    func_8009EA20(rdram, ctx);
        goto after_7;
    // 0x80800340: nop

    after_7:
    // 0x80800344: beq         $v0, $zero, L_8080035C
    if (ctx->r2 == 0) {
        // 0x80800348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080035C;
    }
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080034C: jal         0x8009E5C8
    // 0x80800350: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800350: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    after_8:
    // 0x80800354: b           L_80800378
    // 0x80800358: nop

        goto L_80800378;
    // 0x80800358: nop

L_8080035C:
    // 0x8080035C: jal         0x80000008
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_basetup(rdram, ctx);
        goto after_9;
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800364: jal         0x80084758
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_35(rdram, ctx);
        goto after_10;
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800370: jal         0x8009E5C8
    // 0x80800374: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x80800374: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_11:
L_80800378:
    // 0x80800378: jal         0x80000080
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800080_basetup(rdram, ctx);
        goto after_12;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800384: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080038C: jr          $ra
    // 0x80800390: nop

    return;
    // 0x80800390: nop

;}
RECOMP_FUNC void func_80800394_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800394: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080039C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003A0: jal         0x800F8B88
    // 0x808003A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x808003A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003A8: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x808003AC: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x808003B0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x808003B4: jal         0x8008DAA8
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_1;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003BC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808003C0: jal         0x800A3274
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_2;
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808003C8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808003CC: jal         0x8009E6F8
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_3;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003D4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x808003D8: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x808003DC: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x808003E0: beq         $t7, $zero, L_80800400
    if (ctx->r15 == 0) {
        // 0x808003E4: nop
    
            goto L_80800400;
    }
    // 0x808003E4: nop

    // 0x808003E8: beql        $t8, $zero, L_80800414
    if (ctx->r24 == 0) {
        // 0x808003EC: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_80800414;
    }
    goto skip_0;
    // 0x808003EC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    skip_0:
    // 0x808003F0: jal         0x800002D4
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D4_basetup(rdram, ctx);
        goto after_4;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003F8: b           L_80800414
    // 0x808003FC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
        goto L_80800414;
    // 0x808003FC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_80800400:
    // 0x80800400: beql        $t9, $zero, L_80800414
    if (ctx->r25 == 0) {
        // 0x80800404: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_80800414;
    }
    goto skip_1;
    // 0x80800404: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x80800408: jal         0x800002D4
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D4_basetup(rdram, ctx);
        goto after_5;
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800410: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_80800414:
    // 0x80800414: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80800418: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8080041C: bne         $t0, $zero, L_808004D4
    if (ctx->r8 != 0) {
        // 0x80800420: nop
    
            goto L_808004D4;
    }
    // 0x80800420: nop

    // 0x80800424: jal         0x800A3274
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_6;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080042C: jal         0x800F54E4
    // 0x80800430: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800F54E4(rdram, ctx);
        goto after_7;
    // 0x80800430: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_7:
    // 0x80800434: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800438: jal         0x800F64A4
    // 0x8080043C: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    func_800F64A4(rdram, ctx);
        goto after_8;
    // 0x8080043C: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    after_8:
    // 0x80800440: beq         $v0, $zero, L_80800490
    if (ctx->r2 == 0) {
        // 0x80800444: lw          $t2, 0x34($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X34);
            goto L_80800490;
    }
    // 0x80800444: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80800448: jal         0x8008E23C
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_9;
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800450: beq         $v0, $zero, L_80800474
    if (ctx->r2 == 0) {
        // 0x80800454: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_80800474;
    }
    // 0x80800454: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80800458: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8080045C: bne         $t1, $at, L_80800474
    if (ctx->r9 != ctx->r1) {
        // 0x80800460: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800474;
    }
    // 0x80800460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800464: jal         0x800F457C
    // 0x80800468: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F457C(rdram, ctx);
        goto after_10;
    // 0x80800468: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x8080046C: b           L_808004B4
    // 0x80800470: nop

        goto L_808004B4;
    // 0x80800470: nop

L_80800474:
    // 0x80800474: jal         0x800848D0
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_29(rdram, ctx);
        goto after_11;
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: jal         0x8009E5C8
    // 0x80800484: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80800484: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_12:
    // 0x80800488: b           L_808004B4
    // 0x8080048C: nop

        goto L_808004B4;
    // 0x8080048C: nop

L_80800490:
    // 0x80800490: beq         $t2, $zero, L_808004AC
    if (ctx->r10 == 0) {
        // 0x80800494: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004AC;
    }
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080049C: jal         0x8009E5C8
    // 0x808004A0: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x808004A0: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    after_13:
    // 0x808004A4: b           L_808004B4
    // 0x808004A8: nop

        goto L_808004B4;
    // 0x808004A8: nop

L_808004AC:
    // 0x808004AC: jal         0x800F457C
    // 0x808004B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F457C(rdram, ctx);
        goto after_14;
    // 0x808004B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
L_808004B4:
    // 0x808004B4: jal         0x800F8DA8
    // 0x808004B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F8DA8(rdram, ctx);
        goto after_15;
    // 0x808004B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808004BC: beq         $v0, $zero, L_80800520
    if (ctx->r2 == 0) {
        // 0x808004C0: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80800520;
    }
    // 0x808004C0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808004C4: jal         0x800F8D50
    // 0x808004C8: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8D50(rdram, ctx);
        goto after_16;
    // 0x808004C8: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_16:
    // 0x808004CC: b           L_80800524
    // 0x808004D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800524;
    // 0x808004D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004D4:
    // 0x808004D4: beq         $v1, $at, L_808004F8
    if (ctx->r3 == ctx->r1) {
        // 0x808004D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808004F8;
    }
    // 0x808004D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808004DC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x808004E0: beq         $v1, $at, L_8080050C
    if (ctx->r3 == ctx->r1) {
        // 0x808004E4: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_8080050C;
    }
    // 0x808004E4: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x808004E8: beql        $v1, $at, L_80800510
    if (ctx->r3 == ctx->r1) {
        // 0x808004EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80800510;
    }
    goto skip_2;
    // 0x808004EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x808004F0: b           L_80800510
    // 0x808004F4: nop

        goto L_80800510;
    // 0x808004F4: nop

L_808004F8:
    // 0x808004F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x808004FC: beq         $t3, $zero, L_80800510
    if (ctx->r11 == 0) {
        // 0x80800500: nop
    
            goto L_80800510;
    }
    // 0x80800500: nop

    // 0x80800504: b           L_80800510
    // 0x80800508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800510;
    // 0x80800508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080050C:
    // 0x8080050C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800510:
    // 0x80800510: beql        $v0, $zero, L_80800524
    if (ctx->r2 == 0) {
        // 0x80800514: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800524;
    }
    goto skip_3;
    // 0x80800514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80800518: jal         0x800F8128
    // 0x8080051C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8128(rdram, ctx);
        goto after_17;
    // 0x8080051C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_17:
L_80800520:
    // 0x80800520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800524:
    // 0x80800524: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800528: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080052C: jr          $ra
    // 0x80800530: nop

    return;
    // 0x80800530: nop

;}
RECOMP_FUNC void func_80800534_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800534: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800538: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080053C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800540: jal         0x800DB9B0
    // 0x80800544: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800DB9B0(rdram, ctx);
        goto after_0;
    // 0x80800544: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800548: bne         $v0, $zero, L_80800560
    if (ctx->r2 != 0) {
        // 0x8080054C: nop
    
            goto L_80800560;
    }
    // 0x8080054C: nop

    // 0x80800550: jal         0x800887B0
    // 0x80800554: nop

    _glcutDll_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800554: nop

    after_1:
    // 0x80800558: beq         $v0, $zero, L_80800570
    if (ctx->r2 == 0) {
        // 0x8080055C: nop
    
            goto L_80800570;
    }
    // 0x8080055C: nop

L_80800560:
    // 0x80800560: jal         0x80000394
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800394_basetup(rdram, ctx);
        goto after_2;
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800568: b           L_808006DC
    // 0x8080056C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006DC;
    // 0x8080056C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800570:
    // 0x80800570: jal         0x8008DAA8
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_3;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800578: bne         $v0, $zero, L_808005E4
    if (ctx->r2 != 0) {
        // 0x8080057C: nop
    
            goto L_808005E4;
    }
    // 0x8080057C: nop

    // 0x80800580: jal         0x80000394
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800394_basetup(rdram, ctx);
        goto after_4;
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800588: jal         0x800F99FC
    // 0x8080058C: nop

    func_800F99FC(rdram, ctx);
        goto after_5;
    // 0x8080058C: nop

    after_5:
    // 0x80800590: bne         $v0, $zero, L_808005DC
    if (ctx->r2 != 0) {
        // 0x80800594: nop
    
            goto L_808005DC;
    }
    // 0x80800594: nop

    // 0x80800598: jal         0x800F99E8
    // 0x8080059C: nop

    func_800F99E8(rdram, ctx);
        goto after_6;
    // 0x8080059C: nop

    after_6:
    // 0x808005A0: bne         $v0, $zero, L_808005DC
    if (ctx->r2 != 0) {
        // 0x808005A4: nop
    
            goto L_808005DC;
    }
    // 0x808005A4: nop

    // 0x808005A8: jal         0x800F8B7C
    // 0x808005AC: nop

    func_800F8B7C(rdram, ctx);
        goto after_7;
    // 0x808005AC: nop

    after_7:
    // 0x808005B0: beq         $v0, $zero, L_808005DC
    if (ctx->r2 == 0) {
        // 0x808005B4: nop
    
            goto L_808005DC;
    }
    // 0x808005B4: nop

    // 0x808005B8: jal         0x8008E23C
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_8;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808005C0: beq         $v0, $zero, L_808005DC
    if (ctx->r2 == 0) {
        // 0x808005C4: nop
    
            goto L_808005DC;
    }
    // 0x808005C4: nop

    // 0x808005C8: jal         0x800F8A50
    // 0x808005CC: nop

    func_800F8A50(rdram, ctx);
        goto after_9;
    // 0x808005CC: nop

    after_9:
    // 0x808005D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005D4: jal         0x80087920
    // 0x808005D8: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    _plcamera_entrypoint_13(rdram, ctx);
        goto after_10;
    // 0x808005D8: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_10:
L_808005DC:
    // 0x808005DC: b           L_808006DC
    // 0x808005E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006DC;
    // 0x808005E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808005E4:
    // 0x808005E4: jal         0x800F99FC
    // 0x808005E8: nop

    func_800F99FC(rdram, ctx);
        goto after_11;
    // 0x808005E8: nop

    after_11:
    // 0x808005EC: beq         $v0, $zero, L_80800618
    if (ctx->r2 == 0) {
        // 0x808005F0: nop
    
            goto L_80800618;
    }
    // 0x808005F0: nop

    // 0x808005F4: jal         0x800A3274
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_12;
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808005FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800600: bne         $v0, $at, L_80800610
    if (ctx->r2 != ctx->r1) {
        // 0x80800604: nop
    
            goto L_80800610;
    }
    // 0x80800604: nop

    // 0x80800608: jal         0x800002D4
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D4_basetup(rdram, ctx);
        goto after_13;
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_80800610:
    // 0x80800610: b           L_808006DC
    // 0x80800614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006DC;
    // 0x80800614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800618:
    // 0x80800618: jal         0x800F99E8
    // 0x8080061C: nop

    func_800F99E8(rdram, ctx);
        goto after_14;
    // 0x8080061C: nop

    after_14:
    // 0x80800620: beq         $v0, $zero, L_80800638
    if (ctx->r2 == 0) {
        // 0x80800624: nop
    
            goto L_80800638;
    }
    // 0x80800624: nop

    // 0x80800628: jal         0x80000394
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800394_basetup(rdram, ctx);
        goto after_15;
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800630: b           L_808006DC
    // 0x80800634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006DC;
    // 0x80800634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800638:
    // 0x80800638: jal         0x800F8B7C
    // 0x8080063C: nop

    func_800F8B7C(rdram, ctx);
        goto after_16;
    // 0x8080063C: nop

    after_16:
    // 0x80800640: beq         $v0, $zero, L_808006B8
    if (ctx->r2 == 0) {
        // 0x80800644: nop
    
            goto L_808006B8;
    }
    // 0x80800644: nop

    // 0x80800648: jal         0x8008E23C
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_17;
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800650: beq         $v0, $zero, L_808006B8
    if (ctx->r2 == 0) {
        // 0x80800654: nop
    
            goto L_808006B8;
    }
    // 0x80800654: nop

    // 0x80800658: jal         0x800A3274
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_18;
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800660: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800664: jal         0x800F89E4
    // 0x80800668: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F89E4(rdram, ctx);
        goto after_19;
    // 0x80800668: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_19:
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800670: jal         0x800F452C
    // 0x80800674: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F452C(rdram, ctx);
        goto after_20;
    // 0x80800674: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_20:
    // 0x80800678: jal         0x800F8A50
    // 0x8080067C: nop

    func_800F8A50(rdram, ctx);
        goto after_21;
    // 0x8080067C: nop

    after_21:
    // 0x80800680: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800684: jal         0x8009C914
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_22;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8080068C: jal         0x8009C974
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_23;
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800694: jal         0x800F8A50
    // 0x80800698: nop

    func_800F8A50(rdram, ctx);
        goto after_24;
    // 0x80800698: nop

    after_24:
    // 0x8080069C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808006A0: jal         0x80087920
    // 0x808006A4: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    _plcamera_entrypoint_13(rdram, ctx);
        goto after_25;
    // 0x808006A4: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_25:
    // 0x808006A8: jal         0x80000394
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800394_basetup(rdram, ctx);
        goto after_26;
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x808006B0: b           L_808006DC
    // 0x808006B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006DC;
    // 0x808006B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808006B8:
    // 0x808006B8: jal         0x8009EA64
    // 0x808006BC: nop

    func_8009EA64(rdram, ctx);
        goto after_27;
    // 0x808006BC: nop

    after_27:
    // 0x808006C0: beql        $v0, $zero, L_808006DC
    if (ctx->r2 == 0) {
        // 0x808006C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808006DC;
    }
    goto skip_0;
    // 0x808006C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x808006C8: jal         0x80000394
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800394_basetup(rdram, ctx);
        goto after_28;
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x808006D0: b           L_808006DC
    // 0x808006D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006DC;
    // 0x808006D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808006D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006DC:
    // 0x808006DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808006E8: jr          $ra
    // 0x808006EC: nop

    return;
    // 0x808006EC: nop

;}
RECOMP_FUNC void func_808006F0_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006F8: jal         0x80089758
    // 0x808006FC: nop

    _gemarkersDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808006FC: nop

    after_0:
    // 0x80800700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800704: jal         0x800882E8
    // 0x80800708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gccubesearch_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x80800708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080070C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800714: jr          $ra
    // 0x80800718: nop

    return;
    // 0x80800718: nop

;}
RECOMP_FUNC void func_8080071C_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080071C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800724: addiu       $a2, $zero, 0x52
    ctx->r6 = ADD32(0, 0X52);
    // 0x80800728: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8080072C: jal         0x800A9C98
    // 0x80800730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800A9C98(rdram, ctx);
        goto after_0;
    // 0x80800730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800734: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800738: beq         $v0, $zero, L_80800748
    if (ctx->r2 == 0) {
        // 0x8080073C: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_80800748;
    }
    // 0x8080073C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800740: b           L_80800768
    // 0x80800744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800768;
    // 0x80800744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800748:
    // 0x80800748: blez        $a0, L_80800760
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8080074C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80800760;
    }
    // 0x8080074C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800750: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x80800754: beq         $at, $zero, L_80800760
    if (ctx->r1 == 0) {
        // 0x80800758: nop
    
            goto L_80800760;
    }
    // 0x80800758: nop

    // 0x8080075C: addiu       $a2, $a0, 0x52
    ctx->r6 = ADD32(ctx->r4, 0X52);
L_80800760:
    // 0x80800760: jal         0x800882E8
    // 0x80800764: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _gccubesearch_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x80800764: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_80800768:
    // 0x80800768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080076C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800770: jr          $ra
    // 0x80800774: nop

    return;
    // 0x80800774: nop

;}
RECOMP_FUNC void func_80800778_basetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800778: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080077C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800780: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800784: jal         0x8009E958
    // 0x80800788: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009E958(rdram, ctx);
        goto after_0;
    // 0x80800788: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080078C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800790: beq         $v0, $at, L_808007C8
    if (ctx->r2 == ctx->r1) {
        // 0x80800794: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_808007C8;
    }
    // 0x80800794: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800798: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8080079C: bne         $v0, $at, L_808007EC
    if (ctx->r2 != ctx->r1) {
        // 0x808007A0: nop
    
            goto L_808007EC;
    }
    // 0x808007A0: nop

    // 0x808007A4: jal         0x800EA05C
    // 0x808007A8: nop

    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x808007A8: nop

    after_1:
    // 0x808007AC: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x808007B0: bne         $v0, $at, L_808007EC
    if (ctx->r2 != ctx->r1) {
        // 0x808007B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_808007EC;
    }
    // 0x808007B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808007B8: jal         0x8009EB18
    // 0x808007BC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_8009EB18(rdram, ctx);
        goto after_2;
    // 0x808007BC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_2:
    // 0x808007C0: b           L_808007EC
    // 0x808007C4: nop

        goto L_808007EC;
    // 0x808007C4: nop

L_808007C8:
    // 0x808007C8: jal         0x800EA068
    // 0x808007CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800EA068(rdram, ctx);
        goto after_3;
    // 0x808007CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x808007D0: beq         $v0, $zero, L_808007EC
    if (ctx->r2 == 0) {
        // 0x808007D4: nop
    
            goto L_808007EC;
    }
    // 0x808007D4: nop

    // 0x808007D8: jal         0x800C6E38
    // 0x808007DC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_800C6E38(rdram, ctx);
        goto after_4;
    // 0x808007DC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_4:
    // 0x808007E0: beq         $v0, $zero, L_808007EC
    if (ctx->r2 == 0) {
        // 0x808007E4: nop
    
            goto L_808007EC;
    }
    // 0x808007E4: nop

    // 0x808007E8: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_808007EC:
    // 0x808007EC: jal         0x800EA068
    // 0x808007F0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800EA068(rdram, ctx);
        goto after_5;
    // 0x808007F0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_5:
    // 0x808007F4: beql        $v0, $zero, L_80800834
    if (ctx->r2 == 0) {
        // 0x808007F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800834;
    }
    goto skip_0;
    // 0x808007F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808007FC: jal         0x800EA05C
    // 0x80800800: nop

    func_800EA05C(rdram, ctx);
        goto after_6;
    // 0x80800800: nop

    after_6:
    // 0x80800804: addiu       $at, $zero, 0x182
    ctx->r1 = ADD32(0, 0X182);
    // 0x80800808: beq         $v0, $at, L_80800820
    if (ctx->r2 == ctx->r1) {
        // 0x8080080C: addiu       $at, $zero, 0x188
        ctx->r1 = ADD32(0, 0X188);
            goto L_80800820;
    }
    // 0x8080080C: addiu       $at, $zero, 0x188
    ctx->r1 = ADD32(0, 0X188);
    // 0x80800810: beq         $v0, $at, L_80800828
    if (ctx->r2 == ctx->r1) {
        // 0x80800814: addiu       $s0, $zero, 0x6
        ctx->r16 = ADD32(0, 0X6);
            goto L_80800828;
    }
    // 0x80800814: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x80800818: b           L_80800828
    // 0x8080081C: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
        goto L_80800828;
    // 0x8080081C: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_80800820:
    // 0x80800820: b           L_80800828
    // 0x80800824: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
        goto L_80800828;
    // 0x80800824: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
L_80800828:
    // 0x80800828: jal         0x8009E9D8
    // 0x8080082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E9D8(rdram, ctx);
        goto after_7;
    // 0x8080082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800834:
    // 0x80800834: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80800838: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080083C: jr          $ra
    // 0x80800840: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800840: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void basetup_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800844: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080084C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800850: jal         0x800A3274
    // 0x80800854: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80800854: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800858: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080085C: beql        $v0, $at, L_80800874
    if (ctx->r2 == ctx->r1) {
        // 0x80800860: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800874;
    }
    goto skip_0;
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800864: jal         0x80088240
    // 0x80800868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    _gclevel_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8080086C: beq         $v0, $zero, L_80800884
    if (ctx->r2 == 0) {
        // 0x80800870: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800884;
    }
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800874:
    // 0x80800874: jal         0x800F44DC
    // 0x80800878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F44DC(rdram, ctx);
        goto after_2;
    // 0x80800878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080087C: b           L_80800B10
    // 0x80800880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800B10;
    // 0x80800880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800884:
    // 0x80800884: jal         0x80000534
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800534_basetup(rdram, ctx);
        goto after_3;
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080088C: bnel        $v0, $zero, L_80800B10
    if (ctx->r2 != 0) {
        // 0x80800890: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800B10;
    }
    goto skip_1;
    // 0x80800890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800894: jal         0x800EA090
    // 0x80800898: nop

    func_800EA090(rdram, ctx);
        goto after_4;
    // 0x80800898: nop

    after_4:
    // 0x8080089C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x808008A0: jal         0x800006F0
    // 0x808008A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_808006F0_basetup(rdram, ctx);
        goto after_5;
    // 0x808008A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x808008A8: beq         $v0, $zero, L_808008C0
    if (ctx->r2 == 0) {
        // 0x808008AC: sw          $v0, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r2;
            goto L_808008C0;
    }
    // 0x808008AC: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x808008B0: jal         0x8000071C
    // 0x808008B4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_8080071C_basetup(rdram, ctx);
        goto after_6;
    // 0x808008B4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_6:
    // 0x808008B8: b           L_80800900
    // 0x808008BC: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
        goto L_80800900;
    // 0x808008BC: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_808008C0:
    // 0x808008C0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x808008C4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x808008C8: jal         0x8008A370
    // 0x808008CC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    _sudeathmatch_entrypoint_0(rdram, ctx);
        goto after_7;
    // 0x808008CC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_7:
    // 0x808008D0: beq         $v0, $zero, L_808008E4
    if (ctx->r2 == 0) {
        // 0x808008D4: lw          $t6, 0x64($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X64);
            goto L_808008E4;
    }
    // 0x808008D4: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x808008D8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808008DC: b           L_808008FC
    // 0x808008E0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
        goto L_808008FC;
    // 0x808008E0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
L_808008E4:
    // 0x808008E4: bne         $t6, $zero, L_808008FC
    if (ctx->r14 != 0) {
        // 0x808008E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008FC;
    }
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008EC: jal         0x800F44DC
    // 0x808008F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F44DC(rdram, ctx);
        goto after_8;
    // 0x808008F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808008F4: b           L_80800B10
    // 0x808008F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800B10;
    // 0x808008F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808008FC:
    // 0x808008FC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
L_80800900:
    // 0x80800900: jal         0x80000778
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800778_basetup(rdram, ctx);
        goto after_9;
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800908: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8080090C: bne         $v0, $at, L_80800980
    if (ctx->r2 != ctx->r1) {
        // 0x80800910: sw          $v0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r2;
            goto L_80800980;
    }
    // 0x80800910: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800918: jal         0x80085008
    // 0x8080091C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_10;
    // 0x8080091C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80800920: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800924: jal         0x8009EB0C
    // 0x80800928: nop

    func_8009EB0C(rdram, ctx);
        goto after_11;
    // 0x80800928: nop

    after_11:
    // 0x8080092C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80800930: beq         $t7, $zero, L_80800958
    if (ctx->r15 == 0) {
        // 0x80800934: nop
    
            goto L_80800958;
    }
    // 0x80800934: nop

    // 0x80800938: jal         0x8009E994
    // 0x8080093C: nop

    func_8009E994(rdram, ctx);
        goto after_12;
    // 0x8080093C: nop

    after_12:
    // 0x80800940: bne         $v0, $zero, L_80800958
    if (ctx->r2 != 0) {
        // 0x80800944: nop
    
            goto L_80800958;
    }
    // 0x80800944: nop

    // 0x80800948: jal         0x8009E958
    // 0x8080094C: nop

    func_8009E958(rdram, ctx);
        goto after_13;
    // 0x8080094C: nop

    after_13:
    // 0x80800950: b           L_80800980
    // 0x80800954: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
        goto L_80800980;
    // 0x80800954: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_80800958:
    // 0x80800958: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8080095C: lbu         $t8, 0x762C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X762C);
    // 0x80800960: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80800964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800968: bne         $t8, $at, L_80800978
    if (ctx->r24 != ctx->r1) {
        // 0x8080096C: nop
    
            goto L_80800978;
    }
    // 0x8080096C: nop

    // 0x80800970: b           L_80800978
    // 0x80800974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80800978;
    // 0x80800974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80800978:
    // 0x80800978: jal         0x800A3544
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3544(rdram, ctx);
        goto after_14;
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_80800980:
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800984: jal         0x800A3410
    // 0x80800988: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800A3410(rdram, ctx);
        goto after_15;
    // 0x80800988: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_15:
    // 0x8080098C: jal         0x80092778
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092778(rdram, ctx);
        goto after_16;
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800998: jal         0x800F44DC
    // 0x8080099C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F44DC(rdram, ctx);
        goto after_17;
    // 0x8080099C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x808009A0: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x808009A4: beql        $a0, $zero, L_808009D0
    if (ctx->r4 == 0) {
        // 0x808009A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009D0;
    }
    goto skip_2;
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808009AC: jal         0x80088C00
    // 0x808009B0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_18;
    // 0x808009B0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_18:
    // 0x808009B4: jal         0x80088C08
    // 0x808009B8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    _gspropctrl_entrypoint_12(rdram, ctx);
        goto after_19;
    // 0x808009B8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    after_19:
    // 0x808009BC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x808009C0: nop

    // 0x808009C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808009C8: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808009D0:
    // 0x808009D0: jal         0x800F44DC
    // 0x808009D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F44DC(rdram, ctx);
        goto after_20;
    // 0x808009D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x808009D8: lw          $t0, 0x100($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X100);
    // 0x808009DC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x808009E0: jal         0x8009EA4C
    // 0x808009E4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    func_8009EA4C(rdram, ctx);
        goto after_21;
    // 0x808009E4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    after_21:
    // 0x808009E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808009EC: bnel        $v0, $at, L_80800A3C
    if (ctx->r2 != ctx->r1) {
        // 0x808009F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A3C;
    }
    goto skip_3;
    // 0x808009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x808009F4: jal         0x800EA068
    // 0x808009F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800EA068(rdram, ctx);
        goto after_22;
    // 0x808009F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_22:
    // 0x808009FC: beql        $v0, $zero, L_80800A28
    if (ctx->r2 == 0) {
        // 0x80800A00: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80800A28;
    }
    goto skip_4;
    // 0x80800A00: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    skip_4:
    // 0x80800A04: jal         0x800C6E38
    // 0x80800A08: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_800C6E38(rdram, ctx);
        goto after_23;
    // 0x80800A08: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_23:
    // 0x80800A0C: beql        $v0, $zero, L_80800A28
    if (ctx->r2 == 0) {
        // 0x80800A10: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80800A28;
    }
    goto skip_5;
    // 0x80800A10: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    skip_5:
    // 0x80800A14: jal         0x8009EAD0
    // 0x80800A18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8009EAD0(rdram, ctx);
        goto after_24;
    // 0x80800A18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_24:
    // 0x80800A1C: b           L_80800A3C
    // 0x80800A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A3C;
    // 0x80800A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A24: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
L_80800A28:
    // 0x80800A28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800A2C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800A30: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80800A34: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800A3C:
    // 0x80800A3C: jal         0x8009C914
    // 0x80800A40: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009C914(rdram, ctx);
        goto after_25;
    // 0x80800A40: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_25:
    // 0x80800A44: jal         0x8009C974
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_26;
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800A4C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80800A50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A58: beq         $t1, $zero, L_80800AFC
    if (ctx->r9 == 0) {
        // 0x80800A5C: nop
    
            goto L_80800AFC;
    }
    // 0x80800A5C: nop

    // 0x80800A60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80800A68: jal         0x800EA068
    // 0x80800A6C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_800EA068(rdram, ctx);
        goto after_27;
    // 0x80800A6C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_27:
    // 0x80800A70: beql        $v0, $zero, L_80800A9C
    if (ctx->r2 == 0) {
        // 0x80800A74: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_80800A9C;
    }
    goto skip_6;
    // 0x80800A74: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    skip_6:
    // 0x80800A78: jal         0x80088C10
    // 0x80800A7C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    _gspropctrl_entrypoint_13(rdram, ctx);
        goto after_28;
    // 0x80800A7C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_28:
    // 0x80800A80: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80800A84: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(45, 0XB30) << 16);
    // 0x80800A88: lwc1        $f10, 0xB30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(45, 0XB30));
    // 0x80800A8C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800A90: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800A94: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80800A98: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
L_80800A9C:
    // 0x80800A9C: jal         0x80088C00
    // 0x80800AA0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_29;
    // 0x80800AA0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_29:
    // 0x80800AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800AAC: jal         0x80000194
    // 0x80800AB0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_80800194_basetup(rdram, ctx);
        goto after_30;
    // 0x80800AB0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_30:
    // 0x80800AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AB8: jal         0x800F452C
    // 0x80800ABC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F452C(rdram, ctx);
        goto after_31;
    // 0x80800ABC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_31:
    // 0x80800AC0: jal         0x800002D4
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D4_basetup(rdram, ctx);
        goto after_32;
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800AC8: jal         0x800F497C
    // 0x80800ACC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F497C(rdram, ctx);
        goto after_33;
    // 0x80800ACC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_33:
    // 0x80800AD0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x80800AD4: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800AD8: addiu       $a1, $a1, 0x4FA8
    ctx->r5 = ADD32(ctx->r5, 0X4FA8);
    // 0x80800ADC: jal         0x800F49D4
    // 0x80800AE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_800F49D4(rdram, ctx);
        goto after_34;
    // 0x80800AE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_34:
    // 0x80800AE4: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x80800AE8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80800AEC: jal         0x800F4A8C
    // 0x80800AF0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800F4A8C(rdram, ctx);
        goto after_35;
    // 0x80800AF0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_35:
    // 0x80800AF4: b           L_80800B10
    // 0x80800AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800B10;
    // 0x80800AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800AFC:
    // 0x80800AFC: jal         0x800F452C
    // 0x80800B00: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_800F452C(rdram, ctx);
        goto after_36;
    // 0x80800B00: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_36:
    // 0x80800B04: jal         0x800002D4
    // 0x80800B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D4_basetup(rdram, ctx);
        goto after_37;
    // 0x80800B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80800B0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800B10:
    // 0x80800B10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B14: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80800B18: jr          $ra
    // 0x80800B1C: nop

    return;
    // 0x80800B1C: nop

;}
RECOMP_FUNC void basetup_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B20: jr          $ra
    // 0x80800B24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800B24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void basetup_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B28: jr          $ra
    // 0x80800B2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800B2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bashake_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8080000C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800010: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800014: jal         0x8009C128
    // 0x80800018: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800018: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8080001C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800020: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80800024: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(46, 0X100) << 16);
    // 0x80800028: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8080002C: lui         $t1, 0x0
    ctx->r9 = S32(RELOC_HI16(46, 0X13C) << 16);
    // 0x80800030: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80800034: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800038: addiu       $t1, $t1, 0x13C
    ctx->r9 = ADD32(ctx->r9, (int16_t)RELOC_LO16(46, 0X13C));
    // 0x8080003C: addiu       $t8, $t8, 0x100
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(46, 0X100));
    // 0x80800040: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80800044: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80800048: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8080004C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80800050: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800054: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x80800058: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8080005C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800060: jal         0x800E1610
    // 0x80800064: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_800E1610(rdram, ctx);
        goto after_1;
    // 0x80800064: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800068: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8080006C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800070: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800074: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x80800078: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8080007C: jal         0x80085490
    // 0x80800080: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800080: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    after_2:
    // 0x80800084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800088: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080008C: jr          $ra
    // 0x80800090: nop

    return;
    // 0x80800090: nop

;}
RECOMP_FUNC void bashake_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800094: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080009C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808000A0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x808000A4: jal         0x8009C128
    // 0x808000A8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808000A8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x808000AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x808000B0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x808000B4: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(46, 0X100) << 16);
    // 0x808000B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x808000BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x808000C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808000C4: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(46, 0X13C) << 16);
    // 0x808000C8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x808000CC: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x808000D0: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x808000D4: lw          $a1, 0x100($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(46, 0X100));
    // 0x808000D8: lw          $a2, 0x13C($a2)
    ctx->r6 = MEM_W(ctx->r6, (int16_t)RELOC_LO16(46, 0X13C));
    // 0x808000DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808000E0: jal         0x800E1610
    // 0x808000E4: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    func_800E1610(rdram, ctx);
        goto after_1;
    // 0x808000E4: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x808000E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000F0: jr          $ra
    // 0x808000F4: nop

    return;
    // 0x808000F4: nop

    // 0x808000F8: nop

    // 0x808000FC: nop

;}
RECOMP_FUNC void bashoes_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void bashoes_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x8080000C: jr          $ra
    // 0x80800010: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    return;
    // 0x80800010: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
;}
RECOMP_FUNC void bashoes_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x80800018: jr          $ra
    // 0x8080001C: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
    return;
    // 0x8080001C: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
;}
RECOMP_FUNC void func_80800020_bashoes(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800028: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x8080002C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800030: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80800034: jal         0x800917A8
    // 0x80800038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800917A8(rdram, ctx);
        goto after_0;
    // 0x80800038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080003C: jal         0x800EA068
    // 0x80800040: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x80800040: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_1:
    // 0x80800044: beq         $v0, $zero, L_80800070
    if (ctx->r2 == 0) {
        // 0x80800048: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_80800070;
    }
    // 0x80800048: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8080004C: lw          $t7, 0x10C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10C);
    // 0x80800050: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800054: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80800058: bnel        $t8, $at, L_808000C8
    if (ctx->r24 != ctx->r1) {
        // 0x8080005C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000C8;
    }
    goto skip_0;
    // 0x8080005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800060: jal         0x800FC660
    // 0x80800064: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_800FC660(rdram, ctx);
        goto after_2;
    // 0x80800064: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_2:
    // 0x80800068: b           L_808000C8
    // 0x8080006C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000C8;
    // 0x8080006C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800070:
    // 0x80800070: lw          $t9, 0x10C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10C);
    // 0x80800074: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800078: lbu         $v0, 0x4($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X4);
    // 0x8080007C: beq         $v0, $at, L_8080009C
    if (ctx->r2 == ctx->r1) {
        // 0x80800080: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080009C;
    }
    // 0x80800080: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800084: beq         $v0, $at, L_808000AC
    if (ctx->r2 == ctx->r1) {
        // 0x80800088: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_808000AC;
    }
    // 0x80800088: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8080008C: beq         $v0, $at, L_808000BC
    if (ctx->r2 == ctx->r1) {
        // 0x80800090: nop
    
            goto L_808000BC;
    }
    // 0x80800090: nop

    // 0x80800094: b           L_808000C8
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000C8;
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080009C:
    // 0x8080009C: jal         0x800C77DC
    // 0x808000A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800C77DC(rdram, ctx);
        goto after_3;
    // 0x808000A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x808000A4: b           L_808000C8
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000C8;
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000AC:
    // 0x808000AC: jal         0x800C77DC
    // 0x808000B0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_800C77DC(rdram, ctx);
        goto after_4;
    // 0x808000B0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
    // 0x808000B4: b           L_808000C8
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000C8;
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000BC:
    // 0x808000BC: jal         0x800C77DC
    // 0x808000C0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800C77DC(rdram, ctx);
        goto after_5;
    // 0x808000C0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x808000C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000C8:
    // 0x808000C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000CC: jr          $ra
    // 0x808000D0: nop

    return;
    // 0x808000D0: nop

;}
RECOMP_FUNC void func_808000D4_bashoes(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000E0: jal         0x80084420
    // 0x808000E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _baalarm_free(rdram, ctx);
        goto after_0;
    // 0x808000E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808000E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000EC: jal         0x800A0DB8
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DB8(rdram, ctx);
        goto after_1;
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000F4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F8: beql        $t6, $zero, L_8080011C
    if (ctx->r14 == 0) {
        // 0x808000FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080011C;
    }
    goto skip_0;
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800100: jal         0x800C77DC
    // 0x80800104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_2;
    // 0x80800104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80800108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080010C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800110: jal         0x800917A8
    // 0x80800114: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800917A8(rdram, ctx);
        goto after_3;
    // 0x80800114: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
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
RECOMP_FUNC void func_80800128_bashoes(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800134: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800138: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8080013C: jal         0x80084428
    // 0x80800140: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    _baalarm_new(rdram, ctx);
        goto after_0;
    // 0x80800140: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800144: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800148: jal         0x80095774
    // 0x8080014C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x8080014C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800154: jal         0x800A0DB8
    // 0x80800158: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800A0DB8(rdram, ctx);
        goto after_2;
    // 0x80800158: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080015C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80800160: beql        $t6, $zero, L_80800174
    if (ctx->r14 == 0) {
        // 0x80800164: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800174;
    }
    goto skip_0;
    // 0x80800164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800168: jal         0x80000020
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800020_bashoes(rdram, ctx);
        goto after_3;
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800174:
    // 0x80800174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void func_80800180_bashoes(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080018C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800194: jal         0x80091554
    // 0x80800198: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091554(rdram, ctx);
        goto after_0;
    // 0x80800198: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8080019C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: jal         0x80091538
    // 0x808001A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091538(rdram, ctx);
        goto after_1;
    // 0x808001A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x808001AC: lw          $t6, 0x10C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10C);
    // 0x808001B0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x808001BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808001C0: bnel        $t7, $zero, L_8080023C
    if (ctx->r15 != 0) {
        // 0x808001C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_0;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001C8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001CC: jal         0x80084430
    // 0x808001D0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    _baalarm_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808001D0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x808001D4: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808001D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001DC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808001E0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x808001E4: nop

    // 0x808001E8: bc1fl       L_8080023C
    if (!c1cs) {
        // 0x808001EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_1;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808001F0: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: bc1tl       L_8080023C
    if (c1cs) {
        // 0x808001FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_2;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800200: jal         0x80095748
    // 0x80800204: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095748(rdram, ctx);
        goto after_3;
    // 0x80800204: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_3:
    // 0x80800208: beql        $v0, $zero, L_8080023C
    if (ctx->r2 == 0) {
        // 0x8080020C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_3;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800210: jal         0x800A3274
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_4;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800218: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8080021C: bne         $v0, $at, L_8080022C
    if (ctx->r2 != ctx->r1) {
        // 0x80800220: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080022C;
    }
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800224: b           L_80800230
    // 0x80800228: addiu       $a1, $zero, 0x459D
    ctx->r5 = ADD32(0, 0X459D);
        goto L_80800230;
    // 0x80800228: addiu       $a1, $zero, 0x459D
    ctx->r5 = ADD32(0, 0X459D);
L_8080022C:
    // 0x8080022C: addiu       $a1, $zero, 0x3EB
    ctx->r5 = ADD32(0, 0X3EB);
L_80800230:
    // 0x80800230: jal         0x8009DE38
    // 0x80800234: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_5;
    // 0x80800234: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080023C:
    // 0x8080023C: jal         0x80095738
    // 0x80800240: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80095738(rdram, ctx);
        goto after_6;
    // 0x80800240: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x80800244: beq         $v0, $zero, L_80800270
    if (ctx->r2 == 0) {
        // 0x80800248: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800270;
    }
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: jal         0x80095774
    // 0x80800250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80095774(rdram, ctx);
        goto after_7;
    // 0x80800250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x80800254: jal         0x80000020
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800020_bashoes(rdram, ctx);
        goto after_8;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080025C: lw          $t8, 0x10C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10C);
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800268: jal         0x800917A8
    // 0x8080026C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    func_800917A8(rdram, ctx);
        goto after_9;
    // 0x8080026C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    after_9:
L_80800270:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: jal         0x800915AC
    // 0x80800278: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800915AC(rdram, ctx);
        goto after_10;
    // 0x80800278: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x8080027C: beql        $v0, $zero, L_808002A4
    if (ctx->r2 == 0) {
        // 0x80800280: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002A4;
    }
    goto skip_4;
    // 0x80800280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x80800284: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: lbu         $t0, 0x5($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X5);
    // 0x80800290: bnel        $t0, $zero, L_808002A4
    if (ctx->r8 != 0) {
        // 0x80800294: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002A4;
    }
    goto skip_5;
    // 0x80800294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x80800298: jal         0x80000384
    // 0x8080029C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_11;
    // 0x8080029C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x808002A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002A4:
    // 0x808002A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002AC: jr          $ra
    // 0x808002B0: nop

    return;
    // 0x808002B0: nop

;}
RECOMP_FUNC void bashoes_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002BC: jal         0x80000384
    // 0x808002C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    bashoes_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x808002C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808002C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002CC: jr          $ra
    // 0x808002D0: nop

    return;
    // 0x808002D0: nop

;}
RECOMP_FUNC void bashoes_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002DC: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x808002E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808002E4: sb          $zero, 0x10($t6)
    MEM_B(0X10, ctx->r14) = 0;
    // 0x808002E8: lw          $t7, 0x10C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10C);
    // 0x808002EC: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x808002F0: lw          $t8, 0x10C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10C);
    // 0x808002F4: sb          $zero, 0x5($t8)
    MEM_B(0X5, ctx->r24) = 0;
    // 0x808002F8: lw          $t9, 0x10C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10C);
    // 0x808002FC: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
    // 0x80800300: lw          $t0, 0x10C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10C);
    // 0x80800304: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
    // 0x80800308: jal         0x8008DAA8
    // 0x8080030C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008DAA8(rdram, ctx);
        goto after_0;
    // 0x8080030C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800310: beq         $v0, $zero, L_80800360
    if (ctx->r2 == 0) {
        // 0x80800314: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800360;
    }
    // 0x80800314: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800318: jal         0x8009EA4C
    // 0x8080031C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009EA4C(rdram, ctx);
        goto after_1;
    // 0x8080031C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800320: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800324: bne         $v0, $at, L_80800360
    if (ctx->r2 != ctx->r1) {
        // 0x80800328: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800360;
    }
    // 0x80800328: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080032C: jal         0x8009EA70
    // 0x80800330: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009EA70(rdram, ctx);
        goto after_2;
    // 0x80800330: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80800334: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800338: beq         $v0, $zero, L_80800350
    if (ctx->r2 == 0) {
        // 0x8080033C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80800350;
    }
    // 0x8080033C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800340: jal         0x80000384
    // 0x80800344: nop

    bashoes_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x80800344: nop

    after_3:
    // 0x80800348: b           L_8080036C
    // 0x8080034C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080036C;
    // 0x8080034C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800350:
    // 0x80800350: jal         0x80000384
    // 0x80800354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x80800354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800358: b           L_8080036C
    // 0x8080035C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080036C;
    // 0x8080035C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800360:
    // 0x80800360: jal         0x80000384
    // 0x80800364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x80800364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080036C:
    // 0x8080036C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800370: jr          $ra
    // 0x80800374: nop

    return;
    // 0x80800374: nop

;}
RECOMP_FUNC void bashoes_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800378: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x8080037C: jr          $ra
    // 0x80800380: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
    return;
    // 0x80800380: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bashoes_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800388: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080038C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800390: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800398: lw          $v0, 0x10C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10C);
    // 0x8080039C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808003A4: lbu         $s1, 0x4($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X4);
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003AC: beq         $s1, $at, L_808003D0
    if (ctx->r17 == ctx->r1) {
        // 0x808003B0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808003D0;
    }
    // 0x808003B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808003B4: beq         $s1, $at, L_808003E0
    if (ctx->r17 == ctx->r1) {
        // 0x808003B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003E0;
    }
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808003C0: beq         $s1, $at, L_808003F0
    if (ctx->r17 == ctx->r1) {
        // 0x808003C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C8: b           L_80800400
    // 0x808003CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
        goto L_80800400;
    // 0x808003CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_808003D0:
    // 0x808003D0: jal         0x800000D4
    // 0x808003D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808000D4_bashoes(rdram, ctx);
        goto after_0;
    // 0x808003D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x808003D8: b           L_808003FC
    // 0x808003DC: lw          $v0, 0x10C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10C);
        goto L_808003FC;
    // 0x808003DC: lw          $v0, 0x10C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10C);
L_808003E0:
    // 0x808003E0: jal         0x800000D4
    // 0x808003E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808000D4_bashoes(rdram, ctx);
        goto after_1;
    // 0x808003E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x808003E8: b           L_808003FC
    // 0x808003EC: lw          $v0, 0x10C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10C);
        goto L_808003FC;
    // 0x808003EC: lw          $v0, 0x10C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10C);
L_808003F0:
    // 0x808003F0: jal         0x800000D4
    // 0x808003F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808000D4_bashoes(rdram, ctx);
        goto after_2;
    // 0x808003F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808003F8: lw          $v0, 0x10C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10C);
L_808003FC:
    // 0x808003FC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_80800400:
    // 0x80800400: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x80800404: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80800408: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8080040C: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x80800410: beq         $at, $zero, L_808004D8
    if (ctx->r1 == 0) {
        // 0x80800414: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_808004D8;
    }
    // 0x80800414: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80800418: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(47, 0XAA0) << 16);
    // 0x8080041C: addu        $at, $at, $t8
    gpr jr_addend_80800424 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80800420: lw          $t8, 0xAA0($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(47, 0XAA0));
    // 0x80800424: jr          $t8
    // 0x80800428: nop

    switch (jr_addend_80800424 >> 2) {
        case 0: goto L_8080042C; break;
        case 1: goto L_80800444; break;
        case 2: goto L_8080045C; break;
        case 3: goto L_80800488; break;
        case 4: goto L_808004B4; break;
        default: switch_error(__func__, 0x80800424, 0x80800AA0);
    }
    // 0x80800428: nop

L_8080042C:
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800430: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80800434: jal         0x8009ADF0
    // 0x80800438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_3;
    // 0x80800438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8080043C: b           L_808004DC
    // 0x80800440: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
        goto L_808004DC;
    // 0x80800440: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
L_80800444:
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800448: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8080044C: jal         0x8009ADF0
    // 0x80800450: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_4;
    // 0x80800450: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80800454: b           L_808004DC
    // 0x80800458: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
        goto L_808004DC;
    // 0x80800458: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
L_8080045C:
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800460: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80800464: jal         0x8009ADF0
    // 0x80800468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_5;
    // 0x80800468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80800474: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80800478: jal         0x80000128
    // 0x8080047C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80800128_bashoes(rdram, ctx);
        goto after_6;
    // 0x8080047C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x80800480: b           L_808004DC
    // 0x80800484: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
        goto L_808004DC;
    // 0x80800484: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
L_80800488:
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080048C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80800490: jal         0x8009ADF0
    // 0x80800494: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_7;
    // 0x80800494: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080049C: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x808004A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808004A4: jal         0x80000128
    // 0x808004A8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80800128_bashoes(rdram, ctx);
        goto after_8;
    // 0x808004A8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_8:
    // 0x808004AC: b           L_808004DC
    // 0x808004B0: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
        goto L_808004DC;
    // 0x808004B0: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
L_808004B4:
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x808004BC: jal         0x8009ADF0
    // 0x808004C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_9;
    // 0x808004C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C8: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x808004CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x808004D0: jal         0x80000128
    // 0x808004D4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80800128_bashoes(rdram, ctx);
        goto after_10;
    // 0x808004D4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_10:
L_808004D8:
    // 0x808004D8: lw          $t9, 0x10C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10C);
L_808004DC:
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808004E4: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
    // 0x808004E8: beql        $v0, $zero, L_808004FC
    if (ctx->r2 == 0) {
        // 0x808004EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808004FC;
    }
    goto skip_0;
    // 0x808004EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808004F0: jalr        $v0
    // 0x808004F4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x808004F4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x808004F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004FC:
    // 0x808004FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800500: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800504: jr          $ra
    // 0x80800508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bashoes_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080050C: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x80800510: jr          $ra
    // 0x80800514: sw          $a1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r5;
    return;
    // 0x80800514: sw          $a1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bashoes_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800518: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x8080051C: jr          $ra
    // 0x80800520: sw          $a1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r5;
    return;
    // 0x80800520: sw          $a1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bashoes_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800524: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x80800528: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080052C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800530: lwc1        $f6, 0x14($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X14);
    // 0x80800534: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800538: nop

    // 0x8080053C: bc1f        L_8080054C
    if (!c1cs) {
        // 0x80800540: nop
    
            goto L_8080054C;
    }
    // 0x80800540: nop

    // 0x80800544: jr          $ra
    // 0x80800548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080054C:
    // 0x8080054C: jr          $ra
    // 0x80800550: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800550: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void bashoes_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800554: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800558: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x8080055C: jr          $ra
    // 0x80800560: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800560: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bashoes_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x80800568: jr          $ra
    // 0x8080056C: sb          $a1, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r5;
    return;
    // 0x8080056C: sb          $a1, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bashoes_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800570: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800574: lw          $t6, 0x10C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10C);
    // 0x80800578: jr          $ra
    // 0x8080057C: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8080057C: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bashoes_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800588: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080058C: lw          $v0, 0x10C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10C);
    // 0x80800590: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800594: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80800598: beql        $v1, $zero, L_808005B0
    if (ctx->r3 == 0) {
        // 0x8080059C: lbu         $t6, 0x4($v0)
        ctx->r14 = MEM_BU(ctx->r2, 0X4);
            goto L_808005B0;
    }
    goto skip_0;
    // 0x8080059C: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    skip_0:
    // 0x808005A0: jalr        $v1
    // 0x808005A4: lbu         $a1, 0x4($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x808005A4: lbu         $a1, 0x4($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X4);
    after_0:
    // 0x808005A8: lw          $v0, 0x10C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10C);
    // 0x808005AC: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
L_808005B0:
    // 0x808005B0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808005B4: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x808005B8: beq         $at, $zero, L_8080073C
    if (ctx->r1 == 0) {
        // 0x808005BC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8080073C;
    }
    // 0x808005BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808005C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(47, 0XAB4) << 16);
    // 0x808005C4: addu        $at, $at, $t7
    gpr jr_addend_808005CC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808005C8: lw          $t7, 0xAB4($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(47, 0XAB4));
    // 0x808005CC: jr          $t7
    // 0x808005D0: nop

    switch (jr_addend_808005CC >> 2) {
        case 0: goto L_8080073C; break;
        case 1: goto L_808005D4; break;
        case 2: goto L_80800640; break;
        case 3: goto L_80800694; break;
        case 4: goto L_808006F0; break;
        default: switch_error(__func__, 0x808005CC, 0x80800AB4);
    }
    // 0x808005D0: nop

L_808005D4:
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005D8: jal         0x80095738
    // 0x808005DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x808005DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x808005E0: beq         $v0, $zero, L_808005FC
    if (ctx->r2 == 0) {
        // 0x808005E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005FC;
    }
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005EC: jal         0x80000384
    // 0x808005F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x808005F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x808005F4: b           L_80800740
    // 0x808005F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x808005F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808005FC:
    // 0x808005FC: jal         0x80095738
    // 0x80800600: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80095738(rdram, ctx);
        goto after_3;
    // 0x80800600: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_3:
    // 0x80800604: beq         $v0, $zero, L_80800620
    if (ctx->r2 == 0) {
        // 0x80800608: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800620;
    }
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800610: jal         0x80000384
    // 0x80800614: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x80800614: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x80800618: b           L_80800740
    // 0x8080061C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x8080061C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800620:
    // 0x80800620: jal         0x80095738
    // 0x80800624: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80095738(rdram, ctx);
        goto after_5;
    // 0x80800624: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_5:
    // 0x80800628: beq         $v0, $zero, L_8080073C
    if (ctx->r2 == 0) {
        // 0x8080062C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080073C;
    }
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800630: jal         0x80000384
    // 0x80800634: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x80800634: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x80800638: b           L_80800740
    // 0x8080063C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x8080063C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800640:
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800644: jal         0x80000180
    // 0x80800648: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80800180_bashoes(rdram, ctx);
        goto after_7;
    // 0x80800648: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800650: jal         0x80095738
    // 0x80800654: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80095738(rdram, ctx);
        goto after_8;
    // 0x80800654: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_8:
    // 0x80800658: beq         $v0, $zero, L_80800674
    if (ctx->r2 == 0) {
        // 0x8080065C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800674;
    }
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800664: jal         0x80000384
    // 0x80800668: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_9;
    // 0x80800668: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x8080066C: b           L_80800740
    // 0x80800670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x80800670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800674:
    // 0x80800674: jal         0x80095738
    // 0x80800678: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80095738(rdram, ctx);
        goto after_10;
    // 0x80800678: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_10:
    // 0x8080067C: beq         $v0, $zero, L_8080073C
    if (ctx->r2 == 0) {
        // 0x80800680: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080073C;
    }
    // 0x80800680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800684: jal         0x80000384
    // 0x80800688: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_11;
    // 0x80800688: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_11:
    // 0x8080068C: b           L_80800740
    // 0x80800690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x80800690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800694:
    // 0x80800694: jal         0x800D9078
    // 0x80800698: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    func_800D9078(rdram, ctx);
        goto after_12;
    // 0x80800698: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    after_12:
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A0: jal         0x80000180
    // 0x808006A4: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80800180_bashoes(rdram, ctx);
        goto after_13;
    // 0x808006A4: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_13:
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: jal         0x80095738
    // 0x808006B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80095738(rdram, ctx);
        goto after_14;
    // 0x808006B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_14:
    // 0x808006B4: beq         $v0, $zero, L_808006D0
    if (ctx->r2 == 0) {
        // 0x808006B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D0;
    }
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C0: jal         0x80000384
    // 0x808006C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_15;
    // 0x808006C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x808006C8: b           L_80800740
    // 0x808006CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x808006CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808006D0:
    // 0x808006D0: jal         0x80095738
    // 0x808006D4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80095738(rdram, ctx);
        goto after_16;
    // 0x808006D4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_16:
    // 0x808006D8: beq         $v0, $zero, L_8080073C
    if (ctx->r2 == 0) {
        // 0x808006DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080073C;
    }
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E0: jal         0x80000384
    // 0x808006E4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_17;
    // 0x808006E4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_17:
    // 0x808006E8: b           L_80800740
    // 0x808006EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x808006EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808006F0:
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F4: jal         0x80000180
    // 0x808006F8: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80800180_bashoes(rdram, ctx);
        goto after_18;
    // 0x808006F8: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_18:
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800700: jal         0x80095738
    // 0x80800704: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80095738(rdram, ctx);
        goto after_19;
    // 0x80800704: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_19:
    // 0x80800708: beq         $v0, $zero, L_80800724
    if (ctx->r2 == 0) {
        // 0x8080070C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800724;
    }
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800714: jal         0x80000384
    // 0x80800718: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_20;
    // 0x80800718: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_20:
    // 0x8080071C: b           L_80800740
    // 0x80800720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800740;
    // 0x80800720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800724:
    // 0x80800724: jal         0x80095738
    // 0x80800728: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80095738(rdram, ctx);
        goto after_21;
    // 0x80800728: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_21:
    // 0x8080072C: beq         $v0, $zero, L_8080073C
    if (ctx->r2 == 0) {
        // 0x80800730: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080073C;
    }
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800734: jal         0x80000384
    // 0x80800738: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_22;
    // 0x80800738: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_22:
L_8080073C:
    // 0x8080073C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800740:
    // 0x80800740: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800744: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800748: jr          $ra
    // 0x8080074C: nop

    return;
    // 0x8080074C: nop

;}
RECOMP_FUNC void bashoes_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800758: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080075C: jal         0x8009E69C
    // 0x80800760: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x80800760: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80800764: jal         0x800F6B34
    // 0x80800768: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800F6B34(rdram, ctx);
        goto after_1;
    // 0x80800768: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8080076C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80800770: bnel        $t6, $zero, L_8080078C
    if (ctx->r14 != 0) {
        // 0x80800774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080078C;
    }
    goto skip_0;
    // 0x80800774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800778: bne         $v0, $zero, L_80800788
    if (ctx->r2 != 0) {
        // 0x8080077C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800788;
    }
    // 0x8080077C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800780: jal         0x80000384
    // 0x80800784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x80800784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800788:
    // 0x80800788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080078C:
    // 0x8080078C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800790: jr          $ra
    // 0x80800794: nop

    return;
    // 0x80800794: nop

;}
RECOMP_FUNC void bashoes_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080079C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007A8: jal         0x8009E6C4
    // 0x808007AC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x808007AC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x808007B0: bnel        $v0, $zero, L_80800854
    if (ctx->r2 != 0) {
        // 0x808007B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800854;
    }
    goto skip_0;
    // 0x808007B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808007B8: lw          $t6, 0x10C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10C);
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C0: sw          $zero, 0x8($t6)
    MEM_W(0X8, ctx->r14) = 0;
    // 0x808007C4: lw          $t7, 0x10C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10C);
    // 0x808007C8: jal         0x80000008
    // 0x808007CC: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    bashoes_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808007CC: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    after_1:
    // 0x808007D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808007D4: bne         $v0, $at, L_80800850
    if (ctx->r2 != ctx->r1) {
        // 0x808007D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800850;
    }
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007DC: jal         0x80095738
    // 0x808007E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x808007E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x808007E4: beq         $v0, $zero, L_80800800
    if (ctx->r2 == 0) {
        // 0x808007E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800800;
    }
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F0: jal         0x80000384
    // 0x808007F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x808007F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808007F8: b           L_80800854
    // 0x808007FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800854;
    // 0x808007FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800800:
    // 0x80800800: jal         0x80095738
    // 0x80800804: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x80800804: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_4:
    // 0x80800808: beq         $v0, $zero, L_80800824
    if (ctx->r2 == 0) {
        // 0x8080080C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800824;
    }
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800814: jal         0x80000384
    // 0x80800818: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x80800818: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x8080081C: b           L_80800854
    // 0x80800820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800854;
    // 0x80800820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800824:
    // 0x80800824: jal         0x80095738
    // 0x80800828: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80095738(rdram, ctx);
        goto after_6;
    // 0x80800828: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_6:
    // 0x8080082C: beq         $v0, $zero, L_80800848
    if (ctx->r2 == 0) {
        // 0x80800830: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800848;
    }
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800838: jal         0x80000384
    // 0x8080083C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_7;
    // 0x8080083C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x80800840: b           L_80800854
    // 0x80800844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800854;
    // 0x80800844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800848:
    // 0x80800848: jal         0x80000384
    // 0x8080084C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    bashoes_entrypoint_6(rdram, ctx);
        goto after_8;
    // 0x8080084C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
L_80800850:
    // 0x80800850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800854:
    // 0x80800854: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080085C: jr          $ra
    // 0x80800860: nop

    return;
    // 0x80800860: nop

;}
RECOMP_FUNC void bashoes_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800864: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080086C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800870: jal         0x800B53A4
    // 0x80800874: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x80800874: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x80800878: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8080087C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800880: jal         0x8009C128
    // 0x80800884: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800884: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800888: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(47, 0XAD0) << 16);
    // 0x8080088C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800890: addiu       $t6, $t6, 0xAD0
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(47, 0XAD0));
    // 0x80800894: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800898: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8080089C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808008A0: jal         0x800BABB8
    // 0x808008A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808008A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x808008A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808008AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808008B0: jr          $ra
    // 0x808008B4: nop

    return;
    // 0x808008B4: nop

;}
RECOMP_FUNC void bashoes_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808008BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008C0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808008C4: jal         0x800B53A4
    // 0x808008C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x808008C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x808008CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808008D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808008D4: jal         0x8009C128
    // 0x808008D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808008D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808008DC: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(47, 0XB4C) << 16);
    // 0x808008E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808008E4: addiu       $t6, $t6, 0xB4C
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(47, 0XB4C));
    // 0x808008E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808008EC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808008F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808008F4: jal         0x800BABB8
    // 0x808008F8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808008F8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x808008FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800900: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800904: jr          $ra
    // 0x80800908: nop

    return;
    // 0x80800908: nop

;}
RECOMP_FUNC void bashoes_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080090C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800910: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800914: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800918: jal         0x800B53A4
    // 0x8080091C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x8080091C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80800920: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800924: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800928: jal         0x80092E08
    // 0x8080092C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092E08(rdram, ctx);
        goto after_1;
    // 0x8080092C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800930: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800934: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800938: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8080093C: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(47, 0XB90) << 16);
    // 0x80800940: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800944: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800948: addiu       $t6, $t6, 0xB90
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(47, 0XB90));
    // 0x8080094C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800950: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800954: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80800958: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080095C: jal         0x800BABB8
    // 0x80800960: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x80800960: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x80800964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080096C: jr          $ra
    // 0x80800970: nop

    return;
    // 0x80800970: nop

;}
RECOMP_FUNC void bashoes_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800974: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080097C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800980: jal         0x800B53A4
    // 0x80800984: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x80800984: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80800988: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8080098C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800990: jal         0x80092E2C
    // 0x80800994: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092E2C(rdram, ctx);
        goto after_1;
    // 0x80800994: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800998: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080099C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808009A0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808009A4: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(47, 0XB90) << 16);
    // 0x808009A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808009AC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x808009B0: addiu       $t6, $t6, 0xB90
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(47, 0XB90));
    // 0x808009B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808009B8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808009BC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x808009C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808009C4: jal         0x800BABB8
    // 0x808009C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808009C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x808009CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808009D4: jr          $ra
    // 0x808009D8: nop

    return;
    // 0x808009D8: nop

;}
RECOMP_FUNC void bashoes_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808009E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009E4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x808009E8: jal         0x8009C128
    // 0x808009EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808009EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x808009F0: jal         0x8009BB5C
    // 0x808009F4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8009BB5C(rdram, ctx);
        goto after_1;
    // 0x808009F4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_1:
    // 0x808009F8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808009FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A00: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800A04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800A08: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80800A0C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80800A10: jal         0x800F10B4
    // 0x80800A14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80800A14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800A18: jal         0x80090010
    // 0x80800A1C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_80090010(rdram, ctx);
        goto after_3;
    // 0x80800A1C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x80800A20: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A24: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80800A28: jal         0x800EFCD8
    // 0x80800A2C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800EFCD8(rdram, ctx);
        goto after_4;
    // 0x80800A2C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x80800A30: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800A34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800A38: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800A3C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800A40: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80800A44: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80800A48: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800A4C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800A50: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800A54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800A58: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(47, 0XBD4) << 16);
    // 0x80800A5C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80800A60: addiu       $t6, $t6, 0xBD4
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(47, 0XBD4));
    // 0x80800A64: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80800A68: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80800A6C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80800A70: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800A74: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800A78: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800A80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800A84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80800A88: jal         0x800BBCB8
    // 0x80800A8C: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    func_800BBCB8(rdram, ctx);
        goto after_5;
    // 0x80800A8C: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x80800A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800A98: jr          $ra
    // 0x80800A9C: nop

    return;
    // 0x80800A9C: nop

;}
RECOMP_FUNC void bashoessuck_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80800004: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8080000C: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80800010: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80800014: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80800018: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8080001C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80800020: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80800024: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800028: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080002C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80800030: jal         0x8009C128
    // 0x80800034: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800034: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_0:
    // 0x80800038: lui         $s2, 0x0
    ctx->r18 = S32(RELOC_HI16(48, 0X740) << 16);
    // 0x8080003C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(48, 0X730) << 16);
    // 0x80800040: lui         $s7, 0x0
    ctx->r23 = S32(RELOC_HI16(48, 0X800) << 16);
    // 0x80800044: lui         $s6, 0x2
    ctx->r22 = S32(0X2 << 16);
    // 0x80800048: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
    // 0x8080004C: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
    // 0x80800050: ori         $s6, $s6, 0x20
    ctx->r22 = ctx->r22 | 0X20;
    // 0x80800054: addiu       $s7, $s7, 0x800
    ctx->r23 = ADD32(ctx->r23, (int16_t)RELOC_LO16(48, 0X800));
    // 0x80800058: lwc1        $f20, 0x730($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X730));
    // 0x8080005C: addiu       $s2, $s2, 0x740
    ctx->r18 = ADD32(ctx->r18, (int16_t)RELOC_LO16(48, 0X740));
    // 0x80800060: addiu       $s5, $sp, 0x68
    ctx->r21 = ADD32(ctx->r29, 0X68);
    // 0x80800064: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x80800068: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x8080006C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
L_80800070:
    // 0x80800070: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x80800074: addiu       $v0, $sp, 0x80
    ctx->r2 = ADD32(ctx->r29, 0X80);
L_80800078:
    // 0x80800078: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8080007C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800080: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80800084: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x80800088: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080008C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80800090: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80800094: bne         $at, $zero, L_80800078
    if (ctx->r1 != 0) {
        // 0x80800098: swc1        $f8, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
            goto L_80800078;
    }
    // 0x80800098: swc1        $f8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
    // 0x8080009C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x808000A0: addiu       $v0, $sp, 0x80
    ctx->r2 = ADD32(ctx->r29, 0X80);
    // 0x808000A4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x808000A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x808000AC: beq         $a0, $s1, L_808000D4
    if (ctx->r4 == ctx->r17) {
        // 0x808000B0: lwc1        $f18, 0xC($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
            goto L_808000D4;
    }
    // 0x808000B0: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
L_808000B4:
    // 0x808000B4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808000B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x808000BC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x808000C0: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x808000C4: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x808000C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x808000CC: bne         $a0, $s1, L_808000B4
    if (ctx->r4 != ctx->r17) {
        // 0x808000D0: swc1        $f16, -0x8($a0)
        MEM_W(-0X8, ctx->r4) = ctx->f16.u32l;
            goto L_808000B4;
    }
    // 0x808000D0: swc1        $f16, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f16.u32l;
L_808000D4:
    // 0x808000D4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808000D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x808000DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x808000E0: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x808000E4: swc1        $f16, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f16.u32l;
    // 0x808000E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x808000EC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x808000F0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x808000F4: jal         0x800C6A7C
    // 0x808000F8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_800C6A7C(rdram, ctx);
        goto after_1;
    // 0x808000F8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x808000FC: beq         $v0, $zero, L_80800128
    if (ctx->r2 == 0) {
        // 0x80800100: lwc1        $f4, 0x60($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
            goto L_80800128;
    }
    // 0x80800100: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80800104: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80800108: nop

    // 0x8080010C: bc1fl       L_8080012C
    if (!c1cs) {
        // 0x80800110: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_8080012C;
    }
    goto skip_0;
    // 0x80800110: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x80800114: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80800118: jal         0x800EE7F8
    // 0x8080011C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8080011C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80800120: b           L_80800154
    // 0x80800124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800154;
    // 0x80800124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800128:
    // 0x80800128: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8080012C:
    // 0x8080012C: bnel        $s2, $s7, L_80800070
    if (ctx->r18 != ctx->r23) {
        // 0x80800130: addiu       $a0, $sp, 0x74
        ctx->r4 = ADD32(ctx->r29, 0X74);
            goto L_80800070;
    }
    goto skip_1;
    // 0x80800130: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    skip_1:
    // 0x80800134: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800138: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8080013C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800140: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800144: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800148: jal         0x800EFA4C
    // 0x8080014C: nop

    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x8080014C: nop

    after_3:
    // 0x80800150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800154:
    // 0x80800154: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800158: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8080015C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800160: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800164: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80800168: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8080016C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80800170: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80800174: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80800178: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8080017C: jr          $ra
    // 0x80800180: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80800180: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void bashoessuck_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080018C: jal         0x8009C128
    // 0x80800190: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800190: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800194: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    // 0x80800198: jal         0x80088280
    // 0x8080019C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _gccubesearch_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080019C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x808001A0: beq         $v0, $zero, L_808001B0
    if (ctx->r2 == 0) {
        // 0x808001A4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808001B0;
    }
    // 0x808001A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001A8: jal         0x80088C00
    // 0x808001AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_2;
    // 0x808001AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_808001B0:
    // 0x808001B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001B8: jr          $ra
    // 0x808001BC: nop

    return;
    // 0x808001BC: nop

;}
RECOMP_FUNC void bashoessuck_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001CC: jal         0x800932CC
    // 0x808001D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800932CC(rdram, ctx);
        goto after_0;
    // 0x808001D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808001D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001D8: jal         0x8009BF5C
    // 0x808001DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808001DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808001E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001E4: jal         0x8009C4CC
    // 0x808001E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x808001E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001F0: jal         0x800961AC
    // 0x808001F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808001F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800200: jr          $ra
    // 0x80800204: nop

    return;
    // 0x80800204: nop

;}
RECOMP_FUNC void bashoessuck_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080020C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800210: jal         0x800961AC
    // 0x80800214: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800961AC(rdram, ctx);
        goto after_0;
    // 0x80800214: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80800218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080021C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800220: jr          $ra
    // 0x80800224: nop

    return;
    // 0x80800224: nop

;}
RECOMP_FUNC void bashoessuck_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800228: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8080022C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800234: jal         0x80092BC4
    // 0x80800238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80092BC4(rdram, ctx);
        goto after_0;
    // 0x80800238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080023C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: jal         0x800932CC
    // 0x80800248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800932CC(rdram, ctx);
        goto after_1;
    // 0x80800248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080024C: jal         0x80084E98
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800254: bne         $v0, $zero, L_80800294
    if (ctx->r2 != 0) {
        // 0x80800258: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800294;
    }
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080025C: jal         0x8009BB18
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_3;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800264: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800268: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080026C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800270: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800274: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800278: jal         0x800EFA4C
    // 0x8080027C: nop

    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x8080027C: nop

    after_4:
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: jal         0x8009C914
    // 0x80800288: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x80800288: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x8080028C: b           L_808004A8
    // 0x80800290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808004A8;
    // 0x80800290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800294:
    // 0x80800294: jal         0x80084E78
    // 0x80800298: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    _bamovespline_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x80800298: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_6:
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A0: jal         0x80000000
    // 0x808002A4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    bashoessuck_entrypoint_0(rdram, ctx);
        goto after_7;
    // 0x808002A4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_7:
    // 0x808002A8: beq         $v0, $zero, L_808004A4
    if (ctx->r2 == 0) {
        // 0x808002AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004A4;
    }
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B0: jal         0x800932CC
    // 0x808002B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800932CC(rdram, ctx);
        goto after_8;
    // 0x808002B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002BC: jal         0x80085028
    // 0x808002C0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _bashoes_entrypoint_10(rdram, ctx);
        goto after_9;
    // 0x808002C0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x808002C4: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x808002C8: jal         0x800EEAA4
    // 0x808002CC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800EEAA4(rdram, ctx);
        goto after_10;
    // 0x808002CC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_10:
    // 0x808002D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002D4: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x808002D8: jal         0x800EFA20
    // 0x808002DC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800EFA20(rdram, ctx);
        goto after_11;
    // 0x808002DC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x808002E0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x808002E4: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x808002E8: jal         0x800EFB24
    // 0x808002EC: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800EFB24(rdram, ctx);
        goto after_12;
    // 0x808002EC: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_12:
    // 0x808002F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808002F4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x808002F8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808002FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800300: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800304: jal         0x800EFA4C
    // 0x80800308: nop

    func_800EFA4C(rdram, ctx);
        goto after_13;
    // 0x80800308: nop

    after_13:
    // 0x8080030C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(48, 0X734) << 16);
    // 0x80800310: lwc1        $f4, 0x734($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X734));
    // 0x80800314: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800318: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8080031C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80800320: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800324: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80800328: bc1f        L_80800348
    if (!c1cs) {
        // 0x8080032C: nop
    
            goto L_80800348;
    }
    // 0x8080032C: nop

    // 0x80800330: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800334: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800338: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8080033C: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x80800340: b           L_8080041C
    // 0x80800344: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
        goto L_8080041C;
    // 0x80800344: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
L_80800348:
    // 0x80800348: jal         0x800EFA4C
    // 0x8080034C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_800EFA4C(rdram, ctx);
        goto after_14;
    // 0x8080034C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_14:
    // 0x80800350: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80800354: jal         0x800F1EA4
    // 0x80800358: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    func_800F1EA4(rdram, ctx);
        goto after_15;
    // 0x80800358: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    after_15:
    // 0x8080035C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80800360: jal         0x800F1C98
    // 0x80800364: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800F1C98(rdram, ctx);
        goto after_16;
    // 0x80800364: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_16:
    // 0x80800368: jal         0x80013AAC
    // 0x8080036C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013AAC(rdram, ctx);
        goto after_17;
    // 0x8080036C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_17:
    // 0x80800370: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x80800374: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x80800378: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x8080037C: jal         0x800EE97C
    // 0x80800380: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800EE97C(rdram, ctx);
        goto after_18;
    // 0x80800380: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_18:
    // 0x80800384: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80800388: jal         0x800F1C98
    // 0x8080038C: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    func_800F1C98(rdram, ctx);
        goto after_19;
    // 0x8080038C: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    after_19:
    // 0x80800390: jal         0x80013AAC
    // 0x80800394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013AAC(rdram, ctx);
        goto after_20;
    // 0x80800394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_20:
    // 0x80800398: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8080039C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808003A0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x808003A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808003A8: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x808003AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808003B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808003B4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x808003B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808003BC: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x808003C0: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x808003C4: bc1f        L_808003D8
    if (!c1cs) {
        // 0x808003C8: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_808003D8;
    }
    // 0x808003C8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x808003CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808003D0: nop

    // 0x808003D4: sub.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f12.fl;
L_808003D8:
    // 0x808003D8: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x808003DC: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x808003E0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x808003E4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x808003E8: jal         0x800EF934
    // 0x808003EC: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    func_800EF934(rdram, ctx);
        goto after_21;
    // 0x808003EC: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    after_21:
    // 0x808003F0: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x808003F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808003F8: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x808003FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800400: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800404: nop

    // 0x80800408: bc1fl       L_80800420
    if (!c1cs) {
        // 0x8080040C: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_80800420;
    }
    goto skip_0;
    // 0x8080040C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x80800410: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800414: nop

    // 0x80800418: sub.s       $f2, $f8, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f2.fl;
L_8080041C:
    // 0x8080041C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_80800420:
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800424: beql        $t6, $zero, L_80800458
    if (ctx->r14 == 0) {
        // 0x80800428: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800458;
    }
    goto skip_1;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080042C: jal         0x8009BB18
    // 0x80800430: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    func_8009BB18(rdram, ctx);
        goto after_22;
    // 0x80800430: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    after_22:
    // 0x80800434: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800438: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080043C: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80800440: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80800444: nop

    // 0x80800448: bc1fl       L_80800458
    if (!c1cs) {
        // 0x8080044C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800458;
    }
    goto skip_2;
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800450: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800458:
    // 0x80800458: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x8080045C: jal         0x800932BC
    // 0x80800460: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    func_800932BC(rdram, ctx);
        goto after_23;
    // 0x80800460: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    after_23:
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800468: jal         0x8009BF5C
    // 0x8080046C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    func_8009BF5C(rdram, ctx);
        goto after_24;
    // 0x8080046C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    after_24:
    // 0x80800470: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800478: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080047C: jal         0x8009C914
    // 0x80800480: nop

    func_8009C914(rdram, ctx);
        goto after_25;
    // 0x80800480: nop

    after_25:
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800488: jal         0x8009C4CC
    // 0x8080048C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_26;
    // 0x8080048C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_26:
    // 0x80800490: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80800494: bnel        $t7, $zero, L_808004A8
    if (ctx->r15 != 0) {
        // 0x80800498: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808004A8;
    }
    goto skip_3;
    // 0x80800498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8080049C: jal         0x8009C974
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_27;
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
L_808004A4:
    // 0x808004A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004A8:
    // 0x808004A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x808004B0: jr          $ra
    // 0x808004B4: nop

    return;
    // 0x808004B4: nop

;}
RECOMP_FUNC void bashoessuck_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808004BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004C0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x808004C4: jal         0x80085020
    // 0x808004C8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    _bashoes_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x808004C8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808004CC: beq         $v0, $zero, L_808004DC
    if (ctx->r2 == 0) {
        // 0x808004D0: lw          $a0, 0x78($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X78);
            goto L_808004DC;
    }
    // 0x808004D0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x808004D4: b           L_80800718
    // 0x808004D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x808004D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808004DC:
    // 0x808004DC: jal         0x8009BB24
    // 0x808004E0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x808004E0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x808004E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808004E8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x808004EC: jal         0x800EEFD4
    // 0x808004F0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_800EEFD4(rdram, ctx);
        goto after_2;
    // 0x808004F0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x808004F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808004F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808004FC: nop

    // 0x80800500: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800504: nop

    // 0x80800508: bc1f        L_80800518
    if (!c1cs) {
        // 0x8080050C: nop
    
            goto L_80800518;
    }
    // 0x8080050C: nop

    // 0x80800510: b           L_80800718
    // 0x80800514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x80800514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800518:
    // 0x80800518: jal         0x8009C984
    // 0x8080051C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    func_8009C984(rdram, ctx);
        goto after_3;
    // 0x8080051C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_3:
    // 0x80800520: lui         $a0, 0x0
    ctx->r4 = S32(RELOC_HI16(48, 0X800) << 16);
    // 0x80800524: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x80800528: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X800));
    // 0x8080052C: jal         0x800882A0
    // 0x80800530: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    _gccubesearch_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x80800530: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    after_4:
    // 0x80800534: bne         $v0, $zero, L_80800544
    if (ctx->r2 != 0) {
        // 0x80800538: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800544;
    }
    // 0x80800538: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080053C: b           L_80800718
    // 0x80800540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x80800540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800544:
    // 0x80800544: jal         0x80088C00
    // 0x80800548: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_5;
    // 0x80800548: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x8080054C: jal         0x80088498
    // 0x80800550: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    _glsplinefind_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x80800550: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x80800554: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800558: jal         0x800D7520
    // 0x8080055C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D7520(rdram, ctx);
        goto after_7;
    // 0x8080055C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x80800560: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800564: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800568: jal         0x800C7A68
    // 0x8080056C: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    func_800C7A68(rdram, ctx);
        goto after_8;
    // 0x8080056C: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    after_8:
    // 0x80800570: lui         $a0, 0x0
    ctx->r4 = S32(RELOC_HI16(48, 0X800) << 16);
    // 0x80800574: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X800));
    // 0x80800578: jal         0x800882A0
    // 0x8080057C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    _gccubesearch_entrypoint_5(rdram, ctx);
        goto after_9;
    // 0x8080057C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    after_9:
    // 0x80800580: bnel        $v0, $zero, L_80800594
    if (ctx->r2 != 0) {
        // 0x80800584: lhu         $v1, 0x8($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X8);
            goto L_80800594;
    }
    goto skip_0;
    // 0x80800584: lhu         $v1, 0x8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X8);
    skip_0:
    // 0x80800588: b           L_80800718
    // 0x8080058C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x8080058C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800590: lhu         $v1, 0x8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X8);
L_80800594:
    // 0x80800594: addiu       $at, $zero, 0x16B
    ctx->r1 = ADD32(0, 0X16B);
    // 0x80800598: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8080059C: beq         $v1, $at, L_808005B4
    if (ctx->r3 == ctx->r1) {
        // 0x808005A0: addiu       $at, $zero, 0x16C
        ctx->r1 = ADD32(0, 0X16C);
            goto L_808005B4;
    }
    // 0x808005A0: addiu       $at, $zero, 0x16C
    ctx->r1 = ADD32(0, 0X16C);
    // 0x808005A4: beq         $v1, $at, L_808005C4
    if (ctx->r3 == ctx->r1) {
        // 0x808005A8: lw          $a0, 0x78($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X78);
            goto L_808005C4;
    }
    // 0x808005A8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x808005AC: b           L_808005D0
    // 0x808005B0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
        goto L_808005D0;
    // 0x808005B0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
L_808005B4:
    // 0x808005B4: jal         0x80085030
    // 0x808005B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_11(rdram, ctx);
        goto after_10;
    // 0x808005B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808005BC: b           L_808005D0
    // 0x808005C0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
        goto L_808005D0;
    // 0x808005C0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
L_808005C4:
    // 0x808005C4: jal         0x80085030
    // 0x808005C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_11(rdram, ctx);
        goto after_11;
    // 0x808005C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x808005CC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
L_808005D0:
    // 0x808005D0: jal         0x8009C128
    // 0x808005D4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_8009C128(rdram, ctx);
        goto after_12;
    // 0x808005D4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_12:
    // 0x808005D8: jal         0x800D7520
    // 0x808005DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800D7520(rdram, ctx);
        goto after_13;
    // 0x808005DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x808005E0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808005E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808005E8: jal         0x800C82CC
    // 0x808005EC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800C82CC(rdram, ctx);
        goto after_14;
    // 0x808005EC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_14:
    // 0x808005F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005F4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x808005F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808005FC: jal         0x800C7A68
    // 0x80800600: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800C7A68(rdram, ctx);
        goto after_15;
    // 0x80800600: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_15:
    // 0x80800604: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800608: jal         0x800EEB40
    // 0x8080060C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800EEB40(rdram, ctx);
        goto after_16;
    // 0x8080060C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_16:
    // 0x80800610: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(48, 0X738) << 16);
    // 0x80800614: lwc1        $f8, 0x738($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X738));
    // 0x80800618: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8080061C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800620: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80800624: nop

    // 0x80800628: bc1f        L_8080065C
    if (!c1cs) {
        // 0x8080062C: nop
    
            goto L_8080065C;
    }
    // 0x8080062C: nop

    // 0x80800630: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80800634: jal         0x8009B800
    // 0x80800638: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8009B800(rdram, ctx);
        goto after_17;
    // 0x80800638: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_17:
    // 0x8080063C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80800640: jal         0x80084EB0
    // 0x80800644: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _bamovespline_entrypoint_7(rdram, ctx);
        goto after_18;
    // 0x80800644: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_18:
    // 0x80800648: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8080064C: jal         0x80084EC0
    // 0x80800650: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    _bamovespline_entrypoint_9(rdram, ctx);
        goto after_19;
    // 0x80800650: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_19:
    // 0x80800654: b           L_80800718
    // 0x80800658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800718;
    // 0x80800658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080065C:
    // 0x8080065C: jal         0x800F1E6C
    // 0x80800660: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800F1E6C(rdram, ctx);
        goto after_20;
    // 0x80800660: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_20:
    // 0x80800664: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80800668: jal         0x800F1DCC
    // 0x8080066C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    func_800F1DCC(rdram, ctx);
        goto after_21;
    // 0x8080066C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    after_21:
    // 0x80800670: jal         0x800F2100
    // 0x80800674: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_22;
    // 0x80800674: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_22:
    // 0x80800678: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8080067C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800680: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800684: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800688: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8080068C: nop

    // 0x80800690: bc1fl       L_808006A4
    if (!c1cs) {
        // 0x80800694: sub.s       $f12, $f16, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_808006A4;
    }
    goto skip_1;
    // 0x80800694: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    skip_1:
    // 0x80800698: b           L_80800718
    // 0x8080069C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x8080069C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808006A0: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
L_808006A4:
    // 0x808006A4: jal         0x800F2100
    // 0x808006A8: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_23;
    // 0x808006A8: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    after_23:
    // 0x808006AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x808006B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808006B4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808006B8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808006BC: nop

    // 0x808006C0: bc1f        L_808006D0
    if (!c1cs) {
        // 0x808006C4: nop
    
            goto L_808006D0;
    }
    // 0x808006C4: nop

    // 0x808006C8: b           L_80800718
    // 0x808006CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x808006CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006D0:
    // 0x808006D0: jal         0x800EFB8C
    // 0x808006D4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EFB8C(rdram, ctx);
        goto after_24;
    // 0x808006D4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_24:
    // 0x808006D8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x808006DC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x808006E0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x808006E4: nop

    // 0x808006E8: bc1f        L_808006F8
    if (!c1cs) {
        // 0x808006EC: nop
    
            goto L_808006F8;
    }
    // 0x808006EC: nop

    // 0x808006F0: b           L_80800718
    // 0x808006F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800718;
    // 0x808006F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006F8:
    // 0x808006F8: jal         0x8009B800
    // 0x808006FC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8009B800(rdram, ctx);
        goto after_25;
    // 0x808006FC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_25:
    // 0x80800700: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80800704: jal         0x80084EB0
    // 0x80800708: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _bamovespline_entrypoint_7(rdram, ctx);
        goto after_26;
    // 0x80800708: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_26:
    // 0x8080070C: jal         0x80084EB8
    // 0x80800710: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    _bamovespline_entrypoint_8(rdram, ctx);
        goto after_27;
    // 0x80800710: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_27:
    // 0x80800714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800718:
    // 0x80800718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080071C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80800720: jr          $ra
    // 0x80800724: nop

    return;
    // 0x80800724: nop

    // 0x80800728: nop

    // 0x8080072C: nop

;}
RECOMP_FUNC void basnowball_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
;}
RECOMP_FUNC void func_80800008_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800014: lw          $v0, 0x110($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X110);
    // 0x80800018: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080001C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800020: lbu         $t6, 0x2D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2D);
    // 0x80800024: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80800028: bnel        $t6, $at, L_8080004C
    if (ctx->r14 != ctx->r1) {
        // 0x8080002C: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_8080004C;
    }
    goto skip_0;
    // 0x8080002C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800030: jal         0x80095774
    // 0x80800034: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x80800034: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800038: jal         0x800FC74C
    // 0x8080003C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800FC74C(rdram, ctx);
        goto after_1;
    // 0x8080003C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_1:
    // 0x80800040: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800044: lw          $v0, 0x110($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X110);
    // 0x80800048: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_8080004C:
    // 0x8080004C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800050: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80800054: sb          $t7, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = ctx->r15;
    // 0x80800058: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8080005C: bnel        $t8, $at, L_80800078
    if (ctx->r24 != ctx->r1) {
        // 0x80800060: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800078;
    }
    goto skip_1;
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800064: jal         0x80095760
    // 0x80800068: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x80800068: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_2:
    // 0x8080006C: jal         0x800FC660
    // 0x80800070: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800FC660(rdram, ctx);
        goto after_3;
    // 0x80800070: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_3:
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800078:
    // 0x80800078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080007C: jr          $ra
    // 0x80800080: nop

    return;
    // 0x80800080: nop

;}
RECOMP_FUNC void func_80800084_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800088: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0X1020) << 16);
    // 0x8080008C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800090: jr          $ra
    // 0x80800094: lwc1        $f0, 0x1020($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1020));
    return;
    // 0x80800094: lwc1        $f0, 0x1020($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1020));
;}
RECOMP_FUNC void func_80800098_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(49, 0X1038) << 16);
    // 0x8080009C: addiu       $t7, $t7, 0x1038
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(49, 0X1038));
    // 0x808000A0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x808000A4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x808000A8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808000AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x808000B0: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x808000B4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808000B8: jr          $ra
    // 0x808000BC: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    return;
    // 0x808000BC: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_808000C0_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: jal         0x800A1718
    // 0x808000CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x808000CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808000D8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x808000DC: jal         0x80000098
    // 0x808000E0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_80800098_basnowball(rdram, ctx);
        goto after_1;
    // 0x808000E0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x808000E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808000EC: jal         0x800959C8
    // 0x808000F0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_800959C8(rdram, ctx);
        goto after_2;
    // 0x808000F0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808000F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000F8: jal         0x8009590C
    // 0x808000FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009590C(rdram, ctx);
        goto after_3;
    // 0x808000FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void func_80800110_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800118: jal         0x800A1718
    // 0x8080011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x8080011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800120: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(49, 0X1068) << 16);
    // 0x80800124: addiu       $t7, $t7, 0x1068
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(49, 0X1068));
    // 0x80800128: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8080012C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80800130: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80800134: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x80800138: jal         0x800A4D6C
    // 0x8080013C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4D6C(rdram, ctx);
        goto after_1;
    // 0x8080013C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800148: jr          $ra
    // 0x8080014C: nop

    return;
    // 0x8080014C: nop

;}
RECOMP_FUNC void func_80800150_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800158: lw          $v0, 0x110($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X110);
    // 0x8080015C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800160: lbu         $t6, 0x14($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14);
    // 0x80800164: beql        $a1, $t6, L_808001AC
    if (ctx->r5 == ctx->r14) {
        // 0x80800168: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808001AC;
    }
    goto skip_0;
    // 0x80800168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080016C: beq         $a1, $at, L_808001A4
    if (ctx->r5 == ctx->r1) {
        // 0x80800170: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808001A4;
    }
    // 0x80800170: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800174: bne         $a1, $at, L_808001A4
    if (ctx->r5 != ctx->r1) {
        // 0x80800178: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_808001A4;
    }
    // 0x80800178: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8080017C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800180: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800184: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800188: jal         0x800F0E00
    // 0x8080018C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F0E00(rdram, ctx);
        goto after_0;
    // 0x8080018C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800194: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800198: lw          $t7, 0x110($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X110);
    // 0x8080019C: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    // 0x808001A0: lw          $v0, 0x110($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X110);
L_808001A4:
    // 0x808001A4: sb          $a1, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r5;
    // 0x808001A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001AC:
    // 0x808001AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001B0: jr          $ra
    // 0x808001B4: nop

    return;
    // 0x808001B4: nop

;}
RECOMP_FUNC void func_808001B8_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808001BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808001C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808001C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x808001C8: lw          $v0, 0x110($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X110);
    // 0x808001CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001D4: lbu         $v1, 0x28($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X28);
    // 0x808001D8: beq         $v1, $zero, L_808001F0
    if (ctx->r3 == 0) {
        // 0x808001DC: nop
    
            goto L_808001F0;
    }
    // 0x808001DC: nop

    // 0x808001E0: beq         $v1, $at, L_80800210
    if (ctx->r3 == ctx->r1) {
        // 0x808001E4: nop
    
            goto L_80800210;
    }
    // 0x808001E4: nop

    // 0x808001E8: b           L_80800264
    // 0x808001EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
        goto L_80800264;
    // 0x808001EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_808001F0:
    // 0x808001F0: jal         0x800A1718
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808001F8: jal         0x80000084
    // 0x808001FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80800084_basnowball(rdram, ctx);
        goto after_1;
    // 0x808001FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800200: lw          $t6, 0x110($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X110);
    // 0x80800204: swc1        $f0, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f0.u32l;
    // 0x80800208: b           L_80800260
    // 0x8080020C: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
        goto L_80800260;
    // 0x8080020C: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
L_80800210:
    // 0x80800210: jal         0x80085478
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawobble_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800218: lw          $t7, 0x110($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X110);
    // 0x8080021C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800220: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800224: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800230: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800234: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800238: jal         0x8009E55C
    // 0x8080023C: nop

    func_8009E55C(rdram, ctx);
        goto after_3;
    // 0x8080023C: nop

    after_3:
    // 0x80800240: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800244: lw          $t8, 0x110($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X110);
    // 0x80800248: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x8080024C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800250: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x80800254: lw          $t9, 0x110($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X110);
    // 0x80800258: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x8080025C: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
L_80800260:
    // 0x80800260: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_80800264:
    // 0x80800264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800268: sb          $t0, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r8;
    // 0x8080026C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80800270: beq         $t1, $at, L_80800288
    if (ctx->r9 == ctx->r1) {
        // 0x80800274: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800288;
    }
    // 0x80800274: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800278: beql        $t1, $at, L_8080029C
    if (ctx->r9 == ctx->r1) {
        // 0x8080027C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8080029C;
    }
    goto skip_0;
    // 0x8080027C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80800280: b           L_808003C4
    // 0x80800284: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808003C4;
    // 0x80800284: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800288:
    // 0x80800288: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x8080028C: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80800290: b           L_808003C0
    // 0x80800294: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
        goto L_808003C0;
    // 0x80800294: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80800298: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8080029C:
    // 0x8080029C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002A0: lw          $t2, 0x110($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X110);
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A8: swc1        $f4, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f4.u32l;
    // 0x808002AC: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x808002B0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x808002B4: jal         0x800A1718
    // 0x808002B8: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    func_800A1718(rdram, ctx);
        goto after_4;
    // 0x808002B8: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    after_4:
    // 0x808002BC: jal         0x80000084
    // 0x808002C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80800084_basnowball(rdram, ctx);
        goto after_5;
    // 0x808002C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x808002C4: lw          $t3, 0x110($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X110);
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002CC: jal         0x80085448
    // 0x808002D0: swc1        $f0, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f0.u32l;
    _bawobble_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x808002D0: swc1        $f0, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f0.u32l;
    after_6:
    // 0x808002D4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0XFF0) << 16);
    // 0x808002D8: lwc1        $f0, 0xFF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0XFF0));
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002E8: jal         0x80085460
    // 0x808002EC: nop

    _bawobble_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x808002EC: nop

    after_7:
    // 0x808002F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808002F4: lw          $t4, 0x110($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X110);
    // 0x808002F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808002FC: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x80800300: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800304: lwc1        $f12, 0x24($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80800308: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x8080030C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800310: jal         0x800F10B4
    // 0x80800314: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x80800314: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80800318: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x8080031C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800320: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800324: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80800328: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8080032C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0XFF4) << 16);
    // 0x80800330: lwc1        $f10, 0xFF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0XFF4));
    // 0x80800334: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80800338: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8080033C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: bc1f        L_80800384
    if (!c1cs) {
        // 0x80800348: add.s       $f2, $f0, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
            goto L_80800384;
    }
    // 0x80800348: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8080034C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800350: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800354: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: jal         0x80085468
    // 0x80800360: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    _bawobble_entrypoint_5(rdram, ctx);
        goto after_9;
    // 0x80800360: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x80800364: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080036C: addiu       $a1, $zero, 0x65A
    ctx->r5 = ADD32(0, 0X65A);
    // 0x80800370: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800374: jal         0x8009DB04
    // 0x80800378: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DB04(rdram, ctx);
        goto after_10;
    // 0x80800378: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_10:
    // 0x8080037C: b           L_808003A8
    // 0x80800380: nop

        goto L_808003A8;
    // 0x80800380: nop

L_80800384:
    // 0x80800384: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800388: jal         0x80085468
    // 0x8080038C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    _bawobble_entrypoint_5(rdram, ctx);
        goto after_11;
    // 0x8080038C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x80800390: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800398: addiu       $a1, $zero, 0x65B
    ctx->r5 = ADD32(0, 0X65B);
    // 0x8080039C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808003A0: jal         0x8009DB04
    // 0x808003A4: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DB04(rdram, ctx);
        goto after_12;
    // 0x808003A4: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_12:
L_808003A8:
    // 0x808003A8: jal         0x80085470
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawobble_entrypoint_6(rdram, ctx);
        goto after_13;
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808003B0: jal         0x800000C0
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C0_basnowball(rdram, ctx);
        goto after_14;
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808003B8: jal         0x80000110
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800110_basnowball(rdram, ctx);
        goto after_15;
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_808003C0:
    // 0x808003C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808003C4:
    // 0x808003C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808003CC: jr          $ra
    // 0x808003D0: nop

    return;
    // 0x808003D0: nop

;}
RECOMP_FUNC void basnowball_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003E4: jal         0x80000008
    // 0x808003E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800008_basnowball(rdram, ctx);
        goto after_0;
    // 0x808003E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808003EC: jal         0x8009E474
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_1;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F8: jal         0x80095774
    // 0x808003FC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x808003FC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_2:
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: jal         0x80093230
    // 0x80800408: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80093230(rdram, ctx);
        goto after_3;
    // 0x80800408: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8080040C: jal         0x80095A40
    // 0x80800410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_4;
    // 0x80800410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800418: jal         0x8009590C
    // 0x8080041C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009590C(rdram, ctx);
        goto after_5;
    // 0x8080041C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800420: jal         0x80085450
    // 0x80800424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawobble_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x80800424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800428: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080042C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800434: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800438: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080043C: jal         0x800A4D6C
    // 0x80800440: nop

    func_800A4D6C(rdram, ctx);
        goto after_7;
    // 0x80800440: nop

    after_7:
    // 0x80800444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080044C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800450: jr          $ra
    // 0x80800454: nop

    return;
    // 0x80800454: nop

;}
RECOMP_FUNC void basnowball_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080045C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800460: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800464: jal         0x80085458
    // 0x80800468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bawobble_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080046C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800470: lw          $t6, 0x110($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X110);
    // 0x80800474: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80800478: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080047C: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80800480: lw          $t7, 0x110($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X110);
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080048C: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80800490: lw          $t8, 0x110($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X110);
    // 0x80800494: sb          $zero, 0x2D($t8)
    MEM_B(0X2D, ctx->r24) = 0;
    // 0x80800498: lw          $t9, 0x110($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X110);
    // 0x8080049C: jal         0x80000008
    // 0x808004A0: sb          $zero, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = 0;
    func_80800008_basnowball(rdram, ctx);
        goto after_1;
    // 0x808004A0: sb          $zero, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = 0;
    after_1:
    // 0x808004A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808004A8: lw          $t0, 0x110($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X110);
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808004B4: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
    // 0x808004B8: lw          $t1, 0x110($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X110);
    // 0x808004BC: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x808004C0: lw          $t2, 0x110($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X110);
    // 0x808004C4: jal         0x80000150
    // 0x808004C8: sb          $zero, 0x14($t2)
    MEM_B(0X14, ctx->r10) = 0;
    func_80800150_basnowball(rdram, ctx);
        goto after_2;
    // 0x808004C8: sb          $zero, 0x14($t2)
    MEM_B(0X14, ctx->r10) = 0;
    after_2:
    // 0x808004CC: lw          $t3, 0x110($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X110);
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808004D8: jal         0x800001B8
    // 0x808004DC: sb          $zero, 0x28($t3)
    MEM_B(0X28, ctx->r11) = 0;
    func_808001B8_basnowball(rdram, ctx);
        goto after_3;
    // 0x808004DC: sb          $zero, 0x28($t3)
    MEM_B(0X28, ctx->r11) = 0;
    after_3:
    // 0x808004E0: lw          $t4, 0x110($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X110);
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: jal         0x80093230
    // 0x808004EC: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    func_80093230(rdram, ctx);
        goto after_4;
    // 0x808004EC: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    after_4:
    // 0x808004F0: jal         0x8009E4AC
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_5;
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808004F8: lw          $t5, 0x110($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X110);
    // 0x808004FC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800500: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800504: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080050C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800510: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800514: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80800518: jal         0x8009E55C
    // 0x8080051C: nop

    func_8009E55C(rdram, ctx);
        goto after_6;
    // 0x8080051C: nop

    after_6:
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800528: jal         0x8009E55C
    // 0x8080052C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_7;
    // 0x8080052C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x80800530: jal         0x800000C0
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C0_basnowball(rdram, ctx);
        goto after_8;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800538: jal         0x80000110
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800110_basnowball(rdram, ctx);
        goto after_9;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800544: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080054C: jr          $ra
    // 0x80800550: nop

    return;
    // 0x80800550: nop

;}
RECOMP_FUNC void basnowball_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800554: lw          $t6, 0x110($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X110);
    // 0x80800558: jr          $ra
    // 0x8080055C: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    return;
    // 0x8080055C: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void basnowball_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800560: lw          $t6, 0x110($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X110);
    // 0x80800564: jr          $ra
    // 0x80800568: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
    return;
    // 0x80800568: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
;}
RECOMP_FUNC void basnowball_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080056C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800574: jal         0x800A1718
    // 0x80800578: nop

    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x80800578: nop

    after_0:
    // 0x8080057C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800580: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800584: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80800588: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8080058C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800590: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x80800594: jal         0x800F10B4
    // 0x80800598: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800598: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8080059C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005A4: jr          $ra
    // 0x808005A8: nop

    return;
    // 0x808005A8: nop

;}
RECOMP_FUNC void basnowball_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005B4: jal         0x800A1718
    // 0x808005B8: nop

    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x808005B8: nop

    after_0:
    // 0x808005BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005C0: slti        $t6, $v0, 0x5
    ctx->r14 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x808005C4: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    // 0x808005C8: jr          $ra
    // 0x808005CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x808005CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void basnowball_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D0: lw          $t7, 0x110($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X110);
    // 0x808005D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808005D8: jr          $ra
    // 0x808005DC: sb          $t6, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r14;
    return;
    // 0x808005DC: sb          $t6, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void basnowball_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005E4: beq         $a1, $zero, L_808005FC
    if (ctx->r5 == 0) {
        // 0x808005E8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_808005FC;
    }
    // 0x808005E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005EC: jal         0x80000150
    // 0x808005F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800150_basnowball(rdram, ctx);
        goto after_0;
    // 0x808005F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808005F4: b           L_80800608
    // 0x808005F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800608;
    // 0x808005F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005FC:
    // 0x808005FC: jal         0x80000150
    // 0x80800600: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800150_basnowball(rdram, ctx);
        goto after_1;
    // 0x80800600: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800608:
    // 0x80800608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080060C: jr          $ra
    // 0x80800610: nop

    return;
    // 0x80800610: nop

;}
RECOMP_FUNC void basnowball_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800614: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800618: lw          $t6, 0x110($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X110);
    // 0x8080061C: jr          $ra
    // 0x80800620: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800620: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void basnowball_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800624: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80800628: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8080062C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800630: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800634: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80800638: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8080063C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80800640: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800644: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800648: jal         0x800B5BE4
    // 0x8080064C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x8080064C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80800650: lw          $t6, 0x110($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X110);
    // 0x80800654: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x80800658: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080065C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80800660: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800664: jal         0x8009C128
    // 0x80800668: lwc1        $f20, 0x1C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800668: lwc1        $f20, 0x1C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X1C);
    after_1:
    // 0x8080066C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800670: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800674: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80800678: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(49, 0X1098) << 16);
    // 0x8080067C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80800680: addiu       $t7, $t7, 0x1098
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(49, 0X1098));
    // 0x80800684: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80800690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800694: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800698: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8080069C: jal         0x800BABB8
    // 0x808006A0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808006A0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x808006A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808006A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808006AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808006B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808006B4: mul.s       $f0, $f16, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x808006B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808006BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808006C0: jal         0x800BA7C4
    // 0x808006C4: nop

    func_800BA7C4(rdram, ctx);
        goto after_3;
    // 0x808006C4: nop

    after_3:
    // 0x808006C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0XFF8) << 16);
    // 0x808006CC: lwc1        $f18, 0xFF8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0XFF8));
    // 0x808006D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006D4: mul.s       $f0, $f18, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x808006D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808006DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808006E0: jal         0x800BA7FC
    // 0x808006E4: nop

    func_800BA7FC(rdram, ctx);
        goto after_4;
    // 0x808006E4: nop

    after_4:
    // 0x808006E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0XFFC) << 16);
    // 0x808006EC: lwc1        $f6, 0xFFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0XFFC));
    // 0x808006F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0X1000) << 16);
    // 0x808006F4: lwc1        $f8, 0x1000($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1000));
    // 0x808006F8: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x808006FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800700: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80800704: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800708: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080070C: jal         0x800BA8F8
    // 0x80800710: nop

    func_800BA8F8(rdram, ctx);
        goto after_5;
    // 0x80800710: nop

    after_5:
    // 0x80800714: lui         $s0, 0x0
    ctx->r16 = S32(RELOC_HI16(49, 0X10C0) << 16);
    // 0x80800718: lui         $s3, 0x0
    ctx->r19 = S32(RELOC_HI16(49, 0X10F0) << 16);
    // 0x8080071C: addiu       $s3, $s3, 0x10F0
    ctx->r19 = ADD32(ctx->r19, (int16_t)RELOC_LO16(49, 0X10F0));
    // 0x80800720: addiu       $s0, $s0, 0x10C0
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(49, 0X10C0));
    // 0x80800724: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80800728: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8080072C:
    // 0x8080072C: jal         0x800EE7F8
    // 0x80800730: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x80800730: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_6:
    // 0x80800734: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80800738: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8080073C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800740: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80800744: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800748: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080074C: mul.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80800750: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800754: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80800758: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8080075C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x80800760: jal         0x800BA75C
    // 0x80800764: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    func_800BA75C(rdram, ctx);
        goto after_7;
    // 0x80800764: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80800768: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8080076C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800774: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80800778: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080077C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80800780: nop

    // 0x80800784: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x80800788: jal         0x800BA77C
    // 0x8080078C: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_8;
    // 0x8080078C: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    after_8:
    // 0x80800790: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800794: jal         0x800BA22C
    // 0x80800798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_9;
    // 0x80800798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x8080079C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x808007A0: bnel        $s0, $s3, L_8080072C
    if (ctx->r16 != ctx->r19) {
        // 0x808007A4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8080072C;
    }
    goto skip_0;
    // 0x808007A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x808007A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808007AC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x808007B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808007B4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x808007B8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x808007BC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x808007C0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x808007C4: jr          $ra
    // 0x808007C8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x808007C8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_808007CC_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007CC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x808007D0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x808007D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007D8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x808007DC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x808007E0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x808007E4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x808007E8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x808007EC: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x808007F0: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x808007F4: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x808007F8: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x808007FC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80800800: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800804: jal         0x800B5BE4
    // 0x80800808: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x80800808: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x8080080C: addiu       $s4, $sp, 0x7C
    ctx->r20 = ADD32(ctx->r29, 0X7C);
    // 0x80800810: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80800814: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80800818: jal         0x8009C128
    // 0x8080081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x8080081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800820: lw          $t6, 0x110($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X110);
    // 0x80800824: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x80800828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080082C: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80800830: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80800834: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0X1004) << 16);
    // 0x80800838: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8080083C: lwc1        $f18, 0x1004($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1004));
    // 0x80800840: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0X1008) << 16);
    // 0x80800844: lwc1        $f6, 0x1008($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1008));
    // 0x80800848: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8080084C: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80800850: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x80800854: lw          $t7, 0x110($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X110);
    // 0x80800858: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8080085C: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x80800860: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800864: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800868: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080086C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800870: jal         0x800BA7C4
    // 0x80800874: nop

    func_800BA7C4(rdram, ctx);
        goto after_2;
    // 0x80800874: nop

    after_2:
    // 0x80800878: jal         0x8009C984
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_3;
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800880: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080088C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80800890: jal         0x800A1718
    // 0x80800894: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    func_800A1718(rdram, ctx);
        goto after_4;
    // 0x80800894: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80800898: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8080089C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x808008A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x808008A4: lui         $s2, 0x0
    ctx->r18 = S32(RELOC_HI16(49, 0X10F0) << 16);
    // 0x808008A8: cvt.s.w     $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    ctx->f24.fl = CVT_S_W(ctx->f16.u32l);
    // 0x808008AC: addiu       $s2, $s2, 0x10F0
    ctx->r18 = ADD32(ctx->r18, (int16_t)RELOC_LO16(49, 0X10F0));
    // 0x808008B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808008B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808008B8: c.lt.s      $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f18.fl < ctx->f24.fl;
    // 0x808008BC: nop

    // 0x808008C0: bc1fl       L_80800968
    if (!c1cs) {
        // 0x808008C4: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_80800968;
    }
    goto skip_0;
    // 0x808008C4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x808008C8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x808008CC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808008D0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x808008D4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808008D8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808008DC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x808008E0: addiu       $s1, $sp, 0x88
    ctx->r17 = ADD32(ctx->r29, 0X88);
    // 0x808008E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_808008E8:
    // 0x808008E8: jal         0x800EE7F8
    // 0x808008EC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x808008EC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_5:
    // 0x808008F0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x808008F4: jal         0x800DC178
    // 0x808008F8: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    func_800DC178(rdram, ctx);
        goto after_6;
    // 0x808008F8: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    after_6:
    // 0x808008FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80800900: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80800904: jal         0x800DC178
    // 0x80800908: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    func_800DC178(rdram, ctx);
        goto after_7;
    // 0x80800908: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    after_7:
    // 0x8080090C: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80800910: jal         0x800136E4
    // 0x80800914: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_8;
    // 0x80800914: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_8:
    // 0x80800918: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8080091C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800920: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800924: jal         0x800EF214
    // 0x80800928: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    func_800EF214(rdram, ctx);
        goto after_9;
    // 0x80800928: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    after_9:
    // 0x8080092C: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80800930: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800934: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800938: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080093C: jal         0x800BABB8
    // 0x80800940: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_800BABB8(rdram, ctx);
        goto after_10;
    // 0x80800940: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_10:
    // 0x80800944: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800948: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8080094C: nop

    // 0x80800950: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800954: c.lt.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl < ctx->f24.fl;
    // 0x80800958: nop

    // 0x8080095C: bc1tl       L_808008E8
    if (c1cs) {
        // 0x80800960: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808008E8;
    }
    goto skip_1;
    // 0x80800960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x80800964: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80800968:
    // 0x80800968: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8080096C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80800970: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80800974: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80800978: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8080097C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x80800980: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80800984: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80800988: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8080098C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80800990: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x80800994: jr          $ra
    // 0x80800998: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80800998: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8080099C_basnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080099C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808009A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808009A4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x808009A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808009AC: jal         0x800B5BE4
    // 0x808009B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x808009B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x808009B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808009B8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808009BC: jal         0x8009C128
    // 0x808009C0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808009C0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x808009C4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x808009C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808009CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808009D0: lw          $t7, 0x110($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X110);
    // 0x808009D4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x808009D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808009DC: lwc1        $f0, 0x1C($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x808009E0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808009E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808009E8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x808009EC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x808009F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808009F4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x808009F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808009FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A00: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0X100C) << 16);
    // 0x80800A04: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80800A08: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800A0C: lwc1        $f8, 0x100C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X100C));
    // 0x80800A10: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800A14: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80800A18: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800A1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800A20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80800A24: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x80800A28: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x80800A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A30: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    // 0x80800A34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800A38: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800A3C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x80800A40: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80800A44: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800A48: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80800A4C: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x80800A50: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80800A54: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80800A58: jal         0x800BA730
    // 0x80800A5C: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_800BA730(rdram, ctx);
        goto after_2;
    // 0x80800A5C: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_2:
    // 0x80800A60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800A64: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800A68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800A6C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80800A70: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80800A74: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80800A78: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80800A7C: add.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x80800A80: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800A84: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A8C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80800A90: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80800A94: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80800A98: addiu       $a1, $zero, -0xA
    ctx->r5 = ADD32(0, -0XA);
    // 0x80800A9C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80800AA0: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    // 0x80800AA4: jal         0x800BA930
    // 0x80800AA8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800BA930(rdram, ctx);
        goto after_3;
    // 0x80800AA8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x80800AAC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AB4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800AB8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800ABC: jal         0x800BA7FC
    // 0x80800AC0: nop

    func_800BA7FC(rdram, ctx);
        goto after_4;
    // 0x80800AC0: nop

    after_4:
    // 0x80800AC4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800AC8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(49, 0X1010) << 16);
    // 0x80800ACC: jal         0x800DC178
    // 0x80800AD0: lwc1        $f14, 0x1010($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1010));
    func_800DC178(rdram, ctx);
        goto after_5;
    // 0x80800AD0: lwc1        $f14, 0x1010($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X1010));
    after_5:
    // 0x80800AD4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800AE4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800AE8: nop

    // 0x80800AEC: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80800AF0: jal         0x800BA77C
    // 0x80800AF4: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_6;
    // 0x80800AF4: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_6:
    // 0x80800AF8: lui         $t5, 0x0
    ctx->r13 = S32(RELOC_HI16(49, 0X110C) << 16);
    // 0x80800AFC: addiu       $t5, $t5, 0x110C
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(49, 0X110C));
    // 0x80800B00: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80800B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B08: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800B0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800B10: jal         0x800BABB8
    // 0x80800B14: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_7;
    // 0x80800B14: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
    // 0x80800B18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800B1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800B20: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800B24: jr          $ra
    // 0x80800B28: nop

    return;
    // 0x80800B28: nop

;}
RECOMP_FUNC void basnowball_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B34: jal         0x800F796C
    // 0x80800B38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800F796C(rdram, ctx);
        goto after_0;
    // 0x80800B38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B44: jr          $ra
    // 0x80800B48: nop

    return;
    // 0x80800B48: nop

;}
RECOMP_FUNC void basnowball_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B4C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80800B50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B58: jal         0x800D8FF8
    // 0x80800B5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800B5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800B60: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80800B64: jal         0x800EA068
    // 0x80800B68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x80800B68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80800B6C: beq         $v0, $zero, L_80800C18
    if (ctx->r2 == 0) {
        // 0x80800B70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C18;
    }
    // 0x80800B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B74: jal         0x8009E674
    // 0x80800B78: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009E674(rdram, ctx);
        goto after_2;
    // 0x80800B78: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80800B7C: bne         $v0, $zero, L_80800C18
    if (ctx->r2 != 0) {
        // 0x80800B80: nop
    
            goto L_80800C18;
    }
    // 0x80800B80: nop

    // 0x80800B84: jal         0x800A1718
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_3;
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800B8C: blezl       $v0, L_80800CFC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800B90: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_0;
    // 0x80800B90: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_0:
    // 0x80800B94: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x80800B98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800B9C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80800BA0: lbu         $t6, 0x28($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X28);
    // 0x80800BA4: bnel        $t6, $at, L_80800CFC
    if (ctx->r14 != ctx->r1) {
        // 0x80800BA8: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_1;
    // 0x80800BA8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_1:
    // 0x80800BAC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800BB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800BB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800BB8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800BBC: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x80800BC0: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x80800BC4: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800BC8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800BCC: nop

    // 0x80800BD0: bc1fl       L_80800CFC
    if (!c1cs) {
        // 0x80800BD4: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_2;
    // 0x80800BD4: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_2:
    // 0x80800BD8: bne         $v0, $at, L_80800BFC
    if (ctx->r2 != ctx->r1) {
        // 0x80800BDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BFC;
    }
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BE0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800BE4: addiu       $a1, $a1, 0x5130
    ctx->r5 = ADD32(ctx->r5, 0X5130);
    // 0x80800BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BEC: jal         0x8009919C
    // 0x80800BF0: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    func_8009919C(rdram, ctx);
        goto after_4;
    // 0x80800BF0: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    after_4:
    // 0x80800BF4: b           L_80800CFC
    // 0x80800BF8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
        goto L_80800CFC;
    // 0x80800BF8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
L_80800BFC:
    // 0x80800BFC: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80800C00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800C04: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80800C08: jal         0x800A17A8
    // 0x80800C0C: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    func_800A17A8(rdram, ctx);
        goto after_5;
    // 0x80800C0C: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    after_5:
    // 0x80800C10: b           L_80800CFC
    // 0x80800C14: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
        goto L_80800CFC;
    // 0x80800C14: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
L_80800C18:
    // 0x80800C18: jal         0x8008DE50
    // 0x80800C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE50(rdram, ctx);
        goto after_6;
    // 0x80800C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800C20: beql        $v0, $zero, L_80800CFC
    if (ctx->r2 == 0) {
        // 0x80800C24: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_3;
    // 0x80800C24: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_3:
    // 0x80800C28: jal         0x8008E078
    // 0x80800C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x80800C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800C30: beql        $v0, $zero, L_80800CFC
    if (ctx->r2 == 0) {
        // 0x80800C34: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_4;
    // 0x80800C34: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_4:
    // 0x80800C38: lw          $t7, 0x110($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X110);
    // 0x80800C3C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800C40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800C44: lwc1        $f6, 0xC($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80800C48: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800C4C: nop

    // 0x80800C50: bc1fl       L_80800CFC
    if (!c1cs) {
        // 0x80800C54: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_5;
    // 0x80800C54: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_5:
    // 0x80800C58: jal         0x8000099C
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080099C_basnowball(rdram, ctx);
        goto after_8;
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800C60: jal         0x800A1718
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_9;
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C6C: jal         0x800A1760
    // 0x80800C70: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_800A1760(rdram, ctx);
        goto after_10;
    // 0x80800C70: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_10:
    // 0x80800C74: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80800C78: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80800C7C: beql        $at, $zero, L_80800CFC
    if (ctx->r1 == 0) {
        // 0x80800C80: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_6;
    // 0x80800C80: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_6:
    // 0x80800C84: lw          $t8, 0x110($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X110);
    // 0x80800C88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C90: lbu         $t9, 0x28($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X28);
    // 0x80800C94: bnel        $t9, $at, L_80800CFC
    if (ctx->r25 != ctx->r1) {
        // 0x80800C98: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_7;
    // 0x80800C98: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_7:
    // 0x80800C9C: jal         0x80096394
    // 0x80800CA0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80096394(rdram, ctx);
        goto after_11;
    // 0x80800CA0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_11:
    // 0x80800CA4: jal         0x800EEF94
    // 0x80800CA8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_800EEF94(rdram, ctx);
        goto after_12;
    // 0x80800CA8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_12:
    // 0x80800CAC: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x80800CB0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80800CB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800CB8: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CC0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80800CC4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80800CC8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x80800CCC: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800CD0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80800CD4: nop

    // 0x80800CD8: bc1fl       L_80800CFC
    if (!c1cs) {
        // 0x80800CDC: lw          $v1, 0x110($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X110);
            goto L_80800CFC;
    }
    goto skip_8;
    // 0x80800CDC: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    skip_8:
    // 0x80800CE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800CE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800CE8: jal         0x800A17A8
    // 0x80800CEC: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    func_800A17A8(rdram, ctx);
        goto after_13;
    // 0x80800CEC: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    after_13:
    // 0x80800CF0: jal         0x800FC660
    // 0x80800CF4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800FC660(rdram, ctx);
        goto after_14;
    // 0x80800CF4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_14:
    // 0x80800CF8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
L_80800CFC:
    // 0x80800CFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800D00: lbu         $a1, 0x28($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X28);
    // 0x80800D04: beq         $a1, $at, L_80800D1C
    if (ctx->r5 == ctx->r1) {
        // 0x80800D08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800D1C;
    }
    // 0x80800D08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800D0C: beq         $a1, $at, L_80800DBC
    if (ctx->r5 == ctx->r1) {
        // 0x80800D10: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_80800DBC;
    }
    // 0x80800D10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800D14: b           L_80800E28
    // 0x80800D18: lbu         $a1, 0x14($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X14);
        goto L_80800E28;
    // 0x80800D18: lbu         $a1, 0x14($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X14);
L_80800D1C:
    // 0x80800D1C: jal         0x800A1718
    // 0x80800D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_15;
    // 0x80800D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800D24: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80800D28: jal         0x80000084
    // 0x80800D2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80800084_basnowball(rdram, ctx);
        goto after_16;
    // 0x80800D2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x80800D30: lw          $t0, 0x110($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X110);
    // 0x80800D34: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D3C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80800D40: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80800D44: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80800D48: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800D4C: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x80800D50: bc1t        L_80800DB4
    if (c1cs) {
        // 0x80800D54: nop
    
            goto L_80800DB4;
    }
    // 0x80800D54: nop

    // 0x80800D58: jal         0x80000098
    // 0x80800D5C: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    func_80800098_basnowball(rdram, ctx);
        goto after_17;
    // 0x80800D5C: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    after_17:
    // 0x80800D60: lw          $t1, 0x110($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X110);
    // 0x80800D64: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80800D68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800D6C: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80800D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D74: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80800D78: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80800D7C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800D80: bc1f        L_80800D90
    if (!c1cs) {
        // 0x80800D84: nop
    
            goto L_80800D90;
    }
    // 0x80800D84: nop

    // 0x80800D88: b           L_80800DA4
    // 0x80800D8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80800DA4;
    // 0x80800D8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80800D90:
    // 0x80800D90: jal         0x800958A4
    // 0x80800D94: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_800958A4(rdram, ctx);
        goto after_18;
    // 0x80800D94: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_18:
    // 0x80800D98: bne         $v0, $zero, L_80800DA4
    if (ctx->r2 != 0) {
        // 0x80800D9C: lw          $v1, 0x44($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X44);
            goto L_80800DA4;
    }
    // 0x80800D9C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80800DA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80800DA4:
    // 0x80800DA4: beq         $v1, $zero, L_80800DB4
    if (ctx->r3 == 0) {
        // 0x80800DA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DB4;
    }
    // 0x80800DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DAC: jal         0x800001B8
    // 0x80800DB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808001B8_basnowball(rdram, ctx);
        goto after_19;
    // 0x80800DB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_19:
L_80800DB4:
    // 0x80800DB4: b           L_80800E24
    // 0x80800DB8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
        goto L_80800E24;
    // 0x80800DB8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
L_80800DBC:
    // 0x80800DBC: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80800DC0: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80800DC4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800DC8: lw          $a3, 0x24($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X24);
    // 0x80800DCC: jal         0x800F10B4
    // 0x80800DD0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_20;
    // 0x80800DD0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_20:
    // 0x80800DD4: lw          $t2, 0x110($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X110);
    // 0x80800DD8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800DDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800DE0: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80800DE4: lw          $t3, 0x110($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X110);
    // 0x80800DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800DF0: lwc1        $f16, 0x1C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80800DF4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800DF8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80800DFC: jal         0x8009E55C
    // 0x80800E00: nop

    func_8009E55C(rdram, ctx);
        goto after_21;
    // 0x80800E00: nop

    after_21:
    // 0x80800E04: lw          $a0, 0x110($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X110);
    // 0x80800E08: jal         0x800D9078
    // 0x80800E0C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800D9078(rdram, ctx);
        goto after_22;
    // 0x80800E0C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_22:
    // 0x80800E10: beq         $v0, $zero, L_80800E20
    if (ctx->r2 == 0) {
        // 0x80800E14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E20;
    }
    // 0x80800E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E18: jal         0x800001B8
    // 0x80800E1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808001B8_basnowball(rdram, ctx);
        goto after_23;
    // 0x80800E1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
L_80800E20:
    // 0x80800E20: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
L_80800E24:
    // 0x80800E24: lbu         $a1, 0x14($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X14);
L_80800E28:
    // 0x80800E28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800E2C: beq         $a1, $at, L_80800E44
    if (ctx->r5 == ctx->r1) {
        // 0x80800E30: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800E44;
    }
    // 0x80800E30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800E34: beql        $a1, $at, L_80800E74
    if (ctx->r5 == ctx->r1) {
        // 0x80800E38: lwc1        $f0, 0x8($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
            goto L_80800E74;
    }
    goto skip_9;
    // 0x80800E38: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    skip_9:
    // 0x80800E3C: b           L_80800F10
    // 0x80800E40: nop

        goto L_80800F10;
    // 0x80800E40: nop

L_80800E44:
    // 0x80800E44: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80800E48: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80800E4C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80800E50: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80800E54: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800E58: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80800E5C: jal         0x800136E4
    // 0x80800E60: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    func_800136E4(rdram, ctx);
        goto after_24;
    // 0x80800E60: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    after_24:
    // 0x80800E64: lw          $t4, 0x110($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X110);
    // 0x80800E68: b           L_80800F10
    // 0x80800E6C: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
        goto L_80800F10;
    // 0x80800E6C: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    // 0x80800E70: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
L_80800E74:
    // 0x80800E74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800E78: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800E7C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800E80: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80800E84: nop

    // 0x80800E88: bc1t        L_80800F10
    if (c1cs) {
        // 0x80800E8C: nop
    
            goto L_80800F10;
    }
    // 0x80800E8C: nop

    // 0x80800E90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800E94: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80800E98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800E9C: sub.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80800EA0: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80800EA4: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80800EA8: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x80800EAC: mul.s       $f14, $f4, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80800EB0: jal         0x800F13F0
    // 0x80800EB4: div.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    func_800F13F0(rdram, ctx);
        goto after_25;
    // 0x80800EB4: div.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    after_25:
    // 0x80800EB8: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80800EBC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80800EC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800EC4: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80800EC8: jal         0x800F0E00
    // 0x80800ECC: nop

    func_800F0E00(rdram, ctx);
        goto after_26;
    // 0x80800ECC: nop

    after_26:
    // 0x80800ED0: lw          $t5, 0x110($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X110);
    // 0x80800ED4: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80800ED8: jal         0x800136E4
    // 0x80800EDC: add.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_27;
    // 0x80800EDC: add.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f0.fl;
    after_27:
    // 0x80800EE0: lw          $t6, 0x110($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X110);
    // 0x80800EE4: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x80800EE8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x80800EEC: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800EF0: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80800EF4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800EF8: nop

    // 0x80800EFC: bc1f        L_80800F10
    if (!c1cs) {
        // 0x80800F00: nop
    
            goto L_80800F10;
    }
    // 0x80800F00: nop

    // 0x80800F04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800F08: nop

    // 0x80800F0C: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
L_80800F10:
    // 0x80800F10: jal         0x80092AD8
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092AD8(rdram, ctx);
        goto after_28;
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80800F18: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80800F1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800F20: jal         0x800E0AF0
    // 0x80800F24: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_29;
    // 0x80800F24: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_29:
    // 0x80800F28: lw          $t7, 0x110($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X110);
    // 0x80800F2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800F30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800F34: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80800F38: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80800F3C: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x80800F40: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800F44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80800F48: jal         0x800E0AFC
    // 0x80800F4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_30;
    // 0x80800F4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_30:
    // 0x80800F50: lw          $t8, 0x110($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X110);
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F58: jal         0x80093230
    // 0x80800F5C: lw          $a1, 0x1C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1C);
    func_80093230(rdram, ctx);
        goto after_31;
    // 0x80800F5C: lw          $a1, 0x1C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1C);
    after_31:
    // 0x80800F60: jal         0x80085480
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawobble_entrypoint_8(rdram, ctx);
        goto after_32;
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800F68: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x80800F6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800F70: lbu         $t9, 0x2D($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2D);
    // 0x80800F74: bnel        $t9, $at, L_80800FB4
    if (ctx->r25 != ctx->r1) {
        // 0x80800F78: lbu         $t2, 0x2C($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X2C);
            goto L_80800FB4;
    }
    goto skip_10;
    // 0x80800F78: lbu         $t2, 0x2C($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2C);
    skip_10:
    // 0x80800F7C: lbu         $t0, 0x2C($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2C);
    // 0x80800F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F84: bne         $t0, $zero, L_80800F9C
    if (ctx->r8 != 0) {
        // 0x80800F88: nop
    
            goto L_80800F9C;
    }
    // 0x80800F88: nop

    // 0x80800F8C: jal         0x80000008
    // 0x80800F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800008_basnowball(rdram, ctx);
        goto after_33;
    // 0x80800F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
    // 0x80800F94: b           L_80800FD4
    // 0x80800F98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800FD4;
    // 0x80800F98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800F9C:
    // 0x80800F9C: jal         0x800007CC
    // 0x80800FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808007CC_basnowball(rdram, ctx);
        goto after_34;
    // 0x80800FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80800FA4: lw          $t1, 0x110($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X110);
    // 0x80800FA8: b           L_80800FD0
    // 0x80800FAC: sb          $zero, 0x2C($t1)
    MEM_B(0X2C, ctx->r9) = 0;
        goto L_80800FD0;
    // 0x80800FAC: sb          $zero, 0x2C($t1)
    MEM_B(0X2C, ctx->r9) = 0;
    // 0x80800FB0: lbu         $t2, 0x2C($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2C);
L_80800FB4:
    // 0x80800FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB8: beql        $t2, $zero, L_80800FD4
    if (ctx->r10 == 0) {
        // 0x80800FBC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800FD4;
    }
    goto skip_11;
    // 0x80800FBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_11:
    // 0x80800FC0: jal         0x80000008
    // 0x80800FC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800008_basnowball(rdram, ctx);
        goto after_35;
    // 0x80800FC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_35:
    // 0x80800FC8: lw          $t3, 0x110($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X110);
    // 0x80800FCC: sb          $zero, 0x2C($t3)
    MEM_B(0X2C, ctx->r11) = 0;
L_80800FD0:
    // 0x80800FD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800FD4:
    // 0x80800FD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800FD8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80800FDC: jr          $ra
    // 0x80800FE0: nop

    return;
    // 0x80800FE0: nop

    // 0x80800FE4: nop

    // 0x80800FE8: nop

    // 0x80800FEC: nop

;}
RECOMP_FUNC void baspin_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void baspin_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: lw          $t6, 0x118($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X118);
    // 0x80800018: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080001C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800020: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x80800024: bne         $t7, $at, L_80800054
    if (ctx->r15 != ctx->r1) {
        // 0x80800028: nop
    
            goto L_80800054;
    }
    // 0x80800028: nop

    // 0x8080002C: jal         0x80084C98
    // 0x80800030: nop

    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800030: nop

    after_0:
    // 0x80800034: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800038: bne         $v0, $at, L_80800054
    if (ctx->r2 != ctx->r1) {
        // 0x8080003C: nop
    
            goto L_80800054;
    }
    // 0x8080003C: nop

    // 0x80800040: jal         0x800A4CA8
    // 0x80800044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_1;
    // 0x80800044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080004C: jal         0x800893E8
    // 0x80800050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _ncba1p_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800054:
    // 0x80800054: jal         0x8009BD88
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD88(rdram, ctx);
        goto after_3;
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080005C: jal         0x8008E95C
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E95C(rdram, ctx);
        goto after_4;
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800064: jal         0x800951B4
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_5;
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080006C: jal         0x80092BE8
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BE8(rdram, ctx);
        goto after_6;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800074: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800078: jal         0x8009C914
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800080: jal         0x8009C974
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_8;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: jal         0x800931AC
    // 0x80800090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_9;
    // 0x80800090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800098: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080009C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000A0: jr          $ra
    // 0x808000A4: nop

    return;
    // 0x808000A4: nop

;}
RECOMP_FUNC void baspin_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808000AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000B4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x808000B8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x808000BC: lw          $t7, 0x118($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X118);
    // 0x808000C0: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x808000C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000C8: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    // 0x808000CC: lw          $t8, 0x118($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X118);
    // 0x808000D0: jal         0x80099A58
    // 0x808000D4: sb          $a3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r7;
    func_80099A58(rdram, ctx);
        goto after_0;
    // 0x808000D4: sb          $a3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r7;
    after_0:
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000DC: jal         0x80084F78
    // 0x808000E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bareact_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808000E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x808000EC: jal         0x8008CDB8
    // 0x808000F0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    func_8008CDB8(rdram, ctx);
        goto after_2;
    // 0x808000F0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_2:
    // 0x808000F4: jal         0x800A32EC
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A32EC(rdram, ctx);
        goto after_3;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800100: beql        $v0, $at, L_80800114
    if (ctx->r2 == ctx->r1) {
        // 0x80800104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800114;
    }
    goto skip_0;
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800108: jal         0x8009D9D4
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_4;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800114:
    // 0x80800114: jal         0x8009C128
    // 0x80800118: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_5;
    // 0x80800118: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800120: jal         0x800A32C4
    // 0x80800124: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A32C4(rdram, ctx);
        goto after_6;
    // 0x80800124: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x80800128: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8080012C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800130: jal         0x800F1E6C
    // 0x80800134: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800F1E6C(rdram, ctx);
        goto after_7;
    // 0x80800134: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_7:
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: jal         0x8009C914
    // 0x80800140: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x80800140: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_8:
    // 0x80800144: jal         0x8009C974
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_9;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: jal         0x8009C4CC
    // 0x80800154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_10;
    // 0x80800154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: jal         0x8009BF5C
    // 0x80800160: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_11;
    // 0x80800160: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800164: jal         0x8009C984
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_12;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080016C: lw          $t9, 0x118($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X118);
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800178: jal         0x800931AC
    // 0x8080017C: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
    func_800931AC(rdram, ctx);
        goto after_13;
    // 0x8080017C: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
    after_13:
    // 0x80800180: lw          $t0, 0x118($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X118);
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800188: jal         0x8009328C
    // 0x8080018C: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    func_8009328C(rdram, ctx);
        goto after_14;
    // 0x8080018C: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    after_14:
    // 0x80800190: jal         0x80084F90
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_4(rdram, ctx);
        goto after_15;
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800198: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080019C: jal         0x8009B9B0
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x8009B9C0
    // 0x808001AC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_17;
    // 0x808001AC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_17:
    // 0x808001B0: jal         0x8009BB00
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808001B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C0: jal         0x8009BA68
    // 0x808001C4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x808001C4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_19:
    // 0x808001C8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x808001CC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808001DC: jal         0x8009FFD8
    // 0x808001E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_20;
    // 0x808001E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_20:
    // 0x808001E4: jal         0x8008E944
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_21;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808001EC: jal         0x8009514C
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_22;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x808001FC: jal         0x80085338
    // 0x80800200: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    _batimer_set(rdram, ctx);
        goto after_23;
    // 0x80800200: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_23:
    // 0x80800204: lw          $t2, 0x118($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X118);
    // 0x80800208: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080020C: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x80800210: bnel        $t3, $at, L_80800244
    if (ctx->r11 != ctx->r1) {
        // 0x80800214: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800244;
    }
    goto skip_1;
    // 0x80800214: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80800218: jal         0x80084C98
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_24;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800220: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800224: bnel        $v0, $at, L_80800244
    if (ctx->r2 != ctx->r1) {
        // 0x80800228: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800244;
    }
    goto skip_2;
    // 0x80800228: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8080022C: jal         0x800A4CA8
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_25;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800234: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800238: jal         0x800893E8
    // 0x8080023C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _ncba1p_entrypoint_4(rdram, ctx);
        goto after_26;
    // 0x8080023C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x80800240: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800244:
    // 0x80800244: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800248: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8080024C: jr          $ra
    // 0x80800250: nop

    return;
    // 0x80800250: nop

;}
RECOMP_FUNC void baspin_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800254: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800258: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080025C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800260: lw          $v0, 0x118($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X118);
    // 0x80800264: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080026C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80800270: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800274: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80800278: bgez        $t6, L_80800290
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8080027C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80800290;
    }
    // 0x8080027C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800280: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800288: nop

    // 0x8080028C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80800290:
    // 0x80800290: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80800294: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800298: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8080029C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x808002A8: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x808002AC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x808002B0: jal         0x80085300
    // 0x808002B4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    _batimer_get(rdram, ctx);
        goto after_0;
    // 0x808002B4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x808002B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808002BC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808002C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808002C4: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x808002C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x808002CC: jal         0x800F10B4
    // 0x808002D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x808002D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x808002D4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808002D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808002DC: nop

    // 0x808002E0: mul.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x808002E4: jal         0x80013970
    // 0x808002E8: nop

    func_80013970(rdram, ctx);
        goto after_2;
    // 0x808002E8: nop

    after_2:
    // 0x808002EC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x808002F8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x808002FC: jal         0x8009328C
    // 0x80800300: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_8009328C(rdram, ctx);
        goto after_3;
    // 0x80800300: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x80800304: lw          $t7, 0x118($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X118);
    // 0x80800308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080030C: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x80800310: bnel        $t8, $at, L_80800340
    if (ctx->r24 != ctx->r1) {
        // 0x80800314: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800340;
    }
    goto skip_0;
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800318: jal         0x80084C98
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800320: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800324: bne         $v0, $at, L_8080033C
    if (ctx->r2 != ctx->r1) {
        // 0x80800328: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080033C;
    }
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x8009C914
    // 0x80800330: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x80800330: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80800334: jal         0x8009C974
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_6;
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8080033C:
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800340:
    // 0x80800340: jal         0x800852F0
    // 0x80800344: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    _batimer_decrement(rdram, ctx);
        goto after_7;
    // 0x80800344: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_7:
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080034C: jal         0x8008CB10
    // 0x80800350: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80800350: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_8:
    // 0x80800354: beql        $v0, $zero, L_80800368
    if (ctx->r2 == 0) {
        // 0x80800358: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800368;
    }
    goto skip_1;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080035C: jal         0x800951B4
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_9;
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800368:
    // 0x80800368: jal         0x80085300
    // 0x8080036C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    _batimer_get(rdram, ctx);
        goto after_10;
    // 0x8080036C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_10:
    // 0x80800370: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800374: nop

    // 0x80800378: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8080037C: nop

    // 0x80800380: bc1fl       L_808003A4
    if (!c1cs) {
        // 0x80800384: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_808003A4;
    }
    goto skip_2;
    // 0x80800384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x80800388: jal         0x8008CAEC
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_11;
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800390: beql        $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x80800394: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_808003A4;
    }
    goto skip_3;
    // 0x80800394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x80800398: b           L_808003A4
    // 0x8080039C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_808003A4;
    // 0x8080039C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x808003A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808003A4:
    // 0x808003A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808003B0: jr          $ra
    // 0x808003B4: nop

    return;
    // 0x808003B4: nop

    // 0x808003B8: nop

    // 0x808003BC: nop

;}
RECOMP_FUNC void basquash_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_80800008_basquash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800014: beq         $a1, $at, L_80800038
    if (ctx->r5 == ctx->r1) {
        // 0x80800018: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80800038;
    }
    // 0x80800018: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8080001C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800020: beq         $a1, $at, L_80800070
    if (ctx->r5 == ctx->r1) {
        // 0x80800024: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800070;
    }
    // 0x80800024: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800028: beq         $a1, $at, L_808000B8
    if (ctx->r5 == ctx->r1) {
        // 0x8080002C: nop
    
            goto L_808000B8;
    }
    // 0x8080002C: nop

    // 0x80800030: b           L_808000CC
    // 0x80800034: lw          $t2, 0x11C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X11C);
        goto L_808000CC;
    // 0x80800034: lw          $t2, 0x11C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X11C);
L_80800038:
    // 0x80800038: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080003C: lw          $t6, 0x11C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X11C);
    // 0x80800040: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800044: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80800048: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x8080004C: lw          $t7, 0x11C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X11C);
    // 0x80800050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800054: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x80800058: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8080005C: jal         0x8009ADF0
    // 0x80800060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80800060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800068: b           L_808000C8
    // 0x8080006C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C8;
    // 0x8080006C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80800070:
    // 0x80800070: lw          $t8, 0x11C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X11C);
    // 0x80800074: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80800078: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080007C: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80800080: lw          $t9, 0x11C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X11C);
    // 0x80800084: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800088: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080008C: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x80800090: lw          $t0, 0x11C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X11C);
    // 0x80800094: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80800098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080009C: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x808000A0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x808000A4: jal         0x8009ADF0
    // 0x808000A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x808000A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x808000AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000B0: b           L_808000C8
    // 0x808000B4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C8;
    // 0x808000B4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_808000B8:
    // 0x808000B8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X630) << 16);
    // 0x808000BC: lwc1        $f16, 0x630($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X630));
    // 0x808000C0: lw          $t1, 0x11C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X11C);
    // 0x808000C4: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
L_808000C8:
    // 0x808000C8: lw          $t2, 0x11C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X11C);
L_808000CC:
    // 0x808000CC: sb          $a3, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r7;
    // 0x808000D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void basquash_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: jr          $ra
    // 0x808000E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808000E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void basquash_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F0: lw          $t6, 0x11C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X11C);
    // 0x808000F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000F8: sb          $zero, 0x2($t6)
    MEM_B(0X2, ctx->r14) = 0;
    // 0x808000FC: lw          $t7, 0x11C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X11C);
    // 0x80800100: jal         0x80000008
    // 0x80800104: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    func_80800008_basquash(rdram, ctx);
        goto after_0;
    // 0x80800104: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    after_0:
    // 0x80800108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080010C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800110: jr          $ra
    // 0x80800114: nop

    return;
    // 0x80800114: nop

;}
RECOMP_FUNC void basquash_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080011C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800120: lw          $t6, 0x11C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X11C);
    // 0x80800124: sb          $a1, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r5;
    // 0x80800128: jal         0x80000008
    // 0x8080012C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800008_basquash(rdram, ctx);
        goto after_0;
    // 0x8080012C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800138: jr          $ra
    // 0x8080013C: nop

    return;
    // 0x8080013C: nop

;}
RECOMP_FUNC void func_80800140_basquash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800140: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800144: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800148: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080014C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800150: lw          $v1, 0x11C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X11C);
    // 0x80800154: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X634) << 16);
    // 0x80800158: lwc1        $f6, 0x634($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X634));
    // 0x8080015C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800160: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x80800164: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800168: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8080016C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800170: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(51, 0X6B0) << 16);
    // 0x80800174: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800178: mfc1        $s1, $f10
    ctx->r17 = (int32_t)ctx->f10.u32l;
    // 0x8080017C: nop

    // 0x80800180: beql        $s1, $t7, L_808001BC
    if (ctx->r17 == ctx->r15) {
        // 0x80800184: sb          $s1, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r17;
            goto L_808001BC;
    }
    goto skip_0;
    // 0x80800184: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    skip_0:
    // 0x80800188: jal         0x8009D454
    // 0x8080018C: addiu       $a2, $a2, 0x6B0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(51, 0X6B0));
    func_8009D454(rdram, ctx);
        goto after_0;
    // 0x8080018C: addiu       $a2, $a2, 0x6B0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(51, 0X6B0));
    after_0:
    // 0x80800190: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80800194: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x80800198: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(51, 0X6C4) << 16);
    // 0x8080019C: addiu       $t9, $t9, 0x6C4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(51, 0X6C4));
    // 0x808001A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x808001A4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: jal         0x8009D454
    // 0x808001B0: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8009D454(rdram, ctx);
        goto after_1;
    // 0x808001B0: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x808001B4: lw          $v1, 0x11C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X11C);
    // 0x808001B8: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
L_808001BC:
    // 0x808001BC: lw          $t0, 0x11C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X11C);
    // 0x808001C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X638) << 16);
    // 0x808001C4: lwc1        $f14, 0x638($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X638));
    // 0x808001C8: jal         0x800F13C4
    // 0x808001CC: lwc1        $f12, 0x4($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X4);
    func_800F13C4(rdram, ctx);
        goto after_2;
    // 0x808001CC: lwc1        $f12, 0x4($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X4);
    after_2:
    // 0x808001D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X63C) << 16);
    // 0x808001D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808001D8: lwc1        $f14, 0x63C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X63C));
    // 0x808001DC: jal         0x800F0F9C
    // 0x808001E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F0F9C(rdram, ctx);
        goto after_3;
    // 0x808001E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x808001E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808001E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808001EC: nop

    // 0x808001F0: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x808001F4: jal         0x80013970
    // 0x808001F8: nop

    func_80013970(rdram, ctx);
        goto after_4;
    // 0x808001F8: nop

    after_4:
    // 0x808001FC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800200: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X640) << 16);
    // 0x80800204: lwc1        $f18, 0x640($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X640));
    // 0x80800208: lui         $a2, 0x3F11
    ctx->r6 = S32(0X3F11 << 16);
    // 0x8080020C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800210: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800214: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x80800218: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080021C: jal         0x800F10B4
    // 0x80800220: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x80800220: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80800224: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80800228: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8080022C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800230: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800234: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800238: lw          $t1, 0x11C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X11C);
    // 0x8080023C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80800240: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800244: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80800248: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    // 0x8080024C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800250: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800254: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800258: jr          $ra
    // 0x8080025C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8080025C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800260_basquash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800260: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800264: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800268: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8080026C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800270: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80800274: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80800278: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8080027C: jal         0x80092AD8
    // 0x80800280: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    func_80092AD8(rdram, ctx);
        goto after_0;
    // 0x80800280: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    after_0:
    // 0x80800284: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800288: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080028C: jal         0x800E0AF0
    // 0x80800290: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_1;
    // 0x80800290: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x80800294: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80800298: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080029C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x808002A0: lw          $t7, 0x11C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X11C);
    // 0x808002A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X644) << 16);
    // 0x808002A8: lwc1        $f4, 0x644($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X644));
    // 0x808002AC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808002B0: lwc1        $f12, 0x8($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X8);
    // 0x808002B4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x808002B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x808002BC: jal         0x800F1198
    // 0x808002C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F1198(rdram, ctx);
        goto after_2;
    // 0x808002C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x808002C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X648) << 16);
    // 0x808002C8: lwc1        $f14, 0x648($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(51, 0X648));
    // 0x808002CC: jal         0x800F0E00
    // 0x808002D0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_3;
    // 0x808002D0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x808002D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808002D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002DC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x808002E0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x808002E4: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808002E8: jal         0x80092B80
    // 0x808002EC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_80092B80(rdram, ctx);
        goto after_4;
    // 0x808002EC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x808002F0: slti        $at, $v0, 0x620
    ctx->r1 = SIGNED(ctx->r2) < 0X620 ? 1 : 0;
    // 0x808002F4: bne         $at, $zero, L_80800310
    if (ctx->r1 != 0) {
        // 0x808002F8: lwc1        $f0, 0x44($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
            goto L_80800310;
    }
    // 0x808002F8: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808002FC: addiu       $at, $zero, 0x83A
    ctx->r1 = ADD32(0, 0X83A);
    // 0x80800300: beql        $v0, $at, L_80800344
    if (ctx->r2 == ctx->r1) {
        // 0x80800304: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80800344;
    }
    goto skip_0;
    // 0x80800304: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_0:
    // 0x80800308: b           L_80800358
    // 0x8080030C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
        goto L_80800358;
    // 0x8080030C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
L_80800310:
    // 0x80800310: addiu       $t8, $v0, -0x607
    ctx->r24 = ADD32(ctx->r2, -0X607);
    // 0x80800314: sltiu       $at, $t8, 0x19
    ctx->r1 = ctx->r24 < 0X19 ? 1 : 0;
    // 0x80800318: beq         $at, $zero, L_80800354
    if (ctx->r1 == 0) {
        // 0x8080031C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80800354;
    }
    // 0x8080031C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80800320: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(51, 0X64C) << 16);
    // 0x80800324: addu        $at, $at, $t8
    gpr jr_addend_8080032C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80800328: lw          $t8, 0x64C($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(51, 0X64C));
    // 0x8080032C: jr          $t8
    // 0x80800330: nop

    switch (jr_addend_8080032C >> 2) {
        case 0: goto L_80800334; break;
        case 1: goto L_80800334; break;
        case 2: goto L_80800354; break;
        case 3: goto L_80800354; break;
        case 4: goto L_80800354; break;
        case 5: goto L_8080034C; break;
        case 6: goto L_80800354; break;
        case 7: goto L_80800354; break;
        case 8: goto L_80800354; break;
        case 9: goto L_80800354; break;
        case 10: goto L_80800354; break;
        case 11: goto L_80800354; break;
        case 12: goto L_80800354; break;
        case 13: goto L_80800354; break;
        case 14: goto L_80800354; break;
        case 15: goto L_80800354; break;
        case 16: goto L_80800354; break;
        case 17: goto L_80800354; break;
        case 18: goto L_80800354; break;
        case 19: goto L_80800354; break;
        case 20: goto L_80800354; break;
        case 21: goto L_80800340; break;
        case 22: goto L_80800354; break;
        case 23: goto L_80800354; break;
        case 24: goto L_80800334; break;
        default: switch_error(__func__, 0x8080032C, 0x8080064C);
    }
    // 0x80800330: nop

L_80800334:
    // 0x80800334: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800338: b           L_80800354
    // 0x8080033C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
        goto L_80800354;
    // 0x8080033C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
L_80800340:
    // 0x80800340: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80800344:
    // 0x80800344: b           L_80800354
    // 0x80800348: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
        goto L_80800354;
    // 0x80800348: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_8080034C:
    // 0x8080034C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80800350: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_80800354:
    // 0x80800354: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
L_80800358:
    // 0x80800358: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080035C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80800360: lw          $t3, 0x11C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X11C);
    // 0x80800364: lbu         $v0, 0x2($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X2);
    // 0x80800368: beq         $v0, $at, L_80800380
    if (ctx->r2 == ctx->r1) {
        // 0x8080036C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800380;
    }
    // 0x8080036C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800370: beq         $v0, $at, L_808004A4
    if (ctx->r2 == ctx->r1) {
        // 0x80800374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004A4;
    }
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800378: b           L_80800554
    // 0x8080037C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800554;
    // 0x8080037C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800380:
    // 0x80800380: beq         $t4, $zero, L_808003AC
    if (ctx->r12 == 0) {
        // 0x80800384: lw          $t5, 0x34($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X34);
            goto L_808003AC;
    }
    // 0x80800384: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80800388: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8080038C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x80800398: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8080039C: jal         0x800E0B8C
    // 0x808003A0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_5;
    // 0x808003A0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x808003A4: b           L_80800554
    // 0x808003A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800554;
    // 0x808003A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808003AC:
    // 0x808003AC: beq         $t5, $zero, L_808003D8
    if (ctx->r13 == 0) {
        // 0x808003B0: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_808003D8;
    }
    // 0x808003B0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x808003B4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x808003B8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C0: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x808003C4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x808003C8: jal         0x800E0B8C
    // 0x808003CC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_6;
    // 0x808003CC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x808003D0: b           L_80800554
    // 0x808003D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800554;
    // 0x808003D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808003D8:
    // 0x808003D8: beq         $t6, $zero, L_80800444
    if (ctx->r14 == 0) {
        // 0x808003DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800444;
    }
    // 0x808003DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x808003E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808003F0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x808003F4: jal         0x800E0B8C
    // 0x808003F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_7;
    // 0x808003F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_7:
    // 0x808003FC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800400: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800404: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080040C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80800410: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800414: jal         0x800E0B8C
    // 0x80800418: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_8;
    // 0x80800418: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8080041C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800420: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800424: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80800430: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800434: jal         0x800E0B8C
    // 0x80800438: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_9;
    // 0x80800438: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x8080043C: b           L_80800554
    // 0x80800440: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800554;
    // 0x80800440: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800444:
    // 0x80800444: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800448: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8080044C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800450: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80800454: jal         0x800E0B8C
    // 0x80800458: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_10;
    // 0x80800458: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x8080045C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800460: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800464: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080046C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80800470: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800474: jal         0x800E0B8C
    // 0x80800478: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_11;
    // 0x80800478: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x8080047C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800480: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800484: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080048C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80800490: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800494: jal         0x800E0B8C
    // 0x80800498: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_12;
    // 0x80800498: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x8080049C: b           L_80800554
    // 0x808004A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800554;
    // 0x808004A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808004A4:
    // 0x808004A4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x808004A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808004AC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x808004B0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x808004B4: jal         0x800E0B8C
    // 0x808004B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_13;
    // 0x808004B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x808004BC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x808004C0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C8: bne         $t7, $zero, L_808004D8
    if (ctx->r15 != 0) {
        // 0x808004CC: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_808004D8;
    }
    // 0x808004CC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x808004D0: beql        $t8, $zero, L_80800554
    if (ctx->r24 == 0) {
        // 0x808004D4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80800554;
    }
    goto skip_1;
    // 0x808004D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
L_808004D8:
    // 0x808004D8: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808004DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x808004E0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x808004E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x808004E8: jal         0x800E0B8C
    // 0x808004EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_14;
    // 0x808004EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x808004F0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808004F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004FC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80800500: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80800504: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800508: jal         0x800E0B8C
    // 0x8080050C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_15;
    // 0x8080050C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x80800510: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800514: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080051C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80800520: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80800524: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800528: jal         0x800E0B8C
    // 0x8080052C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_16;
    // 0x8080052C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_16:
    // 0x80800530: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800534: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080053C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80800540: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80800544: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800548: jal         0x800E0B8C
    // 0x8080054C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_17;
    // 0x8080054C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_17:
    // 0x80800550: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800554:
    // 0x80800554: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800558: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080055C: jr          $ra
    // 0x80800560: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80800560: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void basquash_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800568: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080056C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800574: lw          $a0, 0x11C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11C);
    // 0x80800578: jal         0x800D9078
    // 0x8080057C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x8080057C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80800580: lw          $t6, 0x11C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X11C);
    // 0x80800584: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800588: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
    // 0x8080058C: beq         $v0, $at, L_8080061C
    if (ctx->r2 == ctx->r1) {
        // 0x80800590: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080061C;
    }
    // 0x80800590: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800594: beq         $v0, $at, L_808005AC
    if (ctx->r2 == ctx->r1) {
        // 0x80800598: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808005AC;
    }
    // 0x80800598: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080059C: beq         $v0, $at, L_808005E4
    if (ctx->r2 == ctx->r1) {
        // 0x808005A0: nop
    
            goto L_808005E4;
    }
    // 0x808005A0: nop

    // 0x808005A4: b           L_80800620
    // 0x808005A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800620;
    // 0x808005A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808005AC:
    // 0x808005AC: jal         0x80000260
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800260_basquash(rdram, ctx);
        goto after_1;
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808005B4: lw          $t7, 0x11C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X11C);
    // 0x808005B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x808005C4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x808005C8: nop

    // 0x808005CC: bc1fl       L_80800620
    if (!c1cs) {
        // 0x808005D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800620;
    }
    goto skip_0;
    // 0x808005D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808005D4: jal         0x80000008
    // 0x808005D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800008_basquash(rdram, ctx);
        goto after_2;
    // 0x808005D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x808005DC: b           L_80800620
    // 0x808005E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800620;
    // 0x808005E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808005E4:
    // 0x808005E4: jal         0x80000140
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800140_basquash(rdram, ctx);
        goto after_3;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808005EC: jal         0x80000260
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800260_basquash(rdram, ctx);
        goto after_4;
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808005F4: lw          $t8, 0x11C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X11C);
    // 0x808005F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800600: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80800604: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80800608: nop

    // 0x8080060C: bc1fl       L_80800620
    if (!c1cs) {
        // 0x80800610: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800620;
    }
    goto skip_1;
    // 0x80800610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800614: jal         0x80000008
    // 0x80800618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800008_basquash(rdram, ctx);
        goto after_5;
    // 0x80800618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8080061C:
    // 0x8080061C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800620:
    // 0x80800620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800628: jr          $ra
    // 0x8080062C: nop

    return;
    // 0x8080062C: nop

;}
RECOMP_FUNC void bastatemem_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x8001ACCC
    // 0x80800010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800014: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800018: sw          $v0, 0x188($t6)
    MEM_W(0X188, ctx->r14) = ctx->r2;
    // 0x8080001C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800024: jr          $ra
    // 0x80800028: nop

    return;
    // 0x80800028: nop

;}
RECOMP_FUNC void bastatemem_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800038: jal         0x8001B084
    // 0x8080003C: lw          $a0, 0x188($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X188);
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x8080003C: lw          $a0, 0x188($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X188);
    after_0:
    // 0x80800040: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800044: sw          $zero, 0x188($t7)
    MEM_W(0X188, ctx->r15) = 0;
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080004C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void bastatemem_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: jr          $ra
    // 0x8080005C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080005C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bastatemem_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: jr          $ra
    // 0x80800064: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    return;
    // 0x80800064: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x80800068: nop

    // 0x8080006C: nop

;}
RECOMP_FUNC void basub_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
;}
RECOMP_FUNC void func_80800008_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80800010: beq         $a1, $v1, L_8080002C
    if (ctx->r5 == ctx->r3) {
        // 0x80800014: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8080002C;
    }
    // 0x80800014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800018: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080001C: beql        $a1, $at, L_80800064
    if (ctx->r5 == ctx->r1) {
        // 0x80800020: lw          $v0, 0x130($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X130);
            goto L_80800064;
    }
    goto skip_0;
    // 0x80800020: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    skip_0:
    // 0x80800024: b           L_808000B8
    // 0x80800028: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
        goto L_808000B8;
    // 0x80800028: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
L_8080002C:
    // 0x8080002C: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800030: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800034: lbu         $t6, 0x5D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5D);
    // 0x80800038: bnel        $t6, $at, L_808000BC
    if (ctx->r14 != ctx->r1) {
        // 0x8080003C: sb          $a1, 0x5D($v0)
        MEM_B(0X5D, ctx->r2) = ctx->r5;
            goto L_808000BC;
    }
    goto skip_1;
    // 0x8080003C: sb          $a1, 0x5D($v0)
    MEM_B(0X5D, ctx->r2) = ctx->r5;
    skip_1:
    // 0x80800040: sb          $zero, 0x5E($v0)
    MEM_B(0X5E, ctx->r2) = 0;
    // 0x80800044: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800048: lwc1        $f4, 0x60($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8080004C: lwc1        $f6, 0x64($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X64);
    // 0x80800050: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800054: swc1        $f8, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f8.u32l;
    // 0x80800058: b           L_808000B8
    // 0x8080005C: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
        goto L_808000B8;
    // 0x8080005C: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800060: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
L_80800064:
    // 0x80800064: lbu         $t7, 0x5D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5D);
    // 0x80800068: bnel        $v1, $t7, L_80800084
    if (ctx->r3 != ctx->r15) {
        // 0x8080006C: lbu         $t0, 0x5C($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X5C);
            goto L_80800084;
    }
    goto skip_2;
    // 0x8080006C: lbu         $t0, 0x5C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X5C);
    skip_2:
    // 0x80800070: lbu         $t8, 0x5F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5F);
    // 0x80800074: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80800078: b           L_8080008C
    // 0x8080007C: sb          $t9, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = ctx->r25;
        goto L_8080008C;
    // 0x8080007C: sb          $t9, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = ctx->r25;
    // 0x80800080: lbu         $t0, 0x5C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X5C);
L_80800084:
    // 0x80800084: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80800088: sb          $t1, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = ctx->r9;
L_8080008C:
    // 0x8080008C: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800090: lwc1        $f10, 0x54($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80800094: lwc1        $f16, 0x64($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X64);
    // 0x80800098: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8080009C: swc1        $f18, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f18.u32l;
    // 0x808000A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000A4: jal         0x80000834
    // 0x808000A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800834_basub(rdram, ctx);
        goto after_0;
    // 0x808000A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808000B4: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
L_808000B8:
    // 0x808000B8: sb          $a1, 0x5D($v0)
    MEM_B(0X5D, ctx->r2) = ctx->r5;
L_808000BC:
    // 0x808000BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000C4: jr          $ra
    // 0x808000C8: nop

    return;
    // 0x808000C8: nop

;}
RECOMP_FUNC void func_808000CC_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000D8: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000E0: swc1        $f0, 0x58($t6)
    MEM_W(0X58, ctx->r14) = ctx->f0.u32l;
    // 0x808000E4: lw          $t7, 0x130($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X130);
    // 0x808000E8: sb          $zero, 0x5E($t7)
    MEM_B(0X5E, ctx->r15) = 0;
    // 0x808000EC: lw          $t8, 0x130($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X130);
    // 0x808000F0: swc1        $f0, 0x54($t8)
    MEM_W(0X54, ctx->r24) = ctx->f0.u32l;
    // 0x808000F4: lw          $t9, 0x130($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X130);
    // 0x808000F8: jal         0x80000008
    // 0x808000FC: sb          $zero, 0x5D($t9)
    MEM_B(0X5D, ctx->r25) = 0;
    func_80800008_basub(rdram, ctx);
        goto after_0;
    // 0x808000FC: sb          $zero, 0x5D($t9)
    MEM_B(0X5D, ctx->r25) = 0;
    after_0:
    // 0x80800100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void func_80800110_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800118: jal         0x800D8FF8
    // 0x8080011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8080011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800124: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800128: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x8080012C: lwc1        $f2, 0x58($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80800130: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80800134: nop

    // 0x80800138: bc1fl       L_8080016C
    if (!c1cs) {
        // 0x8080013C: lbu         $v1, 0x5D($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X5D);
            goto L_8080016C;
    }
    goto skip_0;
    // 0x8080013C: lbu         $v1, 0x5D($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5D);
    skip_0:
    // 0x80800140: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80800144: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
    // 0x80800148: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x8080014C: lwc1        $f6, 0x58($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80800150: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x80800154: nop

    // 0x80800158: bc1fl       L_8080016C
    if (!c1cs) {
        // 0x8080015C: lbu         $v1, 0x5D($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X5D);
            goto L_8080016C;
    }
    goto skip_1;
    // 0x8080015C: lbu         $v1, 0x5D($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5D);
    skip_1:
    // 0x80800160: sb          $zero, 0x5E($v0)
    MEM_B(0X5E, ctx->r2) = 0;
    // 0x80800164: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800168: lbu         $v1, 0x5D($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5D);
L_8080016C:
    // 0x8080016C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800170: beq         $v1, $at, L_80800188
    if (ctx->r3 == ctx->r1) {
        // 0x80800174: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800188;
    }
    // 0x80800174: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800178: beql        $v1, $at, L_808001E0
    if (ctx->r3 == ctx->r1) {
        // 0x8080017C: lwc1        $f16, 0x54($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X54);
            goto L_808001E0;
    }
    goto skip_2;
    // 0x8080017C: lwc1        $f16, 0x54($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X54);
    skip_2:
    // 0x80800180: b           L_80800248
    // 0x80800184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800248;
    // 0x80800184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800188:
    // 0x80800188: lwc1        $f2, 0x54($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X54);
    // 0x8080018C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800190: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80800194: nop

    // 0x80800198: bc1fl       L_808001B4
    if (!c1cs) {
        // 0x8080019C: c.le.s      $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
            goto L_808001B4;
    }
    goto skip_3;
    // 0x8080019C: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    skip_3:
    // 0x808001A0: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x808001A4: swc1        $f8, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f8.u32l;
    // 0x808001A8: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x808001AC: lwc1        $f2, 0x54($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X54);
    // 0x808001B0: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
L_808001B4:
    // 0x808001B4: nop

    // 0x808001B8: bc1fl       L_80800248
    if (!c1cs) {
        // 0x808001BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800248;
    }
    goto skip_4;
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x808001C0: lbu         $t6, 0x5E($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5E);
    // 0x808001C4: beql        $t6, $zero, L_80800248
    if (ctx->r14 == 0) {
        // 0x808001C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800248;
    }
    goto skip_5;
    // 0x808001C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x808001CC: jal         0x80000008
    // 0x808001D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800008_basub(rdram, ctx);
        goto after_1;
    // 0x808001D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808001D4: b           L_80800248
    // 0x808001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800248;
    // 0x808001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001DC: lwc1        $f16, 0x54($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X54);
L_808001E0:
    // 0x808001E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001E4: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x808001E8: swc1        $f18, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f18.u32l;
    // 0x808001EC: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x808001F0: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x808001F4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x808001F8: nop

    // 0x808001FC: bc1fl       L_80800248
    if (!c1cs) {
        // 0x80800200: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800248;
    }
    goto skip_6;
    // 0x80800200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x80800204: lbu         $t7, 0x5C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5C);
    // 0x80800208: beq         $t7, $zero, L_8080023C
    if (ctx->r15 == 0) {
        // 0x8080020C: nop
    
            goto L_8080023C;
    }
    // 0x8080020C: nop

    // 0x80800210: lbu         $t8, 0x5E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5E);
    // 0x80800214: beq         $t8, $zero, L_8080022C
    if (ctx->r24 == 0) {
        // 0x80800218: nop
    
            goto L_8080022C;
    }
    // 0x80800218: nop

    // 0x8080021C: jal         0x80000008
    // 0x80800220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800008_basub(rdram, ctx);
        goto after_2;
    // 0x80800220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800224: b           L_80800248
    // 0x80800228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800248;
    // 0x80800228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080022C:
    // 0x8080022C: jal         0x80000008
    // 0x80800230: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800008_basub(rdram, ctx);
        goto after_3;
    // 0x80800230: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800234: b           L_80800248
    // 0x80800238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800248;
    // 0x80800238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080023C:
    // 0x8080023C: jal         0x80000008
    // 0x80800240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800008_basub(rdram, ctx);
        goto after_4;
    // 0x80800240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800248:
    // 0x80800248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080024C: jr          $ra
    // 0x80800250: nop

    return;
    // 0x80800250: nop

;}
RECOMP_FUNC void func_80800254_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800254: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800258: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8080025C: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x80800260: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800264: bnel        $t6, $zero, L_80800288
    if (ctx->r14 != 0) {
        // 0x80800268: lw          $t9, 0x30($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X30);
            goto L_80800288;
    }
    goto skip_0;
    // 0x80800268: lw          $t9, 0x30($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X30);
    skip_0:
    // 0x8080026C: sw          $a1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r5;
    // 0x80800270: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800274: lw          $t7, 0x28($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X28);
    // 0x80800278: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8080027C: jr          $ra
    // 0x80800280: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    return;
    // 0x80800280: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    // 0x80800284: lw          $t9, 0x30($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X30);
L_80800288:
    // 0x80800288: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8080028C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x80800290: bnel        $t9, $zero, L_808002B4
    if (ctx->r25 != 0) {
        // 0x80800294: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_808002B4;
    }
    goto skip_1;
    // 0x80800294: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    skip_1:
    // 0x80800298: sw          $a3, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r7;
    // 0x8080029C: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x808002A0: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
    // 0x808002A4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x808002A8: jr          $ra
    // 0x808002AC: sw          $t1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r9;
    return;
    // 0x808002AC: sw          $t1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r9;
    // 0x808002B0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_808002B4:
    // 0x808002B4: lw          $t2, 0x2C($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X2C);
    // 0x808002B8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x808002BC: bnel        $t2, $zero, L_808002E0
    if (ctx->r10 != 0) {
        // 0x808002C0: lw          $t5, 0x30($a2)
        ctx->r13 = MEM_W(ctx->r6, 0X30);
            goto L_808002E0;
    }
    goto skip_2;
    // 0x808002C0: lw          $t5, 0x30($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X30);
    skip_2:
    // 0x808002C4: sw          $a3, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r7;
    // 0x808002C8: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x808002CC: lw          $t3, 0x28($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X28);
    // 0x808002D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x808002D4: jr          $ra
    // 0x808002D8: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    return;
    // 0x808002D8: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    // 0x808002DC: lw          $t5, 0x30($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X30);
L_808002E0:
    // 0x808002E0: bnel        $t5, $zero, L_80800304
    if (ctx->r13 != 0) {
        // 0x808002E4: lw          $t8, 0x34($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X34);
            goto L_80800304;
    }
    goto skip_3;
    // 0x808002E4: lw          $t8, 0x34($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X34);
    skip_3:
    // 0x808002E8: sw          $a3, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r7;
    // 0x808002EC: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x808002F0: lw          $t6, 0x28($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X28);
    // 0x808002F4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x808002F8: jr          $ra
    // 0x808002FC: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    return;
    // 0x808002FC: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    // 0x80800300: lw          $t8, 0x34($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X34);
L_80800304:
    // 0x80800304: bnel        $t8, $zero, L_80800328
    if (ctx->r24 != 0) {
        // 0x80800308: lw          $t1, 0x38($a2)
        ctx->r9 = MEM_W(ctx->r6, 0X38);
            goto L_80800328;
    }
    goto skip_4;
    // 0x80800308: lw          $t1, 0x38($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X38);
    skip_4:
    // 0x8080030C: sw          $a3, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r7;
    // 0x80800310: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800314: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x80800318: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8080031C: jr          $ra
    // 0x80800320: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    return;
    // 0x80800320: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x80800324: lw          $t1, 0x38($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X38);
L_80800328:
    // 0x80800328: bne         $t1, $zero, L_80800348
    if (ctx->r9 != 0) {
        // 0x8080032C: nop
    
            goto L_80800348;
    }
    // 0x8080032C: nop

    // 0x80800330: sw          $a3, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r7;
    // 0x80800334: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800338: lw          $t2, 0x28($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X28);
    // 0x8080033C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80800340: jr          $ra
    // 0x80800344: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
    return;
    // 0x80800344: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
L_80800348:
    // 0x80800348: bne         $a1, $v0, L_808002B4
    if (ctx->r5 != ctx->r2) {
        // 0x8080034C: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_808002B4;
    }
    // 0x8080034C: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80800350: jr          $ra
    // 0x80800354: nop

    return;
    // 0x80800354: nop

;}
RECOMP_FUNC void func_80800358_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800358: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x8080035C: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x80800360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800364: bnel        $a1, $t6, L_80800388
    if (ctx->r5 != ctx->r14) {
        // 0x80800368: lw          $t9, 0x30($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X30);
            goto L_80800388;
    }
    goto skip_0;
    // 0x80800368: lw          $t9, 0x30($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X30);
    skip_0:
    // 0x8080036C: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x80800370: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800374: lw          $t7, 0x28($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X28);
    // 0x80800378: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8080037C: jr          $ra
    // 0x80800380: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    return;
    // 0x80800380: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    // 0x80800384: lw          $t9, 0x30($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X30);
L_80800388:
    // 0x80800388: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8080038C: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x80800390: bnel        $a1, $t9, L_808003B4
    if (ctx->r5 != ctx->r25) {
        // 0x80800394: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_808003B4;
    }
    goto skip_1;
    // 0x80800394: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    skip_1:
    // 0x80800398: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x8080039C: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x808003A0: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
    // 0x808003A4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x808003A8: jr          $ra
    // 0x808003AC: sw          $t1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r9;
    return;
    // 0x808003AC: sw          $t1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r9;
    // 0x808003B0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_808003B4:
    // 0x808003B4: lw          $t2, 0x2C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X2C);
    // 0x808003B8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x808003BC: bnel        $a1, $t2, L_808003E0
    if (ctx->r5 != ctx->r10) {
        // 0x808003C0: lw          $t5, 0x30($a3)
        ctx->r13 = MEM_W(ctx->r7, 0X30);
            goto L_808003E0;
    }
    goto skip_2;
    // 0x808003C0: lw          $t5, 0x30($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X30);
    skip_2:
    // 0x808003C4: sw          $zero, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = 0;
    // 0x808003C8: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x808003CC: lw          $t3, 0x28($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X28);
    // 0x808003D0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x808003D4: jr          $ra
    // 0x808003D8: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    return;
    // 0x808003D8: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    // 0x808003DC: lw          $t5, 0x30($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X30);
L_808003E0:
    // 0x808003E0: bnel        $a1, $t5, L_80800404
    if (ctx->r5 != ctx->r13) {
        // 0x808003E4: lw          $t8, 0x34($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X34);
            goto L_80800404;
    }
    goto skip_3;
    // 0x808003E4: lw          $t8, 0x34($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X34);
    skip_3:
    // 0x808003E8: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x808003EC: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x808003F0: lw          $t6, 0x28($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X28);
    // 0x808003F4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808003F8: jr          $ra
    // 0x808003FC: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    return;
    // 0x808003FC: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    // 0x80800400: lw          $t8, 0x34($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X34);
L_80800404:
    // 0x80800404: bnel        $a1, $t8, L_80800428
    if (ctx->r5 != ctx->r24) {
        // 0x80800408: lw          $t1, 0x38($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X38);
            goto L_80800428;
    }
    goto skip_4;
    // 0x80800408: lw          $t1, 0x38($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X38);
    skip_4:
    // 0x8080040C: sw          $zero, 0x34($a3)
    MEM_W(0X34, ctx->r7) = 0;
    // 0x80800410: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800414: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x80800418: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8080041C: jr          $ra
    // 0x80800420: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    return;
    // 0x80800420: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x80800424: lw          $t1, 0x38($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X38);
L_80800428:
    // 0x80800428: bne         $a1, $t1, L_80800448
    if (ctx->r5 != ctx->r9) {
        // 0x8080042C: nop
    
            goto L_80800448;
    }
    // 0x8080042C: nop

    // 0x80800430: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x80800434: lw          $v1, 0x130($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X130);
    // 0x80800438: lw          $t2, 0x28($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X28);
    // 0x8080043C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80800440: jr          $ra
    // 0x80800444: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
    return;
    // 0x80800444: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
L_80800448:
    // 0x80800448: bne         $a2, $v0, L_808003B4
    if (ctx->r6 != ctx->r2) {
        // 0x8080044C: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_808003B4;
    }
    // 0x8080044C: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80800450: jr          $ra
    // 0x80800454: nop

    return;
    // 0x80800454: nop

;}
RECOMP_FUNC void func_80800458_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080045C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800460: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800464: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800468: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8080046C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800470: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80800474: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800478: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080047C: addiu       $s3, $zero, 0x28
    ctx->r19 = ADD32(0, 0X28);
    // 0x80800480: lw          $t6, 0x130($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X130);
L_80800484:
    // 0x80800484: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800488: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8080048C: lw          $a0, 0x2C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X2C);
    // 0x80800490: beql        $a0, $zero, L_808004A4
    if (ctx->r4 == 0) {
        // 0x80800494: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_808004A4;
    }
    goto skip_0;
    // 0x80800494: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x80800498: jal         0x8010114C
    // 0x8080049C: lw          $a2, 0x184($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X184);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x8080049C: lw          $a2, 0x184($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X184);
    after_0:
    // 0x808004A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_808004A4:
    // 0x808004A4: bnel        $s0, $s3, L_80800484
    if (ctx->r16 != ctx->r19) {
        // 0x808004A8: lw          $t6, 0x130($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X130);
            goto L_80800484;
    }
    goto skip_1;
    // 0x808004A8: lw          $t6, 0x130($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X130);
    skip_1:
    // 0x808004AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808004B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808004B8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808004BC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808004C0: jr          $ra
    // 0x808004C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808004C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808004C8_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C8: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x808004CC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x808004D0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x808004D4: sw          $zero, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = 0;
    // 0x808004D8: lw          $t7, 0x130($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X130);
    // 0x808004DC: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
L_808004E0:
    // 0x808004E0: lw          $t8, 0x130($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X130);
    // 0x808004E4: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x808004E8: sw          $zero, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = 0;
    // 0x808004EC: lw          $t0, 0x130($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X130);
    // 0x808004F0: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x808004F4: sw          $zero, 0x30($t1)
    MEM_W(0X30, ctx->r9) = 0;
    // 0x808004F8: lw          $t2, 0x130($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X130);
    // 0x808004FC: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x80800500: sw          $zero, 0x34($t3)
    MEM_W(0X34, ctx->r11) = 0;
    // 0x80800504: lw          $t4, 0x130($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X130);
    // 0x80800508: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x8080050C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80800510: bne         $v1, $v0, L_808004E0
    if (ctx->r3 != ctx->r2) {
        // 0x80800514: sw          $zero, 0x38($t5)
        MEM_W(0X38, ctx->r13) = 0;
            goto L_808004E0;
    }
    // 0x80800514: sw          $zero, 0x38($t5)
    MEM_W(0X38, ctx->r13) = 0;
    // 0x80800518: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x8080051C: jr          $ra
    // 0x80800520: sw          $zero, 0x28($t6)
    MEM_W(0X28, ctx->r14) = 0;
    return;
    // 0x80800520: sw          $zero, 0x28($t6)
    MEM_W(0X28, ctx->r14) = 0;
;}
RECOMP_FUNC void basub_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080052C: jal         0x80000458
    // 0x80800530: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80800458_basub(rdram, ctx);
        goto after_0;
    // 0x80800530: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x80800534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080053C: jr          $ra
    // 0x80800540: nop

    return;
    // 0x80800540: nop

;}
RECOMP_FUNC void basub_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800544: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800548: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8080054C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800550: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80800554: nop

    // 0x80800558: bc1fl       L_8080056C
    if (!c1cs) {
        // 0x8080055C: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8080056C;
    }
    goto skip_0;
    // 0x8080055C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_0:
    // 0x80800560: jr          $ra
    // 0x80800564: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    return;
    // 0x80800564: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800568: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8080056C:
    // 0x8080056C: jr          $ra
    // 0x80800570: nop

    return;
    // 0x80800570: nop

;}
RECOMP_FUNC void basub_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800574: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x80800578: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080057C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800580: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800584: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800588: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080058C: nop

    // 0x80800590: bc1t        L_808005B0
    if (c1cs) {
        // 0x80800594: nop
    
            goto L_808005B0;
    }
    // 0x80800594: nop

    // 0x80800598: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8080059C: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x808005A0: swc1        $f14, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f14.u32l;
    // 0x808005A4: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x808005A8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808005AC: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
L_808005B0:
    // 0x808005B0: jr          $ra
    // 0x808005B4: nop

    return;
    // 0x808005B4: nop

;}
RECOMP_FUNC void basub_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: jal         0x800F53D0
    // 0x808005C4: nop

    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x808005C4: nop

    after_0:
    // 0x808005C8: jal         0x800872A0
    // 0x808005CC: lw          $a0, 0x184($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X184);
    _chping_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808005CC: lw          $a0, 0x184($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X184);
    after_1:
    // 0x808005D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005D8: jr          $ra
    // 0x808005DC: nop

    return;
    // 0x808005DC: nop

;}
RECOMP_FUNC void basub_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005E8: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x808005EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808005F0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x808005F4: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x808005F8: addiu       $a1, $zero, 0x52A
    ctx->r5 = ADD32(0, 0X52A);
    // 0x808005FC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800600: nop

    // 0x80800604: bc1fl       L_8080063C
    if (!c1cs) {
        // 0x80800608: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080063C;
    }
    goto skip_0;
    // 0x80800608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080060C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800610: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800614: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x80800618: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x8080061C: jal         0x8009DB04
    // 0x80800620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009DB04(rdram, ctx);
        goto after_0;
    // 0x80800620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800624: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800628: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8080062C: addiu       $a0, $a0, 0x51A0
    ctx->r4 = ADD32(ctx->r4, 0X51A0);
    // 0x80800630: jal         0x80086D30
    // 0x80800634: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800634: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x80800638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080063C:
    // 0x8080063C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800640: jr          $ra
    // 0x80800644: nop

    return;
    // 0x80800644: nop

;}
RECOMP_FUNC void basub_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800648: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080064C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800650: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800654: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800658: jal         0x800F53D0
    // 0x8080065C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8080065C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80800660: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80800664: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800668: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8080066C: beq         $v1, $at, L_80800688
    if (ctx->r3 == ctx->r1) {
        // 0x80800670: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80800688;
    }
    // 0x80800670: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800674: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80800678: beql        $v1, $at, L_808006AC
    if (ctx->r3 == ctx->r1) {
        // 0x8080067C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808006AC;
    }
    goto skip_0;
    // 0x8080067C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80800680: b           L_808006AC
    // 0x80800684: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_808006AC;
    // 0x80800684: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80800688:
    // 0x80800688: jal         0x8008F880
    // 0x8080068C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8008F880(rdram, ctx);
        goto after_1;
    // 0x8080068C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800690: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(53, 0XC10) << 16);
    // 0x80800694: addiu       $a3, $a3, 0xC10
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(53, 0XC10));
    // 0x80800698: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8080069C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x808006A0: jal         0x8010D930
    // 0x808006A4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_8010D930(rdram, ctx);
        goto after_2;
    // 0x808006A4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x808006A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808006AC:
    // 0x808006AC: jal         0x80000358
    // 0x808006B0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80800358_basub(rdram, ctx);
        goto after_3;
    // 0x808006B0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x808006B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808006BC: jr          $ra
    // 0x808006C0: nop

    return;
    // 0x808006C0: nop

;}
RECOMP_FUNC void basub_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006C4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x808006C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808006CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808006D0: jal         0x800F53D0
    // 0x808006D4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x808006D4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808006D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808006E0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x808006E4: jal         0x80092CDC
    // 0x808006E8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80092CDC(rdram, ctx);
        goto after_1;
    // 0x808006E8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x808006EC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x808006F0: jal         0x80092EB0
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092EB0(rdram, ctx);
        goto after_2;
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808006F8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800700: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80800704: beq         $t6, $zero, L_8080075C
    if (ctx->r14 == 0) {
        // 0x80800708: nop
    
            goto L_8080075C;
    }
    // 0x80800708: nop

    // 0x8080070C: beq         $v0, $zero, L_8080075C
    if (ctx->r2 == 0) {
        // 0x80800710: addiu       $a2, $sp, 0x5C
        ctx->r6 = ADD32(ctx->r29, 0X5C);
            goto L_8080075C;
    }
    // 0x80800710: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800718: jal         0x800F3BD0
    // 0x8080071C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800F3BD0(rdram, ctx);
        goto after_3;
    // 0x8080071C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x80800720: jal         0x8009BFCC
    // 0x80800724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_4;
    // 0x80800724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800728: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8080072C: jal         0x8009C984
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_5;
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800734: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800738: lw          $t7, 0x130($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X130);
    // 0x8080073C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800740: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80800744: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800748: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8080074C: jal         0x800EEC30
    // 0x80800750: lw          $a3, 0x68($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X68);
    func_800EEC30(rdram, ctx);
        goto after_6;
    // 0x80800750: lw          $a3, 0x68($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X68);
    after_6:
    // 0x80800754: b           L_8080079C
    // 0x80800758: lw          $v0, 0x130($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X130);
        goto L_8080079C;
    // 0x80800758: lw          $v0, 0x130($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X130);
L_8080075C:
    // 0x8080075C: jal         0x80084B28
    // 0x80800760: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    _baeggfire_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800760: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_7:
    // 0x80800764: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800768: jal         0x800EF368
    // 0x8080076C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_800EF368(rdram, ctx);
        goto after_8;
    // 0x8080076C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_8:
    // 0x80800770: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800774: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80800778: jal         0x800EE780
    // 0x8080077C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800EE780(rdram, ctx);
        goto after_9;
    // 0x8080077C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x80800780: lw          $t8, 0x130($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X130);
    // 0x80800784: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800788: jal         0x800EF368
    // 0x8080078C: lw          $a1, 0x68($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X68);
    func_800EF368(rdram, ctx);
        goto after_10;
    // 0x8080078C: lw          $a1, 0x68($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X68);
    after_10:
    // 0x80800790: jal         0x80084AF0
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_8(rdram, ctx);
        goto after_11;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800798: lw          $v0, 0x130($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X130);
L_8080079C:
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A0: lbu         $t9, 0x5E($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5E);
    // 0x808007A4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x808007A8: jal         0x800964DC
    // 0x808007AC: sb          $t0, 0x5E($v0)
    MEM_B(0X5E, ctx->r2) = ctx->r8;
    func_800964DC(rdram, ctx);
        goto after_12;
    // 0x808007AC: sb          $t0, 0x5E($v0)
    MEM_B(0X5E, ctx->r2) = ctx->r8;
    after_12:
    // 0x808007B0: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x808007B4: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x808007B8: addiu       $a3, $a3, 0x51B0
    ctx->r7 = ADD32(ctx->r7, 0X51B0);
    // 0x808007BC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x808007C0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808007C4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x808007C8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x808007CC: jal         0x800872E0
    // 0x808007D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    _chtorpedo_entrypoint_0(rdram, ctx);
        goto after_13;
    // 0x808007D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_13:
    // 0x808007D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D8: jal         0x80000254
    // 0x808007DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800254_basub(rdram, ctx);
        goto after_14;
    // 0x808007DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_14:
    // 0x808007E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808007E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808007E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x808007EC: jr          $ra
    // 0x808007F0: nop

    return;
    // 0x808007F0: nop

;}
RECOMP_FUNC void basub_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x808007F8: lw          $v0, 0x130($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X130);
    // 0x808007FC: lbu         $v1, 0x5E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5E);
    // 0x80800800: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x80800804: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80800808: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8080080C: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x80800810: beq         $at, $zero, L_8080082C
    if (ctx->r1 == 0) {
        // 0x80800814: nop
    
            goto L_8080082C;
    }
    // 0x80800814: nop

    // 0x80800818: sb          $t8, 0x5E($v0)
    MEM_B(0X5E, ctx->r2) = ctx->r24;
    // 0x8080081C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XBF0) << 16);
    // 0x80800820: lwc1        $f4, 0xBF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XBF0));
    // 0x80800824: lw          $t9, 0x130($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X130);
    // 0x80800828: swc1        $f4, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f4.u32l;
L_8080082C:
    // 0x8080082C: jr          $ra
    // 0x80800830: nop

    return;
    // 0x80800830: nop

;}
RECOMP_FUNC void func_80800834_basub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080083C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800840: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800844: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80800848: jal         0x8009C128
    // 0x8080084C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080084C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80800850: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(53, 0XC24) << 16);
    // 0x80800854: addiu       $a3, $a3, 0xC24
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(53, 0XC24));
    // 0x80800858: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8080085C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80800860: jal         0x8010D930
    // 0x80800864: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8010D930(rdram, ctx);
        goto after_1;
    // 0x80800864: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80800868: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8080086C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80800870: addiu       $a0, $a0, 0x51B8
    ctx->r4 = ADD32(ctx->r4, 0X51B8);
    // 0x80800874: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80800878: jal         0x80086D38
    // 0x8080087C: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    _chbaddiesetup_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x8080087C: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    after_2:
    // 0x80800880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800884: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800888: jr          $ra
    // 0x8080088C: nop

    return;
    // 0x8080088C: nop

;}
RECOMP_FUNC void basub_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080089C: jal         0x80000458
    // 0x808008A0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80800458_basub(rdram, ctx);
        goto after_0;
    // 0x808008A0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x808008A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808008A8: lw          $t7, 0x130($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X130);
    // 0x808008AC: jal         0x800C2FDC
    // 0x808008B0: lbu         $a0, 0xC($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0XC);
    func_800C2FDC(rdram, ctx);
        goto after_1;
    // 0x808008B0: lbu         $a0, 0xC($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0XC);
    after_1:
    // 0x808008B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808008B8: lw          $t8, 0x130($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X130);
    // 0x808008BC: jal         0x80085450
    // 0x808008C0: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    _bawobble_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808008C0: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    after_2:
    // 0x808008C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008CC: jr          $ra
    // 0x808008D0: nop

    return;
    // 0x808008D0: nop

;}
RECOMP_FUNC void basub_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808008D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808008E0: jal         0x80085458
    // 0x808008E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bawobble_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808008E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808008E8: jal         0x800000CC
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000CC_basub(rdram, ctx);
        goto after_1;
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808008F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808008F4: lw          $t6, 0x130($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X130);
    // 0x808008F8: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(53, 0XC30) << 16);
    // 0x808008FC: addiu       $a2, $a2, 0xC30
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(53, 0XC30));
    // 0x80800900: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80800904: lw          $t7, 0x130($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X130);
    // 0x80800908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080090C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800910: swc1        $f0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f0.u32l;
    // 0x80800914: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80800918: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8080091C: jal         0x8009D454
    // 0x80800920: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    func_8009D454(rdram, ctx);
        goto after_2;
    // 0x80800920: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    after_2:
    // 0x80800924: lw          $t8, 0x130($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X130);
    // 0x80800928: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080092C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800930: sb          $v0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r2;
    // 0x80800934: lw          $t9, 0x130($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X130);
    // 0x80800938: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080093C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800940: swc1        $f6, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f6.u32l;
    // 0x80800944: lw          $t0, 0x130($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X130);
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080094C: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x80800950: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80800954: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80800958: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x8080095C: lw          $t1, 0x130($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X130);
    // 0x80800960: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80800964: lw          $t2, 0x130($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X130);
    // 0x80800968: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
    // 0x8080096C: lw          $t3, 0x130($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X130);
    // 0x80800970: jal         0x800004C8
    // 0x80800974: swc1        $f0, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f0.u32l;
    func_808004C8_basub(rdram, ctx);
        goto after_3;
    // 0x80800974: swc1        $f0, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f0.u32l;
    after_3:
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080097C: jal         0x80000B60
    // 0x80800980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    basub_entrypoint_15(rdram, ctx);
        goto after_4;
    // 0x80800980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080098C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800990: jr          $ra
    // 0x80800994: nop

    return;
    // 0x80800994: nop

;}
RECOMP_FUNC void basub_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800998: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080099C: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x808009A0: jr          $ra
    // 0x808009A4: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808009A4: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void basub_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808009AC: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x808009B0: jr          $ra
    // 0x808009B4: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808009B4: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void basub_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808009BC: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x808009C0: jr          $ra
    // 0x808009C4: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808009C4: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void basub_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808009CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x808009D0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x808009D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009D8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x808009DC: jal         0x800D8FF8
    // 0x808009E0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808009E0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    after_0:
    // 0x808009E4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x808009E8: jal         0x80092AD8
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092AD8(rdram, ctx);
        goto after_1;
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808009F0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x808009F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808009F8: jal         0x800E0AF0
    // 0x808009FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_2;
    // 0x808009FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x80800A00: lw          $a0, 0x130($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X130);
    // 0x80800A04: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80800A08: jal         0x800F1574
    // 0x80800A0C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800F1574(rdram, ctx);
        goto after_3;
    // 0x80800A0C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_3:
    // 0x80800A10: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80800A14: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80800A18: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80800A1C: nop

    // 0x80800A20: bc1fl       L_80800A34
    if (!c1cs) {
        // 0x80800A24: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80800A34;
    }
    goto skip_0;
    // 0x80800A24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x80800A28: b           L_80800A34
    // 0x80800A2C: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
        goto L_80800A34;
    // 0x80800A2C: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
    // 0x80800A30: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800A34:
    // 0x80800A34: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80800A38: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800A3C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80800A40: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800A44: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x80800A48: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80800A4C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800A50: lwc1        $f8, 0x24($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80800A54: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80800A58: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80800A5C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80800A60: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
    // 0x80800A64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800A68: lw          $t6, 0x130($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X130);
    // 0x80800A6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80800A70: lwc1        $f18, 0x20($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80800A74: jal         0x800E0AFC
    // 0x80800A78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_4;
    // 0x80800A78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x80800A7C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x80800A80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A84: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80800A88: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80800A8C: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80800A90: lwc1        $f14, 0x18($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80800A94: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800A98: jal         0x800F15F8
    // 0x80800A9C: nop

    func_800F15F8(rdram, ctx);
        goto after_5;
    // 0x80800A9C: nop

    after_5:
    // 0x80800AA0: lw          $t7, 0x130($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X130);
    // 0x80800AA4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x80800AA8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800AAC: swc1        $f0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f0.u32l;
    // 0x80800AB0: lw          $t8, 0x130($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X130);
    // 0x80800AB4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80800AB8: lw          $a3, 0x14($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X14);
    // 0x80800ABC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800AC0: jal         0x800E0AFC
    // 0x80800AC4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_6;
    // 0x80800AC4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x80800AC8: lw          $t9, 0x130($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X130);
    // 0x80800ACC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80800AD0: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x80800AD4: lw          $a3, 0x14($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X14);
    // 0x80800AD8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800ADC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800AE0: jal         0x800E0AFC
    // 0x80800AE4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800E0AFC(rdram, ctx);
        goto after_7;
    // 0x80800AE4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x80800AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AEC: jal         0x8009C128
    // 0x80800AF0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_8009C128(rdram, ctx);
        goto after_8;
    // 0x80800AF0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_8:
    // 0x80800AF4: lw          $t0, 0x130($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X130);
    // 0x80800AF8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80800AFC: jal         0x800C35E8
    // 0x80800B00: lbu         $a0, 0xC($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XC);
    func_800C35E8(rdram, ctx);
        goto after_9;
    // 0x80800B00: lbu         $a0, 0xC($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XC);
    after_9:
    // 0x80800B04: lw          $t1, 0x130($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X130);
    // 0x80800B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800B0C: jal         0x800C33DC
    // 0x80800B10: lbu         $a0, 0xC($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0XC);
    func_800C33DC(rdram, ctx);
        goto after_10;
    // 0x80800B10: lbu         $a0, 0xC($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0XC);
    after_10:
    // 0x80800B14: lw          $t2, 0x130($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X130);
    // 0x80800B18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800B1C: jal         0x800C368C
    // 0x80800B20: lbu         $a0, 0xC($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0XC);
    func_800C368C(rdram, ctx);
        goto after_11;
    // 0x80800B20: lbu         $a0, 0xC($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0XC);
    after_11:
    // 0x80800B24: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80800B28: lbu         $a0, 0xC($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XC);
    // 0x80800B2C: jal         0x800C31DC
    // 0x80800B30: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    func_800C31DC(rdram, ctx);
        goto after_12;
    // 0x80800B30: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    after_12:
    // 0x80800B34: lw          $t3, 0x130($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X130);
    // 0x80800B38: jal         0x800C3BDC
    // 0x80800B3C: lbu         $a0, 0xC($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0XC);
    func_800C3BDC(rdram, ctx);
        goto after_13;
    // 0x80800B3C: lbu         $a0, 0xC($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0XC);
    after_13:
    // 0x80800B40: jal         0x80000110
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800110_basub(rdram, ctx);
        goto after_14;
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800B48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80800B4C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800B50: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80800B54: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80800B58: jr          $ra
    // 0x80800B5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80800B5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void basub_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B60: beq         $a1, $zero, L_80800BA8
    if (ctx->r5 == 0) {
        // 0x80800B64: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(53, 0XC00) << 16);
            goto L_80800BA8;
    }
    // 0x80800B64: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XC00) << 16);
    // 0x80800B68: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XBF4) << 16);
    // 0x80800B6C: lwc1        $f4, 0xBF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XBF4));
    // 0x80800B70: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x80800B74: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80800B78: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XBF8) << 16);
    // 0x80800B7C: swc1        $f4, 0x68($t6)
    MEM_W(0X68, ctx->r14) = ctx->f4.u32l;
    // 0x80800B80: lw          $t8, 0x130($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X130);
    // 0x80800B84: sb          $t7, 0x5F($t8)
    MEM_B(0X5F, ctx->r24) = ctx->r15;
    // 0x80800B88: lw          $t9, 0x130($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X130);
    // 0x80800B8C: lwc1        $f6, 0xBF8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XBF8));
    // 0x80800B90: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XBFC) << 16);
    // 0x80800B94: swc1        $f6, 0x60($t9)
    MEM_W(0X60, ctx->r25) = ctx->f6.u32l;
    // 0x80800B98: lw          $t0, 0x130($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X130);
    // 0x80800B9C: lwc1        $f8, 0xBFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XBFC));
    // 0x80800BA0: jr          $ra
    // 0x80800BA4: swc1        $f8, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->f8.u32l;
    return;
    // 0x80800BA4: swc1        $f8, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->f8.u32l;
L_80800BA8:
    // 0x80800BA8: lwc1        $f10, 0xC00($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XC00));
    // 0x80800BAC: lw          $t1, 0x130($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X130);
    // 0x80800BB0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80800BB4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XC04) << 16);
    // 0x80800BB8: swc1        $f10, 0x68($t1)
    MEM_W(0X68, ctx->r9) = ctx->f10.u32l;
    // 0x80800BBC: lw          $t3, 0x130($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X130);
    // 0x80800BC0: sb          $t2, 0x5F($t3)
    MEM_B(0X5F, ctx->r11) = ctx->r10;
    // 0x80800BC4: lw          $t4, 0x130($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X130);
    // 0x80800BC8: lwc1        $f16, 0xC04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XC04));
    // 0x80800BCC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(53, 0XC08) << 16);
    // 0x80800BD0: swc1        $f16, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->f16.u32l;
    // 0x80800BD4: lw          $t5, 0x130($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X130);
    // 0x80800BD8: lwc1        $f18, 0xC08($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0XC08));
    // 0x80800BDC: swc1        $f18, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->f18.u32l;
    // 0x80800BE0: jr          $ra
    // 0x80800BE4: nop

    return;
    // 0x80800BE4: nop

    // 0x80800BE8: nop

    // 0x80800BEC: nop

;}
RECOMP_FUNC void basudie_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80091EF0
    // 0x8080000C: nop

    func_80091EF0(rdram, ctx);
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
RECOMP_FUNC void basudie_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800028: jal         0x800F8B64
    // 0x8080002C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F8B64(rdram, ctx);
        goto after_0;
    // 0x8080002C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800030: bne         $v0, $zero, L_80800054
    if (ctx->r2 != 0) {
        // 0x80800034: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_80800054;
    }
    // 0x80800034: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800038: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    // 0x8080003C: jal         0x80101238
    // 0x80800040: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    func_80101238(rdram, ctx);
        goto after_1;
    // 0x80800040: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x80800044: jal         0x800F90F8
    // 0x80800048: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F90F8(rdram, ctx);
        goto after_2;
    // 0x80800048: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8080004C: jal         0x800C0658
    // 0x80800050: nop

    func_800C0658(rdram, ctx);
        goto after_3;
    // 0x80800050: nop

    after_3:
L_80800054:
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void basudie_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800068: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080006C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800070: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800078: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x8080007C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800080: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800084: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800088: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8080008C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80800090: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80800094: jal         0x800000F0
    // 0x80800098: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    basudie_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800098: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8080009C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void basudie_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x808000B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000B8: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x808000BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000C0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808000C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x808000CC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x808000D0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x808000D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x808000D8: jal         0x800000F0
    // 0x808000DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    basudie_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808000DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x808000E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void basudie_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808000F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800100: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800104: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800108: jal         0x80000020
    // 0x8080010C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    basudie_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080010C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800110: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800114: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800124: jal         0x8009FFD8
    // 0x80800128: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800128: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: jal         0x8009C128
    // 0x80800134: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80800134: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: jal         0x800A32C4
    // 0x80800140: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A32C4(rdram, ctx);
        goto after_3;
    // 0x80800140: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x80800144: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800148: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8080014C: jal         0x800F1E6C
    // 0x80800150: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800F1E6C(rdram, ctx);
        goto after_4;
    // 0x80800150: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_4:
    // 0x80800154: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800158: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080015C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800160: jal         0x800136E4
    // 0x80800164: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x80800164: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x80800168: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080016C: jal         0x8009C914
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800174: jal         0x8009C974
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_7;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800180: jal         0x8009B9B0
    // 0x80800184: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80800184: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_8:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: jal         0x8009B9C0
    // 0x80800190: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_9;
    // 0x80800190: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_9:
    // 0x80800194: jal         0x8009BB00
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_10;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080019C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: jal         0x8009BA68
    // 0x808001A8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009BA68(rdram, ctx);
        goto after_11;
    // 0x808001A8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_11:
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: jal         0x8009BA58
    // 0x808001B4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_8009BA58(rdram, ctx);
        goto after_12;
    // 0x808001B4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_12:
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: jal         0x8009BCB4
    // 0x808001C0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_8009BCB4(rdram, ctx);
        goto after_13;
    // 0x808001C0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_13:
    // 0x808001C4: jal         0x8008E944
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_14;
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808001CC: jal         0x8009514C
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_15;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: jal         0x800A4DFC
    // 0x808001DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DFC(rdram, ctx);
        goto after_16;
    // 0x808001DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_16:
    // 0x808001E0: jal         0x800A4C68
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_17;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808001E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001EC: jal         0x800C52F4
    // 0x808001F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C52F4(rdram, ctx);
        goto after_18;
    // 0x808001F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x808001F4: jal         0x800A4CA8
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_19;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808001FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800200: jal         0x80089288
    // 0x80800204: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_20;
    // 0x80800204: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_20:
    // 0x80800208: jal         0x800A0180
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_21;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800214: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80800218: jal         0x80085338
    // 0x8080021C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    _batimer_set(rdram, ctx);
        goto after_22;
    // 0x8080021C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    after_22:
    // 0x80800220: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800224: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800228: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8080022C: jr          $ra
    // 0x80800230: nop

    return;
    // 0x80800230: nop

;}
RECOMP_FUNC void basudie_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080023C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800240: jal         0x8009D3A8
    // 0x80800244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80800244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800248: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080024C: jal         0x800852F0
    // 0x80800250: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    _batimer_decrement(rdram, ctx);
        goto after_1;
    // 0x80800250: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80800254: beql        $v0, $zero, L_80800268
    if (ctx->r2 == 0) {
        // 0x80800258: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800268;
    }
    goto skip_0;
    // 0x80800258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080025C: jal         0x80000000
    // 0x80800260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    basudie_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800268:
    // 0x80800268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void basudie_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080027C: jal         0x8009BC6C
    // 0x80800280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800284: jal         0x800A4E30
    // 0x80800288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x80800288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080028C: jal         0x800A4C68
    // 0x80800290: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4C68(rdram, ctx);
        goto after_2;
    // 0x80800290: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800294: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800298: jal         0x800C53EC
    // 0x8080029C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C53EC(rdram, ctx);
        goto after_3;
    // 0x8080029C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808002A0: jal         0x800951B4
    // 0x808002A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_4;
    // 0x808002A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x808002A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002B0: jr          $ra
    // 0x808002B4: nop

    return;
    // 0x808002B4: nop

;}
RECOMP_FUNC void basudie_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002C4: jal         0x800964DC
    // 0x808002C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800964DC(rdram, ctx);
        goto after_0;
    // 0x808002C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002CC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x808002D0: jal         0x80096364
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096364(rdram, ctx);
        goto after_1;
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808002D8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E0: jal         0x80085300
    // 0x808002E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    _batimer_get(rdram, ctx);
        goto after_2;
    // 0x808002E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x808002E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808002EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808002F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808002F4: nop

    // 0x808002F8: bc1t        L_80800304
    if (c1cs) {
        // 0x808002FC: nop
    
            goto L_80800304;
    }
    // 0x808002FC: nop

    // 0x80800300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800304:
    // 0x80800304: beql        $v0, $zero, L_80800394
    if (ctx->r2 == 0) {
        // 0x80800308: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800394;
    }
    goto skip_0;
    // 0x80800308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080030C: jal         0x80096544
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096544(rdram, ctx);
        goto after_3;
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800314: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800318: beq         $t6, $zero, L_80800390
    if (ctx->r14 == 0) {
        // 0x8080031C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800390;
    }
    // 0x8080031C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800320: jal         0x8008E35C
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_4;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800328: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8080032C: beq         $t7, $zero, L_80800390
    if (ctx->r15 == 0) {
        // 0x80800330: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80800390;
    }
    // 0x80800330: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80800334: jal         0x8009C150
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_5;
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080033C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80800340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800344: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080034C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800350: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80800354: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80800358: nop

    // 0x8080035C: bc1f        L_80800368
    if (!c1cs) {
        // 0x80800360: nop
    
            goto L_80800368;
    }
    // 0x80800360: nop

    // 0x80800364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800368:
    // 0x80800368: beq         $v0, $zero, L_80800390
    if (ctx->r2 == 0) {
        // 0x8080036C: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_80800390;
    }
    // 0x8080036C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800370: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x80800374: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800378: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080037C: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80800380: nop

    // 0x80800384: bc1fl       L_80800394
    if (!c1cs) {
        // 0x80800388: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800394;
    }
    goto skip_1;
    // 0x80800388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8080038C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800390:
    // 0x80800390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800394:
    // 0x80800394: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080039C: jr          $ra
    // 0x808003A0: nop

    return;
    // 0x808003A0: nop

;}
RECOMP_FUNC void basudie_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003AC: jal         0x80091E6C
    // 0x808003B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80091E6C(rdram, ctx);
        goto after_0;
    // 0x808003B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003B4: jal         0x800A4E30
    // 0x808003B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x808003B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808003BC: jal         0x800A4C68
    // 0x808003C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4C68(rdram, ctx);
        goto after_2;
    // 0x808003C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808003C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808003C8: jal         0x800C53EC
    // 0x808003CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C53EC(rdram, ctx);
        goto after_3;
    // 0x808003CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808003D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003D8: jr          $ra
    // 0x808003DC: nop

    return;
    // 0x808003DC: nop

;}
RECOMP_FUNC void basudie_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808003F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003F4: jal         0x80091E48
    // 0x808003F8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80091E48(rdram, ctx);
        goto after_0;
    // 0x808003F8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x808003FC: jal         0x80000020
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    basudie_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800404: jal         0x8008E944
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_2;
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800410: jal         0x800A4DFC
    // 0x80800414: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DFC(rdram, ctx);
        goto after_3;
    // 0x80800414: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x80800418: jal         0x800A4C68
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_4;
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800424: jal         0x800C52F4
    // 0x80800428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C52F4(rdram, ctx);
        goto after_5;
    // 0x80800428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x8080042C: jal         0x800A4CA8
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_6;
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800434: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800438: jal         0x80089288
    // 0x8080043C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x8080043C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800440: jal         0x800A0180
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_8;
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800448: lui         $a2, 0x4066
    ctx->r6 = S32(0X4066 << 16);
    // 0x8080044C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800454: jal         0x80085338
    // 0x80800458: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    _batimer_set(rdram, ctx);
        goto after_9;
    // 0x80800458: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800460: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800464: jal         0x80084FC8
    // 0x80800468: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_10;
    // 0x80800468: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x8080046C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800478: jr          $ra
    // 0x8080047C: nop

    return;
    // 0x8080047C: nop

;}
RECOMP_FUNC void basudie_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080048C: jal         0x800852F0
    // 0x80800490: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x80800490: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800494: beql        $v0, $zero, L_808004A8
    if (ctx->r2 == 0) {
        // 0x80800498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808004A8;
    }
    goto skip_0;
    // 0x80800498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080049C: jal         0x80000000
    // 0x808004A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    basudie_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808004A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004A8:
    // 0x808004A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004AC: jr          $ra
    // 0x808004B0: nop

    return;
    // 0x808004B0: nop

;}
RECOMP_FUNC void basudie_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004BC: jal         0x8009E6EC
    // 0x808004C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808004C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004C4: jal         0x80099AA8
    // 0x808004C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099AA8(rdram, ctx);
        goto after_1;
    // 0x808004C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004D4: jr          $ra
    // 0x808004D8: nop

    return;
    // 0x808004D8: nop

;}
RECOMP_FUNC void basudie_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004E4: jal         0x8008E35C
    // 0x808004E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x808004E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004EC: beq         $v0, $zero, L_80800504
    if (ctx->r2 == 0) {
        // 0x808004F0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800504;
    }
    // 0x808004F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808004F4: jal         0x8009BCC4
    // 0x808004F8: lui         $a1, 0xC37A
    ctx->r5 = S32(0XC37A << 16);
    func_8009BCC4(rdram, ctx);
        goto after_1;
    // 0x808004F8: lui         $a1, 0xC37A
    ctx->r5 = S32(0XC37A << 16);
    after_1:
    // 0x808004FC: b           L_80800510
    // 0x80800500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800510;
    // 0x80800500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800504:
    // 0x80800504: jal         0x8009BC90
    // 0x80800508: nop

    func_8009BC90(rdram, ctx);
        goto after_2;
    // 0x80800508: nop

    after_2:
    // 0x8080050C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800510:
    // 0x80800510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800514: jr          $ra
    // 0x80800518: nop

    return;
    // 0x80800518: nop

    // 0x8080051C: nop

;}
RECOMP_FUNC void baswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void baswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x800964DC
    // 0x80800014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800964DC(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800018: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8080001C: jal         0x8009C150
    // 0x80800020: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009C150(rdram, ctx);
        goto after_1;
    // 0x80800020: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800024: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800028: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8080002C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800030: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80800034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800040: nop

    // 0x80800044: bc1f        L_80800050
    if (!c1cs) {
        // 0x80800048: nop
    
            goto L_80800050;
    }
    // 0x80800048: nop

    // 0x8080004C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800050:
    // 0x80800050: jr          $ra
    // 0x80800054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void baswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080005C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800060: jal         0x80096544
    // 0x80800064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x80800064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800068: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8080006C: beq         $t6, $zero, L_808000B0
    if (ctx->r14 == 0) {
        // 0x80800070: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_808000B0;
    }
    // 0x80800070: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800074: jal         0x8009C150
    // 0x80800078: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009C150(rdram, ctx);
        goto after_1;
    // 0x80800078: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080007C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80800080: jal         0x800964DC
    // 0x80800084: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800964DC(rdram, ctx);
        goto after_2;
    // 0x80800084: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800088: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x8080008C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800090: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800098: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8080009C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x808000A0: nop

    // 0x808000A4: bc1fl       L_808000B4
    if (!c1cs) {
        // 0x808000A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000B4;
    }
    goto skip_0;
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808000B0:
    // 0x808000B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000B4:
    // 0x808000B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000B8: jr          $ra
    // 0x808000BC: nop

    return;
    // 0x808000BC: nop

;}
RECOMP_FUNC void baswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808000CC: jal         0x800919F4
    // 0x808000D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800919F4(rdram, ctx);
        goto after_0;
    // 0x808000D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x808000D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808000D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000DC: jal         0x800919F4
    // 0x808000E0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_1;
    // 0x808000E0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x808000E4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x808000E8: jal         0x800C6E38
    // 0x808000EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800C6E38(rdram, ctx);
        goto after_2;
    // 0x808000EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x808000F0: beq         $v0, $zero, L_80800114
    if (ctx->r2 == 0) {
        // 0x808000F4: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_80800114;
    }
    // 0x808000F4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x808000F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x808000FC: beq         $t6, $zero, L_80800114
    if (ctx->r14 == 0) {
        // 0x80800100: nop
    
            goto L_80800114;
    }
    // 0x80800100: nop

    // 0x80800104: beq         $v1, $zero, L_80800114
    if (ctx->r3 == 0) {
        // 0x80800108: nop
    
            goto L_80800114;
    }
    // 0x80800108: nop

    // 0x8080010C: b           L_80800134
    // 0x80800110: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80800134;
    // 0x80800110: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800114:
    // 0x80800114: beq         $v1, $zero, L_80800124
    if (ctx->r3 == 0) {
        // 0x80800118: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_80800124;
    }
    // 0x80800118: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8080011C: b           L_80800134
    // 0x80800120: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80800134;
    // 0x80800120: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800124:
    // 0x80800124: beq         $t7, $zero, L_80800134
    if (ctx->r15 == 0) {
        // 0x80800128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800134;
    }
    // 0x80800128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080012C: b           L_80800134
    // 0x80800130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800134;
    // 0x80800130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800134:
    // 0x80800134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080013C: jr          $ra
    // 0x80800140: nop

    return;
    // 0x80800140: nop

;}
RECOMP_FUNC void baswim_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080014C: jal         0x8009F1E0
    // 0x80800150: nop

    func_8009F1E0(rdram, ctx);
        goto after_0;
    // 0x80800150: nop

    after_0:
    // 0x80800154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080015C: jr          $ra
    // 0x80800160: nop

    return;
    // 0x80800160: nop

;}
RECOMP_FUNC void baswim_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080016C: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800174: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800178: jal         0x8009F1C8
    // 0x8080017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_0;
    // 0x8080017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800180: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800184: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800188: jal         0x8009F1C8
    // 0x8080018C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_1;
    // 0x8080018C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80800190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800194: jal         0x800002B0
    // 0x80800198: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    baswim_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800198: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x8080019C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001A0: jal         0x800002A0
    // 0x808001A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    baswim_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x808001A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808001A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001B0: jr          $ra
    // 0x808001B4: nop

    return;
    // 0x808001B4: nop

;}
RECOMP_FUNC void baswim_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001C0: jal         0x800001D8
    // 0x808001C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    baswim_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x808001C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x808001C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001D0: jr          $ra
    // 0x808001D4: nop

    return;
    // 0x808001D4: nop

;}
RECOMP_FUNC void baswim_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001E8: beq         $a1, $zero, L_80800278
    if (ctx->r5 == 0) {
        // 0x808001EC: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_80800278;
    }
    // 0x808001EC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x808001F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808001F4: jal         0x80084CC0
    // 0x808001F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x808001F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808001FC: jal         0x80084C98
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800204: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800208: beq         $v0, $at, L_8080028C
    if (ctx->r2 == ctx->r1) {
        // 0x8080020C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080028C;
    }
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: jal         0x80084CF8
    // 0x80800214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bafpctrl_entrypoint_16(rdram, ctx);
        goto after_2;
    // 0x80800214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800218: jal         0x800C6E38
    // 0x8080021C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_800C6E38(rdram, ctx);
        goto after_3;
    // 0x8080021C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_3:
    // 0x80800220: bne         $v0, $zero, L_8080022C
    if (ctx->r2 != 0) {
        // 0x80800224: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8080022C;
    }
    // 0x80800224: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800228: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080022C:
    // 0x8080022C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80800230: bnel        $t7, $zero, L_80800258
    if (ctx->r15 != 0) {
        // 0x80800234: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_80800258;
    }
    goto skip_0;
    // 0x80800234: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800238: jal         0x800A3274
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_4;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800240: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800244: bne         $v0, $at, L_80800254
    if (ctx->r2 != ctx->r1) {
        // 0x80800248: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_80800254;
    }
    // 0x80800248: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8080024C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80800250: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800254:
    // 0x80800254: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
L_80800258:
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080025C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80800260: beql        $t0, $zero, L_80800290
    if (ctx->r8 == 0) {
        // 0x80800264: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800290;
    }
    goto skip_1;
    // 0x80800264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800268: jal         0x80084CD0
    // 0x8080026C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_5;
    // 0x8080026C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80800270: b           L_80800290
    // 0x80800274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800290;
    // 0x80800274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800278:
    // 0x80800278: jal         0x80084D00
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_17(rdram, ctx);
        goto after_6;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: jal         0x80084CC0
    // 0x80800288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_9(rdram, ctx);
        goto after_7;
    // 0x80800288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_8080028C:
    // 0x8080028C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800290:
    // 0x80800290: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800298: jr          $ra
    // 0x8080029C: nop

    return;
    // 0x8080029C: nop

;}
RECOMP_FUNC void baswim_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002A4: lw          $t6, 0x134($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X134);
    // 0x808002A8: jr          $ra
    // 0x808002AC: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808002AC: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void baswim_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002B4: lw          $t6, 0x134($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X134);
    // 0x808002B8: jr          $ra
    // 0x808002BC: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808002BC: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void baswim_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C0: lw          $v0, 0x134($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X134);
    // 0x808002C4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002C8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808002CC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x808002D0: nop

    // 0x808002D4: bc1f        L_808002E0
    if (!c1cs) {
        // 0x808002D8: nop
    
            goto L_808002E0;
    }
    // 0x808002D8: nop

    // 0x808002DC: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
L_808002E0:
    // 0x808002E0: jr          $ra
    // 0x808002E4: nop

    return;
    // 0x808002E4: nop

;}
RECOMP_FUNC void baswim_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808002EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002F4: jal         0x8009EF28
    // 0x808002F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF28(rdram, ctx);
        goto after_0;
    // 0x808002F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002FC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800304: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x80800308: jal         0x8009C99C
    // 0x8080030C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_1;
    // 0x8080030C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_1:
    // 0x80800310: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80800314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800318: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080031C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800320: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80800324: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800328: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8080032C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800330: jal         0x800F10B4
    // 0x80800334: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80800334: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80800338: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080033C: jal         0x8009C4CC
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800344: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(55, 0X5C0) << 16);
    // 0x80800348: lwc1        $f0, 0x5C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(55, 0X5C0));
    // 0x8080034C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800350: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800354: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80800358: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8080035C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800360: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800364: jal         0x800F10B4
    // 0x80800368: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800368: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x8080036C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800370: jal         0x80084C90
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800378: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800380: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80800384: jal         0x8009C990
    // 0x80800388: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    func_8009C990(rdram, ctx);
        goto after_6;
    // 0x80800388: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8080038C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80800398: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8080039C: jal         0x8009C914
    // 0x808003A0: nop

    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x808003A0: nop

    after_7:
    // 0x808003A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808003B0: jr          $ra
    // 0x808003B4: nop

    return;
    // 0x808003B4: nop

;}
RECOMP_FUNC void func_808003B8_baswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808003BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003C0: jal         0x8009BB24
    // 0x808003C4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_0;
    // 0x808003C4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x808003C8: jal         0x800EEF94
    // 0x808003CC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800EEF94(rdram, ctx);
        goto after_1;
    // 0x808003CC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808003D0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808003D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808003D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808003DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808003E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808003E4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x808003E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808003EC: jal         0x800F10B4
    // 0x808003F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x808003F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x808003F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808003FC: jr          $ra
    // 0x80800400: nop

    return;
    // 0x80800400: nop

;}
RECOMP_FUNC void baswim_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800404: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800408: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080040C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800410: jal         0x800003B8
    // 0x80800414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808003B8_baswim(rdram, ctx);
        goto after_0;
    // 0x80800414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800418: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8080041C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800420: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800424: jal         0x800F1214
    // 0x80800428: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_800F1214(rdram, ctx);
        goto after_1;
    // 0x80800428: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_1:
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800430: jal         0x80084C90
    // 0x80800434: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800434: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80800438: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8080043C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800440: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800444: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(55, 0X5C4) << 16);
    // 0x80800448: lwc1        $f14, 0x5C4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(55, 0X5C4));
    // 0x8080044C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80800450: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800454: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800458: jal         0x800F10B4
    // 0x8080045C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x8080045C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80800460: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800464: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x80800468: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080046C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800474: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800478: jal         0x8009BFE4
    // 0x8080047C: nop

    func_8009BFE4(rdram, ctx);
        goto after_4;
    // 0x8080047C: nop

    after_4:
    // 0x80800480: jal         0x8009EF34
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF34(rdram, ctx);
        goto after_5;
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800488: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8080048C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800490: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800494: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800498: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8080049C: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x808004A0: bc1fl       L_808004E4
    if (!c1cs) {
        // 0x808004A4: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_808004E4;
    }
    goto skip_0;
    // 0x808004A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x808004A8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808004AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808004B0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808004B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808004B8: lui         $a3, 0x4389
    ctx->r7 = S32(0X4389 << 16);
    // 0x808004BC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x808004C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x808004C4: jal         0x800F10B4
    // 0x808004C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x808004C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x808004CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004D0: jal         0x8009BF5C
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF5C(rdram, ctx);
        goto after_7;
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808004D8: b           L_80800500
    // 0x808004DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800500;
    // 0x808004DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_808004E4:
    // 0x808004E4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808004E8: jal         0x800F10B4
    // 0x808004EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x808004EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x808004F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004F4: jal         0x8009BF5C
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF5C(rdram, ctx);
        goto after_9;
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808004FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800500:
    // 0x80800500: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800508: jr          $ra
    // 0x8080050C: nop

    return;
    // 0x8080050C: nop

;}
RECOMP_FUNC void baswim_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800510: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800514: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800518: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080051C: jal         0x8009BFCC
    // 0x80800520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_0;
    // 0x80800520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800524: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800528: jal         0x8009C984
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800530: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800534: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800538: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8080053C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80800540: lw          $t6, 0x134($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X134);
    // 0x80800544: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800548: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8080054C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80800550: jal         0x800EF4E4
    // 0x80800554: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_2;
    // 0x80800554: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800558: jal         0x800D8FF8
    // 0x8080055C: nop

    func_800D8FF8(rdram, ctx);
        goto after_3;
    // 0x8080055C: nop

    after_3:
    // 0x80800560: lw          $v0, 0x134($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X134);
    // 0x80800564: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800568: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8080056C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800570: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800574: jal         0x800F0E00
    // 0x80800578: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    func_800F0E00(rdram, ctx);
        goto after_4;
    // 0x80800578: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    after_4:
    // 0x8080057C: lw          $t7, 0x134($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X134);
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800588: jal         0x8009B94C
    // 0x8080058C: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    func_8009B94C(rdram, ctx);
        goto after_5;
    // 0x8080058C: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    after_5:
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800594: jal         0x8009BA9C
    // 0x80800598: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009BA9C(rdram, ctx);
        goto after_6;
    // 0x80800598: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x8080059C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808005A8: jr          $ra
    // 0x808005AC: nop

    return;
    // 0x808005AC: nop

;}
RECOMP_FUNC void baswim_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B0: lw          $t6, 0x134($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X134);
    // 0x808005B4: jr          $ra
    // 0x808005B8: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x808005B8: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x808005BC: nop

;}
RECOMP_FUNC void batimer_get_size(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
;}
RECOMP_FUNC void batimer_incrementBy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x8080000C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80800010: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800014: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x80800018: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8080001C: swc1        $f4, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f4.u32l;
    // 0x80800020: lw          $t7, 0x13C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X13C);
    // 0x80800024: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
    // 0x80800028: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8080002C: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x80800030: jr          $ra
    // 0x80800034: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    return;
    // 0x80800034: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
;}
RECOMP_FUNC void batimer_decrement(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080003C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800040: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x80800044: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80800048: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8080004C: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x80800050: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800054: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x80800058: lw          $t7, 0x13C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X13C);
    // 0x8080005C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80800060: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80800064: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80800068: nop

    // 0x8080006C: bc1fl       L_80800080
    if (!c1cs) {
        // 0x80800070: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_80800080;
    }
    goto skip_0;
    // 0x80800070: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    skip_0:
    // 0x80800074: b           L_808000E4
    // 0x80800078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808000E4;
    // 0x80800078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080007C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_80800080:
    // 0x80800080: jal         0x800D8FF8
    // 0x80800084: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800084: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800088: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080008C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800094: lw          $t9, 0x13C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X13C);
    // 0x80800098: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8080009C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x808000A0: jal         0x800F0E00
    // 0x808000A4: sub.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x808000A4: sub.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f0.fl;
    after_1:
    // 0x808000A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000AC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x808000B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x808000B4: lw          $t1, 0x13C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X13C);
    // 0x808000B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808000BC: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x808000C0: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x808000C4: lw          $t3, 0x13C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X13C);
    // 0x808000C8: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x808000CC: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x808000D0: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x808000D4: nop

    // 0x808000D8: bc1fl       L_808000E8
    if (!c1cs) {
        // 0x808000DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000E8;
    }
    goto skip_1;
    // 0x808000DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x808000E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808000E4:
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E8:
    // 0x808000E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000EC: jr          $ra
    // 0x808000F0: nop

    return;
    // 0x808000F0: nop

;}
RECOMP_FUNC void batimer_increment(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800100: lw          $t7, 0x13C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X13C);
    // 0x80800104: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80800108: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x8080010C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800110: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x80800114: jal         0x800D8FF8
    // 0x80800118: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800118: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8080011C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80800120: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80800124: lw          $t9, 0x13C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X13C);
    // 0x80800128: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x8080012C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800130: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80800134: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80800138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080013C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800140: jr          $ra
    // 0x80800144: nop

    return;
    // 0x80800144: nop

;}
RECOMP_FUNC void batimer_get(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800148: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x8080014C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800150: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80800154: jr          $ra
    // 0x80800158: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    return;
    // 0x80800158: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
;}
RECOMP_FUNC void batimer_isAt_falling(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080015C: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x80800160: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800164: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800168: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8080016C: lwc1        $f4, 0x3C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x80800170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800174: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80800178: nop

    // 0x8080017C: bc1f        L_80800188
    if (!c1cs) {
        // 0x80800180: nop
    
            goto L_80800188;
    }
    // 0x80800180: nop

    // 0x80800184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800188:
    // 0x80800188: beq         $v0, $zero, L_808001AC
    if (ctx->r2 == 0) {
        // 0x8080018C: nop
    
            goto L_808001AC;
    }
    // 0x8080018C: nop

    // 0x80800190: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800198: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8080019C: nop

    // 0x808001A0: bc1f        L_808001AC
    if (!c1cs) {
        // 0x808001A4: nop
    
            goto L_808001AC;
    }
    // 0x808001A4: nop

    // 0x808001A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808001AC:
    // 0x808001AC: jr          $ra
    // 0x808001B0: nop

    return;
    // 0x808001B0: nop

;}
RECOMP_FUNC void batimer_isAt_rising(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B4: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x808001B8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x808001BC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x808001C0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x808001C4: lwc1        $f4, 0x3C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x808001C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808001CC: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x808001D0: nop

    // 0x808001D4: bc1f        L_808001E0
    if (!c1cs) {
        // 0x808001D8: nop
    
            goto L_808001E0;
    }
    // 0x808001D8: nop

    // 0x808001DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808001E0:
    // 0x808001E0: beq         $v0, $zero, L_80800204
    if (ctx->r2 == 0) {
        // 0x808001E4: nop
    
            goto L_80800204;
    }
    // 0x808001E4: nop

    // 0x808001E8: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x808001EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808001F0: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x808001F4: nop

    // 0x808001F8: bc1f        L_80800204
    if (!c1cs) {
        // 0x808001FC: nop
    
            goto L_80800204;
    }
    // 0x808001FC: nop

    // 0x80800200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800204:
    // 0x80800204: jr          $ra
    // 0x80800208: nop

    return;
    // 0x80800208: nop

;}
RECOMP_FUNC void batimer_isLessThan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080020C: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x80800210: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800214: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800218: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8080021C: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80800220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800224: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80800228: nop

    // 0x8080022C: bc1f        L_80800238
    if (!c1cs) {
        // 0x80800230: nop
    
            goto L_80800238;
    }
    // 0x80800230: nop

    // 0x80800234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800238:
    // 0x80800238: jr          $ra
    // 0x8080023C: nop

    return;
    // 0x8080023C: nop

;}
RECOMP_FUNC void batimer_isGreaterThan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800240: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x80800244: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800248: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8080024C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80800250: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80800254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800258: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8080025C: nop

    // 0x80800260: bc1f        L_8080026C
    if (!c1cs) {
        // 0x80800264: nop
    
            goto L_8080026C;
    }
    // 0x80800264: nop

    // 0x80800268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080026C:
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void batimer_isNonzero(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x80800278: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8080027C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800280: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80800284: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80800288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080028C: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x80800290: nop

    // 0x80800294: bc1t        L_808002A0
    if (c1cs) {
        // 0x80800298: nop
    
            goto L_808002A0;
    }
    // 0x80800298: nop

    // 0x8080029C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002A0:
    // 0x808002A0: jr          $ra
    // 0x808002A4: nop

    return;
    // 0x808002A4: nop

;}
RECOMP_FUNC void batimer_isZero(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A8: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x808002AC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x808002B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808002B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x808002B8: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x808002BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808002C0: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x808002C4: nop

    // 0x808002C8: bc1f        L_808002D4
    if (!c1cs) {
        // 0x808002CC: nop
    
            goto L_808002D4;
    }
    // 0x808002CC: nop

    // 0x808002D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002D4:
    // 0x808002D4: jr          $ra
    // 0x808002D8: nop

    return;
    // 0x808002D8: nop

;}
RECOMP_FUNC void batimer_set(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002DC: lw          $t6, 0x13C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X13C);
    // 0x808002E0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x808002E4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x808002E8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x808002EC: swc1        $f12, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f12.u32l;
    // 0x808002F0: lw          $t8, 0x13C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X13C);
    // 0x808002F4: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x808002F8: jr          $ra
    // 0x808002FC: swc1        $f12, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f12.u32l;
    return;
    // 0x808002FC: swc1        $f12, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f12.u32l;
;}
RECOMP_FUNC void batranslate_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_80800008_batranslate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800018: jal         0x80092B04
    // 0x8080001C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092B04(rdram, ctx);
        goto after_0;
    // 0x8080001C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800020: jal         0x800B27E0
    // 0x80800024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B27E0(rdram, ctx);
        goto after_1;
    // 0x80800024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800028: jal         0x80087A10
    // 0x8080002C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _dbskeleton_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x8080002C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800030: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800034: jal         0x800EF334
    // 0x80800038: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EF334(rdram, ctx);
        goto after_3;
    // 0x80800038: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8080003C: jal         0x8009C984
    // 0x80800040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x80800040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x80800044: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800048: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080004C: jal         0x800EF934
    // 0x80800050: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800EF934(rdram, ctx);
        goto after_5;
    // 0x80800050: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_5:
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void batranslate_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: jr          $ra
    // 0x80800068: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800068: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void batranslate_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080006C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800074: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800078: lw          $a0, 0x140($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X140);
    // 0x8080007C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80800080: jal         0x800EFD24
    // 0x80800084: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x80800084: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x80800088: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8080008C: lw          $a0, 0x140($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X140);
    // 0x80800090: jal         0x800EFD24
    // 0x80800094: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80800094: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x80800098: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000A0: lw          $t6, 0x140($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X140);
    // 0x808000A4: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x808000A8: lw          $t7, 0x140($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X140);
    // 0x808000AC: jal         0x800000C4
    // 0x808000B0: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    batranslate_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808000B0: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    after_2:
    // 0x808000B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000BC: jr          $ra
    // 0x808000C0: nop

    return;
    // 0x808000C0: nop

;}
RECOMP_FUNC void batranslate_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000D8: beq         $a1, $at, L_808000F4
    if (ctx->r5 == ctx->r1) {
        // 0x808000DC: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_808000F4;
    }
    // 0x808000DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808000E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000E4: beql        $a1, $at, L_8080011C
    if (ctx->r5 == ctx->r1) {
        // 0x808000E8: lw          $a0, 0x140($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X140);
            goto L_8080011C;
    }
    goto skip_0;
    // 0x808000E8: lw          $a0, 0x140($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X140);
    skip_0:
    // 0x808000EC: b           L_80800144
    // 0x808000F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_80800144;
    // 0x808000F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_808000F4:
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F8: jal         0x8008C9E4
    // 0x808000FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008C9E4(rdram, ctx);
        goto after_0;
    // 0x808000FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80800108: jal         0x8009ADF0
    // 0x8080010C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x8080010C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80800110: b           L_80800144
    // 0x80800114: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_80800144;
    // 0x80800114: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80800118: lw          $a0, 0x140($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X140);
L_8080011C:
    // 0x8080011C: jal         0x800EFD24
    // 0x80800120: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x80800120: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_2:
    // 0x80800124: lw          $t8, 0x140($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X140);
    // 0x80800128: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80800134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800138: jal         0x8009ADF0
    // 0x8080013C: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    func_8009ADF0(rdram, ctx);
        goto after_3;
    // 0x8080013C: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    after_3:
    // 0x80800140: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_80800144:
    // 0x80800144: lw          $t0, 0x140($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X140);
    // 0x80800148: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8080014C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800150: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800158: jr          $ra
    // 0x8080015C: nop

    return;
    // 0x8080015C: nop

;}
RECOMP_FUNC void batranslate_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800168: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080016C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x80800170: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800174: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800178: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8080017C: bnel        $t6, $at, L_80800208
    if (ctx->r14 != ctx->r1) {
        // 0x80800180: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800208;
    }
    goto skip_0;
    // 0x80800180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800184: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80800188: beq         $v1, $zero, L_808001AC
    if (ctx->r3 == 0) {
        // 0x8080018C: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_808001AC;
    }
    // 0x8080018C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80800190: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80800194: lw          $t8, 0x140($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X140);
    // 0x80800198: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8080019C: bnel        $t9, $zero, L_80800208
    if (ctx->r25 != 0) {
        // 0x808001A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800208;
    }
    goto skip_1;
    // 0x808001A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x808001A4: jal         0x8008C9E4
    // 0x808001A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008C9E4(rdram, ctx);
        goto after_0;
    // 0x808001A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_808001AC:
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: jal         0x8009C128
    // 0x808001B4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808001B4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x808001B8: lw          $a1, 0x140($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X140);
    // 0x808001BC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808001C0: jal         0x800EF3DC
    // 0x808001C4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800EF3DC(rdram, ctx);
        goto after_2;
    // 0x808001C4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_2:
    // 0x808001C8: lw          $a1, 0x140($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X140);
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: jal         0x8008C958
    // 0x808001D4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_8008C958(rdram, ctx);
        goto after_3;
    // 0x808001D4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_3:
    // 0x808001D8: lw          $a1, 0x140($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X140);
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: jal         0x80000008
    // 0x808001E4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80800008_batranslate(rdram, ctx);
        goto after_4;
    // 0x808001E4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_4:
    // 0x808001E8: lw          $a1, 0x140($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X140);
    // 0x808001EC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808001F0: jal         0x800EF04C
    // 0x808001F4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x808001F4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_5:
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: jal         0x8009C0F8
    // 0x80800200: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C0F8(rdram, ctx);
        goto after_6;
    // 0x80800200: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_6:
    // 0x80800204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800208:
    // 0x80800208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080020C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800210: jr          $ra
    // 0x80800214: nop

    return;
    // 0x80800214: nop

    // 0x80800218: nop

    // 0x8080021C: nop

;}
RECOMP_FUNC void bavan_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void bavan_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800014: addiu       $a1, $zero, 0x505
    ctx->r5 = ADD32(0, 0X505);
    // 0x80800018: jal         0x8009DE38
    // 0x8080001C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_0;
    // 0x8080001C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x80800020: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800024: jal         0x8009C128
    // 0x80800028: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800028: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8080002C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80800030: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80800034: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80800038: jal         0x801013A8
    // 0x8080003C: lw          $a2, 0x184($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X184);
    func_801013A8(rdram, ctx);
        goto after_2;
    // 0x8080003C: lw          $a2, 0x184($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X184);
    after_2:
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800044: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800048: jr          $ra
    // 0x8080004C: nop

    return;
    // 0x8080004C: nop

;}
RECOMP_FUNC void bavan_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080005C: lw          $t7, 0x144($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X144);
    // 0x80800060: jal         0x800C2FDC
    // 0x80800064: lbu         $a0, 0x10($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X10);
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800064: lbu         $a0, 0x10($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X10);
    after_0:
    // 0x80800068: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8080006C: lw          $t9, 0x144($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X144);
    // 0x80800070: sb          $zero, 0x10($t9)
    MEM_B(0X10, ctx->r25) = 0;
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080007C: jr          $ra
    // 0x80800080: nop

    return;
    // 0x80800080: nop

;}
RECOMP_FUNC void bavan_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800088: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080008C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800090: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800094: lw          $t6, 0x144($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X144);
    // 0x80800098: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(58, 0X2F0) << 16);
    // 0x8080009C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000A0: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x808000A4: lw          $t7, 0x144($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X144);
    // 0x808000A8: addiu       $a2, $a2, 0x2F0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(58, 0X2F0));
    // 0x808000AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000B0: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x808000B4: lw          $t8, 0x144($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X144);
    // 0x808000B8: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x808000BC: lw          $t9, 0x144($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X144);
    // 0x808000C0: jal         0x8009D454
    // 0x808000C4: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
    func_8009D454(rdram, ctx);
        goto after_0;
    // 0x808000C4: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
    after_0:
    // 0x808000C8: lw          $t0, 0x144($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X144);
    // 0x808000CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808000D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000D4: sb          $v0, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r2;
    // 0x808000D8: lw          $t1, 0x144($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X144);
    // 0x808000DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000E0: swc1        $f4, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f4.u32l;
    // 0x808000E4: lw          $t2, 0x144($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X144);
    // 0x808000E8: jal         0x800C368C
    // 0x808000EC: lbu         $a0, 0x10($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X10);
    func_800C368C(rdram, ctx);
        goto after_1;
    // 0x808000EC: lbu         $a0, 0x10($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X10);
    after_1:
    // 0x808000F0: lw          $t3, 0x144($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X144);
    // 0x808000F4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x808000F8: jal         0x800C334C
    // 0x808000FC: lbu         $a0, 0x10($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X10);
    func_800C334C(rdram, ctx);
        goto after_2;
    // 0x808000FC: lbu         $a0, 0x10($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X10);
    after_2:
    // 0x80800100: lw          $t4, 0x144($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X144);
    // 0x80800104: jal         0x800C3BDC
    // 0x80800108: lbu         $a0, 0x10($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X10);
    func_800C3BDC(rdram, ctx);
        goto after_3;
    // 0x80800108: lbu         $a0, 0x10($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X10);
    after_3:
    // 0x8080010C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void bavan_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800124: lw          $t6, 0x144($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X144);
    // 0x80800128: jr          $ra
    // 0x8080012C: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8080012C: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bavan_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800134: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080013C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800140: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800144: jal         0x800F0DC0
    // 0x80800148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F0DC0(rdram, ctx);
        goto after_0;
    // 0x80800148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080014C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800150: lw          $t7, 0x144($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X144);
    // 0x80800154: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80800158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

;}
RECOMP_FUNC void bavan_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080016C: lw          $t6, 0x144($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X144);
    // 0x80800170: jr          $ra
    // 0x80800174: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800174: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bavan_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800178: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080017C: lw          $t6, 0x144($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X144);
    // 0x80800180: jr          $ra
    // 0x80800184: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800184: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bavan_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800188: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8080018C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800190: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80800194: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800198: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8080019C: jal         0x800D8FF8
    // 0x808001A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808001A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x808001A4: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x808001A8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x808001AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808001B0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x808001B4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x808001B8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808001BC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x808001C0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x808001C4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x808001C8: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x808001CC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x808001D0: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808001D4: jal         0x800F15F8
    // 0x808001D8: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    func_800F15F8(rdram, ctx);
        goto after_1;
    // 0x808001D8: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x808001DC: lw          $t6, 0x144($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X144);
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x80092AD8
    // 0x808001E8: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    func_80092AD8(rdram, ctx);
        goto after_2;
    // 0x808001E8: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    after_2:
    // 0x808001EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808001F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001F4: jal         0x800E0AF0
    // 0x808001F8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_3;
    // 0x808001F8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x808001FC: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x80800200: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800208: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8080020C: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80800210: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80800214: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800218: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8080021C: jal         0x800E0AFC
    // 0x80800220: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_4;
    // 0x80800220: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80800224: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x80800228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080022C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x80800230: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800234: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80800238: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8080023C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800240: jal         0x800E0AFC
    // 0x80800244: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_5;
    // 0x80800244: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80800248: lw          $t7, 0x144($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X144);
    // 0x8080024C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800250: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80800254: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80800258: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8080025C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800260: jal         0x800E0AFC
    // 0x80800264: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800E0AFC(rdram, ctx);
        goto after_6;
    // 0x80800264: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x80800268: lw          $t8, 0x144($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X144);
    // 0x8080026C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800270: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x80800274: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x80800278: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8080027C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800280: jal         0x800E0AFC
    // 0x80800284: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800E0AFC(rdram, ctx);
        goto after_7;
    // 0x80800284: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: jal         0x8009C128
    // 0x80800290: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009C128(rdram, ctx);
        goto after_8;
    // 0x80800290: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_8:
    // 0x80800294: lw          $t9, 0x144($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X144);
    // 0x80800298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080029C: jal         0x800C368C
    // 0x808002A0: lbu         $a0, 0x10($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X10);
    func_800C368C(rdram, ctx);
        goto after_9;
    // 0x808002A0: lbu         $a0, 0x10($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X10);
    after_9:
    // 0x808002A4: lw          $t0, 0x144($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X144);
    // 0x808002A8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x808002AC: jal         0x800C334C
    // 0x808002B0: lbu         $a0, 0x10($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X10);
    func_800C334C(rdram, ctx);
        goto after_10;
    // 0x808002B0: lbu         $a0, 0x10($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X10);
    after_10:
    // 0x808002B4: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x808002B8: lbu         $a0, 0x10($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X10);
    // 0x808002BC: jal         0x800C31DC
    // 0x808002C0: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    func_800C31DC(rdram, ctx);
        goto after_11;
    // 0x808002C0: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    after_11:
    // 0x808002C4: lw          $t1, 0x144($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X144);
    // 0x808002C8: jal         0x800C3BDC
    // 0x808002CC: lbu         $a0, 0x10($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X10);
    func_800C3BDC(rdram, ctx);
        goto after_12;
    // 0x808002CC: lbu         $a0, 0x10($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X10);
    after_12:
    // 0x808002D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808002D4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808002D8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x808002DC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x808002E0: jr          $ra
    // 0x808002E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x808002E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808002E8: nop

    // 0x808002EC: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
;}
RECOMP_FUNC void bawandglow_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x800F53E4
    // 0x80800018: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F53E4(rdram, ctx);
        goto after_0;
    // 0x80800018: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8080001C: beql        $v0, $zero, L_80800030
    if (ctx->r2 == 0) {
        // 0x80800020: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800030;
    }
    goto skip_0;
    // 0x80800020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800024: lw          $t6, 0x148($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X148);
    // 0x80800028: sw          $zero, 0xC($t6)
    MEM_W(0XC, ctx->r14) = 0;
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800030:
    // 0x80800030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800034: jr          $ra
    // 0x80800038: nop

    return;
    // 0x80800038: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800044: jal         0x800F53D0
    // 0x80800048: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80800048: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080004C: lw          $t6, 0x148($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X148);
    // 0x80800050: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800054: addiu       $a1, $a1, 0x53B8
    ctx->r5 = ADD32(ctx->r5, 0X53B8);
    // 0x80800058: lbu         $t7, 0x10($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X10);
    // 0x8080005C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800060: beql        $t7, $zero, L_80800080
    if (ctx->r15 == 0) {
        // 0x80800064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800080;
    }
    goto skip_0;
    // 0x80800064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800068: jal         0x800872F0
    // 0x8080006C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _chwandglow_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080006C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800070: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800074: lw          $t8, 0x148($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X148);
    // 0x80800078: sw          $v0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r2;
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800080:
    // 0x80800080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800084: jr          $ra
    // 0x80800088: nop

    return;
    // 0x80800088: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800094: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800098: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080009C: lw          $a1, 0x148($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X148);
    // 0x808000A0: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x808000A4: beql        $a2, $zero, L_808000C0
    if (ctx->r6 == 0) {
        // 0x808000A8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808000C0;
    }
    goto skip_0;
    // 0x808000A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x808000AC: jal         0x8008F880
    // 0x808000B0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8008F880(rdram, ctx);
        goto after_0;
    // 0x808000B0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x808000B4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x808000B8: lw          $a1, 0x148($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X148);
    // 0x808000BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_808000C0:
    // 0x808000C0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808000C4: jal         0x8008EEC4
    // 0x808000C8: addiu       $a3, $zero, 0x27D
    ctx->r7 = ADD32(0, 0X27D);
    func_8008EEC4(rdram, ctx);
        goto after_1;
    // 0x808000C8: addiu       $a3, $zero, 0x27D
    ctx->r7 = ADD32(0, 0X27D);
    after_1:
    // 0x808000CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D4: jr          $ra
    // 0x808000D8: nop

    return;
    // 0x808000D8: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E4: lw          $t7, 0x148($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X148);
    // 0x808000E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808000EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808000F0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x808000F4: sb          $t6, 0x10($t7)
    MEM_B(0X10, ctx->r15) = ctx->r14;
    // 0x808000F8: lw          $a1, 0x184($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X184);
    // 0x808000FC: jal         0x80086D30
    // 0x80800100: addiu       $a0, $a0, 0x53C0
    ctx->r4 = ADD32(ctx->r4, 0X53C0);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800100: addiu       $a0, $a0, 0x53C0
    ctx->r4 = ADD32(ctx->r4, 0X53C0);
    after_0:
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080011C: lw          $v0, 0x148($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X148);
    // 0x80800120: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80800124: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x80800128: beq         $a2, $zero, L_80800140
    if (ctx->r6 == 0) {
        // 0x8080012C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80800140;
    }
    // 0x8080012C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80800130: jal         0x800872F8
    // 0x80800134: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    _chwandglow_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800134: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800138: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8080013C: lw          $v0, 0x148($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X148);
L_80800140:
    // 0x80800140: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x80800144: lw          $t6, 0x148($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X148);
    // 0x80800148: sw          $zero, 0xC($t6)
    MEM_W(0XC, ctx->r14) = 0;
    // 0x8080014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800154: jr          $ra
    // 0x80800158: nop

    return;
    // 0x80800158: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080015C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800164: lw          $t6, 0x148($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X148);
    // 0x80800168: sb          $zero, 0x10($t6)
    MEM_B(0X10, ctx->r14) = 0;
    // 0x8080016C: lw          $t7, 0x148($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X148);
    // 0x80800170: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    // 0x80800174: jal         0x800EFD24
    // 0x80800178: lw          $a0, 0x148($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X148);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x80800178: lw          $a0, 0x148($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X148);
    after_0:
    // 0x8080017C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800184: jr          $ra
    // 0x80800188: nop

    return;
    // 0x80800188: nop

;}
RECOMP_FUNC void bawandglow_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800194: lw          $t6, 0x148($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X148);
    // 0x80800198: lw          $a1, 0xC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XC);
    // 0x8080019C: beql        $a1, $zero, L_808001B0
    if (ctx->r5 == 0) {
        // 0x808001A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808001B0;
    }
    goto skip_0;
    // 0x808001A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808001A4: jal         0x80087300
    // 0x808001A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    _chwandglow_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808001A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x808001AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001B0:
    // 0x808001B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001B4: jr          $ra
    // 0x808001B8: nop

    return;
    // 0x808001B8: nop

    // 0x808001BC: nop

;}
RECOMP_FUNC void bawasher_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
;}
RECOMP_FUNC void bawasher_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: jr          $ra
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bawasher_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800010: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800014: lw          $t6, 0x14C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14C);
    // 0x80800018: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8080001C: lw          $t7, 0x14C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14C);
    // 0x80800020: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80800024: lw          $t8, 0x14C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14C);
    // 0x80800028: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x8080002C: lw          $t9, 0x14C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14C);
    // 0x80800030: jr          $ra
    // 0x80800034: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
    return;
    // 0x80800034: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
;}
RECOMP_FUNC void bawasher_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080003C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800044: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800048: jal         0x80092CDC
    // 0x8080004C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80092CDC(rdram, ctx);
        goto after_0;
    // 0x8080004C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x80800050: bne         $v0, $zero, L_80800060
    if (ctx->r2 != 0) {
        // 0x80800054: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800060;
    }
    // 0x80800054: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800058: jal         0x8009C128
    // 0x8080005C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x8080005C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
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
RECOMP_FUNC void bawasher_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800074: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080007C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800080: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800084: jal         0x800F0DC0
    // 0x80800088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F0DC0(rdram, ctx);
        goto after_0;
    // 0x80800088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080008C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: lw          $t7, 0x14C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14C);
    // 0x80800094: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080009C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A0: jr          $ra
    // 0x808000A4: nop

    return;
    // 0x808000A4: nop

;}
